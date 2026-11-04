#include "lift_runtime.h"
uint64_t b_1803f2000(CPU*s){
/* 1803f2000: cmp qword ptr [rcx + 0x10], 0 */
L_1803f2000_0:;
L_1803f2000_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803f2000_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2000_3:;
wr(s->u,26,8,rd(s->u,8,8));
L_1803f2000_4:;
wr(s->r,512,1,(rd(s->u,26,8)<((U)UINT64_C(0x0))));
L_1803f2000_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,8),((U)UINT64_C(0x0)),8,1));
L_1803f2000_6:;
wr(s->u,34,8,(rd(s->u,26,8)-((U)UINT64_C(0x0))));
L_1803f2000_7:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2000_8:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803f2000_9:;
wr(s->u,16,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803f2000_10:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f2000_11:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f2000_12:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f2000_13:;
/* 1803f2005: mov r9, rdx */
L_1803f2005_0:;
L_1803f2005_1:;
wr(s->r,136,8,rd(s->r,16,8));
L_1803f2005_2:;
/* 1803f2008: mov r8, rcx */
L_1803f2008_0:;
L_1803f2008_1:;
wr(s->r,128,8,rd(s->r,8,8));
L_1803f2008_2:;
/* 1803f200b: je 0x1803f2044 */
L_1803f200b_0:;
L_1803f200b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f2044);}
L_1803f200b_2:;
return UINT64_C(0x1803f200d);
}
uint64_t b_1803f200d(CPU*s){
/* 1803f200d: xor edx, edx */
L_1803f200d_0:;
L_1803f200d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f200d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f200d_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803f200d_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f200d_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f200d_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803f200d_7:;
wr(s->u,14,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803f200d_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803f200d_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803f200d_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803f200d_11:;
/* 1803f200f: cmp dword ptr [rcx + 8], edx */
L_1803f200f_0:;
L_1803f200f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803f200f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f200f_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803f200f_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,16,4)));
L_1803f200f_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,16,4),4,1));
L_1803f200f_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,16,4)));
L_1803f200f_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f200f_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803f200f_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803f200f_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803f200f_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803f200f_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803f200f_13:;
/* 1803f2012: jle 0x1803f2044 */
L_1803f2012_0:;
L_1803f2012_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803f2012_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803f2012_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803f2044);}
L_1803f2012_4:;
return UINT64_C(0x1803f2014);
}
uint64_t b_1803f2014(CPU*s){
/* 1803f2014: mov rcx, rdx */
L_1803f2014_0:;
L_1803f2014_1:;
wr(s->r,8,8,rd(s->r,16,8));
L_1803f2014_2:;
/* 1803f2017: nop word ptr [rax + rax] */
L_1803f2017_0:;
L_1803f2017_1:;
wr(s->u,32,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f2017_2:;
wr(s->u,40,8,(rd(s->r,0,8)+rd(s->u,32,8)));
L_1803f2017_3:;
/* 1803f2020: mov rax, qword ptr [r8 + 0x10] */
L_1803f2020_0:;
L_1803f2020_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x10))));
L_1803f2020_2:;
wr(s->u,52,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2020_3:;
wr(s->r,0,8,rd(s->u,52,8));
L_1803f2020_4:;
/* 1803f2024: inc edx */
L_1803f2024_0:;
L_1803f2024_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803f2024_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803f2024_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f2024_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2024_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803f2024_6:;
wr(s->u,61,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803f2024_7:;
wr(s->u,69,1,pop(rd(s->u,61,4),4));
L_1803f2024_8:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803f2024_9:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803f2024_10:;
/* 1803f2026: add rcx, 4 */
L_1803f2026_0:;
L_1803f2026_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803f2026_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,0));
L_1803f2026_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803f2026_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2026_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803f2026_6:;
wr(s->u,61,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803f2026_7:;
wr(s->u,69,1,pop(rd(s->u,61,8),8));
L_1803f2026_8:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803f2026_9:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803f2026_10:;
/* 1803f202a: movss xmm0, dword ptr [rcx + rax - 4] */
L_1803f202a_0:;
L_1803f202a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803f202a_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f202a_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803f202a_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803f202a_5:;
wr(s->r,4608,4,rd(s->u,48,4));
L_1803f202a_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803f202a_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803f202a_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803f202a_9:;
/* 1803f2030: mulss xmm0, dword ptr [rcx + r9 - 4] */
L_1803f2030_0:;
L_1803f2030_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803f2030_2:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803f2030_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803f2030_4:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803f2030_5:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,48,4),4),4));
L_1803f2030_6:;
/* 1803f2037: movss dword ptr [rcx + r9 - 4], xmm0 */
L_1803f2037_0:;
L_1803f2037_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803f2037_2:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803f2037_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803f2037_4:;
wr(s->u,48,4,rd(s->r,4608,4));
L_1803f2037_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,48,4));
L_1803f2037_6:;
/* 1803f203e: cmp edx, dword ptr [r8 + 8] */
L_1803f203e_0:;
L_1803f203e_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803f203e_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f203e_3:;
wr(s->u,71,4,rd(s->u,48,4));
L_1803f203e_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,71,4)));
L_1803f203e_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,71,4),4,1));
L_1803f203e_6:;
wr(s->u,75,4,(rd(s->r,16,4)-rd(s->u,71,4)));
L_1803f203e_7:;
wr(s->r,519,1,(sx(rd(s->u,75,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f203e_8:;
wr(s->r,518,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803f203e_9:;
wr(s->u,61,4,(rd(s->u,75,4)&((U)UINT64_C(0xff))));
L_1803f203e_10:;
wr(s->u,69,1,pop(rd(s->u,61,4),4));
L_1803f203e_11:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803f203e_12:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803f203e_13:;
/* 1803f2042: jl 0x1803f2020 */
L_1803f2042_0:;
L_1803f2042_1:;
wr(s->u,60,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803f2042_2:;
if(rd(s->u,60,1)){goto L_1803f2020_0;}
L_1803f2042_3:;
return UINT64_C(0x1803f2044);
}
uint64_t b_1803f2020(CPU*s){
/* 1803f2020: mov rax, qword ptr [r8 + 0x10] */
L_1803f2020_0:;
L_1803f2020_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x10))));
L_1803f2020_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2020_3:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803f2020_4:;
/* 1803f2024: inc edx */
L_1803f2024_0:;
L_1803f2024_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803f2024_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803f2024_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f2024_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2024_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803f2024_6:;
wr(s->u,45,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803f2024_7:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803f2024_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803f2024_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803f2024_10:;
/* 1803f2026: add rcx, 4 */
L_1803f2026_0:;
L_1803f2026_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803f2026_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,0));
L_1803f2026_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803f2026_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2026_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803f2026_6:;
wr(s->u,45,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803f2026_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803f2026_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803f2026_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803f2026_10:;
/* 1803f202a: movss xmm0, dword ptr [rcx + rax - 4] */
L_1803f202a_0:;
L_1803f202a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803f202a_2:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f202a_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803f202a_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803f202a_5:;
wr(s->r,4608,4,rd(s->u,32,4));
L_1803f202a_6:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803f202a_7:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803f202a_8:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803f202a_9:;
/* 1803f2030: mulss xmm0, dword ptr [rcx + r9 - 4] */
L_1803f2030_0:;
L_1803f2030_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803f2030_2:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803f2030_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803f2030_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803f2030_5:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803f2030_6:;
/* 1803f2037: movss dword ptr [rcx + r9 - 4], xmm0 */
L_1803f2037_0:;
L_1803f2037_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803f2037_2:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x1))));
L_1803f2037_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803f2037_4:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803f2037_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803f2037_6:;
/* 1803f203e: cmp edx, dword ptr [r8 + 8] */
L_1803f203e_0:;
L_1803f203e_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803f203e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f203e_3:;
wr(s->u,55,4,rd(s->u,32,4));
L_1803f203e_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,55,4)));
L_1803f203e_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,55,4),4,1));
L_1803f203e_6:;
wr(s->u,59,4,(rd(s->r,16,4)-rd(s->u,55,4)));
L_1803f203e_7:;
wr(s->r,519,1,(sx(rd(s->u,59,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f203e_8:;
wr(s->r,518,1,(rd(s->u,59,4)==((U)UINT64_C(0x0))));
L_1803f203e_9:;
wr(s->u,45,4,(rd(s->u,59,4)&((U)UINT64_C(0xff))));
L_1803f203e_10:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803f203e_11:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803f203e_12:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803f203e_13:;
/* 1803f2042: jl 0x1803f2020 */
L_1803f2042_0:;
L_1803f2042_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803f2042_2:;
if(rd(s->u,44,1)){goto L_1803f2020_0;}
L_1803f2042_3:;
return UINT64_C(0x1803f2044);
}
uint64_t b_1803f2044(CPU*s){
/* 1803f2044: xor eax, eax */
L_1803f2044_0:;
L_1803f2044_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f2044_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2044_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803f2044_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f2044_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2044_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803f2044_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803f2044_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803f2044_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803f2044_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803f2044_11:;
/* 1803f2046: ret  */
L_1803f2046_0:;
L_1803f2046_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2046_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2046_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f2046_4:;
return UINT64_C(0x1803f2047);
}
uint64_t b_1803f2050(CPU*s){
/* 1803f2050: mov qword ptr [rsp + 8], rbx */
L_1803f2050_0:;
L_1803f2050_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803f2050_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803f2050_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803f2050_4:;
/* 1803f2055: push rdi */
L_1803f2055_0:;
L_1803f2055_1:;
wr(s->u,32,8,rd(s->r,56,8));
L_1803f2055_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2055_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,32,8));
L_1803f2055_4:;
/* 1803f2056: sub rsp, 0x20 */
L_1803f2056_0:;
L_1803f2056_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803f2056_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803f2056_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803f2056_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2056_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2056_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2056_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803f2056_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803f2056_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803f2056_10:;
/* 1803f205a: lea rax, [rip + 0x41b4d7] */
L_1803f205a_0:;
L_1803f205a_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d538)));
L_1803f205a_2:;
/* 1803f2061: mov rbx, rcx */
L_1803f2061_0:;
L_1803f2061_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803f2061_2:;
/* 1803f2064: mov edi, edx */
L_1803f2064_0:;
L_1803f2064_1:;
wr(s->r,56,4,rd(s->r,16,4));
L_1803f2064_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803f2064_3:;
/* 1803f2066: mov qword ptr [rcx], rax */
L_1803f2066_0:;
L_1803f2066_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803f2066_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1803f2066_3:;
/* 1803f2069: mov rcx, qword ptr [rcx + 0x18] */
L_1803f2069_0:;
L_1803f2069_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803f2069_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2069_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803f2069_4:;
/* 1803f206d: test rcx, rcx */
L_1803f206d_0:;
L_1803f206d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f206d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f206d_3:;
wr(s->u,50,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803f206d_4:;
wr(s->r,519,1,(sx(rd(s->u,50,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f206d_5:;
wr(s->r,518,1,(rd(s->u,50,8)==((U)UINT64_C(0x0))));
L_1803f206d_6:;
wr(s->u,40,8,(rd(s->u,50,8)&((U)UINT64_C(0xff))));
L_1803f206d_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803f206d_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803f206d_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803f206d_10:;
/* 1803f2070: je 0x1803f2077 */
L_1803f2070_0:;
L_1803f2070_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f2077);}
L_1803f2070_2:;
return UINT64_C(0x1803f2072);
}
uint64_t b_1803f2072(CPU*s){
/* 1803f2072: call 0x18000dffe */
L_1803f2072_0:;
L_1803f2072_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2072_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2077)));
L_1803f2072_3:;
return (uint64_t)UINT64_C(0x18000dffe);
L_1803f2072_4:;
return UINT64_C(0x1803f2077);
}
uint64_t b_1803f2077(CPU*s){
/* 1803f2077: mov rcx, qword ptr [rbx + 0x20] */
L_1803f2077_0:;
L_1803f2077_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803f2077_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2077_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803f2077_4:;
/* 1803f207b: test rcx, rcx */
L_1803f207b_0:;
L_1803f207b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f207b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f207b_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803f207b_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f207b_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803f207b_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803f207b_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f207b_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f207b_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f207b_10:;
/* 1803f207e: je 0x1803f2085 */
L_1803f207e_0:;
L_1803f207e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f2085);}
L_1803f207e_2:;
return UINT64_C(0x1803f2080);
}
uint64_t b_1803f2080(CPU*s){
/* 1803f2080: call 0x18000dffe */
L_1803f2080_0:;
L_1803f2080_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2080_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2085)));
L_1803f2080_3:;
return (uint64_t)UINT64_C(0x18000dffe);
L_1803f2080_4:;
return UINT64_C(0x1803f2085);
}
uint64_t b_1803f2085(CPU*s){
/* 1803f2085: mov rcx, qword ptr [rbx + 0x10] */
L_1803f2085_0:;
L_1803f2085_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803f2085_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2085_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803f2085_4:;
/* 1803f2089: test rcx, rcx */
L_1803f2089_0:;
L_1803f2089_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f2089_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2089_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803f2089_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2089_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803f2089_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803f2089_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f2089_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f2089_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f2089_10:;
/* 1803f208c: je 0x1803f2093 */
L_1803f208c_0:;
L_1803f208c_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f2093);}
L_1803f208c_2:;
return UINT64_C(0x1803f208e);
}
uint64_t b_1803f208e(CPU*s){
/* 1803f208e: call 0x18000dffe */
L_1803f208e_0:;
L_1803f208e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f208e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2093)));
L_1803f208e_3:;
return (uint64_t)UINT64_C(0x18000dffe);
L_1803f208e_4:;
return UINT64_C(0x1803f2093);
}
uint64_t b_1803f2093(CPU*s){
/* 1803f2093: test dil, 1 */
L_1803f2093_0:;
L_1803f2093_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f2093_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2093_3:;
wr(s->u,3,1,(rd(s->r,56,1)&((U)UINT64_C(0x1))));
L_1803f2093_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803f2093_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803f2093_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_1803f2093_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_1803f2093_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_1803f2093_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_1803f2093_10:;
/* 1803f2097: je 0x1803f20a1 */
L_1803f2097_0:;
L_1803f2097_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f20a1);}
L_1803f2097_2:;
return UINT64_C(0x1803f2099);
}
uint64_t b_1803f2099(CPU*s){
/* 1803f2099: mov rcx, rbx */
L_1803f2099_0:;
L_1803f2099_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803f2099_2:;
/* 1803f209c: call 0x180003160 */
L_1803f209c_0:;
L_1803f209c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f209c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f20a1)));
L_1803f209c_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803f209c_4:;
return UINT64_C(0x1803f20a1);
}
uint64_t b_1803f20a1(CPU*s){
/* 1803f20a1: mov rax, rbx */
L_1803f20a1_0:;
L_1803f20a1_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803f20a1_2:;
/* 1803f20a4: mov rbx, qword ptr [rsp + 0x30] */
L_1803f20a4_0:;
L_1803f20a4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f20a4_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f20a4_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803f20a4_4:;
/* 1803f20a9: add rsp, 0x20 */
L_1803f20a9_0:;
L_1803f20a9_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f20a9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803f20a9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803f20a9_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f20a9_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f20a9_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f20a9_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f20a9_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f20a9_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f20a9_10:;
/* 1803f20ad: pop rdi */
L_1803f20ad_0:;
L_1803f20ad_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f20ad_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f20ad_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f20ad_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803f20ad_5:;
/* 1803f20ae: ret  */
L_1803f20ae_0:;
L_1803f20ae_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f20ae_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f20ae_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f20ae_4:;
return UINT64_C(0x1803f20af);
}
uint64_t b_1803f20b0(CPU*s){
/* 1803f20b0: push rsi */
L_1803f20b0_0:;
L_1803f20b0_1:;
wr(s->u,21,8,rd(s->r,48,8));
L_1803f20b0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f20b0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,21,8));
L_1803f20b0_4:;
/* 1803f20b2: push rdi */
L_1803f20b2_0:;
L_1803f20b2_1:;
wr(s->u,21,8,rd(s->r,56,8));
L_1803f20b2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f20b2_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,21,8));
L_1803f20b2_4:;
/* 1803f20b3: push r12 */
L_1803f20b3_0:;
L_1803f20b3_1:;
wr(s->u,21,8,rd(s->r,160,8));
L_1803f20b3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f20b3_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,21,8));
L_1803f20b3_4:;
/* 1803f20b5: sub rsp, 0x40 */
L_1803f20b5_0:;
L_1803f20b5_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x40))));
L_1803f20b5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,1));
L_1803f20b5_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x40))));
L_1803f20b5_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f20b5_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f20b5_6:;
wr(s->u,29,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f20b5_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803f20b5_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803f20b5_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803f20b5_10:;
/* 1803f20b9: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803f20b9_0:;
L_1803f20b9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f20b9_2:;
wr(s->u,12,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803f20b9_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803f20b9_4:;
/* 1803f20c2: mov qword ptr [rsp + 0x68], rbx */
L_1803f20c2_0:;
L_1803f20c2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803f20c2_2:;
wr(s->u,12,8,rd(s->r,24,8));
L_1803f20c2_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803f20c2_4:;
/* 1803f20c7: mov qword ptr [rsp + 0x70], rbp */
L_1803f20c7_0:;
L_1803f20c7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803f20c7_2:;
wr(s->u,12,8,rd(s->r,40,8));
L_1803f20c7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803f20c7_4:;
/* 1803f20cc: mov r12d, r8d */
L_1803f20cc_0:;
L_1803f20cc_1:;
wr(s->r,160,4,rd(s->r,128,4));
L_1803f20cc_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803f20cc_3:;
/* 1803f20cf: mov ebp, edx */
L_1803f20cf_0:;
L_1803f20cf_1:;
wr(s->r,40,4,rd(s->r,16,4));
L_1803f20cf_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803f20cf_3:;
/* 1803f20d1: mov rsi, rcx */
L_1803f20d1_0:;
L_1803f20d1_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803f20d1_2:;
/* 1803f20d4: xor edi, edi */
L_1803f20d4_0:;
L_1803f20d4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f20d4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f20d4_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803f20d4_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803f20d4_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f20d4_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803f20d4_7:;
wr(s->u,29,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803f20d4_8:;
wr(s->u,37,1,pop(rd(s->u,29,4),4));
L_1803f20d4_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803f20d4_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803f20d4_11:;
/* 1803f20d6: mov dword ptr [rsp + 0x34], edi */
L_1803f20d6_0:;
L_1803f20d6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x34))+rd(s->r,32,8)));
L_1803f20d6_2:;
wr(s->u,8,4,rd(s->r,56,4));
L_1803f20d6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803f20d6_4:;
/* 1803f20da: mov eax, 1 */
L_1803f20da_0:;
L_1803f20da_1:;
wr(s->r,0,8,((U)UINT64_C(0x1)));
L_1803f20da_2:;
/* 1803f20df: cpuid  */
L_1803f20df_0:;
L_1803f20df_1:;
wr(s->u,51,8,((U)UINT64_C(0x0)));
L_1803f20df_2:;
wr(s->u,59,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803f20df_3:;
if(rd(s->u,59,1)){goto L_1803f20df_36;}
L_1803f20df_4:;
wr(s->u,60,1,(rd(s->r,0,4)==((U)UINT64_C(0x1))));
L_1803f20df_5:;
if(rd(s->u,60,1)){goto L_1803f20df_38;}
L_1803f20df_6:;
wr(s->u,61,1,(rd(s->r,0,4)==((U)UINT64_C(0x2))));
L_1803f20df_7:;
if(rd(s->u,61,1)){goto L_1803f20df_40;}
L_1803f20df_8:;
wr(s->u,62,1,(rd(s->r,0,4)==((U)UINT64_C(0x3))));
L_1803f20df_9:;
if(rd(s->u,62,1)){goto L_1803f20df_42;}
L_1803f20df_10:;
wr(s->u,63,1,(rd(s->r,0,4)==((U)UINT64_C(0x4))));
L_1803f20df_11:;
if(rd(s->u,63,1)){goto L_1803f20df_44;}
L_1803f20df_12:;
wr(s->u,64,1,(rd(s->r,0,4)==((U)UINT64_C(0x5))));
L_1803f20df_13:;
if(rd(s->u,64,1)){goto L_1803f20df_46;}
L_1803f20df_14:;
wr(s->u,65,1,(rd(s->r,0,4)==((U)UINT64_C(0x6))));
L_1803f20df_15:;
if(rd(s->u,65,1)){goto L_1803f20df_48;}
L_1803f20df_16:;
wr(s->u,66,1,(rd(s->r,0,4)==((U)UINT64_C(0x7))));
L_1803f20df_17:;
if(rd(s->u,66,1)){goto L_1803f20df_50;}
L_1803f20df_18:;
wr(s->u,67,1,(rd(s->r,0,4)==((U)UINT64_C(0x9))));
L_1803f20df_19:;
if(rd(s->u,67,1)){goto L_1803f20df_52;}
L_1803f20df_20:;
wr(s->u,68,1,(rd(s->r,0,4)==((U)UINT64_C(0xa))));
L_1803f20df_21:;
if(rd(s->u,68,1)){goto L_1803f20df_54;}
L_1803f20df_22:;
wr(s->u,69,1,(rd(s->r,0,4)==((U)UINT64_C(0xb))));
L_1803f20df_23:;
if(rd(s->u,69,1)){goto L_1803f20df_56;}
L_1803f20df_24:;
wr(s->u,70,1,(rd(s->r,0,4)==((U)UINT64_C(0xd))));
L_1803f20df_25:;
if(rd(s->u,70,1)){goto L_1803f20df_58;}
L_1803f20df_26:;
wr(s->u,71,1,(rd(s->r,0,4)==((U)UINT64_C(0xf))));
L_1803f20df_27:;
if(rd(s->u,71,1)){goto L_1803f20df_60;}
L_1803f20df_28:;
wr(s->u,72,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000002))));
L_1803f20df_29:;
if(rd(s->u,72,1)){goto L_1803f20df_62;}
L_1803f20df_30:;
wr(s->u,73,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000003))));
L_1803f20df_31:;
if(rd(s->u,73,1)){goto L_1803f20df_64;}
L_1803f20df_32:;
wr(s->u,74,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000004))));
L_1803f20df_33:;
if(rd(s->u,74,1)){goto L_1803f20df_66;}
L_1803f20df_34:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_35:;
goto L_1803f20df_68;
L_1803f20df_36:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_37:;
goto L_1803f20df_68;
L_1803f20df_38:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_39:;
goto L_1803f20df_68;
L_1803f20df_40:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_41:;
goto L_1803f20df_68;
L_1803f20df_42:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_43:;
goto L_1803f20df_68;
L_1803f20df_44:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_45:;
goto L_1803f20df_68;
L_1803f20df_46:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_47:;
goto L_1803f20df_68;
L_1803f20df_48:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_49:;
goto L_1803f20df_68;
L_1803f20df_50:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_51:;
goto L_1803f20df_68;
L_1803f20df_52:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_53:;
goto L_1803f20df_68;
L_1803f20df_54:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_55:;
goto L_1803f20df_68;
L_1803f20df_56:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_57:;
goto L_1803f20df_68;
L_1803f20df_58:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_59:;
goto L_1803f20df_68;
L_1803f20df_60:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_61:;
goto L_1803f20df_68;
L_1803f20df_62:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_63:;
goto L_1803f20df_68;
L_1803f20df_64:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_65:;
goto L_1803f20df_68;
L_1803f20df_66:;
wr(s->u,51,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803f20df_67:;
goto L_1803f20df_68;
L_1803f20df_68:;
wr(s->u,75,4,mr((uint64_t)rd(s->u,51,8),4));
L_1803f20df_69:;
wr(s->r,0,8,rd(s->u,75,4));
L_1803f20df_70:;
wr(s->u,79,8,(rd(s->u,51,8)+((U)UINT64_C(0x4))));
L_1803f20df_71:;
wr(s->u,87,4,mr((uint64_t)rd(s->u,79,8),4));
L_1803f20df_72:;
wr(s->r,24,8,rd(s->u,87,4));
L_1803f20df_73:;
wr(s->u,91,8,(rd(s->u,51,8)+((U)UINT64_C(0x8))));
L_1803f20df_74:;
wr(s->u,99,4,mr((uint64_t)rd(s->u,91,8),4));
L_1803f20df_75:;
wr(s->r,16,8,rd(s->u,99,4));
L_1803f20df_76:;
wr(s->u,103,8,(rd(s->u,51,8)+((U)UINT64_C(0xc))));
L_1803f20df_77:;
wr(s->u,111,4,mr((uint64_t)rd(s->u,103,8),4));
L_1803f20df_78:;
wr(s->r,8,8,rd(s->u,111,4));
L_1803f20df_79:;
/* 1803f20e1: mov dword ptr [rsp + 0x28], eax */
L_1803f20e1_0:;
L_1803f20e1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803f20e1_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803f20e1_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803f20e1_4:;
/* 1803f20e5: mov dword ptr [rsp + 0x2c], ebx */
L_1803f20e5_0:;
L_1803f20e5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x2c))+rd(s->r,32,8)));
L_1803f20e5_2:;
wr(s->u,8,4,rd(s->r,24,4));
L_1803f20e5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803f20e5_4:;
/* 1803f20e9: mov dword ptr [rsp + 0x30], ecx */
L_1803f20e9_0:;
L_1803f20e9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f20e9_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803f20e9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803f20e9_4:;
/* 1803f20ed: bt edx, 0x1a */
L_1803f20ed_0:;
L_1803f20ed_1:;
wr(s->u,39,4,(((U)UINT64_C(0x1a))&((U)UINT64_C(0x1f))));
L_1803f20ed_2:;
wr(s->u,43,4,((rd(s->u,39,4)>=32)?0:(rd(s->r,16,4)>>rd(s->u,39,4))));
L_1803f20ed_3:;
wr(s->u,47,4,(rd(s->u,43,4)&((U)UINT64_C(0x1))));
L_1803f20ed_4:;
wr(s->r,512,1,(rd(s->u,47,4)!=((U)UINT64_C(0x0))));
L_1803f20ed_5:;
/* 1803f20f1: jae 0x1803f2117 */
L_1803f20f1_0:;
L_1803f20f1_1:;
wr(s->u,20,1,(!rd(s->r,512,1)));
L_1803f20f1_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803f2117);}
L_1803f20f1_3:;
return UINT64_C(0x1803f20f3);
}
uint64_t b_1803f20f3(CPU*s){
/* 1803f20f3: lea ecx, [rdi + 0x40] */
L_1803f20f3_0:;
L_1803f20f3_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x40))));
L_1803f20f3_2:;
wr(s->r,8,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803f20f3_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803f20f3_4:;
/* 1803f20f6: call 0x180003140 */
L_1803f20f6_0:;
L_1803f20f6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f20f6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f20fb)));
L_1803f20f6_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803f20f6_4:;
return UINT64_C(0x1803f20fb);
}
uint64_t b_1803f20fb(CPU*s){
/* 1803f20fb: mov qword ptr [rsp + 0x60], rax */
L_1803f20fb_0:;
L_1803f20fb_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803f20fb_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803f20fb_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f20fb_4:;
/* 1803f2100: test rax, rax */
L_1803f2100_0:;
L_1803f2100_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f2100_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2100_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803f2100_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2100_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803f2100_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803f2100_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f2100_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f2100_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f2100_10:;
/* 1803f2103: je 0x1803f2112 */
L_1803f2103_0:;
L_1803f2103_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f2112);}
L_1803f2103_2:;
return UINT64_C(0x1803f2105);
}
uint64_t b_1803f2105(CPU*s){
/* 1803f2105: mov edx, ebp */
L_1803f2105_0:;
L_1803f2105_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803f2105_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f2105_3:;
/* 1803f2107: mov rcx, rax */
L_1803f2107_0:;
L_1803f2107_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803f2107_2:;
/* 1803f210a: call 0x1803f5110 */
L_1803f210a_0:;
L_1803f210a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f210a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f210f)));
L_1803f210a_3:;
return (uint64_t)UINT64_C(0x1803f5110);
L_1803f210a_4:;
return UINT64_C(0x1803f210f);
}
uint64_t b_1803f210f(CPU*s){
/* 1803f210f: mov rdi, rax */
L_1803f210f_0:;
L_1803f210f_1:;
wr(s->r,56,8,rd(s->r,0,8));
L_1803f210f_2:;
/* 1803f2112: mov qword ptr [rsi], rdi */
L_1803f2112_0:;
L_1803f2112_1:;
wr(s->u,0,8,rd(s->r,56,8));
L_1803f2112_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1803f2112_3:;
/* 1803f2115: jmp 0x1803f2173 */
L_1803f2115_0:;
L_1803f2115_1:;
return UINT64_C(0x1803f2173);
L_1803f2115_2:;
return UINT64_C(0x1803f2117);
}
uint64_t b_1803f2112(CPU*s){
/* 1803f2112: mov qword ptr [rsi], rdi */
L_1803f2112_0:;
L_1803f2112_1:;
wr(s->u,0,8,rd(s->r,56,8));
L_1803f2112_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1803f2112_3:;
/* 1803f2115: jmp 0x1803f2173 */
L_1803f2115_0:;
L_1803f2115_1:;
return UINT64_C(0x1803f2173);
L_1803f2115_2:;
return UINT64_C(0x1803f2117);
}
uint64_t b_1803f2117(CPU*s){
/* 1803f2117: bt edx, 0x19 */
L_1803f2117_0:;
L_1803f2117_1:;
wr(s->u,1,4,(((U)UINT64_C(0x19))&((U)UINT64_C(0x1f))));
L_1803f2117_2:;
wr(s->u,5,4,((rd(s->u,1,4)>=32)?0:(rd(s->r,16,4)>>rd(s->u,1,4))));
L_1803f2117_3:;
wr(s->u,9,4,(rd(s->u,5,4)&((U)UINT64_C(0x1))));
L_1803f2117_4:;
wr(s->r,512,1,(rd(s->u,9,4)!=((U)UINT64_C(0x0))));
L_1803f2117_5:;
/* 1803f211b: jae 0x1803f2143 */
L_1803f211b_0:;
L_1803f211b_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803f211b_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803f2143);}
L_1803f211b_3:;
return UINT64_C(0x1803f211d);
}
uint64_t b_1803f211d(CPU*s){
/* 1803f211d: mov ecx, 0x40 */
L_1803f211d_0:;
L_1803f211d_1:;
wr(s->r,8,8,((U)UINT64_C(0x40)));
L_1803f211d_2:;
/* 1803f2122: call 0x180003140 */
L_1803f2122_0:;
L_1803f2122_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2122_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2127)));
L_1803f2122_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803f2122_4:;
return UINT64_C(0x1803f2127);
}
uint64_t b_1803f2127(CPU*s){
/* 1803f2127: mov qword ptr [rsp + 0x60], rax */
L_1803f2127_0:;
L_1803f2127_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803f2127_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803f2127_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f2127_4:;
/* 1803f212c: test rax, rax */
L_1803f212c_0:;
L_1803f212c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f212c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f212c_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803f212c_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f212c_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803f212c_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803f212c_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f212c_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f212c_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f212c_10:;
/* 1803f212f: je 0x1803f213e */
L_1803f212f_0:;
L_1803f212f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f213e);}
L_1803f212f_2:;
return UINT64_C(0x1803f2131);
}
uint64_t b_1803f2131(CPU*s){
/* 1803f2131: mov edx, ebp */
L_1803f2131_0:;
L_1803f2131_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803f2131_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f2131_3:;
/* 1803f2133: mov rcx, rax */
L_1803f2133_0:;
L_1803f2133_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803f2133_2:;
/* 1803f2136: call 0x1803f4a90 */
L_1803f2136_0:;
L_1803f2136_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2136_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f213b)));
L_1803f2136_3:;
return (uint64_t)UINT64_C(0x1803f4a90);
L_1803f2136_4:;
return UINT64_C(0x1803f213b);
}
uint64_t b_1803f213b(CPU*s){
/* 1803f213b: mov rdi, rax */
L_1803f213b_0:;
L_1803f213b_1:;
wr(s->r,56,8,rd(s->r,0,8));
L_1803f213b_2:;
/* 1803f213e: mov qword ptr [rsi], rdi */
L_1803f213e_0:;
L_1803f213e_1:;
wr(s->u,0,8,rd(s->r,56,8));
L_1803f213e_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1803f213e_3:;
/* 1803f2141: jmp 0x1803f2173 */
L_1803f2141_0:;
L_1803f2141_1:;
return UINT64_C(0x1803f2173);
L_1803f2141_2:;
return UINT64_C(0x1803f2143);
}
uint64_t b_1803f213e(CPU*s){
/* 1803f213e: mov qword ptr [rsi], rdi */
L_1803f213e_0:;
L_1803f213e_1:;
wr(s->u,0,8,rd(s->r,56,8));
L_1803f213e_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1803f213e_3:;
/* 1803f2141: jmp 0x1803f2173 */
L_1803f2141_0:;
L_1803f2141_1:;
return UINT64_C(0x1803f2173);
L_1803f2141_2:;
return UINT64_C(0x1803f2143);
}
uint64_t b_1803f2143(CPU*s){
/* 1803f2143: mov ecx, 0x28 */
L_1803f2143_0:;
L_1803f2143_1:;
wr(s->r,8,8,((U)UINT64_C(0x28)));
L_1803f2143_2:;
/* 1803f2148: call 0x180003140 */
L_1803f2148_0:;
L_1803f2148_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2148_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f214d)));
L_1803f2148_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803f2148_4:;
return UINT64_C(0x1803f214d);
}
uint64_t b_1803f214d(CPU*s){
/* 1803f214d: test rax, rax */
L_1803f214d_0:;
L_1803f214d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f214d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f214d_3:;
wr(s->u,10,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803f214d_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f214d_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803f214d_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803f214d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f214d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f214d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f214d_10:;
/* 1803f2150: je 0x1803f216d */
L_1803f2150_0:;
L_1803f2150_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f216d);}
L_1803f2150_2:;
return UINT64_C(0x1803f2152);
}
uint64_t b_1803f2152(CPU*s){
/* 1803f2152: lea rcx, [rip + 0x41b3df] */
L_1803f2152_0:;
L_1803f2152_1:;
wr(s->r,8,8,((U)UINT64_C(0x18080d538)));
L_1803f2152_2:;
/* 1803f2159: mov qword ptr [rax], rcx */
L_1803f2159_0:;
L_1803f2159_1:;
wr(s->u,12,8,rd(s->r,8,8));
L_1803f2159_2:;
mw((uint64_t)rd(s->r,0,8),8,rd(s->u,12,8));
L_1803f2159_3:;
/* 1803f215c: mov dword ptr [rax + 8], ebp */
L_1803f215c_0:;
L_1803f215c_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803f215c_2:;
wr(s->u,8,4,rd(s->r,40,4));
L_1803f215c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803f215c_4:;
/* 1803f215f: mov qword ptr [rax + 0x18], rdi */
L_1803f215f_0:;
L_1803f215f_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803f215f_2:;
wr(s->u,12,8,rd(s->r,56,8));
L_1803f215f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803f215f_4:;
/* 1803f2163: mov qword ptr [rax + 0x20], rdi */
L_1803f2163_0:;
L_1803f2163_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803f2163_2:;
wr(s->u,12,8,rd(s->r,56,8));
L_1803f2163_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803f2163_4:;
/* 1803f2167: mov qword ptr [rax + 0x10], rdi */
L_1803f2167_0:;
L_1803f2167_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803f2167_2:;
wr(s->u,12,8,rd(s->r,56,8));
L_1803f2167_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803f2167_4:;
/* 1803f216b: jmp 0x1803f2170 */
L_1803f216b_0:;
L_1803f216b_1:;
return UINT64_C(0x1803f2170);
L_1803f216b_2:;
return UINT64_C(0x1803f216d);
}
uint64_t b_1803f216d(CPU*s){
/* 1803f216d: mov rax, rdi */
L_1803f216d_0:;
L_1803f216d_1:;
wr(s->r,0,8,rd(s->r,56,8));
L_1803f216d_2:;
/* 1803f2170: mov qword ptr [rsi], rax */
L_1803f2170_0:;
L_1803f2170_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803f2170_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,16,8));
L_1803f2170_3:;
/* 1803f2173: mov rcx, qword ptr [rsi] */
L_1803f2173_0:;
L_1803f2173_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803f2173_2:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803f2173_3:;
/* 1803f2176: mov rax, qword ptr [rcx] */
L_1803f2176_0:;
L_1803f2176_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803f2176_2:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803f2176_3:;
/* 1803f2179: mov edx, r12d */
L_1803f2179_0:;
L_1803f2179_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803f2179_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f2179_3:;
/* 1803f217c: mov rbx, qword ptr [rsp + 0x68] */
L_1803f217c_0:;
L_1803f217c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803f217c_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f217c_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803f217c_4:;
/* 1803f2181: mov rbp, qword ptr [rsp + 0x70] */
L_1803f2181_0:;
L_1803f2181_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803f2181_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f2181_3:;
wr(s->r,40,8,rd(s->u,24,8));
L_1803f2181_4:;
/* 1803f2186: add rsp, 0x40 */
L_1803f2186_0:;
L_1803f2186_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2186_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803f2186_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803f2186_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2186_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2186_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2186_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803f2186_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803f2186_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803f2186_10:;
/* 1803f218a: pop r12 */
L_1803f218a_0:;
L_1803f218a_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803f218a_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f218a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f218a_4:;
wr(s->r,160,8,rd(s->u,42,8));
L_1803f218a_5:;
/* 1803f218c: pop rdi */
L_1803f218c_0:;
L_1803f218c_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803f218c_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f218c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f218c_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803f218c_5:;
/* 1803f218d: pop rsi */
L_1803f218d_0:;
L_1803f218d_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803f218d_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f218d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f218d_4:;
wr(s->r,48,8,rd(s->u,42,8));
L_1803f218d_5:;
/* 1803f218e: jmp qword ptr [rax + 0x30] */
L_1803f218e_0:;
L_1803f218e_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x30))));
L_1803f218e_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f218e_3:;
return (uint64_t)rd(s->u,24,8);
L_1803f218e_4:;
return UINT64_C(0x1803f2192);
}
uint64_t b_1803f2170(CPU*s){
/* 1803f2170: mov qword ptr [rsi], rax */
L_1803f2170_0:;
L_1803f2170_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803f2170_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,16,8));
L_1803f2170_3:;
/* 1803f2173: mov rcx, qword ptr [rsi] */
L_1803f2173_0:;
L_1803f2173_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803f2173_2:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803f2173_3:;
/* 1803f2176: mov rax, qword ptr [rcx] */
L_1803f2176_0:;
L_1803f2176_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803f2176_2:;
wr(s->r,0,8,rd(s->u,24,8));
L_1803f2176_3:;
/* 1803f2179: mov edx, r12d */
L_1803f2179_0:;
L_1803f2179_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803f2179_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f2179_3:;
/* 1803f217c: mov rbx, qword ptr [rsp + 0x68] */
L_1803f217c_0:;
L_1803f217c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803f217c_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f217c_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803f217c_4:;
/* 1803f2181: mov rbp, qword ptr [rsp + 0x70] */
L_1803f2181_0:;
L_1803f2181_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803f2181_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f2181_3:;
wr(s->r,40,8,rd(s->u,24,8));
L_1803f2181_4:;
/* 1803f2186: add rsp, 0x40 */
L_1803f2186_0:;
L_1803f2186_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2186_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803f2186_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803f2186_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2186_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2186_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2186_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803f2186_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803f2186_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803f2186_10:;
/* 1803f218a: pop r12 */
L_1803f218a_0:;
L_1803f218a_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803f218a_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f218a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f218a_4:;
wr(s->r,160,8,rd(s->u,42,8));
L_1803f218a_5:;
/* 1803f218c: pop rdi */
L_1803f218c_0:;
L_1803f218c_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803f218c_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f218c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f218c_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803f218c_5:;
/* 1803f218d: pop rsi */
L_1803f218d_0:;
L_1803f218d_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803f218d_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f218d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f218d_4:;
wr(s->r,48,8,rd(s->u,42,8));
L_1803f218d_5:;
/* 1803f218e: jmp qword ptr [rax + 0x30] */
L_1803f218e_0:;
L_1803f218e_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x30))));
L_1803f218e_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f218e_3:;
return (uint64_t)rd(s->u,24,8);
L_1803f218e_4:;
return UINT64_C(0x1803f2192);
}
uint64_t b_1803f2173(CPU*s){
/* 1803f2173: mov rcx, qword ptr [rsi] */
L_1803f2173_0:;
L_1803f2173_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803f2173_2:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803f2173_3:;
/* 1803f2176: mov rax, qword ptr [rcx] */
L_1803f2176_0:;
L_1803f2176_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803f2176_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803f2176_3:;
/* 1803f2179: mov edx, r12d */
L_1803f2179_0:;
L_1803f2179_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803f2179_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f2179_3:;
/* 1803f217c: mov rbx, qword ptr [rsp + 0x68] */
L_1803f217c_0:;
L_1803f217c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803f217c_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f217c_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803f217c_4:;
/* 1803f2181: mov rbp, qword ptr [rsp + 0x70] */
L_1803f2181_0:;
L_1803f2181_1:;
wr(s->u,8,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803f2181_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f2181_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803f2181_4:;
/* 1803f2186: add rsp, 0x40 */
L_1803f2186_0:;
L_1803f2186_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2186_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803f2186_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803f2186_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2186_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2186_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2186_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f2186_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f2186_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f2186_10:;
/* 1803f218a: pop r12 */
L_1803f218a_0:;
L_1803f218a_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803f218a_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f218a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f218a_4:;
wr(s->r,160,8,rd(s->u,34,8));
L_1803f218a_5:;
/* 1803f218c: pop rdi */
L_1803f218c_0:;
L_1803f218c_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803f218c_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f218c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f218c_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1803f218c_5:;
/* 1803f218d: pop rsi */
L_1803f218d_0:;
L_1803f218d_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803f218d_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f218d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f218d_4:;
wr(s->r,48,8,rd(s->u,34,8));
L_1803f218d_5:;
/* 1803f218e: jmp qword ptr [rax + 0x30] */
L_1803f218e_0:;
L_1803f218e_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x30))));
L_1803f218e_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f218e_3:;
return (uint64_t)rd(s->u,16,8);
L_1803f218e_4:;
return UINT64_C(0x1803f2192);
}
uint64_t b_1803f21b0(CPU*s){
/* 1803f21b0: mov qword ptr [rsp + 8], rcx */
L_1803f21b0_0:;
L_1803f21b0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803f21b0_2:;
wr(s->u,8,8,rd(s->r,8,8));
L_1803f21b0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f21b0_4:;
/* 1803f21b5: push rbx */
L_1803f21b5_0:;
L_1803f21b5_1:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803f21b5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f21b5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803f21b5_4:;
/* 1803f21b6: sub rsp, 0x30 */
L_1803f21b6_0:;
L_1803f21b6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803f21b6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803f21b6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803f21b6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f21b6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f21b6_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f21b6_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f21b6_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f21b6_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f21b6_10:;
/* 1803f21ba: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803f21ba_0:;
L_1803f21ba_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f21ba_2:;
wr(s->u,8,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803f21ba_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f21ba_4:;
/* 1803f21c3: mov rbx, rcx */
L_1803f21c3_0:;
L_1803f21c3_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803f21c3_2:;
/* 1803f21c6: lea rax, [rip + 0x41b41b] */
L_1803f21c6_0:;
L_1803f21c6_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d5e8)));
L_1803f21c6_2:;
/* 1803f21cd: mov qword ptr [rcx], rax */
L_1803f21cd_0:;
L_1803f21cd_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803f21cd_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,8,8));
L_1803f21cd_3:;
/* 1803f21d0: movd xmm0, edx */
L_1803f21d0_0:;
L_1803f21d0_1:;
wr(s->r,4608,16,rd(s->r,16,4));
L_1803f21d0_2:;
/* 1803f21d4: cvtdq2ps xmm0, xmm0 */
L_1803f21d4_0:;
L_1803f21d4_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803f21d4_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803f21d4_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803f21d4_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803f21d4_5:;
/* 1803f21d7: call 0x180609c04 */
L_1803f21d7_0:;
L_1803f21d7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f21d7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f21dc)));
L_1803f21d7_3:;
return (uint64_t)UINT64_C(0x180609c04);
L_1803f21d7_4:;
return UINT64_C(0x1803f21dc);
}
uint64_t b_1803f21dc(CPU*s){
/* 1803f21dc: movaps xmm1, xmm0 */
L_1803f21dc_0:;
L_1803f21dc_1:;
wr(s->r,4672,4,rd(s->r,4608,4));
L_1803f21dc_2:;
wr(s->r,4676,4,rd(s->r,4612,4));
L_1803f21dc_3:;
wr(s->r,4680,4,rd(s->r,4616,4));
L_1803f21dc_4:;
wr(s->r,4684,4,rd(s->r,4620,4));
L_1803f21dc_5:;
/* 1803f21df: mulss xmm1, dword ptr [rip + 0x41a339] */
L_1803f21df_0:;
L_1803f21df_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(mr(UINT64_C(0x18080c520),4),4),4));
L_1803f21df_2:;
/* 1803f21e7: cvttss2si edx, xmm1 */
L_1803f21e7_0:;
L_1803f21e7_1:;
wr(s->r,16,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803f21e7_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f21e7_3:;
/* 1803f21eb: cmp edx, 0x80000000 */
L_1803f21eb_0:;
L_1803f21eb_1:;
wr(s->u,6,4,rd(s->r,16,4));
L_1803f21eb_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x80000000))));
L_1803f21eb_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x80000000)),4,1));
L_1803f21eb_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x80000000))));
L_1803f21eb_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f21eb_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803f21eb_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803f21eb_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803f21eb_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803f21eb_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803f21eb_11:;
/* 1803f21f1: je 0x1803f2216 */
L_1803f21f1_0:;
L_1803f21f1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f2216);}
L_1803f21f1_2:;
return UINT64_C(0x1803f21f3);
}
uint64_t b_1803f21f3(CPU*s){
/* 1803f21f3: pxor xmm0, xmm0 */
L_1803f21f3_0:;
L_1803f21f3_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803f21f3_2:;
/* 1803f21f7: cvtsi2ss xmm0, edx */
L_1803f21f7_0:;
L_1803f21f7_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,16,4),4),4));
L_1803f21f7_2:;
/* 1803f21fb: ucomiss xmm0, xmm1 */
L_1803f21fb_0:;
L_1803f21fb_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803f21fb_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803f21fb_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803f21fb_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803f21fb_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803f21fb_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803f21fb_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803f21fb_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f21fb_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f21fb_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f21fb_11:;
/* 1803f21fe: je 0x1803f2216 */
L_1803f21fe_0:;
L_1803f21fe_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f2216);}
L_1803f21fe_2:;
return UINT64_C(0x1803f2200);
}
uint64_t b_1803f2200(CPU*s){
/* 1803f2200: unpcklps xmm1, xmm1 */
L_1803f2200_0:;
L_1803f2200_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803f2200_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803f2200_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803f2200_4:;
/* 1803f2203: movmskps eax, xmm1 */
L_1803f2203_0:;
L_1803f2203_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803f2203_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f2203_3:;
/* 1803f2206: and eax, 1 */
L_1803f2206_0:;
L_1803f2206_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f2206_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2206_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803f2206_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f2206_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2206_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803f2206_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803f2206_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803f2206_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803f2206_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803f2206_11:;
/* 1803f2209: xor eax, 1 */
L_1803f2209_0:;
L_1803f2209_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f2209_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2209_3:;
wr(s->r,0,4,(rd(s->r,0,4)^((U)UINT64_C(0x1))));
L_1803f2209_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f2209_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2209_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803f2209_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803f2209_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803f2209_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803f2209_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803f2209_11:;
/* 1803f220c: add edx, eax */
L_1803f220c_0:;
L_1803f220c_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803f220c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,0,4),4,0));
L_1803f220c_3:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->r,0,4)));
L_1803f220c_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f220c_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f220c_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803f220c_7:;
wr(s->u,0,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803f220c_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803f220c_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803f220c_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803f220c_11:;
/* 1803f220e: pxor xmm1, xmm1 */
L_1803f220e_0:;
L_1803f220e_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803f220e_2:;
/* 1803f2212: cvtsi2ss xmm1, edx */
L_1803f2212_0:;
L_1803f2212_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,16,4),4),4));
L_1803f2212_2:;
/* 1803f2216: movss xmm0, dword ptr [rip + 0x262fd2] */
L_1803f2216_0:;
L_1803f2216_1:;
wr(s->r,4608,4,mr(UINT64_C(0x1806551f0),4));
L_1803f2216_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803f2216_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803f2216_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803f2216_5:;
/* 1803f221e: call 0x180609a00 */
L_1803f221e_0:;
L_1803f221e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f221e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2223)));
L_1803f221e_3:;
return (uint64_t)UINT64_C(0x180609a00);
L_1803f221e_4:;
return UINT64_C(0x1803f2223);
}
uint64_t b_1803f2216(CPU*s){
/* 1803f2216: movss xmm0, dword ptr [rip + 0x262fd2] */
L_1803f2216_0:;
L_1803f2216_1:;
wr(s->r,4608,4,mr(UINT64_C(0x1806551f0),4));
L_1803f2216_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803f2216_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803f2216_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803f2216_5:;
/* 1803f221e: call 0x180609a00 */
L_1803f221e_0:;
L_1803f221e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f221e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2223)));
L_1803f221e_3:;
return (uint64_t)UINT64_C(0x180609a00);
L_1803f221e_4:;
return UINT64_C(0x1803f2223);
}
uint64_t b_1803f2223(CPU*s){
/* 1803f2223: addss xmm0, dword ptr [rip + 0x25ff39] */
L_1803f2223_0:;
L_1803f2223_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(mr(UINT64_C(0x180652164),4),4),4));
L_1803f2223_2:;
/* 1803f222b: cvttss2si ecx, xmm0 */
L_1803f222b_0:;
L_1803f222b_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803f222b_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803f222b_3:;
/* 1803f222f: mov dword ptr [rbx + 8], ecx */
L_1803f222f_0:;
L_1803f222f_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803f222f_2:;
wr(s->u,13,4,rd(s->r,8,4));
L_1803f222f_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803f222f_4:;
/* 1803f2232: mov eax, ecx */
L_1803f2232_0:;
L_1803f2232_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803f2232_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f2232_3:;
/* 1803f2234: sar eax, 1 */
L_1803f2234_0:;
L_1803f2234_1:;
wr(s->u,63,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803f2234_2:;
wr(s->r,512,1,(rd(s->u,63,4)!=((U)UINT64_C(0x0))));
L_1803f2234_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2234_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803f2234_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f2234_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2234_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803f2234_8:;
wr(s->u,17,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803f2234_9:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803f2234_10:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803f2234_11:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803f2234_12:;
/* 1803f2236: mov dword ptr [rbx + 0xc], eax */
L_1803f2236_0:;
L_1803f2236_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1803f2236_2:;
wr(s->u,13,4,rd(s->r,0,4));
L_1803f2236_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,13,4));
L_1803f2236_4:;
/* 1803f2239: movsxd rcx, ecx */
L_1803f2239_0:;
L_1803f2239_1:;
wr(s->r,8,8,(U)sx(rd(s->r,8,4),4));
L_1803f2239_2:;
/* 1803f223c: shl rcx, 2 */
L_1803f223c_0:;
L_1803f223c_1:;
wr(s->u,67,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803f223c_2:;
wr(s->u,71,8,rd(s->r,8,8));
L_1803f223c_3:;
wr(s->r,8,8,((rd(s->u,67,4)>=64)?0:(rd(s->r,8,8)<<rd(s->u,67,4))));
L_1803f223c_4:;
wr(s->u,46,1,(rd(s->u,67,4)==((U)UINT64_C(0x0))));
L_1803f223c_5:;
wr(s->u,47,4,(rd(s->u,67,4)-((U)UINT64_C(0x1))));
L_1803f223c_6:;
wr(s->u,51,8,((rd(s->u,47,4)>=64)?0:(rd(s->u,71,8)<<rd(s->u,47,4))));
L_1803f223c_7:;
wr(s->u,59,1,(sx(rd(s->u,51,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f223c_8:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803f223c_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803f223c_10:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803f223c_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803f223c_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,59,1)));
L_1803f223c_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803f223c_14:;
wr(s->u,60,1,(rd(s->u,67,4)==((U)UINT64_C(0x1))));
L_1803f223c_15:;
wr(s->u,61,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f223c_16:;
wr(s->u,62,1,(rd(s->r,512,1)^rd(s->u,61,1)));
L_1803f223c_17:;
wr(s->u,0,1,rd(s->u,60,1));
L_1803f223c_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,62,1)));
L_1803f223c_19:;
wr(s->u,2,1,(!rd(s->u,60,1)));
L_1803f223c_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803f223c_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803f223c_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803f223c_23:;
wr(s->u,23,1,(rd(s->u,67,4)!=((U)UINT64_C(0x0))));
L_1803f223c_24:;
wr(s->u,24,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f223c_25:;
wr(s->u,25,1,(!rd(s->u,23,1)));
L_1803f223c_26:;
wr(s->u,26,1,(rd(s->u,25,1)&rd(s->r,519,1)));
L_1803f223c_27:;
wr(s->u,27,1,(rd(s->u,23,1)&rd(s->u,24,1)));
L_1803f223c_28:;
wr(s->r,519,1,(rd(s->u,26,1)|rd(s->u,27,1)));
L_1803f223c_29:;
wr(s->u,28,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803f223c_30:;
wr(s->u,29,1,(!rd(s->u,23,1)));
L_1803f223c_31:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,518,1)));
L_1803f223c_32:;
wr(s->u,31,1,(rd(s->u,23,1)&rd(s->u,28,1)));
L_1803f223c_33:;
wr(s->r,518,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803f223c_34:;
wr(s->u,32,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803f223c_35:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803f223c_36:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803f223c_37:;
wr(s->u,42,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803f223c_38:;
wr(s->u,43,1,(!rd(s->u,23,1)));
L_1803f223c_39:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,514,1)));
L_1803f223c_40:;
wr(s->u,45,1,(rd(s->u,23,1)&rd(s->u,42,1)));
L_1803f223c_41:;
wr(s->r,514,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803f223c_42:;
/* 1803f2240: mov edx, 0x10 */
L_1803f2240_0:;
L_1803f2240_1:;
wr(s->r,16,8,((U)UINT64_C(0x10)));
L_1803f2240_2:;
/* 1803f2245: call 0x180609c10 */
L_1803f2245_0:;
L_1803f2245_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2245_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f224a)));
L_1803f2245_3:;
return (uint64_t)UINT64_C(0x180609c10);
L_1803f2245_4:;
return UINT64_C(0x1803f224a);
}
uint64_t b_1803f224a(CPU*s){
/* 1803f224a: mov qword ptr [rbx + 0x20], rax */
L_1803f224a_0:;
L_1803f224a_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803f224a_2:;
wr(s->u,13,8,rd(s->r,0,8));
L_1803f224a_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,13,8));
L_1803f224a_4:;
/* 1803f224e: movsxd rcx, dword ptr [rbx + 8] */
L_1803f224e_0:;
L_1803f224e_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803f224e_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803f224e_3:;
wr(s->r,8,8,(U)sx(rd(s->u,21,4),4));
L_1803f224e_4:;
/* 1803f2252: shl rcx, 2 */
L_1803f2252_0:;
L_1803f2252_1:;
wr(s->u,65,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803f2252_2:;
wr(s->u,69,8,rd(s->r,8,8));
L_1803f2252_3:;
wr(s->r,8,8,((rd(s->u,65,4)>=64)?0:(rd(s->r,8,8)<<rd(s->u,65,4))));
L_1803f2252_4:;
wr(s->u,48,1,(rd(s->u,65,4)==((U)UINT64_C(0x0))));
L_1803f2252_5:;
wr(s->u,49,4,(rd(s->u,65,4)-((U)UINT64_C(0x1))));
L_1803f2252_6:;
wr(s->u,53,8,((rd(s->u,49,4)>=64)?0:(rd(s->u,69,8)<<rd(s->u,49,4))));
L_1803f2252_7:;
wr(s->u,61,1,(sx(rd(s->u,53,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2252_8:;
wr(s->u,0,1,rd(s->u,48,1));
L_1803f2252_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803f2252_10:;
wr(s->u,2,1,(!rd(s->u,48,1)));
L_1803f2252_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803f2252_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,61,1)));
L_1803f2252_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803f2252_14:;
wr(s->u,62,1,(rd(s->u,65,4)==((U)UINT64_C(0x1))));
L_1803f2252_15:;
wr(s->u,63,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2252_16:;
wr(s->u,64,1,(rd(s->r,512,1)^rd(s->u,63,1)));
L_1803f2252_17:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803f2252_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,64,1)));
L_1803f2252_19:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803f2252_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803f2252_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803f2252_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803f2252_23:;
wr(s->u,25,1,(rd(s->u,65,4)!=((U)UINT64_C(0x0))));
L_1803f2252_24:;
wr(s->u,26,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2252_25:;
wr(s->u,27,1,(!rd(s->u,25,1)));
L_1803f2252_26:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,519,1)));
L_1803f2252_27:;
wr(s->u,29,1,(rd(s->u,25,1)&rd(s->u,26,1)));
L_1803f2252_28:;
wr(s->r,519,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803f2252_29:;
wr(s->u,30,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803f2252_30:;
wr(s->u,31,1,(!rd(s->u,25,1)));
L_1803f2252_31:;
wr(s->u,32,1,(rd(s->u,31,1)&rd(s->r,518,1)));
L_1803f2252_32:;
wr(s->u,33,1,(rd(s->u,25,1)&rd(s->u,30,1)));
L_1803f2252_33:;
wr(s->r,518,1,(rd(s->u,32,1)|rd(s->u,33,1)));
L_1803f2252_34:;
wr(s->u,34,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803f2252_35:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803f2252_36:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803f2252_37:;
wr(s->u,44,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803f2252_38:;
wr(s->u,45,1,(!rd(s->u,25,1)));
L_1803f2252_39:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,514,1)));
L_1803f2252_40:;
wr(s->u,47,1,(rd(s->u,25,1)&rd(s->u,44,1)));
L_1803f2252_41:;
wr(s->r,514,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803f2252_42:;
/* 1803f2256: mov edx, 0x10 */
L_1803f2256_0:;
L_1803f2256_1:;
wr(s->r,16,8,((U)UINT64_C(0x10)));
L_1803f2256_2:;
/* 1803f225b: call 0x180609c10 */
L_1803f225b_0:;
L_1803f225b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f225b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2260)));
L_1803f225b_3:;
return (uint64_t)UINT64_C(0x180609c10);
L_1803f225b_4:;
return UINT64_C(0x1803f2260);
}
uint64_t b_1803f2260(CPU*s){
/* 1803f2260: mov qword ptr [rbx + 0x28], rax */
L_1803f2260_0:;
L_1803f2260_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803f2260_2:;
wr(s->u,13,8,rd(s->r,0,8));
L_1803f2260_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,13,8));
L_1803f2260_4:;
/* 1803f2264: movsxd rcx, dword ptr [rbx + 8] */
L_1803f2264_0:;
L_1803f2264_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803f2264_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803f2264_3:;
wr(s->r,8,8,(U)sx(rd(s->u,21,4),4));
L_1803f2264_4:;
/* 1803f2268: shl rcx, 2 */
L_1803f2268_0:;
L_1803f2268_1:;
wr(s->u,65,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803f2268_2:;
wr(s->u,69,8,rd(s->r,8,8));
L_1803f2268_3:;
wr(s->r,8,8,((rd(s->u,65,4)>=64)?0:(rd(s->r,8,8)<<rd(s->u,65,4))));
L_1803f2268_4:;
wr(s->u,48,1,(rd(s->u,65,4)==((U)UINT64_C(0x0))));
L_1803f2268_5:;
wr(s->u,49,4,(rd(s->u,65,4)-((U)UINT64_C(0x1))));
L_1803f2268_6:;
wr(s->u,53,8,((rd(s->u,49,4)>=64)?0:(rd(s->u,69,8)<<rd(s->u,49,4))));
L_1803f2268_7:;
wr(s->u,61,1,(sx(rd(s->u,53,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2268_8:;
wr(s->u,0,1,rd(s->u,48,1));
L_1803f2268_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803f2268_10:;
wr(s->u,2,1,(!rd(s->u,48,1)));
L_1803f2268_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803f2268_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,61,1)));
L_1803f2268_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803f2268_14:;
wr(s->u,62,1,(rd(s->u,65,4)==((U)UINT64_C(0x1))));
L_1803f2268_15:;
wr(s->u,63,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2268_16:;
wr(s->u,64,1,(rd(s->r,512,1)^rd(s->u,63,1)));
L_1803f2268_17:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803f2268_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,64,1)));
L_1803f2268_19:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803f2268_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803f2268_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803f2268_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803f2268_23:;
wr(s->u,25,1,(rd(s->u,65,4)!=((U)UINT64_C(0x0))));
L_1803f2268_24:;
wr(s->u,26,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2268_25:;
wr(s->u,27,1,(!rd(s->u,25,1)));
L_1803f2268_26:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,519,1)));
L_1803f2268_27:;
wr(s->u,29,1,(rd(s->u,25,1)&rd(s->u,26,1)));
L_1803f2268_28:;
wr(s->r,519,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803f2268_29:;
wr(s->u,30,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803f2268_30:;
wr(s->u,31,1,(!rd(s->u,25,1)));
L_1803f2268_31:;
wr(s->u,32,1,(rd(s->u,31,1)&rd(s->r,518,1)));
L_1803f2268_32:;
wr(s->u,33,1,(rd(s->u,25,1)&rd(s->u,30,1)));
L_1803f2268_33:;
wr(s->r,518,1,(rd(s->u,32,1)|rd(s->u,33,1)));
L_1803f2268_34:;
wr(s->u,34,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803f2268_35:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803f2268_36:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803f2268_37:;
wr(s->u,44,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803f2268_38:;
wr(s->u,45,1,(!rd(s->u,25,1)));
L_1803f2268_39:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,514,1)));
L_1803f2268_40:;
wr(s->u,47,1,(rd(s->u,25,1)&rd(s->u,44,1)));
L_1803f2268_41:;
wr(s->r,514,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803f2268_42:;
/* 1803f226c: mov edx, 0x10 */
L_1803f226c_0:;
L_1803f226c_1:;
wr(s->r,16,8,((U)UINT64_C(0x10)));
L_1803f226c_2:;
/* 1803f2271: call 0x180609c10 */
L_1803f2271_0:;
L_1803f2271_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2271_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2276)));
L_1803f2271_3:;
return (uint64_t)UINT64_C(0x180609c10);
L_1803f2271_4:;
return UINT64_C(0x1803f2276);
}
uint64_t b_1803f2276(CPU*s){
/* 1803f2276: mov qword ptr [rbx + 0x30], rax */
L_1803f2276_0:;
L_1803f2276_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803f2276_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803f2276_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f2276_4:;
/* 1803f227a: lea rcx, [rbx + 0x10] */
L_1803f227a_0:;
L_1803f227a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803f227a_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803f227a_3:;
/* 1803f227e: xor r8d, r8d */
L_1803f227e_0:;
L_1803f227e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f227e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f227e_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803f227e_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803f227e_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f227e_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803f227e_7:;
wr(s->u,20,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803f227e_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803f227e_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f227e_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f227e_11:;
/* 1803f2281: mov edx, dword ptr [rbx + 8] */
L_1803f2281_0:;
L_1803f2281_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803f2281_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f2281_3:;
wr(s->r,16,4,rd(s->u,16,4));
L_1803f2281_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f2281_5:;
/* 1803f2284: call 0x1803f20b0 */
L_1803f2284_0:;
L_1803f2284_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2284_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2289)));
L_1803f2284_3:;
return (uint64_t)UINT64_C(0x1803f20b0);
L_1803f2284_4:;
return UINT64_C(0x1803f2289);
}
uint64_t b_1803f2289(CPU*s){
/* 1803f2289: nop  */
L_1803f2289_0:;
L_1803f2289_1:;
/* 1803f228a: mov rax, rbx */
L_1803f228a_0:;
L_1803f228a_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803f228a_2:;
/* 1803f228d: add rsp, 0x30 */
L_1803f228d_0:;
L_1803f228d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f228d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803f228d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803f228d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f228d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f228d_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f228d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f228d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f228d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f228d_10:;
/* 1803f2291: pop rbx */
L_1803f2291_0:;
L_1803f2291_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803f2291_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2291_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2291_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803f2291_5:;
/* 1803f2292: ret  */
L_1803f2292_0:;
L_1803f2292_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2292_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2292_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f2292_4:;
return UINT64_C(0x1803f2293);
}
uint64_t b_1803f22a0(CPU*s){
/* 1803f22a0: mov qword ptr [rsp + 8], rcx */
L_1803f22a0_0:;
L_1803f22a0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803f22a0_2:;
wr(s->u,16,8,rd(s->r,8,8));
L_1803f22a0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803f22a0_4:;
/* 1803f22a5: push rdi */
L_1803f22a5_0:;
L_1803f22a5_1:;
wr(s->u,32,8,rd(s->r,56,8));
L_1803f22a5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f22a5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,32,8));
L_1803f22a5_4:;
/* 1803f22a6: sub rsp, 0x30 */
L_1803f22a6_0:;
L_1803f22a6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803f22a6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803f22a6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803f22a6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f22a6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f22a6_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f22a6_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803f22a6_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803f22a6_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803f22a6_10:;
/* 1803f22aa: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803f22aa_0:;
L_1803f22aa_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f22aa_2:;
wr(s->u,16,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803f22aa_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803f22aa_4:;
/* 1803f22b3: mov qword ptr [rsp + 0x48], rbx */
L_1803f22b3_0:;
L_1803f22b3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803f22b3_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803f22b3_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803f22b3_4:;
/* 1803f22b8: mov rbx, rcx */
L_1803f22b8_0:;
L_1803f22b8_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803f22b8_2:;
/* 1803f22bb: lea rax, [rip + 0x41b326] */
L_1803f22bb_0:;
L_1803f22bb_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080d5e8)));
L_1803f22bb_2:;
/* 1803f22c2: mov qword ptr [rcx], rax */
L_1803f22c2_0:;
L_1803f22c2_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803f22c2_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1803f22c2_3:;
/* 1803f22c5: mov rcx, qword ptr [rcx + 0x20] */
L_1803f22c5_0:;
L_1803f22c5_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x20))));
L_1803f22c5_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f22c5_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803f22c5_4:;
/* 1803f22c9: call 0x180609c16 */
L_1803f22c9_0:;
L_1803f22c9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f22c9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f22ce)));
L_1803f22c9_3:;
return (uint64_t)UINT64_C(0x180609c16);
L_1803f22c9_4:;
return UINT64_C(0x1803f22ce);
}
uint64_t b_1803f22ce(CPU*s){
/* 1803f22ce: xor edi, edi */
L_1803f22ce_0:;
L_1803f22ce_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f22ce_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f22ce_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803f22ce_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803f22ce_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f22ce_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803f22ce_7:;
wr(s->u,24,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803f22ce_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803f22ce_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803f22ce_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803f22ce_11:;
/* 1803f22d0: mov qword ptr [rbx + 0x20], rdi */
L_1803f22d0_0:;
L_1803f22d0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x20))));
L_1803f22d0_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803f22d0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f22d0_4:;
/* 1803f22d4: mov rcx, qword ptr [rbx + 0x28] */
L_1803f22d4_0:;
L_1803f22d4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803f22d4_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f22d4_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803f22d4_4:;
/* 1803f22d8: call 0x180609c16 */
L_1803f22d8_0:;
L_1803f22d8_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f22d8_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f22dd)));
L_1803f22d8_3:;
return (uint64_t)UINT64_C(0x180609c16);
L_1803f22d8_4:;
return UINT64_C(0x1803f22dd);
}
uint64_t b_1803f22dd(CPU*s){
/* 1803f22dd: mov qword ptr [rbx + 0x28], rdi */
L_1803f22dd_0:;
L_1803f22dd_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803f22dd_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803f22dd_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f22dd_4:;
/* 1803f22e1: mov rcx, qword ptr [rbx + 0x30] */
L_1803f22e1_0:;
L_1803f22e1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803f22e1_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f22e1_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803f22e1_4:;
/* 1803f22e5: call 0x180609c16 */
L_1803f22e5_0:;
L_1803f22e5_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f22e5_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f22ea)));
L_1803f22e5_3:;
return (uint64_t)UINT64_C(0x180609c16);
L_1803f22e5_4:;
return UINT64_C(0x1803f22ea);
}
uint64_t b_1803f22ea(CPU*s){
/* 1803f22ea: mov qword ptr [rbx + 0x30], rdi */
L_1803f22ea_0:;
L_1803f22ea_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803f22ea_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803f22ea_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f22ea_4:;
/* 1803f22ee: mov rcx, qword ptr [rbx + 0x10] */
L_1803f22ee_0:;
L_1803f22ee_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803f22ee_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f22ee_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803f22ee_4:;
/* 1803f22f2: call 0x1803f1960 */
L_1803f22f2_0:;
L_1803f22f2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f22f2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f22f7)));
L_1803f22f2_3:;
return (uint64_t)UINT64_C(0x1803f1960);
L_1803f22f2_4:;
return UINT64_C(0x1803f22f7);
}
uint64_t b_1803f22f7(CPU*s){
/* 1803f22f7: mov qword ptr [rbx + 0x10], rdi */
L_1803f22f7_0:;
L_1803f22f7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803f22f7_2:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803f22f7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803f22f7_4:;
/* 1803f22fb: mov rcx, rbx */
L_1803f22fb_0:;
L_1803f22fb_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803f22fb_2:;
/* 1803f22fe: mov rbx, qword ptr [rsp + 0x48] */
L_1803f22fe_0:;
L_1803f22fe_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803f22fe_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f22fe_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803f22fe_4:;
/* 1803f2303: add rsp, 0x30 */
L_1803f2303_0:;
L_1803f2303_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2303_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803f2303_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803f2303_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2303_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2303_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2303_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803f2303_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803f2303_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803f2303_10:;
/* 1803f2307: pop rdi */
L_1803f2307_0:;
L_1803f2307_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803f2307_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2307_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2307_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803f2307_5:;
/* 1803f2308: jmp 0x1803ed850 */
L_1803f2308_0:;
L_1803f2308_1:;
return UINT64_C(0x1803ed850);
L_1803f2308_2:;
return UINT64_C(0x1803f230d);
}
uint64_t b_1803f2310(CPU*s){
/* 1803f2310: push rbx */
L_1803f2310_0:;
L_1803f2310_1:;
wr(s->u,29,8,rd(s->r,24,8));
L_1803f2310_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2310_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,29,8));
L_1803f2310_4:;
/* 1803f2312: push rsi */
L_1803f2312_0:;
L_1803f2312_1:;
wr(s->u,29,8,rd(s->r,48,8));
L_1803f2312_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2312_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,29,8));
L_1803f2312_4:;
/* 1803f2313: push rdi */
L_1803f2313_0:;
L_1803f2313_1:;
wr(s->u,29,8,rd(s->r,56,8));
L_1803f2313_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2313_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,29,8));
L_1803f2313_4:;
/* 1803f2314: sub rsp, 0x20 */
L_1803f2314_0:;
L_1803f2314_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803f2314_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803f2314_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803f2314_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2314_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2314_6:;
wr(s->u,37,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2314_7:;
wr(s->u,45,1,pop(rd(s->u,37,8),8));
L_1803f2314_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803f2314_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803f2314_10:;
/* 1803f2318: movss xmm0, dword ptr [rip + 0x25e1b0] */
L_1803f2318_0:;
L_1803f2318_1:;
wr(s->r,4608,4,mr(UINT64_C(0x1806504d0),4));
L_1803f2318_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803f2318_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803f2318_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803f2318_5:;
/* 1803f2320: movss xmm1, dword ptr [rip + 0x25a91c] */
L_1803f2320_0:;
L_1803f2320_1:;
wr(s->r,4672,4,mr(UINT64_C(0x18064cc44),4));
L_1803f2320_2:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803f2320_3:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803f2320_4:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803f2320_5:;
/* 1803f2328: movsd xmm3, qword ptr [rip + 0x41b2f8] */
L_1803f2328_0:;
L_1803f2328_1:;
wr(s->r,4800,8,mr(UINT64_C(0x18080d628),8));
L_1803f2328_2:;
wr(s->r,4808,8,((U)UINT64_C(0x0)));
L_1803f2328_3:;
/* 1803f2330: movaps xmmword ptr [rsp + 0x10], xmm6 */
L_1803f2330_0:;
L_1803f2330_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803f2330_2:;
wr(s->u,12,16,rd(s->r,4992,16));
L_1803f2330_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,12,16));
L_1803f2330_4:;
/* 1803f2335: mov rbx, r9 */
L_1803f2335_0:;
L_1803f2335_1:;
wr(s->r,24,8,rd(s->r,136,8));
L_1803f2335_2:;
/* 1803f2338: mov r11, r8 */
L_1803f2338_0:;
L_1803f2338_1:;
wr(s->r,152,8,rd(s->r,128,8));
L_1803f2338_2:;
/* 1803f233b: mov rdi, rdx */
L_1803f233b_0:;
L_1803f233b_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803f233b_2:;
/* 1803f233e: mov rsi, rcx */
L_1803f233e_0:;
L_1803f233e_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803f233e_2:;
/* 1803f2341: xorpd xmm6, xmm6 */
L_1803f2341_0:;
L_1803f2341_1:;
wr(s->r,4992,8,(rd(s->r,4992,8)^rd(s->r,4992,8)));
L_1803f2341_2:;
wr(s->r,5000,8,(rd(s->r,5000,8)^rd(s->r,5000,8)));
L_1803f2341_3:;
/* 1803f2345: movsd xmm4, qword ptr [rip + 0x41b2d3] */
L_1803f2345_0:;
L_1803f2345_1:;
wr(s->r,4864,8,mr(UINT64_C(0x18080d620),8));
L_1803f2345_2:;
wr(s->r,4872,8,((U)UINT64_C(0x0)));
L_1803f2345_3:;
/* 1803f234d: movss dword ptr [rsp + 4], xmm0 */
L_1803f234d_0:;
L_1803f234d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x4))+rd(s->r,32,8)));
L_1803f234d_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803f234d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803f234d_4:;
/* 1803f2353: movss dword ptr [rsp + 0xc], xmm0 */
L_1803f2353_0:;
L_1803f2353_1:;
wr(s->u,0,8,(((U)UINT64_C(0xc))+rd(s->r,32,8)));
L_1803f2353_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803f2353_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803f2353_4:;
/* 1803f2359: movss xmm0, dword ptr [r8] */
L_1803f2359_0:;
L_1803f2359_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,128,8),4));
L_1803f2359_2:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803f2359_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803f2359_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803f2359_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803f2359_6:;
/* 1803f235e: movss dword ptr [rsp], xmm1 */
L_1803f235e_0:;
L_1803f235e_1:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803f235e_2:;
mw((uint64_t)rd(s->r,32,8),4,rd(s->u,8,4));
L_1803f235e_3:;
/* 1803f2363: mulss xmm0, dword ptr [rdx] */
L_1803f2363_0:;
L_1803f2363_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803f2363_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803f2363_3:;
/* 1803f2367: movss dword ptr [rsp + 8], xmm1 */
L_1803f2367_0:;
L_1803f2367_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803f2367_2:;
wr(s->u,8,4,rd(s->r,4672,4));
L_1803f2367_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803f2367_4:;
/* 1803f236d: unpcklps xmm0, xmm0 */
L_1803f236d_0:;
L_1803f236d_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803f236d_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803f236d_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803f236d_4:;
/* 1803f2370: cvtps2pd xmm1, xmm0 */
L_1803f2370_0:;
L_1803f2370_1:;
wr(s->u,51,8,rd(s->r,4608,8));
L_1803f2370_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,51,4),4),8));
L_1803f2370_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,55,4),4),8));
L_1803f2370_4:;
/* 1803f2373: comisd xmm1, xmm6 */
L_1803f2373_0:;
L_1803f2373_1:;
wr(s->u,47,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803f2373_2:;
wr(s->u,48,1,isnan(fv(rd(s->r,4992,8),8)));
L_1803f2373_3:;
wr(s->r,514,1,((rd(s->u,47,1)!=0)||(rd(s->u,48,1)!=0)));
L_1803f2373_4:;
wr(s->u,49,1,(fv(rd(s->r,4672,8),8)==fv(rd(s->r,4992,8),8)));
L_1803f2373_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,49,1)));
L_1803f2373_6:;
wr(s->u,50,1,(fv(rd(s->r,4672,8),8)<fv(rd(s->r,4992,8),8)));
L_1803f2373_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,50,1)));
L_1803f2373_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2373_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f2373_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f2373_11:;
/* 1803f2377: jae 0x1803f2385 */
L_1803f2377_0:;
L_1803f2377_1:;
wr(s->u,28,1,(!rd(s->r,512,1)));
L_1803f2377_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803f2385);}
L_1803f2377_3:;
return UINT64_C(0x1803f2379);
}
uint64_t b_1803f2379(CPU*s){
/* 1803f2379: comisd xmm1, xmm4 */
L_1803f2379_0:;
L_1803f2379_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803f2379_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4864,8),8)));
L_1803f2379_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803f2379_4:;
wr(s->u,2,1,(fv(rd(s->r,4672,8),8)==fv(rd(s->r,4864,8),8)));
L_1803f2379_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803f2379_6:;
wr(s->u,3,1,(fv(rd(s->r,4672,8),8)<fv(rd(s->r,4864,8),8)));
L_1803f2379_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803f2379_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2379_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f2379_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f2379_11:;
/* 1803f237d: jb 0x1803f238f */
L_1803f237d_0:;
L_1803f237d_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803f238f);}
L_1803f237d_2:;
return UINT64_C(0x1803f237f);
}
uint64_t b_1803f237f(CPU*s){
/* 1803f237f: movapd xmm1, xmm4 */
L_1803f237f_0:;
L_1803f237f_1:;
wr(s->r,4672,8,rd(s->r,4864,8));
L_1803f237f_2:;
wr(s->r,4680,8,rd(s->r,4872,8));
L_1803f237f_3:;
/* 1803f2383: jmp 0x1803f238f */
L_1803f2383_0:;
L_1803f2383_1:;
return UINT64_C(0x1803f238f);
L_1803f2383_2:;
return UINT64_C(0x1803f2385);
}
uint64_t b_1803f2385(CPU*s){
/* 1803f2385: comisd xmm1, xmm3 */
L_1803f2385_0:;
L_1803f2385_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803f2385_2:;
wr(s->u,3,1,isnan(fv(rd(s->r,4800,8),8)));
L_1803f2385_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803f2385_4:;
wr(s->u,4,1,(fv(rd(s->r,4672,8),8)==fv(rd(s->r,4800,8),8)));
L_1803f2385_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803f2385_6:;
wr(s->u,5,1,(fv(rd(s->r,4672,8),8)<fv(rd(s->r,4800,8),8)));
L_1803f2385_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803f2385_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2385_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f2385_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f2385_11:;
/* 1803f2389: ja 0x1803f238f */
L_1803f2389_0:;
L_1803f2389_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803f2389_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803f2389_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803f238f);}
L_1803f2389_4:;
return UINT64_C(0x1803f238b);
}
uint64_t b_1803f238b(CPU*s){
/* 1803f238b: movapd xmm1, xmm3 */
L_1803f238b_0:;
L_1803f238b_1:;
wr(s->r,4672,8,rd(s->r,4800,8));
L_1803f238b_2:;
wr(s->r,4680,8,rd(s->r,4808,8));
L_1803f238b_3:;
/* 1803f238f: cvtsd2ss xmm0, xmm1 */
L_1803f238f_0:;
L_1803f238f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4672,8),8),4));
L_1803f238f_2:;
/* 1803f2393: movss dword ptr [r9], xmm0 */
L_1803f2393_0:;
L_1803f2393_1:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803f2393_2:;
mw((uint64_t)rd(s->r,136,8),4,rd(s->u,8,4));
L_1803f2393_3:;
/* 1803f2398: movss xmm0, dword ptr [r8 + 4] */
L_1803f2398_0:;
L_1803f2398_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803f2398_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f2398_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803f2398_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803f2398_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803f2398_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803f2398_7:;
/* 1803f239e: mulss xmm0, dword ptr [rdx + 4] */
L_1803f239e_0:;
L_1803f239e_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803f239e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f239e_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803f239e_4:;
/* 1803f23a3: unpcklps xmm0, xmm0 */
L_1803f23a3_0:;
L_1803f23a3_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803f23a3_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803f23a3_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803f23a3_4:;
/* 1803f23a6: cvtps2pd xmm1, xmm0 */
L_1803f23a6_0:;
L_1803f23a6_1:;
wr(s->u,17,8,rd(s->r,4608,8));
L_1803f23a6_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,17,4),4),8));
L_1803f23a6_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,21,4),4),8));
L_1803f23a6_4:;
/* 1803f23a9: comisd xmm1, xmm6 */
L_1803f23a9_0:;
L_1803f23a9_1:;
wr(s->u,13,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803f23a9_2:;
wr(s->u,14,1,isnan(fv(rd(s->r,4992,8),8)));
L_1803f23a9_3:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803f23a9_4:;
wr(s->u,15,1,(fv(rd(s->r,4672,8),8)==fv(rd(s->r,4992,8),8)));
L_1803f23a9_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803f23a9_6:;
wr(s->u,16,1,(fv(rd(s->r,4672,8),8)<fv(rd(s->r,4992,8),8)));
L_1803f23a9_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803f23a9_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f23a9_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f23a9_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f23a9_11:;
/* 1803f23ad: jae 0x1803f23bb */
L_1803f23ad_0:;
L_1803f23ad_1:;
wr(s->u,12,1,(!rd(s->r,512,1)));
L_1803f23ad_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803f23bb);}
L_1803f23ad_3:;
return UINT64_C(0x1803f23af);
}
uint64_t b_1803f238f(CPU*s){
/* 1803f238f: cvtsd2ss xmm0, xmm1 */
L_1803f238f_0:;
L_1803f238f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4672,8),8),4));
L_1803f238f_2:;
/* 1803f2393: movss dword ptr [r9], xmm0 */
L_1803f2393_0:;
L_1803f2393_1:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803f2393_2:;
mw((uint64_t)rd(s->r,136,8),4,rd(s->u,8,4));
L_1803f2393_3:;
/* 1803f2398: movss xmm0, dword ptr [r8 + 4] */
L_1803f2398_0:;
L_1803f2398_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803f2398_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f2398_3:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803f2398_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803f2398_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803f2398_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803f2398_7:;
/* 1803f239e: mulss xmm0, dword ptr [rdx + 4] */
L_1803f239e_0:;
L_1803f239e_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803f239e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f239e_3:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803f239e_4:;
/* 1803f23a3: unpcklps xmm0, xmm0 */
L_1803f23a3_0:;
L_1803f23a3_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803f23a3_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803f23a3_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803f23a3_4:;
/* 1803f23a6: cvtps2pd xmm1, xmm0 */
L_1803f23a6_0:;
L_1803f23a6_1:;
wr(s->u,17,8,rd(s->r,4608,8));
L_1803f23a6_2:;
wr(s->r,4672,8,fb(fv(rd(s->u,17,4),4),8));
L_1803f23a6_3:;
wr(s->r,4680,8,fb(fv(rd(s->u,21,4),4),8));
L_1803f23a6_4:;
/* 1803f23a9: comisd xmm1, xmm6 */
L_1803f23a9_0:;
L_1803f23a9_1:;
wr(s->u,13,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803f23a9_2:;
wr(s->u,14,1,isnan(fv(rd(s->r,4992,8),8)));
L_1803f23a9_3:;
wr(s->r,514,1,((rd(s->u,13,1)!=0)||(rd(s->u,14,1)!=0)));
L_1803f23a9_4:;
wr(s->u,15,1,(fv(rd(s->r,4672,8),8)==fv(rd(s->r,4992,8),8)));
L_1803f23a9_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,15,1)));
L_1803f23a9_6:;
wr(s->u,16,1,(fv(rd(s->r,4672,8),8)<fv(rd(s->r,4992,8),8)));
L_1803f23a9_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,16,1)));
L_1803f23a9_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f23a9_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f23a9_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f23a9_11:;
/* 1803f23ad: jae 0x1803f23bb */
L_1803f23ad_0:;
L_1803f23ad_1:;
wr(s->u,12,1,(!rd(s->r,512,1)));
L_1803f23ad_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803f23bb);}
L_1803f23ad_3:;
return UINT64_C(0x1803f23af);
}
uint64_t b_1803f23af(CPU*s){
/* 1803f23af: comisd xmm1, xmm4 */
L_1803f23af_0:;
L_1803f23af_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803f23af_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4864,8),8)));
L_1803f23af_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803f23af_4:;
wr(s->u,2,1,(fv(rd(s->r,4672,8),8)==fv(rd(s->r,4864,8),8)));
L_1803f23af_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803f23af_6:;
wr(s->u,3,1,(fv(rd(s->r,4672,8),8)<fv(rd(s->r,4864,8),8)));
L_1803f23af_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803f23af_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f23af_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f23af_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f23af_11:;
/* 1803f23b3: jb 0x1803f23c5 */
L_1803f23b3_0:;
L_1803f23b3_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803f23c5);}
L_1803f23b3_2:;
return UINT64_C(0x1803f23b5);
}
uint64_t b_1803f23b5(CPU*s){
/* 1803f23b5: movapd xmm1, xmm4 */
L_1803f23b5_0:;
L_1803f23b5_1:;
wr(s->r,4672,8,rd(s->r,4864,8));
L_1803f23b5_2:;
wr(s->r,4680,8,rd(s->r,4872,8));
L_1803f23b5_3:;
/* 1803f23b9: jmp 0x1803f23c5 */
L_1803f23b9_0:;
L_1803f23b9_1:;
return UINT64_C(0x1803f23c5);
L_1803f23b9_2:;
return UINT64_C(0x1803f23bb);
}
uint64_t b_1803f23bb(CPU*s){
/* 1803f23bb: comisd xmm1, xmm3 */
L_1803f23bb_0:;
L_1803f23bb_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4672,8),8)));
L_1803f23bb_2:;
wr(s->u,3,1,isnan(fv(rd(s->r,4800,8),8)));
L_1803f23bb_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803f23bb_4:;
wr(s->u,4,1,(fv(rd(s->r,4672,8),8)==fv(rd(s->r,4800,8),8)));
L_1803f23bb_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803f23bb_6:;
wr(s->u,5,1,(fv(rd(s->r,4672,8),8)<fv(rd(s->r,4800,8),8)));
L_1803f23bb_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803f23bb_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f23bb_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f23bb_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f23bb_11:;
/* 1803f23bf: ja 0x1803f23c5 */
L_1803f23bf_0:;
L_1803f23bf_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803f23bf_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803f23bf_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803f23c5);}
L_1803f23bf_4:;
return UINT64_C(0x1803f23c1);
}
uint64_t b_1803f23c1(CPU*s){
/* 1803f23c1: movapd xmm1, xmm3 */
L_1803f23c1_0:;
L_1803f23c1_1:;
wr(s->r,4672,8,rd(s->r,4800,8));
L_1803f23c1_2:;
wr(s->r,4680,8,rd(s->r,4808,8));
L_1803f23c1_3:;
/* 1803f23c5: or edx, 0xffffffff */
L_1803f23c5_0:;
L_1803f23c5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f23c5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f23c5_3:;
wr(s->r,16,4,(rd(s->r,16,4)|((U)UINT64_C(0xffffffff))));
L_1803f23c5_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f23c5_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f23c5_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803f23c5_7:;
wr(s->u,45,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803f23c5_8:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803f23c5_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803f23c5_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803f23c5_11:;
/* 1803f23c8: lea rcx, [r8 + 8] */
L_1803f23c8_0:;
L_1803f23c8_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803f23c8_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803f23c8_3:;
/* 1803f23cc: lea rax, [r8 + 0xc] */
L_1803f23cc_0:;
L_1803f23cc_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xc))));
L_1803f23cc_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803f23cc_3:;
/* 1803f23d0: cvtsd2ss xmm0, xmm1 */
L_1803f23d0_0:;
L_1803f23d0_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4672,8),8),4));
L_1803f23d0_2:;
/* 1803f23d4: lea r10d, [rdx + 4] */
L_1803f23d4_0:;
L_1803f23d4_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803f23d4_2:;
wr(s->r,144,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803f23d4_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803f23d4_4:;
/* 1803f23d8: movss dword ptr [r9 + 4], xmm0 */
L_1803f23d8_0:;
L_1803f23d8_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803f23d8_2:;
wr(s->u,40,4,rd(s->r,4608,4));
L_1803f23d8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,40,4));
L_1803f23d8_4:;
/* 1803f23de: sub r9, r8 */
L_1803f23de_0:;
L_1803f23de_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,128,8)));
L_1803f23de_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,128,8),8,1));
L_1803f23de_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,128,8)));
L_1803f23de_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f23de_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803f23de_6:;
wr(s->u,45,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803f23de_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803f23de_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803f23de_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803f23de_10:;
/* 1803f23e1: mov r8, rdi */
L_1803f23e1_0:;
L_1803f23e1_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803f23e1_2:;
/* 1803f23e4: sub r8, r11 */
L_1803f23e4_0:;
L_1803f23e4_1:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->r,152,8)));
L_1803f23e4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->r,152,8),8,1));
L_1803f23e4_3:;
wr(s->r,128,8,(rd(s->r,128,8)-rd(s->r,152,8)));
L_1803f23e4_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f23e4_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803f23e4_6:;
wr(s->u,45,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803f23e4_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803f23e4_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803f23e4_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803f23e4_10:;
/* 1803f23e7: nop word ptr [rax + rax] */
L_1803f23e7_0:;
L_1803f23e7_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f23e7_2:;
wr(s->u,32,8,(rd(s->r,0,8)+rd(s->u,24,8)));
L_1803f23e7_3:;
/* 1803f23f0: movss xmm1, dword ptr [r8 + rax] */
L_1803f23f0_0:;
L_1803f23f0_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f23f0_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803f23f0_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803f23f0_4:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803f23f0_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803f23f0_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803f23f0_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803f23f0_8:;
/* 1803f23f6: movss xmm0, dword ptr [rcx] */
L_1803f23f6_0:;
L_1803f23f6_1:;
wr(s->u,40,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803f23f6_2:;
wr(s->r,4608,4,rd(s->u,40,4));
L_1803f23f6_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803f23f6_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803f23f6_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803f23f6_6:;
/* 1803f23fa: movd xmm5, edx */
L_1803f23fa_0:;
L_1803f23fa_1:;
wr(s->r,4928,16,rd(s->r,16,4));
L_1803f23fa_2:;
/* 1803f23fe: mulss xmm1, dword ptr [rax] */
L_1803f23fe_0:;
L_1803f23fe_1:;
wr(s->u,40,4,mr((uint64_t)rd(s->r,0,8),4));
L_1803f23fe_2:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,40,4),4),4));
L_1803f23fe_3:;
/* 1803f2402: mulss xmm0, dword ptr [r8 + rcx] */
L_1803f2402_0:;
L_1803f2402_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803f2402_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803f2402_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803f2402_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,40,4),4),4));
L_1803f2402_5:;
/* 1803f2408: cvtdq2pd xmm5, xmm5 */
L_1803f2408_0:;
L_1803f2408_1:;
wr(s->u,59,8,rd(s->r,4928,8));
L_1803f2408_2:;
wr(s->r,4928,8,fb((double)sx(rd(s->u,59,4),4),8));
L_1803f2408_3:;
wr(s->r,4936,8,fb((double)sx(rd(s->u,63,4),4),8));
L_1803f2408_4:;
/* 1803f240c: addss xmm1, xmm0 */
L_1803f240c_0:;
L_1803f240c_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803f240c_2:;
/* 1803f2410: unpcklps xmm1, xmm1 */
L_1803f2410_0:;
L_1803f2410_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803f2410_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803f2410_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803f2410_4:;
/* 1803f2413: cvtps2pd xmm2, xmm1 */
L_1803f2413_0:;
L_1803f2413_1:;
wr(s->u,67,8,rd(s->r,4672,8));
L_1803f2413_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,67,4),4),8));
L_1803f2413_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,71,4),4),8));
L_1803f2413_4:;
/* 1803f2416: mulsd xmm2, xmm5 */
L_1803f2416_0:;
L_1803f2416_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,4928,8),8),8));
L_1803f2416_2:;
/* 1803f241a: comisd xmm2, xmm6 */
L_1803f241a_0:;
L_1803f241a_1:;
wr(s->u,55,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803f241a_2:;
wr(s->u,56,1,isnan(fv(rd(s->r,4992,8),8)));
L_1803f241a_3:;
wr(s->r,514,1,((rd(s->u,55,1)!=0)||(rd(s->u,56,1)!=0)));
L_1803f241a_4:;
wr(s->u,57,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4992,8),8)));
L_1803f241a_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,57,1)));
L_1803f241a_6:;
wr(s->u,58,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4992,8),8)));
L_1803f241a_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,58,1)));
L_1803f241a_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f241a_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f241a_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f241a_11:;
/* 1803f241e: jae 0x1803f242c */
L_1803f241e_0:;
L_1803f241e_1:;
wr(s->u,44,1,(!rd(s->r,512,1)));
L_1803f241e_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803f242c);}
L_1803f241e_3:;
return UINT64_C(0x1803f2420);
}
uint64_t b_1803f23c5(CPU*s){
/* 1803f23c5: or edx, 0xffffffff */
L_1803f23c5_0:;
L_1803f23c5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f23c5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f23c5_3:;
wr(s->r,16,4,(rd(s->r,16,4)|((U)UINT64_C(0xffffffff))));
L_1803f23c5_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f23c5_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f23c5_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803f23c5_7:;
wr(s->u,45,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803f23c5_8:;
wr(s->u,53,1,pop(rd(s->u,45,4),4));
L_1803f23c5_9:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803f23c5_10:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803f23c5_11:;
/* 1803f23c8: lea rcx, [r8 + 8] */
L_1803f23c8_0:;
L_1803f23c8_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803f23c8_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803f23c8_3:;
/* 1803f23cc: lea rax, [r8 + 0xc] */
L_1803f23cc_0:;
L_1803f23cc_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xc))));
L_1803f23cc_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803f23cc_3:;
/* 1803f23d0: cvtsd2ss xmm0, xmm1 */
L_1803f23d0_0:;
L_1803f23d0_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4672,8),8),4));
L_1803f23d0_2:;
/* 1803f23d4: lea r10d, [rdx + 4] */
L_1803f23d4_0:;
L_1803f23d4_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803f23d4_2:;
wr(s->r,144,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803f23d4_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803f23d4_4:;
/* 1803f23d8: movss dword ptr [r9 + 4], xmm0 */
L_1803f23d8_0:;
L_1803f23d8_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803f23d8_2:;
wr(s->u,40,4,rd(s->r,4608,4));
L_1803f23d8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,40,4));
L_1803f23d8_4:;
/* 1803f23de: sub r9, r8 */
L_1803f23de_0:;
L_1803f23de_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,128,8)));
L_1803f23de_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,128,8),8,1));
L_1803f23de_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,128,8)));
L_1803f23de_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f23de_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803f23de_6:;
wr(s->u,45,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803f23de_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803f23de_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803f23de_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803f23de_10:;
/* 1803f23e1: mov r8, rdi */
L_1803f23e1_0:;
L_1803f23e1_1:;
wr(s->r,128,8,rd(s->r,56,8));
L_1803f23e1_2:;
/* 1803f23e4: sub r8, r11 */
L_1803f23e4_0:;
L_1803f23e4_1:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->r,152,8)));
L_1803f23e4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->r,152,8),8,1));
L_1803f23e4_3:;
wr(s->r,128,8,(rd(s->r,128,8)-rd(s->r,152,8)));
L_1803f23e4_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f23e4_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803f23e4_6:;
wr(s->u,45,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803f23e4_7:;
wr(s->u,53,1,pop(rd(s->u,45,8),8));
L_1803f23e4_8:;
wr(s->u,54,1,(rd(s->u,53,1)&((U)UINT64_C(0x1))));
L_1803f23e4_9:;
wr(s->r,514,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803f23e4_10:;
/* 1803f23e7: nop word ptr [rax + rax] */
L_1803f23e7_0:;
L_1803f23e7_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f23e7_2:;
wr(s->u,32,8,(rd(s->r,0,8)+rd(s->u,24,8)));
L_1803f23e7_3:;
/* 1803f23f0: movss xmm1, dword ptr [r8 + rax] */
L_1803f23f0_0:;
L_1803f23f0_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f23f0_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803f23f0_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803f23f0_4:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803f23f0_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803f23f0_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803f23f0_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803f23f0_8:;
/* 1803f23f6: movss xmm0, dword ptr [rcx] */
L_1803f23f6_0:;
L_1803f23f6_1:;
wr(s->u,40,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803f23f6_2:;
wr(s->r,4608,4,rd(s->u,40,4));
L_1803f23f6_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803f23f6_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803f23f6_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803f23f6_6:;
/* 1803f23fa: movd xmm5, edx */
L_1803f23fa_0:;
L_1803f23fa_1:;
wr(s->r,4928,16,rd(s->r,16,4));
L_1803f23fa_2:;
/* 1803f23fe: mulss xmm1, dword ptr [rax] */
L_1803f23fe_0:;
L_1803f23fe_1:;
wr(s->u,40,4,mr((uint64_t)rd(s->r,0,8),4));
L_1803f23fe_2:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,40,4),4),4));
L_1803f23fe_3:;
/* 1803f2402: mulss xmm0, dword ptr [r8 + rcx] */
L_1803f2402_0:;
L_1803f2402_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803f2402_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803f2402_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803f2402_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,40,4),4),4));
L_1803f2402_5:;
/* 1803f2408: cvtdq2pd xmm5, xmm5 */
L_1803f2408_0:;
L_1803f2408_1:;
wr(s->u,59,8,rd(s->r,4928,8));
L_1803f2408_2:;
wr(s->r,4928,8,fb((double)sx(rd(s->u,59,4),4),8));
L_1803f2408_3:;
wr(s->r,4936,8,fb((double)sx(rd(s->u,63,4),4),8));
L_1803f2408_4:;
/* 1803f240c: addss xmm1, xmm0 */
L_1803f240c_0:;
L_1803f240c_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803f240c_2:;
/* 1803f2410: unpcklps xmm1, xmm1 */
L_1803f2410_0:;
L_1803f2410_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803f2410_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803f2410_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803f2410_4:;
/* 1803f2413: cvtps2pd xmm2, xmm1 */
L_1803f2413_0:;
L_1803f2413_1:;
wr(s->u,67,8,rd(s->r,4672,8));
L_1803f2413_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,67,4),4),8));
L_1803f2413_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,71,4),4),8));
L_1803f2413_4:;
/* 1803f2416: mulsd xmm2, xmm5 */
L_1803f2416_0:;
L_1803f2416_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,4928,8),8),8));
L_1803f2416_2:;
/* 1803f241a: comisd xmm2, xmm6 */
L_1803f241a_0:;
L_1803f241a_1:;
wr(s->u,55,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803f241a_2:;
wr(s->u,56,1,isnan(fv(rd(s->r,4992,8),8)));
L_1803f241a_3:;
wr(s->r,514,1,((rd(s->u,55,1)!=0)||(rd(s->u,56,1)!=0)));
L_1803f241a_4:;
wr(s->u,57,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4992,8),8)));
L_1803f241a_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,57,1)));
L_1803f241a_6:;
wr(s->u,58,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4992,8),8)));
L_1803f241a_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,58,1)));
L_1803f241a_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f241a_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f241a_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f241a_11:;
/* 1803f241e: jae 0x1803f242c */
L_1803f241e_0:;
L_1803f241e_1:;
wr(s->u,44,1,(!rd(s->r,512,1)));
L_1803f241e_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803f242c);}
L_1803f241e_3:;
return UINT64_C(0x1803f2420);
}
uint64_t b_1803f23f0(CPU*s){
/* 1803f23f0: movss xmm1, dword ptr [r8 + rax] */
L_1803f23f0_0:;
L_1803f23f0_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f23f0_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803f23f0_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803f23f0_4:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803f23f0_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803f23f0_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803f23f0_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803f23f0_8:;
/* 1803f23f6: movss xmm0, dword ptr [rcx] */
L_1803f23f6_0:;
L_1803f23f6_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803f23f6_2:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803f23f6_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803f23f6_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803f23f6_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803f23f6_6:;
/* 1803f23fa: movd xmm5, edx */
L_1803f23fa_0:;
L_1803f23fa_1:;
wr(s->r,4928,16,rd(s->r,16,4));
L_1803f23fa_2:;
/* 1803f23fe: mulss xmm1, dword ptr [rax] */
L_1803f23fe_0:;
L_1803f23fe_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,0,8),4));
L_1803f23fe_2:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,16,4),4),4));
L_1803f23fe_3:;
/* 1803f2402: mulss xmm0, dword ptr [r8 + rcx] */
L_1803f2402_0:;
L_1803f2402_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803f2402_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803f2402_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803f2402_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803f2402_5:;
/* 1803f2408: cvtdq2pd xmm5, xmm5 */
L_1803f2408_0:;
L_1803f2408_1:;
wr(s->u,25,8,rd(s->r,4928,8));
L_1803f2408_2:;
wr(s->r,4928,8,fb((double)sx(rd(s->u,25,4),4),8));
L_1803f2408_3:;
wr(s->r,4936,8,fb((double)sx(rd(s->u,29,4),4),8));
L_1803f2408_4:;
/* 1803f240c: addss xmm1, xmm0 */
L_1803f240c_0:;
L_1803f240c_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803f240c_2:;
/* 1803f2410: unpcklps xmm1, xmm1 */
L_1803f2410_0:;
L_1803f2410_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803f2410_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803f2410_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803f2410_4:;
/* 1803f2413: cvtps2pd xmm2, xmm1 */
L_1803f2413_0:;
L_1803f2413_1:;
wr(s->u,33,8,rd(s->r,4672,8));
L_1803f2413_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,33,4),4),8));
L_1803f2413_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,37,4),4),8));
L_1803f2413_4:;
/* 1803f2416: mulsd xmm2, xmm5 */
L_1803f2416_0:;
L_1803f2416_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,4928,8),8),8));
L_1803f2416_2:;
/* 1803f241a: comisd xmm2, xmm6 */
L_1803f241a_0:;
L_1803f241a_1:;
wr(s->u,21,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803f241a_2:;
wr(s->u,22,1,isnan(fv(rd(s->r,4992,8),8)));
L_1803f241a_3:;
wr(s->r,514,1,((rd(s->u,21,1)!=0)||(rd(s->u,22,1)!=0)));
L_1803f241a_4:;
wr(s->u,23,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4992,8),8)));
L_1803f241a_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,23,1)));
L_1803f241a_6:;
wr(s->u,24,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4992,8),8)));
L_1803f241a_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803f241a_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f241a_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f241a_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f241a_11:;
/* 1803f241e: jae 0x1803f242c */
L_1803f241e_0:;
L_1803f241e_1:;
wr(s->u,20,1,(!rd(s->r,512,1)));
L_1803f241e_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803f242c);}
L_1803f241e_3:;
return UINT64_C(0x1803f2420);
}
uint64_t b_1803f2420(CPU*s){
/* 1803f2420: comisd xmm2, xmm4 */
L_1803f2420_0:;
L_1803f2420_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803f2420_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4864,8),8)));
L_1803f2420_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803f2420_4:;
wr(s->u,2,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4864,8),8)));
L_1803f2420_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803f2420_6:;
wr(s->u,3,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4864,8),8)));
L_1803f2420_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803f2420_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2420_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f2420_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f2420_11:;
/* 1803f2424: jb 0x1803f2436 */
L_1803f2424_0:;
L_1803f2424_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803f2436);}
L_1803f2424_2:;
return UINT64_C(0x1803f2426);
}
uint64_t b_1803f2426(CPU*s){
/* 1803f2426: movapd xmm2, xmm4 */
L_1803f2426_0:;
L_1803f2426_1:;
wr(s->r,4736,8,rd(s->r,4864,8));
L_1803f2426_2:;
wr(s->r,4744,8,rd(s->r,4872,8));
L_1803f2426_3:;
/* 1803f242a: jmp 0x1803f2436 */
L_1803f242a_0:;
L_1803f242a_1:;
return UINT64_C(0x1803f2436);
L_1803f242a_2:;
return UINT64_C(0x1803f242c);
}
uint64_t b_1803f242c(CPU*s){
/* 1803f242c: comisd xmm2, xmm3 */
L_1803f242c_0:;
L_1803f242c_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803f242c_2:;
wr(s->u,3,1,isnan(fv(rd(s->r,4800,8),8)));
L_1803f242c_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803f242c_4:;
wr(s->u,4,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4800,8),8)));
L_1803f242c_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803f242c_6:;
wr(s->u,5,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4800,8),8)));
L_1803f242c_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803f242c_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f242c_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f242c_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f242c_11:;
/* 1803f2430: ja 0x1803f2436 */
L_1803f2430_0:;
L_1803f2430_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803f2430_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803f2430_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803f2436);}
L_1803f2430_4:;
return UINT64_C(0x1803f2432);
}
uint64_t b_1803f2432(CPU*s){
/* 1803f2432: movapd xmm2, xmm3 */
L_1803f2432_0:;
L_1803f2432_1:;
wr(s->r,4736,8,rd(s->r,4800,8));
L_1803f2432_2:;
wr(s->r,4744,8,rd(s->r,4808,8));
L_1803f2432_3:;
/* 1803f2436: cvtsd2ss xmm0, xmm2 */
L_1803f2436_0:;
L_1803f2436_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4736,8),8),4));
L_1803f2436_2:;
/* 1803f243a: movss dword ptr [r9 + rcx], xmm0 */
L_1803f243a_0:;
L_1803f243a_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803f243a_2:;
wr(s->u,8,8,(rd(s->r,136,8)+rd(s->u,0,8)));
L_1803f243a_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803f243a_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803f243a_5:;
/* 1803f2440: movss xmm1, dword ptr [r8 + rax] */
L_1803f2440_0:;
L_1803f2440_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f2440_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803f2440_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803f2440_4:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803f2440_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803f2440_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803f2440_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803f2440_8:;
/* 1803f2446: movss xmm0, dword ptr [rax] */
L_1803f2446_0:;
L_1803f2446_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,0,8),4));
L_1803f2446_2:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803f2446_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803f2446_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803f2446_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803f2446_6:;
/* 1803f244a: mulss xmm1, dword ptr [rcx] */
L_1803f244a_0:;
L_1803f244a_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803f244a_2:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,16,4),4),4));
L_1803f244a_3:;
/* 1803f244e: mulss xmm0, dword ptr [r8 + rcx] */
L_1803f244e_0:;
L_1803f244e_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803f244e_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803f244e_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803f244e_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803f244e_5:;
/* 1803f2454: subss xmm1, xmm0 */
L_1803f2454_0:;
L_1803f2454_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803f2454_2:;
/* 1803f2458: unpcklps xmm1, xmm1 */
L_1803f2458_0:;
L_1803f2458_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803f2458_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803f2458_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803f2458_4:;
/* 1803f245b: cvtps2pd xmm2, xmm1 */
L_1803f245b_0:;
L_1803f245b_1:;
wr(s->u,25,8,rd(s->r,4672,8));
L_1803f245b_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,25,4),4),8));
L_1803f245b_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,29,4),4),8));
L_1803f245b_4:;
/* 1803f245e: mulsd xmm2, xmm5 */
L_1803f245e_0:;
L_1803f245e_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,4928,8),8),8));
L_1803f245e_2:;
/* 1803f2462: comisd xmm2, xmm6 */
L_1803f2462_0:;
L_1803f2462_1:;
wr(s->u,21,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803f2462_2:;
wr(s->u,22,1,isnan(fv(rd(s->r,4992,8),8)));
L_1803f2462_3:;
wr(s->r,514,1,((rd(s->u,21,1)!=0)||(rd(s->u,22,1)!=0)));
L_1803f2462_4:;
wr(s->u,23,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4992,8),8)));
L_1803f2462_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,23,1)));
L_1803f2462_6:;
wr(s->u,24,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4992,8),8)));
L_1803f2462_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803f2462_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2462_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f2462_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f2462_11:;
/* 1803f2466: jae 0x1803f2474 */
L_1803f2466_0:;
L_1803f2466_1:;
wr(s->u,20,1,(!rd(s->r,512,1)));
L_1803f2466_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803f2474);}
L_1803f2466_3:;
return UINT64_C(0x1803f2468);
}
uint64_t b_1803f2436(CPU*s){
/* 1803f2436: cvtsd2ss xmm0, xmm2 */
L_1803f2436_0:;
L_1803f2436_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4736,8),8),4));
L_1803f2436_2:;
/* 1803f243a: movss dword ptr [r9 + rcx], xmm0 */
L_1803f243a_0:;
L_1803f243a_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803f243a_2:;
wr(s->u,8,8,(rd(s->r,136,8)+rd(s->u,0,8)));
L_1803f243a_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803f243a_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803f243a_5:;
/* 1803f2440: movss xmm1, dword ptr [r8 + rax] */
L_1803f2440_0:;
L_1803f2440_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f2440_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803f2440_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803f2440_4:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803f2440_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803f2440_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803f2440_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803f2440_8:;
/* 1803f2446: movss xmm0, dword ptr [rax] */
L_1803f2446_0:;
L_1803f2446_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,0,8),4));
L_1803f2446_2:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803f2446_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803f2446_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803f2446_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803f2446_6:;
/* 1803f244a: mulss xmm1, dword ptr [rcx] */
L_1803f244a_0:;
L_1803f244a_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803f244a_2:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,16,4),4),4));
L_1803f244a_3:;
/* 1803f244e: mulss xmm0, dword ptr [r8 + rcx] */
L_1803f244e_0:;
L_1803f244e_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803f244e_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803f244e_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803f244e_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803f244e_5:;
/* 1803f2454: subss xmm1, xmm0 */
L_1803f2454_0:;
L_1803f2454_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803f2454_2:;
/* 1803f2458: unpcklps xmm1, xmm1 */
L_1803f2458_0:;
L_1803f2458_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803f2458_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803f2458_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803f2458_4:;
/* 1803f245b: cvtps2pd xmm2, xmm1 */
L_1803f245b_0:;
L_1803f245b_1:;
wr(s->u,25,8,rd(s->r,4672,8));
L_1803f245b_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,25,4),4),8));
L_1803f245b_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,29,4),4),8));
L_1803f245b_4:;
/* 1803f245e: mulsd xmm2, xmm5 */
L_1803f245e_0:;
L_1803f245e_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,4928,8),8),8));
L_1803f245e_2:;
/* 1803f2462: comisd xmm2, xmm6 */
L_1803f2462_0:;
L_1803f2462_1:;
wr(s->u,21,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803f2462_2:;
wr(s->u,22,1,isnan(fv(rd(s->r,4992,8),8)));
L_1803f2462_3:;
wr(s->r,514,1,((rd(s->u,21,1)!=0)||(rd(s->u,22,1)!=0)));
L_1803f2462_4:;
wr(s->u,23,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4992,8),8)));
L_1803f2462_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,23,1)));
L_1803f2462_6:;
wr(s->u,24,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4992,8),8)));
L_1803f2462_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,24,1)));
L_1803f2462_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2462_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f2462_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f2462_11:;
/* 1803f2466: jae 0x1803f2474 */
L_1803f2466_0:;
L_1803f2466_1:;
wr(s->u,20,1,(!rd(s->r,512,1)));
L_1803f2466_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803f2474);}
L_1803f2466_3:;
return UINT64_C(0x1803f2468);
}
uint64_t b_1803f2468(CPU*s){
/* 1803f2468: comisd xmm2, xmm4 */
L_1803f2468_0:;
L_1803f2468_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803f2468_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4864,8),8)));
L_1803f2468_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803f2468_4:;
wr(s->u,2,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4864,8),8)));
L_1803f2468_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803f2468_6:;
wr(s->u,3,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4864,8),8)));
L_1803f2468_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803f2468_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2468_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f2468_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f2468_11:;
/* 1803f246c: jb 0x1803f247e */
L_1803f246c_0:;
L_1803f246c_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803f247e);}
L_1803f246c_2:;
return UINT64_C(0x1803f246e);
}
uint64_t b_1803f246e(CPU*s){
/* 1803f246e: movapd xmm2, xmm4 */
L_1803f246e_0:;
L_1803f246e_1:;
wr(s->r,4736,8,rd(s->r,4864,8));
L_1803f246e_2:;
wr(s->r,4744,8,rd(s->r,4872,8));
L_1803f246e_3:;
/* 1803f2472: jmp 0x1803f247e */
L_1803f2472_0:;
L_1803f2472_1:;
return UINT64_C(0x1803f247e);
L_1803f2472_2:;
return UINT64_C(0x1803f2474);
}
uint64_t b_1803f2474(CPU*s){
/* 1803f2474: comisd xmm2, xmm3 */
L_1803f2474_0:;
L_1803f2474_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4736,8),8)));
L_1803f2474_2:;
wr(s->u,3,1,isnan(fv(rd(s->r,4800,8),8)));
L_1803f2474_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803f2474_4:;
wr(s->u,4,1,(fv(rd(s->r,4736,8),8)==fv(rd(s->r,4800,8),8)));
L_1803f2474_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803f2474_6:;
wr(s->u,5,1,(fv(rd(s->r,4736,8),8)<fv(rd(s->r,4800,8),8)));
L_1803f2474_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803f2474_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2474_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803f2474_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803f2474_11:;
/* 1803f2478: ja 0x1803f247e */
L_1803f2478_0:;
L_1803f2478_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803f2478_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803f2478_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803f247e);}
L_1803f2478_4:;
return UINT64_C(0x1803f247a);
}
uint64_t b_1803f247a(CPU*s){
/* 1803f247a: movapd xmm2, xmm3 */
L_1803f247a_0:;
L_1803f247a_1:;
wr(s->r,4736,8,rd(s->r,4800,8));
L_1803f247a_2:;
wr(s->r,4744,8,rd(s->r,4808,8));
L_1803f247a_3:;
/* 1803f247e: cvtsd2ss xmm0, xmm2 */
L_1803f247e_0:;
L_1803f247e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4736,8),8),4));
L_1803f247e_2:;
/* 1803f2482: add rax, 8 */
L_1803f2482_0:;
L_1803f2482_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803f2482_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x8)),8,0));
L_1803f2482_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803f2482_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2482_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803f2482_6:;
wr(s->u,29,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803f2482_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803f2482_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803f2482_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803f2482_10:;
/* 1803f2486: neg edx */
L_1803f2486_0:;
L_1803f2486_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803f2486_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803f2486_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803f2486_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2486_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803f2486_6:;
wr(s->u,29,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803f2486_7:;
wr(s->u,37,1,pop(rd(s->u,29,4),4));
L_1803f2486_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803f2486_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803f2486_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f2486_11:;
/* 1803f2488: add rcx, 8 */
L_1803f2488_0:;
L_1803f2488_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803f2488_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,0));
L_1803f2488_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803f2488_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2488_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803f2488_6:;
wr(s->u,29,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803f2488_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803f2488_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803f2488_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803f2488_10:;
/* 1803f248c: sub r10, 1 */
L_1803f248c_0:;
L_1803f248c_1:;
wr(s->r,512,1,(rd(s->r,144,8)<((U)UINT64_C(0x1))));
L_1803f248c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x1)),8,1));
L_1803f248c_3:;
wr(s->r,144,8,(rd(s->r,144,8)-((U)UINT64_C(0x1))));
L_1803f248c_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f248c_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803f248c_6:;
wr(s->u,29,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803f248c_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803f248c_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803f248c_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803f248c_10:;
/* 1803f2490: movss dword ptr [r9 + rax - 8], xmm0 */
L_1803f2490_0:;
L_1803f2490_1:;
wr(s->u,0,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803f2490_2:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f2490_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803f2490_4:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803f2490_5:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803f2490_6:;
/* 1803f2497: jne 0x1803f23f0 */
L_1803f2497_0:;
L_1803f2497_1:;
wr(s->u,28,1,(!rd(s->r,518,1)));
L_1803f2497_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803f23f0);}
L_1803f2497_3:;
return UINT64_C(0x1803f249d);
}
uint64_t b_1803f247e(CPU*s){
/* 1803f247e: cvtsd2ss xmm0, xmm2 */
L_1803f247e_0:;
L_1803f247e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4736,8),8),4));
L_1803f247e_2:;
/* 1803f2482: add rax, 8 */
L_1803f2482_0:;
L_1803f2482_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803f2482_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x8)),8,0));
L_1803f2482_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803f2482_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2482_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803f2482_6:;
wr(s->u,29,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803f2482_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803f2482_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803f2482_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803f2482_10:;
/* 1803f2486: neg edx */
L_1803f2486_0:;
L_1803f2486_1:;
wr(s->r,512,1,(rd(s->r,16,4)!=((U)UINT64_C(0x0))));
L_1803f2486_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,16,4),4,1));
L_1803f2486_3:;
wr(s->r,16,4,(-rd(s->r,16,4)));
L_1803f2486_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2486_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803f2486_6:;
wr(s->u,29,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803f2486_7:;
wr(s->u,37,1,pop(rd(s->u,29,4),4));
L_1803f2486_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803f2486_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803f2486_10:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f2486_11:;
/* 1803f2488: add rcx, 8 */
L_1803f2488_0:;
L_1803f2488_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803f2488_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,0));
L_1803f2488_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803f2488_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2488_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803f2488_6:;
wr(s->u,29,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803f2488_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803f2488_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803f2488_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803f2488_10:;
/* 1803f248c: sub r10, 1 */
L_1803f248c_0:;
L_1803f248c_1:;
wr(s->r,512,1,(rd(s->r,144,8)<((U)UINT64_C(0x1))));
L_1803f248c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x1)),8,1));
L_1803f248c_3:;
wr(s->r,144,8,(rd(s->r,144,8)-((U)UINT64_C(0x1))));
L_1803f248c_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f248c_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803f248c_6:;
wr(s->u,29,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803f248c_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803f248c_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803f248c_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803f248c_10:;
/* 1803f2490: movss dword ptr [r9 + rax - 8], xmm0 */
L_1803f2490_0:;
L_1803f2490_1:;
wr(s->u,0,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,136,8)));
L_1803f2490_2:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f2490_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803f2490_4:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803f2490_5:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803f2490_6:;
/* 1803f2497: jne 0x1803f23f0 */
L_1803f2497_0:;
L_1803f2497_1:;
wr(s->u,28,1,(!rd(s->r,518,1)));
L_1803f2497_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803f23f0);}
L_1803f2497_3:;
return UINT64_C(0x1803f249d);
}
uint64_t b_1803f249d(CPU*s){
/* 1803f249d: movaps xmm6, xmmword ptr [rsp] */
L_1803f249d_0:;
L_1803f249d_1:;
wr(s->u,8,16,mr((uint64_t)rd(s->r,32,8),16));
L_1803f249d_2:;
wr(s->u,44,16,rd(s->u,8,16));
L_1803f249d_3:;
wr(s->r,4992,4,rd(s->u,44,4));
L_1803f249d_4:;
wr(s->r,4996,4,rd(s->u,48,4));
L_1803f249d_5:;
wr(s->r,5000,4,rd(s->u,52,4));
L_1803f249d_6:;
wr(s->r,5004,4,rd(s->u,56,4));
L_1803f249d_7:;
/* 1803f24a1: mov r9d, 4 */
L_1803f24a1_0:;
L_1803f24a1_1:;
wr(s->r,136,8,((U)UINT64_C(0x4)));
L_1803f24a1_2:;
/* 1803f24a7: cmp dword ptr [rsi + 0xc], r9d */
L_1803f24a7_0:;
L_1803f24a7_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xc))));
L_1803f24a7_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f24a7_3:;
wr(s->u,36,4,rd(s->u,24,4));
L_1803f24a7_4:;
wr(s->r,512,1,(rd(s->u,36,4)<rd(s->r,136,4)));
L_1803f24a7_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,36,4),rd(s->r,136,4),4,1));
L_1803f24a7_6:;
wr(s->u,40,4,(rd(s->u,36,4)-rd(s->r,136,4)));
L_1803f24a7_7:;
wr(s->r,519,1,(sx(rd(s->u,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f24a7_8:;
wr(s->r,518,1,(rd(s->u,40,4)==((U)UINT64_C(0x0))));
L_1803f24a7_9:;
wr(s->u,30,4,(rd(s->u,40,4)&((U)UINT64_C(0xff))));
L_1803f24a7_10:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803f24a7_11:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803f24a7_12:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803f24a7_13:;
/* 1803f24ab: jle 0x1803f252f */
L_1803f24ab_0:;
L_1803f24ab_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803f24ab_2:;
wr(s->u,29,1,((rd(s->r,518,1)!=0)||(rd(s->u,28,1)!=0)));
L_1803f24ab_3:;
if(rd(s->u,29,1)){return UINT64_C(0x1803f252f);}
L_1803f24ab_4:;
return UINT64_C(0x1803f24b1);
}
uint64_t b_1803f24b1(CPU*s){
/* 1803f24b1: mov r8d, 8 */
L_1803f24b1_0:;
L_1803f24b1_1:;
wr(s->r,128,8,((U)UINT64_C(0x8)));
L_1803f24b1_2:;
/* 1803f24b7: nop word ptr [rax + rax] */
L_1803f24b7_0:;
L_1803f24b7_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f24b7_2:;
wr(s->u,32,8,(rd(s->r,0,8)+rd(s->u,24,8)));
L_1803f24b7_3:;
/* 1803f24c0: movsxd rdx, r8d */
L_1803f24c0_0:;
L_1803f24c0_1:;
wr(s->r,16,8,(U)sx(rd(s->r,128,4),4));
L_1803f24c0_2:;
/* 1803f24c3: lea eax, [r8 + 4] */
L_1803f24c3_0:;
L_1803f24c3_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803f24c3_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803f24c3_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f24c3_4:;
/* 1803f24c7: add r9d, 4 */
L_1803f24c7_0:;
L_1803f24c7_1:;
wr(s->r,512,1,(((rd(s->r,136,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,136,4)));
L_1803f24c7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x4)),4,0));
L_1803f24c7_3:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x4))));
L_1803f24c7_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803f24c7_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f24c7_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803f24c7_7:;
wr(s->u,56,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803f24c7_8:;
wr(s->u,60,1,pop(rd(s->u,56,4),4));
L_1803f24c7_9:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803f24c7_10:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803f24c7_11:;
/* 1803f24cb: movsxd rcx, eax */
L_1803f24cb_0:;
L_1803f24cb_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803f24cb_2:;
/* 1803f24ce: add r8d, 8 */
L_1803f24ce_0:;
L_1803f24ce_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0x8)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803f24ce_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x8)),4,0));
L_1803f24ce_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x8))));
L_1803f24ce_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803f24ce_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f24ce_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803f24ce_7:;
wr(s->u,56,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803f24ce_8:;
wr(s->u,60,1,pop(rd(s->u,56,4),4));
L_1803f24ce_9:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803f24ce_10:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803f24ce_11:;
/* 1803f24d2: movaps xmm5, xmmword ptr [rdi + rdx*4] */
L_1803f24d2_0:;
L_1803f24d2_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803f24d2_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803f24d2_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,16,8),16));
L_1803f24d2_4:;
wr(s->u,62,16,rd(s->u,40,16));
L_1803f24d2_5:;
wr(s->r,4928,4,rd(s->u,62,4));
L_1803f24d2_6:;
wr(s->r,4932,4,rd(s->u,66,4));
L_1803f24d2_7:;
wr(s->r,4936,4,rd(s->u,70,4));
L_1803f24d2_8:;
wr(s->r,4940,4,rd(s->u,74,4));
L_1803f24d2_9:;
/* 1803f24d6: movaps xmm1, xmmword ptr [r11 + rdx*4] */
L_1803f24d6_0:;
L_1803f24d6_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803f24d6_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803f24d6_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,16,8),16));
L_1803f24d6_4:;
wr(s->u,62,16,rd(s->u,40,16));
L_1803f24d6_5:;
wr(s->r,4672,4,rd(s->u,62,4));
L_1803f24d6_6:;
wr(s->r,4676,4,rd(s->u,66,4));
L_1803f24d6_7:;
wr(s->r,4680,4,rd(s->u,70,4));
L_1803f24d6_8:;
wr(s->r,4684,4,rd(s->u,74,4));
L_1803f24d6_9:;
/* 1803f24db: movaps xmm0, xmmword ptr [rdi + rcx*4] */
L_1803f24db_0:;
L_1803f24db_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803f24db_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803f24db_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,16,8),16));
L_1803f24db_4:;
wr(s->u,62,16,rd(s->u,40,16));
L_1803f24db_5:;
wr(s->r,4608,4,rd(s->u,62,4));
L_1803f24db_6:;
wr(s->r,4612,4,rd(s->u,66,4));
L_1803f24db_7:;
wr(s->r,4616,4,rd(s->u,70,4));
L_1803f24db_8:;
wr(s->r,4620,4,rd(s->u,74,4));
L_1803f24db_9:;
/* 1803f24df: movaps xmm4, xmm1 */
L_1803f24df_0:;
L_1803f24df_1:;
wr(s->r,4864,4,rd(s->r,4672,4));
L_1803f24df_2:;
wr(s->r,4868,4,rd(s->r,4676,4));
L_1803f24df_3:;
wr(s->r,4872,4,rd(s->r,4680,4));
L_1803f24df_4:;
wr(s->r,4876,4,rd(s->r,4684,4));
L_1803f24df_5:;
/* 1803f24e2: movaps xmm3, xmm5 */
L_1803f24e2_0:;
L_1803f24e2_1:;
wr(s->r,4800,4,rd(s->r,4928,4));
L_1803f24e2_2:;
wr(s->r,4804,4,rd(s->r,4932,4));
L_1803f24e2_3:;
wr(s->r,4808,4,rd(s->r,4936,4));
L_1803f24e2_4:;
wr(s->r,4812,4,rd(s->r,4940,4));
L_1803f24e2_5:;
/* 1803f24e5: shufps xmm5, xmm0, 0xdd */
L_1803f24e5_0:;
L_1803f24e5_1:;
wr(s->u,122,4,rd(s->r,4608,4));
L_1803f24e5_2:;
wr(s->u,126,4,rd(s->r,4612,4));
L_1803f24e5_3:;
wr(s->u,130,4,rd(s->r,4616,4));
L_1803f24e5_4:;
wr(s->u,134,4,rd(s->r,4620,4));
L_1803f24e5_5:;
wr(s->u,138,4,rd(s->r,4928,4));
L_1803f24e5_6:;
wr(s->u,142,4,rd(s->r,4932,4));
L_1803f24e5_7:;
wr(s->u,146,4,rd(s->r,4936,4));
L_1803f24e5_8:;
wr(s->u,150,4,rd(s->r,4940,4));
L_1803f24e5_9:;
wr(s->u,78,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803f24e5_10:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24e5_11:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,138,4)));
L_1803f24e5_12:;
wr(s->u,87,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803f24e5_13:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24e5_14:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,142,4)));
L_1803f24e5_15:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24e5_16:;
wr(s->u,100,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803f24e5_17:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24e5_18:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,146,4)));
L_1803f24e5_19:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24e5_20:;
wr(s->u,113,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803f24e5_21:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24e5_22:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,150,4)));
L_1803f24e5_23:;
wr(s->r,4928,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24e5_24:;
wr(s->u,78,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803f24e5_25:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24e5_26:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,138,4)));
L_1803f24e5_27:;
wr(s->u,87,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803f24e5_28:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24e5_29:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,142,4)));
L_1803f24e5_30:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24e5_31:;
wr(s->u,100,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803f24e5_32:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24e5_33:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,146,4)));
L_1803f24e5_34:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24e5_35:;
wr(s->u,113,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803f24e5_36:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24e5_37:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,150,4)));
L_1803f24e5_38:;
wr(s->r,4932,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24e5_39:;
wr(s->u,78,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803f24e5_40:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24e5_41:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,122,4)));
L_1803f24e5_42:;
wr(s->u,87,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803f24e5_43:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24e5_44:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,126,4)));
L_1803f24e5_45:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24e5_46:;
wr(s->u,100,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803f24e5_47:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24e5_48:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,130,4)));
L_1803f24e5_49:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24e5_50:;
wr(s->u,113,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803f24e5_51:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24e5_52:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,134,4)));
L_1803f24e5_53:;
wr(s->r,4936,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24e5_54:;
wr(s->u,78,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803f24e5_55:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24e5_56:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,122,4)));
L_1803f24e5_57:;
wr(s->u,87,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803f24e5_58:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24e5_59:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,126,4)));
L_1803f24e5_60:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24e5_61:;
wr(s->u,100,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803f24e5_62:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24e5_63:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,130,4)));
L_1803f24e5_64:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24e5_65:;
wr(s->u,113,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803f24e5_66:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24e5_67:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,134,4)));
L_1803f24e5_68:;
wr(s->r,4940,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24e5_69:;
/* 1803f24e9: shufps xmm3, xmm0, 0x88 */
L_1803f24e9_0:;
L_1803f24e9_1:;
wr(s->u,122,4,rd(s->r,4608,4));
L_1803f24e9_2:;
wr(s->u,126,4,rd(s->r,4612,4));
L_1803f24e9_3:;
wr(s->u,130,4,rd(s->r,4616,4));
L_1803f24e9_4:;
wr(s->u,134,4,rd(s->r,4620,4));
L_1803f24e9_5:;
wr(s->u,138,4,rd(s->r,4800,4));
L_1803f24e9_6:;
wr(s->u,142,4,rd(s->r,4804,4));
L_1803f24e9_7:;
wr(s->u,146,4,rd(s->r,4808,4));
L_1803f24e9_8:;
wr(s->u,150,4,rd(s->r,4812,4));
L_1803f24e9_9:;
wr(s->u,78,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803f24e9_10:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24e9_11:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,138,4)));
L_1803f24e9_12:;
wr(s->u,87,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803f24e9_13:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24e9_14:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,142,4)));
L_1803f24e9_15:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24e9_16:;
wr(s->u,100,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803f24e9_17:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24e9_18:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,146,4)));
L_1803f24e9_19:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24e9_20:;
wr(s->u,113,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803f24e9_21:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24e9_22:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,150,4)));
L_1803f24e9_23:;
wr(s->r,4800,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24e9_24:;
wr(s->u,78,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803f24e9_25:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24e9_26:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,138,4)));
L_1803f24e9_27:;
wr(s->u,87,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803f24e9_28:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24e9_29:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,142,4)));
L_1803f24e9_30:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24e9_31:;
wr(s->u,100,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803f24e9_32:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24e9_33:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,146,4)));
L_1803f24e9_34:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24e9_35:;
wr(s->u,113,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803f24e9_36:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24e9_37:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,150,4)));
L_1803f24e9_38:;
wr(s->r,4804,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24e9_39:;
wr(s->u,78,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803f24e9_40:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24e9_41:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,122,4)));
L_1803f24e9_42:;
wr(s->u,87,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803f24e9_43:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24e9_44:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,126,4)));
L_1803f24e9_45:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24e9_46:;
wr(s->u,100,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803f24e9_47:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24e9_48:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,130,4)));
L_1803f24e9_49:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24e9_50:;
wr(s->u,113,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803f24e9_51:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24e9_52:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,134,4)));
L_1803f24e9_53:;
wr(s->r,4808,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24e9_54:;
wr(s->u,78,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803f24e9_55:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24e9_56:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,122,4)));
L_1803f24e9_57:;
wr(s->u,87,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803f24e9_58:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24e9_59:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,126,4)));
L_1803f24e9_60:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24e9_61:;
wr(s->u,100,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803f24e9_62:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24e9_63:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,130,4)));
L_1803f24e9_64:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24e9_65:;
wr(s->u,113,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803f24e9_66:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24e9_67:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,134,4)));
L_1803f24e9_68:;
wr(s->r,4812,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24e9_69:;
/* 1803f24ed: movaps xmm0, xmmword ptr [r11 + rcx*4] */
L_1803f24ed_0:;
L_1803f24ed_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803f24ed_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803f24ed_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,16,8),16));
L_1803f24ed_4:;
wr(s->u,62,16,rd(s->u,40,16));
L_1803f24ed_5:;
wr(s->r,4608,4,rd(s->u,62,4));
L_1803f24ed_6:;
wr(s->r,4612,4,rd(s->u,66,4));
L_1803f24ed_7:;
wr(s->r,4616,4,rd(s->u,70,4));
L_1803f24ed_8:;
wr(s->r,4620,4,rd(s->u,74,4));
L_1803f24ed_9:;
/* 1803f24f2: shufps xmm4, xmm0, 0x88 */
L_1803f24f2_0:;
L_1803f24f2_1:;
wr(s->u,122,4,rd(s->r,4608,4));
L_1803f24f2_2:;
wr(s->u,126,4,rd(s->r,4612,4));
L_1803f24f2_3:;
wr(s->u,130,4,rd(s->r,4616,4));
L_1803f24f2_4:;
wr(s->u,134,4,rd(s->r,4620,4));
L_1803f24f2_5:;
wr(s->u,138,4,rd(s->r,4864,4));
L_1803f24f2_6:;
wr(s->u,142,4,rd(s->r,4868,4));
L_1803f24f2_7:;
wr(s->u,146,4,rd(s->r,4872,4));
L_1803f24f2_8:;
wr(s->u,150,4,rd(s->r,4876,4));
L_1803f24f2_9:;
wr(s->u,78,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803f24f2_10:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24f2_11:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,138,4)));
L_1803f24f2_12:;
wr(s->u,87,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803f24f2_13:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24f2_14:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,142,4)));
L_1803f24f2_15:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24f2_16:;
wr(s->u,100,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803f24f2_17:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24f2_18:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,146,4)));
L_1803f24f2_19:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24f2_20:;
wr(s->u,113,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803f24f2_21:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24f2_22:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,150,4)));
L_1803f24f2_23:;
wr(s->r,4864,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24f2_24:;
wr(s->u,78,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803f24f2_25:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24f2_26:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,138,4)));
L_1803f24f2_27:;
wr(s->u,87,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803f24f2_28:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24f2_29:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,142,4)));
L_1803f24f2_30:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24f2_31:;
wr(s->u,100,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803f24f2_32:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24f2_33:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,146,4)));
L_1803f24f2_34:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24f2_35:;
wr(s->u,113,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803f24f2_36:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24f2_37:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,150,4)));
L_1803f24f2_38:;
wr(s->r,4868,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24f2_39:;
wr(s->u,78,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803f24f2_40:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24f2_41:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,122,4)));
L_1803f24f2_42:;
wr(s->u,87,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803f24f2_43:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24f2_44:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,126,4)));
L_1803f24f2_45:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24f2_46:;
wr(s->u,100,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803f24f2_47:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24f2_48:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,130,4)));
L_1803f24f2_49:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24f2_50:;
wr(s->u,113,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803f24f2_51:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24f2_52:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,134,4)));
L_1803f24f2_53:;
wr(s->r,4872,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24f2_54:;
wr(s->u,78,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803f24f2_55:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24f2_56:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,122,4)));
L_1803f24f2_57:;
wr(s->u,87,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803f24f2_58:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24f2_59:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,126,4)));
L_1803f24f2_60:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24f2_61:;
wr(s->u,100,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803f24f2_62:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24f2_63:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,130,4)));
L_1803f24f2_64:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24f2_65:;
wr(s->u,113,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803f24f2_66:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24f2_67:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,134,4)));
L_1803f24f2_68:;
wr(s->r,4876,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24f2_69:;
/* 1803f24f6: shufps xmm1, xmm0, 0xdd */
L_1803f24f6_0:;
L_1803f24f6_1:;
wr(s->u,122,4,rd(s->r,4608,4));
L_1803f24f6_2:;
wr(s->u,126,4,rd(s->r,4612,4));
L_1803f24f6_3:;
wr(s->u,130,4,rd(s->r,4616,4));
L_1803f24f6_4:;
wr(s->u,134,4,rd(s->r,4620,4));
L_1803f24f6_5:;
wr(s->u,138,4,rd(s->r,4672,4));
L_1803f24f6_6:;
wr(s->u,142,4,rd(s->r,4676,4));
L_1803f24f6_7:;
wr(s->u,146,4,rd(s->r,4680,4));
L_1803f24f6_8:;
wr(s->u,150,4,rd(s->r,4684,4));
L_1803f24f6_9:;
wr(s->u,78,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803f24f6_10:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24f6_11:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,138,4)));
L_1803f24f6_12:;
wr(s->u,87,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803f24f6_13:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24f6_14:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,142,4)));
L_1803f24f6_15:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24f6_16:;
wr(s->u,100,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803f24f6_17:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24f6_18:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,146,4)));
L_1803f24f6_19:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24f6_20:;
wr(s->u,113,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803f24f6_21:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24f6_22:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,150,4)));
L_1803f24f6_23:;
wr(s->r,4672,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24f6_24:;
wr(s->u,78,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803f24f6_25:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24f6_26:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,138,4)));
L_1803f24f6_27:;
wr(s->u,87,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803f24f6_28:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24f6_29:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,142,4)));
L_1803f24f6_30:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24f6_31:;
wr(s->u,100,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803f24f6_32:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24f6_33:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,146,4)));
L_1803f24f6_34:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24f6_35:;
wr(s->u,113,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803f24f6_36:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24f6_37:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,150,4)));
L_1803f24f6_38:;
wr(s->r,4676,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24f6_39:;
wr(s->u,78,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803f24f6_40:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24f6_41:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,122,4)));
L_1803f24f6_42:;
wr(s->u,87,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803f24f6_43:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24f6_44:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,126,4)));
L_1803f24f6_45:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24f6_46:;
wr(s->u,100,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803f24f6_47:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24f6_48:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,130,4)));
L_1803f24f6_49:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24f6_50:;
wr(s->u,113,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803f24f6_51:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24f6_52:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,134,4)));
L_1803f24f6_53:;
wr(s->r,4680,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24f6_54:;
wr(s->u,78,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803f24f6_55:;
wr(s->u,79,4,rd(s->u,78,1));
L_1803f24f6_56:;
wr(s->u,83,4,(rd(s->u,79,4)*rd(s->u,122,4)));
L_1803f24f6_57:;
wr(s->u,87,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803f24f6_58:;
wr(s->u,88,4,rd(s->u,87,1));
L_1803f24f6_59:;
wr(s->u,92,4,(rd(s->u,88,4)*rd(s->u,126,4)));
L_1803f24f6_60:;
wr(s->u,96,4,(rd(s->u,83,4)+rd(s->u,92,4)));
L_1803f24f6_61:;
wr(s->u,100,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803f24f6_62:;
wr(s->u,101,4,rd(s->u,100,1));
L_1803f24f6_63:;
wr(s->u,105,4,(rd(s->u,101,4)*rd(s->u,130,4)));
L_1803f24f6_64:;
wr(s->u,109,4,(rd(s->u,96,4)+rd(s->u,105,4)));
L_1803f24f6_65:;
wr(s->u,113,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803f24f6_66:;
wr(s->u,114,4,rd(s->u,113,1));
L_1803f24f6_67:;
wr(s->u,118,4,(rd(s->u,114,4)*rd(s->u,134,4)));
L_1803f24f6_68:;
wr(s->r,4684,4,(rd(s->u,109,4)+rd(s->u,118,4)));
L_1803f24f6_69:;
/* 1803f24fa: movaps xmm0, xmm4 */
L_1803f24fa_0:;
L_1803f24fa_1:;
wr(s->r,4608,4,rd(s->r,4864,4));
L_1803f24fa_2:;
wr(s->r,4612,4,rd(s->r,4868,4));
L_1803f24fa_3:;
wr(s->r,4616,4,rd(s->r,4872,4));
L_1803f24fa_4:;
wr(s->r,4620,4,rd(s->r,4876,4));
L_1803f24fa_5:;
/* 1803f24fd: movaps xmm2, xmm1 */
L_1803f24fd_0:;
L_1803f24fd_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803f24fd_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803f24fd_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803f24fd_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803f24fd_5:;
/* 1803f2500: mulps xmm2, xmm5 */
L_1803f2500_0:;
L_1803f2500_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803f2500_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)*fv(rd(s->r,4932,4),4),4));
L_1803f2500_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)*fv(rd(s->r,4936,4),4),4));
L_1803f2500_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)*fv(rd(s->r,4940,4),4),4));
L_1803f2500_5:;
/* 1803f2503: mulps xmm0, xmm3 */
L_1803f2503_0:;
L_1803f2503_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803f2503_2:;
wr(s->r,4612,4,fb(fv(rd(s->r,4612,4),4)*fv(rd(s->r,4804,4),4),4));
L_1803f2503_3:;
wr(s->r,4616,4,fb(fv(rd(s->r,4616,4),4)*fv(rd(s->r,4808,4),4),4));
L_1803f2503_4:;
wr(s->r,4620,4,fb(fv(rd(s->r,4620,4),4)*fv(rd(s->r,4812,4),4),4));
L_1803f2503_5:;
/* 1803f2506: mulps xmm4, xmm5 */
L_1803f2506_0:;
L_1803f2506_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803f2506_2:;
wr(s->r,4868,4,fb(fv(rd(s->r,4868,4),4)*fv(rd(s->r,4932,4),4),4));
L_1803f2506_3:;
wr(s->r,4872,4,fb(fv(rd(s->r,4872,4),4)*fv(rd(s->r,4936,4),4),4));
L_1803f2506_4:;
wr(s->r,4876,4,fb(fv(rd(s->r,4876,4),4)*fv(rd(s->r,4940,4),4),4));
L_1803f2506_5:;
/* 1803f2509: addps xmm2, xmm0 */
L_1803f2509_0:;
L_1803f2509_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803f2509_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)+fv(rd(s->r,4612,4),4),4));
L_1803f2509_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)+fv(rd(s->r,4616,4),4),4));
L_1803f2509_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)+fv(rd(s->r,4620,4),4),4));
L_1803f2509_5:;
/* 1803f250c: mulps xmm2, xmm6 */
L_1803f250c_0:;
L_1803f250c_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803f250c_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)*fv(rd(s->r,4996,4),4),4));
L_1803f250c_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)*fv(rd(s->r,5000,4),4),4));
L_1803f250c_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)*fv(rd(s->r,5004,4),4),4));
L_1803f250c_5:;
/* 1803f250f: mulps xmm1, xmm3 */
L_1803f250f_0:;
L_1803f250f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803f250f_2:;
wr(s->r,4676,4,fb(fv(rd(s->r,4676,4),4)*fv(rd(s->r,4804,4),4),4));
L_1803f250f_3:;
wr(s->r,4680,4,fb(fv(rd(s->r,4680,4),4)*fv(rd(s->r,4808,4),4),4));
L_1803f250f_4:;
wr(s->r,4684,4,fb(fv(rd(s->r,4684,4),4)*fv(rd(s->r,4812,4),4),4));
L_1803f250f_5:;
/* 1803f2512: movaps xmm0, xmm2 */
L_1803f2512_0:;
L_1803f2512_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803f2512_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803f2512_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803f2512_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803f2512_5:;
/* 1803f2515: subps xmm4, xmm1 */
L_1803f2515_0:;
L_1803f2515_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803f2515_2:;
wr(s->r,4868,4,fb(fv(rd(s->r,4868,4),4)-fv(rd(s->r,4676,4),4),4));
L_1803f2515_3:;
wr(s->r,4872,4,fb(fv(rd(s->r,4872,4),4)-fv(rd(s->r,4680,4),4),4));
L_1803f2515_4:;
wr(s->r,4876,4,fb(fv(rd(s->r,4876,4),4)-fv(rd(s->r,4684,4),4),4));
L_1803f2515_5:;
/* 1803f2518: mulps xmm4, xmm6 */
L_1803f2518_0:;
L_1803f2518_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803f2518_2:;
wr(s->r,4868,4,fb(fv(rd(s->r,4868,4),4)*fv(rd(s->r,4996,4),4),4));
L_1803f2518_3:;
wr(s->r,4872,4,fb(fv(rd(s->r,4872,4),4)*fv(rd(s->r,5000,4),4),4));
L_1803f2518_4:;
wr(s->r,4876,4,fb(fv(rd(s->r,4876,4),4)*fv(rd(s->r,5004,4),4),4));
L_1803f2518_5:;
/* 1803f251b: unpcklps xmm0, xmm4 */
L_1803f251b_0:;
L_1803f251b_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803f251b_2:;
wr(s->r,4620,4,rd(s->r,4868,4));
L_1803f251b_3:;
wr(s->r,4612,4,rd(s->r,4864,4));
L_1803f251b_4:;
/* 1803f251e: unpckhps xmm2, xmm4 */
L_1803f251e_0:;
L_1803f251e_1:;
wr(s->r,4736,4,rd(s->r,4744,4));
L_1803f251e_2:;
wr(s->r,4740,4,rd(s->r,4872,4));
L_1803f251e_3:;
wr(s->r,4744,4,rd(s->r,4748,4));
L_1803f251e_4:;
wr(s->r,4748,4,rd(s->r,4876,4));
L_1803f251e_5:;
/* 1803f2521: movaps xmmword ptr [rbx + rdx*4], xmm0 */
L_1803f2521_0:;
L_1803f2521_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803f2521_2:;
wr(s->u,16,8,(rd(s->r,24,8)+rd(s->u,8,8)));
L_1803f2521_3:;
wr(s->u,40,16,rd(s->r,4608,16));
L_1803f2521_4:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,40,16));
L_1803f2521_5:;
/* 1803f2525: movaps xmmword ptr [rbx + rcx*4], xmm2 */
L_1803f2525_0:;
L_1803f2525_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803f2525_2:;
wr(s->u,16,8,(rd(s->r,24,8)+rd(s->u,8,8)));
L_1803f2525_3:;
wr(s->u,40,16,rd(s->r,4736,16));
L_1803f2525_4:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,40,16));
L_1803f2525_5:;
return UINT64_C(0x1803f2529);
}
uint64_t b_1803f24c0(CPU*s){
/* 1803f24c0: movsxd rdx, r8d */
L_1803f24c0_0:;
L_1803f24c0_1:;
wr(s->r,16,8,(U)sx(rd(s->r,128,4),4));
L_1803f24c0_2:;
/* 1803f24c3: lea eax, [r8 + 4] */
L_1803f24c3_0:;
L_1803f24c3_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803f24c3_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803f24c3_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f24c3_4:;
/* 1803f24c7: add r9d, 4 */
L_1803f24c7_0:;
L_1803f24c7_1:;
wr(s->r,512,1,(((rd(s->r,136,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,136,4)));
L_1803f24c7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x4)),4,0));
L_1803f24c7_3:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x4))));
L_1803f24c7_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803f24c7_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f24c7_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803f24c7_7:;
wr(s->u,45,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803f24c7_8:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803f24c7_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803f24c7_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803f24c7_11:;
/* 1803f24cb: movsxd rcx, eax */
L_1803f24cb_0:;
L_1803f24cb_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803f24cb_2:;
/* 1803f24ce: add r8d, 8 */
L_1803f24ce_0:;
L_1803f24ce_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0x8)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803f24ce_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x8)),4,0));
L_1803f24ce_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x8))));
L_1803f24ce_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803f24ce_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f24ce_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803f24ce_7:;
wr(s->u,45,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803f24ce_8:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803f24ce_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803f24ce_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803f24ce_11:;
/* 1803f24d2: movaps xmm5, xmmword ptr [rdi + rdx*4] */
L_1803f24d2_0:;
L_1803f24d2_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803f24d2_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803f24d2_3:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,16,8),16));
L_1803f24d2_4:;
wr(s->u,59,16,rd(s->u,28,16));
L_1803f24d2_5:;
wr(s->r,4928,4,rd(s->u,59,4));
L_1803f24d2_6:;
wr(s->r,4932,4,rd(s->u,63,4));
L_1803f24d2_7:;
wr(s->r,4936,4,rd(s->u,67,4));
L_1803f24d2_8:;
wr(s->r,4940,4,rd(s->u,71,4));
L_1803f24d2_9:;
/* 1803f24d6: movaps xmm1, xmmword ptr [r11 + rdx*4] */
L_1803f24d6_0:;
L_1803f24d6_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803f24d6_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803f24d6_3:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,16,8),16));
L_1803f24d6_4:;
wr(s->u,59,16,rd(s->u,28,16));
L_1803f24d6_5:;
wr(s->r,4672,4,rd(s->u,59,4));
L_1803f24d6_6:;
wr(s->r,4676,4,rd(s->u,63,4));
L_1803f24d6_7:;
wr(s->r,4680,4,rd(s->u,67,4));
L_1803f24d6_8:;
wr(s->r,4684,4,rd(s->u,71,4));
L_1803f24d6_9:;
/* 1803f24db: movaps xmm0, xmmword ptr [rdi + rcx*4] */
L_1803f24db_0:;
L_1803f24db_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803f24db_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803f24db_3:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,16,8),16));
L_1803f24db_4:;
wr(s->u,59,16,rd(s->u,28,16));
L_1803f24db_5:;
wr(s->r,4608,4,rd(s->u,59,4));
L_1803f24db_6:;
wr(s->r,4612,4,rd(s->u,63,4));
L_1803f24db_7:;
wr(s->r,4616,4,rd(s->u,67,4));
L_1803f24db_8:;
wr(s->r,4620,4,rd(s->u,71,4));
L_1803f24db_9:;
/* 1803f24df: movaps xmm4, xmm1 */
L_1803f24df_0:;
L_1803f24df_1:;
wr(s->r,4864,4,rd(s->r,4672,4));
L_1803f24df_2:;
wr(s->r,4868,4,rd(s->r,4676,4));
L_1803f24df_3:;
wr(s->r,4872,4,rd(s->r,4680,4));
L_1803f24df_4:;
wr(s->r,4876,4,rd(s->r,4684,4));
L_1803f24df_5:;
/* 1803f24e2: movaps xmm3, xmm5 */
L_1803f24e2_0:;
L_1803f24e2_1:;
wr(s->r,4800,4,rd(s->r,4928,4));
L_1803f24e2_2:;
wr(s->r,4804,4,rd(s->r,4932,4));
L_1803f24e2_3:;
wr(s->r,4808,4,rd(s->r,4936,4));
L_1803f24e2_4:;
wr(s->r,4812,4,rd(s->r,4940,4));
L_1803f24e2_5:;
/* 1803f24e5: shufps xmm5, xmm0, 0xdd */
L_1803f24e5_0:;
L_1803f24e5_1:;
wr(s->u,119,4,rd(s->r,4608,4));
L_1803f24e5_2:;
wr(s->u,123,4,rd(s->r,4612,4));
L_1803f24e5_3:;
wr(s->u,127,4,rd(s->r,4616,4));
L_1803f24e5_4:;
wr(s->u,131,4,rd(s->r,4620,4));
L_1803f24e5_5:;
wr(s->u,135,4,rd(s->r,4928,4));
L_1803f24e5_6:;
wr(s->u,139,4,rd(s->r,4932,4));
L_1803f24e5_7:;
wr(s->u,143,4,rd(s->r,4936,4));
L_1803f24e5_8:;
wr(s->u,147,4,rd(s->r,4940,4));
L_1803f24e5_9:;
wr(s->u,75,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803f24e5_10:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24e5_11:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,135,4)));
L_1803f24e5_12:;
wr(s->u,84,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803f24e5_13:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24e5_14:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,139,4)));
L_1803f24e5_15:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24e5_16:;
wr(s->u,97,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803f24e5_17:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24e5_18:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,143,4)));
L_1803f24e5_19:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24e5_20:;
wr(s->u,110,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803f24e5_21:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24e5_22:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,147,4)));
L_1803f24e5_23:;
wr(s->r,4928,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24e5_24:;
wr(s->u,75,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803f24e5_25:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24e5_26:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,135,4)));
L_1803f24e5_27:;
wr(s->u,84,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803f24e5_28:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24e5_29:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,139,4)));
L_1803f24e5_30:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24e5_31:;
wr(s->u,97,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803f24e5_32:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24e5_33:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,143,4)));
L_1803f24e5_34:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24e5_35:;
wr(s->u,110,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803f24e5_36:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24e5_37:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,147,4)));
L_1803f24e5_38:;
wr(s->r,4932,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24e5_39:;
wr(s->u,75,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803f24e5_40:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24e5_41:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,119,4)));
L_1803f24e5_42:;
wr(s->u,84,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803f24e5_43:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24e5_44:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,123,4)));
L_1803f24e5_45:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24e5_46:;
wr(s->u,97,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803f24e5_47:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24e5_48:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,127,4)));
L_1803f24e5_49:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24e5_50:;
wr(s->u,110,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803f24e5_51:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24e5_52:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,131,4)));
L_1803f24e5_53:;
wr(s->r,4936,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24e5_54:;
wr(s->u,75,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803f24e5_55:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24e5_56:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,119,4)));
L_1803f24e5_57:;
wr(s->u,84,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803f24e5_58:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24e5_59:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,123,4)));
L_1803f24e5_60:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24e5_61:;
wr(s->u,97,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803f24e5_62:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24e5_63:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,127,4)));
L_1803f24e5_64:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24e5_65:;
wr(s->u,110,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803f24e5_66:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24e5_67:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,131,4)));
L_1803f24e5_68:;
wr(s->r,4940,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24e5_69:;
/* 1803f24e9: shufps xmm3, xmm0, 0x88 */
L_1803f24e9_0:;
L_1803f24e9_1:;
wr(s->u,119,4,rd(s->r,4608,4));
L_1803f24e9_2:;
wr(s->u,123,4,rd(s->r,4612,4));
L_1803f24e9_3:;
wr(s->u,127,4,rd(s->r,4616,4));
L_1803f24e9_4:;
wr(s->u,131,4,rd(s->r,4620,4));
L_1803f24e9_5:;
wr(s->u,135,4,rd(s->r,4800,4));
L_1803f24e9_6:;
wr(s->u,139,4,rd(s->r,4804,4));
L_1803f24e9_7:;
wr(s->u,143,4,rd(s->r,4808,4));
L_1803f24e9_8:;
wr(s->u,147,4,rd(s->r,4812,4));
L_1803f24e9_9:;
wr(s->u,75,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803f24e9_10:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24e9_11:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,135,4)));
L_1803f24e9_12:;
wr(s->u,84,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803f24e9_13:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24e9_14:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,139,4)));
L_1803f24e9_15:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24e9_16:;
wr(s->u,97,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803f24e9_17:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24e9_18:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,143,4)));
L_1803f24e9_19:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24e9_20:;
wr(s->u,110,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803f24e9_21:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24e9_22:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,147,4)));
L_1803f24e9_23:;
wr(s->r,4800,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24e9_24:;
wr(s->u,75,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803f24e9_25:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24e9_26:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,135,4)));
L_1803f24e9_27:;
wr(s->u,84,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803f24e9_28:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24e9_29:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,139,4)));
L_1803f24e9_30:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24e9_31:;
wr(s->u,97,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803f24e9_32:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24e9_33:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,143,4)));
L_1803f24e9_34:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24e9_35:;
wr(s->u,110,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803f24e9_36:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24e9_37:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,147,4)));
L_1803f24e9_38:;
wr(s->r,4804,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24e9_39:;
wr(s->u,75,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803f24e9_40:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24e9_41:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,119,4)));
L_1803f24e9_42:;
wr(s->u,84,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803f24e9_43:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24e9_44:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,123,4)));
L_1803f24e9_45:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24e9_46:;
wr(s->u,97,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803f24e9_47:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24e9_48:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,127,4)));
L_1803f24e9_49:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24e9_50:;
wr(s->u,110,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803f24e9_51:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24e9_52:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,131,4)));
L_1803f24e9_53:;
wr(s->r,4808,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24e9_54:;
wr(s->u,75,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803f24e9_55:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24e9_56:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,119,4)));
L_1803f24e9_57:;
wr(s->u,84,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803f24e9_58:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24e9_59:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,123,4)));
L_1803f24e9_60:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24e9_61:;
wr(s->u,97,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803f24e9_62:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24e9_63:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,127,4)));
L_1803f24e9_64:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24e9_65:;
wr(s->u,110,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803f24e9_66:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24e9_67:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,131,4)));
L_1803f24e9_68:;
wr(s->r,4812,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24e9_69:;
/* 1803f24ed: movaps xmm0, xmmword ptr [r11 + rcx*4] */
L_1803f24ed_0:;
L_1803f24ed_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803f24ed_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803f24ed_3:;
wr(s->u,28,16,mr((uint64_t)rd(s->u,16,8),16));
L_1803f24ed_4:;
wr(s->u,59,16,rd(s->u,28,16));
L_1803f24ed_5:;
wr(s->r,4608,4,rd(s->u,59,4));
L_1803f24ed_6:;
wr(s->r,4612,4,rd(s->u,63,4));
L_1803f24ed_7:;
wr(s->r,4616,4,rd(s->u,67,4));
L_1803f24ed_8:;
wr(s->r,4620,4,rd(s->u,71,4));
L_1803f24ed_9:;
/* 1803f24f2: shufps xmm4, xmm0, 0x88 */
L_1803f24f2_0:;
L_1803f24f2_1:;
wr(s->u,119,4,rd(s->r,4608,4));
L_1803f24f2_2:;
wr(s->u,123,4,rd(s->r,4612,4));
L_1803f24f2_3:;
wr(s->u,127,4,rd(s->r,4616,4));
L_1803f24f2_4:;
wr(s->u,131,4,rd(s->r,4620,4));
L_1803f24f2_5:;
wr(s->u,135,4,rd(s->r,4864,4));
L_1803f24f2_6:;
wr(s->u,139,4,rd(s->r,4868,4));
L_1803f24f2_7:;
wr(s->u,143,4,rd(s->r,4872,4));
L_1803f24f2_8:;
wr(s->u,147,4,rd(s->r,4876,4));
L_1803f24f2_9:;
wr(s->u,75,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803f24f2_10:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24f2_11:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,135,4)));
L_1803f24f2_12:;
wr(s->u,84,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803f24f2_13:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24f2_14:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,139,4)));
L_1803f24f2_15:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24f2_16:;
wr(s->u,97,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803f24f2_17:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24f2_18:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,143,4)));
L_1803f24f2_19:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24f2_20:;
wr(s->u,110,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803f24f2_21:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24f2_22:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,147,4)));
L_1803f24f2_23:;
wr(s->r,4864,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24f2_24:;
wr(s->u,75,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803f24f2_25:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24f2_26:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,135,4)));
L_1803f24f2_27:;
wr(s->u,84,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803f24f2_28:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24f2_29:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,139,4)));
L_1803f24f2_30:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24f2_31:;
wr(s->u,97,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803f24f2_32:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24f2_33:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,143,4)));
L_1803f24f2_34:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24f2_35:;
wr(s->u,110,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803f24f2_36:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24f2_37:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,147,4)));
L_1803f24f2_38:;
wr(s->r,4868,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24f2_39:;
wr(s->u,75,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x0))));
L_1803f24f2_40:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24f2_41:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,119,4)));
L_1803f24f2_42:;
wr(s->u,84,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x1))));
L_1803f24f2_43:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24f2_44:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,123,4)));
L_1803f24f2_45:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24f2_46:;
wr(s->u,97,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x2))));
L_1803f24f2_47:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24f2_48:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,127,4)));
L_1803f24f2_49:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24f2_50:;
wr(s->u,110,1,(((U)UINT64_C(0x0))==((U)UINT64_C(0x3))));
L_1803f24f2_51:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24f2_52:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,131,4)));
L_1803f24f2_53:;
wr(s->r,4872,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24f2_54:;
wr(s->u,75,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x0))));
L_1803f24f2_55:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24f2_56:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,119,4)));
L_1803f24f2_57:;
wr(s->u,84,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x1))));
L_1803f24f2_58:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24f2_59:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,123,4)));
L_1803f24f2_60:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24f2_61:;
wr(s->u,97,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x2))));
L_1803f24f2_62:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24f2_63:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,127,4)));
L_1803f24f2_64:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24f2_65:;
wr(s->u,110,1,(((U)UINT64_C(0x2))==((U)UINT64_C(0x3))));
L_1803f24f2_66:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24f2_67:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,131,4)));
L_1803f24f2_68:;
wr(s->r,4876,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24f2_69:;
/* 1803f24f6: shufps xmm1, xmm0, 0xdd */
L_1803f24f6_0:;
L_1803f24f6_1:;
wr(s->u,119,4,rd(s->r,4608,4));
L_1803f24f6_2:;
wr(s->u,123,4,rd(s->r,4612,4));
L_1803f24f6_3:;
wr(s->u,127,4,rd(s->r,4616,4));
L_1803f24f6_4:;
wr(s->u,131,4,rd(s->r,4620,4));
L_1803f24f6_5:;
wr(s->u,135,4,rd(s->r,4672,4));
L_1803f24f6_6:;
wr(s->u,139,4,rd(s->r,4676,4));
L_1803f24f6_7:;
wr(s->u,143,4,rd(s->r,4680,4));
L_1803f24f6_8:;
wr(s->u,147,4,rd(s->r,4684,4));
L_1803f24f6_9:;
wr(s->u,75,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803f24f6_10:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24f6_11:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,135,4)));
L_1803f24f6_12:;
wr(s->u,84,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803f24f6_13:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24f6_14:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,139,4)));
L_1803f24f6_15:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24f6_16:;
wr(s->u,97,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803f24f6_17:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24f6_18:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,143,4)));
L_1803f24f6_19:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24f6_20:;
wr(s->u,110,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803f24f6_21:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24f6_22:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,147,4)));
L_1803f24f6_23:;
wr(s->r,4672,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24f6_24:;
wr(s->u,75,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803f24f6_25:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24f6_26:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,135,4)));
L_1803f24f6_27:;
wr(s->u,84,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803f24f6_28:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24f6_29:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,139,4)));
L_1803f24f6_30:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24f6_31:;
wr(s->u,97,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803f24f6_32:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24f6_33:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,143,4)));
L_1803f24f6_34:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24f6_35:;
wr(s->u,110,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803f24f6_36:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24f6_37:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,147,4)));
L_1803f24f6_38:;
wr(s->r,4676,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24f6_39:;
wr(s->u,75,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x0))));
L_1803f24f6_40:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24f6_41:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,119,4)));
L_1803f24f6_42:;
wr(s->u,84,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x1))));
L_1803f24f6_43:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24f6_44:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,123,4)));
L_1803f24f6_45:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24f6_46:;
wr(s->u,97,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x2))));
L_1803f24f6_47:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24f6_48:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,127,4)));
L_1803f24f6_49:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24f6_50:;
wr(s->u,110,1,(((U)UINT64_C(0x1))==((U)UINT64_C(0x3))));
L_1803f24f6_51:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24f6_52:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,131,4)));
L_1803f24f6_53:;
wr(s->r,4680,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24f6_54:;
wr(s->u,75,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x0))));
L_1803f24f6_55:;
wr(s->u,76,4,rd(s->u,75,1));
L_1803f24f6_56:;
wr(s->u,80,4,(rd(s->u,76,4)*rd(s->u,119,4)));
L_1803f24f6_57:;
wr(s->u,84,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x1))));
L_1803f24f6_58:;
wr(s->u,85,4,rd(s->u,84,1));
L_1803f24f6_59:;
wr(s->u,89,4,(rd(s->u,85,4)*rd(s->u,123,4)));
L_1803f24f6_60:;
wr(s->u,93,4,(rd(s->u,80,4)+rd(s->u,89,4)));
L_1803f24f6_61:;
wr(s->u,97,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x2))));
L_1803f24f6_62:;
wr(s->u,98,4,rd(s->u,97,1));
L_1803f24f6_63:;
wr(s->u,102,4,(rd(s->u,98,4)*rd(s->u,127,4)));
L_1803f24f6_64:;
wr(s->u,106,4,(rd(s->u,93,4)+rd(s->u,102,4)));
L_1803f24f6_65:;
wr(s->u,110,1,(((U)UINT64_C(0x3))==((U)UINT64_C(0x3))));
L_1803f24f6_66:;
wr(s->u,111,4,rd(s->u,110,1));
L_1803f24f6_67:;
wr(s->u,115,4,(rd(s->u,111,4)*rd(s->u,131,4)));
L_1803f24f6_68:;
wr(s->r,4684,4,(rd(s->u,106,4)+rd(s->u,115,4)));
L_1803f24f6_69:;
/* 1803f24fa: movaps xmm0, xmm4 */
L_1803f24fa_0:;
L_1803f24fa_1:;
wr(s->r,4608,4,rd(s->r,4864,4));
L_1803f24fa_2:;
wr(s->r,4612,4,rd(s->r,4868,4));
L_1803f24fa_3:;
wr(s->r,4616,4,rd(s->r,4872,4));
L_1803f24fa_4:;
wr(s->r,4620,4,rd(s->r,4876,4));
L_1803f24fa_5:;
/* 1803f24fd: movaps xmm2, xmm1 */
L_1803f24fd_0:;
L_1803f24fd_1:;
wr(s->r,4736,4,rd(s->r,4672,4));
L_1803f24fd_2:;
wr(s->r,4740,4,rd(s->r,4676,4));
L_1803f24fd_3:;
wr(s->r,4744,4,rd(s->r,4680,4));
L_1803f24fd_4:;
wr(s->r,4748,4,rd(s->r,4684,4));
L_1803f24fd_5:;
/* 1803f2500: mulps xmm2, xmm5 */
L_1803f2500_0:;
L_1803f2500_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803f2500_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)*fv(rd(s->r,4932,4),4),4));
L_1803f2500_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)*fv(rd(s->r,4936,4),4),4));
L_1803f2500_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)*fv(rd(s->r,4940,4),4),4));
L_1803f2500_5:;
/* 1803f2503: mulps xmm0, xmm3 */
L_1803f2503_0:;
L_1803f2503_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803f2503_2:;
wr(s->r,4612,4,fb(fv(rd(s->r,4612,4),4)*fv(rd(s->r,4804,4),4),4));
L_1803f2503_3:;
wr(s->r,4616,4,fb(fv(rd(s->r,4616,4),4)*fv(rd(s->r,4808,4),4),4));
L_1803f2503_4:;
wr(s->r,4620,4,fb(fv(rd(s->r,4620,4),4)*fv(rd(s->r,4812,4),4),4));
L_1803f2503_5:;
/* 1803f2506: mulps xmm4, xmm5 */
L_1803f2506_0:;
L_1803f2506_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803f2506_2:;
wr(s->r,4868,4,fb(fv(rd(s->r,4868,4),4)*fv(rd(s->r,4932,4),4),4));
L_1803f2506_3:;
wr(s->r,4872,4,fb(fv(rd(s->r,4872,4),4)*fv(rd(s->r,4936,4),4),4));
L_1803f2506_4:;
wr(s->r,4876,4,fb(fv(rd(s->r,4876,4),4)*fv(rd(s->r,4940,4),4),4));
L_1803f2506_5:;
/* 1803f2509: addps xmm2, xmm0 */
L_1803f2509_0:;
L_1803f2509_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803f2509_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)+fv(rd(s->r,4612,4),4),4));
L_1803f2509_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)+fv(rd(s->r,4616,4),4),4));
L_1803f2509_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)+fv(rd(s->r,4620,4),4),4));
L_1803f2509_5:;
/* 1803f250c: mulps xmm2, xmm6 */
L_1803f250c_0:;
L_1803f250c_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803f250c_2:;
wr(s->r,4740,4,fb(fv(rd(s->r,4740,4),4)*fv(rd(s->r,4996,4),4),4));
L_1803f250c_3:;
wr(s->r,4744,4,fb(fv(rd(s->r,4744,4),4)*fv(rd(s->r,5000,4),4),4));
L_1803f250c_4:;
wr(s->r,4748,4,fb(fv(rd(s->r,4748,4),4)*fv(rd(s->r,5004,4),4),4));
L_1803f250c_5:;
/* 1803f250f: mulps xmm1, xmm3 */
L_1803f250f_0:;
L_1803f250f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803f250f_2:;
wr(s->r,4676,4,fb(fv(rd(s->r,4676,4),4)*fv(rd(s->r,4804,4),4),4));
L_1803f250f_3:;
wr(s->r,4680,4,fb(fv(rd(s->r,4680,4),4)*fv(rd(s->r,4808,4),4),4));
L_1803f250f_4:;
wr(s->r,4684,4,fb(fv(rd(s->r,4684,4),4)*fv(rd(s->r,4812,4),4),4));
L_1803f250f_5:;
/* 1803f2512: movaps xmm0, xmm2 */
L_1803f2512_0:;
L_1803f2512_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803f2512_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803f2512_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803f2512_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803f2512_5:;
/* 1803f2515: subps xmm4, xmm1 */
L_1803f2515_0:;
L_1803f2515_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803f2515_2:;
wr(s->r,4868,4,fb(fv(rd(s->r,4868,4),4)-fv(rd(s->r,4676,4),4),4));
L_1803f2515_3:;
wr(s->r,4872,4,fb(fv(rd(s->r,4872,4),4)-fv(rd(s->r,4680,4),4),4));
L_1803f2515_4:;
wr(s->r,4876,4,fb(fv(rd(s->r,4876,4),4)-fv(rd(s->r,4684,4),4),4));
L_1803f2515_5:;
/* 1803f2518: mulps xmm4, xmm6 */
L_1803f2518_0:;
L_1803f2518_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803f2518_2:;
wr(s->r,4868,4,fb(fv(rd(s->r,4868,4),4)*fv(rd(s->r,4996,4),4),4));
L_1803f2518_3:;
wr(s->r,4872,4,fb(fv(rd(s->r,4872,4),4)*fv(rd(s->r,5000,4),4),4));
L_1803f2518_4:;
wr(s->r,4876,4,fb(fv(rd(s->r,4876,4),4)*fv(rd(s->r,5004,4),4),4));
L_1803f2518_5:;
/* 1803f251b: unpcklps xmm0, xmm4 */
L_1803f251b_0:;
L_1803f251b_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803f251b_2:;
wr(s->r,4620,4,rd(s->r,4868,4));
L_1803f251b_3:;
wr(s->r,4612,4,rd(s->r,4864,4));
L_1803f251b_4:;
/* 1803f251e: unpckhps xmm2, xmm4 */
L_1803f251e_0:;
L_1803f251e_1:;
wr(s->r,4736,4,rd(s->r,4744,4));
L_1803f251e_2:;
wr(s->r,4740,4,rd(s->r,4872,4));
L_1803f251e_3:;
wr(s->r,4744,4,rd(s->r,4748,4));
L_1803f251e_4:;
wr(s->r,4748,4,rd(s->r,4876,4));
L_1803f251e_5:;
/* 1803f2521: movaps xmmword ptr [rbx + rdx*4], xmm0 */
L_1803f2521_0:;
L_1803f2521_1:;
wr(s->u,8,8,(rd(s->r,16,8)*((U)UINT64_C(0x4))));
L_1803f2521_2:;
wr(s->u,16,8,(rd(s->r,24,8)+rd(s->u,8,8)));
L_1803f2521_3:;
wr(s->u,28,16,rd(s->r,4608,16));
L_1803f2521_4:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,28,16));
L_1803f2521_5:;
/* 1803f2525: movaps xmmword ptr [rbx + rcx*4], xmm2 */
L_1803f2525_0:;
L_1803f2525_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803f2525_2:;
wr(s->u,16,8,(rd(s->r,24,8)+rd(s->u,8,8)));
L_1803f2525_3:;
wr(s->u,28,16,rd(s->r,4736,16));
L_1803f2525_4:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,28,16));
L_1803f2525_5:;
/* 1803f2529: cmp r9d, dword ptr [rsi + 0xc] */
L_1803f2529_0:;
L_1803f2529_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xc))));
L_1803f2529_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f2529_3:;
wr(s->u,51,4,rd(s->u,24,4));
L_1803f2529_4:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,51,4)));
L_1803f2529_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,51,4),4,1));
L_1803f2529_6:;
wr(s->u,55,4,(rd(s->r,136,4)-rd(s->u,51,4)));
L_1803f2529_7:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2529_8:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803f2529_9:;
wr(s->u,45,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803f2529_10:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803f2529_11:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803f2529_12:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803f2529_13:;
/* 1803f252d: jl 0x1803f24c0 */
L_1803f252d_0:;
L_1803f252d_1:;
wr(s->u,44,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803f252d_2:;
if(rd(s->u,44,1)){goto L_1803f24c0_0;}
L_1803f252d_3:;
return UINT64_C(0x1803f252f);
}
uint64_t b_1803f2529(CPU*s){
/* 1803f2529: cmp r9d, dword ptr [rsi + 0xc] */
L_1803f2529_0:;
L_1803f2529_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xc))));
L_1803f2529_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f2529_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803f2529_4:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,19,4)));
L_1803f2529_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,19,4),4,1));
L_1803f2529_6:;
wr(s->u,23,4,(rd(s->r,136,4)-rd(s->u,19,4)));
L_1803f2529_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2529_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803f2529_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803f2529_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803f2529_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803f2529_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803f2529_13:;
/* 1803f252d: jl 0x1803f24c0 */
L_1803f252d_0:;
L_1803f252d_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803f252d_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803f24c0);}
L_1803f252d_3:;
return UINT64_C(0x1803f252f);
}
uint64_t b_1803f252f(CPU*s){
/* 1803f252f: xor eax, eax */
L_1803f252f_0:;
L_1803f252f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f252f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f252f_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803f252f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f252f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f252f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803f252f_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803f252f_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803f252f_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f252f_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f252f_11:;
/* 1803f2531: movaps xmm6, xmmword ptr [rsp + 0x10] */
L_1803f2531_0:;
L_1803f2531_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803f2531_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2531_3:;
wr(s->u,42,16,rd(s->u,8,16));
L_1803f2531_4:;
wr(s->r,4992,4,rd(s->u,42,4));
L_1803f2531_5:;
wr(s->r,4996,4,rd(s->u,46,4));
L_1803f2531_6:;
wr(s->r,5000,4,rd(s->u,50,4));
L_1803f2531_7:;
wr(s->r,5004,4,rd(s->u,54,4));
L_1803f2531_8:;
/* 1803f2536: add rsp, 0x20 */
L_1803f2536_0:;
L_1803f2536_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2536_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803f2536_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803f2536_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2536_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2536_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2536_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f2536_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f2536_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f2536_10:;
/* 1803f253a: pop rdi */
L_1803f253a_0:;
L_1803f253a_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803f253a_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f253a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f253a_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1803f253a_5:;
/* 1803f253b: pop rsi */
L_1803f253b_0:;
L_1803f253b_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803f253b_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f253b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f253b_4:;
wr(s->r,48,8,rd(s->u,34,8));
L_1803f253b_5:;
/* 1803f253c: pop rbx */
L_1803f253c_0:;
L_1803f253c_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803f253c_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f253c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f253c_4:;
wr(s->r,24,8,rd(s->u,34,8));
L_1803f253c_5:;
/* 1803f253d: ret  */
L_1803f253d_0:;
L_1803f253d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f253d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f253d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f253d_4:;
return UINT64_C(0x1803f253e);
}
uint64_t b_1803f2540(CPU*s){
/* 1803f2540: mov qword ptr [rsp + 8], rbx */
L_1803f2540_0:;
L_1803f2540_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803f2540_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803f2540_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f2540_4:;
/* 1803f2545: push rdi */
L_1803f2545_0:;
L_1803f2545_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803f2545_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2545_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803f2545_4:;
/* 1803f2546: sub rsp, 0x20 */
L_1803f2546_0:;
L_1803f2546_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803f2546_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803f2546_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803f2546_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2546_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2546_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2546_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f2546_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f2546_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f2546_10:;
/* 1803f254a: mov ebx, edx */
L_1803f254a_0:;
L_1803f254a_1:;
wr(s->r,24,4,rd(s->r,16,4));
L_1803f254a_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803f254a_3:;
/* 1803f254c: mov rdi, rcx */
L_1803f254c_0:;
L_1803f254c_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803f254c_2:;
/* 1803f254f: call 0x1803f22a0 */
L_1803f254f_0:;
L_1803f254f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f254f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2554)));
L_1803f254f_3:;
return (uint64_t)UINT64_C(0x1803f22a0);
L_1803f254f_4:;
return UINT64_C(0x1803f2554);
}
uint64_t b_1803f2554(CPU*s){
/* 1803f2554: test bl, 1 */
L_1803f2554_0:;
L_1803f2554_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f2554_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2554_3:;
wr(s->u,3,1,(rd(s->r,24,1)&((U)UINT64_C(0x1))));
L_1803f2554_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803f2554_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803f2554_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_1803f2554_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_1803f2554_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_1803f2554_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_1803f2554_10:;
/* 1803f2557: je 0x1803f2561 */
L_1803f2557_0:;
L_1803f2557_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f2561);}
L_1803f2557_2:;
return UINT64_C(0x1803f2559);
}
uint64_t b_1803f2559(CPU*s){
/* 1803f2559: mov rcx, rdi */
L_1803f2559_0:;
L_1803f2559_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803f2559_2:;
/* 1803f255c: call 0x180003160 */
L_1803f255c_0:;
L_1803f255c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f255c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2561)));
L_1803f255c_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803f255c_4:;
return UINT64_C(0x1803f2561);
}
uint64_t b_1803f2561(CPU*s){
/* 1803f2561: mov rax, rdi */
L_1803f2561_0:;
L_1803f2561_1:;
wr(s->r,0,8,rd(s->r,56,8));
L_1803f2561_2:;
/* 1803f2564: mov rbx, qword ptr [rsp + 0x30] */
L_1803f2564_0:;
L_1803f2564_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f2564_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2564_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803f2564_4:;
/* 1803f2569: add rsp, 0x20 */
L_1803f2569_0:;
L_1803f2569_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2569_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803f2569_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803f2569_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2569_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2569_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2569_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f2569_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f2569_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f2569_10:;
/* 1803f256d: pop rdi */
L_1803f256d_0:;
L_1803f256d_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f256d_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f256d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f256d_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803f256d_5:;
/* 1803f256e: ret  */
L_1803f256e_0:;
L_1803f256e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f256e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f256e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f256e_4:;
return UINT64_C(0x1803f256f);
}
uint64_t b_1803f2570(CPU*s){
/* 1803f2570: push rsi */
L_1803f2570_0:;
L_1803f2570_1:;
wr(s->u,24,8,rd(s->r,48,8));
L_1803f2570_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2570_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803f2570_4:;
/* 1803f2572: push rdi */
L_1803f2572_0:;
L_1803f2572_1:;
wr(s->u,24,8,rd(s->r,56,8));
L_1803f2572_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2572_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803f2572_4:;
/* 1803f2573: push r12 */
L_1803f2573_0:;
L_1803f2573_1:;
wr(s->u,24,8,rd(s->r,160,8));
L_1803f2573_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2573_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803f2573_4:;
/* 1803f2575: sub rsp, 0x30 */
L_1803f2575_0:;
L_1803f2575_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803f2575_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803f2575_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803f2575_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2575_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2575_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2575_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803f2575_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803f2575_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803f2575_10:;
/* 1803f2579: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803f2579_0:;
L_1803f2579_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f2579_2:;
wr(s->u,16,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803f2579_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803f2579_4:;
/* 1803f2582: mov qword ptr [rsp + 0x58], rbx */
L_1803f2582_0:;
L_1803f2582_1:;
wr(s->u,8,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803f2582_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803f2582_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803f2582_4:;
/* 1803f2587: mov qword ptr [rsp + 0x60], rbp */
L_1803f2587_0:;
L_1803f2587_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803f2587_2:;
wr(s->u,16,8,rd(s->r,40,8));
L_1803f2587_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803f2587_4:;
/* 1803f258c: mov esi, r9d */
L_1803f258c_0:;
L_1803f258c_1:;
wr(s->r,48,4,rd(s->r,136,4));
L_1803f258c_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803f258c_3:;
/* 1803f258f: mov ebp, r8d */
L_1803f258f_0:;
L_1803f258f_1:;
wr(s->r,40,4,rd(s->r,128,4));
L_1803f258f_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803f258f_3:;
/* 1803f2592: mov r12d, edx */
L_1803f2592_0:;
L_1803f2592_1:;
wr(s->r,160,4,rd(s->r,16,4));
L_1803f2592_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803f2592_3:;
/* 1803f2595: mov rdi, rcx */
L_1803f2595_0:;
L_1803f2595_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803f2595_2:;
/* 1803f2598: xor ebx, ebx */
L_1803f2598_0:;
L_1803f2598_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f2598_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2598_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803f2598_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803f2598_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2598_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803f2598_7:;
wr(s->u,32,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803f2598_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803f2598_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803f2598_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803f2598_11:;
/* 1803f259a: mov qword ptr [rcx], rbx */
L_1803f259a_0:;
L_1803f259a_1:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803f259a_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1803f259a_3:;
/* 1803f259d: lea ecx, [rbx + 0x70] */
L_1803f259d_0:;
L_1803f259d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x70))));
L_1803f259d_2:;
wr(s->r,8,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803f259d_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803f259d_4:;
/* 1803f25a0: call 0x180003140 */
L_1803f25a0_0:;
L_1803f25a0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f25a0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f25a5)));
L_1803f25a0_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803f25a0_4:;
return UINT64_C(0x1803f25a5);
}
uint64_t b_1803f25a5(CPU*s){
/* 1803f25a5: mov qword ptr [rsp + 0x50], rax */
L_1803f25a5_0:;
L_1803f25a5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803f25a5_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803f25a5_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f25a5_4:;
/* 1803f25aa: test rax, rax */
L_1803f25aa_0:;
L_1803f25aa_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f25aa_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f25aa_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803f25aa_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f25aa_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803f25aa_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803f25aa_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f25aa_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f25aa_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f25aa_10:;
/* 1803f25ad: je 0x1803f25c2 */
L_1803f25ad_0:;
L_1803f25ad_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803f25c2);}
L_1803f25ad_2:;
return UINT64_C(0x1803f25af);
}
uint64_t b_1803f25af(CPU*s){
/* 1803f25af: mov r9d, esi */
L_1803f25af_0:;
L_1803f25af_1:;
wr(s->r,136,4,rd(s->r,48,4));
L_1803f25af_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803f25af_3:;
/* 1803f25b2: mov r8d, ebp */
L_1803f25b2_0:;
L_1803f25b2_1:;
wr(s->r,128,4,rd(s->r,40,4));
L_1803f25b2_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803f25b2_3:;
/* 1803f25b5: mov edx, r12d */
L_1803f25b5_0:;
L_1803f25b5_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803f25b5_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803f25b5_3:;
/* 1803f25b8: mov rcx, rax */
L_1803f25b8_0:;
L_1803f25b8_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803f25b8_2:;
/* 1803f25bb: call 0x1803f5f70 */
L_1803f25bb_0:;
L_1803f25bb_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f25bb_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f25c0)));
L_1803f25bb_3:;
return (uint64_t)UINT64_C(0x1803f5f70);
L_1803f25bb_4:;
return UINT64_C(0x1803f25c0);
}
uint64_t b_1803f25c0(CPU*s){
/* 1803f25c0: jmp 0x1803f25c5 */
L_1803f25c0_0:;
L_1803f25c0_1:;
return UINT64_C(0x1803f25c5);
L_1803f25c0_2:;
return UINT64_C(0x1803f25c2);
}
uint64_t b_1803f25c2(CPU*s){
/* 1803f25c2: mov rax, rbx */
L_1803f25c2_0:;
L_1803f25c2_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803f25c2_2:;
/* 1803f25c5: mov qword ptr [rdi], rax */
L_1803f25c5_0:;
L_1803f25c5_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803f25c5_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1803f25c5_3:;
/* 1803f25c8: mov ecx, 0xf4241 */
L_1803f25c8_0:;
L_1803f25c8_1:;
wr(s->r,8,8,((U)UINT64_C(0xf4241)));
L_1803f25c8_2:;
/* 1803f25cd: test rax, rax */
L_1803f25cd_0:;
L_1803f25cd_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f25cd_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f25cd_3:;
wr(s->u,47,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803f25cd_4:;
wr(s->r,519,1,(sx(rd(s->u,47,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f25cd_5:;
wr(s->r,518,1,(rd(s->u,47,8)==((U)UINT64_C(0x0))));
L_1803f25cd_6:;
wr(s->u,24,8,(rd(s->u,47,8)&((U)UINT64_C(0xff))));
L_1803f25cd_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f25cd_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f25cd_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f25cd_10:;
/* 1803f25d0: cmove ebx, ecx */
L_1803f25d0_0:;
L_1803f25d0_1:;
wr(s->u,34,4,rd(s->r,8,4));
L_1803f25d0_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803f25d0_3:;
wr(s->u,38,1,(!rd(s->r,518,1)));
L_1803f25d0_4:;
if(rd(s->u,38,1)){goto L_1803f25d3_0;}
L_1803f25d0_5:;
wr(s->r,24,4,rd(s->u,34,4));
L_1803f25d0_6:;
/* 1803f25d3: mov eax, ebx */
L_1803f25d3_0:;
L_1803f25d3_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803f25d3_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f25d3_3:;
/* 1803f25d5: mov rbx, qword ptr [rsp + 0x58] */
L_1803f25d5_0:;
L_1803f25d5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803f25d5_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f25d5_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803f25d5_4:;
/* 1803f25da: mov rbp, qword ptr [rsp + 0x60] */
L_1803f25da_0:;
L_1803f25da_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803f25da_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f25da_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803f25da_4:;
/* 1803f25df: add rsp, 0x30 */
L_1803f25df_0:;
L_1803f25df_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f25df_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803f25df_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803f25df_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f25df_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f25df_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f25df_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f25df_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f25df_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f25df_10:;
/* 1803f25e3: pop r12 */
L_1803f25e3_0:;
L_1803f25e3_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803f25e3_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f25e3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f25e3_4:;
wr(s->r,160,8,rd(s->u,39,8));
L_1803f25e3_5:;
/* 1803f25e5: pop rdi */
L_1803f25e5_0:;
L_1803f25e5_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803f25e5_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f25e5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f25e5_4:;
wr(s->r,56,8,rd(s->u,39,8));
L_1803f25e5_5:;
/* 1803f25e6: pop rsi */
L_1803f25e6_0:;
L_1803f25e6_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803f25e6_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f25e6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f25e6_4:;
wr(s->r,48,8,rd(s->u,39,8));
L_1803f25e6_5:;
/* 1803f25e7: ret  */
L_1803f25e7_0:;
L_1803f25e7_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f25e7_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f25e7_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f25e7_4:;
return UINT64_C(0x1803f25e8);
}
uint64_t b_1803f25c5(CPU*s){
/* 1803f25c5: mov qword ptr [rdi], rax */
L_1803f25c5_0:;
L_1803f25c5_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803f25c5_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1803f25c5_3:;
/* 1803f25c8: mov ecx, 0xf4241 */
L_1803f25c8_0:;
L_1803f25c8_1:;
wr(s->r,8,8,((U)UINT64_C(0xf4241)));
L_1803f25c8_2:;
/* 1803f25cd: test rax, rax */
L_1803f25cd_0:;
L_1803f25cd_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f25cd_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f25cd_3:;
wr(s->u,47,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803f25cd_4:;
wr(s->r,519,1,(sx(rd(s->u,47,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f25cd_5:;
wr(s->r,518,1,(rd(s->u,47,8)==((U)UINT64_C(0x0))));
L_1803f25cd_6:;
wr(s->u,24,8,(rd(s->u,47,8)&((U)UINT64_C(0xff))));
L_1803f25cd_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f25cd_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f25cd_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f25cd_10:;
/* 1803f25d0: cmove ebx, ecx */
L_1803f25d0_0:;
L_1803f25d0_1:;
wr(s->u,34,4,rd(s->r,8,4));
L_1803f25d0_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803f25d0_3:;
wr(s->u,38,1,(!rd(s->r,518,1)));
L_1803f25d0_4:;
if(rd(s->u,38,1)){goto L_1803f25d3_0;}
L_1803f25d0_5:;
wr(s->r,24,4,rd(s->u,34,4));
L_1803f25d0_6:;
/* 1803f25d3: mov eax, ebx */
L_1803f25d3_0:;
L_1803f25d3_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803f25d3_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f25d3_3:;
/* 1803f25d5: mov rbx, qword ptr [rsp + 0x58] */
L_1803f25d5_0:;
L_1803f25d5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803f25d5_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f25d5_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803f25d5_4:;
/* 1803f25da: mov rbp, qword ptr [rsp + 0x60] */
L_1803f25da_0:;
L_1803f25da_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803f25da_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f25da_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803f25da_4:;
/* 1803f25df: add rsp, 0x30 */
L_1803f25df_0:;
L_1803f25df_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f25df_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803f25df_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803f25df_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f25df_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f25df_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f25df_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803f25df_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803f25df_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803f25df_10:;
/* 1803f25e3: pop r12 */
L_1803f25e3_0:;
L_1803f25e3_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803f25e3_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f25e3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f25e3_4:;
wr(s->r,160,8,rd(s->u,39,8));
L_1803f25e3_5:;
/* 1803f25e5: pop rdi */
L_1803f25e5_0:;
L_1803f25e5_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803f25e5_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f25e5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f25e5_4:;
wr(s->r,56,8,rd(s->u,39,8));
L_1803f25e5_5:;
/* 1803f25e6: pop rsi */
L_1803f25e6_0:;
L_1803f25e6_1:;
wr(s->u,39,8,((U)UINT64_C(0x0)));
L_1803f25e6_2:;
wr(s->u,39,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f25e6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f25e6_4:;
wr(s->r,48,8,rd(s->u,39,8));
L_1803f25e6_5:;
/* 1803f25e7: ret  */
L_1803f25e7_0:;
L_1803f25e7_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f25e7_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f25e7_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f25e7_4:;
return UINT64_C(0x1803f25e8);
}
uint64_t b_1803f25d3(CPU*s){
/* 1803f25d3: mov eax, ebx */
L_1803f25d3_0:;
L_1803f25d3_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803f25d3_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f25d3_3:;
/* 1803f25d5: mov rbx, qword ptr [rsp + 0x58] */
L_1803f25d5_0:;
L_1803f25d5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803f25d5_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f25d5_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803f25d5_4:;
/* 1803f25da: mov rbp, qword ptr [rsp + 0x60] */
L_1803f25da_0:;
L_1803f25da_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803f25da_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f25da_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803f25da_4:;
/* 1803f25df: add rsp, 0x30 */
L_1803f25df_0:;
L_1803f25df_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f25df_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803f25df_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803f25df_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f25df_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f25df_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f25df_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f25df_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f25df_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f25df_10:;
/* 1803f25e3: pop r12 */
L_1803f25e3_0:;
L_1803f25e3_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f25e3_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f25e3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f25e3_4:;
wr(s->r,160,8,rd(s->u,26,8));
L_1803f25e3_5:;
/* 1803f25e5: pop rdi */
L_1803f25e5_0:;
L_1803f25e5_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f25e5_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f25e5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f25e5_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803f25e5_5:;
/* 1803f25e6: pop rsi */
L_1803f25e6_0:;
L_1803f25e6_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803f25e6_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f25e6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f25e6_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803f25e6_5:;
/* 1803f25e7: ret  */
L_1803f25e7_0:;
L_1803f25e7_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f25e7_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f25e7_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f25e7_4:;
return UINT64_C(0x1803f25e8);
}
uint64_t b_1803f25f0(CPU*s){
/* 1803f25f0: push rbx */
L_1803f25f0_0:;
L_1803f25f0_1:;
wr(s->u,9,8,rd(s->r,24,8));
L_1803f25f0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f25f0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,9,8));
L_1803f25f0_4:;
/* 1803f25f2: sub rsp, 0x20 */
L_1803f25f2_0:;
L_1803f25f2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803f25f2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803f25f2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803f25f2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f25f2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f25f2_6:;
wr(s->u,17,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f25f2_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803f25f2_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f25f2_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f25f2_10:;
/* 1803f25f6: mov rbx, rcx */
L_1803f25f6_0:;
L_1803f25f6_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803f25f6_2:;
/* 1803f25f9: mov rcx, qword ptr [rcx] */
L_1803f25f9_0:;
L_1803f25f9_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803f25f9_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803f25f9_3:;
/* 1803f25fc: test rcx, rcx */
L_1803f25fc_0:;
L_1803f25fc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f25fc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f25fc_3:;
wr(s->u,27,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803f25fc_4:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f25fc_5:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803f25fc_6:;
wr(s->u,17,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803f25fc_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803f25fc_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f25fc_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f25fc_10:;
/* 1803f25ff: jne 0x1803f260c */
L_1803f25ff_0:;
L_1803f25ff_1:;
wr(s->u,8,1,(!rd(s->r,518,1)));
L_1803f25ff_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803f260c);}
L_1803f25ff_3:;
return UINT64_C(0x1803f2601);
}
uint64_t b_1803f2601(CPU*s){
/* 1803f2601: mov eax, 0x4c4b43 */
L_1803f2601_0:;
L_1803f2601_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803f2601_2:;
/* 1803f2606: add rsp, 0x20 */
L_1803f2606_0:;
L_1803f2606_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2606_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803f2606_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803f2606_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2606_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2606_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2606_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f2606_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f2606_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f2606_10:;
/* 1803f260a: pop rbx */
L_1803f260a_0:;
L_1803f260a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803f260a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f260a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f260a_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803f260a_5:;
/* 1803f260b: ret  */
L_1803f260b_0:;
L_1803f260b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f260b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f260b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f260b_4:;
return UINT64_C(0x1803f260c);
}
uint64_t b_1803f260c(CPU*s){
/* 1803f260c: mov rax, qword ptr [rcx] */
L_1803f260c_0:;
L_1803f260c_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803f260c_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803f260c_3:;
/* 1803f260f: mov edx, 1 */
L_1803f260f_0:;
L_1803f260f_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803f260f_2:;
/* 1803f2614: call qword ptr [rax + 0x30] */
L_1803f2614_0:;
L_1803f2614_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x30))));
L_1803f2614_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2614_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803f2614_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2614_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2617)));
L_1803f2614_6:;
return (uint64_t)rd(s->u,16,8);
L_1803f2614_7:;
return UINT64_C(0x1803f2617);
}
uint64_t b_1803f2617(CPU*s){
/* 1803f2617: mov qword ptr [rbx], 0 */
L_1803f2617_0:;
L_1803f2617_1:;
wr(s->u,0,8,((U)UINT64_C(0x0)));
L_1803f2617_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803f2617_3:;
/* 1803f261e: xor eax, eax */
L_1803f261e_0:;
L_1803f261e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f261e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f261e_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803f261e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f261e_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f261e_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803f261e_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803f261e_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803f261e_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803f261e_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803f261e_11:;
/* 1803f2620: add rsp, 0x20 */
L_1803f2620_0:;
L_1803f2620_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2620_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803f2620_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803f2620_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2620_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2620_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2620_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803f2620_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803f2620_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803f2620_10:;
/* 1803f2624: pop rbx */
L_1803f2624_0:;
L_1803f2624_1:;
wr(s->u,18,8,((U)UINT64_C(0x0)));
L_1803f2624_2:;
wr(s->u,18,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2624_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2624_4:;
wr(s->r,24,8,rd(s->u,18,8));
L_1803f2624_5:;
/* 1803f2625: ret  */
L_1803f2625_0:;
L_1803f2625_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2625_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2625_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f2625_4:;
return UINT64_C(0x1803f2626);
}
uint64_t b_1803f26a0(CPU*s){
/* 1803f26a0: mov r11, rsp */
L_1803f26a0_0:;
L_1803f26a0_1:;
wr(s->r,152,8,rd(s->r,32,8));
L_1803f26a0_2:;
/* 1803f26a3: mov qword ptr [r11 + 8], rcx */
L_1803f26a3_0:;
L_1803f26a3_1:;
wr(s->u,5,8,(rd(s->r,152,8)+((U)UINT64_C(0x8))));
L_1803f26a3_2:;
wr(s->u,25,8,rd(s->r,8,8));
L_1803f26a3_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,25,8));
L_1803f26a3_4:;
/* 1803f26a7: push r12 */
L_1803f26a7_0:;
L_1803f26a7_1:;
wr(s->u,35,8,rd(s->r,160,8));
L_1803f26a7_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f26a7_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,35,8));
L_1803f26a7_4:;
/* 1803f26a9: push r14 */
L_1803f26a9_0:;
L_1803f26a9_1:;
wr(s->u,35,8,rd(s->r,176,8));
L_1803f26a9_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f26a9_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,35,8));
L_1803f26a9_4:;
/* 1803f26ab: push r15 */
L_1803f26ab_0:;
L_1803f26ab_1:;
wr(s->u,35,8,rd(s->r,184,8));
L_1803f26ab_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f26ab_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,35,8));
L_1803f26ab_4:;
/* 1803f26ad: sub rsp, 0x90 */
L_1803f26ad_0:;
L_1803f26ad_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x90))));
L_1803f26ad_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x90)),8,1));
L_1803f26ad_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x90))));
L_1803f26ad_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f26ad_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f26ad_6:;
wr(s->u,43,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f26ad_7:;
wr(s->u,51,1,pop(rd(s->u,43,8),8));
L_1803f26ad_8:;
wr(s->u,52,1,(rd(s->u,51,1)&((U)UINT64_C(0x1))));
L_1803f26ad_9:;
wr(s->r,514,1,(rd(s->u,52,1)==((U)UINT64_C(0x0))));
L_1803f26ad_10:;
/* 1803f26b4: movsxd r15, edx */
L_1803f26b4_0:;
L_1803f26b4_1:;
wr(s->r,184,8,(U)sx(rd(s->r,16,4),4));
L_1803f26b4_2:;
/* 1803f26b7: mov r14d, 1 */
L_1803f26b7_0:;
L_1803f26b7_1:;
wr(s->r,176,8,((U)UINT64_C(0x1)));
L_1803f26b7_2:;
/* 1803f26bd: mov r12, r15 */
L_1803f26bd_0:;
L_1803f26bd_1:;
wr(s->r,160,8,rd(s->r,184,8));
L_1803f26bd_2:;
/* 1803f26c0: mov eax, r15d */
L_1803f26c0_0:;
L_1803f26c0_1:;
wr(s->r,0,4,rd(s->r,184,4));
L_1803f26c0_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f26c0_3:;
/* 1803f26c3: shl r12, 4 */
L_1803f26c3_0:;
L_1803f26c3_1:;
wr(s->u,101,4,(((U)UINT64_C(0x4))&((U)UINT64_C(0x3f))));
L_1803f26c3_2:;
wr(s->u,105,8,rd(s->r,160,8));
L_1803f26c3_3:;
wr(s->r,160,8,((rd(s->u,101,4)>=64)?0:(rd(s->r,160,8)<<rd(s->u,101,4))));
L_1803f26c3_4:;
wr(s->u,76,1,(rd(s->u,101,4)==((U)UINT64_C(0x0))));
L_1803f26c3_5:;
wr(s->u,77,4,(rd(s->u,101,4)-((U)UINT64_C(0x1))));
L_1803f26c3_6:;
wr(s->u,81,8,((rd(s->u,77,4)>=64)?0:(rd(s->u,105,8)<<rd(s->u,77,4))));
L_1803f26c3_7:;
wr(s->u,89,1,(sx(rd(s->u,81,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f26c3_8:;
wr(s->u,0,1,rd(s->u,76,1));
L_1803f26c3_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803f26c3_10:;
wr(s->u,2,1,(!rd(s->u,76,1)));
L_1803f26c3_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803f26c3_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,89,1)));
L_1803f26c3_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803f26c3_14:;
wr(s->u,90,1,(rd(s->u,101,4)==((U)UINT64_C(0x1))));
L_1803f26c3_15:;
wr(s->u,91,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f26c3_16:;
wr(s->u,92,1,(rd(s->r,512,1)^rd(s->u,91,1)));
L_1803f26c3_17:;
wr(s->u,0,1,rd(s->u,90,1));
L_1803f26c3_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,92,1)));
L_1803f26c3_19:;
wr(s->u,2,1,(!rd(s->u,90,1)));
L_1803f26c3_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803f26c3_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803f26c3_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803f26c3_23:;
wr(s->u,53,1,(rd(s->u,101,4)!=((U)UINT64_C(0x0))));
L_1803f26c3_24:;
wr(s->u,54,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f26c3_25:;
wr(s->u,55,1,(!rd(s->u,53,1)));
L_1803f26c3_26:;
wr(s->u,56,1,(rd(s->u,55,1)&rd(s->r,519,1)));
L_1803f26c3_27:;
wr(s->u,57,1,(rd(s->u,53,1)&rd(s->u,54,1)));
L_1803f26c3_28:;
wr(s->r,519,1,(rd(s->u,56,1)|rd(s->u,57,1)));
L_1803f26c3_29:;
wr(s->u,58,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803f26c3_30:;
wr(s->u,59,1,(!rd(s->u,53,1)));
L_1803f26c3_31:;
wr(s->u,60,1,(rd(s->u,59,1)&rd(s->r,518,1)));
L_1803f26c3_32:;
wr(s->u,61,1,(rd(s->u,53,1)&rd(s->u,58,1)));
L_1803f26c3_33:;
wr(s->r,518,1,(rd(s->u,60,1)|rd(s->u,61,1)));
L_1803f26c3_34:;
wr(s->u,62,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803f26c3_35:;
wr(s->u,70,1,pop(rd(s->u,62,8),8));
L_1803f26c3_36:;
wr(s->u,71,1,(rd(s->u,70,1)&((U)UINT64_C(0x1))));
L_1803f26c3_37:;
wr(s->u,72,1,(rd(s->u,71,1)==((U)UINT64_C(0x0))));
L_1803f26c3_38:;
wr(s->u,73,1,(!rd(s->u,53,1)));
L_1803f26c3_39:;
wr(s->u,74,1,(rd(s->u,73,1)&rd(s->r,514,1)));
L_1803f26c3_40:;
wr(s->u,75,1,(rd(s->u,53,1)&rd(s->u,72,1)));
L_1803f26c3_41:;
wr(s->r,514,1,(rd(s->u,74,1)|rd(s->u,75,1)));
L_1803f26c3_42:;
/* 1803f26c7: mov dword ptr [rsp + 0xb8], eax */
L_1803f26c7_0:;
L_1803f26c7_1:;
wr(s->u,13,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1803f26c7_2:;
wr(s->u,21,4,rd(s->r,0,4));
L_1803f26c7_3:;
mw((uint64_t)rd(s->u,13,8),4,rd(s->u,21,4));
L_1803f26c7_4:;
/* 1803f26ce: add r12, rcx */
L_1803f26ce_0:;
L_1803f26ce_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+rd(s->r,8,8))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803f26ce_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),rd(s->r,8,8),8,0));
L_1803f26ce_3:;
wr(s->r,160,8,(rd(s->r,160,8)+rd(s->r,8,8)));
L_1803f26ce_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f26ce_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803f26ce_6:;
wr(s->u,43,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803f26ce_7:;
wr(s->u,51,1,pop(rd(s->u,43,8),8));
L_1803f26ce_8:;
wr(s->u,52,1,(rd(s->u,51,1)&((U)UINT64_C(0x1))));
L_1803f26ce_9:;
wr(s->r,514,1,(rd(s->u,52,1)==((U)UINT64_C(0x0))));
L_1803f26ce_10:;
/* 1803f26d1: cmp r15d, r14d */
L_1803f26d1_0:;
L_1803f26d1_1:;
wr(s->u,93,4,rd(s->r,176,4));
L_1803f26d1_2:;
wr(s->r,512,1,(rd(s->r,184,4)<rd(s->u,93,4)));
L_1803f26d1_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,4),rd(s->u,93,4),4,1));
L_1803f26d1_4:;
wr(s->u,97,4,(rd(s->r,184,4)-rd(s->u,93,4)));
L_1803f26d1_5:;
wr(s->r,519,1,(sx(rd(s->u,97,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f26d1_6:;
wr(s->r,518,1,(rd(s->u,97,4)==((U)UINT64_C(0x0))));
L_1803f26d1_7:;
wr(s->u,43,4,(rd(s->u,97,4)&((U)UINT64_C(0xff))));
L_1803f26d1_8:;
wr(s->u,51,1,pop(rd(s->u,43,4),4));
L_1803f26d1_9:;
wr(s->u,52,1,(rd(s->u,51,1)&((U)UINT64_C(0x1))));
L_1803f26d1_10:;
wr(s->r,514,1,(rd(s->u,52,1)==((U)UINT64_C(0x0))));
L_1803f26d1_11:;
/* 1803f26d4: jle 0x1803f286f */
L_1803f26d4_0:;
L_1803f26d4_1:;
wr(s->u,33,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803f26d4_2:;
wr(s->u,34,1,((rd(s->r,518,1)!=0)||(rd(s->u,33,1)!=0)));
L_1803f26d4_3:;
if(rd(s->u,34,1)){return UINT64_C(0x1803f286f);}
L_1803f26d4_4:;
return UINT64_C(0x1803f26da);
}
uint64_t b_1803f26da(CPU*s){
/* 1803f26da: mov qword ptr [r11 + 0x18], rbx */
L_1803f26da_0:;
L_1803f26da_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x18))));
L_1803f26da_2:;
wr(s->u,40,8,rd(s->r,24,8));
L_1803f26da_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f26da_4:;
/* 1803f26de: mov qword ptr [r11 - 0x20], rbp */
L_1803f26de_0:;
L_1803f26de_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803f26de_2:;
wr(s->u,40,8,rd(s->r,40,8));
L_1803f26de_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f26de_4:;
/* 1803f26e2: mov qword ptr [r11 - 0x28], rsi */
L_1803f26e2_0:;
L_1803f26e2_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803f26e2_2:;
wr(s->u,40,8,rd(s->r,48,8));
L_1803f26e2_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f26e2_4:;
/* 1803f26e6: mov qword ptr [r11 - 0x30], rdi */
L_1803f26e6_0:;
L_1803f26e6_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffd0))));
L_1803f26e6_2:;
wr(s->u,40,8,rd(s->r,56,8));
L_1803f26e6_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f26e6_4:;
/* 1803f26ea: mov qword ptr [r11 - 0x38], r13 */
L_1803f26ea_0:;
L_1803f26ea_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffc8))));
L_1803f26ea_2:;
wr(s->u,40,8,rd(s->r,168,8));
L_1803f26ea_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f26ea_4:;
/* 1803f26ee: movaps xmmword ptr [rsp + 0x60], xmm6 */
L_1803f26ee_0:;
L_1803f26ee_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803f26ee_2:;
wr(s->u,48,16,rd(s->r,4992,16));
L_1803f26ee_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,48,16));
L_1803f26ee_4:;
/* 1803f26f3: movaps xmmword ptr [rsp + 0x50], xmm7 */
L_1803f26f3_0:;
L_1803f26f3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803f26f3_2:;
wr(s->u,48,16,rd(s->r,5056,16));
L_1803f26f3_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,48,16));
L_1803f26f3_4:;
/* 1803f26f8: movaps xmmword ptr [r11 - 0x68], xmm8 */
L_1803f26f8_0:;
L_1803f26f8_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffff98))));
L_1803f26f8_2:;
wr(s->u,48,16,rd(s->r,5120,16));
L_1803f26f8_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,48,16));
L_1803f26f8_4:;
/* 1803f26fd: movaps xmmword ptr [r11 - 0x78], xmm9 */
L_1803f26fd_0:;
L_1803f26fd_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffff88))));
L_1803f26fd_2:;
wr(s->u,48,16,rd(s->r,5184,16));
L_1803f26fd_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,48,16));
L_1803f26fd_4:;
/* 1803f2702: movaps xmmword ptr [rsp + 0x20], xmm10 */
L_1803f2702_0:;
L_1803f2702_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f2702_2:;
wr(s->u,48,16,rd(s->r,5248,16));
L_1803f2702_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,48,16));
L_1803f2702_4:;
/* 1803f2708: movsd xmm10, qword ptr [rip + 0x419df7] */
L_1803f2708_0:;
L_1803f2708_1:;
wr(s->r,5248,8,mr(UINT64_C(0x18080c508),8));
L_1803f2708_2:;
wr(s->r,5256,8,((U)UINT64_C(0x0)));
L_1803f2708_3:;
/* 1803f2711: movsd xmm9, qword ptr [rip + 0x260b8e] */
L_1803f2711_0:;
L_1803f2711_1:;
wr(s->r,5184,8,mr(UINT64_C(0x1806532a8),8));
L_1803f2711_2:;
wr(s->r,5192,8,((U)UINT64_C(0x0)));
L_1803f2711_3:;
/* 1803f271a: nop word ptr [rax + rax] */
L_1803f271a_0:;
L_1803f271a_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f271a_2:;
wr(s->u,32,8,(rd(s->r,0,8)+rd(s->u,24,8)));
L_1803f271a_3:;
/* 1803f2720: cdqe  */
L_1803f2720_0:;
L_1803f2720_1:;
wr(s->r,0,8,(U)sx(rd(s->r,0,4),4));
L_1803f2720_2:;
/* 1803f2722: mov rdi, rcx */
L_1803f2722_0:;
L_1803f2722_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803f2722_2:;
/* 1803f2725: lea r13, [rax*8] */
L_1803f2725_0:;
L_1803f2725_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803f2725_2:;
wr(s->r,168,8,rd(s->u,8,8));
L_1803f2725_3:;
/* 1803f272d: lea rbx, [r13 + rcx] */
L_1803f272d_0:;
L_1803f272d_1:;
wr(s->u,24,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803f272d_2:;
wr(s->u,32,8,(rd(s->r,168,8)+rd(s->u,24,8)));
L_1803f272d_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803f272d_4:;
/* 1803f2732: cmp rbx, r12 */
L_1803f2732_0:;
L_1803f2732_1:;
wr(s->u,75,8,rd(s->r,160,8));
L_1803f2732_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,75,8)));
L_1803f2732_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,75,8),8,1));
L_1803f2732_4:;
wr(s->u,83,8,(rd(s->r,24,8)-rd(s->u,75,8)));
L_1803f2732_5:;
wr(s->r,519,1,(sx(rd(s->u,83,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2732_6:;
wr(s->r,518,1,(rd(s->u,83,8)==((U)UINT64_C(0x0))));
L_1803f2732_7:;
wr(s->u,65,8,(rd(s->u,83,8)&((U)UINT64_C(0xff))));
L_1803f2732_8:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803f2732_9:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803f2732_10:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803f2732_11:;
/* 1803f2735: jae 0x1803f2815 */
L_1803f2735_0:;
L_1803f2735_1:;
wr(s->u,64,1,(!rd(s->r,512,1)));
L_1803f2735_2:;
if(rd(s->u,64,1)){return UINT64_C(0x1803f2815);}
L_1803f2735_3:;
return UINT64_C(0x1803f273b);
}
uint64_t b_1803f2720(CPU*s){
/* 1803f2720: cdqe  */
L_1803f2720_0:;
L_1803f2720_1:;
wr(s->r,0,8,(U)sx(rd(s->r,0,4),4));
L_1803f2720_2:;
/* 1803f2722: mov rdi, rcx */
L_1803f2722_0:;
L_1803f2722_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803f2722_2:;
/* 1803f2725: lea r13, [rax*8] */
L_1803f2725_0:;
L_1803f2725_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803f2725_2:;
wr(s->r,168,8,rd(s->u,0,8));
L_1803f2725_3:;
/* 1803f272d: lea rbx, [r13 + rcx] */
L_1803f272d_0:;
L_1803f272d_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803f272d_2:;
wr(s->u,16,8,(rd(s->r,168,8)+rd(s->u,8,8)));
L_1803f272d_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803f272d_4:;
/* 1803f2732: cmp rbx, r12 */
L_1803f2732_0:;
L_1803f2732_1:;
wr(s->u,35,8,rd(s->r,160,8));
L_1803f2732_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,35,8)));
L_1803f2732_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,35,8),8,1));
L_1803f2732_4:;
wr(s->u,43,8,(rd(s->r,24,8)-rd(s->u,35,8)));
L_1803f2732_5:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2732_6:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803f2732_7:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803f2732_8:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803f2732_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803f2732_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803f2732_11:;
/* 1803f2735: jae 0x1803f2815 */
L_1803f2735_0:;
L_1803f2735_1:;
wr(s->u,24,1,(!rd(s->r,512,1)));
L_1803f2735_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803f2815);}
L_1803f2735_3:;
return UINT64_C(0x1803f273b);
}
uint64_t b_1803f273b(CPU*s){
/* 1803f273b: nop dword ptr [rax + rax] */
L_1803f273b_0:;
L_1803f273b_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f273b_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803f273b_3:;
/* 1803f2740: xor esi, esi */
L_1803f2740_0:;
L_1803f2740_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f2740_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2740_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803f2740_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803f2740_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2740_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803f2740_7:;
wr(s->u,17,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803f2740_8:;
wr(s->u,25,1,pop(rd(s->u,17,4),4));
L_1803f2740_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f2740_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f2740_11:;
/* 1803f2742: mov rbp, rbx */
L_1803f2742_0:;
L_1803f2742_1:;
wr(s->r,40,8,rd(s->r,24,8));
L_1803f2742_2:;
/* 1803f2745: cmp rdi, rbx */
L_1803f2745_0:;
L_1803f2745_1:;
wr(s->u,27,8,rd(s->r,24,8));
L_1803f2745_2:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->u,27,8)));
L_1803f2745_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->u,27,8),8,1));
L_1803f2745_4:;
wr(s->u,35,8,(rd(s->r,56,8)-rd(s->u,27,8)));
L_1803f2745_5:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2745_6:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803f2745_7:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803f2745_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803f2745_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f2745_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f2745_11:;
/* 1803f2748: jae 0x1803f27fe */
L_1803f2748_0:;
L_1803f2748_1:;
wr(s->u,16,1,(!rd(s->r,512,1)));
L_1803f2748_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803f27fe);}
L_1803f2748_3:;
return UINT64_C(0x1803f274e);
}
uint64_t b_1803f2740(CPU*s){
/* 1803f2740: xor esi, esi */
L_1803f2740_0:;
L_1803f2740_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f2740_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2740_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803f2740_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803f2740_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2740_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803f2740_7:;
wr(s->u,1,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803f2740_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803f2740_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803f2740_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803f2740_11:;
/* 1803f2742: mov rbp, rbx */
L_1803f2742_0:;
L_1803f2742_1:;
wr(s->r,40,8,rd(s->r,24,8));
L_1803f2742_2:;
/* 1803f2745: cmp rdi, rbx */
L_1803f2745_0:;
L_1803f2745_1:;
wr(s->u,11,8,rd(s->r,24,8));
L_1803f2745_2:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->u,11,8)));
L_1803f2745_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->u,11,8),8,1));
L_1803f2745_4:;
wr(s->u,19,8,(rd(s->r,56,8)-rd(s->u,11,8)));
L_1803f2745_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2745_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803f2745_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803f2745_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803f2745_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803f2745_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803f2745_11:;
/* 1803f2748: jae 0x1803f27fe */
L_1803f2748_0:;
L_1803f2748_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803f2748_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803f27fe);}
L_1803f2748_3:;
return UINT64_C(0x1803f274e);
}
uint64_t b_1803f274e(CPU*s){
/* 1803f274e: movd xmm8, r15d */
L_1803f274e_0:;
L_1803f274e_1:;
wr(s->r,5120,16,rd(s->r,184,4));
L_1803f274e_2:;
/* 1803f2753: cvtdq2pd xmm8, xmm8 */
L_1803f2753_0:;
L_1803f2753_1:;
wr(s->u,16,8,rd(s->r,5120,8));
L_1803f2753_2:;
wr(s->r,5120,8,fb((double)sx(rd(s->u,16,4),4),8));
L_1803f2753_3:;
wr(s->r,5128,8,fb((double)sx(rd(s->u,20,4),4),8));
L_1803f2753_4:;
/* 1803f2758: nop dword ptr [rax + rax] */
L_1803f2758_0:;
L_1803f2758_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f2758_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803f2758_3:;
/* 1803f2760: movd xmm6, esi */
L_1803f2760_0:;
L_1803f2760_1:;
wr(s->r,4992,16,rd(s->r,48,4));
L_1803f2760_2:;
/* 1803f2764: cvtdq2pd xmm6, xmm6 */
L_1803f2764_0:;
L_1803f2764_1:;
wr(s->u,16,8,rd(s->r,4992,8));
L_1803f2764_2:;
wr(s->r,4992,8,fb((double)sx(rd(s->u,16,4),4),8));
L_1803f2764_3:;
wr(s->r,5000,8,fb((double)sx(rd(s->u,20,4),4),8));
L_1803f2764_4:;
/* 1803f2768: mulsd xmm6, xmm9 */
L_1803f2768_0:;
L_1803f2768_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)*fv(rd(s->r,5184,8),8),8));
L_1803f2768_2:;
/* 1803f276d: divsd xmm6, xmm8 */
L_1803f276d_0:;
L_1803f276d_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)/fv(rd(s->r,5120,8),8),8));
L_1803f276d_2:;
/* 1803f2772: movapd xmm0, xmm6 */
L_1803f2772_0:;
L_1803f2772_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803f2772_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803f2772_3:;
/* 1803f2776: call 0x180609aa2 */
L_1803f2776_0:;
L_1803f2776_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2776_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f277b)));
L_1803f2776_3:;
return (uint64_t)UINT64_C(0x180609aa2);
L_1803f2776_4:;
return UINT64_C(0x1803f277b);
}
uint64_t b_1803f2760(CPU*s){
/* 1803f2760: movd xmm6, esi */
L_1803f2760_0:;
L_1803f2760_1:;
wr(s->r,4992,16,rd(s->r,48,4));
L_1803f2760_2:;
/* 1803f2764: cvtdq2pd xmm6, xmm6 */
L_1803f2764_0:;
L_1803f2764_1:;
wr(s->u,0,8,rd(s->r,4992,8));
L_1803f2764_2:;
wr(s->r,4992,8,fb((double)sx(rd(s->u,0,4),4),8));
L_1803f2764_3:;
wr(s->r,5000,8,fb((double)sx(rd(s->u,4,4),4),8));
L_1803f2764_4:;
/* 1803f2768: mulsd xmm6, xmm9 */
L_1803f2768_0:;
L_1803f2768_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)*fv(rd(s->r,5184,8),8),8));
L_1803f2768_2:;
/* 1803f276d: divsd xmm6, xmm8 */
L_1803f276d_0:;
L_1803f276d_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)/fv(rd(s->r,5120,8),8),8));
L_1803f276d_2:;
/* 1803f2772: movapd xmm0, xmm6 */
L_1803f2772_0:;
L_1803f2772_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803f2772_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803f2772_3:;
/* 1803f2776: call 0x180609aa2 */
L_1803f2776_0:;
L_1803f2776_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2776_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f277b)));
L_1803f2776_3:;
return (uint64_t)UINT64_C(0x180609aa2);
L_1803f2776_4:;
return UINT64_C(0x1803f277b);
}
uint64_t b_1803f277b(CPU*s){
/* 1803f277b: movapd xmm7, xmm0 */
L_1803f277b_0:;
L_1803f277b_1:;
wr(s->r,5056,8,rd(s->r,4608,8));
L_1803f277b_2:;
wr(s->r,5064,8,rd(s->r,4616,8));
L_1803f277b_3:;
/* 1803f277f: movapd xmm0, xmm6 */
L_1803f277f_0:;
L_1803f277f_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803f277f_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803f277f_3:;
/* 1803f2783: call 0x1806099fa */
L_1803f2783_0:;
L_1803f2783_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2783_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2788)));
L_1803f2783_3:;
return (uint64_t)UINT64_C(0x1806099fa);
L_1803f2783_4:;
return UINT64_C(0x1803f2788);
}
uint64_t b_1803f2788(CPU*s){
/* 1803f2788: movsd xmm5, qword ptr [rdi + 8] */
L_1803f2788_0:;
L_1803f2788_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803f2788_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2788_3:;
wr(s->r,4928,8,rd(s->u,8,8));
L_1803f2788_4:;
wr(s->r,4936,8,((U)UINT64_C(0x0)));
L_1803f2788_5:;
/* 1803f278d: movsd xmm4, qword ptr [rdi] */
L_1803f278d_0:;
L_1803f278d_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803f278d_2:;
wr(s->r,4864,8,rd(s->u,8,8));
L_1803f278d_3:;
wr(s->r,4872,8,((U)UINT64_C(0x0)));
L_1803f278d_4:;
/* 1803f2791: add rdi, 0x10 */
L_1803f2791_0:;
L_1803f2791_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803f2791_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x10)),8,0));
L_1803f2791_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803f2791_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2791_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803f2791_6:;
wr(s->u,16,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803f2791_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f2791_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f2791_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f2791_10:;
/* 1803f2795: add rbx, 0x10 */
L_1803f2795_0:;
L_1803f2795_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803f2795_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x10)),8,0));
L_1803f2795_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803f2795_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2795_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803f2795_6:;
wr(s->u,16,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803f2795_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f2795_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f2795_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f2795_10:;
/* 1803f2799: add esi, r14d */
L_1803f2799_0:;
L_1803f2799_1:;
wr(s->r,512,1,(((rd(s->r,48,4)+rd(s->r,176,4))&(((U)1<<32)-1))<rd(s->r,48,4)));
L_1803f2799_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->r,176,4),4,0));
L_1803f2799_3:;
wr(s->r,48,4,(rd(s->r,48,4)+rd(s->r,176,4)));
L_1803f2799_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803f2799_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2799_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803f2799_7:;
wr(s->u,16,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803f2799_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803f2799_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f2799_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f2799_11:;
/* 1803f279c: movapd xmm3, xmm5 */
L_1803f279c_0:;
L_1803f279c_1:;
wr(s->r,4800,8,rd(s->r,4928,8));
L_1803f279c_2:;
wr(s->r,4808,8,rd(s->r,4936,8));
L_1803f279c_3:;
/* 1803f27a0: subsd xmm5, qword ptr [rbx - 8] */
L_1803f27a0_0:;
L_1803f27a0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803f27a0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f27a0_3:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)-fv(rd(s->u,8,8),8),8));
L_1803f27a0_4:;
/* 1803f27a5: movapd xmm6, xmm10 */
L_1803f27a5_0:;
L_1803f27a5_1:;
wr(s->r,4992,8,rd(s->r,5248,8));
L_1803f27a5_2:;
wr(s->r,5000,8,rd(s->r,5256,8));
L_1803f27a5_3:;
/* 1803f27aa: addsd xmm3, qword ptr [rbx - 8] */
L_1803f27aa_0:;
L_1803f27aa_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803f27aa_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f27aa_3:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->u,8,8),8),8));
L_1803f27aa_4:;
/* 1803f27af: subsd xmm6, xmm0 */
L_1803f27af_0:;
L_1803f27af_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803f27af_2:;
/* 1803f27b3: movsd xmm0, qword ptr [rbx - 0x10] */
L_1803f27b3_0:;
L_1803f27b3_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803f27b3_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f27b3_3:;
wr(s->r,4608,8,rd(s->u,8,8));
L_1803f27b3_4:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803f27b3_5:;
/* 1803f27b8: subsd xmm4, xmm0 */
L_1803f27b8_0:;
L_1803f27b8_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803f27b8_2:;
/* 1803f27bc: addsd xmm0, qword ptr [rdi - 0x10] */
L_1803f27bc_0:;
L_1803f27bc_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803f27bc_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f27bc_3:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->u,8,8),8),8));
L_1803f27bc_4:;
/* 1803f27c1: movsd qword ptr [rdi - 8], xmm3 */
L_1803f27c1_0:;
L_1803f27c1_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803f27c1_2:;
wr(s->u,8,8,rd(s->r,4800,8));
L_1803f27c1_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f27c1_4:;
/* 1803f27c6: movsd qword ptr [rdi - 0x10], xmm0 */
L_1803f27c6_0:;
L_1803f27c6_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803f27c6_2:;
wr(s->u,8,8,rd(s->r,4608,8));
L_1803f27c6_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f27c6_4:;
/* 1803f27cb: movapd xmm1, xmm4 */
L_1803f27cb_0:;
L_1803f27cb_1:;
wr(s->r,4672,8,rd(s->r,4864,8));
L_1803f27cb_2:;
wr(s->r,4680,8,rd(s->r,4872,8));
L_1803f27cb_3:;
/* 1803f27cf: movapd xmm0, xmm5 */
L_1803f27cf_0:;
L_1803f27cf_1:;
wr(s->r,4608,8,rd(s->r,4928,8));
L_1803f27cf_2:;
wr(s->r,4616,8,rd(s->r,4936,8));
L_1803f27cf_3:;
/* 1803f27d3: mulsd xmm4, xmm6 */
L_1803f27d3_0:;
L_1803f27d3_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)*fv(rd(s->r,4992,8),8),8));
L_1803f27d3_2:;
/* 1803f27d7: mulsd xmm5, xmm7 */
L_1803f27d7_0:;
L_1803f27d7_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)*fv(rd(s->r,5056,8),8),8));
L_1803f27d7_2:;
/* 1803f27db: addsd xmm4, xmm5 */
L_1803f27db_0:;
L_1803f27db_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)+fv(rd(s->r,4928,8),8),8));
L_1803f27db_2:;
/* 1803f27df: mulsd xmm0, xmm6 */
L_1803f27df_0:;
L_1803f27df_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)*fv(rd(s->r,4992,8),8),8));
L_1803f27df_2:;
/* 1803f27e3: mulsd xmm1, xmm7 */
L_1803f27e3_0:;
L_1803f27e3_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,5056,8),8),8));
L_1803f27e3_2:;
/* 1803f27e7: movsd qword ptr [rbx - 8], xmm4 */
L_1803f27e7_0:;
L_1803f27e7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803f27e7_2:;
wr(s->u,8,8,rd(s->r,4864,8));
L_1803f27e7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f27e7_4:;
/* 1803f27ec: subsd xmm1, xmm0 */
L_1803f27ec_0:;
L_1803f27ec_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803f27ec_2:;
/* 1803f27f0: movsd qword ptr [rbx - 0x10], xmm1 */
L_1803f27f0_0:;
L_1803f27f0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803f27f0_2:;
wr(s->u,8,8,rd(s->r,4672,8));
L_1803f27f0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f27f0_4:;
/* 1803f27f5: cmp rdi, rbp */
L_1803f27f5_0:;
L_1803f27f5_1:;
wr(s->u,26,8,rd(s->r,40,8));
L_1803f27f5_2:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->u,26,8)));
L_1803f27f5_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->u,26,8),8,1));
L_1803f27f5_4:;
wr(s->u,34,8,(rd(s->r,56,8)-rd(s->u,26,8)));
L_1803f27f5_5:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f27f5_6:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803f27f5_7:;
wr(s->u,16,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803f27f5_8:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f27f5_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f27f5_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f27f5_11:;
/* 1803f27f8: jb 0x1803f2760 */
L_1803f27f8_0:;
L_1803f27f8_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803f2760);}
L_1803f27f8_2:;
return UINT64_C(0x1803f27fe);
}
uint64_t b_1803f27fe(CPU*s){
/* 1803f27fe: mov rdi, rbx */
L_1803f27fe_0:;
L_1803f27fe_1:;
wr(s->r,56,8,rd(s->r,24,8));
L_1803f27fe_2:;
/* 1803f2801: add rbx, r13 */
L_1803f2801_0:;
L_1803f2801_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+rd(s->r,168,8))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803f2801_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->r,168,8),8,0));
L_1803f2801_3:;
wr(s->r,24,8,(rd(s->r,24,8)+rd(s->r,168,8)));
L_1803f2801_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2801_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803f2801_6:;
wr(s->u,0,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803f2801_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f2801_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f2801_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f2801_10:;
/* 1803f2804: cmp rbx, r12 */
L_1803f2804_0:;
L_1803f2804_1:;
wr(s->u,10,8,rd(s->r,160,8));
L_1803f2804_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,10,8)));
L_1803f2804_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,10,8),8,1));
L_1803f2804_4:;
wr(s->u,18,8,(rd(s->r,24,8)-rd(s->u,10,8)));
L_1803f2804_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2804_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803f2804_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803f2804_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f2804_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f2804_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f2804_11:;
/* 1803f2807: jb 0x1803f2740 */
L_1803f2807_0:;
L_1803f2807_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803f2740);}
L_1803f2807_2:;
return UINT64_C(0x1803f280d);
}
uint64_t b_1803f280d(CPU*s){
/* 1803f280d: mov rcx, qword ptr [rsp + 0xb0] */
L_1803f280d_0:;
L_1803f280d_1:;
wr(s->u,0,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803f280d_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f280d_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803f280d_4:;
/* 1803f2815: mov eax, dword ptr [rsp + 0xb8] */
L_1803f2815_0:;
L_1803f2815_1:;
wr(s->u,0,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1803f2815_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f2815_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803f2815_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f2815_5:;
/* 1803f281c: add r14d, r14d */
L_1803f281c_0:;
L_1803f281c_1:;
wr(s->r,512,1,(((rd(s->r,176,4)+rd(s->r,176,4))&(((U)1<<32)-1))<rd(s->r,176,4)));
L_1803f281c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,4),rd(s->r,176,4),4,0));
L_1803f281c_3:;
wr(s->r,176,4,(rd(s->r,176,4)+rd(s->r,176,4)));
L_1803f281c_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803f281c_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f281c_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803f281c_7:;
wr(s->u,27,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803f281c_8:;
wr(s->u,31,1,pop(rd(s->u,27,4),4));
L_1803f281c_9:;
wr(s->u,32,1,(rd(s->u,31,1)&((U)UINT64_C(0x1))));
L_1803f281c_10:;
wr(s->r,514,1,(rd(s->u,32,1)==((U)UINT64_C(0x0))));
L_1803f281c_11:;
/* 1803f281f: sar eax, 1 */
L_1803f281f_0:;
L_1803f281f_1:;
wr(s->u,41,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803f281f_2:;
wr(s->r,512,1,(rd(s->u,41,4)!=((U)UINT64_C(0x0))));
L_1803f281f_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f281f_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803f281f_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f281f_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f281f_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803f281f_8:;
wr(s->u,27,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803f281f_9:;
wr(s->u,31,1,pop(rd(s->u,27,4),4));
L_1803f281f_10:;
wr(s->u,32,1,(rd(s->u,31,1)&((U)UINT64_C(0x1))));
L_1803f281f_11:;
wr(s->r,514,1,(rd(s->u,32,1)==((U)UINT64_C(0x0))));
L_1803f281f_12:;
/* 1803f2821: cmp eax, 1 */
L_1803f2821_0:;
L_1803f2821_1:;
wr(s->u,33,4,rd(s->r,0,4));
L_1803f2821_2:;
wr(s->r,512,1,(rd(s->u,33,4)<((U)UINT64_C(0x1))));
L_1803f2821_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,33,4),((U)UINT64_C(0x1)),4,1));
L_1803f2821_4:;
wr(s->u,37,4,(rd(s->u,33,4)-((U)UINT64_C(0x1))));
L_1803f2821_5:;
wr(s->r,519,1,(sx(rd(s->u,37,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2821_6:;
wr(s->r,518,1,(rd(s->u,37,4)==((U)UINT64_C(0x0))));
L_1803f2821_7:;
wr(s->u,27,4,(rd(s->u,37,4)&((U)UINT64_C(0xff))));
L_1803f2821_8:;
wr(s->u,31,1,pop(rd(s->u,27,4),4));
L_1803f2821_9:;
wr(s->u,32,1,(rd(s->u,31,1)&((U)UINT64_C(0x1))));
L_1803f2821_10:;
wr(s->r,514,1,(rd(s->u,32,1)==((U)UINT64_C(0x0))));
L_1803f2821_11:;
/* 1803f2824: mov dword ptr [rsp + 0xb8], eax */
L_1803f2824_0:;
L_1803f2824_1:;
wr(s->u,0,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1803f2824_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803f2824_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803f2824_4:;
/* 1803f282b: jg 0x1803f2720 */
L_1803f282b_0:;
L_1803f282b_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1803f282b_2:;
wr(s->u,25,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803f282b_3:;
wr(s->u,26,1,((rd(s->u,24,1)!=0)&&(rd(s->u,25,1)!=0)));
L_1803f282b_4:;
if(rd(s->u,26,1)){return UINT64_C(0x1803f2720);}
L_1803f282b_5:;
return UINT64_C(0x1803f2831);
}
uint64_t b_1803f2815(CPU*s){
/* 1803f2815: mov eax, dword ptr [rsp + 0xb8] */
L_1803f2815_0:;
L_1803f2815_1:;
wr(s->u,0,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1803f2815_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f2815_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803f2815_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f2815_5:;
/* 1803f281c: add r14d, r14d */
L_1803f281c_0:;
L_1803f281c_1:;
wr(s->r,512,1,(((rd(s->r,176,4)+rd(s->r,176,4))&(((U)1<<32)-1))<rd(s->r,176,4)));
L_1803f281c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,4),rd(s->r,176,4),4,0));
L_1803f281c_3:;
wr(s->r,176,4,(rd(s->r,176,4)+rd(s->r,176,4)));
L_1803f281c_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803f281c_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f281c_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803f281c_7:;
wr(s->u,19,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803f281c_8:;
wr(s->u,23,1,pop(rd(s->u,19,4),4));
L_1803f281c_9:;
wr(s->u,24,1,(rd(s->u,23,1)&((U)UINT64_C(0x1))));
L_1803f281c_10:;
wr(s->r,514,1,(rd(s->u,24,1)==((U)UINT64_C(0x0))));
L_1803f281c_11:;
/* 1803f281f: sar eax, 1 */
L_1803f281f_0:;
L_1803f281f_1:;
wr(s->u,33,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803f281f_2:;
wr(s->r,512,1,(rd(s->u,33,4)!=((U)UINT64_C(0x0))));
L_1803f281f_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f281f_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803f281f_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f281f_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f281f_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803f281f_8:;
wr(s->u,19,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803f281f_9:;
wr(s->u,23,1,pop(rd(s->u,19,4),4));
L_1803f281f_10:;
wr(s->u,24,1,(rd(s->u,23,1)&((U)UINT64_C(0x1))));
L_1803f281f_11:;
wr(s->r,514,1,(rd(s->u,24,1)==((U)UINT64_C(0x0))));
L_1803f281f_12:;
/* 1803f2821: cmp eax, 1 */
L_1803f2821_0:;
L_1803f2821_1:;
wr(s->u,25,4,rd(s->r,0,4));
L_1803f2821_2:;
wr(s->r,512,1,(rd(s->u,25,4)<((U)UINT64_C(0x1))));
L_1803f2821_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,25,4),((U)UINT64_C(0x1)),4,1));
L_1803f2821_4:;
wr(s->u,29,4,(rd(s->u,25,4)-((U)UINT64_C(0x1))));
L_1803f2821_5:;
wr(s->r,519,1,(sx(rd(s->u,29,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2821_6:;
wr(s->r,518,1,(rd(s->u,29,4)==((U)UINT64_C(0x0))));
L_1803f2821_7:;
wr(s->u,19,4,(rd(s->u,29,4)&((U)UINT64_C(0xff))));
L_1803f2821_8:;
wr(s->u,23,1,pop(rd(s->u,19,4),4));
L_1803f2821_9:;
wr(s->u,24,1,(rd(s->u,23,1)&((U)UINT64_C(0x1))));
L_1803f2821_10:;
wr(s->r,514,1,(rd(s->u,24,1)==((U)UINT64_C(0x0))));
L_1803f2821_11:;
/* 1803f2824: mov dword ptr [rsp + 0xb8], eax */
L_1803f2824_0:;
L_1803f2824_1:;
wr(s->u,0,8,(((U)UINT64_C(0xb8))+rd(s->r,32,8)));
L_1803f2824_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803f2824_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803f2824_4:;
/* 1803f282b: jg 0x1803f2720 */
L_1803f282b_0:;
L_1803f282b_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1803f282b_2:;
wr(s->u,17,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803f282b_3:;
wr(s->u,18,1,((rd(s->u,16,1)!=0)&&(rd(s->u,17,1)!=0)));
L_1803f282b_4:;
if(rd(s->u,18,1)){return UINT64_C(0x1803f2720);}
L_1803f282b_5:;
return UINT64_C(0x1803f2831);
}
uint64_t b_1803f2831(CPU*s){
/* 1803f2831: movaps xmm10, xmmword ptr [rsp + 0x20] */
L_1803f2831_0:;
L_1803f2831_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f2831_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2831_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2831_4:;
wr(s->r,5248,4,rd(s->u,58,4));
L_1803f2831_5:;
wr(s->r,5252,4,rd(s->u,62,4));
L_1803f2831_6:;
wr(s->r,5256,4,rd(s->u,66,4));
L_1803f2831_7:;
wr(s->r,5260,4,rd(s->u,70,4));
L_1803f2831_8:;
/* 1803f2837: movaps xmm9, xmmword ptr [rsp + 0x30] */
L_1803f2837_0:;
L_1803f2837_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f2837_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2837_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2837_4:;
wr(s->r,5184,4,rd(s->u,58,4));
L_1803f2837_5:;
wr(s->r,5188,4,rd(s->u,62,4));
L_1803f2837_6:;
wr(s->r,5192,4,rd(s->u,66,4));
L_1803f2837_7:;
wr(s->r,5196,4,rd(s->u,70,4));
L_1803f2837_8:;
/* 1803f283d: movaps xmm8, xmmword ptr [rsp + 0x40] */
L_1803f283d_0:;
L_1803f283d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803f283d_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f283d_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f283d_4:;
wr(s->r,5120,4,rd(s->u,58,4));
L_1803f283d_5:;
wr(s->r,5124,4,rd(s->u,62,4));
L_1803f283d_6:;
wr(s->r,5128,4,rd(s->u,66,4));
L_1803f283d_7:;
wr(s->r,5132,4,rd(s->u,70,4));
L_1803f283d_8:;
/* 1803f2843: mov r13, qword ptr [rsp + 0x70] */
L_1803f2843_0:;
L_1803f2843_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803f2843_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2843_3:;
wr(s->r,168,8,rd(s->u,32,8));
L_1803f2843_4:;
/* 1803f2848: mov rdi, qword ptr [rsp + 0x78] */
L_1803f2848_0:;
L_1803f2848_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803f2848_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2848_3:;
wr(s->r,56,8,rd(s->u,32,8));
L_1803f2848_4:;
/* 1803f284d: mov rsi, qword ptr [rsp + 0x80] */
L_1803f284d_0:;
L_1803f284d_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803f284d_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f284d_3:;
wr(s->r,48,8,rd(s->u,32,8));
L_1803f284d_4:;
/* 1803f2855: mov rbp, qword ptr [rsp + 0x88] */
L_1803f2855_0:;
L_1803f2855_1:;
wr(s->u,8,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_1803f2855_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f2855_3:;
wr(s->r,40,8,rd(s->u,32,8));
L_1803f2855_4:;
/* 1803f285d: mov rbx, qword ptr [rsp + 0xc0] */
L_1803f285d_0:;
L_1803f285d_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803f285d_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f285d_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803f285d_4:;
/* 1803f2865: movaps xmm7, xmmword ptr [rsp + 0x50] */
L_1803f2865_0:;
L_1803f2865_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803f2865_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2865_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2865_4:;
wr(s->r,5056,4,rd(s->u,58,4));
L_1803f2865_5:;
wr(s->r,5060,4,rd(s->u,62,4));
L_1803f2865_6:;
wr(s->r,5064,4,rd(s->u,66,4));
L_1803f2865_7:;
wr(s->r,5068,4,rd(s->u,70,4));
L_1803f2865_8:;
/* 1803f286a: movaps xmm6, xmmword ptr [rsp + 0x60] */
L_1803f286a_0:;
L_1803f286a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803f286a_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f286a_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f286a_4:;
wr(s->r,4992,4,rd(s->u,58,4));
L_1803f286a_5:;
wr(s->r,4996,4,rd(s->u,62,4));
L_1803f286a_6:;
wr(s->r,5000,4,rd(s->u,66,4));
L_1803f286a_7:;
wr(s->r,5004,4,rd(s->u,70,4));
L_1803f286a_8:;
/* 1803f286f: add rsp, 0x90 */
L_1803f286f_0:;
L_1803f286f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x90)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f286f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x90)),8,0));
L_1803f286f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x90))));
L_1803f286f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f286f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f286f_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f286f_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803f286f_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803f286f_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803f286f_10:;
/* 1803f2876: pop r15 */
L_1803f2876_0:;
L_1803f2876_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803f2876_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2876_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2876_4:;
wr(s->r,184,8,rd(s->u,50,8));
L_1803f2876_5:;
/* 1803f2878: pop r14 */
L_1803f2878_0:;
L_1803f2878_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803f2878_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2878_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2878_4:;
wr(s->r,176,8,rd(s->u,50,8));
L_1803f2878_5:;
/* 1803f287a: pop r12 */
L_1803f287a_0:;
L_1803f287a_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803f287a_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f287a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f287a_4:;
wr(s->r,160,8,rd(s->u,50,8));
L_1803f287a_5:;
/* 1803f287c: ret  */
L_1803f287c_0:;
L_1803f287c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f287c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f287c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f287c_4:;
return UINT64_C(0x1803f287d);
}
uint64_t b_1803f286f(CPU*s){
/* 1803f286f: add rsp, 0x90 */
L_1803f286f_0:;
L_1803f286f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x90)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f286f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x90)),8,0));
L_1803f286f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x90))));
L_1803f286f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f286f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f286f_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f286f_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f286f_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f286f_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f286f_10:;
/* 1803f2876: pop r15 */
L_1803f2876_0:;
L_1803f2876_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803f2876_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2876_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2876_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803f2876_5:;
/* 1803f2878: pop r14 */
L_1803f2878_0:;
L_1803f2878_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803f2878_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2878_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2878_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803f2878_5:;
/* 1803f287a: pop r12 */
L_1803f287a_0:;
L_1803f287a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803f287a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f287a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f287a_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803f287a_5:;
/* 1803f287c: ret  */
L_1803f287c_0:;
L_1803f287c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f287c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f287c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f287c_4:;
return UINT64_C(0x1803f287d);
}
uint64_t b_1803f2880(CPU*s){
/* 1803f2880: mov r11, rsp */
L_1803f2880_0:;
L_1803f2880_1:;
wr(s->r,152,8,rd(s->r,32,8));
L_1803f2880_2:;
/* 1803f2883: mov qword ptr [r11 + 8], rcx */
L_1803f2883_0:;
L_1803f2883_1:;
wr(s->u,5,8,(rd(s->r,152,8)+((U)UINT64_C(0x8))));
L_1803f2883_2:;
wr(s->u,25,8,rd(s->r,8,8));
L_1803f2883_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,25,8));
L_1803f2883_4:;
/* 1803f2887: push r12 */
L_1803f2887_0:;
L_1803f2887_1:;
wr(s->u,35,8,rd(s->r,160,8));
L_1803f2887_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2887_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,35,8));
L_1803f2887_4:;
/* 1803f2889: push r13 */
L_1803f2889_0:;
L_1803f2889_1:;
wr(s->u,35,8,rd(s->r,168,8));
L_1803f2889_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2889_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,35,8));
L_1803f2889_4:;
/* 1803f288b: push r15 */
L_1803f288b_0:;
L_1803f288b_1:;
wr(s->u,35,8,rd(s->r,184,8));
L_1803f288b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f288b_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,35,8));
L_1803f288b_4:;
/* 1803f288d: sub rsp, 0x80 */
L_1803f288d_0:;
L_1803f288d_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x80))));
L_1803f288d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x80)),8,1));
L_1803f288d_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x80))));
L_1803f288d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f288d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f288d_6:;
wr(s->u,43,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f288d_7:;
wr(s->u,51,1,pop(rd(s->u,43,8),8));
L_1803f288d_8:;
wr(s->u,52,1,(rd(s->u,51,1)&((U)UINT64_C(0x1))));
L_1803f288d_9:;
wr(s->r,514,1,(rd(s->u,52,1)==((U)UINT64_C(0x0))));
L_1803f288d_10:;
/* 1803f2894: movsxd r15, edx */
L_1803f2894_0:;
L_1803f2894_1:;
wr(s->r,184,8,(U)sx(rd(s->r,16,4),4));
L_1803f2894_2:;
/* 1803f2897: mov eax, 2 */
L_1803f2897_0:;
L_1803f2897_1:;
wr(s->r,0,8,((U)UINT64_C(0x2)));
L_1803f2897_2:;
/* 1803f289c: mov r13, r15 */
L_1803f289c_0:;
L_1803f289c_1:;
wr(s->r,168,8,rd(s->r,184,8));
L_1803f289c_2:;
/* 1803f289f: mov r12d, r15d */
L_1803f289f_0:;
L_1803f289f_1:;
wr(s->r,160,4,rd(s->r,184,4));
L_1803f289f_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803f289f_3:;
/* 1803f28a2: mov dword ptr [rsp + 0xa8], eax */
L_1803f28a2_0:;
L_1803f28a2_1:;
wr(s->u,13,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1803f28a2_2:;
wr(s->u,21,4,rd(s->r,0,4));
L_1803f28a2_3:;
mw((uint64_t)rd(s->u,13,8),4,rd(s->u,21,4));
L_1803f28a2_4:;
/* 1803f28a9: shl r13, 4 */
L_1803f28a9_0:;
L_1803f28a9_1:;
wr(s->u,97,4,(((U)UINT64_C(0x4))&((U)UINT64_C(0x3f))));
L_1803f28a9_2:;
wr(s->u,101,8,rd(s->r,168,8));
L_1803f28a9_3:;
wr(s->r,168,8,((rd(s->u,97,4)>=64)?0:(rd(s->r,168,8)<<rd(s->u,97,4))));
L_1803f28a9_4:;
wr(s->u,76,1,(rd(s->u,97,4)==((U)UINT64_C(0x0))));
L_1803f28a9_5:;
wr(s->u,77,4,(rd(s->u,97,4)-((U)UINT64_C(0x1))));
L_1803f28a9_6:;
wr(s->u,81,8,((rd(s->u,77,4)>=64)?0:(rd(s->u,101,8)<<rd(s->u,77,4))));
L_1803f28a9_7:;
wr(s->u,89,1,(sx(rd(s->u,81,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f28a9_8:;
wr(s->u,0,1,rd(s->u,76,1));
L_1803f28a9_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803f28a9_10:;
wr(s->u,2,1,(!rd(s->u,76,1)));
L_1803f28a9_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803f28a9_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,89,1)));
L_1803f28a9_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803f28a9_14:;
wr(s->u,90,1,(rd(s->u,97,4)==((U)UINT64_C(0x1))));
L_1803f28a9_15:;
wr(s->u,91,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f28a9_16:;
wr(s->u,92,1,(rd(s->r,512,1)^rd(s->u,91,1)));
L_1803f28a9_17:;
wr(s->u,0,1,rd(s->u,90,1));
L_1803f28a9_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,92,1)));
L_1803f28a9_19:;
wr(s->u,2,1,(!rd(s->u,90,1)));
L_1803f28a9_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803f28a9_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803f28a9_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803f28a9_23:;
wr(s->u,53,1,(rd(s->u,97,4)!=((U)UINT64_C(0x0))));
L_1803f28a9_24:;
wr(s->u,54,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f28a9_25:;
wr(s->u,55,1,(!rd(s->u,53,1)));
L_1803f28a9_26:;
wr(s->u,56,1,(rd(s->u,55,1)&rd(s->r,519,1)));
L_1803f28a9_27:;
wr(s->u,57,1,(rd(s->u,53,1)&rd(s->u,54,1)));
L_1803f28a9_28:;
wr(s->r,519,1,(rd(s->u,56,1)|rd(s->u,57,1)));
L_1803f28a9_29:;
wr(s->u,58,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803f28a9_30:;
wr(s->u,59,1,(!rd(s->u,53,1)));
L_1803f28a9_31:;
wr(s->u,60,1,(rd(s->u,59,1)&rd(s->r,518,1)));
L_1803f28a9_32:;
wr(s->u,61,1,(rd(s->u,53,1)&rd(s->u,58,1)));
L_1803f28a9_33:;
wr(s->r,518,1,(rd(s->u,60,1)|rd(s->u,61,1)));
L_1803f28a9_34:;
wr(s->u,62,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803f28a9_35:;
wr(s->u,70,1,pop(rd(s->u,62,8),8));
L_1803f28a9_36:;
wr(s->u,71,1,(rd(s->u,70,1)&((U)UINT64_C(0x1))));
L_1803f28a9_37:;
wr(s->u,72,1,(rd(s->u,71,1)==((U)UINT64_C(0x0))));
L_1803f28a9_38:;
wr(s->u,73,1,(!rd(s->u,53,1)));
L_1803f28a9_39:;
wr(s->u,74,1,(rd(s->u,73,1)&rd(s->r,514,1)));
L_1803f28a9_40:;
wr(s->u,75,1,(rd(s->u,53,1)&rd(s->u,72,1)));
L_1803f28a9_41:;
wr(s->r,514,1,(rd(s->u,74,1)|rd(s->u,75,1)));
L_1803f28a9_42:;
/* 1803f28ad: sar r12d, 1 */
L_1803f28ad_0:;
L_1803f28ad_1:;
wr(s->u,93,4,(rd(s->r,160,4)&((U)UINT64_C(0x1))));
L_1803f28ad_2:;
wr(s->r,512,1,(rd(s->u,93,4)!=((U)UINT64_C(0x0))));
L_1803f28ad_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f28ad_4:;
wr(s->r,160,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,160,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,160,4),4)>>((U)UINT64_C(0x1)))));
L_1803f28ad_5:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803f28ad_6:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f28ad_7:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803f28ad_8:;
wr(s->u,43,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803f28ad_9:;
wr(s->u,51,1,pop(rd(s->u,43,4),4));
L_1803f28ad_10:;
wr(s->u,52,1,(rd(s->u,51,1)&((U)UINT64_C(0x1))));
L_1803f28ad_11:;
wr(s->r,514,1,(rd(s->u,52,1)==((U)UINT64_C(0x0))));
L_1803f28ad_12:;
/* 1803f28b0: add r13, rcx */
L_1803f28b0_0:;
L_1803f28b0_1:;
wr(s->r,512,1,(((rd(s->r,168,8)+rd(s->r,8,8))&(((U)1<<64)-1))<rd(s->r,168,8)));
L_1803f28b0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,8),rd(s->r,8,8),8,0));
L_1803f28b0_3:;
wr(s->r,168,8,(rd(s->r,168,8)+rd(s->r,8,8)));
L_1803f28b0_4:;
wr(s->r,519,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f28b0_5:;
wr(s->r,518,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803f28b0_6:;
wr(s->u,43,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803f28b0_7:;
wr(s->u,51,1,pop(rd(s->u,43,8),8));
L_1803f28b0_8:;
wr(s->u,52,1,(rd(s->u,51,1)&((U)UINT64_C(0x1))));
L_1803f28b0_9:;
wr(s->r,514,1,(rd(s->u,52,1)==((U)UINT64_C(0x0))));
L_1803f28b0_10:;
/* 1803f28b3: test r12d, r12d */
L_1803f28b3_0:;
L_1803f28b3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f28b3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f28b3_3:;
wr(s->u,109,4,(rd(s->r,160,4)&rd(s->r,160,4)));
L_1803f28b3_4:;
wr(s->r,519,1,(sx(rd(s->u,109,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f28b3_5:;
wr(s->r,518,1,(rd(s->u,109,4)==((U)UINT64_C(0x0))));
L_1803f28b3_6:;
wr(s->u,43,4,(rd(s->u,109,4)&((U)UINT64_C(0xff))));
L_1803f28b3_7:;
wr(s->u,51,1,pop(rd(s->u,43,4),4));
L_1803f28b3_8:;
wr(s->u,52,1,(rd(s->u,51,1)&((U)UINT64_C(0x1))));
L_1803f28b3_9:;
wr(s->r,514,1,(rd(s->u,52,1)==((U)UINT64_C(0x0))));
L_1803f28b3_10:;
/* 1803f28b6: jle 0x1803f2a2f */
L_1803f28b6_0:;
L_1803f28b6_1:;
wr(s->u,33,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803f28b6_2:;
wr(s->u,34,1,((rd(s->r,518,1)!=0)||(rd(s->u,33,1)!=0)));
L_1803f28b6_3:;
if(rd(s->u,34,1)){return UINT64_C(0x1803f2a2f);}
L_1803f28b6_4:;
return UINT64_C(0x1803f28bc);
}
uint64_t b_1803f28bc(CPU*s){
/* 1803f28bc: mov qword ptr [r11 + 0x18], rbx */
L_1803f28bc_0:;
L_1803f28bc_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x18))));
L_1803f28bc_2:;
wr(s->u,40,8,rd(s->r,24,8));
L_1803f28bc_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f28bc_4:;
/* 1803f28c0: mov qword ptr [r11 - 0x20], rbp */
L_1803f28c0_0:;
L_1803f28c0_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffe0))));
L_1803f28c0_2:;
wr(s->u,40,8,rd(s->r,40,8));
L_1803f28c0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f28c0_4:;
/* 1803f28c4: mov qword ptr [r11 - 0x28], rsi */
L_1803f28c4_0:;
L_1803f28c4_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803f28c4_2:;
wr(s->u,40,8,rd(s->r,48,8));
L_1803f28c4_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f28c4_4:;
/* 1803f28c8: mov qword ptr [r11 - 0x30], rdi */
L_1803f28c8_0:;
L_1803f28c8_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffd0))));
L_1803f28c8_2:;
wr(s->u,40,8,rd(s->r,56,8));
L_1803f28c8_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f28c8_4:;
/* 1803f28cc: mov qword ptr [r11 - 0x38], r14 */
L_1803f28cc_0:;
L_1803f28cc_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffc8))));
L_1803f28cc_2:;
wr(s->u,40,8,rd(s->r,176,8));
L_1803f28cc_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f28cc_4:;
/* 1803f28d0: movaps xmmword ptr [rsp + 0x50], xmm6 */
L_1803f28d0_0:;
L_1803f28d0_1:;
wr(s->u,32,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803f28d0_2:;
wr(s->u,48,16,rd(s->r,4992,16));
L_1803f28d0_3:;
mw((uint64_t)rd(s->u,32,8),16,rd(s->u,48,16));
L_1803f28d0_4:;
/* 1803f28d5: movaps xmmword ptr [rsp + 0x40], xmm7 */
L_1803f28d5_0:;
L_1803f28d5_1:;
wr(s->u,32,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803f28d5_2:;
wr(s->u,48,16,rd(s->r,5056,16));
L_1803f28d5_3:;
mw((uint64_t)rd(s->u,32,8),16,rd(s->u,48,16));
L_1803f28d5_4:;
/* 1803f28da: movaps xmmword ptr [r11 - 0x68], xmm8 */
L_1803f28da_0:;
L_1803f28da_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffff98))));
L_1803f28da_2:;
wr(s->u,48,16,rd(s->r,5120,16));
L_1803f28da_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,48,16));
L_1803f28da_4:;
/* 1803f28df: movaps xmmword ptr [r11 - 0x78], xmm9 */
L_1803f28df_0:;
L_1803f28df_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffff88))));
L_1803f28df_2:;
wr(s->u,48,16,rd(s->r,5184,16));
L_1803f28df_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,48,16));
L_1803f28df_4:;
/* 1803f28e4: movsd xmm9, qword ptr [rip + 0x2609bb] */
L_1803f28e4_0:;
L_1803f28e4_1:;
wr(s->r,5184,8,mr(UINT64_C(0x1806532a8),8));
L_1803f28e4_2:;
wr(s->r,5192,8,((U)UINT64_C(0x0)));
L_1803f28e4_3:;
/* 1803f28ed: nop dword ptr [rax] */
L_1803f28ed_0:;
L_1803f28ed_1:;
/* 1803f28f0: cdqe  */
L_1803f28f0_0:;
L_1803f28f0_1:;
wr(s->r,0,8,(U)sx(rd(s->r,0,4),4));
L_1803f28f0_2:;
/* 1803f28f2: mov rdi, rcx */
L_1803f28f2_0:;
L_1803f28f2_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803f28f2_2:;
/* 1803f28f5: lea r14, [rax*8] */
L_1803f28f5_0:;
L_1803f28f5_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803f28f5_2:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803f28f5_3:;
/* 1803f28fd: lea rbx, [r14 + rcx] */
L_1803f28fd_0:;
L_1803f28fd_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803f28fd_2:;
wr(s->u,16,8,(rd(s->r,176,8)+rd(s->u,8,8)));
L_1803f28fd_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803f28fd_4:;
/* 1803f2901: cmp rbx, r13 */
L_1803f2901_0:;
L_1803f2901_1:;
wr(s->u,75,8,rd(s->r,168,8));
L_1803f2901_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,75,8)));
L_1803f2901_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,75,8),8,1));
L_1803f2901_4:;
wr(s->u,83,8,(rd(s->r,24,8)-rd(s->u,75,8)));
L_1803f2901_5:;
wr(s->r,519,1,(sx(rd(s->u,83,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2901_6:;
wr(s->r,518,1,(rd(s->u,83,8)==((U)UINT64_C(0x0))));
L_1803f2901_7:;
wr(s->u,65,8,(rd(s->u,83,8)&((U)UINT64_C(0xff))));
L_1803f2901_8:;
wr(s->u,73,1,pop(rd(s->u,65,8),8));
L_1803f2901_9:;
wr(s->u,74,1,(rd(s->u,73,1)&((U)UINT64_C(0x1))));
L_1803f2901_10:;
wr(s->r,514,1,(rd(s->u,74,1)==((U)UINT64_C(0x0))));
L_1803f2901_11:;
/* 1803f2904: jae 0x1803f29e1 */
L_1803f2904_0:;
L_1803f2904_1:;
wr(s->u,64,1,(!rd(s->r,512,1)));
L_1803f2904_2:;
if(rd(s->u,64,1)){return UINT64_C(0x1803f29e1);}
L_1803f2904_3:;
return UINT64_C(0x1803f290a);
}
uint64_t b_1803f28f0(CPU*s){
/* 1803f28f0: cdqe  */
L_1803f28f0_0:;
L_1803f28f0_1:;
wr(s->r,0,8,(U)sx(rd(s->r,0,4),4));
L_1803f28f0_2:;
/* 1803f28f2: mov rdi, rcx */
L_1803f28f2_0:;
L_1803f28f2_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803f28f2_2:;
/* 1803f28f5: lea r14, [rax*8] */
L_1803f28f5_0:;
L_1803f28f5_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803f28f5_2:;
wr(s->r,176,8,rd(s->u,16,8));
L_1803f28f5_3:;
/* 1803f28fd: lea rbx, [r14 + rcx] */
L_1803f28fd_0:;
L_1803f28fd_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803f28fd_2:;
wr(s->u,8,8,(rd(s->r,176,8)+rd(s->u,0,8)));
L_1803f28fd_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803f28fd_4:;
/* 1803f2901: cmp rbx, r13 */
L_1803f2901_0:;
L_1803f2901_1:;
wr(s->u,35,8,rd(s->r,168,8));
L_1803f2901_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,35,8)));
L_1803f2901_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,35,8),8,1));
L_1803f2901_4:;
wr(s->u,43,8,(rd(s->r,24,8)-rd(s->u,35,8)));
L_1803f2901_5:;
wr(s->r,519,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2901_6:;
wr(s->r,518,1,(rd(s->u,43,8)==((U)UINT64_C(0x0))));
L_1803f2901_7:;
wr(s->u,25,8,(rd(s->u,43,8)&((U)UINT64_C(0xff))));
L_1803f2901_8:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803f2901_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803f2901_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803f2901_11:;
/* 1803f2904: jae 0x1803f29e1 */
L_1803f2904_0:;
L_1803f2904_1:;
wr(s->u,24,1,(!rd(s->r,512,1)));
L_1803f2904_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803f29e1);}
L_1803f2904_3:;
return UINT64_C(0x1803f290a);
}
uint64_t b_1803f290a(CPU*s){
/* 1803f290a: nop word ptr [rax + rax] */
L_1803f290a_0:;
L_1803f290a_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f290a_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803f290a_3:;
/* 1803f2910: xor esi, esi */
L_1803f2910_0:;
L_1803f2910_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f2910_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2910_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803f2910_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803f2910_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2910_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803f2910_7:;
wr(s->u,17,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803f2910_8:;
wr(s->u,25,1,pop(rd(s->u,17,4),4));
L_1803f2910_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f2910_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f2910_11:;
/* 1803f2912: mov rbp, rbx */
L_1803f2912_0:;
L_1803f2912_1:;
wr(s->r,40,8,rd(s->r,24,8));
L_1803f2912_2:;
/* 1803f2915: cmp rdi, rbx */
L_1803f2915_0:;
L_1803f2915_1:;
wr(s->u,27,8,rd(s->r,24,8));
L_1803f2915_2:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->u,27,8)));
L_1803f2915_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->u,27,8),8,1));
L_1803f2915_4:;
wr(s->u,35,8,(rd(s->r,56,8)-rd(s->u,27,8)));
L_1803f2915_5:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2915_6:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803f2915_7:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803f2915_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803f2915_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f2915_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f2915_11:;
/* 1803f2918: jae 0x1803f29ca */
L_1803f2918_0:;
L_1803f2918_1:;
wr(s->u,16,1,(!rd(s->r,512,1)));
L_1803f2918_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803f29ca);}
L_1803f2918_3:;
return UINT64_C(0x1803f291e);
}
uint64_t b_1803f2910(CPU*s){
/* 1803f2910: xor esi, esi */
L_1803f2910_0:;
L_1803f2910_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f2910_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f2910_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803f2910_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803f2910_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2910_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803f2910_7:;
wr(s->u,1,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803f2910_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803f2910_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803f2910_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803f2910_11:;
/* 1803f2912: mov rbp, rbx */
L_1803f2912_0:;
L_1803f2912_1:;
wr(s->r,40,8,rd(s->r,24,8));
L_1803f2912_2:;
/* 1803f2915: cmp rdi, rbx */
L_1803f2915_0:;
L_1803f2915_1:;
wr(s->u,11,8,rd(s->r,24,8));
L_1803f2915_2:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->u,11,8)));
L_1803f2915_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->u,11,8),8,1));
L_1803f2915_4:;
wr(s->u,19,8,(rd(s->r,56,8)-rd(s->u,11,8)));
L_1803f2915_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2915_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803f2915_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803f2915_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803f2915_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803f2915_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803f2915_11:;
/* 1803f2918: jae 0x1803f29ca */
L_1803f2918_0:;
L_1803f2918_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803f2918_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803f29ca);}
L_1803f2918_3:;
return UINT64_C(0x1803f291e);
}
uint64_t b_1803f291e(CPU*s){
/* 1803f291e: movd xmm8, r15d */
L_1803f291e_0:;
L_1803f291e_1:;
wr(s->r,5120,16,rd(s->r,184,4));
L_1803f291e_2:;
/* 1803f2923: cvtdq2pd xmm8, xmm8 */
L_1803f2923_0:;
L_1803f2923_1:;
wr(s->u,16,8,rd(s->r,5120,8));
L_1803f2923_2:;
wr(s->r,5120,8,fb((double)sx(rd(s->u,16,4),4),8));
L_1803f2923_3:;
wr(s->r,5128,8,fb((double)sx(rd(s->u,20,4),4),8));
L_1803f2923_4:;
/* 1803f2928: nop dword ptr [rax + rax] */
L_1803f2928_0:;
L_1803f2928_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f2928_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803f2928_3:;
/* 1803f2930: movd xmm6, esi */
L_1803f2930_0:;
L_1803f2930_1:;
wr(s->r,4992,16,rd(s->r,48,4));
L_1803f2930_2:;
/* 1803f2934: cvtdq2pd xmm6, xmm6 */
L_1803f2934_0:;
L_1803f2934_1:;
wr(s->u,16,8,rd(s->r,4992,8));
L_1803f2934_2:;
wr(s->r,4992,8,fb((double)sx(rd(s->u,16,4),4),8));
L_1803f2934_3:;
wr(s->r,5000,8,fb((double)sx(rd(s->u,20,4),4),8));
L_1803f2934_4:;
/* 1803f2938: mulsd xmm6, xmm9 */
L_1803f2938_0:;
L_1803f2938_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)*fv(rd(s->r,5184,8),8),8));
L_1803f2938_2:;
/* 1803f293d: divsd xmm6, xmm8 */
L_1803f293d_0:;
L_1803f293d_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)/fv(rd(s->r,5120,8),8),8));
L_1803f293d_2:;
/* 1803f2942: movapd xmm0, xmm6 */
L_1803f2942_0:;
L_1803f2942_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803f2942_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803f2942_3:;
/* 1803f2946: call 0x180609aa2 */
L_1803f2946_0:;
L_1803f2946_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2946_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f294b)));
L_1803f2946_3:;
return (uint64_t)UINT64_C(0x180609aa2);
L_1803f2946_4:;
return UINT64_C(0x1803f294b);
}
uint64_t b_1803f2930(CPU*s){
/* 1803f2930: movd xmm6, esi */
L_1803f2930_0:;
L_1803f2930_1:;
wr(s->r,4992,16,rd(s->r,48,4));
L_1803f2930_2:;
/* 1803f2934: cvtdq2pd xmm6, xmm6 */
L_1803f2934_0:;
L_1803f2934_1:;
wr(s->u,0,8,rd(s->r,4992,8));
L_1803f2934_2:;
wr(s->r,4992,8,fb((double)sx(rd(s->u,0,4),4),8));
L_1803f2934_3:;
wr(s->r,5000,8,fb((double)sx(rd(s->u,4,4),4),8));
L_1803f2934_4:;
/* 1803f2938: mulsd xmm6, xmm9 */
L_1803f2938_0:;
L_1803f2938_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)*fv(rd(s->r,5184,8),8),8));
L_1803f2938_2:;
/* 1803f293d: divsd xmm6, xmm8 */
L_1803f293d_0:;
L_1803f293d_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)/fv(rd(s->r,5120,8),8),8));
L_1803f293d_2:;
/* 1803f2942: movapd xmm0, xmm6 */
L_1803f2942_0:;
L_1803f2942_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803f2942_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803f2942_3:;
/* 1803f2946: call 0x180609aa2 */
L_1803f2946_0:;
L_1803f2946_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2946_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f294b)));
L_1803f2946_3:;
return (uint64_t)UINT64_C(0x180609aa2);
L_1803f2946_4:;
return UINT64_C(0x1803f294b);
}
uint64_t b_1803f294b(CPU*s){
/* 1803f294b: movapd xmm7, xmm0 */
L_1803f294b_0:;
L_1803f294b_1:;
wr(s->r,5056,8,rd(s->r,4608,8));
L_1803f294b_2:;
wr(s->r,5064,8,rd(s->r,4616,8));
L_1803f294b_3:;
/* 1803f294f: movapd xmm0, xmm6 */
L_1803f294f_0:;
L_1803f294f_1:;
wr(s->r,4608,8,rd(s->r,4992,8));
L_1803f294f_2:;
wr(s->r,4616,8,rd(s->r,5000,8));
L_1803f294f_3:;
/* 1803f2953: call 0x1806099fa */
L_1803f2953_0:;
L_1803f2953_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2953_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2958)));
L_1803f2953_3:;
return (uint64_t)UINT64_C(0x1806099fa);
L_1803f2953_4:;
return UINT64_C(0x1803f2958);
}
uint64_t b_1803f2958(CPU*s){
/* 1803f2958: movsd xmm4, qword ptr [rbx] */
L_1803f2958_0:;
L_1803f2958_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803f2958_2:;
wr(s->r,4864,8,rd(s->u,8,8));
L_1803f2958_3:;
wr(s->r,4872,8,((U)UINT64_C(0x0)));
L_1803f2958_4:;
/* 1803f295c: movsd xmm2, qword ptr [rbx + 8] */
L_1803f295c_0:;
L_1803f295c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803f295c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f295c_3:;
wr(s->r,4736,8,rd(s->u,8,8));
L_1803f295c_4:;
wr(s->r,4744,8,((U)UINT64_C(0x0)));
L_1803f295c_5:;
/* 1803f2961: add esi, r12d */
L_1803f2961_0:;
L_1803f2961_1:;
wr(s->r,512,1,(((rd(s->r,48,4)+rd(s->r,160,4))&(((U)1<<32)-1))<rd(s->r,48,4)));
L_1803f2961_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->r,160,4),4,0));
L_1803f2961_3:;
wr(s->r,48,4,(rd(s->r,48,4)+rd(s->r,160,4)));
L_1803f2961_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803f2961_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f2961_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803f2961_7:;
wr(s->u,16,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803f2961_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803f2961_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f2961_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f2961_11:;
/* 1803f2964: add rbx, 0x10 */
L_1803f2964_0:;
L_1803f2964_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803f2964_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x10)),8,0));
L_1803f2964_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803f2964_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2964_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803f2964_6:;
wr(s->u,16,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803f2964_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f2964_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f2964_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f2964_10:;
/* 1803f2968: movsd xmm5, qword ptr [rdi] */
L_1803f2968_0:;
L_1803f2968_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803f2968_2:;
wr(s->r,4928,8,rd(s->u,8,8));
L_1803f2968_3:;
wr(s->r,4936,8,((U)UINT64_C(0x0)));
L_1803f2968_4:;
/* 1803f296c: movsd xmm6, qword ptr [rdi + 8] */
L_1803f296c_0:;
L_1803f296c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803f296c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f296c_3:;
wr(s->r,4992,8,rd(s->u,8,8));
L_1803f296c_4:;
wr(s->r,5000,8,((U)UINT64_C(0x0)));
L_1803f296c_5:;
/* 1803f2971: movapd xmm3, xmm4 */
L_1803f2971_0:;
L_1803f2971_1:;
wr(s->r,4800,8,rd(s->r,4864,8));
L_1803f2971_2:;
wr(s->r,4808,8,rd(s->r,4872,8));
L_1803f2971_3:;
/* 1803f2975: mulsd xmm4, xmm0 */
L_1803f2975_0:;
L_1803f2975_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803f2975_2:;
/* 1803f2979: add rdi, 0x10 */
L_1803f2979_0:;
L_1803f2979_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803f2979_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x10)),8,0));
L_1803f2979_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803f2979_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2979_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803f2979_6:;
wr(s->u,16,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803f2979_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f2979_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f2979_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f2979_10:;
/* 1803f297d: mulsd xmm3, xmm7 */
L_1803f297d_0:;
L_1803f297d_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)*fv(rd(s->r,5056,8),8),8));
L_1803f297d_2:;
/* 1803f2981: movapd xmm1, xmm2 */
L_1803f2981_0:;
L_1803f2981_1:;
wr(s->r,4672,8,rd(s->r,4736,8));
L_1803f2981_2:;
wr(s->r,4680,8,rd(s->r,4744,8));
L_1803f2981_3:;
/* 1803f2985: mulsd xmm2, xmm7 */
L_1803f2985_0:;
L_1803f2985_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,5056,8),8),8));
L_1803f2985_2:;
/* 1803f2989: mulsd xmm1, xmm0 */
L_1803f2989_0:;
L_1803f2989_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,4608,8),8),8));
L_1803f2989_2:;
/* 1803f298d: addsd xmm4, xmm2 */
L_1803f298d_0:;
L_1803f298d_1:;
wr(s->r,4864,8,fb(fv(rd(s->r,4864,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803f298d_2:;
/* 1803f2991: subsd xmm3, xmm1 */
L_1803f2991_0:;
L_1803f2991_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)-fv(rd(s->r,4672,8),8),8));
L_1803f2991_2:;
/* 1803f2995: movapd xmm1, xmm4 */
L_1803f2995_0:;
L_1803f2995_1:;
wr(s->r,4672,8,rd(s->r,4864,8));
L_1803f2995_2:;
wr(s->r,4680,8,rd(s->r,4872,8));
L_1803f2995_3:;
/* 1803f2999: addsd xmm1, xmm6 */
L_1803f2999_0:;
L_1803f2999_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,4992,8),8),8));
L_1803f2999_2:;
/* 1803f299d: movapd xmm0, xmm3 */
L_1803f299d_0:;
L_1803f299d_1:;
wr(s->r,4608,8,rd(s->r,4800,8));
L_1803f299d_2:;
wr(s->r,4616,8,rd(s->r,4808,8));
L_1803f299d_3:;
/* 1803f29a1: subsd xmm6, xmm4 */
L_1803f29a1_0:;
L_1803f29a1_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)-fv(rd(s->r,4864,8),8),8));
L_1803f29a1_2:;
/* 1803f29a5: movsd qword ptr [rdi - 8], xmm1 */
L_1803f29a5_0:;
L_1803f29a5_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803f29a5_2:;
wr(s->u,8,8,rd(s->r,4672,8));
L_1803f29a5_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f29a5_4:;
/* 1803f29aa: addsd xmm0, xmm5 */
L_1803f29aa_0:;
L_1803f29aa_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4928,8),8),8));
L_1803f29aa_2:;
/* 1803f29ae: subsd xmm5, xmm3 */
L_1803f29ae_0:;
L_1803f29ae_1:;
wr(s->r,4928,8,fb(fv(rd(s->r,4928,8),8)-fv(rd(s->r,4800,8),8),8));
L_1803f29ae_2:;
/* 1803f29b2: movsd qword ptr [rdi - 0x10], xmm0 */
L_1803f29b2_0:;
L_1803f29b2_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803f29b2_2:;
wr(s->u,8,8,rd(s->r,4608,8));
L_1803f29b2_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f29b2_4:;
/* 1803f29b7: movsd qword ptr [rbx - 0x10], xmm5 */
L_1803f29b7_0:;
L_1803f29b7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803f29b7_2:;
wr(s->u,8,8,rd(s->r,4928,8));
L_1803f29b7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f29b7_4:;
/* 1803f29bc: movsd qword ptr [rbx - 8], xmm6 */
L_1803f29bc_0:;
L_1803f29bc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803f29bc_2:;
wr(s->u,8,8,rd(s->r,4992,8));
L_1803f29bc_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f29bc_4:;
/* 1803f29c1: cmp rdi, rbp */
L_1803f29c1_0:;
L_1803f29c1_1:;
wr(s->u,26,8,rd(s->r,40,8));
L_1803f29c1_2:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->u,26,8)));
L_1803f29c1_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->u,26,8),8,1));
L_1803f29c1_4:;
wr(s->u,34,8,(rd(s->r,56,8)-rd(s->u,26,8)));
L_1803f29c1_5:;
wr(s->r,519,1,(sx(rd(s->u,34,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f29c1_6:;
wr(s->r,518,1,(rd(s->u,34,8)==((U)UINT64_C(0x0))));
L_1803f29c1_7:;
wr(s->u,16,8,(rd(s->u,34,8)&((U)UINT64_C(0xff))));
L_1803f29c1_8:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803f29c1_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803f29c1_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803f29c1_11:;
/* 1803f29c4: jb 0x1803f2930 */
L_1803f29c4_0:;
L_1803f29c4_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803f2930);}
L_1803f29c4_2:;
return UINT64_C(0x1803f29ca);
}
uint64_t b_1803f29ca(CPU*s){
/* 1803f29ca: mov rdi, rbx */
L_1803f29ca_0:;
L_1803f29ca_1:;
wr(s->r,56,8,rd(s->r,24,8));
L_1803f29ca_2:;
/* 1803f29cd: add rbx, r14 */
L_1803f29cd_0:;
L_1803f29cd_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+rd(s->r,176,8))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803f29cd_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->r,176,8),8,0));
L_1803f29cd_3:;
wr(s->r,24,8,(rd(s->r,24,8)+rd(s->r,176,8)));
L_1803f29cd_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f29cd_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803f29cd_6:;
wr(s->u,0,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803f29cd_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f29cd_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f29cd_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f29cd_10:;
/* 1803f29d0: cmp rbx, r13 */
L_1803f29d0_0:;
L_1803f29d0_1:;
wr(s->u,10,8,rd(s->r,168,8));
L_1803f29d0_2:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->u,10,8)));
L_1803f29d0_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->u,10,8),8,1));
L_1803f29d0_4:;
wr(s->u,18,8,(rd(s->r,24,8)-rd(s->u,10,8)));
L_1803f29d0_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f29d0_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803f29d0_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803f29d0_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f29d0_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f29d0_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f29d0_11:;
/* 1803f29d3: jb 0x1803f2910 */
L_1803f29d3_0:;
L_1803f29d3_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803f2910);}
L_1803f29d3_2:;
return UINT64_C(0x1803f29d9);
}
uint64_t b_1803f29d9(CPU*s){
/* 1803f29d9: mov rcx, qword ptr [rsp + 0xa0] */
L_1803f29d9_0:;
L_1803f29d9_1:;
wr(s->u,0,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803f29d9_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f29d9_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803f29d9_4:;
/* 1803f29e1: mov eax, dword ptr [rsp + 0xa8] */
L_1803f29e1_0:;
L_1803f29e1_1:;
wr(s->u,0,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1803f29e1_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f29e1_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803f29e1_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f29e1_5:;
/* 1803f29e8: sar r12d, 1 */
L_1803f29e8_0:;
L_1803f29e8_1:;
wr(s->u,33,4,(rd(s->r,160,4)&((U)UINT64_C(0x1))));
L_1803f29e8_2:;
wr(s->r,512,1,(rd(s->u,33,4)!=((U)UINT64_C(0x0))));
L_1803f29e8_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f29e8_4:;
wr(s->r,160,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,160,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,160,4),4)>>((U)UINT64_C(0x1)))));
L_1803f29e8_5:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803f29e8_6:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f29e8_7:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803f29e8_8:;
wr(s->u,27,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803f29e8_9:;
wr(s->u,31,1,pop(rd(s->u,27,4),4));
L_1803f29e8_10:;
wr(s->u,32,1,(rd(s->u,31,1)&((U)UINT64_C(0x1))));
L_1803f29e8_11:;
wr(s->r,514,1,(rd(s->u,32,1)==((U)UINT64_C(0x0))));
L_1803f29e8_12:;
/* 1803f29eb: add eax, eax */
L_1803f29eb_0:;
L_1803f29eb_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803f29eb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,0));
L_1803f29eb_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,0,4)));
L_1803f29eb_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f29eb_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f29eb_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803f29eb_7:;
wr(s->u,27,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803f29eb_8:;
wr(s->u,31,1,pop(rd(s->u,27,4),4));
L_1803f29eb_9:;
wr(s->u,32,1,(rd(s->u,31,1)&((U)UINT64_C(0x1))));
L_1803f29eb_10:;
wr(s->r,514,1,(rd(s->u,32,1)==((U)UINT64_C(0x0))));
L_1803f29eb_11:;
/* 1803f29ed: mov dword ptr [rsp + 0xa8], eax */
L_1803f29ed_0:;
L_1803f29ed_1:;
wr(s->u,0,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1803f29ed_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803f29ed_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803f29ed_4:;
/* 1803f29f4: test r12d, r12d */
L_1803f29f4_0:;
L_1803f29f4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f29f4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f29f4_3:;
wr(s->u,37,4,(rd(s->r,160,4)&rd(s->r,160,4)));
L_1803f29f4_4:;
wr(s->r,519,1,(sx(rd(s->u,37,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f29f4_5:;
wr(s->r,518,1,(rd(s->u,37,4)==((U)UINT64_C(0x0))));
L_1803f29f4_6:;
wr(s->u,27,4,(rd(s->u,37,4)&((U)UINT64_C(0xff))));
L_1803f29f4_7:;
wr(s->u,31,1,pop(rd(s->u,27,4),4));
L_1803f29f4_8:;
wr(s->u,32,1,(rd(s->u,31,1)&((U)UINT64_C(0x1))));
L_1803f29f4_9:;
wr(s->r,514,1,(rd(s->u,32,1)==((U)UINT64_C(0x0))));
L_1803f29f4_10:;
/* 1803f29f7: jg 0x1803f28f0 */
L_1803f29f7_0:;
L_1803f29f7_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1803f29f7_2:;
wr(s->u,25,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803f29f7_3:;
wr(s->u,26,1,((rd(s->u,24,1)!=0)&&(rd(s->u,25,1)!=0)));
L_1803f29f7_4:;
if(rd(s->u,26,1)){return UINT64_C(0x1803f28f0);}
L_1803f29f7_5:;
return UINT64_C(0x1803f29fd);
}
uint64_t b_1803f29e1(CPU*s){
/* 1803f29e1: mov eax, dword ptr [rsp + 0xa8] */
L_1803f29e1_0:;
L_1803f29e1_1:;
wr(s->u,0,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1803f29e1_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803f29e1_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803f29e1_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f29e1_5:;
/* 1803f29e8: sar r12d, 1 */
L_1803f29e8_0:;
L_1803f29e8_1:;
wr(s->u,25,4,(rd(s->r,160,4)&((U)UINT64_C(0x1))));
L_1803f29e8_2:;
wr(s->r,512,1,(rd(s->u,25,4)!=((U)UINT64_C(0x0))));
L_1803f29e8_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f29e8_4:;
wr(s->r,160,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,160,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,160,4),4)>>((U)UINT64_C(0x1)))));
L_1803f29e8_5:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803f29e8_6:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f29e8_7:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803f29e8_8:;
wr(s->u,19,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803f29e8_9:;
wr(s->u,23,1,pop(rd(s->u,19,4),4));
L_1803f29e8_10:;
wr(s->u,24,1,(rd(s->u,23,1)&((U)UINT64_C(0x1))));
L_1803f29e8_11:;
wr(s->r,514,1,(rd(s->u,24,1)==((U)UINT64_C(0x0))));
L_1803f29e8_12:;
/* 1803f29eb: add eax, eax */
L_1803f29eb_0:;
L_1803f29eb_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803f29eb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,0));
L_1803f29eb_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,0,4)));
L_1803f29eb_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803f29eb_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f29eb_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803f29eb_7:;
wr(s->u,19,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803f29eb_8:;
wr(s->u,23,1,pop(rd(s->u,19,4),4));
L_1803f29eb_9:;
wr(s->u,24,1,(rd(s->u,23,1)&((U)UINT64_C(0x1))));
L_1803f29eb_10:;
wr(s->r,514,1,(rd(s->u,24,1)==((U)UINT64_C(0x0))));
L_1803f29eb_11:;
/* 1803f29ed: mov dword ptr [rsp + 0xa8], eax */
L_1803f29ed_0:;
L_1803f29ed_1:;
wr(s->u,0,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1803f29ed_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803f29ed_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803f29ed_4:;
/* 1803f29f4: test r12d, r12d */
L_1803f29f4_0:;
L_1803f29f4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803f29f4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803f29f4_3:;
wr(s->u,29,4,(rd(s->r,160,4)&rd(s->r,160,4)));
L_1803f29f4_4:;
wr(s->r,519,1,(sx(rd(s->u,29,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803f29f4_5:;
wr(s->r,518,1,(rd(s->u,29,4)==((U)UINT64_C(0x0))));
L_1803f29f4_6:;
wr(s->u,19,4,(rd(s->u,29,4)&((U)UINT64_C(0xff))));
L_1803f29f4_7:;
wr(s->u,23,1,pop(rd(s->u,19,4),4));
L_1803f29f4_8:;
wr(s->u,24,1,(rd(s->u,23,1)&((U)UINT64_C(0x1))));
L_1803f29f4_9:;
wr(s->r,514,1,(rd(s->u,24,1)==((U)UINT64_C(0x0))));
L_1803f29f4_10:;
/* 1803f29f7: jg 0x1803f28f0 */
L_1803f29f7_0:;
L_1803f29f7_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1803f29f7_2:;
wr(s->u,17,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803f29f7_3:;
wr(s->u,18,1,((rd(s->u,16,1)!=0)&&(rd(s->u,17,1)!=0)));
L_1803f29f7_4:;
if(rd(s->u,18,1)){return UINT64_C(0x1803f28f0);}
L_1803f29f7_5:;
return UINT64_C(0x1803f29fd);
}
uint64_t b_1803f29fd(CPU*s){
/* 1803f29fd: movaps xmm9, xmmword ptr [rsp + 0x20] */
L_1803f29fd_0:;
L_1803f29fd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f29fd_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f29fd_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f29fd_4:;
wr(s->r,5184,4,rd(s->u,58,4));
L_1803f29fd_5:;
wr(s->r,5188,4,rd(s->u,62,4));
L_1803f29fd_6:;
wr(s->r,5192,4,rd(s->u,66,4));
L_1803f29fd_7:;
wr(s->r,5196,4,rd(s->u,70,4));
L_1803f29fd_8:;
/* 1803f2a03: movaps xmm8, xmmword ptr [rsp + 0x30] */
L_1803f2a03_0:;
L_1803f2a03_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f2a03_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2a03_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2a03_4:;
wr(s->r,5120,4,rd(s->u,58,4));
L_1803f2a03_5:;
wr(s->r,5124,4,rd(s->u,62,4));
L_1803f2a03_6:;
wr(s->r,5128,4,rd(s->u,66,4));
L_1803f2a03_7:;
wr(s->r,5132,4,rd(s->u,70,4));
L_1803f2a03_8:;
/* 1803f2a09: movaps xmm7, xmmword ptr [rsp + 0x40] */
L_1803f2a09_0:;
L_1803f2a09_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803f2a09_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2a09_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2a09_4:;
wr(s->r,5056,4,rd(s->u,58,4));
L_1803f2a09_5:;
wr(s->r,5060,4,rd(s->u,62,4));
L_1803f2a09_6:;
wr(s->r,5064,4,rd(s->u,66,4));
L_1803f2a09_7:;
wr(s->r,5068,4,rd(s->u,70,4));
L_1803f2a09_8:;
/* 1803f2a0e: mov r14, qword ptr [rsp + 0x60] */
L_1803f2a0e_0:;
L_1803f2a0e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803f2a0e_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2a0e_3:;
wr(s->r,176,8,rd(s->u,32,8));
L_1803f2a0e_4:;
/* 1803f2a13: mov rdi, qword ptr [rsp + 0x68] */
L_1803f2a13_0:;
L_1803f2a13_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803f2a13_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2a13_3:;
wr(s->r,56,8,rd(s->u,32,8));
L_1803f2a13_4:;
/* 1803f2a18: mov rsi, qword ptr [rsp + 0x70] */
L_1803f2a18_0:;
L_1803f2a18_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803f2a18_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2a18_3:;
wr(s->r,48,8,rd(s->u,32,8));
L_1803f2a18_4:;
/* 1803f2a1d: mov rbp, qword ptr [rsp + 0x78] */
L_1803f2a1d_0:;
L_1803f2a1d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803f2a1d_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2a1d_3:;
wr(s->r,40,8,rd(s->u,32,8));
L_1803f2a1d_4:;
/* 1803f2a22: mov rbx, qword ptr [rsp + 0xb0] */
L_1803f2a22_0:;
L_1803f2a22_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803f2a22_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f2a22_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803f2a22_4:;
/* 1803f2a2a: movaps xmm6, xmmword ptr [rsp + 0x50] */
L_1803f2a2a_0:;
L_1803f2a2a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803f2a2a_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2a2a_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2a2a_4:;
wr(s->r,4992,4,rd(s->u,58,4));
L_1803f2a2a_5:;
wr(s->r,4996,4,rd(s->u,62,4));
L_1803f2a2a_6:;
wr(s->r,5000,4,rd(s->u,66,4));
L_1803f2a2a_7:;
wr(s->r,5004,4,rd(s->u,70,4));
L_1803f2a2a_8:;
/* 1803f2a2f: add rsp, 0x80 */
L_1803f2a2f_0:;
L_1803f2a2f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x80)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2a2f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x80)),8,0));
L_1803f2a2f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x80))));
L_1803f2a2f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2a2f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2a2f_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2a2f_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803f2a2f_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803f2a2f_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803f2a2f_10:;
/* 1803f2a36: pop r15 */
L_1803f2a36_0:;
L_1803f2a36_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803f2a36_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2a36_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2a36_4:;
wr(s->r,184,8,rd(s->u,50,8));
L_1803f2a36_5:;
/* 1803f2a38: pop r13 */
L_1803f2a38_0:;
L_1803f2a38_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803f2a38_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2a38_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2a38_4:;
wr(s->r,168,8,rd(s->u,50,8));
L_1803f2a38_5:;
/* 1803f2a3a: pop r12 */
L_1803f2a3a_0:;
L_1803f2a3a_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803f2a3a_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2a3a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2a3a_4:;
wr(s->r,160,8,rd(s->u,50,8));
L_1803f2a3a_5:;
/* 1803f2a3c: ret  */
L_1803f2a3c_0:;
L_1803f2a3c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2a3c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2a3c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f2a3c_4:;
return UINT64_C(0x1803f2a3d);
}
uint64_t b_1803f2a2f(CPU*s){
/* 1803f2a2f: add rsp, 0x80 */
L_1803f2a2f_0:;
L_1803f2a2f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x80)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2a2f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x80)),8,0));
L_1803f2a2f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x80))));
L_1803f2a2f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2a2f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2a2f_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2a2f_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803f2a2f_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803f2a2f_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803f2a2f_10:;
/* 1803f2a36: pop r15 */
L_1803f2a36_0:;
L_1803f2a36_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803f2a36_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2a36_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2a36_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803f2a36_5:;
/* 1803f2a38: pop r13 */
L_1803f2a38_0:;
L_1803f2a38_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803f2a38_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2a38_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2a38_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803f2a38_5:;
/* 1803f2a3a: pop r12 */
L_1803f2a3a_0:;
L_1803f2a3a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803f2a3a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2a3a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2a3a_4:;
wr(s->r,160,8,rd(s->u,10,8));
L_1803f2a3a_5:;
/* 1803f2a3c: ret  */
L_1803f2a3c_0:;
L_1803f2a3c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2a3c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2a3c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f2a3c_4:;
return UINT64_C(0x1803f2a3d);
}
uint64_t b_1803f2ae0(CPU*s){
/* 1803f2ae0: mov r11, rsp */
L_1803f2ae0_0:;
L_1803f2ae0_1:;
wr(s->r,152,8,rd(s->r,32,8));
L_1803f2ae0_2:;
/* 1803f2ae3: mov qword ptr [r11 + 8], rbx */
L_1803f2ae3_0:;
L_1803f2ae3_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x8))));
L_1803f2ae3_2:;
wr(s->u,40,8,rd(s->r,24,8));
L_1803f2ae3_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f2ae3_4:;
/* 1803f2ae7: push rdi */
L_1803f2ae7_0:;
L_1803f2ae7_1:;
wr(s->u,66,8,rd(s->r,56,8));
L_1803f2ae7_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2ae7_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,66,8));
L_1803f2ae7_4:;
/* 1803f2ae8: sub rsp, 0xb0 */
L_1803f2ae8_0:;
L_1803f2ae8_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0xb0))));
L_1803f2ae8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0xb0)),8,1));
L_1803f2ae8_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0xb0))));
L_1803f2ae8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2ae8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2ae8_6:;
wr(s->u,74,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2ae8_7:;
wr(s->u,82,1,pop(rd(s->u,74,8),8));
L_1803f2ae8_8:;
wr(s->u,83,1,(rd(s->u,82,1)&((U)UINT64_C(0x1))));
L_1803f2ae8_9:;
wr(s->r,514,1,(rd(s->u,83,1)==((U)UINT64_C(0x0))));
L_1803f2ae8_10:;
/* 1803f2aef: movsd xmm2, qword ptr [rcx] */
L_1803f2aef_0:;
L_1803f2aef_1:;
wr(s->u,40,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803f2aef_2:;
wr(s->r,4736,8,rd(s->u,40,8));
L_1803f2aef_3:;
wr(s->r,4744,8,((U)UINT64_C(0x0)));
L_1803f2aef_4:;
/* 1803f2af3: movsd xmm0, qword ptr [rcx + 8] */
L_1803f2af3_0:;
L_1803f2af3_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803f2af3_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2af3_3:;
wr(s->r,4608,8,rd(s->u,40,8));
L_1803f2af3_4:;
wr(s->r,4616,8,((U)UINT64_C(0x0)));
L_1803f2af3_5:;
/* 1803f2af8: movaps xmmword ptr [r11 - 0x68], xmm11 */
L_1803f2af8_0:;
L_1803f2af8_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffff98))));
L_1803f2af8_2:;
wr(s->u,48,16,rd(s->r,5312,16));
L_1803f2af8_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,48,16));
L_1803f2af8_4:;
/* 1803f2afd: movsxd rax, edx */
L_1803f2afd_0:;
L_1803f2afd_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803f2afd_2:;
/* 1803f2b00: lea rdi, [rcx + 0x10] */
L_1803f2b00_0:;
L_1803f2b00_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803f2b00_2:;
wr(s->r,56,8,rd(s->u,0,8));
L_1803f2b00_3:;
/* 1803f2b04: movaps xmmword ptr [rsp + 0x30], xmm13 */
L_1803f2b04_0:;
L_1803f2b04_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f2b04_2:;
wr(s->u,48,16,rd(s->r,5440,16));
L_1803f2b04_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,48,16));
L_1803f2b04_4:;
/* 1803f2b0a: add rax, rax */
L_1803f2b0a_0:;
L_1803f2b0a_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803f2b0a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,0,8),8,0));
L_1803f2b0a_3:;
wr(s->r,0,8,(rd(s->r,0,8)+rd(s->r,0,8)));
L_1803f2b0a_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2b0a_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803f2b0a_6:;
wr(s->u,74,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803f2b0a_7:;
wr(s->u,82,1,pop(rd(s->u,74,8),8));
L_1803f2b0a_8:;
wr(s->u,83,1,(rd(s->u,82,1)&((U)UINT64_C(0x1))));
L_1803f2b0a_9:;
wr(s->r,514,1,(rd(s->u,83,1)==((U)UINT64_C(0x0))));
L_1803f2b0a_10:;
/* 1803f2b0d: movsd xmm11, qword ptr [rip + 0x2607a2] */
L_1803f2b0d_0:;
L_1803f2b0d_1:;
wr(s->r,5312,8,mr(UINT64_C(0x1806532b8),8));
L_1803f2b0d_2:;
wr(s->r,5320,8,((U)UINT64_C(0x0)));
L_1803f2b0d_3:;
/* 1803f2b16: addsd xmm0, xmm2 */
L_1803f2b16_0:;
L_1803f2b16_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803f2b16_2:;
/* 1803f2b1a: subsd xmm2, qword ptr [rcx + 8] */
L_1803f2b1a_0:;
L_1803f2b1a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803f2b1a_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2b1a_3:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)-fv(rd(s->u,40,8),8),8));
L_1803f2b1a_4:;
/* 1803f2b1f: lea rbx, [rcx + rax*8 - 0x10] */
L_1803f2b1f_0:;
L_1803f2b1f_1:;
wr(s->u,16,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,8,8)));
L_1803f2b1f_2:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803f2b1f_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803f2b1f_4:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803f2b1f_5:;
/* 1803f2b24: movsd qword ptr [rcx], xmm0 */
L_1803f2b24_0:;
L_1803f2b24_1:;
wr(s->u,40,8,rd(s->r,4608,8));
L_1803f2b24_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,40,8));
L_1803f2b24_3:;
/* 1803f2b28: movsd qword ptr [rcx + 8], xmm2 */
L_1803f2b28_0:;
L_1803f2b28_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803f2b28_2:;
wr(s->u,40,8,rd(s->r,4736,8));
L_1803f2b28_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f2b28_4:;
/* 1803f2b2d: movd xmm0, edx */
L_1803f2b2d_0:;
L_1803f2b2d_1:;
wr(s->r,4608,16,rd(s->r,16,4));
L_1803f2b2d_2:;
/* 1803f2b31: cvtdq2pd xmm0, xmm0 */
L_1803f2b31_0:;
L_1803f2b31_1:;
wr(s->u,100,8,rd(s->r,4608,8));
L_1803f2b31_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,100,4),4),8));
L_1803f2b31_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,104,4),4),8));
L_1803f2b31_4:;
/* 1803f2b35: divsd xmm11, xmm0 */
L_1803f2b35_0:;
L_1803f2b35_1:;
wr(s->r,5312,8,fb(fv(rd(s->r,5312,8),8)/fv(rd(s->r,4608,8),8),8));
L_1803f2b35_2:;
/* 1803f2b3a: movapd xmm13, xmm11 */
L_1803f2b3a_0:;
L_1803f2b3a_1:;
wr(s->r,5440,8,rd(s->r,5312,8));
L_1803f2b3a_2:;
wr(s->r,5448,8,rd(s->r,5320,8));
L_1803f2b3a_3:;
/* 1803f2b3f: cmp rdi, rbx */
L_1803f2b3f_0:;
L_1803f2b3f_1:;
wr(s->u,84,8,rd(s->r,24,8));
L_1803f2b3f_2:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->u,84,8)));
L_1803f2b3f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->u,84,8),8,1));
L_1803f2b3f_4:;
wr(s->u,92,8,(rd(s->r,56,8)-rd(s->u,84,8)));
L_1803f2b3f_5:;
wr(s->r,519,1,(sx(rd(s->u,92,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2b3f_6:;
wr(s->r,518,1,(rd(s->u,92,8)==((U)UINT64_C(0x0))));
L_1803f2b3f_7:;
wr(s->u,74,8,(rd(s->u,92,8)&((U)UINT64_C(0xff))));
L_1803f2b3f_8:;
wr(s->u,82,1,pop(rd(s->u,74,8),8));
L_1803f2b3f_9:;
wr(s->u,83,1,(rd(s->u,82,1)&((U)UINT64_C(0x1))));
L_1803f2b3f_10:;
wr(s->r,514,1,(rd(s->u,83,1)==((U)UINT64_C(0x0))));
L_1803f2b3f_11:;
/* 1803f2b42: ja 0x1803f2c79 */
L_1803f2b42_0:;
L_1803f2b42_1:;
wr(s->u,64,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803f2b42_2:;
wr(s->u,65,1,(!rd(s->u,64,1)));
L_1803f2b42_3:;
if(rd(s->u,65,1)){return UINT64_C(0x1803f2c79);}
L_1803f2b42_4:;
return UINT64_C(0x1803f2b48);
}
uint64_t b_1803f2b48(CPU*s){
/* 1803f2b48: movaps xmmword ptr [r11 - 0x18], xmm6 */
L_1803f2b48_0:;
L_1803f2b48_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803f2b48_2:;
wr(s->u,24,16,rd(s->r,4992,16));
L_1803f2b48_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803f2b48_4:;
/* 1803f2b4d: movaps xmmword ptr [r11 - 0x28], xmm7 */
L_1803f2b4d_0:;
L_1803f2b4d_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803f2b4d_2:;
wr(s->u,24,16,rd(s->r,5056,16));
L_1803f2b4d_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803f2b4d_4:;
/* 1803f2b52: movaps xmmword ptr [r11 - 0x38], xmm8 */
L_1803f2b52_0:;
L_1803f2b52_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffc8))));
L_1803f2b52_2:;
wr(s->u,24,16,rd(s->r,5120,16));
L_1803f2b52_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803f2b52_4:;
/* 1803f2b57: movaps xmmword ptr [r11 - 0x48], xmm9 */
L_1803f2b57_0:;
L_1803f2b57_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffb8))));
L_1803f2b57_2:;
wr(s->u,24,16,rd(s->r,5184,16));
L_1803f2b57_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803f2b57_4:;
/* 1803f2b5c: movaps xmmword ptr [r11 - 0x58], xmm10 */
L_1803f2b5c_0:;
L_1803f2b5c_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffa8))));
L_1803f2b5c_2:;
wr(s->u,24,16,rd(s->r,5248,16));
L_1803f2b5c_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803f2b5c_4:;
/* 1803f2b61: movaps xmmword ptr [r11 - 0x78], xmm12 */
L_1803f2b61_0:;
L_1803f2b61_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffff88))));
L_1803f2b61_2:;
wr(s->u,24,16,rd(s->r,5376,16));
L_1803f2b61_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803f2b61_4:;
/* 1803f2b66: movsd xmm12, qword ptr [rip + 0x25d551] */
L_1803f2b66_0:;
L_1803f2b66_1:;
wr(s->r,5376,8,mr(UINT64_C(0x1806500c0),8));
L_1803f2b66_2:;
wr(s->r,5384,8,((U)UINT64_C(0x0)));
L_1803f2b66_3:;
/* 1803f2b6f: movaps xmmword ptr [rsp + 0x20], xmm14 */
L_1803f2b6f_0:;
L_1803f2b6f_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f2b6f_2:;
wr(s->u,24,16,rd(s->r,5504,16));
L_1803f2b6f_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,24,16));
L_1803f2b6f_4:;
/* 1803f2b75: movsd xmm14, qword ptr [rip + 0x41998a] */
L_1803f2b75_0:;
L_1803f2b75_1:;
wr(s->r,5504,8,mr(UINT64_C(0x18080c508),8));
L_1803f2b75_2:;
wr(s->r,5512,8,((U)UINT64_C(0x0)));
L_1803f2b75_3:;
/* 1803f2b7e: nop  */
L_1803f2b7e_0:;
L_1803f2b7e_1:;
/* 1803f2b80: movsd xmm8, qword ptr [rdi + 8] */
L_1803f2b80_0:;
L_1803f2b80_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803f2b80_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2b80_3:;
wr(s->r,5120,8,rd(s->u,16,8));
L_1803f2b80_4:;
wr(s->r,5128,8,((U)UINT64_C(0x0)));
L_1803f2b80_5:;
/* 1803f2b86: movsd xmm9, qword ptr [rbx] */
L_1803f2b86_0:;
L_1803f2b86_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803f2b86_2:;
wr(s->r,5184,8,rd(s->u,16,8));
L_1803f2b86_3:;
wr(s->r,5192,8,((U)UINT64_C(0x0)));
L_1803f2b86_4:;
/* 1803f2b8b: movsd xmm10, qword ptr [rdi] */
L_1803f2b8b_0:;
L_1803f2b8b_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803f2b8b_2:;
wr(s->r,5248,8,rd(s->u,16,8));
L_1803f2b8b_3:;
wr(s->r,5256,8,((U)UINT64_C(0x0)));
L_1803f2b8b_4:;
/* 1803f2b90: movapd xmm7, xmm8 */
L_1803f2b90_0:;
L_1803f2b90_1:;
wr(s->r,5056,8,rd(s->r,5120,8));
L_1803f2b90_2:;
wr(s->r,5064,8,rd(s->r,5128,8));
L_1803f2b90_3:;
/* 1803f2b95: subsd xmm8, qword ptr [rbx + 8] */
L_1803f2b95_0:;
L_1803f2b95_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803f2b95_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2b95_3:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)-fv(rd(s->u,16,8),8),8));
L_1803f2b95_4:;
/* 1803f2b9b: addsd xmm10, xmm9 */
L_1803f2b9b_0:;
L_1803f2b9b_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)+fv(rd(s->r,5184,8),8),8));
L_1803f2b9b_2:;
/* 1803f2ba0: mulsd xmm10, xmm12 */
L_1803f2ba0_0:;
L_1803f2ba0_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2ba0_2:;
/* 1803f2ba5: mulsd xmm8, xmm12 */
L_1803f2ba5_0:;
L_1803f2ba5_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2ba5_2:;
/* 1803f2baa: addsd xmm7, qword ptr [rbx + 8] */
L_1803f2baa_0:;
L_1803f2baa_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803f2baa_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2baa_3:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)+fv(rd(s->u,16,8),8),8));
L_1803f2baa_4:;
/* 1803f2baf: subsd xmm9, qword ptr [rdi] */
L_1803f2baf_0:;
L_1803f2baf_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803f2baf_2:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)-fv(rd(s->u,16,8),8),8));
L_1803f2baf_3:;
/* 1803f2bb4: movapd xmm0, xmm13 */
L_1803f2bb4_0:;
L_1803f2bb4_1:;
wr(s->r,4608,8,rd(s->r,5440,8));
L_1803f2bb4_2:;
wr(s->r,4616,8,rd(s->r,5448,8));
L_1803f2bb4_3:;
/* 1803f2bb9: mulsd xmm7, xmm12 */
L_1803f2bb9_0:;
L_1803f2bb9_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2bb9_2:;
/* 1803f2bbe: mulsd xmm9, xmm12 */
L_1803f2bbe_0:;
L_1803f2bbe_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2bbe_2:;
/* 1803f2bc3: call 0x180609aa2 */
L_1803f2bc3_0:;
L_1803f2bc3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2bc3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2bc8)));
L_1803f2bc3_3:;
return (uint64_t)UINT64_C(0x180609aa2);
L_1803f2bc3_4:;
return UINT64_C(0x1803f2bc8);
}
uint64_t b_1803f2b80(CPU*s){
/* 1803f2b80: movsd xmm8, qword ptr [rdi + 8] */
L_1803f2b80_0:;
L_1803f2b80_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803f2b80_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2b80_3:;
wr(s->r,5120,8,rd(s->u,8,8));
L_1803f2b80_4:;
wr(s->r,5128,8,((U)UINT64_C(0x0)));
L_1803f2b80_5:;
/* 1803f2b86: movsd xmm9, qword ptr [rbx] */
L_1803f2b86_0:;
L_1803f2b86_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803f2b86_2:;
wr(s->r,5184,8,rd(s->u,8,8));
L_1803f2b86_3:;
wr(s->r,5192,8,((U)UINT64_C(0x0)));
L_1803f2b86_4:;
/* 1803f2b8b: movsd xmm10, qword ptr [rdi] */
L_1803f2b8b_0:;
L_1803f2b8b_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803f2b8b_2:;
wr(s->r,5248,8,rd(s->u,8,8));
L_1803f2b8b_3:;
wr(s->r,5256,8,((U)UINT64_C(0x0)));
L_1803f2b8b_4:;
/* 1803f2b90: movapd xmm7, xmm8 */
L_1803f2b90_0:;
L_1803f2b90_1:;
wr(s->r,5056,8,rd(s->r,5120,8));
L_1803f2b90_2:;
wr(s->r,5064,8,rd(s->r,5128,8));
L_1803f2b90_3:;
/* 1803f2b95: subsd xmm8, qword ptr [rbx + 8] */
L_1803f2b95_0:;
L_1803f2b95_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803f2b95_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2b95_3:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)-fv(rd(s->u,8,8),8),8));
L_1803f2b95_4:;
/* 1803f2b9b: addsd xmm10, xmm9 */
L_1803f2b9b_0:;
L_1803f2b9b_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)+fv(rd(s->r,5184,8),8),8));
L_1803f2b9b_2:;
/* 1803f2ba0: mulsd xmm10, xmm12 */
L_1803f2ba0_0:;
L_1803f2ba0_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2ba0_2:;
/* 1803f2ba5: mulsd xmm8, xmm12 */
L_1803f2ba5_0:;
L_1803f2ba5_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2ba5_2:;
/* 1803f2baa: addsd xmm7, qword ptr [rbx + 8] */
L_1803f2baa_0:;
L_1803f2baa_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803f2baa_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2baa_3:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)+fv(rd(s->u,8,8),8),8));
L_1803f2baa_4:;
/* 1803f2baf: subsd xmm9, qword ptr [rdi] */
L_1803f2baf_0:;
L_1803f2baf_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803f2baf_2:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)-fv(rd(s->u,8,8),8),8));
L_1803f2baf_3:;
/* 1803f2bb4: movapd xmm0, xmm13 */
L_1803f2bb4_0:;
L_1803f2bb4_1:;
wr(s->r,4608,8,rd(s->r,5440,8));
L_1803f2bb4_2:;
wr(s->r,4616,8,rd(s->r,5448,8));
L_1803f2bb4_3:;
/* 1803f2bb9: mulsd xmm7, xmm12 */
L_1803f2bb9_0:;
L_1803f2bb9_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2bb9_2:;
/* 1803f2bbe: mulsd xmm9, xmm12 */
L_1803f2bbe_0:;
L_1803f2bbe_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2bbe_2:;
/* 1803f2bc3: call 0x180609aa2 */
L_1803f2bc3_0:;
L_1803f2bc3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2bc3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2bc8)));
L_1803f2bc3_3:;
return (uint64_t)UINT64_C(0x180609aa2);
L_1803f2bc3_4:;
return UINT64_C(0x1803f2bc8);
}
uint64_t b_1803f2bc8(CPU*s){
/* 1803f2bc8: movapd xmm6, xmm0 */
L_1803f2bc8_0:;
L_1803f2bc8_1:;
wr(s->r,4992,8,rd(s->r,4608,8));
L_1803f2bc8_2:;
wr(s->r,5000,8,rd(s->r,4616,8));
L_1803f2bc8_3:;
/* 1803f2bcc: movapd xmm0, xmm13 */
L_1803f2bcc_0:;
L_1803f2bcc_1:;
wr(s->r,4608,8,rd(s->r,5440,8));
L_1803f2bcc_2:;
wr(s->r,4616,8,rd(s->r,5448,8));
L_1803f2bcc_3:;
/* 1803f2bd1: call 0x1806099fa */
L_1803f2bd1_0:;
L_1803f2bd1_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2bd1_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2bd6)));
L_1803f2bd1_3:;
return (uint64_t)UINT64_C(0x1806099fa);
L_1803f2bd1_4:;
return UINT64_C(0x1803f2bd6);
}
uint64_t b_1803f2bd6(CPU*s){
/* 1803f2bd6: movapd xmm2, xmm6 */
L_1803f2bd6_0:;
L_1803f2bd6_1:;
wr(s->r,4736,8,rd(s->r,4992,8));
L_1803f2bd6_2:;
wr(s->r,4744,8,rd(s->r,5000,8));
L_1803f2bd6_3:;
/* 1803f2bda: movapd xmm3, xmm14 */
L_1803f2bda_0:;
L_1803f2bda_1:;
wr(s->r,4800,8,rd(s->r,5504,8));
L_1803f2bda_2:;
wr(s->r,4808,8,rd(s->r,5512,8));
L_1803f2bda_3:;
/* 1803f2bdf: sub rbx, 0x10 */
L_1803f2bdf_0:;
L_1803f2bdf_1:;
wr(s->r,512,1,(rd(s->r,24,8)<((U)UINT64_C(0x10))));
L_1803f2bdf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x10)),8,1));
L_1803f2bdf_3:;
wr(s->r,24,8,(rd(s->r,24,8)-((U)UINT64_C(0x10))));
L_1803f2bdf_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2bdf_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803f2bdf_6:;
wr(s->u,17,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803f2bdf_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803f2bdf_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f2bdf_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f2bdf_10:;
/* 1803f2be3: add rdi, 0x10 */
L_1803f2be3_0:;
L_1803f2be3_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803f2be3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x10)),8,0));
L_1803f2be3_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803f2be3_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2be3_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803f2be3_6:;
wr(s->u,17,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803f2be3_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803f2be3_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f2be3_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f2be3_10:;
/* 1803f2be7: mulsd xmm6, xmm9 */
L_1803f2be7_0:;
L_1803f2be7_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)*fv(rd(s->r,5184,8),8),8));
L_1803f2be7_2:;
/* 1803f2bec: mulsd xmm2, xmm7 */
L_1803f2bec_0:;
L_1803f2bec_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,5056,8),8),8));
L_1803f2bec_2:;
/* 1803f2bf0: subsd xmm3, xmm0 */
L_1803f2bf0_0:;
L_1803f2bf0_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803f2bf0_2:;
/* 1803f2bf4: addsd xmm13, xmm11 */
L_1803f2bf4_0:;
L_1803f2bf4_1:;
wr(s->r,5440,8,fb(fv(rd(s->r,5440,8),8)+fv(rd(s->r,5312,8),8),8));
L_1803f2bf4_2:;
/* 1803f2bf9: movapd xmm1, xmm3 */
L_1803f2bf9_0:;
L_1803f2bf9_1:;
wr(s->r,4672,8,rd(s->r,4800,8));
L_1803f2bf9_2:;
wr(s->r,4680,8,rd(s->r,4808,8));
L_1803f2bf9_3:;
/* 1803f2bfd: mulsd xmm3, xmm7 */
L_1803f2bfd_0:;
L_1803f2bfd_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)*fv(rd(s->r,5056,8),8),8));
L_1803f2bfd_2:;
/* 1803f2c01: mulsd xmm1, xmm9 */
L_1803f2c01_0:;
L_1803f2c01_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,5184,8),8),8));
L_1803f2c01_2:;
/* 1803f2c06: addsd xmm3, xmm6 */
L_1803f2c06_0:;
L_1803f2c06_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4992,8),8),8));
L_1803f2c06_2:;
/* 1803f2c0a: subsd xmm2, xmm1 */
L_1803f2c0a_0:;
L_1803f2c0a_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)-fv(rd(s->r,4672,8),8),8));
L_1803f2c0a_2:;
/* 1803f2c0e: movapd xmm1, xmm3 */
L_1803f2c0e_0:;
L_1803f2c0e_1:;
wr(s->r,4672,8,rd(s->r,4800,8));
L_1803f2c0e_2:;
wr(s->r,4680,8,rd(s->r,4808,8));
L_1803f2c0e_3:;
/* 1803f2c12: subsd xmm3, xmm8 */
L_1803f2c12_0:;
L_1803f2c12_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)-fv(rd(s->r,5120,8),8),8));
L_1803f2c12_2:;
/* 1803f2c17: movapd xmm0, xmm2 */
L_1803f2c17_0:;
L_1803f2c17_1:;
wr(s->r,4608,8,rd(s->r,4736,8));
L_1803f2c17_2:;
wr(s->r,4616,8,rd(s->r,4744,8));
L_1803f2c17_3:;
/* 1803f2c1b: addsd xmm1, xmm8 */
L_1803f2c1b_0:;
L_1803f2c1b_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,5120,8),8),8));
L_1803f2c1b_2:;
/* 1803f2c20: movsd qword ptr [rdi - 8], xmm1 */
L_1803f2c20_0:;
L_1803f2c20_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803f2c20_2:;
wr(s->u,8,8,rd(s->r,4672,8));
L_1803f2c20_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f2c20_4:;
/* 1803f2c25: addsd xmm0, xmm10 */
L_1803f2c25_0:;
L_1803f2c25_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,5248,8),8),8));
L_1803f2c25_2:;
/* 1803f2c2a: subsd xmm10, xmm2 */
L_1803f2c2a_0:;
L_1803f2c2a_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)-fv(rd(s->r,4736,8),8),8));
L_1803f2c2a_2:;
/* 1803f2c2f: movsd qword ptr [rdi - 0x10], xmm0 */
L_1803f2c2f_0:;
L_1803f2c2f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803f2c2f_2:;
wr(s->u,8,8,rd(s->r,4608,8));
L_1803f2c2f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f2c2f_4:;
/* 1803f2c34: movsd qword ptr [rbx + 0x10], xmm10 */
L_1803f2c34_0:;
L_1803f2c34_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803f2c34_2:;
wr(s->u,8,8,rd(s->r,5248,8));
L_1803f2c34_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f2c34_4:;
/* 1803f2c3a: movsd qword ptr [rbx + 0x18], xmm3 */
L_1803f2c3a_0:;
L_1803f2c3a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803f2c3a_2:;
wr(s->u,8,8,rd(s->r,4800,8));
L_1803f2c3a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f2c3a_4:;
/* 1803f2c3f: cmp rdi, rbx */
L_1803f2c3f_0:;
L_1803f2c3f_1:;
wr(s->u,27,8,rd(s->r,24,8));
L_1803f2c3f_2:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->u,27,8)));
L_1803f2c3f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->u,27,8),8,1));
L_1803f2c3f_4:;
wr(s->u,35,8,(rd(s->r,56,8)-rd(s->u,27,8)));
L_1803f2c3f_5:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2c3f_6:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803f2c3f_7:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803f2c3f_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803f2c3f_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f2c3f_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f2c3f_11:;
/* 1803f2c42: jbe 0x1803f2b80 */
L_1803f2c42_0:;
L_1803f2c42_1:;
wr(s->u,16,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803f2c42_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803f2b80);}
L_1803f2c42_3:;
return UINT64_C(0x1803f2c48);
}
uint64_t b_1803f2c48(CPU*s){
/* 1803f2c48: movaps xmm14, xmmword ptr [rsp + 0x20] */
L_1803f2c48_0:;
L_1803f2c48_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f2c48_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2c48_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2c48_4:;
wr(s->r,5504,4,rd(s->u,58,4));
L_1803f2c48_5:;
wr(s->r,5508,4,rd(s->u,62,4));
L_1803f2c48_6:;
wr(s->r,5512,4,rd(s->u,66,4));
L_1803f2c48_7:;
wr(s->r,5516,4,rd(s->u,70,4));
L_1803f2c48_8:;
/* 1803f2c4e: movaps xmm12, xmmword ptr [rsp + 0x40] */
L_1803f2c4e_0:;
L_1803f2c4e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803f2c4e_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2c4e_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2c4e_4:;
wr(s->r,5376,4,rd(s->u,58,4));
L_1803f2c4e_5:;
wr(s->r,5380,4,rd(s->u,62,4));
L_1803f2c4e_6:;
wr(s->r,5384,4,rd(s->u,66,4));
L_1803f2c4e_7:;
wr(s->r,5388,4,rd(s->u,70,4));
L_1803f2c4e_8:;
/* 1803f2c54: movaps xmm10, xmmword ptr [rsp + 0x60] */
L_1803f2c54_0:;
L_1803f2c54_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803f2c54_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2c54_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2c54_4:;
wr(s->r,5248,4,rd(s->u,58,4));
L_1803f2c54_5:;
wr(s->r,5252,4,rd(s->u,62,4));
L_1803f2c54_6:;
wr(s->r,5256,4,rd(s->u,66,4));
L_1803f2c54_7:;
wr(s->r,5260,4,rd(s->u,70,4));
L_1803f2c54_8:;
/* 1803f2c5a: movaps xmm9, xmmword ptr [rsp + 0x70] */
L_1803f2c5a_0:;
L_1803f2c5a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803f2c5a_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2c5a_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2c5a_4:;
wr(s->r,5184,4,rd(s->u,58,4));
L_1803f2c5a_5:;
wr(s->r,5188,4,rd(s->u,62,4));
L_1803f2c5a_6:;
wr(s->r,5192,4,rd(s->u,66,4));
L_1803f2c5a_7:;
wr(s->r,5196,4,rd(s->u,70,4));
L_1803f2c5a_8:;
/* 1803f2c60: movaps xmm8, xmmword ptr [rsp + 0x80] */
L_1803f2c60_0:;
L_1803f2c60_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803f2c60_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803f2c60_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2c60_4:;
wr(s->r,5120,4,rd(s->u,58,4));
L_1803f2c60_5:;
wr(s->r,5124,4,rd(s->u,62,4));
L_1803f2c60_6:;
wr(s->r,5128,4,rd(s->u,66,4));
L_1803f2c60_7:;
wr(s->r,5132,4,rd(s->u,70,4));
L_1803f2c60_8:;
/* 1803f2c69: movaps xmm7, xmmword ptr [rsp + 0x90] */
L_1803f2c69_0:;
L_1803f2c69_1:;
wr(s->u,8,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803f2c69_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803f2c69_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2c69_4:;
wr(s->r,5056,4,rd(s->u,58,4));
L_1803f2c69_5:;
wr(s->r,5060,4,rd(s->u,62,4));
L_1803f2c69_6:;
wr(s->r,5064,4,rd(s->u,66,4));
L_1803f2c69_7:;
wr(s->r,5068,4,rd(s->u,70,4));
L_1803f2c69_8:;
/* 1803f2c71: movaps xmm6, xmmword ptr [rsp + 0xa0] */
L_1803f2c71_0:;
L_1803f2c71_1:;
wr(s->u,8,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803f2c71_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803f2c71_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2c71_4:;
wr(s->r,4992,4,rd(s->u,58,4));
L_1803f2c71_5:;
wr(s->r,4996,4,rd(s->u,62,4));
L_1803f2c71_6:;
wr(s->r,5000,4,rd(s->u,66,4));
L_1803f2c71_7:;
wr(s->r,5004,4,rd(s->u,70,4));
L_1803f2c71_8:;
/* 1803f2c79: mov rbx, qword ptr [rsp + 0xc0] */
L_1803f2c79_0:;
L_1803f2c79_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803f2c79_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f2c79_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803f2c79_4:;
/* 1803f2c81: movaps xmm11, xmmword ptr [rsp + 0x50] */
L_1803f2c81_0:;
L_1803f2c81_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803f2c81_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2c81_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2c81_4:;
wr(s->r,5312,4,rd(s->u,58,4));
L_1803f2c81_5:;
wr(s->r,5316,4,rd(s->u,62,4));
L_1803f2c81_6:;
wr(s->r,5320,4,rd(s->u,66,4));
L_1803f2c81_7:;
wr(s->r,5324,4,rd(s->u,70,4));
L_1803f2c81_8:;
/* 1803f2c87: movaps xmm13, xmmword ptr [rsp + 0x30] */
L_1803f2c87_0:;
L_1803f2c87_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f2c87_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2c87_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2c87_4:;
wr(s->r,5440,4,rd(s->u,58,4));
L_1803f2c87_5:;
wr(s->r,5444,4,rd(s->u,62,4));
L_1803f2c87_6:;
wr(s->r,5448,4,rd(s->u,66,4));
L_1803f2c87_7:;
wr(s->r,5452,4,rd(s->u,70,4));
L_1803f2c87_8:;
/* 1803f2c8d: add rsp, 0xb0 */
L_1803f2c8d_0:;
L_1803f2c8d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0xb0)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2c8d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0xb0)),8,0));
L_1803f2c8d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0xb0))));
L_1803f2c8d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2c8d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2c8d_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2c8d_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803f2c8d_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803f2c8d_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803f2c8d_10:;
/* 1803f2c94: pop rdi */
L_1803f2c94_0:;
L_1803f2c94_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803f2c94_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2c94_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2c94_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803f2c94_5:;
/* 1803f2c95: ret  */
L_1803f2c95_0:;
L_1803f2c95_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2c95_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2c95_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f2c95_4:;
return UINT64_C(0x1803f2c96);
}
uint64_t b_1803f2c79(CPU*s){
/* 1803f2c79: mov rbx, qword ptr [rsp + 0xc0] */
L_1803f2c79_0:;
L_1803f2c79_1:;
wr(s->u,8,8,(((U)UINT64_C(0xc0))+rd(s->r,32,8)));
L_1803f2c79_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f2c79_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803f2c79_4:;
/* 1803f2c81: movaps xmm11, xmmword ptr [rsp + 0x50] */
L_1803f2c81_0:;
L_1803f2c81_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803f2c81_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2c81_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2c81_4:;
wr(s->r,5312,4,rd(s->u,58,4));
L_1803f2c81_5:;
wr(s->r,5316,4,rd(s->u,62,4));
L_1803f2c81_6:;
wr(s->r,5320,4,rd(s->u,66,4));
L_1803f2c81_7:;
wr(s->r,5324,4,rd(s->u,70,4));
L_1803f2c81_8:;
/* 1803f2c87: movaps xmm13, xmmword ptr [rsp + 0x30] */
L_1803f2c87_0:;
L_1803f2c87_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f2c87_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2c87_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2c87_4:;
wr(s->r,5440,4,rd(s->u,58,4));
L_1803f2c87_5:;
wr(s->r,5444,4,rd(s->u,62,4));
L_1803f2c87_6:;
wr(s->r,5448,4,rd(s->u,66,4));
L_1803f2c87_7:;
wr(s->r,5452,4,rd(s->u,70,4));
L_1803f2c87_8:;
/* 1803f2c8d: add rsp, 0xb0 */
L_1803f2c8d_0:;
L_1803f2c8d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0xb0)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2c8d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0xb0)),8,0));
L_1803f2c8d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0xb0))));
L_1803f2c8d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2c8d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2c8d_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2c8d_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803f2c8d_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803f2c8d_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803f2c8d_10:;
/* 1803f2c94: pop rdi */
L_1803f2c94_0:;
L_1803f2c94_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803f2c94_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2c94_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2c94_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803f2c94_5:;
/* 1803f2c95: ret  */
L_1803f2c95_0:;
L_1803f2c95_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2c95_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2c95_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f2c95_4:;
return UINT64_C(0x1803f2c96);
}
uint64_t b_1803f2ca0(CPU*s){
/* 1803f2ca0: mov r11, rsp */
L_1803f2ca0_0:;
L_1803f2ca0_1:;
wr(s->r,152,8,rd(s->r,32,8));
L_1803f2ca0_2:;
/* 1803f2ca3: mov qword ptr [r11 + 8], rbx */
L_1803f2ca3_0:;
L_1803f2ca3_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x8))));
L_1803f2ca3_2:;
wr(s->u,40,8,rd(s->r,24,8));
L_1803f2ca3_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f2ca3_4:;
/* 1803f2ca7: push rdi */
L_1803f2ca7_0:;
L_1803f2ca7_1:;
wr(s->u,66,8,rd(s->r,56,8));
L_1803f2ca7_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2ca7_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,66,8));
L_1803f2ca7_4:;
/* 1803f2ca8: sub rsp, 0xc0 */
L_1803f2ca8_0:;
L_1803f2ca8_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0xc0))));
L_1803f2ca8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0xc0)),8,1));
L_1803f2ca8_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0xc0))));
L_1803f2ca8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2ca8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2ca8_6:;
wr(s->u,74,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2ca8_7:;
wr(s->u,82,1,pop(rd(s->u,74,8),8));
L_1803f2ca8_8:;
wr(s->u,83,1,(rd(s->u,82,1)&((U)UINT64_C(0x1))));
L_1803f2ca8_9:;
wr(s->r,514,1,(rd(s->u,83,1)==((U)UINT64_C(0x0))));
L_1803f2ca8_10:;
/* 1803f2caf: movsd xmm1, qword ptr [rcx + 8] */
L_1803f2caf_0:;
L_1803f2caf_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803f2caf_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2caf_3:;
wr(s->r,4672,8,rd(s->u,40,8));
L_1803f2caf_4:;
wr(s->r,4680,8,((U)UINT64_C(0x0)));
L_1803f2caf_5:;
/* 1803f2cb4: movsd xmm2, qword ptr [rcx] */
L_1803f2cb4_0:;
L_1803f2cb4_1:;
wr(s->u,40,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803f2cb4_2:;
wr(s->r,4736,8,rd(s->u,40,8));
L_1803f2cb4_3:;
wr(s->r,4744,8,((U)UINT64_C(0x0)));
L_1803f2cb4_4:;
/* 1803f2cb8: movaps xmmword ptr [r11 - 0x68], xmm11 */
L_1803f2cb8_0:;
L_1803f2cb8_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffff98))));
L_1803f2cb8_2:;
wr(s->u,48,16,rd(s->r,5312,16));
L_1803f2cb8_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,48,16));
L_1803f2cb8_4:;
/* 1803f2cbd: movaps xmmword ptr [r11 - 0x78], xmm12 */
L_1803f2cbd_0:;
L_1803f2cbd_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffff88))));
L_1803f2cbd_2:;
wr(s->u,48,16,rd(s->r,5376,16));
L_1803f2cbd_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,48,16));
L_1803f2cbd_4:;
/* 1803f2cc2: movsxd rax, edx */
L_1803f2cc2_0:;
L_1803f2cc2_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803f2cc2_2:;
/* 1803f2cc5: lea rdi, [rcx + 0x10] */
L_1803f2cc5_0:;
L_1803f2cc5_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803f2cc5_2:;
wr(s->r,56,8,rd(s->u,0,8));
L_1803f2cc5_3:;
/* 1803f2cc9: add rax, rax */
L_1803f2cc9_0:;
L_1803f2cc9_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803f2cc9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,0,8),8,0));
L_1803f2cc9_3:;
wr(s->r,0,8,(rd(s->r,0,8)+rd(s->r,0,8)));
L_1803f2cc9_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2cc9_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803f2cc9_6:;
wr(s->u,74,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803f2cc9_7:;
wr(s->u,82,1,pop(rd(s->u,74,8),8));
L_1803f2cc9_8:;
wr(s->u,83,1,(rd(s->u,82,1)&((U)UINT64_C(0x1))));
L_1803f2cc9_9:;
wr(s->r,514,1,(rd(s->u,83,1)==((U)UINT64_C(0x0))));
L_1803f2cc9_10:;
/* 1803f2ccc: movsd xmm12, qword ptr [rip + 0x25d3eb] */
L_1803f2ccc_0:;
L_1803f2ccc_1:;
wr(s->r,5376,8,mr(UINT64_C(0x1806500c0),8));
L_1803f2ccc_2:;
wr(s->r,5384,8,((U)UINT64_C(0x0)));
L_1803f2ccc_3:;
/* 1803f2cd5: movsd xmm11, qword ptr [rip + 0x2605da] */
L_1803f2cd5_0:;
L_1803f2cd5_1:;
wr(s->r,5312,8,mr(UINT64_C(0x1806532b8),8));
L_1803f2cd5_2:;
wr(s->r,5320,8,((U)UINT64_C(0x0)));
L_1803f2cd5_3:;
/* 1803f2cde: movaps xmmword ptr [rsp + 0x20], xmm15 */
L_1803f2cde_0:;
L_1803f2cde_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f2cde_2:;
wr(s->u,48,16,rd(s->r,5568,16));
L_1803f2cde_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,48,16));
L_1803f2cde_4:;
/* 1803f2ce4: lea rbx, [rcx + rax*8 - 0x10] */
L_1803f2ce4_0:;
L_1803f2ce4_1:;
wr(s->u,16,8,(((U)UINT64_C(0xfffffffffffffff0))+rd(s->r,8,8)));
L_1803f2ce4_2:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x8))));
L_1803f2ce4_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803f2ce4_4:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803f2ce4_5:;
/* 1803f2ce9: mulsd xmm1, xmm12 */
L_1803f2ce9_0:;
L_1803f2ce9_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2ce9_2:;
/* 1803f2cee: mulsd xmm2, xmm12 */
L_1803f2cee_0:;
L_1803f2cee_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2cee_2:;
/* 1803f2cf3: movapd xmm0, xmm1 */
L_1803f2cf3_0:;
L_1803f2cf3_1:;
wr(s->r,4608,8,rd(s->r,4672,8));
L_1803f2cf3_2:;
wr(s->r,4616,8,rd(s->r,4680,8));
L_1803f2cf3_3:;
/* 1803f2cf7: addsd xmm0, xmm2 */
L_1803f2cf7_0:;
L_1803f2cf7_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,4736,8),8),8));
L_1803f2cf7_2:;
/* 1803f2cfb: subsd xmm2, xmm1 */
L_1803f2cfb_0:;
L_1803f2cfb_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)-fv(rd(s->r,4672,8),8),8));
L_1803f2cfb_2:;
/* 1803f2cff: movsd qword ptr [rcx], xmm0 */
L_1803f2cff_0:;
L_1803f2cff_1:;
wr(s->u,40,8,rd(s->r,4608,8));
L_1803f2cff_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,40,8));
L_1803f2cff_3:;
/* 1803f2d03: movsd qword ptr [rcx + 8], xmm2 */
L_1803f2d03_0:;
L_1803f2d03_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803f2d03_2:;
wr(s->u,40,8,rd(s->r,4736,8));
L_1803f2d03_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803f2d03_4:;
/* 1803f2d08: movd xmm0, edx */
L_1803f2d08_0:;
L_1803f2d08_1:;
wr(s->r,4608,16,rd(s->r,16,4));
L_1803f2d08_2:;
/* 1803f2d0c: cvtdq2pd xmm0, xmm0 */
L_1803f2d0c_0:;
L_1803f2d0c_1:;
wr(s->u,100,8,rd(s->r,4608,8));
L_1803f2d0c_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,100,4),4),8));
L_1803f2d0c_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,104,4),4),8));
L_1803f2d0c_4:;
/* 1803f2d10: divsd xmm11, xmm0 */
L_1803f2d10_0:;
L_1803f2d10_1:;
wr(s->r,5312,8,fb(fv(rd(s->r,5312,8),8)/fv(rd(s->r,4608,8),8),8));
L_1803f2d10_2:;
/* 1803f2d15: movapd xmm15, xmm11 */
L_1803f2d15_0:;
L_1803f2d15_1:;
wr(s->r,5568,8,rd(s->r,5312,8));
L_1803f2d15_2:;
wr(s->r,5576,8,rd(s->r,5320,8));
L_1803f2d15_3:;
/* 1803f2d1a: cmp rdi, rbx */
L_1803f2d1a_0:;
L_1803f2d1a_1:;
wr(s->u,84,8,rd(s->r,24,8));
L_1803f2d1a_2:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->u,84,8)));
L_1803f2d1a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->u,84,8),8,1));
L_1803f2d1a_4:;
wr(s->u,92,8,(rd(s->r,56,8)-rd(s->u,84,8)));
L_1803f2d1a_5:;
wr(s->r,519,1,(sx(rd(s->u,92,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2d1a_6:;
wr(s->r,518,1,(rd(s->u,92,8)==((U)UINT64_C(0x0))));
L_1803f2d1a_7:;
wr(s->u,74,8,(rd(s->u,92,8)&((U)UINT64_C(0xff))));
L_1803f2d1a_8:;
wr(s->u,82,1,pop(rd(s->u,74,8),8));
L_1803f2d1a_9:;
wr(s->u,83,1,(rd(s->u,82,1)&((U)UINT64_C(0x1))));
L_1803f2d1a_10:;
wr(s->r,514,1,(rd(s->u,83,1)==((U)UINT64_C(0x0))));
L_1803f2d1a_11:;
/* 1803f2d1d: ja 0x1803f2e5c */
L_1803f2d1d_0:;
L_1803f2d1d_1:;
wr(s->u,64,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803f2d1d_2:;
wr(s->u,65,1,(!rd(s->u,64,1)));
L_1803f2d1d_3:;
if(rd(s->u,65,1)){return UINT64_C(0x1803f2e5c);}
L_1803f2d1d_4:;
return UINT64_C(0x1803f2d23);
}
uint64_t b_1803f2d23(CPU*s){
/* 1803f2d23: movaps xmmword ptr [r11 - 0x18], xmm6 */
L_1803f2d23_0:;
L_1803f2d23_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffe8))));
L_1803f2d23_2:;
wr(s->u,40,16,rd(s->r,4992,16));
L_1803f2d23_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,40,16));
L_1803f2d23_4:;
/* 1803f2d28: movaps xmmword ptr [r11 - 0x28], xmm7 */
L_1803f2d28_0:;
L_1803f2d28_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffd8))));
L_1803f2d28_2:;
wr(s->u,40,16,rd(s->r,5056,16));
L_1803f2d28_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,40,16));
L_1803f2d28_4:;
/* 1803f2d2d: movaps xmmword ptr [r11 - 0x38], xmm8 */
L_1803f2d2d_0:;
L_1803f2d2d_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffc8))));
L_1803f2d2d_2:;
wr(s->u,40,16,rd(s->r,5120,16));
L_1803f2d2d_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,40,16));
L_1803f2d2d_4:;
/* 1803f2d32: movaps xmmword ptr [r11 - 0x48], xmm9 */
L_1803f2d32_0:;
L_1803f2d32_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffb8))));
L_1803f2d32_2:;
wr(s->u,40,16,rd(s->r,5184,16));
L_1803f2d32_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,40,16));
L_1803f2d32_4:;
/* 1803f2d37: movaps xmmword ptr [r11 - 0x58], xmm10 */
L_1803f2d37_0:;
L_1803f2d37_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffffa8))));
L_1803f2d37_2:;
wr(s->u,40,16,rd(s->r,5248,16));
L_1803f2d37_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,40,16));
L_1803f2d37_4:;
/* 1803f2d3c: movaps xmmword ptr [rsp + 0x40], xmm13 */
L_1803f2d3c_0:;
L_1803f2d3c_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803f2d3c_2:;
wr(s->u,40,16,rd(s->r,5440,16));
L_1803f2d3c_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,40,16));
L_1803f2d3c_4:;
/* 1803f2d42: movsd xmm13, qword ptr [rip + 0x2606ad] */
L_1803f2d42_0:;
L_1803f2d42_1:;
wr(s->r,5440,8,mr(UINT64_C(0x1806533f8),8));
L_1803f2d42_2:;
wr(s->r,5448,8,((U)UINT64_C(0x0)));
L_1803f2d42_3:;
/* 1803f2d4b: movaps xmmword ptr [rsp + 0x30], xmm14 */
L_1803f2d4b_0:;
L_1803f2d4b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f2d4b_2:;
wr(s->u,40,16,rd(s->r,5504,16));
L_1803f2d4b_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,40,16));
L_1803f2d4b_4:;
/* 1803f2d51: movsd xmm14, qword ptr [rip + 0x4197ae] */
L_1803f2d51_0:;
L_1803f2d51_1:;
wr(s->r,5504,8,mr(UINT64_C(0x18080c508),8));
L_1803f2d51_2:;
wr(s->r,5512,8,((U)UINT64_C(0x0)));
L_1803f2d51_3:;
/* 1803f2d5a: nop word ptr [rax + rax] */
L_1803f2d5a_0:;
L_1803f2d5a_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803f2d5a_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803f2d5a_3:;
/* 1803f2d60: movsd xmm8, qword ptr [rdi + 8] */
L_1803f2d60_0:;
L_1803f2d60_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803f2d60_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2d60_3:;
wr(s->r,5120,8,rd(s->u,32,8));
L_1803f2d60_4:;
wr(s->r,5128,8,((U)UINT64_C(0x0)));
L_1803f2d60_5:;
/* 1803f2d66: movsd xmm9, qword ptr [rbx] */
L_1803f2d66_0:;
L_1803f2d66_1:;
wr(s->u,32,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803f2d66_2:;
wr(s->r,5184,8,rd(s->u,32,8));
L_1803f2d66_3:;
wr(s->r,5192,8,((U)UINT64_C(0x0)));
L_1803f2d66_4:;
/* 1803f2d6b: movsd xmm10, qword ptr [rdi] */
L_1803f2d6b_0:;
L_1803f2d6b_1:;
wr(s->u,32,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803f2d6b_2:;
wr(s->r,5248,8,rd(s->u,32,8));
L_1803f2d6b_3:;
wr(s->r,5256,8,((U)UINT64_C(0x0)));
L_1803f2d6b_4:;
/* 1803f2d70: movapd xmm7, xmm8 */
L_1803f2d70_0:;
L_1803f2d70_1:;
wr(s->r,5056,8,rd(s->r,5120,8));
L_1803f2d70_2:;
wr(s->r,5064,8,rd(s->r,5128,8));
L_1803f2d70_3:;
/* 1803f2d75: subsd xmm8, qword ptr [rbx + 8] */
L_1803f2d75_0:;
L_1803f2d75_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803f2d75_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2d75_3:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)-fv(rd(s->u,32,8),8),8));
L_1803f2d75_4:;
/* 1803f2d7b: addsd xmm10, xmm9 */
L_1803f2d7b_0:;
L_1803f2d7b_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)+fv(rd(s->r,5184,8),8),8));
L_1803f2d7b_2:;
/* 1803f2d80: mulsd xmm10, xmm12 */
L_1803f2d80_0:;
L_1803f2d80_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2d80_2:;
/* 1803f2d85: mulsd xmm8, xmm12 */
L_1803f2d85_0:;
L_1803f2d85_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2d85_2:;
/* 1803f2d8a: addsd xmm7, qword ptr [rbx + 8] */
L_1803f2d8a_0:;
L_1803f2d8a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803f2d8a_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2d8a_3:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)+fv(rd(s->u,32,8),8),8));
L_1803f2d8a_4:;
/* 1803f2d8f: subsd xmm9, qword ptr [rdi] */
L_1803f2d8f_0:;
L_1803f2d8f_1:;
wr(s->u,32,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803f2d8f_2:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)-fv(rd(s->u,32,8),8),8));
L_1803f2d8f_3:;
/* 1803f2d94: movapd xmm0, xmm15 */
L_1803f2d94_0:;
L_1803f2d94_1:;
wr(s->r,4608,8,rd(s->r,5568,8));
L_1803f2d94_2:;
wr(s->r,4616,8,rd(s->r,5576,8));
L_1803f2d94_3:;
/* 1803f2d99: mulsd xmm7, xmm12 */
L_1803f2d99_0:;
L_1803f2d99_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2d99_2:;
/* 1803f2d9e: mulsd xmm9, xmm13 */
L_1803f2d9e_0:;
L_1803f2d9e_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)*fv(rd(s->r,5440,8),8),8));
L_1803f2d9e_2:;
/* 1803f2da3: call 0x180609aa2 */
L_1803f2da3_0:;
L_1803f2da3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2da3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2da8)));
L_1803f2da3_3:;
return (uint64_t)UINT64_C(0x180609aa2);
L_1803f2da3_4:;
return UINT64_C(0x1803f2da8);
}
uint64_t b_1803f2d60(CPU*s){
/* 1803f2d60: movsd xmm8, qword ptr [rdi + 8] */
L_1803f2d60_0:;
L_1803f2d60_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803f2d60_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2d60_3:;
wr(s->r,5120,8,rd(s->u,8,8));
L_1803f2d60_4:;
wr(s->r,5128,8,((U)UINT64_C(0x0)));
L_1803f2d60_5:;
/* 1803f2d66: movsd xmm9, qword ptr [rbx] */
L_1803f2d66_0:;
L_1803f2d66_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803f2d66_2:;
wr(s->r,5184,8,rd(s->u,8,8));
L_1803f2d66_3:;
wr(s->r,5192,8,((U)UINT64_C(0x0)));
L_1803f2d66_4:;
/* 1803f2d6b: movsd xmm10, qword ptr [rdi] */
L_1803f2d6b_0:;
L_1803f2d6b_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803f2d6b_2:;
wr(s->r,5248,8,rd(s->u,8,8));
L_1803f2d6b_3:;
wr(s->r,5256,8,((U)UINT64_C(0x0)));
L_1803f2d6b_4:;
/* 1803f2d70: movapd xmm7, xmm8 */
L_1803f2d70_0:;
L_1803f2d70_1:;
wr(s->r,5056,8,rd(s->r,5120,8));
L_1803f2d70_2:;
wr(s->r,5064,8,rd(s->r,5128,8));
L_1803f2d70_3:;
/* 1803f2d75: subsd xmm8, qword ptr [rbx + 8] */
L_1803f2d75_0:;
L_1803f2d75_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803f2d75_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2d75_3:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)-fv(rd(s->u,8,8),8),8));
L_1803f2d75_4:;
/* 1803f2d7b: addsd xmm10, xmm9 */
L_1803f2d7b_0:;
L_1803f2d7b_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)+fv(rd(s->r,5184,8),8),8));
L_1803f2d7b_2:;
/* 1803f2d80: mulsd xmm10, xmm12 */
L_1803f2d80_0:;
L_1803f2d80_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2d80_2:;
/* 1803f2d85: mulsd xmm8, xmm12 */
L_1803f2d85_0:;
L_1803f2d85_1:;
wr(s->r,5120,8,fb(fv(rd(s->r,5120,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2d85_2:;
/* 1803f2d8a: addsd xmm7, qword ptr [rbx + 8] */
L_1803f2d8a_0:;
L_1803f2d8a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803f2d8a_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803f2d8a_3:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)+fv(rd(s->u,8,8),8),8));
L_1803f2d8a_4:;
/* 1803f2d8f: subsd xmm9, qword ptr [rdi] */
L_1803f2d8f_0:;
L_1803f2d8f_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803f2d8f_2:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)-fv(rd(s->u,8,8),8),8));
L_1803f2d8f_3:;
/* 1803f2d94: movapd xmm0, xmm15 */
L_1803f2d94_0:;
L_1803f2d94_1:;
wr(s->r,4608,8,rd(s->r,5568,8));
L_1803f2d94_2:;
wr(s->r,4616,8,rd(s->r,5576,8));
L_1803f2d94_3:;
/* 1803f2d99: mulsd xmm7, xmm12 */
L_1803f2d99_0:;
L_1803f2d99_1:;
wr(s->r,5056,8,fb(fv(rd(s->r,5056,8),8)*fv(rd(s->r,5376,8),8),8));
L_1803f2d99_2:;
/* 1803f2d9e: mulsd xmm9, xmm13 */
L_1803f2d9e_0:;
L_1803f2d9e_1:;
wr(s->r,5184,8,fb(fv(rd(s->r,5184,8),8)*fv(rd(s->r,5440,8),8),8));
L_1803f2d9e_2:;
/* 1803f2da3: call 0x180609aa2 */
L_1803f2da3_0:;
L_1803f2da3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2da3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2da8)));
L_1803f2da3_3:;
return (uint64_t)UINT64_C(0x180609aa2);
L_1803f2da3_4:;
return UINT64_C(0x1803f2da8);
}
uint64_t b_1803f2da8(CPU*s){
/* 1803f2da8: movapd xmm6, xmm0 */
L_1803f2da8_0:;
L_1803f2da8_1:;
wr(s->r,4992,8,rd(s->r,4608,8));
L_1803f2da8_2:;
wr(s->r,5000,8,rd(s->r,4616,8));
L_1803f2da8_3:;
/* 1803f2dac: movapd xmm0, xmm15 */
L_1803f2dac_0:;
L_1803f2dac_1:;
wr(s->r,4608,8,rd(s->r,5568,8));
L_1803f2dac_2:;
wr(s->r,4616,8,rd(s->r,5576,8));
L_1803f2dac_3:;
/* 1803f2db1: call 0x1806099fa */
L_1803f2db1_0:;
L_1803f2db1_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803f2db1_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803f2db6)));
L_1803f2db1_3:;
return (uint64_t)UINT64_C(0x1806099fa);
L_1803f2db1_4:;
return UINT64_C(0x1803f2db6);
}
uint64_t b_1803f2db6(CPU*s){
/* 1803f2db6: movapd xmm2, xmm6 */
L_1803f2db6_0:;
L_1803f2db6_1:;
wr(s->r,4736,8,rd(s->r,4992,8));
L_1803f2db6_2:;
wr(s->r,4744,8,rd(s->r,5000,8));
L_1803f2db6_3:;
/* 1803f2dba: movapd xmm3, xmm14 */
L_1803f2dba_0:;
L_1803f2dba_1:;
wr(s->r,4800,8,rd(s->r,5504,8));
L_1803f2dba_2:;
wr(s->r,4808,8,rd(s->r,5512,8));
L_1803f2dba_3:;
/* 1803f2dbf: sub rbx, 0x10 */
L_1803f2dbf_0:;
L_1803f2dbf_1:;
wr(s->r,512,1,(rd(s->r,24,8)<((U)UINT64_C(0x10))));
L_1803f2dbf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x10)),8,1));
L_1803f2dbf_3:;
wr(s->r,24,8,(rd(s->r,24,8)-((U)UINT64_C(0x10))));
L_1803f2dbf_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2dbf_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803f2dbf_6:;
wr(s->u,17,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803f2dbf_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803f2dbf_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f2dbf_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f2dbf_10:;
/* 1803f2dc3: add rdi, 0x10 */
L_1803f2dc3_0:;
L_1803f2dc3_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x10)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803f2dc3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x10)),8,0));
L_1803f2dc3_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x10))));
L_1803f2dc3_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2dc3_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803f2dc3_6:;
wr(s->u,17,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803f2dc3_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803f2dc3_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f2dc3_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f2dc3_10:;
/* 1803f2dc7: mulsd xmm6, xmm9 */
L_1803f2dc7_0:;
L_1803f2dc7_1:;
wr(s->r,4992,8,fb(fv(rd(s->r,4992,8),8)*fv(rd(s->r,5184,8),8),8));
L_1803f2dc7_2:;
/* 1803f2dcc: mulsd xmm2, xmm7 */
L_1803f2dcc_0:;
L_1803f2dcc_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,5056,8),8),8));
L_1803f2dcc_2:;
/* 1803f2dd0: subsd xmm3, xmm0 */
L_1803f2dd0_0:;
L_1803f2dd0_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)-fv(rd(s->r,4608,8),8),8));
L_1803f2dd0_2:;
/* 1803f2dd4: addsd xmm15, xmm11 */
L_1803f2dd4_0:;
L_1803f2dd4_1:;
wr(s->r,5568,8,fb(fv(rd(s->r,5568,8),8)+fv(rd(s->r,5312,8),8),8));
L_1803f2dd4_2:;
/* 1803f2dd9: movapd xmm1, xmm3 */
L_1803f2dd9_0:;
L_1803f2dd9_1:;
wr(s->r,4672,8,rd(s->r,4800,8));
L_1803f2dd9_2:;
wr(s->r,4680,8,rd(s->r,4808,8));
L_1803f2dd9_3:;
/* 1803f2ddd: mulsd xmm3, xmm7 */
L_1803f2ddd_0:;
L_1803f2ddd_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)*fv(rd(s->r,5056,8),8),8));
L_1803f2ddd_2:;
/* 1803f2de1: mulsd xmm1, xmm9 */
L_1803f2de1_0:;
L_1803f2de1_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)*fv(rd(s->r,5184,8),8),8));
L_1803f2de1_2:;
/* 1803f2de6: addsd xmm3, xmm6 */
L_1803f2de6_0:;
L_1803f2de6_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)+fv(rd(s->r,4992,8),8),8));
L_1803f2de6_2:;
/* 1803f2dea: subsd xmm2, xmm1 */
L_1803f2dea_0:;
L_1803f2dea_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)-fv(rd(s->r,4672,8),8),8));
L_1803f2dea_2:;
/* 1803f2dee: movapd xmm1, xmm3 */
L_1803f2dee_0:;
L_1803f2dee_1:;
wr(s->r,4672,8,rd(s->r,4800,8));
L_1803f2dee_2:;
wr(s->r,4680,8,rd(s->r,4808,8));
L_1803f2dee_3:;
/* 1803f2df2: subsd xmm3, xmm8 */
L_1803f2df2_0:;
L_1803f2df2_1:;
wr(s->r,4800,8,fb(fv(rd(s->r,4800,8),8)-fv(rd(s->r,5120,8),8),8));
L_1803f2df2_2:;
/* 1803f2df7: movapd xmm0, xmm2 */
L_1803f2df7_0:;
L_1803f2df7_1:;
wr(s->r,4608,8,rd(s->r,4736,8));
L_1803f2df7_2:;
wr(s->r,4616,8,rd(s->r,4744,8));
L_1803f2df7_3:;
/* 1803f2dfb: addsd xmm1, xmm8 */
L_1803f2dfb_0:;
L_1803f2dfb_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)+fv(rd(s->r,5120,8),8),8));
L_1803f2dfb_2:;
/* 1803f2e00: addsd xmm0, xmm10 */
L_1803f2e00_0:;
L_1803f2e00_1:;
wr(s->r,4608,8,fb(fv(rd(s->r,4608,8),8)+fv(rd(s->r,5248,8),8),8));
L_1803f2e00_2:;
/* 1803f2e05: subsd xmm10, xmm2 */
L_1803f2e05_0:;
L_1803f2e05_1:;
wr(s->r,5248,8,fb(fv(rd(s->r,5248,8),8)-fv(rd(s->r,4736,8),8),8));
L_1803f2e05_2:;
/* 1803f2e0a: movsd qword ptr [rbx + 0x10], xmm0 */
L_1803f2e0a_0:;
L_1803f2e0a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803f2e0a_2:;
wr(s->u,8,8,rd(s->r,4608,8));
L_1803f2e0a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f2e0a_4:;
/* 1803f2e0f: movsd qword ptr [rdi - 8], xmm1 */
L_1803f2e0f_0:;
L_1803f2e0f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803f2e0f_2:;
wr(s->u,8,8,rd(s->r,4672,8));
L_1803f2e0f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f2e0f_4:;
/* 1803f2e14: movsd qword ptr [rdi - 0x10], xmm10 */
L_1803f2e14_0:;
L_1803f2e14_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffff0))));
L_1803f2e14_2:;
wr(s->u,8,8,rd(s->r,5248,8));
L_1803f2e14_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f2e14_4:;
/* 1803f2e1a: movsd qword ptr [rbx + 0x18], xmm3 */
L_1803f2e1a_0:;
L_1803f2e1a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803f2e1a_2:;
wr(s->u,8,8,rd(s->r,4800,8));
L_1803f2e1a_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803f2e1a_4:;
/* 1803f2e1f: cmp rdi, rbx */
L_1803f2e1f_0:;
L_1803f2e1f_1:;
wr(s->u,27,8,rd(s->r,24,8));
L_1803f2e1f_2:;
wr(s->r,512,1,(rd(s->r,56,8)<rd(s->u,27,8)));
L_1803f2e1f_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),rd(s->u,27,8),8,1));
L_1803f2e1f_4:;
wr(s->u,35,8,(rd(s->r,56,8)-rd(s->u,27,8)));
L_1803f2e1f_5:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2e1f_6:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_1803f2e1f_7:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_1803f2e1f_8:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803f2e1f_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803f2e1f_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803f2e1f_11:;
/* 1803f2e22: jbe 0x1803f2d60 */
L_1803f2e22_0:;
L_1803f2e22_1:;
wr(s->u,16,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803f2e22_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803f2d60);}
L_1803f2e22_3:;
return UINT64_C(0x1803f2e28);
}
uint64_t b_1803f2e28(CPU*s){
/* 1803f2e28: movaps xmm14, xmmword ptr [rsp + 0x30] */
L_1803f2e28_0:;
L_1803f2e28_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803f2e28_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2e28_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2e28_4:;
wr(s->r,5504,4,rd(s->u,58,4));
L_1803f2e28_5:;
wr(s->r,5508,4,rd(s->u,62,4));
L_1803f2e28_6:;
wr(s->r,5512,4,rd(s->u,66,4));
L_1803f2e28_7:;
wr(s->r,5516,4,rd(s->u,70,4));
L_1803f2e28_8:;
/* 1803f2e2e: movaps xmm13, xmmword ptr [rsp + 0x40] */
L_1803f2e2e_0:;
L_1803f2e2e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803f2e2e_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2e2e_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2e2e_4:;
wr(s->r,5440,4,rd(s->u,58,4));
L_1803f2e2e_5:;
wr(s->r,5444,4,rd(s->u,62,4));
L_1803f2e2e_6:;
wr(s->r,5448,4,rd(s->u,66,4));
L_1803f2e2e_7:;
wr(s->r,5452,4,rd(s->u,70,4));
L_1803f2e2e_8:;
/* 1803f2e34: movaps xmm10, xmmword ptr [rsp + 0x70] */
L_1803f2e34_0:;
L_1803f2e34_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803f2e34_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2e34_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2e34_4:;
wr(s->r,5248,4,rd(s->u,58,4));
L_1803f2e34_5:;
wr(s->r,5252,4,rd(s->u,62,4));
L_1803f2e34_6:;
wr(s->r,5256,4,rd(s->u,66,4));
L_1803f2e34_7:;
wr(s->r,5260,4,rd(s->u,70,4));
L_1803f2e34_8:;
/* 1803f2e3a: movaps xmm9, xmmword ptr [rsp + 0x80] */
L_1803f2e3a_0:;
L_1803f2e3a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803f2e3a_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803f2e3a_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2e3a_4:;
wr(s->r,5184,4,rd(s->u,58,4));
L_1803f2e3a_5:;
wr(s->r,5188,4,rd(s->u,62,4));
L_1803f2e3a_6:;
wr(s->r,5192,4,rd(s->u,66,4));
L_1803f2e3a_7:;
wr(s->r,5196,4,rd(s->u,70,4));
L_1803f2e3a_8:;
/* 1803f2e43: movaps xmm8, xmmword ptr [rsp + 0x90] */
L_1803f2e43_0:;
L_1803f2e43_1:;
wr(s->u,8,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803f2e43_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803f2e43_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2e43_4:;
wr(s->r,5120,4,rd(s->u,58,4));
L_1803f2e43_5:;
wr(s->r,5124,4,rd(s->u,62,4));
L_1803f2e43_6:;
wr(s->r,5128,4,rd(s->u,66,4));
L_1803f2e43_7:;
wr(s->r,5132,4,rd(s->u,70,4));
L_1803f2e43_8:;
/* 1803f2e4c: movaps xmm7, xmmword ptr [rsp + 0xa0] */
L_1803f2e4c_0:;
L_1803f2e4c_1:;
wr(s->u,8,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803f2e4c_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803f2e4c_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2e4c_4:;
wr(s->r,5056,4,rd(s->u,58,4));
L_1803f2e4c_5:;
wr(s->r,5060,4,rd(s->u,62,4));
L_1803f2e4c_6:;
wr(s->r,5064,4,rd(s->u,66,4));
L_1803f2e4c_7:;
wr(s->r,5068,4,rd(s->u,70,4));
L_1803f2e4c_8:;
/* 1803f2e54: movaps xmm6, xmmword ptr [rsp + 0xb0] */
L_1803f2e54_0:;
L_1803f2e54_1:;
wr(s->u,8,8,(((U)UINT64_C(0xb0))+rd(s->r,32,8)));
L_1803f2e54_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803f2e54_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2e54_4:;
wr(s->r,4992,4,rd(s->u,58,4));
L_1803f2e54_5:;
wr(s->r,4996,4,rd(s->u,62,4));
L_1803f2e54_6:;
wr(s->r,5000,4,rd(s->u,66,4));
L_1803f2e54_7:;
wr(s->r,5004,4,rd(s->u,70,4));
L_1803f2e54_8:;
/* 1803f2e5c: mov rbx, qword ptr [rsp + 0xd0] */
L_1803f2e5c_0:;
L_1803f2e5c_1:;
wr(s->u,8,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803f2e5c_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f2e5c_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803f2e5c_4:;
/* 1803f2e64: movaps xmm11, xmmword ptr [rsp + 0x60] */
L_1803f2e64_0:;
L_1803f2e64_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803f2e64_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2e64_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2e64_4:;
wr(s->r,5312,4,rd(s->u,58,4));
L_1803f2e64_5:;
wr(s->r,5316,4,rd(s->u,62,4));
L_1803f2e64_6:;
wr(s->r,5320,4,rd(s->u,66,4));
L_1803f2e64_7:;
wr(s->r,5324,4,rd(s->u,70,4));
L_1803f2e64_8:;
/* 1803f2e6a: movaps xmm12, xmmword ptr [rsp + 0x50] */
L_1803f2e6a_0:;
L_1803f2e6a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803f2e6a_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2e6a_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2e6a_4:;
wr(s->r,5376,4,rd(s->u,58,4));
L_1803f2e6a_5:;
wr(s->r,5380,4,rd(s->u,62,4));
L_1803f2e6a_6:;
wr(s->r,5384,4,rd(s->u,66,4));
L_1803f2e6a_7:;
wr(s->r,5388,4,rd(s->u,70,4));
L_1803f2e6a_8:;
/* 1803f2e70: movaps xmm15, xmmword ptr [rsp + 0x20] */
L_1803f2e70_0:;
L_1803f2e70_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f2e70_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2e70_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2e70_4:;
wr(s->r,5568,4,rd(s->u,58,4));
L_1803f2e70_5:;
wr(s->r,5572,4,rd(s->u,62,4));
L_1803f2e70_6:;
wr(s->r,5576,4,rd(s->u,66,4));
L_1803f2e70_7:;
wr(s->r,5580,4,rd(s->u,70,4));
L_1803f2e70_8:;
/* 1803f2e76: add rsp, 0xc0 */
L_1803f2e76_0:;
L_1803f2e76_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0xc0)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2e76_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0xc0)),8,0));
L_1803f2e76_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0xc0))));
L_1803f2e76_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2e76_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2e76_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2e76_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803f2e76_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803f2e76_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803f2e76_10:;
/* 1803f2e7d: pop rdi */
L_1803f2e7d_0:;
L_1803f2e7d_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803f2e7d_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2e7d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2e7d_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803f2e7d_5:;
/* 1803f2e7e: ret  */
L_1803f2e7e_0:;
L_1803f2e7e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2e7e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2e7e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f2e7e_4:;
return UINT64_C(0x1803f2e7f);
}
uint64_t b_1803f2e5c(CPU*s){
/* 1803f2e5c: mov rbx, qword ptr [rsp + 0xd0] */
L_1803f2e5c_0:;
L_1803f2e5c_1:;
wr(s->u,8,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803f2e5c_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803f2e5c_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803f2e5c_4:;
/* 1803f2e64: movaps xmm11, xmmword ptr [rsp + 0x60] */
L_1803f2e64_0:;
L_1803f2e64_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803f2e64_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2e64_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2e64_4:;
wr(s->r,5312,4,rd(s->u,58,4));
L_1803f2e64_5:;
wr(s->r,5316,4,rd(s->u,62,4));
L_1803f2e64_6:;
wr(s->r,5320,4,rd(s->u,66,4));
L_1803f2e64_7:;
wr(s->r,5324,4,rd(s->u,70,4));
L_1803f2e64_8:;
/* 1803f2e6a: movaps xmm12, xmmword ptr [rsp + 0x50] */
L_1803f2e6a_0:;
L_1803f2e6a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803f2e6a_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2e6a_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2e6a_4:;
wr(s->r,5376,4,rd(s->u,58,4));
L_1803f2e6a_5:;
wr(s->r,5380,4,rd(s->u,62,4));
L_1803f2e6a_6:;
wr(s->r,5384,4,rd(s->u,66,4));
L_1803f2e6a_7:;
wr(s->r,5388,4,rd(s->u,70,4));
L_1803f2e6a_8:;
/* 1803f2e70: movaps xmm15, xmmword ptr [rsp + 0x20] */
L_1803f2e70_0:;
L_1803f2e70_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803f2e70_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803f2e70_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803f2e70_4:;
wr(s->r,5568,4,rd(s->u,58,4));
L_1803f2e70_5:;
wr(s->r,5572,4,rd(s->u,62,4));
L_1803f2e70_6:;
wr(s->r,5576,4,rd(s->u,66,4));
L_1803f2e70_7:;
wr(s->r,5580,4,rd(s->u,70,4));
L_1803f2e70_8:;
/* 1803f2e76: add rsp, 0xc0 */
L_1803f2e76_0:;
L_1803f2e76_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0xc0)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803f2e76_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0xc0)),8,0));
L_1803f2e76_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0xc0))));
L_1803f2e76_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803f2e76_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803f2e76_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803f2e76_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803f2e76_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803f2e76_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803f2e76_10:;
/* 1803f2e7d: pop rdi */
L_1803f2e7d_0:;
L_1803f2e7d_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803f2e7d_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2e7d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2e7d_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803f2e7d_5:;
/* 1803f2e7e: ret  */
L_1803f2e7e_0:;
L_1803f2e7e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803f2e7e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803f2e7e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803f2e7e_4:;
return UINT64_C(0x1803f2e7f);
}
