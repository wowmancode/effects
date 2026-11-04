#include "lift_runtime.h"
uint64_t b_1803dd004(CPU*s){
/* 1803dd004: xor eax, eax */
L_1803dd004_0:;
L_1803dd004_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd004_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd004_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dd004_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd004_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd004_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd004_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd004_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803dd004_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd004_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd004_11:;
/* 1803dd006: add rsp, 0x20 */
L_1803dd006_0:;
L_1803dd006_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dd006_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dd006_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dd006_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd006_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd006_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd006_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dd006_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd006_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd006_10:;
/* 1803dd00a: pop rbx */
L_1803dd00a_0:;
L_1803dd00a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803dd00a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd00a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd00a_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803dd00a_5:;
/* 1803dd00b: ret  */
L_1803dd00b_0:;
L_1803dd00b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd00b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd00b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dd00b_4:;
return UINT64_C(0x1803dd00c);
}
uint64_t b_1803dd00c(CPU*s){
/* 1803dd00c: mov edx, dword ptr [rbx + 0x5c] */
L_1803dd00c_0:;
L_1803dd00c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x5c))));
L_1803dd00c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd00c_3:;
wr(s->r,16,4,rd(s->u,8,4));
L_1803dd00c_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd00c_5:;
/* 1803dd00f: call 0x1803e2850 */
L_1803dd00f_0:;
L_1803dd00f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd00f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd014)));
L_1803dd00f_3:;
return (uint64_t)UINT64_C(0x1803e2850);
L_1803dd00f_4:;
return UINT64_C(0x1803dd014);
}
uint64_t b_1803dd014(CPU*s){
/* 1803dd014: xor eax, eax */
L_1803dd014_0:;
L_1803dd014_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd014_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd014_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dd014_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd014_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd014_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd014_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd014_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803dd014_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd014_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd014_11:;
/* 1803dd016: add rsp, 0x20 */
L_1803dd016_0:;
L_1803dd016_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dd016_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dd016_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dd016_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd016_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd016_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd016_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dd016_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd016_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd016_10:;
/* 1803dd01a: pop rbx */
L_1803dd01a_0:;
L_1803dd01a_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803dd01a_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd01a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd01a_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803dd01a_5:;
/* 1803dd01b: ret  */
L_1803dd01b_0:;
L_1803dd01b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd01b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd01b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dd01b_4:;
return UINT64_C(0x1803dd01c);
}
uint64_t b_1803dd020(CPU*s){
/* 1803dd020: sub rsp, 0x28 */
L_1803dd020_0:;
L_1803dd020_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803dd020_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803dd020_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803dd020_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd020_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd020_6:;
wr(s->u,12,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd020_7:;
wr(s->u,20,1,pop(rd(s->u,12,8),8));
L_1803dd020_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dd020_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dd020_10:;
/* 1803dd024: movss xmm1, dword ptr [rcx + 0x10] */
L_1803dd024_0:;
L_1803dd024_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803dd024_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd024_3:;
wr(s->r,4672,4,rd(s->u,8,4));
L_1803dd024_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803dd024_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803dd024_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803dd024_7:;
/* 1803dd029: movd xmm0, edx */
L_1803dd029_0:;
L_1803dd029_1:;
wr(s->r,4608,16,rd(s->r,16,4));
L_1803dd029_2:;
/* 1803dd02d: mulss xmm1, dword ptr [rip + 0x42f86b] */
L_1803dd02d_0:;
L_1803dd02d_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(mr(UINT64_C(0x18080c8a0),4),4),4));
L_1803dd02d_2:;
/* 1803dd035: cvtdq2ps xmm0, xmm0 */
L_1803dd035_0:;
L_1803dd035_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dd035_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dd035_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dd035_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dd035_5:;
/* 1803dd038: mulss xmm1, xmm0 */
L_1803dd038_0:;
L_1803dd038_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803dd038_2:;
/* 1803dd03c: cvttss2si edx, xmm1 */
L_1803dd03c_0:;
L_1803dd03c_1:;
wr(s->r,16,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dd03c_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd03c_3:;
/* 1803dd040: cmp edx, 0x80000000 */
L_1803dd040_0:;
L_1803dd040_1:;
wr(s->u,22,4,rd(s->r,16,4));
L_1803dd040_2:;
wr(s->r,512,1,(rd(s->u,22,4)<((U)UINT64_C(0x80000000))));
L_1803dd040_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,22,4),((U)UINT64_C(0x80000000)),4,1));
L_1803dd040_4:;
wr(s->u,26,4,(rd(s->u,22,4)-((U)UINT64_C(0x80000000))));
L_1803dd040_5:;
wr(s->r,519,1,(sx(rd(s->u,26,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd040_6:;
wr(s->r,518,1,(rd(s->u,26,4)==((U)UINT64_C(0x0))));
L_1803dd040_7:;
wr(s->u,12,4,(rd(s->u,26,4)&((U)UINT64_C(0xff))));
L_1803dd040_8:;
wr(s->u,20,1,pop(rd(s->u,12,4),4));
L_1803dd040_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803dd040_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803dd040_11:;
/* 1803dd046: je 0x1803dd068 */
L_1803dd046_0:;
L_1803dd046_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd068);}
L_1803dd046_2:;
return UINT64_C(0x1803dd048);
}
uint64_t b_1803dd048(CPU*s){
/* 1803dd048: pxor xmm0, xmm0 */
L_1803dd048_0:;
L_1803dd048_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803dd048_2:;
/* 1803dd04c: cvtsi2ss xmm0, edx */
L_1803dd04c_0:;
L_1803dd04c_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,16,4),4),4));
L_1803dd04c_2:;
/* 1803dd050: ucomiss xmm0, xmm1 */
L_1803dd050_0:;
L_1803dd050_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dd050_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803dd050_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803dd050_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803dd050_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803dd050_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803dd050_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dd050_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd050_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dd050_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dd050_11:;
/* 1803dd053: je 0x1803dd068 */
L_1803dd053_0:;
L_1803dd053_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd068);}
L_1803dd053_2:;
return UINT64_C(0x1803dd055);
}
uint64_t b_1803dd055(CPU*s){
/* 1803dd055: unpcklps xmm1, xmm1 */
L_1803dd055_0:;
L_1803dd055_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803dd055_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803dd055_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803dd055_4:;
/* 1803dd058: movmskps eax, xmm1 */
L_1803dd058_0:;
L_1803dd058_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803dd058_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd058_3:;
/* 1803dd05b: pxor xmm1, xmm1 */
L_1803dd05b_0:;
L_1803dd05b_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803dd05b_2:;
/* 1803dd05f: and eax, 1 */
L_1803dd05f_0:;
L_1803dd05f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd05f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd05f_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dd05f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd05f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd05f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd05f_7:;
wr(s->u,29,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd05f_8:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803dd05f_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dd05f_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dd05f_11:;
/* 1803dd062: sub edx, eax */
L_1803dd062_0:;
L_1803dd062_1:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->r,0,4)));
L_1803dd062_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,0,4),4,1));
L_1803dd062_3:;
wr(s->r,16,4,(rd(s->r,16,4)-rd(s->r,0,4)));
L_1803dd062_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd062_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd062_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dd062_7:;
wr(s->u,29,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dd062_8:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803dd062_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803dd062_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803dd062_11:;
/* 1803dd064: cvtsi2ss xmm1, edx */
L_1803dd064_0:;
L_1803dd064_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,16,4),4),4));
L_1803dd064_2:;
/* 1803dd068: movss xmm2, dword ptr [rcx + 0x2c] */
L_1803dd068_0:;
L_1803dd068_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x2c))));
L_1803dd068_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd068_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803dd068_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dd068_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dd068_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dd068_7:;
/* 1803dd06d: cvttss2si edx, xmm1 */
L_1803dd06d_0:;
L_1803dd06d_1:;
wr(s->r,16,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dd06d_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd06d_3:;
/* 1803dd071: comiss xmm2, dword ptr [rip + 0x26fbcc] */
L_1803dd071_0:;
L_1803dd071_1:;
wr(s->u,35,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803dd071_2:;
wr(s->u,36,1,isnan(fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803dd071_3:;
wr(s->r,514,1,((rd(s->u,35,1)!=0)||(rd(s->u,36,1)!=0)));
L_1803dd071_4:;
wr(s->u,37,1,(fv(rd(s->r,4736,4),4)==fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803dd071_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,37,1)));
L_1803dd071_6:;
wr(s->u,38,1,(fv(rd(s->r,4736,4),4)<fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803dd071_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,38,1)));
L_1803dd071_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd071_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dd071_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dd071_11:;
/* 1803dd078: mov dword ptr [rcx + 0x5c], edx */
L_1803dd078_0:;
L_1803dd078_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x5c))));
L_1803dd078_2:;
wr(s->u,16,4,rd(s->r,16,4));
L_1803dd078_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd078_4:;
/* 1803dd07b: mov rcx, qword ptr [rcx + 0x6718] */
L_1803dd07b_0:;
L_1803dd07b_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x6718))));
L_1803dd07b_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd07b_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dd07b_4:;
/* 1803dd082: jbe 0x1803dd093 */
L_1803dd082_0:;
L_1803dd082_1:;
wr(s->u,28,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dd082_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803dd093);}
L_1803dd082_3:;
return UINT64_C(0x1803dd084);
}
uint64_t b_1803dd068(CPU*s){
/* 1803dd068: movss xmm2, dword ptr [rcx + 0x2c] */
L_1803dd068_0:;
L_1803dd068_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x2c))));
L_1803dd068_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd068_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803dd068_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dd068_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dd068_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dd068_7:;
/* 1803dd06d: cvttss2si edx, xmm1 */
L_1803dd06d_0:;
L_1803dd06d_1:;
wr(s->r,16,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dd06d_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd06d_3:;
/* 1803dd071: comiss xmm2, dword ptr [rip + 0x26fbcc] */
L_1803dd071_0:;
L_1803dd071_1:;
wr(s->u,29,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803dd071_2:;
wr(s->u,30,1,isnan(fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803dd071_3:;
wr(s->r,514,1,((rd(s->u,29,1)!=0)||(rd(s->u,30,1)!=0)));
L_1803dd071_4:;
wr(s->u,31,1,(fv(rd(s->r,4736,4),4)==fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803dd071_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,31,1)));
L_1803dd071_6:;
wr(s->u,32,1,(fv(rd(s->r,4736,4),4)<fv(mr(UINT64_C(0x18064cc44),4),4)));
L_1803dd071_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,32,1)));
L_1803dd071_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd071_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dd071_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dd071_11:;
/* 1803dd078: mov dword ptr [rcx + 0x5c], edx */
L_1803dd078_0:;
L_1803dd078_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x5c))));
L_1803dd078_2:;
wr(s->u,16,4,rd(s->r,16,4));
L_1803dd078_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd078_4:;
/* 1803dd07b: mov rcx, qword ptr [rcx + 0x6718] */
L_1803dd07b_0:;
L_1803dd07b_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x6718))));
L_1803dd07b_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd07b_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dd07b_4:;
/* 1803dd082: jbe 0x1803dd093 */
L_1803dd082_0:;
L_1803dd082_1:;
wr(s->u,28,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dd082_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803dd093);}
L_1803dd082_3:;
return UINT64_C(0x1803dd084);
}
uint64_t b_1803dd084(CPU*s){
/* 1803dd084: movd xmm0, edx */
L_1803dd084_0:;
L_1803dd084_1:;
wr(s->r,4608,16,rd(s->r,16,4));
L_1803dd084_2:;
/* 1803dd088: cvtdq2ps xmm0, xmm0 */
L_1803dd088_0:;
L_1803dd088_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dd088_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dd088_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dd088_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dd088_5:;
/* 1803dd08b: divss xmm0, xmm2 */
L_1803dd08b_0:;
L_1803dd08b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803dd08b_2:;
/* 1803dd08f: cvttss2si edx, xmm0 */
L_1803dd08f_0:;
L_1803dd08f_1:;
wr(s->r,16,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803dd08f_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd08f_3:;
/* 1803dd093: call 0x1803e2850 */
L_1803dd093_0:;
L_1803dd093_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd093_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd098)));
L_1803dd093_3:;
return (uint64_t)UINT64_C(0x1803e2850);
L_1803dd093_4:;
return UINT64_C(0x1803dd098);
}
uint64_t b_1803dd093(CPU*s){
/* 1803dd093: call 0x1803e2850 */
L_1803dd093_0:;
L_1803dd093_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd093_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd098)));
L_1803dd093_3:;
return (uint64_t)UINT64_C(0x1803e2850);
L_1803dd093_4:;
return UINT64_C(0x1803dd098);
}
uint64_t b_1803dd098(CPU*s){
/* 1803dd098: xor eax, eax */
L_1803dd098_0:;
L_1803dd098_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd098_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd098_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dd098_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd098_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd098_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd098_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd098_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803dd098_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd098_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd098_11:;
/* 1803dd09a: add rsp, 0x28 */
L_1803dd09a_0:;
L_1803dd09a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dd09a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803dd09a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803dd09a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd09a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd09a_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd09a_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dd09a_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd09a_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd09a_10:;
/* 1803dd09e: ret  */
L_1803dd09e_0:;
L_1803dd09e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd09e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd09e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dd09e_4:;
return UINT64_C(0x1803dd09f);
}
uint64_t b_1803dd0d0(CPU*s){
/* 1803dd0d0: sub rcx, 8 */
L_1803dd0d0_0:;
L_1803dd0d0_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x8))));
L_1803dd0d0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,1));
L_1803dd0d0_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x8))));
L_1803dd0d0_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd0d0_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803dd0d0_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803dd0d0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dd0d0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd0d0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd0d0_10:;
/* 1803dd0d4: jmp 0x1803dcc40 */
L_1803dd0d4_0:;
L_1803dd0d4_1:;
return UINT64_C(0x1803dcc40);
L_1803dd0d4_2:;
return UINT64_C(0x1803dd0d9);
}
uint64_t b_1803dd0e0(CPU*s){
/* 1803dd0e0: sub rcx, 8 */
L_1803dd0e0_0:;
L_1803dd0e0_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x8))));
L_1803dd0e0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,1));
L_1803dd0e0_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x8))));
L_1803dd0e0_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd0e0_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803dd0e0_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803dd0e0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dd0e0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd0e0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd0e0_10:;
/* 1803dd0e4: jmp 0x1803dd730 */
L_1803dd0e4_0:;
L_1803dd0e4_1:;
return UINT64_C(0x1803dd730);
L_1803dd0e4_2:;
return UINT64_C(0x1803dd0e9);
}
uint64_t b_1803dd0f0(CPU*s){
/* 1803dd0f0: sub rcx, 8 */
L_1803dd0f0_0:;
L_1803dd0f0_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x8))));
L_1803dd0f0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,1));
L_1803dd0f0_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x8))));
L_1803dd0f0_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd0f0_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803dd0f0_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803dd0f0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dd0f0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd0f0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd0f0_10:;
/* 1803dd0f4: jmp 0x1803dca50 */
L_1803dd0f4_0:;
L_1803dd0f4_1:;
return UINT64_C(0x1803dca50);
L_1803dd0f4_2:;
return UINT64_C(0x1803dd0f9);
}
uint64_t b_1803dd100(CPU*s){
/* 1803dd100: sub rcx, 8 */
L_1803dd100_0:;
L_1803dd100_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x8))));
L_1803dd100_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,1));
L_1803dd100_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x8))));
L_1803dd100_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd100_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803dd100_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803dd100_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dd100_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd100_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd100_10:;
/* 1803dd104: jmp 0x1803dce40 */
L_1803dd104_0:;
L_1803dd104_1:;
return UINT64_C(0x1803dce40);
L_1803dd104_2:;
return UINT64_C(0x1803dd109);
}
uint64_t b_1803dd110(CPU*s){
/* 1803dd110: sub rcx, 8 */
L_1803dd110_0:;
L_1803dd110_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x8))));
L_1803dd110_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,1));
L_1803dd110_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x8))));
L_1803dd110_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd110_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803dd110_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803dd110_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dd110_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd110_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd110_10:;
/* 1803dd114: jmp 0x1803dc570 */
L_1803dd114_0:;
L_1803dd114_1:;
return UINT64_C(0x1803dc570);
L_1803dd114_2:;
return UINT64_C(0x1803dd119);
}
uint64_t b_1803dd120(CPU*s){
/* 1803dd120: mov r11, rsp */
L_1803dd120_0:;
L_1803dd120_1:;
wr(s->r,152,8,rd(s->r,32,8));
L_1803dd120_2:;
/* 1803dd123: mov qword ptr [r11 + 8], rcx */
L_1803dd123_0:;
L_1803dd123_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x8))));
L_1803dd123_2:;
wr(s->u,28,8,rd(s->r,8,8));
L_1803dd123_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,28,8));
L_1803dd123_4:;
/* 1803dd127: push rbp */
L_1803dd127_0:;
L_1803dd127_1:;
wr(s->u,52,8,rd(s->r,40,8));
L_1803dd127_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd127_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,52,8));
L_1803dd127_4:;
/* 1803dd128: push rsi */
L_1803dd128_0:;
L_1803dd128_1:;
wr(s->u,52,8,rd(s->r,48,8));
L_1803dd128_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd128_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,52,8));
L_1803dd128_4:;
/* 1803dd129: push rdi */
L_1803dd129_0:;
L_1803dd129_1:;
wr(s->u,52,8,rd(s->r,56,8));
L_1803dd129_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd129_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,52,8));
L_1803dd129_4:;
/* 1803dd12a: push r12 */
L_1803dd12a_0:;
L_1803dd12a_1:;
wr(s->u,52,8,rd(s->r,160,8));
L_1803dd12a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd12a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,52,8));
L_1803dd12a_4:;
/* 1803dd12c: push r13 */
L_1803dd12c_0:;
L_1803dd12c_1:;
wr(s->u,52,8,rd(s->r,168,8));
L_1803dd12c_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd12c_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,52,8));
L_1803dd12c_4:;
/* 1803dd12e: push r14 */
L_1803dd12e_0:;
L_1803dd12e_1:;
wr(s->u,52,8,rd(s->r,176,8));
L_1803dd12e_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd12e_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,52,8));
L_1803dd12e_4:;
/* 1803dd130: push r15 */
L_1803dd130_0:;
L_1803dd130_1:;
wr(s->u,52,8,rd(s->r,184,8));
L_1803dd130_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd130_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,52,8));
L_1803dd130_4:;
/* 1803dd132: sub rsp, 0x80 */
L_1803dd132_0:;
L_1803dd132_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x80))));
L_1803dd132_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x80)),8,1));
L_1803dd132_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x80))));
L_1803dd132_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd132_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd132_6:;
wr(s->u,60,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd132_7:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803dd132_8:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803dd132_9:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803dd132_10:;
/* 1803dd139: mov qword ptr [rsp + 0x40], 0xfffffffffffffffe */
L_1803dd139_0:;
L_1803dd139_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dd139_2:;
wr(s->u,28,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803dd139_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803dd139_4:;
/* 1803dd142: mov qword ptr [r11 + 0x18], rbx */
L_1803dd142_0:;
L_1803dd142_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x18))));
L_1803dd142_2:;
wr(s->u,28,8,rd(s->r,24,8));
L_1803dd142_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,28,8));
L_1803dd142_4:;
/* 1803dd146: movaps xmmword ptr [rsp + 0x70], xmm6 */
L_1803dd146_0:;
L_1803dd146_1:;
wr(s->u,16,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dd146_2:;
wr(s->u,36,16,rd(s->r,4992,16));
L_1803dd146_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803dd146_4:;
/* 1803dd14b: movaps xmmword ptr [rsp + 0x60], xmm7 */
L_1803dd14b_0:;
L_1803dd14b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dd14b_2:;
wr(s->u,36,16,rd(s->r,5056,16));
L_1803dd14b_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803dd14b_4:;
/* 1803dd150: movaps xmmword ptr [r11 - 0x68], xmm8 */
L_1803dd150_0:;
L_1803dd150_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xffffffffffffff98))));
L_1803dd150_2:;
wr(s->u,36,16,rd(s->r,5120,16));
L_1803dd150_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,36,16));
L_1803dd150_4:;
/* 1803dd155: mov edi, r9d */
L_1803dd155_0:;
L_1803dd155_1:;
wr(s->r,56,4,rd(s->r,136,4));
L_1803dd155_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dd155_3:;
/* 1803dd158: mov rbx, rcx */
L_1803dd158_0:;
L_1803dd158_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dd158_2:;
/* 1803dd15b: lea rax, [rip + 0x42f696] */
L_1803dd15b_0:;
L_1803dd15b_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080c7f8)));
L_1803dd15b_2:;
/* 1803dd162: mov qword ptr [rcx], rax */
L_1803dd162_0:;
L_1803dd162_1:;
wr(s->u,28,8,rd(s->r,0,8));
L_1803dd162_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,28,8));
L_1803dd162_3:;
/* 1803dd165: lea rax, [rip + 0x42f60c] */
L_1803dd165_0:;
L_1803dd165_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080c778)));
L_1803dd165_2:;
/* 1803dd16c: mov qword ptr [rcx + 8], rax */
L_1803dd16c_0:;
L_1803dd16c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803dd16c_2:;
wr(s->u,28,8,rd(s->r,0,8));
L_1803dd16c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,28,8));
L_1803dd16c_4:;
/* 1803dd170: movss xmm0, dword ptr [rip + 0x27578c] */
L_1803dd170_0:;
L_1803dd170_1:;
wr(s->r,4608,4,mr(UINT64_C(0x180652904),4));
L_1803dd170_2:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dd170_3:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dd170_4:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dd170_5:;
/* 1803dd178: movss dword ptr [r11 + 0x10], xmm0 */
L_1803dd178_0:;
L_1803dd178_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x10))));
L_1803dd178_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803dd178_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dd178_4:;
/* 1803dd17e: movss dword ptr [rcx + 0x10], xmm2 */
L_1803dd17e_0:;
L_1803dd17e_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803dd17e_2:;
wr(s->u,24,4,rd(s->r,4736,4));
L_1803dd17e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dd17e_4:;
/* 1803dd183: mov dword ptr [rcx + 0x30], edx */
L_1803dd183_0:;
L_1803dd183_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x30))));
L_1803dd183_2:;
wr(s->u,24,4,rd(s->r,16,4));
L_1803dd183_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dd183_4:;
/* 1803dd186: xor esi, esi */
L_1803dd186_0:;
L_1803dd186_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd186_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd186_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803dd186_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803dd186_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd186_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803dd186_7:;
wr(s->u,60,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803dd186_8:;
wr(s->u,68,1,pop(rd(s->u,60,4),4));
L_1803dd186_9:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803dd186_10:;
wr(s->r,514,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803dd186_11:;
/* 1803dd188: mov qword ptr [rcx + 0x6718], rsi */
L_1803dd188_0:;
L_1803dd188_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x6718))));
L_1803dd188_2:;
wr(s->u,28,8,rd(s->r,48,8));
L_1803dd188_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,28,8));
L_1803dd188_4:;
/* 1803dd18f: mov dword ptr [rcx + 0x34], esi */
L_1803dd18f_0:;
L_1803dd18f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x34))));
L_1803dd18f_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd18f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dd18f_4:;
/* 1803dd192: mov dword ptr [rcx + 0xc0], esi */
L_1803dd192_0:;
L_1803dd192_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0xc0))));
L_1803dd192_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd192_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dd192_4:;
/* 1803dd198: mov ebp, 1 */
L_1803dd198_0:;
L_1803dd198_1:;
wr(s->r,40,8,((U)UINT64_C(0x1)));
L_1803dd198_2:;
/* 1803dd19d: mov dword ptr [rcx + 0xc4], ebp */
L_1803dd19d_0:;
L_1803dd19d_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0xc4))));
L_1803dd19d_2:;
wr(s->u,24,4,rd(s->r,40,4));
L_1803dd19d_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dd19d_4:;
/* 1803dd1a3: mov dword ptr [rcx + 0x78], esi */
L_1803dd1a3_0:;
L_1803dd1a3_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x78))));
L_1803dd1a3_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd1a3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dd1a3_4:;
return UINT64_C(0x1803dd1a6);
}
uint64_t b_1803dd1a6(CPU*s){
/* 1803dd1a6: mov dword ptr [rcx + 0x70], esi */
L_1803dd1a6_0:;
L_1803dd1a6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x70))));
L_1803dd1a6_2:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803dd1a6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd1a6_4:;
/* 1803dd1a9: mov dword ptr [rcx + 0x14], 0x44fa0000 */
L_1803dd1a9_0:;
L_1803dd1a9_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x14))));
L_1803dd1a9_2:;
wr(s->u,16,4,((U)UINT64_C(0x44fa0000)));
L_1803dd1a9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd1a9_4:;
/* 1803dd1b0: mov dword ptr [rcx + 0x18], 0x3f800000 */
L_1803dd1b0_0:;
L_1803dd1b0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1803dd1b0_2:;
wr(s->u,16,4,((U)UINT64_C(0x3f800000)));
L_1803dd1b0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd1b0_4:;
/* 1803dd1b7: mov dword ptr [rcx + 0x1c], 0x3f800000 */
L_1803dd1b7_0:;
L_1803dd1b7_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x1c))));
L_1803dd1b7_2:;
wr(s->u,16,4,((U)UINT64_C(0x3f800000)));
L_1803dd1b7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd1b7_4:;
/* 1803dd1be: mov dword ptr [rcx + 0x20], 0x3f800000 */
L_1803dd1be_0:;
L_1803dd1be_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x20))));
L_1803dd1be_2:;
wr(s->u,16,4,((U)UINT64_C(0x3f800000)));
L_1803dd1be_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd1be_4:;
/* 1803dd1c5: mov dword ptr [rcx + 0x24], 0x3f800000 */
L_1803dd1c5_0:;
L_1803dd1c5_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x24))));
L_1803dd1c5_2:;
wr(s->u,16,4,((U)UINT64_C(0x3f800000)));
L_1803dd1c5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd1c5_4:;
/* 1803dd1cc: mov dword ptr [rcx + 0x8c], esi */
L_1803dd1cc_0:;
L_1803dd1cc_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x8c))));
L_1803dd1cc_2:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803dd1cc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dd1cc_4:;
/* 1803dd1d2: mov dword ptr [rcx + 0x84], esi */
L_1803dd1d2_0:;
L_1803dd1d2_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x84))));
L_1803dd1d2_2:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803dd1d2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dd1d2_4:;
/* 1803dd1d8: mov dword ptr [rcx + 0x88], esi */
L_1803dd1d8_0:;
L_1803dd1d8_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x88))));
L_1803dd1d8_2:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803dd1d8_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dd1d8_4:;
/* 1803dd1de: mov dword ptr [rcx + 0x90], esi */
L_1803dd1de_0:;
L_1803dd1de_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x90))));
L_1803dd1de_2:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803dd1de_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dd1de_4:;
/* 1803dd1e4: mov qword ptr [rcx + 0x6700], rsi */
L_1803dd1e4_0:;
L_1803dd1e4_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x6700))));
L_1803dd1e4_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd1e4_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd1e4_4:;
/* 1803dd1eb: mov qword ptr [rcx + 0x6708], rsi */
L_1803dd1eb_0:;
L_1803dd1eb_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x6708))));
L_1803dd1eb_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd1eb_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd1eb_4:;
/* 1803dd1f2: mov dword ptr [rcx + 0x4c], esi */
L_1803dd1f2_0:;
L_1803dd1f2_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4c))));
L_1803dd1f2_2:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803dd1f2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd1f2_4:;
/* 1803dd1f5: mov dword ptr [rcx + 0x48], esi */
L_1803dd1f5_0:;
L_1803dd1f5_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x48))));
L_1803dd1f5_2:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803dd1f5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd1f5_4:;
/* 1803dd1f8: mov dword ptr [rcx + 0x50], esi */
L_1803dd1f8_0:;
L_1803dd1f8_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x50))));
L_1803dd1f8_2:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803dd1f8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd1f8_4:;
/* 1803dd1fb: mov qword ptr [rcx + 0xd0], rsi */
L_1803dd1fb_0:;
L_1803dd1fb_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0xd0))));
L_1803dd1fb_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd1fb_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd1fb_4:;
/* 1803dd202: mov dword ptr [rcx + 0x64], esi */
L_1803dd202_0:;
L_1803dd202_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x64))));
L_1803dd202_2:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803dd202_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd202_4:;
/* 1803dd205: mov dword ptr [rcx + 0x68], esi */
L_1803dd205_0:;
L_1803dd205_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x68))));
L_1803dd205_2:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803dd205_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd205_4:;
/* 1803dd208: mov dword ptr [rcx + 0xbc], esi */
L_1803dd208_0:;
L_1803dd208_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0xbc))));
L_1803dd208_2:;
wr(s->u,16,4,rd(s->r,48,4));
L_1803dd208_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dd208_4:;
/* 1803dd20e: movss xmm6, dword ptr [rip + 0x42f342] */
L_1803dd20e_0:;
L_1803dd20e_1:;
wr(s->r,4992,4,mr(UINT64_C(0x18080c558),4));
L_1803dd20e_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803dd20e_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803dd20e_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803dd20e_5:;
/* 1803dd216: comiss xmm2, xmm6 */
L_1803dd216_0:;
L_1803dd216_1:;
wr(s->u,29,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803dd216_2:;
wr(s->u,30,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dd216_3:;
wr(s->r,514,1,((rd(s->u,29,1)!=0)||(rd(s->u,30,1)!=0)));
L_1803dd216_4:;
wr(s->u,31,1,(fv(rd(s->r,4736,4),4)==fv(rd(s->r,4992,4),4)));
L_1803dd216_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,31,1)));
L_1803dd216_6:;
wr(s->u,32,1,(fv(rd(s->r,4736,4),4)<fv(rd(s->r,4992,4),4)));
L_1803dd216_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,32,1)));
L_1803dd216_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd216_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dd216_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dd216_11:;
/* 1803dd219: jae 0x1803dd224 */
L_1803dd219_0:;
L_1803dd219_1:;
wr(s->u,28,1,(!rd(s->r,512,1)));
L_1803dd219_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803dd224);}
L_1803dd219_3:;
return UINT64_C(0x1803dd21b);
}
uint64_t b_1803dd21b(CPU*s){
/* 1803dd21b: mov dword ptr [rcx + 0x3c], 0x400 */
L_1803dd21b_0:;
L_1803dd21b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803dd21b_2:;
wr(s->u,8,4,((U)UINT64_C(0x400)));
L_1803dd21b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dd21b_4:;
/* 1803dd222: jmp 0x1803dd261 */
L_1803dd222_0:;
L_1803dd222_1:;
return UINT64_C(0x1803dd261);
L_1803dd222_2:;
return UINT64_C(0x1803dd224);
}
uint64_t b_1803dd224(CPU*s){
/* 1803dd224: comiss xmm2, dword ptr [rip + 0x42f0fd] */
L_1803dd224_0:;
L_1803dd224_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803dd224_2:;
wr(s->u,2,1,isnan(fv(mr(UINT64_C(0x18080c328),4),4)));
L_1803dd224_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803dd224_4:;
wr(s->u,3,1,(fv(rd(s->r,4736,4),4)==fv(mr(UINT64_C(0x18080c328),4),4)));
L_1803dd224_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dd224_6:;
wr(s->u,4,1,(fv(rd(s->r,4736,4),4)<fv(mr(UINT64_C(0x18080c328),4),4)));
L_1803dd224_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803dd224_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd224_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dd224_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dd224_11:;
/* 1803dd22b: jae 0x1803dd236 */
L_1803dd22b_0:;
L_1803dd22b_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803dd22b_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dd236);}
L_1803dd22b_3:;
return UINT64_C(0x1803dd22d);
}
uint64_t b_1803dd22d(CPU*s){
/* 1803dd22d: mov dword ptr [rcx + 0x3c], 0x800 */
L_1803dd22d_0:;
L_1803dd22d_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803dd22d_2:;
wr(s->u,8,4,((U)UINT64_C(0x800)));
L_1803dd22d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dd22d_4:;
/* 1803dd234: jmp 0x1803dd261 */
L_1803dd234_0:;
L_1803dd234_1:;
return UINT64_C(0x1803dd261);
L_1803dd234_2:;
return UINT64_C(0x1803dd236);
}
uint64_t b_1803dd236(CPU*s){
/* 1803dd236: comiss xmm2, dword ptr [rip + 0x42f0e7] */
L_1803dd236_0:;
L_1803dd236_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803dd236_2:;
wr(s->u,2,1,isnan(fv(mr(UINT64_C(0x18080c324),4),4)));
L_1803dd236_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803dd236_4:;
wr(s->u,3,1,(fv(rd(s->r,4736,4),4)==fv(mr(UINT64_C(0x18080c324),4),4)));
L_1803dd236_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dd236_6:;
wr(s->u,4,1,(fv(rd(s->r,4736,4),4)<fv(mr(UINT64_C(0x18080c324),4),4)));
L_1803dd236_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803dd236_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd236_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dd236_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dd236_11:;
/* 1803dd23d: jae 0x1803dd248 */
L_1803dd23d_0:;
L_1803dd23d_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803dd23d_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dd248);}
L_1803dd23d_3:;
return UINT64_C(0x1803dd23f);
}
uint64_t b_1803dd23f(CPU*s){
/* 1803dd23f: mov dword ptr [rcx + 0x3c], 0x1000 */
L_1803dd23f_0:;
L_1803dd23f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803dd23f_2:;
wr(s->u,8,4,((U)UINT64_C(0x1000)));
L_1803dd23f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dd23f_4:;
/* 1803dd246: jmp 0x1803dd261 */
L_1803dd246_0:;
L_1803dd246_1:;
return UINT64_C(0x1803dd261);
L_1803dd246_2:;
return UINT64_C(0x1803dd248);
}
uint64_t b_1803dd248(CPU*s){
/* 1803dd248: comiss xmm2, dword ptr [rip + 0x42f0d1] */
L_1803dd248_0:;
L_1803dd248_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803dd248_2:;
wr(s->u,2,1,isnan(fv(mr(UINT64_C(0x18080c320),4),4)));
L_1803dd248_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803dd248_4:;
wr(s->u,3,1,(fv(rd(s->r,4736,4),4)==fv(mr(UINT64_C(0x18080c320),4),4)));
L_1803dd248_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dd248_6:;
wr(s->u,4,1,(fv(rd(s->r,4736,4),4)<fv(mr(UINT64_C(0x18080c320),4),4)));
L_1803dd248_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803dd248_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd248_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dd248_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dd248_11:;
/* 1803dd24f: jae 0x1803dd25a */
L_1803dd24f_0:;
L_1803dd24f_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803dd24f_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dd25a);}
L_1803dd24f_3:;
return UINT64_C(0x1803dd251);
}
uint64_t b_1803dd251(CPU*s){
/* 1803dd251: mov dword ptr [rcx + 0x3c], 0x2000 */
L_1803dd251_0:;
L_1803dd251_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803dd251_2:;
wr(s->u,8,4,((U)UINT64_C(0x2000)));
L_1803dd251_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dd251_4:;
/* 1803dd258: jmp 0x1803dd261 */
L_1803dd258_0:;
L_1803dd258_1:;
return UINT64_C(0x1803dd261);
L_1803dd258_2:;
return UINT64_C(0x1803dd25a);
}
uint64_t b_1803dd25a(CPU*s){
/* 1803dd25a: mov dword ptr [rcx + 0x3c], 0x4000 */
L_1803dd25a_0:;
L_1803dd25a_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803dd25a_2:;
wr(s->u,21,4,((U)UINT64_C(0x4000)));
L_1803dd25a_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,21,4));
L_1803dd25a_4:;
/* 1803dd261: mov ecx, dword ptr [rcx + 0x3c] */
L_1803dd261_0:;
L_1803dd261_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803dd261_2:;
wr(s->u,25,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dd261_3:;
wr(s->r,8,4,rd(s->u,25,4));
L_1803dd261_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd261_5:;
/* 1803dd264: movd xmm0, ecx */
L_1803dd264_0:;
L_1803dd264_1:;
wr(s->r,4608,16,rd(s->r,8,4));
L_1803dd264_2:;
/* 1803dd268: cvtdq2ps xmm0, xmm0 */
L_1803dd268_0:;
L_1803dd268_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dd268_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dd268_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dd268_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dd268_5:;
/* 1803dd26b: mulss xmm0, dword ptr [rip + 0x28290d] */
L_1803dd26b_0:;
L_1803dd26b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x18065fb80),4),4),4));
L_1803dd26b_2:;
/* 1803dd273: cvttss2si eax, xmm0 */
L_1803dd273_0:;
L_1803dd273_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803dd273_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd273_3:;
/* 1803dd277: mov dword ptr [rbx + 0x80], eax */
L_1803dd277_0:;
L_1803dd277_1:;
wr(s->u,13,8,(rd(s->r,24,8)+((U)UINT64_C(0x80))));
L_1803dd277_2:;
wr(s->u,21,4,rd(s->r,0,4));
L_1803dd277_3:;
mw((uint64_t)rd(s->u,13,8),4,rd(s->u,21,4));
L_1803dd277_4:;
/* 1803dd27d: sar ecx, 1 */
L_1803dd27d_0:;
L_1803dd27d_1:;
wr(s->u,84,4,(rd(s->r,8,4)&((U)UINT64_C(0x1))));
L_1803dd27d_2:;
wr(s->r,512,1,(rd(s->u,84,4)!=((U)UINT64_C(0x0))));
L_1803dd27d_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd27d_4:;
wr(s->r,8,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,8,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,8,4),4)>>((U)UINT64_C(0x1)))));
L_1803dd27d_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd27d_6:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd27d_7:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dd27d_8:;
wr(s->u,31,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dd27d_9:;
wr(s->u,35,1,pop(rd(s->u,31,4),4));
L_1803dd27d_10:;
wr(s->u,36,1,(rd(s->u,35,1)&((U)UINT64_C(0x1))));
L_1803dd27d_11:;
wr(s->r,514,1,(rd(s->u,36,1)==((U)UINT64_C(0x0))));
L_1803dd27d_12:;
/* 1803dd27f: mov dword ptr [rbx + 0x3c], ecx */
L_1803dd27f_0:;
L_1803dd27f_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dd27f_2:;
wr(s->u,21,4,rd(s->r,8,4));
L_1803dd27f_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,21,4));
L_1803dd27f_4:;
/* 1803dd282: mov dword ptr [rbx + 0x34], ecx */
L_1803dd282_0:;
L_1803dd282_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803dd282_2:;
wr(s->u,21,4,rd(s->r,8,4));
L_1803dd282_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,21,4));
L_1803dd282_4:;
/* 1803dd285: mov edx, ecx */
L_1803dd285_0:;
L_1803dd285_1:;
wr(s->r,16,4,rd(s->r,8,4));
L_1803dd285_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd285_3:;
/* 1803dd287: sar edx, 4 */
L_1803dd287_0:;
L_1803dd287_1:;
wr(s->u,88,4,(((U)UINT64_C(0x4))&((U)UINT64_C(0x1f))));
L_1803dd287_2:;
wr(s->u,92,4,rd(s->r,16,4));
L_1803dd287_3:;
wr(s->r,16,4,((rd(s->u,88,4)>=32)?(sx(rd(s->r,16,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,16,4),4)>>rd(s->u,88,4))));
L_1803dd287_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd287_5:;
wr(s->u,56,1,(rd(s->u,88,4)==((U)UINT64_C(0x0))));
L_1803dd287_6:;
wr(s->u,57,4,(rd(s->u,88,4)-((U)UINT64_C(0x1))));
L_1803dd287_7:;
wr(s->u,61,4,((rd(s->u,57,4)>=32)?(sx(rd(s->u,92,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,92,4),4)>>rd(s->u,57,4))));
L_1803dd287_8:;
wr(s->u,65,4,(rd(s->u,61,4)&((U)UINT64_C(0x1))));
L_1803dd287_9:;
wr(s->u,69,1,(rd(s->u,65,4)!=((U)UINT64_C(0x0))));
L_1803dd287_10:;
wr(s->u,0,1,rd(s->u,56,1));
L_1803dd287_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dd287_12:;
wr(s->u,2,1,(!rd(s->u,56,1)));
L_1803dd287_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dd287_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,69,1)));
L_1803dd287_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dd287_16:;
wr(s->u,70,1,(rd(s->u,88,4)==((U)UINT64_C(0x1))));
L_1803dd287_17:;
wr(s->u,0,1,rd(s->u,70,1));
L_1803dd287_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803dd287_19:;
wr(s->u,2,1,(!rd(s->u,70,1)));
L_1803dd287_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dd287_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dd287_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dd287_23:;
wr(s->u,37,1,(rd(s->u,88,4)!=((U)UINT64_C(0x0))));
L_1803dd287_24:;
wr(s->u,38,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd287_25:;
wr(s->u,39,1,(!rd(s->u,37,1)));
L_1803dd287_26:;
wr(s->u,40,1,(rd(s->u,39,1)&rd(s->r,519,1)));
L_1803dd287_27:;
wr(s->u,41,1,(rd(s->u,37,1)&rd(s->u,38,1)));
L_1803dd287_28:;
wr(s->r,519,1,(rd(s->u,40,1)|rd(s->u,41,1)));
L_1803dd287_29:;
wr(s->u,42,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dd287_30:;
wr(s->u,43,1,(!rd(s->u,37,1)));
L_1803dd287_31:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,518,1)));
L_1803dd287_32:;
wr(s->u,45,1,(rd(s->u,37,1)&rd(s->u,42,1)));
L_1803dd287_33:;
wr(s->r,518,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803dd287_34:;
wr(s->u,46,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dd287_35:;
wr(s->u,50,1,pop(rd(s->u,46,4),4));
L_1803dd287_36:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803dd287_37:;
wr(s->u,52,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803dd287_38:;
wr(s->u,53,1,(!rd(s->u,37,1)));
L_1803dd287_39:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,514,1)));
L_1803dd287_40:;
wr(s->u,55,1,(rd(s->u,37,1)&rd(s->u,52,1)));
L_1803dd287_41:;
wr(s->r,514,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803dd287_42:;
/* 1803dd28a: sar ecx, 1 */
L_1803dd28a_0:;
L_1803dd28a_1:;
wr(s->u,84,4,(rd(s->r,8,4)&((U)UINT64_C(0x1))));
L_1803dd28a_2:;
wr(s->r,512,1,(rd(s->u,84,4)!=((U)UINT64_C(0x0))));
L_1803dd28a_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd28a_4:;
wr(s->r,8,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,8,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,8,4),4)>>((U)UINT64_C(0x1)))));
L_1803dd28a_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd28a_6:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd28a_7:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dd28a_8:;
wr(s->u,31,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dd28a_9:;
wr(s->u,35,1,pop(rd(s->u,31,4),4));
L_1803dd28a_10:;
wr(s->u,36,1,(rd(s->u,35,1)&((U)UINT64_C(0x1))));
L_1803dd28a_11:;
wr(s->r,514,1,(rd(s->u,36,1)==((U)UINT64_C(0x0))));
L_1803dd28a_12:;
/* 1803dd28c: mov eax, ecx */
L_1803dd28c_0:;
L_1803dd28c_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803dd28c_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd28c_3:;
/* 1803dd28e: cmp edx, ecx */
L_1803dd28e_0:;
L_1803dd28e_1:;
wr(s->u,76,4,rd(s->r,8,4));
L_1803dd28e_2:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,76,4)));
L_1803dd28e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,76,4),4,1));
L_1803dd28e_4:;
wr(s->u,80,4,(rd(s->r,16,4)-rd(s->u,76,4)));
L_1803dd28e_5:;
wr(s->r,519,1,(sx(rd(s->u,80,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd28e_6:;
wr(s->r,518,1,(rd(s->u,80,4)==((U)UINT64_C(0x0))));
L_1803dd28e_7:;
wr(s->u,31,4,(rd(s->u,80,4)&((U)UINT64_C(0xff))));
L_1803dd28e_8:;
wr(s->u,35,1,pop(rd(s->u,31,4),4));
L_1803dd28e_9:;
wr(s->u,36,1,(rd(s->u,35,1)&((U)UINT64_C(0x1))));
L_1803dd28e_10:;
wr(s->r,514,1,(rd(s->u,36,1)==((U)UINT64_C(0x0))));
L_1803dd28e_11:;
/* 1803dd290: cmovl eax, edx */
L_1803dd290_0:;
L_1803dd290_1:;
wr(s->u,29,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd290_2:;
wr(s->u,71,4,rd(s->r,16,4));
L_1803dd290_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd290_4:;
wr(s->u,75,1,(!rd(s->u,29,1)));
L_1803dd290_5:;
if(rd(s->u,75,1)){goto L_1803dd293_0;}
L_1803dd290_6:;
wr(s->r,0,4,rd(s->u,71,4));
L_1803dd290_7:;
/* 1803dd293: cmp eax, ebp */
L_1803dd293_0:;
L_1803dd293_1:;
wr(s->u,76,4,rd(s->r,40,4));
L_1803dd293_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,76,4)));
L_1803dd293_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,76,4),4,1));
L_1803dd293_4:;
wr(s->u,80,4,(rd(s->r,0,4)-rd(s->u,76,4)));
L_1803dd293_5:;
wr(s->r,519,1,(sx(rd(s->u,80,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd293_6:;
wr(s->r,518,1,(rd(s->u,80,4)==((U)UINT64_C(0x0))));
L_1803dd293_7:;
wr(s->u,31,4,(rd(s->u,80,4)&((U)UINT64_C(0xff))));
L_1803dd293_8:;
wr(s->u,35,1,pop(rd(s->u,31,4),4));
L_1803dd293_9:;
wr(s->u,36,1,(rd(s->u,35,1)&((U)UINT64_C(0x1))));
L_1803dd293_10:;
wr(s->r,514,1,(rd(s->u,36,1)==((U)UINT64_C(0x0))));
L_1803dd293_11:;
/* 1803dd295: jge 0x1803dd29b */
L_1803dd295_0:;
L_1803dd295_1:;
wr(s->u,30,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dd295_2:;
if(rd(s->u,30,1)){return UINT64_C(0x1803dd29b);}
L_1803dd295_3:;
return UINT64_C(0x1803dd297);
}
uint64_t b_1803dd261(CPU*s){
/* 1803dd261: mov ecx, dword ptr [rcx + 0x3c] */
L_1803dd261_0:;
L_1803dd261_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x3c))));
L_1803dd261_2:;
wr(s->u,25,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dd261_3:;
wr(s->r,8,4,rd(s->u,25,4));
L_1803dd261_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd261_5:;
/* 1803dd264: movd xmm0, ecx */
L_1803dd264_0:;
L_1803dd264_1:;
wr(s->r,4608,16,rd(s->r,8,4));
L_1803dd264_2:;
/* 1803dd268: cvtdq2ps xmm0, xmm0 */
L_1803dd268_0:;
L_1803dd268_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dd268_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dd268_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dd268_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dd268_5:;
/* 1803dd26b: mulss xmm0, dword ptr [rip + 0x28290d] */
L_1803dd26b_0:;
L_1803dd26b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x18065fb80),4),4),4));
L_1803dd26b_2:;
/* 1803dd273: cvttss2si eax, xmm0 */
L_1803dd273_0:;
L_1803dd273_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803dd273_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd273_3:;
/* 1803dd277: mov dword ptr [rbx + 0x80], eax */
L_1803dd277_0:;
L_1803dd277_1:;
wr(s->u,13,8,(rd(s->r,24,8)+((U)UINT64_C(0x80))));
L_1803dd277_2:;
wr(s->u,21,4,rd(s->r,0,4));
L_1803dd277_3:;
mw((uint64_t)rd(s->u,13,8),4,rd(s->u,21,4));
L_1803dd277_4:;
/* 1803dd27d: sar ecx, 1 */
L_1803dd27d_0:;
L_1803dd27d_1:;
wr(s->u,84,4,(rd(s->r,8,4)&((U)UINT64_C(0x1))));
L_1803dd27d_2:;
wr(s->r,512,1,(rd(s->u,84,4)!=((U)UINT64_C(0x0))));
L_1803dd27d_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd27d_4:;
wr(s->r,8,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,8,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,8,4),4)>>((U)UINT64_C(0x1)))));
L_1803dd27d_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd27d_6:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd27d_7:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dd27d_8:;
wr(s->u,31,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dd27d_9:;
wr(s->u,35,1,pop(rd(s->u,31,4),4));
L_1803dd27d_10:;
wr(s->u,36,1,(rd(s->u,35,1)&((U)UINT64_C(0x1))));
L_1803dd27d_11:;
wr(s->r,514,1,(rd(s->u,36,1)==((U)UINT64_C(0x0))));
L_1803dd27d_12:;
/* 1803dd27f: mov dword ptr [rbx + 0x3c], ecx */
L_1803dd27f_0:;
L_1803dd27f_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dd27f_2:;
wr(s->u,21,4,rd(s->r,8,4));
L_1803dd27f_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,21,4));
L_1803dd27f_4:;
/* 1803dd282: mov dword ptr [rbx + 0x34], ecx */
L_1803dd282_0:;
L_1803dd282_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803dd282_2:;
wr(s->u,21,4,rd(s->r,8,4));
L_1803dd282_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,21,4));
L_1803dd282_4:;
/* 1803dd285: mov edx, ecx */
L_1803dd285_0:;
L_1803dd285_1:;
wr(s->r,16,4,rd(s->r,8,4));
L_1803dd285_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd285_3:;
/* 1803dd287: sar edx, 4 */
L_1803dd287_0:;
L_1803dd287_1:;
wr(s->u,88,4,(((U)UINT64_C(0x4))&((U)UINT64_C(0x1f))));
L_1803dd287_2:;
wr(s->u,92,4,rd(s->r,16,4));
L_1803dd287_3:;
wr(s->r,16,4,((rd(s->u,88,4)>=32)?(sx(rd(s->r,16,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,16,4),4)>>rd(s->u,88,4))));
L_1803dd287_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd287_5:;
wr(s->u,56,1,(rd(s->u,88,4)==((U)UINT64_C(0x0))));
L_1803dd287_6:;
wr(s->u,57,4,(rd(s->u,88,4)-((U)UINT64_C(0x1))));
L_1803dd287_7:;
wr(s->u,61,4,((rd(s->u,57,4)>=32)?(sx(rd(s->u,92,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,92,4),4)>>rd(s->u,57,4))));
L_1803dd287_8:;
wr(s->u,65,4,(rd(s->u,61,4)&((U)UINT64_C(0x1))));
L_1803dd287_9:;
wr(s->u,69,1,(rd(s->u,65,4)!=((U)UINT64_C(0x0))));
L_1803dd287_10:;
wr(s->u,0,1,rd(s->u,56,1));
L_1803dd287_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dd287_12:;
wr(s->u,2,1,(!rd(s->u,56,1)));
L_1803dd287_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dd287_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,69,1)));
L_1803dd287_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dd287_16:;
wr(s->u,70,1,(rd(s->u,88,4)==((U)UINT64_C(0x1))));
L_1803dd287_17:;
wr(s->u,0,1,rd(s->u,70,1));
L_1803dd287_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803dd287_19:;
wr(s->u,2,1,(!rd(s->u,70,1)));
L_1803dd287_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dd287_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dd287_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dd287_23:;
wr(s->u,37,1,(rd(s->u,88,4)!=((U)UINT64_C(0x0))));
L_1803dd287_24:;
wr(s->u,38,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd287_25:;
wr(s->u,39,1,(!rd(s->u,37,1)));
L_1803dd287_26:;
wr(s->u,40,1,(rd(s->u,39,1)&rd(s->r,519,1)));
L_1803dd287_27:;
wr(s->u,41,1,(rd(s->u,37,1)&rd(s->u,38,1)));
L_1803dd287_28:;
wr(s->r,519,1,(rd(s->u,40,1)|rd(s->u,41,1)));
L_1803dd287_29:;
wr(s->u,42,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dd287_30:;
wr(s->u,43,1,(!rd(s->u,37,1)));
L_1803dd287_31:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,518,1)));
L_1803dd287_32:;
wr(s->u,45,1,(rd(s->u,37,1)&rd(s->u,42,1)));
L_1803dd287_33:;
wr(s->r,518,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803dd287_34:;
wr(s->u,46,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dd287_35:;
wr(s->u,50,1,pop(rd(s->u,46,4),4));
L_1803dd287_36:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803dd287_37:;
wr(s->u,52,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803dd287_38:;
wr(s->u,53,1,(!rd(s->u,37,1)));
L_1803dd287_39:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,514,1)));
L_1803dd287_40:;
wr(s->u,55,1,(rd(s->u,37,1)&rd(s->u,52,1)));
L_1803dd287_41:;
wr(s->r,514,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803dd287_42:;
/* 1803dd28a: sar ecx, 1 */
L_1803dd28a_0:;
L_1803dd28a_1:;
wr(s->u,84,4,(rd(s->r,8,4)&((U)UINT64_C(0x1))));
L_1803dd28a_2:;
wr(s->r,512,1,(rd(s->u,84,4)!=((U)UINT64_C(0x0))));
L_1803dd28a_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd28a_4:;
wr(s->r,8,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,8,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,8,4),4)>>((U)UINT64_C(0x1)))));
L_1803dd28a_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd28a_6:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd28a_7:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dd28a_8:;
wr(s->u,31,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dd28a_9:;
wr(s->u,35,1,pop(rd(s->u,31,4),4));
L_1803dd28a_10:;
wr(s->u,36,1,(rd(s->u,35,1)&((U)UINT64_C(0x1))));
L_1803dd28a_11:;
wr(s->r,514,1,(rd(s->u,36,1)==((U)UINT64_C(0x0))));
L_1803dd28a_12:;
/* 1803dd28c: mov eax, ecx */
L_1803dd28c_0:;
L_1803dd28c_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1803dd28c_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd28c_3:;
/* 1803dd28e: cmp edx, ecx */
L_1803dd28e_0:;
L_1803dd28e_1:;
wr(s->u,76,4,rd(s->r,8,4));
L_1803dd28e_2:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,76,4)));
L_1803dd28e_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,76,4),4,1));
L_1803dd28e_4:;
wr(s->u,80,4,(rd(s->r,16,4)-rd(s->u,76,4)));
L_1803dd28e_5:;
wr(s->r,519,1,(sx(rd(s->u,80,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd28e_6:;
wr(s->r,518,1,(rd(s->u,80,4)==((U)UINT64_C(0x0))));
L_1803dd28e_7:;
wr(s->u,31,4,(rd(s->u,80,4)&((U)UINT64_C(0xff))));
L_1803dd28e_8:;
wr(s->u,35,1,pop(rd(s->u,31,4),4));
L_1803dd28e_9:;
wr(s->u,36,1,(rd(s->u,35,1)&((U)UINT64_C(0x1))));
L_1803dd28e_10:;
wr(s->r,514,1,(rd(s->u,36,1)==((U)UINT64_C(0x0))));
L_1803dd28e_11:;
/* 1803dd290: cmovl eax, edx */
L_1803dd290_0:;
L_1803dd290_1:;
wr(s->u,29,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd290_2:;
wr(s->u,71,4,rd(s->r,16,4));
L_1803dd290_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd290_4:;
wr(s->u,75,1,(!rd(s->u,29,1)));
L_1803dd290_5:;
if(rd(s->u,75,1)){goto L_1803dd293_0;}
L_1803dd290_6:;
wr(s->r,0,4,rd(s->u,71,4));
L_1803dd290_7:;
/* 1803dd293: cmp eax, ebp */
L_1803dd293_0:;
L_1803dd293_1:;
wr(s->u,76,4,rd(s->r,40,4));
L_1803dd293_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,76,4)));
L_1803dd293_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,76,4),4,1));
L_1803dd293_4:;
wr(s->u,80,4,(rd(s->r,0,4)-rd(s->u,76,4)));
L_1803dd293_5:;
wr(s->r,519,1,(sx(rd(s->u,80,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd293_6:;
wr(s->r,518,1,(rd(s->u,80,4)==((U)UINT64_C(0x0))));
L_1803dd293_7:;
wr(s->u,31,4,(rd(s->u,80,4)&((U)UINT64_C(0xff))));
L_1803dd293_8:;
wr(s->u,35,1,pop(rd(s->u,31,4),4));
L_1803dd293_9:;
wr(s->u,36,1,(rd(s->u,35,1)&((U)UINT64_C(0x1))));
L_1803dd293_10:;
wr(s->r,514,1,(rd(s->u,36,1)==((U)UINT64_C(0x0))));
L_1803dd293_11:;
/* 1803dd295: jge 0x1803dd29b */
L_1803dd295_0:;
L_1803dd295_1:;
wr(s->u,30,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dd295_2:;
if(rd(s->u,30,1)){return UINT64_C(0x1803dd29b);}
L_1803dd295_3:;
return UINT64_C(0x1803dd297);
}
uint64_t b_1803dd293(CPU*s){
/* 1803dd293: cmp eax, ebp */
L_1803dd293_0:;
L_1803dd293_1:;
wr(s->u,7,4,rd(s->r,40,4));
L_1803dd293_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,7,4)));
L_1803dd293_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,7,4),4,1));
L_1803dd293_4:;
wr(s->u,11,4,(rd(s->r,0,4)-rd(s->u,7,4)));
L_1803dd293_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd293_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803dd293_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803dd293_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dd293_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dd293_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dd293_11:;
/* 1803dd295: jge 0x1803dd29b */
L_1803dd295_0:;
L_1803dd295_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dd295_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dd29b);}
L_1803dd295_3:;
return UINT64_C(0x1803dd297);
}
uint64_t b_1803dd297(CPU*s){
/* 1803dd297: mov ecx, ebp */
L_1803dd297_0:;
L_1803dd297_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803dd297_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd297_3:;
/* 1803dd299: jmp 0x1803dd2a0 */
L_1803dd299_0:;
L_1803dd299_1:;
return UINT64_C(0x1803dd2a0);
L_1803dd299_2:;
return UINT64_C(0x1803dd29b);
}
uint64_t b_1803dd29b(CPU*s){
/* 1803dd29b: cmp edx, ecx */
L_1803dd29b_0:;
L_1803dd29b_1:;
wr(s->u,24,4,rd(s->r,8,4));
L_1803dd29b_2:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,24,4)));
L_1803dd29b_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,24,4),4,1));
L_1803dd29b_4:;
wr(s->u,28,4,(rd(s->r,16,4)-rd(s->u,24,4)));
L_1803dd29b_5:;
wr(s->r,519,1,(sx(rd(s->u,28,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd29b_6:;
wr(s->r,518,1,(rd(s->u,28,4)==((U)UINT64_C(0x0))));
L_1803dd29b_7:;
wr(s->u,13,4,(rd(s->u,28,4)&((U)UINT64_C(0xff))));
L_1803dd29b_8:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dd29b_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dd29b_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dd29b_11:;
/* 1803dd29d: cmovl ecx, edx */
L_1803dd29d_0:;
L_1803dd29d_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd29d_2:;
wr(s->u,19,4,rd(s->r,16,4));
L_1803dd29d_3:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd29d_4:;
wr(s->u,23,1,(!rd(s->u,12,1)));
L_1803dd29d_5:;
if(rd(s->u,23,1)){goto L_1803dd2a0_0;}
L_1803dd29d_6:;
wr(s->r,8,4,rd(s->u,19,4));
L_1803dd29d_7:;
/* 1803dd2a0: mov dword ptr [rbx + 0x54], ecx */
L_1803dd2a0_0:;
L_1803dd2a0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x54))));
L_1803dd2a0_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803dd2a0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dd2a0_4:;
/* 1803dd2a3: mov ecx, 0x3d8 */
L_1803dd2a3_0:;
L_1803dd2a3_1:;
wr(s->r,8,8,((U)UINT64_C(0x3d8)));
L_1803dd2a3_2:;
/* 1803dd2a8: call 0x180003140 */
L_1803dd2a8_0:;
L_1803dd2a8_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd2a8_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd2ad)));
L_1803dd2a8_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803dd2a8_4:;
return UINT64_C(0x1803dd2ad);
}
uint64_t b_1803dd2a0(CPU*s){
/* 1803dd2a0: mov dword ptr [rbx + 0x54], ecx */
L_1803dd2a0_0:;
L_1803dd2a0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x54))));
L_1803dd2a0_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803dd2a0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dd2a0_4:;
/* 1803dd2a3: mov ecx, 0x3d8 */
L_1803dd2a3_0:;
L_1803dd2a3_1:;
wr(s->r,8,8,((U)UINT64_C(0x3d8)));
L_1803dd2a3_2:;
/* 1803dd2a8: call 0x180003140 */
L_1803dd2a8_0:;
L_1803dd2a8_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd2a8_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd2ad)));
L_1803dd2a8_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803dd2a8_4:;
return UINT64_C(0x1803dd2ad);
}
uint64_t b_1803dd2ad(CPU*s){
/* 1803dd2ad: mov qword ptr [rsp + 0x48], rax */
L_1803dd2ad_0:;
L_1803dd2ad_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803dd2ad_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803dd2ad_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dd2ad_4:;
/* 1803dd2b2: test rax, rax */
L_1803dd2b2_0:;
L_1803dd2b2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd2b2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd2b2_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803dd2b2_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd2b2_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803dd2b2_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803dd2b2_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dd2b2_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dd2b2_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dd2b2_10:;
/* 1803dd2b5: je 0x1803dd2e0 */
L_1803dd2b5_0:;
L_1803dd2b5_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd2e0);}
L_1803dd2b5_2:;
return UINT64_C(0x1803dd2b7);
}
uint64_t b_1803dd2b7(CPU*s){
/* 1803dd2b7: mov ecx, esi */
L_1803dd2b7_0:;
L_1803dd2b7_1:;
wr(s->r,8,4,rd(s->r,48,4));
L_1803dd2b7_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd2b7_3:;
/* 1803dd2b9: mov edx, 2 */
L_1803dd2b9_0:;
L_1803dd2b9_1:;
wr(s->r,16,8,((U)UINT64_C(0x2)));
L_1803dd2b9_2:;
/* 1803dd2be: test edi, edi */
L_1803dd2be_0:;
L_1803dd2be_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd2be_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd2be_3:;
wr(s->u,35,4,(rd(s->r,56,4)&rd(s->r,56,4)));
L_1803dd2be_4:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd2be_5:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803dd2be_6:;
wr(s->u,24,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803dd2be_7:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803dd2be_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803dd2be_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803dd2be_10:;
/* 1803dd2c0: cmove ecx, edx */
L_1803dd2c0_0:;
L_1803dd2c0_1:;
wr(s->u,30,4,rd(s->r,16,4));
L_1803dd2c0_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd2c0_3:;
wr(s->u,34,1,(!rd(s->r,518,1)));
L_1803dd2c0_4:;
if(rd(s->u,34,1)){goto L_1803dd2c3_0;}
L_1803dd2c0_5:;
wr(s->r,8,4,rd(s->u,30,4));
L_1803dd2c0_6:;
/* 1803dd2c3: mov dword ptr [rsp + 0x20], ecx */
L_1803dd2c3_0:;
L_1803dd2c3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dd2c3_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803dd2c3_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dd2c3_4:;
/* 1803dd2c7: movss xmm3, dword ptr [rbx + 0x10] */
L_1803dd2c7_0:;
L_1803dd2c7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803dd2c7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd2c7_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803dd2c7_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803dd2c7_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803dd2c7_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803dd2c7_7:;
/* 1803dd2cc: mov r8d, dword ptr [rbx + 0x30] */
L_1803dd2cc_0:;
L_1803dd2cc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd2cc_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd2cc_3:;
wr(s->r,128,4,rd(s->u,20,4));
L_1803dd2cc_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dd2cc_5:;
/* 1803dd2d0: mov edx, dword ptr [rbx + 0x54] */
L_1803dd2d0_0:;
L_1803dd2d0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x54))));
L_1803dd2d0_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd2d0_3:;
wr(s->r,16,4,rd(s->u,20,4));
L_1803dd2d0_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd2d0_5:;
/* 1803dd2d3: mov rcx, rax */
L_1803dd2d3_0:;
L_1803dd2d3_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dd2d3_2:;
/* 1803dd2d6: call 0x1803dab20 */
L_1803dd2d6_0:;
L_1803dd2d6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd2d6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd2db)));
L_1803dd2d6_3:;
return (uint64_t)UINT64_C(0x1803dab20);
L_1803dd2d6_4:;
return UINT64_C(0x1803dd2db);
}
uint64_t b_1803dd2c3(CPU*s){
/* 1803dd2c3: mov dword ptr [rsp + 0x20], ecx */
L_1803dd2c3_0:;
L_1803dd2c3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dd2c3_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803dd2c3_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dd2c3_4:;
/* 1803dd2c7: movss xmm3, dword ptr [rbx + 0x10] */
L_1803dd2c7_0:;
L_1803dd2c7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803dd2c7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd2c7_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803dd2c7_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803dd2c7_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803dd2c7_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803dd2c7_7:;
/* 1803dd2cc: mov r8d, dword ptr [rbx + 0x30] */
L_1803dd2cc_0:;
L_1803dd2cc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd2cc_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd2cc_3:;
wr(s->r,128,4,rd(s->u,20,4));
L_1803dd2cc_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dd2cc_5:;
/* 1803dd2d0: mov edx, dword ptr [rbx + 0x54] */
L_1803dd2d0_0:;
L_1803dd2d0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x54))));
L_1803dd2d0_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd2d0_3:;
wr(s->r,16,4,rd(s->u,20,4));
L_1803dd2d0_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd2d0_5:;
/* 1803dd2d3: mov rcx, rax */
L_1803dd2d3_0:;
L_1803dd2d3_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dd2d3_2:;
/* 1803dd2d6: call 0x1803dab20 */
L_1803dd2d6_0:;
L_1803dd2d6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd2d6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd2db)));
L_1803dd2d6_3:;
return (uint64_t)UINT64_C(0x1803dab20);
L_1803dd2d6_4:;
return UINT64_C(0x1803dd2db);
}
uint64_t b_1803dd2db(CPU*s){
/* 1803dd2db: mov rcx, rax */
L_1803dd2db_0:;
L_1803dd2db_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dd2db_2:;
/* 1803dd2de: jmp 0x1803dd2e3 */
L_1803dd2de_0:;
L_1803dd2de_1:;
return UINT64_C(0x1803dd2e3);
L_1803dd2de_2:;
return UINT64_C(0x1803dd2e0);
}
uint64_t b_1803dd2e0(CPU*s){
/* 1803dd2e0: mov rcx, rsi */
L_1803dd2e0_0:;
L_1803dd2e0_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803dd2e0_2:;
/* 1803dd2e3: mov qword ptr [rbx + 0x66f0], rcx */
L_1803dd2e3_0:;
L_1803dd2e3_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dd2e3_2:;
wr(s->u,24,8,rd(s->r,8,8));
L_1803dd2e3_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,24,8));
L_1803dd2e3_4:;
/* 1803dd2ea: mov rax, qword ptr [rcx] */
L_1803dd2ea_0:;
L_1803dd2ea_1:;
wr(s->u,32,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dd2ea_2:;
wr(s->r,0,8,rd(s->u,32,8));
L_1803dd2ea_3:;
/* 1803dd2ed: xor r9d, r9d */
L_1803dd2ed_0:;
L_1803dd2ed_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd2ed_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd2ed_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803dd2ed_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dd2ed_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd2ed_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dd2ed_7:;
wr(s->u,40,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dd2ed_8:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803dd2ed_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803dd2ed_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803dd2ed_11:;
/* 1803dd2f0: movss xmm8, dword ptr [rip + 0x26f94b] */
L_1803dd2f0_0:;
L_1803dd2f0_1:;
wr(s->r,5120,4,mr(UINT64_C(0x18064cc44),4));
L_1803dd2f0_2:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803dd2f0_3:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803dd2f0_4:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803dd2f0_5:;
/* 1803dd2f9: movaps xmm2, xmm8 */
L_1803dd2f9_0:;
L_1803dd2f9_1:;
wr(s->r,4736,4,rd(s->r,5120,4));
L_1803dd2f9_2:;
wr(s->r,4740,4,rd(s->r,5124,4));
L_1803dd2f9_3:;
wr(s->r,4744,4,rd(s->r,5128,4));
L_1803dd2f9_4:;
wr(s->r,4748,4,rd(s->r,5132,4));
L_1803dd2f9_5:;
/* 1803dd2fd: lea rdx, [rsp + 0xc8] */
L_1803dd2fd_0:;
L_1803dd2fd_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803dd2fd_2:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803dd2fd_3:;
/* 1803dd305: call qword ptr [rax + 0x28] */
L_1803dd305_0:;
L_1803dd305_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803dd305_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd305_3:;
wr(s->u,46,8,rd(s->u,32,8));
L_1803dd305_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd305_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd308)));
L_1803dd305_6:;
return (uint64_t)rd(s->u,46,8);
L_1803dd305_7:;
return UINT64_C(0x1803dd308);
}
uint64_t b_1803dd2e3(CPU*s){
/* 1803dd2e3: mov qword ptr [rbx + 0x66f0], rcx */
L_1803dd2e3_0:;
L_1803dd2e3_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dd2e3_2:;
wr(s->u,24,8,rd(s->r,8,8));
L_1803dd2e3_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,24,8));
L_1803dd2e3_4:;
/* 1803dd2ea: mov rax, qword ptr [rcx] */
L_1803dd2ea_0:;
L_1803dd2ea_1:;
wr(s->u,32,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dd2ea_2:;
wr(s->r,0,8,rd(s->u,32,8));
L_1803dd2ea_3:;
/* 1803dd2ed: xor r9d, r9d */
L_1803dd2ed_0:;
L_1803dd2ed_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd2ed_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd2ed_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803dd2ed_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dd2ed_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd2ed_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dd2ed_7:;
wr(s->u,40,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dd2ed_8:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803dd2ed_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803dd2ed_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803dd2ed_11:;
/* 1803dd2f0: movss xmm8, dword ptr [rip + 0x26f94b] */
L_1803dd2f0_0:;
L_1803dd2f0_1:;
wr(s->r,5120,4,mr(UINT64_C(0x18064cc44),4));
L_1803dd2f0_2:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803dd2f0_3:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803dd2f0_4:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803dd2f0_5:;
/* 1803dd2f9: movaps xmm2, xmm8 */
L_1803dd2f9_0:;
L_1803dd2f9_1:;
wr(s->r,4736,4,rd(s->r,5120,4));
L_1803dd2f9_2:;
wr(s->r,4740,4,rd(s->r,5124,4));
L_1803dd2f9_3:;
wr(s->r,4744,4,rd(s->r,5128,4));
L_1803dd2f9_4:;
wr(s->r,4748,4,rd(s->r,5132,4));
L_1803dd2f9_5:;
/* 1803dd2fd: lea rdx, [rsp + 0xc8] */
L_1803dd2fd_0:;
L_1803dd2fd_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803dd2fd_2:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803dd2fd_3:;
/* 1803dd305: call qword ptr [rax + 0x28] */
L_1803dd305_0:;
L_1803dd305_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803dd305_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd305_3:;
wr(s->u,46,8,rd(s->u,32,8));
L_1803dd305_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd305_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd308)));
L_1803dd305_6:;
return (uint64_t)rd(s->u,46,8);
L_1803dd305_7:;
return UINT64_C(0x1803dd308);
}
uint64_t b_1803dd308(CPU*s){
/* 1803dd308: lea rcx, [rbx + 0x66f8] */
L_1803dd308_0:;
L_1803dd308_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f8))));
L_1803dd308_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803dd308_3:;
/* 1803dd30f: call 0x1803dda90 */
L_1803dd30f_0:;
L_1803dd30f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd30f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd314)));
L_1803dd30f_3:;
return (uint64_t)UINT64_C(0x1803dda90);
L_1803dd30f_4:;
return UINT64_C(0x1803dd314);
}
uint64_t b_1803dd314(CPU*s){
/* 1803dd314: mov rcx, qword ptr [rbx + 0x66f8] */
L_1803dd314_0:;
L_1803dd314_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f8))));
L_1803dd314_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd314_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dd314_4:;
/* 1803dd31b: mov rax, qword ptr [rcx] */
L_1803dd31b_0:;
L_1803dd31b_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dd31b_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dd31b_3:;
/* 1803dd31e: mov edx, 0x800 */
L_1803dd31e_0:;
L_1803dd31e_1:;
wr(s->r,16,8,((U)UINT64_C(0x800)));
L_1803dd31e_2:;
/* 1803dd323: call qword ptr [rax + 0x18] */
L_1803dd323_0:;
L_1803dd323_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803dd323_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd323_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dd323_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd323_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd326)));
L_1803dd323_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dd323_7:;
return UINT64_C(0x1803dd326);
}
uint64_t b_1803dd326(CPU*s){
/* 1803dd326: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dd326_0:;
L_1803dd326_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dd326_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd326_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dd326_4:;
/* 1803dd32d: call 0x1803da8c0 */
L_1803dd32d_0:;
L_1803dd32d_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd32d_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd332)));
L_1803dd32d_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803dd32d_4:;
return UINT64_C(0x1803dd332);
}
uint64_t b_1803dd332(CPU*s){
/* 1803dd332: sar eax, 1 */
L_1803dd332_0:;
L_1803dd332_1:;
wr(s->u,23,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dd332_2:;
wr(s->r,512,1,(rd(s->u,23,4)!=((U)UINT64_C(0x0))));
L_1803dd332_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd332_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dd332_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd332_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd332_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd332_8:;
wr(s->u,13,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd332_9:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dd332_10:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dd332_11:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dd332_12:;
/* 1803dd334: mov dword ptr [rbx + 0x58], eax */
L_1803dd334_0:;
L_1803dd334_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x58))));
L_1803dd334_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dd334_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dd334_4:;
/* 1803dd337: comiss xmm6, dword ptr [rbx + 0x10] */
L_1803dd337_0:;
L_1803dd337_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803dd337_2:;
wr(s->u,19,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dd337_3:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd337_4:;
wr(s->u,20,1,isnan(fv(rd(s->u,8,4),4)));
L_1803dd337_5:;
wr(s->r,514,1,((rd(s->u,19,1)!=0)||(rd(s->u,20,1)!=0)));
L_1803dd337_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd337_7:;
wr(s->u,21,1,(fv(rd(s->r,4992,4),4)==fv(rd(s->u,8,4),4)));
L_1803dd337_8:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,21,1)));
L_1803dd337_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd337_10:;
wr(s->u,22,1,(fv(rd(s->r,4992,4),4)<fv(rd(s->u,8,4),4)));
L_1803dd337_11:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,22,1)));
L_1803dd337_12:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd337_13:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dd337_14:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dd337_15:;
/* 1803dd33b: jbe 0x1803dd342 */
L_1803dd33b_0:;
L_1803dd33b_1:;
wr(s->u,12,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803dd33b_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dd342);}
L_1803dd33b_3:;
return UINT64_C(0x1803dd33d);
}
uint64_t b_1803dd33d(CPU*s){
/* 1803dd33d: sar eax, 1 */
L_1803dd33d_0:;
L_1803dd33d_1:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dd33d_2:;
wr(s->r,512,1,(rd(s->u,18,4)!=((U)UINT64_C(0x0))));
L_1803dd33d_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd33d_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dd33d_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd33d_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd33d_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd33d_8:;
wr(s->u,12,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd33d_9:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803dd33d_10:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dd33d_11:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dd33d_12:;
/* 1803dd33f: mov dword ptr [rbx + 0x58], eax */
L_1803dd33f_0:;
L_1803dd33f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x58))));
L_1803dd33f_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803dd33f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dd33f_4:;
/* 1803dd342: mov dword ptr [rbx + 0x28], esi */
L_1803dd342_0:;
L_1803dd342_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803dd342_2:;
wr(s->u,8,4,rd(s->r,48,4));
L_1803dd342_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dd342_4:;
/* 1803dd345: call 0x1803e10a0 */
L_1803dd345_0:;
L_1803dd345_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd345_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd34a)));
L_1803dd345_3:;
return (uint64_t)UINT64_C(0x1803e10a0);
L_1803dd345_4:;
return UINT64_C(0x1803dd34a);
}
uint64_t b_1803dd342(CPU*s){
/* 1803dd342: mov dword ptr [rbx + 0x28], esi */
L_1803dd342_0:;
L_1803dd342_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x28))));
L_1803dd342_2:;
wr(s->u,8,4,rd(s->r,48,4));
L_1803dd342_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dd342_4:;
/* 1803dd345: call 0x1803e10a0 */
L_1803dd345_0:;
L_1803dd345_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd345_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd34a)));
L_1803dd345_3:;
return (uint64_t)UINT64_C(0x1803e10a0);
L_1803dd345_4:;
return UINT64_C(0x1803dd34a);
}
uint64_t b_1803dd34a(CPU*s){
/* 1803dd34a: cmp eax, 2 */
L_1803dd34a_0:;
L_1803dd34a_1:;
wr(s->u,6,4,rd(s->r,0,4));
L_1803dd34a_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x2))));
L_1803dd34a_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x2)),4,1));
L_1803dd34a_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x2))));
L_1803dd34a_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd34a_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803dd34a_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803dd34a_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803dd34a_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803dd34a_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803dd34a_11:;
/* 1803dd34d: je 0x1803dd367 */
L_1803dd34d_0:;
L_1803dd34d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd367);}
L_1803dd34d_2:;
return UINT64_C(0x1803dd34f);
}
uint64_t b_1803dd34f(CPU*s){
/* 1803dd34f: call 0x1803e10a0 */
L_1803dd34f_0:;
L_1803dd34f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd34f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd354)));
L_1803dd34f_3:;
return (uint64_t)UINT64_C(0x1803e10a0);
L_1803dd34f_4:;
return UINT64_C(0x1803dd354);
}
uint64_t b_1803dd354(CPU*s){
/* 1803dd354: cmp eax, 3 */
L_1803dd354_0:;
L_1803dd354_1:;
wr(s->u,6,4,rd(s->r,0,4));
L_1803dd354_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x3))));
L_1803dd354_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x3)),4,1));
L_1803dd354_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x3))));
L_1803dd354_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd354_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803dd354_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803dd354_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803dd354_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803dd354_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803dd354_11:;
/* 1803dd357: je 0x1803dd367 */
L_1803dd357_0:;
L_1803dd357_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd367);}
L_1803dd357_2:;
return UINT64_C(0x1803dd359);
}
uint64_t b_1803dd359(CPU*s){
/* 1803dd359: call 0x1803e10a0 */
L_1803dd359_0:;
L_1803dd359_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd359_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd35e)));
L_1803dd359_3:;
return (uint64_t)UINT64_C(0x1803e10a0);
L_1803dd359_4:;
return UINT64_C(0x1803dd35e);
}
uint64_t b_1803dd35e(CPU*s){
/* 1803dd35e: cmp eax, 4 */
L_1803dd35e_0:;
L_1803dd35e_1:;
wr(s->u,6,4,rd(s->r,0,4));
L_1803dd35e_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x4))));
L_1803dd35e_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x4)),4,1));
L_1803dd35e_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x4))));
L_1803dd35e_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd35e_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803dd35e_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803dd35e_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803dd35e_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803dd35e_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803dd35e_11:;
/* 1803dd361: je 0x1803dd367 */
L_1803dd361_0:;
L_1803dd361_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd367);}
L_1803dd361_2:;
return UINT64_C(0x1803dd363);
}
uint64_t b_1803dd363(CPU*s){
/* 1803dd363: mov ecx, esi */
L_1803dd363_0:;
L_1803dd363_1:;
wr(s->r,8,4,rd(s->r,48,4));
L_1803dd363_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd363_3:;
/* 1803dd365: jmp 0x1803dd369 */
L_1803dd365_0:;
L_1803dd365_1:;
return UINT64_C(0x1803dd369);
L_1803dd365_2:;
return UINT64_C(0x1803dd367);
}
uint64_t b_1803dd367(CPU*s){
/* 1803dd367: mov ecx, ebp */
L_1803dd367_0:;
L_1803dd367_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803dd367_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd367_3:;
/* 1803dd369: mov eax, dword ptr [rbx + 0x3c] */
L_1803dd369_0:;
L_1803dd369_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dd369_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd369_3:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803dd369_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd369_5:;
/* 1803dd36c: lea r8d, [rax + rax*4] */
L_1803dd36c_0:;
L_1803dd36c_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803dd36c_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dd36c_3:;
wr(s->r,128,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dd36c_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dd36c_5:;
/* 1803dd370: mov dword ptr [rsp + 0x28], ecx */
L_1803dd370_0:;
L_1803dd370_1:;
wr(s->u,32,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dd370_2:;
wr(s->u,40,4,rd(s->r,8,4));
L_1803dd370_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803dd370_4:;
/* 1803dd374: mov dword ptr [rsp + 0x20], esi */
L_1803dd374_0:;
L_1803dd374_1:;
wr(s->u,32,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dd374_2:;
wr(s->u,40,4,rd(s->r,48,4));
L_1803dd374_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803dd374_4:;
/* 1803dd378: mov r9d, dword ptr [rbx + 0x30] */
L_1803dd378_0:;
L_1803dd378_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd378_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd378_3:;
wr(s->r,136,4,rd(s->u,44,4));
L_1803dd378_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dd378_5:;
/* 1803dd37c: mov edx, 3 */
L_1803dd37c_0:;
L_1803dd37c_1:;
wr(s->r,16,8,((U)UINT64_C(0x3)));
L_1803dd37c_2:;
/* 1803dd381: lea rcx, [rbx + 0x6710] */
L_1803dd381_0:;
L_1803dd381_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6710))));
L_1803dd381_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dd381_3:;
/* 1803dd388: call 0x1803e18b0 */
L_1803dd388_0:;
L_1803dd388_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd388_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd38d)));
L_1803dd388_3:;
return (uint64_t)UINT64_C(0x1803e18b0);
L_1803dd388_4:;
return UINT64_C(0x1803dd38d);
}
uint64_t b_1803dd369(CPU*s){
/* 1803dd369: mov eax, dword ptr [rbx + 0x3c] */
L_1803dd369_0:;
L_1803dd369_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dd369_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd369_3:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803dd369_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd369_5:;
/* 1803dd36c: lea r8d, [rax + rax*4] */
L_1803dd36c_0:;
L_1803dd36c_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803dd36c_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dd36c_3:;
wr(s->r,128,4,(rd(s->u,24,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dd36c_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dd36c_5:;
/* 1803dd370: mov dword ptr [rsp + 0x28], ecx */
L_1803dd370_0:;
L_1803dd370_1:;
wr(s->u,32,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dd370_2:;
wr(s->u,40,4,rd(s->r,8,4));
L_1803dd370_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803dd370_4:;
/* 1803dd374: mov dword ptr [rsp + 0x20], esi */
L_1803dd374_0:;
L_1803dd374_1:;
wr(s->u,32,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dd374_2:;
wr(s->u,40,4,rd(s->r,48,4));
L_1803dd374_3:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803dd374_4:;
/* 1803dd378: mov r9d, dword ptr [rbx + 0x30] */
L_1803dd378_0:;
L_1803dd378_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd378_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd378_3:;
wr(s->r,136,4,rd(s->u,44,4));
L_1803dd378_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dd378_5:;
/* 1803dd37c: mov edx, 3 */
L_1803dd37c_0:;
L_1803dd37c_1:;
wr(s->r,16,8,((U)UINT64_C(0x3)));
L_1803dd37c_2:;
/* 1803dd381: lea rcx, [rbx + 0x6710] */
L_1803dd381_0:;
L_1803dd381_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6710))));
L_1803dd381_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dd381_3:;
/* 1803dd388: call 0x1803e18b0 */
L_1803dd388_0:;
L_1803dd388_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd388_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd38d)));
L_1803dd388_3:;
return (uint64_t)UINT64_C(0x1803e18b0);
L_1803dd388_4:;
return UINT64_C(0x1803dd38d);
}
uint64_t b_1803dd38d(CPU*s){
/* 1803dd38d: mov edx, dword ptr [rbx + 0x34] */
L_1803dd38d_0:;
L_1803dd38d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x34))));
L_1803dd38d_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd38d_3:;
wr(s->r,16,4,rd(s->u,20,4));
L_1803dd38d_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd38d_5:;
/* 1803dd390: sub edx, dword ptr [rbx + 0x48] */
L_1803dd390_0:;
L_1803dd390_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803dd390_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd390_3:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,20,4)));
L_1803dd390_4:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd390_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,20,4),4,1));
L_1803dd390_6:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd390_7:;
wr(s->r,16,4,(rd(s->r,16,4)-rd(s->u,20,4)));
L_1803dd390_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd390_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd390_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dd390_11:;
wr(s->u,32,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dd390_12:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803dd390_13:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803dd390_14:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803dd390_15:;
/* 1803dd393: movaps xmm3, xmm8 */
L_1803dd393_0:;
L_1803dd393_1:;
wr(s->r,4800,4,rd(s->r,5120,4));
L_1803dd393_2:;
wr(s->r,4804,4,rd(s->r,5124,4));
L_1803dd393_3:;
wr(s->r,4808,4,rd(s->r,5128,4));
L_1803dd393_4:;
wr(s->r,4812,4,rd(s->r,5132,4));
L_1803dd393_5:;
/* 1803dd397: movss xmm2, dword ptr [rbx + 0x24] */
L_1803dd397_0:;
L_1803dd397_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803dd397_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd397_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803dd397_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dd397_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dd397_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dd397_7:;
/* 1803dd39c: mov rcx, qword ptr [rbx + 0x6710] */
L_1803dd39c_0:;
L_1803dd39c_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6710))));
L_1803dd39c_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd39c_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803dd39c_4:;
/* 1803dd3a3: call 0x1803e1b50 */
L_1803dd3a3_0:;
L_1803dd3a3_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd3a3_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd3a8)));
L_1803dd3a3_3:;
return (uint64_t)UINT64_C(0x1803e1b50);
L_1803dd3a3_4:;
return UINT64_C(0x1803dd3a8);
}
uint64_t b_1803dd3a8(CPU*s){
/* 1803dd3a8: mov dword ptr [rbx + 0x44], eax */
L_1803dd3a8_0:;
L_1803dd3a8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x44))));
L_1803dd3a8_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803dd3a8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd3a8_4:;
/* 1803dd3ab: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dd3ab_0:;
L_1803dd3ab_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dd3ab_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd3ab_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803dd3ab_4:;
/* 1803dd3b2: mov r8, qword ptr [rcx] */
L_1803dd3b2_0:;
L_1803dd3b2_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dd3b2_2:;
wr(s->r,128,8,rd(s->u,24,8));
L_1803dd3b2_3:;
/* 1803dd3b5: mov edx, dword ptr [rbx + 0x58] */
L_1803dd3b5_0:;
L_1803dd3b5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x58))));
L_1803dd3b5_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd3b5_3:;
wr(s->r,16,4,rd(s->u,20,4));
L_1803dd3b5_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd3b5_5:;
/* 1803dd3b8: add edx, eax */
L_1803dd3b8_0:;
L_1803dd3b8_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dd3b8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,0,4),4,0));
L_1803dd3b8_3:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->r,0,4)));
L_1803dd3b8_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd3b8_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd3b8_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dd3b8_7:;
wr(s->u,32,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dd3b8_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803dd3b8_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803dd3b8_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803dd3b8_11:;
/* 1803dd3ba: call qword ptr [r8 + 0x18] */
L_1803dd3ba_0:;
L_1803dd3ba_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x18))));
L_1803dd3ba_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd3ba_3:;
wr(s->u,38,8,rd(s->u,24,8));
L_1803dd3ba_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd3ba_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd3be)));
L_1803dd3ba_6:;
return (uint64_t)rd(s->u,38,8);
L_1803dd3ba_7:;
return UINT64_C(0x1803dd3be);
}
uint64_t b_1803dd3be(CPU*s){
/* 1803dd3be: movd xmm1, eax */
L_1803dd3be_0:;
L_1803dd3be_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803dd3be_2:;
/* 1803dd3c2: cvtdq2ps xmm1, xmm1 */
L_1803dd3c2_0:;
L_1803dd3c2_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803dd3c2_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803dd3c2_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803dd3c2_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803dd3c2_5:;
/* 1803dd3c5: movss xmm6, dword ptr [rip + 0x27e113] */
L_1803dd3c5_0:;
L_1803dd3c5_1:;
wr(s->r,4992,4,mr(UINT64_C(0x18065b4e0),4));
L_1803dd3c5_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803dd3c5_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803dd3c5_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803dd3c5_5:;
/* 1803dd3cd: mulss xmm1, xmm6 */
L_1803dd3cd_0:;
L_1803dd3cd_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803dd3cd_2:;
/* 1803dd3d1: cvttss2si ecx, xmm1 */
L_1803dd3d1_0:;
L_1803dd3d1_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dd3d1_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd3d1_3:;
/* 1803dd3d5: cmp ecx, 0x80000000 */
L_1803dd3d5_0:;
L_1803dd3d5_1:;
wr(s->u,6,4,rd(s->r,8,4));
L_1803dd3d5_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x80000000))));
L_1803dd3d5_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x80000000)),4,1));
L_1803dd3d5_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x80000000))));
L_1803dd3d5_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd3d5_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803dd3d5_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803dd3d5_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803dd3d5_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803dd3d5_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803dd3d5_11:;
/* 1803dd3db: je 0x1803dd3fd */
L_1803dd3db_0:;
L_1803dd3db_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd3fd);}
L_1803dd3db_2:;
return UINT64_C(0x1803dd3dd);
}
uint64_t b_1803dd3dd(CPU*s){
/* 1803dd3dd: pxor xmm0, xmm0 */
L_1803dd3dd_0:;
L_1803dd3dd_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803dd3dd_2:;
/* 1803dd3e1: cvtsi2ss xmm0, ecx */
L_1803dd3e1_0:;
L_1803dd3e1_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803dd3e1_2:;
/* 1803dd3e5: ucomiss xmm0, xmm1 */
L_1803dd3e5_0:;
L_1803dd3e5_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dd3e5_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803dd3e5_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803dd3e5_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803dd3e5_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803dd3e5_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803dd3e5_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dd3e5_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd3e5_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dd3e5_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dd3e5_11:;
/* 1803dd3e8: je 0x1803dd3fd */
L_1803dd3e8_0:;
L_1803dd3e8_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd3fd);}
L_1803dd3e8_2:;
return UINT64_C(0x1803dd3ea);
}
uint64_t b_1803dd3ea(CPU*s){
/* 1803dd3ea: unpcklps xmm1, xmm1 */
L_1803dd3ea_0:;
L_1803dd3ea_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803dd3ea_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803dd3ea_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803dd3ea_4:;
/* 1803dd3ed: movmskps eax, xmm1 */
L_1803dd3ed_0:;
L_1803dd3ed_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803dd3ed_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd3ed_3:;
/* 1803dd3f0: and eax, 1 */
L_1803dd3f0_0:;
L_1803dd3f0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd3f0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd3f0_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dd3f0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd3f0_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd3f0_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd3f0_7:;
wr(s->u,2,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd3f0_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dd3f0_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dd3f0_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dd3f0_11:;
/* 1803dd3f3: sub ecx, eax */
L_1803dd3f3_0:;
L_1803dd3f3_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803dd3f3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803dd3f3_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803dd3f3_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd3f3_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd3f3_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dd3f3_7:;
wr(s->u,2,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dd3f3_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dd3f3_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dd3f3_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dd3f3_11:;
/* 1803dd3f5: pxor xmm1, xmm1 */
L_1803dd3f5_0:;
L_1803dd3f5_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803dd3f5_2:;
/* 1803dd3f9: cvtsi2ss xmm1, ecx */
L_1803dd3f9_0:;
L_1803dd3f9_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803dd3f9_2:;
/* 1803dd3fd: cvttss2si eax, xmm1 */
L_1803dd3fd_0:;
L_1803dd3fd_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dd3fd_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd3fd_3:;
/* 1803dd401: mov edi, 0x8000 */
L_1803dd401_0:;
L_1803dd401_1:;
wr(s->r,56,8,((U)UINT64_C(0x8000)));
L_1803dd401_2:;
/* 1803dd406: cmp eax, edi */
L_1803dd406_0:;
L_1803dd406_1:;
wr(s->u,8,4,rd(s->r,56,4));
L_1803dd406_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,8,4)));
L_1803dd406_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,8,4),4,1));
L_1803dd406_4:;
wr(s->u,12,4,(rd(s->r,0,4)-rd(s->u,8,4)));
L_1803dd406_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd406_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803dd406_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803dd406_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dd406_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dd406_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dd406_11:;
/* 1803dd408: jle 0x1803dd458 */
L_1803dd408_0:;
L_1803dd408_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd408_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803dd408_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803dd458);}
L_1803dd408_4:;
return UINT64_C(0x1803dd40a);
}
uint64_t b_1803dd3fd(CPU*s){
/* 1803dd3fd: cvttss2si eax, xmm1 */
L_1803dd3fd_0:;
L_1803dd3fd_1:;
wr(s->r,0,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dd3fd_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd3fd_3:;
/* 1803dd401: mov edi, 0x8000 */
L_1803dd401_0:;
L_1803dd401_1:;
wr(s->r,56,8,((U)UINT64_C(0x8000)));
L_1803dd401_2:;
/* 1803dd406: cmp eax, edi */
L_1803dd406_0:;
L_1803dd406_1:;
wr(s->u,8,4,rd(s->r,56,4));
L_1803dd406_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,8,4)));
L_1803dd406_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,8,4),4,1));
L_1803dd406_4:;
wr(s->u,12,4,(rd(s->r,0,4)-rd(s->u,8,4)));
L_1803dd406_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd406_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803dd406_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803dd406_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803dd406_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803dd406_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803dd406_11:;
/* 1803dd408: jle 0x1803dd458 */
L_1803dd408_0:;
L_1803dd408_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd408_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803dd408_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803dd458);}
L_1803dd408_4:;
return UINT64_C(0x1803dd40a);
}
uint64_t b_1803dd40a(CPU*s){
/* 1803dd40a: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dd40a_0:;
L_1803dd40a_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dd40a_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd40a_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dd40a_4:;
/* 1803dd411: mov rax, qword ptr [rcx] */
L_1803dd411_0:;
L_1803dd411_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dd411_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dd411_3:;
/* 1803dd414: mov edx, dword ptr [rbx + 0x58] */
L_1803dd414_0:;
L_1803dd414_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x58))));
L_1803dd414_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd414_3:;
wr(s->r,16,4,rd(s->u,16,4));
L_1803dd414_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd414_5:;
/* 1803dd417: add edx, dword ptr [rbx + 0x44] */
L_1803dd417_0:;
L_1803dd417_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x44))));
L_1803dd417_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd417_3:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->u,16,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dd417_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd417_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,16,4),4,0));
L_1803dd417_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd417_7:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->u,16,4)));
L_1803dd417_8:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd417_9:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd417_10:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dd417_11:;
wr(s->u,28,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dd417_12:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dd417_13:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dd417_14:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dd417_15:;
/* 1803dd41a: call qword ptr [rax + 0x18] */
L_1803dd41a_0:;
L_1803dd41a_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803dd41a_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd41a_3:;
wr(s->u,34,8,rd(s->u,20,8));
L_1803dd41a_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd41a_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd41d)));
L_1803dd41a_6:;
return (uint64_t)rd(s->u,34,8);
L_1803dd41a_7:;
return UINT64_C(0x1803dd41d);
}
uint64_t b_1803dd41d(CPU*s){
/* 1803dd41d: movd xmm1, eax */
L_1803dd41d_0:;
L_1803dd41d_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803dd41d_2:;
/* 1803dd421: cvtdq2ps xmm1, xmm1 */
L_1803dd421_0:;
L_1803dd421_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803dd421_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803dd421_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803dd421_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803dd421_5:;
/* 1803dd424: mulss xmm1, xmm6 */
L_1803dd424_0:;
L_1803dd424_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803dd424_2:;
/* 1803dd428: cvttss2si ecx, xmm1 */
L_1803dd428_0:;
L_1803dd428_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dd428_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd428_3:;
/* 1803dd42c: cmp ecx, 0x80000000 */
L_1803dd42c_0:;
L_1803dd42c_1:;
wr(s->u,6,4,rd(s->r,8,4));
L_1803dd42c_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x80000000))));
L_1803dd42c_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x80000000)),4,1));
L_1803dd42c_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x80000000))));
L_1803dd42c_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd42c_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803dd42c_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803dd42c_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803dd42c_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803dd42c_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803dd42c_11:;
/* 1803dd432: je 0x1803dd454 */
L_1803dd432_0:;
L_1803dd432_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd454);}
L_1803dd432_2:;
return UINT64_C(0x1803dd434);
}
uint64_t b_1803dd434(CPU*s){
/* 1803dd434: pxor xmm0, xmm0 */
L_1803dd434_0:;
L_1803dd434_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803dd434_2:;
/* 1803dd438: cvtsi2ss xmm0, ecx */
L_1803dd438_0:;
L_1803dd438_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803dd438_2:;
/* 1803dd43c: ucomiss xmm0, xmm1 */
L_1803dd43c_0:;
L_1803dd43c_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803dd43c_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803dd43c_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803dd43c_4:;
wr(s->u,2,1,(fv(rd(s->r,4608,4),4)==fv(rd(s->r,4672,4),4)));
L_1803dd43c_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803dd43c_6:;
wr(s->u,3,1,(fv(rd(s->r,4608,4),4)<fv(rd(s->r,4672,4),4)));
L_1803dd43c_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dd43c_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd43c_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dd43c_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dd43c_11:;
/* 1803dd43f: je 0x1803dd454 */
L_1803dd43f_0:;
L_1803dd43f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd454);}
L_1803dd43f_2:;
return UINT64_C(0x1803dd441);
}
uint64_t b_1803dd441(CPU*s){
/* 1803dd441: unpcklps xmm1, xmm1 */
L_1803dd441_0:;
L_1803dd441_1:;
wr(s->r,4680,4,rd(s->r,4676,4));
L_1803dd441_2:;
wr(s->r,4684,4,rd(s->r,4676,4));
L_1803dd441_3:;
wr(s->r,4676,4,rd(s->r,4672,4));
L_1803dd441_4:;
/* 1803dd444: movmskps eax, xmm1 */
L_1803dd444_0:;
L_1803dd444_1:;
wr(s->r,0,4,(((rd(s->r,4672,16)>>31)&1)<<0)|(((rd(s->r,4672,16)>>63)&1)<<1)|(((rd(s->r,4672,16)>>95)&1)<<2)|(((rd(s->r,4672,16)>>127)&1)<<3));
L_1803dd444_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd444_3:;
/* 1803dd447: and eax, 1 */
L_1803dd447_0:;
L_1803dd447_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd447_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd447_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dd447_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd447_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd447_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd447_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd447_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803dd447_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803dd447_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803dd447_11:;
/* 1803dd44a: sub ecx, eax */
L_1803dd44a_0:;
L_1803dd44a_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803dd44a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803dd44a_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803dd44a_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd44a_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd44a_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dd44a_7:;
wr(s->u,32,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dd44a_8:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803dd44a_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803dd44a_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803dd44a_11:;
/* 1803dd44c: pxor xmm1, xmm1 */
L_1803dd44c_0:;
L_1803dd44c_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803dd44c_2:;
/* 1803dd450: cvtsi2ss xmm1, ecx */
L_1803dd450_0:;
L_1803dd450_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803dd450_2:;
/* 1803dd454: cvttss2si edi, xmm1 */
L_1803dd454_0:;
L_1803dd454_1:;
wr(s->r,56,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dd454_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dd454_3:;
/* 1803dd458: mov dword ptr [rbx + 0x38], edi */
L_1803dd458_0:;
L_1803dd458_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd458_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803dd458_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd458_4:;
/* 1803dd45b: mov qword ptr [rbx + 0x98], rsi */
L_1803dd45b_0:;
L_1803dd45b_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x98))));
L_1803dd45b_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd45b_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd45b_4:;
/* 1803dd462: mov qword ptr [rbx + 0xa0], rsi */
L_1803dd462_0:;
L_1803dd462_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xa0))));
L_1803dd462_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd462_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd462_4:;
/* 1803dd469: mov qword ptr [rbx + 0xa8], rsi */
L_1803dd469_0:;
L_1803dd469_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xa8))));
L_1803dd469_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd469_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd469_4:;
/* 1803dd470: mov qword ptr [rbx + 0xb0], rsi */
L_1803dd470_0:;
L_1803dd470_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xb0))));
L_1803dd470_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd470_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd470_4:;
/* 1803dd477: movd xmm0, dword ptr [rbx + 0x3c] */
L_1803dd477_0:;
L_1803dd477_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dd477_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd477_3:;
wr(s->r,4608,16,rd(s->u,28,4));
L_1803dd477_4:;
/* 1803dd47c: cvtdq2ps xmm0, xmm0 */
L_1803dd47c_0:;
L_1803dd47c_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dd47c_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dd47c_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dd47c_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dd47c_5:;
/* 1803dd47f: movss dword ptr [rbx + 0xb8], xmm0 */
L_1803dd47f_0:;
L_1803dd47f_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xb8))));
L_1803dd47f_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803dd47f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dd47f_4:;
/* 1803dd487: movss xmm6, dword ptr [rip + 0x274cd1] */
L_1803dd487_0:;
L_1803dd487_1:;
wr(s->r,4992,4,mr(UINT64_C(0x180652160),4));
L_1803dd487_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803dd487_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803dd487_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803dd487_5:;
/* 1803dd48f: movaps xmm2, xmm6 */
L_1803dd48f_0:;
L_1803dd48f_1:;
wr(s->r,4736,4,rd(s->r,4992,4));
L_1803dd48f_2:;
wr(s->r,4740,4,rd(s->r,4996,4));
L_1803dd48f_3:;
wr(s->r,4744,4,rd(s->r,5000,4));
L_1803dd48f_4:;
wr(s->r,4748,4,rd(s->r,5004,4));
L_1803dd48f_5:;
/* 1803dd492: movss xmm7, dword ptr [rip + 0x42f43a] */
L_1803dd492_0:;
L_1803dd492_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18080c8d4),4));
L_1803dd492_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803dd492_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803dd492_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803dd492_5:;
/* 1803dd49a: movaps xmm1, xmm7 */
L_1803dd49a_0:;
L_1803dd49a_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803dd49a_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803dd49a_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803dd49a_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803dd49a_5:;
/* 1803dd49d: mov rcx, rbx */
L_1803dd49d_0:;
L_1803dd49d_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dd49d_2:;
/* 1803dd4a0: call 0x1803dc7b0 */
L_1803dd4a0_0:;
L_1803dd4a0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd4a0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd4a5)));
L_1803dd4a0_3:;
return (uint64_t)UINT64_C(0x1803dc7b0);
L_1803dd4a0_4:;
return UINT64_C(0x1803dd4a5);
}
uint64_t b_1803dd454(CPU*s){
/* 1803dd454: cvttss2si edi, xmm1 */
L_1803dd454_0:;
L_1803dd454_1:;
wr(s->r,56,4,ftrunc(fv(rd(s->r,4672,4),4),4));
L_1803dd454_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dd454_3:;
/* 1803dd458: mov dword ptr [rbx + 0x38], edi */
L_1803dd458_0:;
L_1803dd458_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd458_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803dd458_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd458_4:;
/* 1803dd45b: mov qword ptr [rbx + 0x98], rsi */
L_1803dd45b_0:;
L_1803dd45b_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x98))));
L_1803dd45b_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd45b_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd45b_4:;
/* 1803dd462: mov qword ptr [rbx + 0xa0], rsi */
L_1803dd462_0:;
L_1803dd462_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xa0))));
L_1803dd462_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd462_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd462_4:;
/* 1803dd469: mov qword ptr [rbx + 0xa8], rsi */
L_1803dd469_0:;
L_1803dd469_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xa8))));
L_1803dd469_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd469_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd469_4:;
/* 1803dd470: mov qword ptr [rbx + 0xb0], rsi */
L_1803dd470_0:;
L_1803dd470_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xb0))));
L_1803dd470_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd470_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd470_4:;
/* 1803dd477: movd xmm0, dword ptr [rbx + 0x3c] */
L_1803dd477_0:;
L_1803dd477_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dd477_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd477_3:;
wr(s->r,4608,16,rd(s->u,28,4));
L_1803dd477_4:;
/* 1803dd47c: cvtdq2ps xmm0, xmm0 */
L_1803dd47c_0:;
L_1803dd47c_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dd47c_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dd47c_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dd47c_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dd47c_5:;
/* 1803dd47f: movss dword ptr [rbx + 0xb8], xmm0 */
L_1803dd47f_0:;
L_1803dd47f_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xb8))));
L_1803dd47f_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803dd47f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dd47f_4:;
/* 1803dd487: movss xmm6, dword ptr [rip + 0x274cd1] */
L_1803dd487_0:;
L_1803dd487_1:;
wr(s->r,4992,4,mr(UINT64_C(0x180652160),4));
L_1803dd487_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803dd487_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803dd487_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803dd487_5:;
/* 1803dd48f: movaps xmm2, xmm6 */
L_1803dd48f_0:;
L_1803dd48f_1:;
wr(s->r,4736,4,rd(s->r,4992,4));
L_1803dd48f_2:;
wr(s->r,4740,4,rd(s->r,4996,4));
L_1803dd48f_3:;
wr(s->r,4744,4,rd(s->r,5000,4));
L_1803dd48f_4:;
wr(s->r,4748,4,rd(s->r,5004,4));
L_1803dd48f_5:;
/* 1803dd492: movss xmm7, dword ptr [rip + 0x42f43a] */
L_1803dd492_0:;
L_1803dd492_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18080c8d4),4));
L_1803dd492_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803dd492_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803dd492_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803dd492_5:;
/* 1803dd49a: movaps xmm1, xmm7 */
L_1803dd49a_0:;
L_1803dd49a_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803dd49a_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803dd49a_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803dd49a_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803dd49a_5:;
/* 1803dd49d: mov rcx, rbx */
L_1803dd49d_0:;
L_1803dd49d_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dd49d_2:;
/* 1803dd4a0: call 0x1803dc7b0 */
L_1803dd4a0_0:;
L_1803dd4a0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd4a0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd4a5)));
L_1803dd4a0_3:;
return (uint64_t)UINT64_C(0x1803dc7b0);
L_1803dd4a0_4:;
return UINT64_C(0x1803dd4a5);
}
uint64_t b_1803dd458(CPU*s){
/* 1803dd458: mov dword ptr [rbx + 0x38], edi */
L_1803dd458_0:;
L_1803dd458_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd458_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803dd458_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd458_4:;
/* 1803dd45b: mov qword ptr [rbx + 0x98], rsi */
L_1803dd45b_0:;
L_1803dd45b_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x98))));
L_1803dd45b_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd45b_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd45b_4:;
/* 1803dd462: mov qword ptr [rbx + 0xa0], rsi */
L_1803dd462_0:;
L_1803dd462_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xa0))));
L_1803dd462_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd462_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd462_4:;
/* 1803dd469: mov qword ptr [rbx + 0xa8], rsi */
L_1803dd469_0:;
L_1803dd469_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xa8))));
L_1803dd469_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd469_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd469_4:;
/* 1803dd470: mov qword ptr [rbx + 0xb0], rsi */
L_1803dd470_0:;
L_1803dd470_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xb0))));
L_1803dd470_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803dd470_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd470_4:;
/* 1803dd477: movd xmm0, dword ptr [rbx + 0x3c] */
L_1803dd477_0:;
L_1803dd477_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dd477_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd477_3:;
wr(s->r,4608,16,rd(s->u,28,4));
L_1803dd477_4:;
/* 1803dd47c: cvtdq2ps xmm0, xmm0 */
L_1803dd47c_0:;
L_1803dd47c_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803dd47c_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803dd47c_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803dd47c_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803dd47c_5:;
/* 1803dd47f: movss dword ptr [rbx + 0xb8], xmm0 */
L_1803dd47f_0:;
L_1803dd47f_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xb8))));
L_1803dd47f_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803dd47f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803dd47f_4:;
/* 1803dd487: movss xmm6, dword ptr [rip + 0x274cd1] */
L_1803dd487_0:;
L_1803dd487_1:;
wr(s->r,4992,4,mr(UINT64_C(0x180652160),4));
L_1803dd487_2:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803dd487_3:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803dd487_4:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803dd487_5:;
/* 1803dd48f: movaps xmm2, xmm6 */
L_1803dd48f_0:;
L_1803dd48f_1:;
wr(s->r,4736,4,rd(s->r,4992,4));
L_1803dd48f_2:;
wr(s->r,4740,4,rd(s->r,4996,4));
L_1803dd48f_3:;
wr(s->r,4744,4,rd(s->r,5000,4));
L_1803dd48f_4:;
wr(s->r,4748,4,rd(s->r,5004,4));
L_1803dd48f_5:;
/* 1803dd492: movss xmm7, dword ptr [rip + 0x42f43a] */
L_1803dd492_0:;
L_1803dd492_1:;
wr(s->r,5056,4,mr(UINT64_C(0x18080c8d4),4));
L_1803dd492_2:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803dd492_3:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803dd492_4:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803dd492_5:;
/* 1803dd49a: movaps xmm1, xmm7 */
L_1803dd49a_0:;
L_1803dd49a_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803dd49a_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803dd49a_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803dd49a_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803dd49a_5:;
/* 1803dd49d: mov rcx, rbx */
L_1803dd49d_0:;
L_1803dd49d_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dd49d_2:;
/* 1803dd4a0: call 0x1803dc7b0 */
L_1803dd4a0_0:;
L_1803dd4a0_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd4a0_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd4a5)));
L_1803dd4a0_3:;
return (uint64_t)UINT64_C(0x1803dc7b0);
L_1803dd4a0_4:;
return UINT64_C(0x1803dd4a5);
}
uint64_t b_1803dd4a5(CPU*s){
/* 1803dd4a5: add eax, dword ptr [rbx + 0x3c] */
L_1803dd4a5_0:;
L_1803dd4a5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dd4a5_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd4a5_3:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->u,8,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803dd4a5_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd4a5_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,8,4),4,0));
L_1803dd4a5_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd4a5_7:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->u,8,4)));
L_1803dd4a5_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd4a5_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd4a5_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd4a5_11:;
wr(s->u,15,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd4a5_12:;
wr(s->u,19,1,pop(rd(s->u,15,4),4));
L_1803dd4a5_13:;
wr(s->u,20,1,(rd(s->u,19,1)&((U)UINT64_C(0x1))));
L_1803dd4a5_14:;
wr(s->r,514,1,(rd(s->u,20,1)==((U)UINT64_C(0x0))));
L_1803dd4a5_15:;
/* 1803dd4a8: cmp edi, eax */
L_1803dd4a8_0:;
L_1803dd4a8_1:;
wr(s->u,21,4,rd(s->r,0,4));
L_1803dd4a8_2:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,21,4)));
L_1803dd4a8_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,21,4),4,1));
L_1803dd4a8_4:;
wr(s->u,25,4,(rd(s->r,56,4)-rd(s->u,21,4)));
L_1803dd4a8_5:;
wr(s->r,519,1,(sx(rd(s->u,25,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd4a8_6:;
wr(s->r,518,1,(rd(s->u,25,4)==((U)UINT64_C(0x0))));
L_1803dd4a8_7:;
wr(s->u,15,4,(rd(s->u,25,4)&((U)UINT64_C(0xff))));
L_1803dd4a8_8:;
wr(s->u,19,1,pop(rd(s->u,15,4),4));
L_1803dd4a8_9:;
wr(s->u,20,1,(rd(s->u,19,1)&((U)UINT64_C(0x1))));
L_1803dd4a8_10:;
wr(s->r,514,1,(rd(s->u,20,1)==((U)UINT64_C(0x0))));
L_1803dd4a8_11:;
/* 1803dd4aa: jg 0x1803dd4bf */
L_1803dd4aa_0:;
L_1803dd4aa_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803dd4aa_2:;
wr(s->u,13,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dd4aa_3:;
wr(s->u,14,1,((rd(s->u,12,1)!=0)&&(rd(s->u,13,1)!=0)));
L_1803dd4aa_4:;
if(rd(s->u,14,1)){return UINT64_C(0x1803dd4bf);}
L_1803dd4aa_5:;
return UINT64_C(0x1803dd4ac);
}
uint64_t b_1803dd4ac(CPU*s){
/* 1803dd4ac: movaps xmm2, xmm6 */
L_1803dd4ac_0:;
L_1803dd4ac_1:;
wr(s->r,4736,4,rd(s->r,4992,4));
L_1803dd4ac_2:;
wr(s->r,4740,4,rd(s->r,4996,4));
L_1803dd4ac_3:;
wr(s->r,4744,4,rd(s->r,5000,4));
L_1803dd4ac_4:;
wr(s->r,4748,4,rd(s->r,5004,4));
L_1803dd4ac_5:;
/* 1803dd4af: movaps xmm1, xmm7 */
L_1803dd4af_0:;
L_1803dd4af_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803dd4af_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803dd4af_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803dd4af_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803dd4af_5:;
/* 1803dd4b2: mov rcx, rbx */
L_1803dd4b2_0:;
L_1803dd4b2_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dd4b2_2:;
/* 1803dd4b5: call 0x1803dc7b0 */
L_1803dd4b5_0:;
L_1803dd4b5_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd4b5_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd4ba)));
L_1803dd4b5_3:;
return (uint64_t)UINT64_C(0x1803dc7b0);
L_1803dd4b5_4:;
return UINT64_C(0x1803dd4ba);
}
uint64_t b_1803dd4ba(CPU*s){
/* 1803dd4ba: mov edi, eax */
L_1803dd4ba_0:;
L_1803dd4ba_1:;
wr(s->r,56,4,rd(s->r,0,4));
L_1803dd4ba_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dd4ba_3:;
/* 1803dd4bc: add edi, dword ptr [rbx + 0x3c] */
L_1803dd4bc_0:;
L_1803dd4bc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dd4bc_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd4bc_3:;
wr(s->r,512,1,(((rd(s->r,56,4)+rd(s->u,28,4))&(((U)1<<32)-1))<rd(s->r,56,4)));
L_1803dd4bc_4:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd4bc_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,28,4),4,0));
L_1803dd4bc_6:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd4bc_7:;
wr(s->r,56,4,(rd(s->r,56,4)+rd(s->u,28,4)));
L_1803dd4bc_8:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dd4bc_9:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd4bc_10:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803dd4bc_11:;
wr(s->u,40,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803dd4bc_12:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803dd4bc_13:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803dd4bc_14:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803dd4bc_15:;
/* 1803dd4bf: mov dword ptr [rbx + 0x38], edi */
L_1803dd4bf_0:;
L_1803dd4bf_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd4bf_2:;
wr(s->u,24,4,rd(s->r,56,4));
L_1803dd4bf_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dd4bf_4:;
/* 1803dd4c2: mov dword ptr [rsp + 0x38], edi */
L_1803dd4c2_0:;
L_1803dd4c2_1:;
wr(s->u,16,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803dd4c2_2:;
wr(s->u,24,4,rd(s->r,56,4));
L_1803dd4c2_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd4c2_4:;
/* 1803dd4c6: mov dword ptr [rsp + 0x30], ebp */
L_1803dd4c6_0:;
L_1803dd4c6_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dd4c6_2:;
wr(s->u,24,4,rd(s->r,40,4));
L_1803dd4c6_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd4c6_4:;
/* 1803dd4ca: mov dword ptr [rsp + 0x28], esi */
L_1803dd4ca_0:;
L_1803dd4ca_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dd4ca_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd4ca_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd4ca_4:;
/* 1803dd4ce: mov eax, dword ptr [rbx + 0x30] */
L_1803dd4ce_0:;
L_1803dd4ce_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd4ce_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd4ce_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dd4ce_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd4ce_5:;
/* 1803dd4d1: mov dword ptr [rsp + 0x20], eax */
L_1803dd4d1_0:;
L_1803dd4d1_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dd4d1_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dd4d1_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd4d1_4:;
/* 1803dd4d5: or r9d, 0xffffffff */
L_1803dd4d5_0:;
L_1803dd4d5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd4d5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd4d5_3:;
wr(s->r,136,4,(rd(s->r,136,4)|((U)UINT64_C(0xffffffff))));
L_1803dd4d5_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dd4d5_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd4d5_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dd4d5_7:;
wr(s->u,40,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dd4d5_8:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803dd4d5_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803dd4d5_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803dd4d5_11:;
/* 1803dd4d9: movss xmm2, dword ptr [rbx + 0x10] */
L_1803dd4d9_0:;
L_1803dd4d9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803dd4d9_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd4d9_3:;
wr(s->r,4736,4,rd(s->u,24,4));
L_1803dd4d9_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dd4d9_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dd4d9_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dd4d9_7:;
/* 1803dd4de: mov rdx, qword ptr [rbx + 0x66f8] */
L_1803dd4de_0:;
L_1803dd4de_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f8))));
L_1803dd4de_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd4de_3:;
wr(s->r,16,8,rd(s->u,32,8));
L_1803dd4de_4:;
/* 1803dd4e5: lea rcx, [rbx + 0x6700] */
L_1803dd4e5_0:;
L_1803dd4e5_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6700))));
L_1803dd4e5_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dd4e5_3:;
/* 1803dd4ec: call 0x1803dd960 */
L_1803dd4ec_0:;
L_1803dd4ec_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd4ec_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd4f1)));
L_1803dd4ec_3:;
return (uint64_t)UINT64_C(0x1803dd960);
L_1803dd4ec_4:;
return UINT64_C(0x1803dd4f1);
}
uint64_t b_1803dd4bf(CPU*s){
/* 1803dd4bf: mov dword ptr [rbx + 0x38], edi */
L_1803dd4bf_0:;
L_1803dd4bf_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd4bf_2:;
wr(s->u,24,4,rd(s->r,56,4));
L_1803dd4bf_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dd4bf_4:;
/* 1803dd4c2: mov dword ptr [rsp + 0x38], edi */
L_1803dd4c2_0:;
L_1803dd4c2_1:;
wr(s->u,16,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803dd4c2_2:;
wr(s->u,24,4,rd(s->r,56,4));
L_1803dd4c2_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd4c2_4:;
/* 1803dd4c6: mov dword ptr [rsp + 0x30], ebp */
L_1803dd4c6_0:;
L_1803dd4c6_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dd4c6_2:;
wr(s->u,24,4,rd(s->r,40,4));
L_1803dd4c6_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd4c6_4:;
/* 1803dd4ca: mov dword ptr [rsp + 0x28], esi */
L_1803dd4ca_0:;
L_1803dd4ca_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dd4ca_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd4ca_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd4ca_4:;
/* 1803dd4ce: mov eax, dword ptr [rbx + 0x30] */
L_1803dd4ce_0:;
L_1803dd4ce_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd4ce_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd4ce_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dd4ce_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd4ce_5:;
/* 1803dd4d1: mov dword ptr [rsp + 0x20], eax */
L_1803dd4d1_0:;
L_1803dd4d1_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dd4d1_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dd4d1_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd4d1_4:;
/* 1803dd4d5: or r9d, 0xffffffff */
L_1803dd4d5_0:;
L_1803dd4d5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd4d5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd4d5_3:;
wr(s->r,136,4,(rd(s->r,136,4)|((U)UINT64_C(0xffffffff))));
L_1803dd4d5_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dd4d5_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd4d5_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dd4d5_7:;
wr(s->u,40,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dd4d5_8:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_1803dd4d5_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803dd4d5_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803dd4d5_11:;
/* 1803dd4d9: movss xmm2, dword ptr [rbx + 0x10] */
L_1803dd4d9_0:;
L_1803dd4d9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803dd4d9_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd4d9_3:;
wr(s->r,4736,4,rd(s->u,24,4));
L_1803dd4d9_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803dd4d9_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803dd4d9_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803dd4d9_7:;
/* 1803dd4de: mov rdx, qword ptr [rbx + 0x66f8] */
L_1803dd4de_0:;
L_1803dd4de_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f8))));
L_1803dd4de_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd4de_3:;
wr(s->r,16,8,rd(s->u,32,8));
L_1803dd4de_4:;
/* 1803dd4e5: lea rcx, [rbx + 0x6700] */
L_1803dd4e5_0:;
L_1803dd4e5_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6700))));
L_1803dd4e5_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dd4e5_3:;
/* 1803dd4ec: call 0x1803dd960 */
L_1803dd4ec_0:;
L_1803dd4ec_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd4ec_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd4f1)));
L_1803dd4ec_3:;
return (uint64_t)UINT64_C(0x1803dd960);
L_1803dd4ec_4:;
return UINT64_C(0x1803dd4f1);
}
uint64_t b_1803dd4f1(CPU*s){
/* 1803dd4f1: mov r11d, dword ptr [rbx + 0x38] */
L_1803dd4f1_0:;
L_1803dd4f1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd4f1_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd4f1_3:;
wr(s->r,152,4,rd(s->u,28,4));
L_1803dd4f1_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dd4f1_5:;
/* 1803dd4f5: mov dword ptr [rsp + 0x20], r11d */
L_1803dd4f5_0:;
L_1803dd4f5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dd4f5_2:;
wr(s->u,24,4,rd(s->r,152,4));
L_1803dd4f5_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd4f5_4:;
/* 1803dd4fa: mov r9d, dword ptr [rbx + 0x30] */
L_1803dd4fa_0:;
L_1803dd4fa_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd4fa_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd4fa_3:;
wr(s->r,136,4,rd(s->u,28,4));
L_1803dd4fa_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dd4fa_5:;
/* 1803dd4fe: mov r8d, dword ptr [rbx + 0x54] */
L_1803dd4fe_0:;
L_1803dd4fe_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x54))));
L_1803dd4fe_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd4fe_3:;
wr(s->r,128,4,rd(s->u,28,4));
L_1803dd4fe_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dd4fe_5:;
/* 1803dd502: mov rdx, qword ptr [rbx + 0x66f8] */
L_1803dd502_0:;
L_1803dd502_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f8))));
L_1803dd502_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd502_3:;
wr(s->r,16,8,rd(s->u,32,8));
L_1803dd502_4:;
/* 1803dd509: lea rcx, [rbx + 0x6708] */
L_1803dd509_0:;
L_1803dd509_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6708))));
L_1803dd509_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dd509_3:;
/* 1803dd510: call 0x1803dd890 */
L_1803dd510_0:;
L_1803dd510_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd510_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd515)));
L_1803dd510_3:;
return (uint64_t)UINT64_C(0x1803dd890);
L_1803dd510_4:;
return UINT64_C(0x1803dd515);
}
uint64_t b_1803dd515(CPU*s){
/* 1803dd515: mov rcx, qword ptr [rbx + 0x6708] */
L_1803dd515_0:;
L_1803dd515_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6708))));
L_1803dd515_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd515_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dd515_4:;
/* 1803dd51c: mov rax, qword ptr [rcx] */
L_1803dd51c_0:;
L_1803dd51c_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dd51c_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dd51c_3:;
/* 1803dd51f: mov edx, ebp */
L_1803dd51f_0:;
L_1803dd51f_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1803dd51f_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd51f_3:;
/* 1803dd521: call qword ptr [rax + 0x40] */
L_1803dd521_0:;
L_1803dd521_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x40))));
L_1803dd521_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd521_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dd521_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd521_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd524)));
L_1803dd521_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dd521_7:;
return UINT64_C(0x1803dd524);
}
uint64_t b_1803dd524(CPU*s){
/* 1803dd524: mov rcx, qword ptr [rbx + 0x6708] */
L_1803dd524_0:;
L_1803dd524_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6708))));
L_1803dd524_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd524_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803dd524_4:;
/* 1803dd52b: mov rax, qword ptr [rcx] */
L_1803dd52b_0:;
L_1803dd52b_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dd52b_2:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803dd52b_3:;
/* 1803dd52e: movss xmm1, dword ptr [rip + 0x42f39a] */
L_1803dd52e_0:;
L_1803dd52e_1:;
wr(s->r,4672,4,mr(UINT64_C(0x18080c8d0),4));
L_1803dd52e_2:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803dd52e_3:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803dd52e_4:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803dd52e_5:;
/* 1803dd536: call qword ptr [rax + 0x60] */
L_1803dd536_0:;
L_1803dd536_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x60))));
L_1803dd536_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd536_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803dd536_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd536_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd539)));
L_1803dd536_6:;
return (uint64_t)rd(s->u,24,8);
L_1803dd536_7:;
return UINT64_C(0x1803dd539);
}
uint64_t b_1803dd539(CPU*s){
/* 1803dd539: lea rcx, [rbx + 0x6710] */
L_1803dd539_0:;
L_1803dd539_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6710))));
L_1803dd539_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803dd539_3:;
/* 1803dd540: call 0x1803e1b20 */
L_1803dd540_0:;
L_1803dd540_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd540_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd545)));
L_1803dd540_3:;
return (uint64_t)UINT64_C(0x1803e1b20);
L_1803dd540_4:;
return UINT64_C(0x1803dd545);
}
uint64_t b_1803dd545(CPU*s){
/* 1803dd545: call 0x1803e10a0 */
L_1803dd545_0:;
L_1803dd545_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd545_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd54a)));
L_1803dd545_3:;
return (uint64_t)UINT64_C(0x1803e10a0);
L_1803dd545_4:;
return UINT64_C(0x1803dd54a);
}
uint64_t b_1803dd54a(CPU*s){
/* 1803dd54a: cmp eax, 2 */
L_1803dd54a_0:;
L_1803dd54a_1:;
wr(s->u,6,4,rd(s->r,0,4));
L_1803dd54a_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x2))));
L_1803dd54a_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x2)),4,1));
L_1803dd54a_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x2))));
L_1803dd54a_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd54a_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803dd54a_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803dd54a_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803dd54a_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803dd54a_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803dd54a_11:;
/* 1803dd54d: je 0x1803dd565 */
L_1803dd54d_0:;
L_1803dd54d_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd565);}
L_1803dd54d_2:;
return UINT64_C(0x1803dd54f);
}
uint64_t b_1803dd54f(CPU*s){
/* 1803dd54f: call 0x1803e10a0 */
L_1803dd54f_0:;
L_1803dd54f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd54f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd554)));
L_1803dd54f_3:;
return (uint64_t)UINT64_C(0x1803e10a0);
L_1803dd54f_4:;
return UINT64_C(0x1803dd554);
}
uint64_t b_1803dd554(CPU*s){
/* 1803dd554: cmp eax, 3 */
L_1803dd554_0:;
L_1803dd554_1:;
wr(s->u,6,4,rd(s->r,0,4));
L_1803dd554_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x3))));
L_1803dd554_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x3)),4,1));
L_1803dd554_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x3))));
L_1803dd554_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd554_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803dd554_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803dd554_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803dd554_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803dd554_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803dd554_11:;
/* 1803dd557: je 0x1803dd565 */
L_1803dd557_0:;
L_1803dd557_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd565);}
L_1803dd557_2:;
return UINT64_C(0x1803dd559);
}
uint64_t b_1803dd559(CPU*s){
/* 1803dd559: call 0x1803e10a0 */
L_1803dd559_0:;
L_1803dd559_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd559_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd55e)));
L_1803dd559_3:;
return (uint64_t)UINT64_C(0x1803e10a0);
L_1803dd559_4:;
return UINT64_C(0x1803dd55e);
}
uint64_t b_1803dd55e(CPU*s){
/* 1803dd55e: cmp eax, 4 */
L_1803dd55e_0:;
L_1803dd55e_1:;
wr(s->u,6,4,rd(s->r,0,4));
L_1803dd55e_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x4))));
L_1803dd55e_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x4)),4,1));
L_1803dd55e_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x4))));
L_1803dd55e_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd55e_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803dd55e_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803dd55e_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803dd55e_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803dd55e_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803dd55e_11:;
/* 1803dd561: je 0x1803dd565 */
L_1803dd561_0:;
L_1803dd561_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd565);}
L_1803dd561_2:;
return UINT64_C(0x1803dd563);
}
uint64_t b_1803dd563(CPU*s){
/* 1803dd563: mov ebp, esi */
L_1803dd563_0:;
L_1803dd563_1:;
wr(s->r,40,4,rd(s->r,48,4));
L_1803dd563_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dd563_3:;
/* 1803dd565: mov dword ptr [rsp + 0x28], ebp */
L_1803dd565_0:;
L_1803dd565_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dd565_2:;
wr(s->u,24,4,rd(s->r,40,4));
L_1803dd565_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd565_4:;
/* 1803dd569: mov dword ptr [rsp + 0x20], esi */
L_1803dd569_0:;
L_1803dd569_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dd569_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd569_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd569_4:;
/* 1803dd56d: mov r9d, dword ptr [rbx + 0x30] */
L_1803dd56d_0:;
L_1803dd56d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd56d_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd56d_3:;
wr(s->r,136,4,rd(s->u,28,4));
L_1803dd56d_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dd56d_5:;
/* 1803dd571: mov r8d, dword ptr [rbx + 0x38] */
L_1803dd571_0:;
L_1803dd571_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd571_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd571_3:;
wr(s->r,128,4,rd(s->u,28,4));
L_1803dd571_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dd571_5:;
/* 1803dd575: mov edx, 3 */
L_1803dd575_0:;
L_1803dd575_1:;
wr(s->r,16,8,((U)UINT64_C(0x3)));
L_1803dd575_2:;
/* 1803dd57a: lea rcx, [rbx + 0x6710] */
L_1803dd57a_0:;
L_1803dd57a_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6710))));
L_1803dd57a_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dd57a_3:;
/* 1803dd581: call 0x1803e18b0 */
L_1803dd581_0:;
L_1803dd581_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd581_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd586)));
L_1803dd581_3:;
return (uint64_t)UINT64_C(0x1803e18b0);
L_1803dd581_4:;
return UINT64_C(0x1803dd586);
}
uint64_t b_1803dd565(CPU*s){
/* 1803dd565: mov dword ptr [rsp + 0x28], ebp */
L_1803dd565_0:;
L_1803dd565_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dd565_2:;
wr(s->u,24,4,rd(s->r,40,4));
L_1803dd565_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd565_4:;
/* 1803dd569: mov dword ptr [rsp + 0x20], esi */
L_1803dd569_0:;
L_1803dd569_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dd569_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd569_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd569_4:;
/* 1803dd56d: mov r9d, dword ptr [rbx + 0x30] */
L_1803dd56d_0:;
L_1803dd56d_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd56d_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd56d_3:;
wr(s->r,136,4,rd(s->u,28,4));
L_1803dd56d_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dd56d_5:;
/* 1803dd571: mov r8d, dword ptr [rbx + 0x38] */
L_1803dd571_0:;
L_1803dd571_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd571_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd571_3:;
wr(s->r,128,4,rd(s->u,28,4));
L_1803dd571_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dd571_5:;
/* 1803dd575: mov edx, 3 */
L_1803dd575_0:;
L_1803dd575_1:;
wr(s->r,16,8,((U)UINT64_C(0x3)));
L_1803dd575_2:;
/* 1803dd57a: lea rcx, [rbx + 0x6710] */
L_1803dd57a_0:;
L_1803dd57a_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6710))));
L_1803dd57a_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dd57a_3:;
/* 1803dd581: call 0x1803e18b0 */
L_1803dd581_0:;
L_1803dd581_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd581_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd586)));
L_1803dd581_3:;
return (uint64_t)UINT64_C(0x1803e18b0);
L_1803dd581_4:;
return UINT64_C(0x1803dd586);
}
uint64_t b_1803dd586(CPU*s){
/* 1803dd586: cvttss2si edx, dword ptr [rbx + 0x10] */
L_1803dd586_0:;
L_1803dd586_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1803dd586_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd586_3:;
wr(s->r,16,4,ftrunc(fv(rd(s->u,24,4),4),4));
L_1803dd586_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd586_5:;
/* 1803dd58b: mov eax, dword ptr [rbx + 0x38] */
L_1803dd58b_0:;
L_1803dd58b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd58b_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd58b_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dd58b_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd58b_5:;
/* 1803dd58e: mov dword ptr [rsp + 0x28], eax */
L_1803dd58e_0:;
L_1803dd58e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dd58e_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dd58e_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd58e_4:;
/* 1803dd592: mov eax, dword ptr [rbx + 0x3c] */
L_1803dd592_0:;
L_1803dd592_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dd592_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd592_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dd592_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd592_5:;
/* 1803dd595: mov dword ptr [rsp + 0x20], eax */
L_1803dd595_0:;
L_1803dd595_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dd595_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dd595_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd595_4:;
/* 1803dd599: movss xmm3, dword ptr [rbx + 0x14] */
L_1803dd599_0:;
L_1803dd599_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803dd599_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd599_3:;
wr(s->r,4800,4,rd(s->u,24,4));
L_1803dd599_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803dd599_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803dd599_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803dd599_7:;
/* 1803dd59e: mov r8d, dword ptr [rbx + 0x30] */
L_1803dd59e_0:;
L_1803dd59e_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd59e_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd59e_3:;
wr(s->r,128,4,rd(s->u,28,4));
L_1803dd59e_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dd59e_5:;
/* 1803dd5a2: lea rcx, [rbx + 0x6718] */
L_1803dd5a2_0:;
L_1803dd5a2_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6718))));
L_1803dd5a2_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803dd5a2_3:;
/* 1803dd5a9: call 0x1803e2eb0 */
L_1803dd5a9_0:;
L_1803dd5a9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd5a9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd5ae)));
L_1803dd5a9_3:;
return (uint64_t)UINT64_C(0x1803e2eb0);
L_1803dd5a9_4:;
return UINT64_C(0x1803dd5ae);
}
uint64_t b_1803dd5ae(CPU*s){
/* 1803dd5ae: movss dword ptr [rsp + 0xc8], xmm8 */
L_1803dd5ae_0:;
L_1803dd5ae_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc8))+rd(s->r,32,8)));
L_1803dd5ae_2:;
wr(s->u,24,4,rd(s->r,5120,4));
L_1803dd5ae_3:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803dd5ae_4:;
/* 1803dd5b8: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dd5b8_0:;
L_1803dd5b8_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dd5b8_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd5b8_3:;
wr(s->r,8,8,rd(s->u,28,8));
L_1803dd5b8_4:;
/* 1803dd5bf: mov rax, qword ptr [rcx] */
L_1803dd5bf_0:;
L_1803dd5bf_1:;
wr(s->u,28,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dd5bf_2:;
wr(s->r,0,8,rd(s->u,28,8));
L_1803dd5bf_3:;
/* 1803dd5c2: call qword ptr [rax + 0x38] */
L_1803dd5c2_0:;
L_1803dd5c2_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x38))));
L_1803dd5c2_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd5c2_3:;
wr(s->u,36,8,rd(s->u,28,8));
L_1803dd5c2_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd5c2_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd5c5)));
L_1803dd5c2_6:;
return (uint64_t)rd(s->u,36,8);
L_1803dd5c2_7:;
return UINT64_C(0x1803dd5c5);
}
uint64_t b_1803dd5c5(CPU*s){
/* 1803dd5c5: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803dd5c5_0:;
L_1803dd5c5_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803dd5c5_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd5c5_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dd5c5_4:;
/* 1803dd5cc: mov rax, qword ptr [rcx] */
L_1803dd5cc_0:;
L_1803dd5cc_1:;
wr(s->u,20,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dd5cc_2:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803dd5cc_3:;
/* 1803dd5cf: movss xmm1, dword ptr [rbx + 0x14] */
L_1803dd5cf_0:;
L_1803dd5cf_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1803dd5cf_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd5cf_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803dd5cf_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803dd5cf_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803dd5cf_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803dd5cf_7:;
/* 1803dd5d4: call qword ptr [rax + 0x58] */
L_1803dd5d4_0:;
L_1803dd5d4_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x58))));
L_1803dd5d4_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd5d4_3:;
wr(s->u,28,8,rd(s->u,20,8));
L_1803dd5d4_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd5d4_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd5d7)));
L_1803dd5d4_6:;
return (uint64_t)rd(s->u,28,8);
L_1803dd5d4_7:;
return UINT64_C(0x1803dd5d7);
}
uint64_t b_1803dd5d7(CPU*s){
/* 1803dd5d7: cmp dword ptr [rbx + 0x30], 0 */
L_1803dd5d7_0:;
L_1803dd5d7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd5d7_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd5d7_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803dd5d7_4:;
wr(s->r,512,1,(rd(s->u,20,4)<((U)UINT64_C(0x0))));
L_1803dd5d7_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),((U)UINT64_C(0x0)),4,1));
L_1803dd5d7_6:;
wr(s->u,24,4,(rd(s->u,20,4)-((U)UINT64_C(0x0))));
L_1803dd5d7_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd5d7_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dd5d7_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dd5d7_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803dd5d7_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803dd5d7_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803dd5d7_13:;
/* 1803dd5db: jle 0x1803dd685 */
L_1803dd5db_0:;
L_1803dd5db_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd5db_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803dd5db_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803dd685);}
L_1803dd5db_4:;
return UINT64_C(0x1803dd5e1);
}
uint64_t b_1803dd5e1(CPU*s){
/* 1803dd5e1: lea rdi, [rbx + 0x3f0] */
L_1803dd5e1_0:;
L_1803dd5e1_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x3f0))));
L_1803dd5e1_2:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803dd5e1_3:;
/* 1803dd5e8: nop dword ptr [rax + rax] */
L_1803dd5e8_0:;
L_1803dd5e8_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803dd5e8_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dd5e8_3:;
/* 1803dd5f0: mov ecx, dword ptr [rbx + 0x38] */
L_1803dd5f0_0:;
L_1803dd5f0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd5f0_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd5f0_3:;
wr(s->r,8,4,rd(s->u,32,4));
L_1803dd5f0_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd5f0_5:;
/* 1803dd5f3: call qword ptr [rip + 0x640c17] */
L_1803dd5f3_0:;
L_1803dd5f3_1:;
wr(s->u,36,8,mr(UINT64_C(0x180a1e210),8));
L_1803dd5f3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd5f3_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd5f9)));
L_1803dd5f3_4:;
return (uint64_t)rd(s->u,36,8);
L_1803dd5f3_5:;
return UINT64_C(0x1803dd5f9);
}
uint64_t b_1803dd5f0(CPU*s){
/* 1803dd5f0: mov ecx, dword ptr [rbx + 0x38] */
L_1803dd5f0_0:;
L_1803dd5f0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd5f0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd5f0_3:;
wr(s->r,8,4,rd(s->u,8,4));
L_1803dd5f0_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd5f0_5:;
/* 1803dd5f3: call qword ptr [rip + 0x640c17] */
L_1803dd5f3_0:;
L_1803dd5f3_1:;
wr(s->u,12,8,mr(UINT64_C(0x180a1e210),8));
L_1803dd5f3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd5f3_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd5f9)));
L_1803dd5f3_4:;
return (uint64_t)rd(s->u,12,8);
L_1803dd5f3_5:;
return UINT64_C(0x1803dd5f9);
}
uint64_t b_1803dd5f9(CPU*s){
/* 1803dd5f9: mov qword ptr [rdi - 0x300], rax */
L_1803dd5f9_0:;
L_1803dd5f9_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffd00))));
L_1803dd5f9_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803dd5f9_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dd5f9_4:;
/* 1803dd600: mov ecx, dword ptr [rbx + 0x38] */
L_1803dd600_0:;
L_1803dd600_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd600_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd600_3:;
wr(s->r,8,4,rd(s->u,24,4));
L_1803dd600_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd600_5:;
/* 1803dd603: call qword ptr [rip + 0x640c07] */
L_1803dd603_0:;
L_1803dd603_1:;
wr(s->u,28,8,mr(UINT64_C(0x180a1e210),8));
L_1803dd603_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd603_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd609)));
L_1803dd603_4:;
return (uint64_t)rd(s->u,28,8);
L_1803dd603_5:;
return UINT64_C(0x1803dd609);
}
uint64_t b_1803dd609(CPU*s){
/* 1803dd609: mov qword ptr [rdi - 0x180], rax */
L_1803dd609_0:;
L_1803dd609_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffe80))));
L_1803dd609_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803dd609_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dd609_4:;
/* 1803dd610: mov ecx, dword ptr [rbx + 0x38] */
L_1803dd610_0:;
L_1803dd610_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd610_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd610_3:;
wr(s->r,8,4,rd(s->u,24,4));
L_1803dd610_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd610_5:;
/* 1803dd613: call qword ptr [rip + 0x640bf7] */
L_1803dd613_0:;
L_1803dd613_1:;
wr(s->u,28,8,mr(UINT64_C(0x180a1e210),8));
L_1803dd613_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd613_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd619)));
L_1803dd613_4:;
return (uint64_t)rd(s->u,28,8);
L_1803dd613_5:;
return UINT64_C(0x1803dd619);
}
uint64_t b_1803dd619(CPU*s){
/* 1803dd619: mov qword ptr [rdi], rax */
L_1803dd619_0:;
L_1803dd619_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803dd619_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,8,8));
L_1803dd619_3:;
/* 1803dd61c: mov ecx, dword ptr [rbx + 0x38] */
L_1803dd61c_0:;
L_1803dd61c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd61c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd61c_3:;
wr(s->r,8,4,rd(s->u,16,4));
L_1803dd61c_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd61c_5:;
/* 1803dd61f: call qword ptr [rip + 0x640beb] */
L_1803dd61f_0:;
L_1803dd61f_1:;
wr(s->u,20,8,mr(UINT64_C(0x180a1e210),8));
L_1803dd61f_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd61f_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd625)));
L_1803dd61f_4:;
return (uint64_t)rd(s->u,20,8);
L_1803dd61f_5:;
return UINT64_C(0x1803dd625);
}
uint64_t b_1803dd625(CPU*s){
/* 1803dd625: mov qword ptr [rdi + 0x180], rax */
L_1803dd625_0:;
L_1803dd625_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0x180))));
L_1803dd625_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803dd625_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dd625_4:;
/* 1803dd62c: mov edx, dword ptr [rbx + 0x38] */
L_1803dd62c_0:;
L_1803dd62c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd62c_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd62c_3:;
wr(s->r,16,4,rd(s->u,24,4));
L_1803dd62c_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd62c_5:;
/* 1803dd62f: mov rcx, qword ptr [rdi - 0x300] */
L_1803dd62f_0:;
L_1803dd62f_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffd00))));
L_1803dd62f_2:;
wr(s->u,28,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd62f_3:;
wr(s->r,8,8,rd(s->u,28,8));
L_1803dd62f_4:;
/* 1803dd636: call qword ptr [rip + 0x640b6c] */
L_1803dd636_0:;
L_1803dd636_1:;
wr(s->u,36,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803dd636_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd636_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd63c)));
L_1803dd636_4:;
return (uint64_t)rd(s->u,36,8);
L_1803dd636_5:;
return UINT64_C(0x1803dd63c);
}
uint64_t b_1803dd63c(CPU*s){
/* 1803dd63c: mov edx, dword ptr [rbx + 0x38] */
L_1803dd63c_0:;
L_1803dd63c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd63c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd63c_3:;
wr(s->r,16,4,rd(s->u,16,4));
L_1803dd63c_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd63c_5:;
/* 1803dd63f: mov rcx, qword ptr [rdi - 0x180] */
L_1803dd63f_0:;
L_1803dd63f_1:;
wr(s->u,8,8,(rd(s->r,56,8)+((U)UINT64_C(0xfffffffffffffe80))));
L_1803dd63f_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd63f_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803dd63f_4:;
/* 1803dd646: call qword ptr [rip + 0x640b5c] */
L_1803dd646_0:;
L_1803dd646_1:;
wr(s->u,28,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803dd646_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd646_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd64c)));
L_1803dd646_4:;
return (uint64_t)rd(s->u,28,8);
L_1803dd646_5:;
return UINT64_C(0x1803dd64c);
}
uint64_t b_1803dd64c(CPU*s){
/* 1803dd64c: mov edx, dword ptr [rbx + 0x38] */
L_1803dd64c_0:;
L_1803dd64c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd64c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd64c_3:;
wr(s->r,16,4,rd(s->u,8,4));
L_1803dd64c_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd64c_5:;
/* 1803dd64f: mov rcx, qword ptr [rdi] */
L_1803dd64f_0:;
L_1803dd64f_1:;
wr(s->u,12,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dd64f_2:;
wr(s->r,8,8,rd(s->u,12,8));
L_1803dd64f_3:;
/* 1803dd652: call qword ptr [rip + 0x640b50] */
L_1803dd652_0:;
L_1803dd652_1:;
wr(s->u,20,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803dd652_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd652_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd658)));
L_1803dd652_4:;
return (uint64_t)rd(s->u,20,8);
L_1803dd652_5:;
return UINT64_C(0x1803dd658);
}
uint64_t b_1803dd658(CPU*s){
/* 1803dd658: movsxd r11, dword ptr [rbx + 0x38] */
L_1803dd658_0:;
L_1803dd658_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd658_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dd658_3:;
wr(s->r,152,8,(U)sx(rd(s->u,29,4),4));
L_1803dd658_4:;
/* 1803dd65c: sar r11, 1 */
L_1803dd65c_0:;
L_1803dd65c_1:;
wr(s->u,99,8,(rd(s->r,152,8)&((U)UINT64_C(0x1))));
L_1803dd65c_2:;
wr(s->r,512,1,(rd(s->u,99,8)!=((U)UINT64_C(0x0))));
L_1803dd65c_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd65c_4:;
wr(s->r,152,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,152,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,152,8),8)>>((U)UINT64_C(0x1)))));
L_1803dd65c_5:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd65c_6:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803dd65c_7:;
wr(s->u,41,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803dd65c_8:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803dd65c_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803dd65c_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803dd65c_11:;
/* 1803dd65f: shl r11, 2 */
L_1803dd65f_0:;
L_1803dd65f_1:;
wr(s->u,107,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dd65f_2:;
wr(s->u,111,8,rd(s->r,152,8));
L_1803dd65f_3:;
wr(s->r,152,8,((rd(s->u,107,4)>=64)?0:(rd(s->r,152,8)<<rd(s->u,107,4))));
L_1803dd65f_4:;
wr(s->u,74,1,(rd(s->u,107,4)==((U)UINT64_C(0x0))));
L_1803dd65f_5:;
wr(s->u,75,4,(rd(s->u,107,4)-((U)UINT64_C(0x1))));
L_1803dd65f_6:;
wr(s->u,79,8,((rd(s->u,75,4)>=64)?0:(rd(s->u,111,8)<<rd(s->u,75,4))));
L_1803dd65f_7:;
wr(s->u,87,1,(sx(rd(s->u,79,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd65f_8:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803dd65f_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dd65f_10:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803dd65f_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dd65f_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,87,1)));
L_1803dd65f_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dd65f_14:;
wr(s->u,88,1,(rd(s->u,107,4)==((U)UINT64_C(0x1))));
L_1803dd65f_15:;
wr(s->u,89,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd65f_16:;
wr(s->u,90,1,(rd(s->r,512,1)^rd(s->u,89,1)));
L_1803dd65f_17:;
wr(s->u,0,1,rd(s->u,88,1));
L_1803dd65f_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,90,1)));
L_1803dd65f_19:;
wr(s->u,2,1,(!rd(s->u,88,1)));
L_1803dd65f_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dd65f_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dd65f_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dd65f_23:;
wr(s->u,51,1,(rd(s->u,107,4)!=((U)UINT64_C(0x0))));
L_1803dd65f_24:;
wr(s->u,52,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd65f_25:;
wr(s->u,53,1,(!rd(s->u,51,1)));
L_1803dd65f_26:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,519,1)));
L_1803dd65f_27:;
wr(s->u,55,1,(rd(s->u,51,1)&rd(s->u,52,1)));
L_1803dd65f_28:;
wr(s->r,519,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803dd65f_29:;
wr(s->u,56,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803dd65f_30:;
wr(s->u,57,1,(!rd(s->u,51,1)));
L_1803dd65f_31:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,518,1)));
L_1803dd65f_32:;
wr(s->u,59,1,(rd(s->u,51,1)&rd(s->u,56,1)));
L_1803dd65f_33:;
wr(s->r,518,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803dd65f_34:;
wr(s->u,60,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803dd65f_35:;
wr(s->u,68,1,pop(rd(s->u,60,8),8));
L_1803dd65f_36:;
wr(s->u,69,1,(rd(s->u,68,1)&((U)UINT64_C(0x1))));
L_1803dd65f_37:;
wr(s->u,70,1,(rd(s->u,69,1)==((U)UINT64_C(0x0))));
L_1803dd65f_38:;
wr(s->u,71,1,(!rd(s->u,51,1)));
L_1803dd65f_39:;
wr(s->u,72,1,(rd(s->u,71,1)&rd(s->r,514,1)));
L_1803dd65f_40:;
wr(s->u,73,1,(rd(s->u,51,1)&rd(s->u,70,1)));
L_1803dd65f_41:;
wr(s->r,514,1,(rd(s->u,72,1)|rd(s->u,73,1)));
L_1803dd65f_42:;
/* 1803dd663: add qword ptr [rdi], r11 */
L_1803dd663_0:;
L_1803dd663_1:;
wr(s->u,21,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dd663_2:;
wr(s->r,512,1,(((rd(s->u,21,8)+rd(s->r,152,8))&(((U)1<<64)-1))<rd(s->u,21,8)));
L_1803dd663_3:;
wr(s->u,21,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dd663_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,21,8),rd(s->r,152,8),8,0));
L_1803dd663_5:;
wr(s->u,21,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dd663_6:;
wr(s->u,21,8,(rd(s->u,21,8)+rd(s->r,152,8)));
L_1803dd663_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,21,8));
L_1803dd663_8:;
wr(s->u,21,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dd663_9:;
wr(s->r,519,1,(sx(rd(s->u,21,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd663_10:;
wr(s->u,21,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dd663_11:;
wr(s->r,518,1,(rd(s->u,21,8)==((U)UINT64_C(0x0))));
L_1803dd663_12:;
wr(s->u,21,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803dd663_13:;
wr(s->u,41,8,(rd(s->u,21,8)&((U)UINT64_C(0xff))));
L_1803dd663_14:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803dd663_15:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803dd663_16:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803dd663_17:;
/* 1803dd666: mov edx, dword ptr [rbx + 0x38] */
L_1803dd666_0:;
L_1803dd666_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd666_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dd666_3:;
wr(s->r,16,4,rd(s->u,29,4));
L_1803dd666_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd666_5:;
/* 1803dd669: mov rcx, qword ptr [rdi + 0x180] */
L_1803dd669_0:;
L_1803dd669_1:;
wr(s->u,13,8,(rd(s->r,56,8)+((U)UINT64_C(0x180))));
L_1803dd669_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dd669_3:;
wr(s->r,8,8,rd(s->u,33,8));
L_1803dd669_4:;
/* 1803dd670: call qword ptr [rip + 0x640b32] */
L_1803dd670_0:;
L_1803dd670_1:;
wr(s->u,91,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803dd670_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd670_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd676)));
L_1803dd670_4:;
return (uint64_t)rd(s->u,91,8);
L_1803dd670_5:;
return UINT64_C(0x1803dd676);
}
uint64_t b_1803dd676(CPU*s){
/* 1803dd676: inc esi */
L_1803dd676_0:;
L_1803dd676_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0x1)),4,0));
L_1803dd676_2:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0x1))));
L_1803dd676_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803dd676_4:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd676_5:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803dd676_6:;
wr(s->u,13,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803dd676_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dd676_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dd676_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dd676_10:;
/* 1803dd678: add rdi, 8 */
L_1803dd678_0:;
L_1803dd678_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803dd678_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x8)),8,0));
L_1803dd678_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803dd678_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd678_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803dd678_6:;
wr(s->u,13,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803dd678_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803dd678_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dd678_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dd678_10:;
/* 1803dd67c: cmp esi, dword ptr [rbx + 0x30] */
L_1803dd67c_0:;
L_1803dd67c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd67c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd67c_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803dd67c_4:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->u,23,4)));
L_1803dd67c_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->u,23,4),4,1));
L_1803dd67c_6:;
wr(s->u,27,4,(rd(s->r,48,4)-rd(s->u,23,4)));
L_1803dd67c_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd67c_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803dd67c_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803dd67c_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dd67c_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dd67c_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dd67c_13:;
/* 1803dd67f: jl 0x1803dd5f0 */
L_1803dd67f_0:;
L_1803dd67f_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd67f_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dd5f0);}
L_1803dd67f_3:;
return UINT64_C(0x1803dd685);
}
uint64_t b_1803dd685(CPU*s){
/* 1803dd685: mov ecx, dword ptr [rbx + 0x3c] */
L_1803dd685_0:;
L_1803dd685_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dd685_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd685_3:;
wr(s->r,8,4,rd(s->u,24,4));
L_1803dd685_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd685_5:;
/* 1803dd688: sar ecx, 1 */
L_1803dd688_0:;
L_1803dd688_1:;
wr(s->u,78,4,(rd(s->r,8,4)&((U)UINT64_C(0x1))));
L_1803dd688_2:;
wr(s->r,512,1,(rd(s->u,78,4)!=((U)UINT64_C(0x0))));
L_1803dd688_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd688_4:;
wr(s->r,8,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,8,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,8,4),4)>>((U)UINT64_C(0x1)))));
L_1803dd688_5:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd688_6:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd688_7:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dd688_8:;
wr(s->u,28,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dd688_9:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dd688_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dd688_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dd688_12:;
/* 1803dd68a: mov eax, dword ptr [rbx + 0x38] */
L_1803dd68a_0:;
L_1803dd68a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd68a_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd68a_3:;
wr(s->r,0,4,rd(s->u,24,4));
L_1803dd68a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd68a_5:;
/* 1803dd68d: lea ecx, [rcx + rax*2] */
L_1803dd68d_0:;
L_1803dd68d_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x2))));
L_1803dd68d_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803dd68d_3:;
wr(s->r,8,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dd68d_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd68d_5:;
/* 1803dd690: imul ecx, dword ptr [rbx + 0x30] */
L_1803dd690_0:;
L_1803dd690_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd690_2:;
wr(s->u,50,8,(U)sx(rd(s->r,8,4),4));
L_1803dd690_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd690_4:;
wr(s->u,58,8,(U)sx(rd(s->u,24,4),4));
L_1803dd690_5:;
wr(s->u,66,8,(rd(s->u,50,8)*rd(s->u,58,8)));
L_1803dd690_6:;
wr(s->r,8,4,(rd(s->u,66,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dd690_7:;
wr(s->u,74,4,(rd(s->u,66,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dd690_8:;
wr(s->u,34,8,(U)sx(rd(s->r,8,4),4));
L_1803dd690_9:;
wr(s->r,512,1,(rd(s->u,34,8)!=rd(s->u,66,8)));
L_1803dd690_10:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dd690_11:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd690_12:;
/* 1803dd694: call qword ptr [rip + 0x640b76] */
L_1803dd694_0:;
L_1803dd694_1:;
wr(s->u,42,8,mr(UINT64_C(0x180a1e210),8));
L_1803dd694_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd694_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd69a)));
L_1803dd694_4:;
return (uint64_t)rd(s->u,42,8);
L_1803dd694_5:;
return UINT64_C(0x1803dd69a);
}
uint64_t b_1803dd69a(CPU*s){
/* 1803dd69a: mov qword ptr [rbx + 0xe0], rax */
L_1803dd69a_0:;
L_1803dd69a_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xe0))));
L_1803dd69a_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803dd69a_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dd69a_4:;
/* 1803dd6a1: mov edx, dword ptr [rbx + 0x38] */
L_1803dd6a1_0:;
L_1803dd6a1_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x38))));
L_1803dd6a1_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd6a1_3:;
wr(s->r,16,4,rd(s->u,24,4));
L_1803dd6a1_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd6a1_5:;
/* 1803dd6a4: imul edx, dword ptr [rbx + 0x30] */
L_1803dd6a4_0:;
L_1803dd6a4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd6a4_2:;
wr(s->u,50,8,(U)sx(rd(s->r,16,4),4));
L_1803dd6a4_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd6a4_4:;
wr(s->u,58,8,(U)sx(rd(s->u,24,4),4));
L_1803dd6a4_5:;
wr(s->u,66,8,(rd(s->u,50,8)*rd(s->u,58,8)));
L_1803dd6a4_6:;
wr(s->r,16,4,(rd(s->u,66,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dd6a4_7:;
wr(s->u,74,4,(rd(s->u,66,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dd6a4_8:;
wr(s->u,34,8,(U)sx(rd(s->r,16,4),4));
L_1803dd6a4_9:;
wr(s->r,512,1,(rd(s->u,34,8)!=rd(s->u,66,8)));
L_1803dd6a4_10:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dd6a4_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd6a4_12:;
/* 1803dd6a8: add edx, edx */
L_1803dd6a8_0:;
L_1803dd6a8_1:;
wr(s->r,512,1,(((rd(s->r,16,4)+rd(s->r,16,4))&(((U)1<<32)-1))<rd(s->r,16,4)));
L_1803dd6a8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,16,4),4,0));
L_1803dd6a8_3:;
wr(s->r,16,4,(rd(s->r,16,4)+rd(s->r,16,4)));
L_1803dd6a8_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd6a8_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd6a8_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dd6a8_7:;
wr(s->u,28,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dd6a8_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803dd6a8_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dd6a8_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dd6a8_11:;
/* 1803dd6aa: mov rcx, rax */
L_1803dd6aa_0:;
L_1803dd6aa_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dd6aa_2:;
/* 1803dd6ad: call qword ptr [rip + 0x640af5] */
L_1803dd6ad_0:;
L_1803dd6ad_1:;
wr(s->u,42,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803dd6ad_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd6ad_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd6b3)));
L_1803dd6ad_4:;
return (uint64_t)rd(s->u,42,8);
L_1803dd6ad_5:;
return UINT64_C(0x1803dd6b3);
}
uint64_t b_1803dd6b3(CPU*s){
/* 1803dd6b3: mov eax, dword ptr [rbx + 0x3c] */
L_1803dd6b3_0:;
L_1803dd6b3_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803dd6b3_2:;
wr(s->u,33,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dd6b3_3:;
wr(s->r,0,4,rd(s->u,33,4));
L_1803dd6b3_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd6b3_5:;
/* 1803dd6b6: sar eax, 1 */
L_1803dd6b6_0:;
L_1803dd6b6_1:;
wr(s->u,123,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803dd6b6_2:;
wr(s->r,512,1,(rd(s->u,123,4)!=((U)UINT64_C(0x0))));
L_1803dd6b6_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd6b6_4:;
wr(s->r,0,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>((U)UINT64_C(0x1)))));
L_1803dd6b6_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd6b6_6:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd6b6_7:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd6b6_8:;
wr(s->u,37,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd6b6_9:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803dd6b6_10:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803dd6b6_11:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803dd6b6_12:;
/* 1803dd6b8: imul eax, dword ptr [rbx + 0x30] */
L_1803dd6b8_0:;
L_1803dd6b8_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd6b8_2:;
wr(s->u,95,8,(U)sx(rd(s->r,0,4),4));
L_1803dd6b8_3:;
wr(s->u,33,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803dd6b8_4:;
wr(s->u,103,8,(U)sx(rd(s->u,33,4),4));
L_1803dd6b8_5:;
wr(s->u,111,8,(rd(s->u,95,8)*rd(s->u,103,8)));
L_1803dd6b8_6:;
wr(s->r,0,4,(rd(s->u,111,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dd6b8_7:;
wr(s->u,119,4,(rd(s->u,111,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dd6b8_8:;
wr(s->u,70,8,(U)sx(rd(s->r,0,4),4));
L_1803dd6b8_9:;
wr(s->r,512,1,(rd(s->u,70,8)!=rd(s->u,111,8)));
L_1803dd6b8_10:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803dd6b8_11:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd6b8_12:;
/* 1803dd6bc: cdqe  */
L_1803dd6bc_0:;
L_1803dd6bc_1:;
wr(s->r,0,8,(U)sx(rd(s->r,0,4),4));
L_1803dd6bc_2:;
/* 1803dd6be: shl rax, 2 */
L_1803dd6be_0:;
L_1803dd6be_1:;
wr(s->u,127,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803dd6be_2:;
wr(s->u,131,8,rd(s->r,0,8));
L_1803dd6be_3:;
wr(s->r,0,8,((rd(s->u,127,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,127,4))));
L_1803dd6be_4:;
wr(s->u,78,1,(rd(s->u,127,4)==((U)UINT64_C(0x0))));
L_1803dd6be_5:;
wr(s->u,79,4,(rd(s->u,127,4)-((U)UINT64_C(0x1))));
L_1803dd6be_6:;
wr(s->u,83,8,((rd(s->u,79,4)>=64)?0:(rd(s->u,131,8)<<rd(s->u,79,4))));
L_1803dd6be_7:;
wr(s->u,91,1,(sx(rd(s->u,83,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd6be_8:;
wr(s->u,0,1,rd(s->u,78,1));
L_1803dd6be_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dd6be_10:;
wr(s->u,2,1,(!rd(s->u,78,1)));
L_1803dd6be_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dd6be_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,91,1)));
L_1803dd6be_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dd6be_14:;
wr(s->u,92,1,(rd(s->u,127,4)==((U)UINT64_C(0x1))));
L_1803dd6be_15:;
wr(s->u,93,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd6be_16:;
wr(s->u,94,1,(rd(s->r,512,1)^rd(s->u,93,1)));
L_1803dd6be_17:;
wr(s->u,0,1,rd(s->u,92,1));
L_1803dd6be_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,94,1)));
L_1803dd6be_19:;
wr(s->u,2,1,(!rd(s->u,92,1)));
L_1803dd6be_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dd6be_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dd6be_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dd6be_23:;
wr(s->u,47,1,(rd(s->u,127,4)!=((U)UINT64_C(0x0))));
L_1803dd6be_24:;
wr(s->u,48,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd6be_25:;
wr(s->u,49,1,(!rd(s->u,47,1)));
L_1803dd6be_26:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,519,1)));
L_1803dd6be_27:;
wr(s->u,51,1,(rd(s->u,47,1)&rd(s->u,48,1)));
L_1803dd6be_28:;
wr(s->r,519,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803dd6be_29:;
wr(s->u,52,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803dd6be_30:;
wr(s->u,53,1,(!rd(s->u,47,1)));
L_1803dd6be_31:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,518,1)));
L_1803dd6be_32:;
wr(s->u,55,1,(rd(s->u,47,1)&rd(s->u,52,1)));
L_1803dd6be_33:;
wr(s->r,518,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803dd6be_34:;
wr(s->u,56,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803dd6be_35:;
wr(s->u,64,1,pop(rd(s->u,56,8),8));
L_1803dd6be_36:;
wr(s->u,65,1,(rd(s->u,64,1)&((U)UINT64_C(0x1))));
L_1803dd6be_37:;
wr(s->u,66,1,(rd(s->u,65,1)==((U)UINT64_C(0x0))));
L_1803dd6be_38:;
wr(s->u,67,1,(!rd(s->u,47,1)));
L_1803dd6be_39:;
wr(s->u,68,1,(rd(s->u,67,1)&rd(s->r,514,1)));
L_1803dd6be_40:;
wr(s->u,69,1,(rd(s->u,47,1)&rd(s->u,66,1)));
L_1803dd6be_41:;
wr(s->r,514,1,(rd(s->u,68,1)|rd(s->u,69,1)));
L_1803dd6be_42:;
/* 1803dd6c2: add qword ptr [rbx + 0xe0], rax */
L_1803dd6c2_0:;
L_1803dd6c2_1:;
wr(s->u,13,8,(rd(s->r,24,8)+((U)UINT64_C(0xe0))));
L_1803dd6c2_2:;
wr(s->u,25,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dd6c2_3:;
wr(s->r,512,1,(((rd(s->u,25,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->u,25,8)));
L_1803dd6c2_4:;
wr(s->u,25,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dd6c2_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,25,8),rd(s->r,0,8),8,0));
L_1803dd6c2_6:;
wr(s->u,25,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dd6c2_7:;
wr(s->u,25,8,(rd(s->u,25,8)+rd(s->r,0,8)));
L_1803dd6c2_8:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,25,8));
L_1803dd6c2_9:;
wr(s->u,25,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dd6c2_10:;
wr(s->r,519,1,(sx(rd(s->u,25,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd6c2_11:;
wr(s->u,25,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dd6c2_12:;
wr(s->r,518,1,(rd(s->u,25,8)==((U)UINT64_C(0x0))));
L_1803dd6c2_13:;
wr(s->u,25,8,mr((uint64_t)rd(s->u,13,8),8));
L_1803dd6c2_14:;
wr(s->u,37,8,(rd(s->u,25,8)&((U)UINT64_C(0xff))));
L_1803dd6c2_15:;
wr(s->u,45,1,pop(rd(s->u,37,8),8));
L_1803dd6c2_16:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803dd6c2_17:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803dd6c2_18:;
/* 1803dd6c9: mov dword ptr [rbx + 0x2c], 0x3f800000 */
L_1803dd6c9_0:;
L_1803dd6c9_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x2c))));
L_1803dd6c9_2:;
wr(s->u,21,4,((U)UINT64_C(0x3f800000)));
L_1803dd6c9_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,21,4));
L_1803dd6c9_4:;
/* 1803dd6d0: mov dword ptr [rbx + 0x5c], 0x80 */
L_1803dd6d0_0:;
L_1803dd6d0_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x5c))));
L_1803dd6d0_2:;
wr(s->u,21,4,((U)UINT64_C(0x80)));
L_1803dd6d0_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,21,4));
L_1803dd6d0_4:;
/* 1803dd6d7: lea rdx, [rbx + 0x18] */
L_1803dd6d7_0:;
L_1803dd6d7_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1803dd6d7_2:;
wr(s->r,16,8,rd(s->u,5,8));
L_1803dd6d7_3:;
/* 1803dd6db: mov dword ptr [rdx], 0x3f800000 */
L_1803dd6db_0:;
L_1803dd6db_1:;
wr(s->u,21,4,((U)UINT64_C(0x3f800000)));
L_1803dd6db_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,21,4));
L_1803dd6db_3:;
/* 1803dd6e1: mov dword ptr [rbx + 0x24], 0x3f800000 */
L_1803dd6e1_0:;
L_1803dd6e1_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x24))));
L_1803dd6e1_2:;
wr(s->u,21,4,((U)UINT64_C(0x3f800000)));
L_1803dd6e1_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,21,4));
L_1803dd6e1_4:;
/* 1803dd6e8: xor r9d, r9d */
L_1803dd6e8_0:;
L_1803dd6e8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd6e8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd6e8_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803dd6e8_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dd6e8_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd6e8_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dd6e8_7:;
wr(s->u,37,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dd6e8_8:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803dd6e8_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803dd6e8_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803dd6e8_11:;
/* 1803dd6eb: movaps xmm2, xmm8 */
L_1803dd6eb_0:;
L_1803dd6eb_1:;
wr(s->r,4736,4,rd(s->r,5120,4));
L_1803dd6eb_2:;
wr(s->r,4740,4,rd(s->r,5124,4));
L_1803dd6eb_3:;
wr(s->r,4744,4,rd(s->r,5128,4));
L_1803dd6eb_4:;
wr(s->r,4748,4,rd(s->r,5132,4));
L_1803dd6eb_5:;
/* 1803dd6ef: mov rcx, rbx */
L_1803dd6ef_0:;
L_1803dd6ef_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dd6ef_2:;
/* 1803dd6f2: call 0x1803dca50 */
L_1803dd6f2_0:;
L_1803dd6f2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd6f2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd6f7)));
L_1803dd6f2_3:;
return (uint64_t)UINT64_C(0x1803dca50);
L_1803dd6f2_4:;
return UINT64_C(0x1803dd6f7);
}
uint64_t b_1803dd6f7(CPU*s){
/* 1803dd6f7: mov rcx, rbx */
L_1803dd6f7_0:;
L_1803dd6f7_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dd6f7_2:;
/* 1803dd6fa: call 0x1803dce40 */
L_1803dd6fa_0:;
L_1803dd6fa_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd6fa_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd6ff)));
L_1803dd6fa_3:;
return (uint64_t)UINT64_C(0x1803dce40);
L_1803dd6fa_4:;
return UINT64_C(0x1803dd6ff);
}
uint64_t b_1803dd6ff(CPU*s){
/* 1803dd6ff: nop  */
L_1803dd6ff_0:;
L_1803dd6ff_1:;
/* 1803dd700: mov rax, rbx */
L_1803dd700_0:;
L_1803dd700_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803dd700_2:;
/* 1803dd703: mov rbx, qword ptr [rsp + 0xd0] */
L_1803dd703_0:;
L_1803dd703_1:;
wr(s->u,8,8,(((U)UINT64_C(0xd0))+rd(s->r,32,8)));
L_1803dd703_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd703_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803dd703_4:;
/* 1803dd70b: movaps xmm6, xmmword ptr [rsp + 0x70] */
L_1803dd70b_0:;
L_1803dd70b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dd70b_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dd70b_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803dd70b_4:;
wr(s->r,4992,4,rd(s->u,58,4));
L_1803dd70b_5:;
wr(s->r,4996,4,rd(s->u,62,4));
L_1803dd70b_6:;
wr(s->r,5000,4,rd(s->u,66,4));
L_1803dd70b_7:;
wr(s->r,5004,4,rd(s->u,70,4));
L_1803dd70b_8:;
/* 1803dd710: movaps xmm7, xmmword ptr [rsp + 0x60] */
L_1803dd710_0:;
L_1803dd710_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dd710_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dd710_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803dd710_4:;
wr(s->r,5056,4,rd(s->u,58,4));
L_1803dd710_5:;
wr(s->r,5060,4,rd(s->u,62,4));
L_1803dd710_6:;
wr(s->r,5064,4,rd(s->u,66,4));
L_1803dd710_7:;
wr(s->r,5068,4,rd(s->u,70,4));
L_1803dd710_8:;
/* 1803dd715: movaps xmm8, xmmword ptr [rsp + 0x50] */
L_1803dd715_0:;
L_1803dd715_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dd715_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dd715_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803dd715_4:;
wr(s->r,5120,4,rd(s->u,58,4));
L_1803dd715_5:;
wr(s->r,5124,4,rd(s->u,62,4));
L_1803dd715_6:;
wr(s->r,5128,4,rd(s->u,66,4));
L_1803dd715_7:;
wr(s->r,5132,4,rd(s->u,70,4));
L_1803dd715_8:;
/* 1803dd71b: add rsp, 0x80 */
L_1803dd71b_0:;
L_1803dd71b_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x80)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dd71b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x80)),8,0));
L_1803dd71b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x80))));
L_1803dd71b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd71b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd71b_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd71b_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803dd71b_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dd71b_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dd71b_10:;
/* 1803dd722: pop r15 */
L_1803dd722_0:;
L_1803dd722_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803dd722_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd722_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd722_4:;
wr(s->r,184,8,rd(s->u,50,8));
L_1803dd722_5:;
/* 1803dd724: pop r14 */
L_1803dd724_0:;
L_1803dd724_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803dd724_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd724_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd724_4:;
wr(s->r,176,8,rd(s->u,50,8));
L_1803dd724_5:;
/* 1803dd726: pop r13 */
L_1803dd726_0:;
L_1803dd726_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803dd726_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd726_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd726_4:;
wr(s->r,168,8,rd(s->u,50,8));
L_1803dd726_5:;
/* 1803dd728: pop r12 */
L_1803dd728_0:;
L_1803dd728_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803dd728_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd728_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd728_4:;
wr(s->r,160,8,rd(s->u,50,8));
L_1803dd728_5:;
/* 1803dd72a: pop rdi */
L_1803dd72a_0:;
L_1803dd72a_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803dd72a_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd72a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd72a_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803dd72a_5:;
/* 1803dd72b: pop rsi */
L_1803dd72b_0:;
L_1803dd72b_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803dd72b_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd72b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd72b_4:;
wr(s->r,48,8,rd(s->u,50,8));
L_1803dd72b_5:;
/* 1803dd72c: pop rbp */
L_1803dd72c_0:;
L_1803dd72c_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803dd72c_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd72c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd72c_4:;
wr(s->r,40,8,rd(s->u,50,8));
L_1803dd72c_5:;
/* 1803dd72d: ret  */
L_1803dd72d_0:;
L_1803dd72d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd72d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd72d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dd72d_4:;
return UINT64_C(0x1803dd72e);
}
uint64_t b_1803dd730(CPU*s){
/* 1803dd730: mov qword ptr [rsp + 8], rbx */
L_1803dd730_0:;
L_1803dd730_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803dd730_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803dd730_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dd730_4:;
/* 1803dd735: push rdi */
L_1803dd735_0:;
L_1803dd735_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803dd735_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd735_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803dd735_4:;
/* 1803dd736: sub rsp, 0x20 */
L_1803dd736_0:;
L_1803dd736_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803dd736_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803dd736_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803dd736_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd736_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd736_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd736_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dd736_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dd736_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dd736_10:;
/* 1803dd73a: mov ebx, edx */
L_1803dd73a_0:;
L_1803dd73a_1:;
wr(s->r,24,4,rd(s->r,16,4));
L_1803dd73a_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dd73a_3:;
/* 1803dd73c: mov rdi, rcx */
L_1803dd73c_0:;
L_1803dd73c_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803dd73c_2:;
/* 1803dd73f: call 0x1803db0c0 */
L_1803dd73f_0:;
L_1803dd73f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd73f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd744)));
L_1803dd73f_3:;
return (uint64_t)UINT64_C(0x1803db0c0);
L_1803dd73f_4:;
return UINT64_C(0x1803dd744);
}
uint64_t b_1803dd744(CPU*s){
/* 1803dd744: test bl, 1 */
L_1803dd744_0:;
L_1803dd744_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd744_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd744_3:;
wr(s->u,3,1,(rd(s->r,24,1)&((U)UINT64_C(0x1))));
L_1803dd744_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803dd744_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803dd744_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_1803dd744_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_1803dd744_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_1803dd744_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_1803dd744_10:;
/* 1803dd747: je 0x1803dd751 */
L_1803dd747_0:;
L_1803dd747_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd751);}
L_1803dd747_2:;
return UINT64_C(0x1803dd749);
}
uint64_t b_1803dd749(CPU*s){
/* 1803dd749: mov rcx, rdi */
L_1803dd749_0:;
L_1803dd749_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803dd749_2:;
/* 1803dd74c: call 0x180003160 */
L_1803dd74c_0:;
L_1803dd74c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd74c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd751)));
L_1803dd74c_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803dd74c_4:;
return UINT64_C(0x1803dd751);
}
uint64_t b_1803dd751(CPU*s){
/* 1803dd751: mov rax, rdi */
L_1803dd751_0:;
L_1803dd751_1:;
wr(s->r,0,8,rd(s->r,56,8));
L_1803dd751_2:;
/* 1803dd754: mov rbx, qword ptr [rsp + 0x30] */
L_1803dd754_0:;
L_1803dd754_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dd754_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd754_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803dd754_4:;
/* 1803dd759: add rsp, 0x20 */
L_1803dd759_0:;
L_1803dd759_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dd759_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dd759_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dd759_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd759_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd759_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd759_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dd759_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dd759_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dd759_10:;
/* 1803dd75d: pop rdi */
L_1803dd75d_0:;
L_1803dd75d_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803dd75d_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd75d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd75d_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803dd75d_5:;
/* 1803dd75e: ret  */
L_1803dd75e_0:;
L_1803dd75e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd75e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd75e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dd75e_4:;
return UINT64_C(0x1803dd75f);
}
uint64_t b_1803dd760(CPU*s){
/* 1803dd760: mov qword ptr [rsp + 8], rbx */
L_1803dd760_0:;
L_1803dd760_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803dd760_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803dd760_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dd760_4:;
/* 1803dd765: mov qword ptr [rsp + 0x10], rsi */
L_1803dd765_0:;
L_1803dd765_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803dd765_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803dd765_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dd765_4:;
/* 1803dd76a: push rdi */
L_1803dd76a_0:;
L_1803dd76a_1:;
wr(s->u,30,8,rd(s->r,56,8));
L_1803dd76a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd76a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,30,8));
L_1803dd76a_4:;
/* 1803dd76b: sub rsp, 0x20 */
L_1803dd76b_0:;
L_1803dd76b_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803dd76b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803dd76b_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803dd76b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd76b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd76b_6:;
wr(s->u,38,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd76b_7:;
wr(s->u,46,1,pop(rd(s->u,38,8),8));
L_1803dd76b_8:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803dd76b_9:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803dd76b_10:;
/* 1803dd76f: xor esi, esi */
L_1803dd76f_0:;
L_1803dd76f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd76f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd76f_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803dd76f_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803dd76f_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd76f_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803dd76f_7:;
wr(s->u,38,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803dd76f_8:;
wr(s->u,46,1,pop(rd(s->u,38,4),4));
L_1803dd76f_9:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803dd76f_10:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803dd76f_11:;
/* 1803dd771: mov rdi, rdx */
L_1803dd771_0:;
L_1803dd771_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803dd771_2:;
/* 1803dd774: mov rbx, rcx */
L_1803dd774_0:;
L_1803dd774_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dd774_2:;
/* 1803dd777: cmp dword ptr [rcx + 0x60], esi */
L_1803dd777_0:;
L_1803dd777_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x60))));
L_1803dd777_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd777_3:;
wr(s->u,48,4,rd(s->u,24,4));
L_1803dd777_4:;
wr(s->r,512,1,(rd(s->u,48,4)<rd(s->r,48,4)));
L_1803dd777_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,48,4),rd(s->r,48,4),4,1));
L_1803dd777_6:;
wr(s->u,52,4,(rd(s->u,48,4)-rd(s->r,48,4)));
L_1803dd777_7:;
wr(s->r,519,1,(sx(rd(s->u,52,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd777_8:;
wr(s->r,518,1,(rd(s->u,52,4)==((U)UINT64_C(0x0))));
L_1803dd777_9:;
wr(s->u,38,4,(rd(s->u,52,4)&((U)UINT64_C(0xff))));
L_1803dd777_10:;
wr(s->u,46,1,pop(rd(s->u,38,4),4));
L_1803dd777_11:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803dd777_12:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803dd777_13:;
/* 1803dd77a: mov r10d, esi */
L_1803dd77a_0:;
L_1803dd77a_1:;
wr(s->r,144,4,rd(s->r,48,4));
L_1803dd77a_2:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803dd77a_3:;
/* 1803dd77d: mov r11, rsi */
L_1803dd77d_0:;
L_1803dd77d_1:;
wr(s->r,152,8,rd(s->r,48,8));
L_1803dd77d_2:;
/* 1803dd780: jle 0x1803dd7bd */
L_1803dd780_0:;
L_1803dd780_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd780_2:;
wr(s->u,29,1,((rd(s->r,518,1)!=0)||(rd(s->u,28,1)!=0)));
L_1803dd780_3:;
if(rd(s->u,29,1)){return UINT64_C(0x1803dd7bd);}
L_1803dd780_4:;
return UINT64_C(0x1803dd782);
}
uint64_t b_1803dd782(CPU*s){
/* 1803dd782: mov r8, rsi */
L_1803dd782_0:;
L_1803dd782_1:;
wr(s->r,128,8,rd(s->r,48,8));
L_1803dd782_2:;
/* 1803dd785: mov edx, esi */
L_1803dd785_0:;
L_1803dd785_1:;
wr(s->r,16,4,rd(s->r,48,4));
L_1803dd785_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd785_3:;
/* 1803dd787: cmp dword ptr [rbx + 0x30], edx */
L_1803dd787_0:;
L_1803dd787_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd787_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd787_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803dd787_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,16,4)));
L_1803dd787_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,16,4),4,1));
L_1803dd787_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,16,4)));
L_1803dd787_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd787_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dd787_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dd787_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803dd787_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803dd787_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803dd787_13:;
/* 1803dd78a: jle 0x1803dd7b0 */
L_1803dd78a_0:;
L_1803dd78a_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd78a_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803dd78a_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803dd7b0);}
L_1803dd78a_4:;
return UINT64_C(0x1803dd78c);
}
uint64_t b_1803dd785(CPU*s){
/* 1803dd785: mov edx, esi */
L_1803dd785_0:;
L_1803dd785_1:;
wr(s->r,16,4,rd(s->r,48,4));
L_1803dd785_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd785_3:;
/* 1803dd787: cmp dword ptr [rbx + 0x30], edx */
L_1803dd787_0:;
L_1803dd787_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd787_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd787_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803dd787_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,16,4)));
L_1803dd787_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,16,4),4,1));
L_1803dd787_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,16,4)));
L_1803dd787_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd787_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dd787_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dd787_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803dd787_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803dd787_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803dd787_13:;
/* 1803dd78a: jle 0x1803dd7b0 */
L_1803dd78a_0:;
L_1803dd78a_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd78a_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803dd78a_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803dd7b0);}
L_1803dd78a_4:;
return UINT64_C(0x1803dd78c);
}
uint64_t b_1803dd78c(CPU*s){
/* 1803dd78c: mov r9, rdi */
L_1803dd78c_0:;
L_1803dd78c_1:;
wr(s->r,136,8,rd(s->r,56,8));
L_1803dd78c_2:;
/* 1803dd78f: nop  */
L_1803dd78f_0:;
L_1803dd78f_1:;
/* 1803dd790: mov rax, qword ptr [rbx + 0xe0] */
L_1803dd790_0:;
L_1803dd790_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xe0))));
L_1803dd790_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd790_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dd790_4:;
/* 1803dd797: mov rcx, qword ptr [r9] */
L_1803dd797_0:;
L_1803dd797_1:;
wr(s->u,40,8,mr((uint64_t)rd(s->r,136,8),8));
L_1803dd797_2:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dd797_3:;
/* 1803dd79a: inc edx */
L_1803dd79a_0:;
L_1803dd79a_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803dd79a_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803dd79a_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd79a_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd79a_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dd79a_6:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dd79a_7:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dd79a_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dd79a_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dd79a_10:;
/* 1803dd79c: mov eax, dword ptr [rax + r11*4] */
L_1803dd79c_0:;
L_1803dd79c_1:;
wr(s->u,16,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803dd79c_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dd79c_3:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dd79c_4:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803dd79c_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd79c_6:;
/* 1803dd7a0: inc r11 */
L_1803dd7a0_0:;
L_1803dd7a0_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x1)),8,0));
L_1803dd7a0_2:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0x1))));
L_1803dd7a0_3:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd7a0_4:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803dd7a0_5:;
wr(s->u,49,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803dd7a0_6:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dd7a0_7:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dd7a0_8:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dd7a0_9:;
/* 1803dd7a3: add r9, 8 */
L_1803dd7a3_0:;
L_1803dd7a3_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803dd7a3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803dd7a3_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803dd7a3_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd7a3_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dd7a3_6:;
wr(s->u,49,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dd7a3_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dd7a3_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dd7a3_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dd7a3_10:;
/* 1803dd7a7: mov dword ptr [r8 + rcx], eax */
L_1803dd7a7_0:;
L_1803dd7a7_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803dd7a7_2:;
wr(s->u,24,8,(rd(s->r,128,8)+rd(s->u,16,8)));
L_1803dd7a7_3:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dd7a7_4:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803dd7a7_5:;
/* 1803dd7ab: cmp edx, dword ptr [rbx + 0x30] */
L_1803dd7ab_0:;
L_1803dd7ab_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd7ab_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7ab_3:;
wr(s->u,59,4,rd(s->u,32,4));
L_1803dd7ab_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,59,4)));
L_1803dd7ab_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,59,4),4,1));
L_1803dd7ab_6:;
wr(s->u,63,4,(rd(s->r,16,4)-rd(s->u,59,4)));
L_1803dd7ab_7:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd7ab_8:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803dd7ab_9:;
wr(s->u,49,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803dd7ab_10:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dd7ab_11:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dd7ab_12:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dd7ab_13:;
/* 1803dd7ae: jl 0x1803dd790 */
L_1803dd7ae_0:;
L_1803dd7ae_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd7ae_2:;
if(rd(s->u,48,1)){goto L_1803dd790_0;}
L_1803dd7ae_3:;
return UINT64_C(0x1803dd7b0);
}
uint64_t b_1803dd790(CPU*s){
/* 1803dd790: mov rax, qword ptr [rbx + 0xe0] */
L_1803dd790_0:;
L_1803dd790_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xe0))));
L_1803dd790_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd790_3:;
wr(s->r,0,8,rd(s->u,40,8));
L_1803dd790_4:;
/* 1803dd797: mov rcx, qword ptr [r9] */
L_1803dd797_0:;
L_1803dd797_1:;
wr(s->u,40,8,mr((uint64_t)rd(s->r,136,8),8));
L_1803dd797_2:;
wr(s->r,8,8,rd(s->u,40,8));
L_1803dd797_3:;
/* 1803dd79a: inc edx */
L_1803dd79a_0:;
L_1803dd79a_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803dd79a_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803dd79a_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd79a_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd79a_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dd79a_6:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dd79a_7:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dd79a_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dd79a_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dd79a_10:;
/* 1803dd79c: mov eax, dword ptr [rax + r11*4] */
L_1803dd79c_0:;
L_1803dd79c_1:;
wr(s->u,16,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803dd79c_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803dd79c_3:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803dd79c_4:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803dd79c_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd79c_6:;
/* 1803dd7a0: inc r11 */
L_1803dd7a0_0:;
L_1803dd7a0_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),((U)UINT64_C(0x1)),8,0));
L_1803dd7a0_2:;
wr(s->r,152,8,(rd(s->r,152,8)+((U)UINT64_C(0x1))));
L_1803dd7a0_3:;
wr(s->r,519,1,(sx(rd(s->r,152,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd7a0_4:;
wr(s->r,518,1,(rd(s->r,152,8)==((U)UINT64_C(0x0))));
L_1803dd7a0_5:;
wr(s->u,49,8,(rd(s->r,152,8)&((U)UINT64_C(0xff))));
L_1803dd7a0_6:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dd7a0_7:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dd7a0_8:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dd7a0_9:;
/* 1803dd7a3: add r9, 8 */
L_1803dd7a3_0:;
L_1803dd7a3_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803dd7a3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803dd7a3_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803dd7a3_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd7a3_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803dd7a3_6:;
wr(s->u,49,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803dd7a3_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dd7a3_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dd7a3_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dd7a3_10:;
/* 1803dd7a7: mov dword ptr [r8 + rcx], eax */
L_1803dd7a7_0:;
L_1803dd7a7_1:;
wr(s->u,16,8,(rd(s->r,8,8)*((U)UINT64_C(0x1))));
L_1803dd7a7_2:;
wr(s->u,24,8,(rd(s->r,128,8)+rd(s->u,16,8)));
L_1803dd7a7_3:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803dd7a7_4:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803dd7a7_5:;
/* 1803dd7ab: cmp edx, dword ptr [rbx + 0x30] */
L_1803dd7ab_0:;
L_1803dd7ab_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803dd7ab_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7ab_3:;
wr(s->u,59,4,rd(s->u,32,4));
L_1803dd7ab_4:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,59,4)));
L_1803dd7ab_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,59,4),4,1));
L_1803dd7ab_6:;
wr(s->u,63,4,(rd(s->r,16,4)-rd(s->u,59,4)));
L_1803dd7ab_7:;
wr(s->r,519,1,(sx(rd(s->u,63,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd7ab_8:;
wr(s->r,518,1,(rd(s->u,63,4)==((U)UINT64_C(0x0))));
L_1803dd7ab_9:;
wr(s->u,49,4,(rd(s->u,63,4)&((U)UINT64_C(0xff))));
L_1803dd7ab_10:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803dd7ab_11:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dd7ab_12:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dd7ab_13:;
/* 1803dd7ae: jl 0x1803dd790 */
L_1803dd7ae_0:;
L_1803dd7ae_1:;
wr(s->u,48,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd7ae_2:;
if(rd(s->u,48,1)){goto L_1803dd790_0;}
L_1803dd7ae_3:;
return UINT64_C(0x1803dd7b0);
}
uint64_t b_1803dd7b0(CPU*s){
/* 1803dd7b0: inc r10d */
L_1803dd7b0_0:;
L_1803dd7b0_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803dd7b0_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803dd7b0_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803dd7b0_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd7b0_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803dd7b0_6:;
wr(s->u,13,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803dd7b0_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dd7b0_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dd7b0_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dd7b0_10:;
/* 1803dd7b3: add r8, 4 */
L_1803dd7b3_0:;
L_1803dd7b3_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803dd7b3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x4)),8,0));
L_1803dd7b3_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803dd7b3_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd7b3_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803dd7b3_6:;
wr(s->u,13,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803dd7b3_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803dd7b3_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dd7b3_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dd7b3_10:;
/* 1803dd7b7: cmp r10d, dword ptr [rbx + 0x60] */
L_1803dd7b7_0:;
L_1803dd7b7_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x60))));
L_1803dd7b7_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7b7_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803dd7b7_4:;
wr(s->r,512,1,(rd(s->r,144,4)<rd(s->u,23,4)));
L_1803dd7b7_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),rd(s->u,23,4),4,1));
L_1803dd7b7_6:;
wr(s->u,27,4,(rd(s->r,144,4)-rd(s->u,23,4)));
L_1803dd7b7_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd7b7_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803dd7b7_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803dd7b7_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803dd7b7_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dd7b7_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dd7b7_13:;
/* 1803dd7bb: jl 0x1803dd785 */
L_1803dd7bb_0:;
L_1803dd7bb_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd7bb_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dd785);}
L_1803dd7bb_3:;
return UINT64_C(0x1803dd7bd);
}
uint64_t b_1803dd7bd(CPU*s){
/* 1803dd7bd: mov eax, dword ptr [rbx + 0x80] */
L_1803dd7bd_0:;
L_1803dd7bd_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x80))));
L_1803dd7bd_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dd7bd_3:;
wr(s->r,0,4,rd(s->u,16,4));
L_1803dd7bd_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd7bd_5:;
/* 1803dd7c3: cmp dword ptr [rbx + 0x60], eax */
L_1803dd7c3_0:;
L_1803dd7c3_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x60))));
L_1803dd7c3_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7c3_3:;
wr(s->u,27,4,rd(s->u,16,4));
L_1803dd7c3_4:;
wr(s->r,512,1,(rd(s->u,27,4)<rd(s->r,0,4)));
L_1803dd7c3_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,27,4),rd(s->r,0,4),4,1));
L_1803dd7c3_6:;
wr(s->u,31,4,(rd(s->u,27,4)-rd(s->r,0,4)));
L_1803dd7c3_7:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd7c3_8:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803dd7c3_9:;
wr(s->u,21,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803dd7c3_10:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803dd7c3_11:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803dd7c3_12:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803dd7c3_13:;
/* 1803dd7c6: jl 0x1803dd7f5 */
L_1803dd7c6_0:;
L_1803dd7c6_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd7c6_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803dd7f5);}
L_1803dd7c6_3:;
return UINT64_C(0x1803dd7c8);
}
uint64_t b_1803dd7c8(CPU*s){
/* 1803dd7c8: cmp dword ptr [rbx + 0xc0], esi */
L_1803dd7c8_0:;
L_1803dd7c8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0xc0))));
L_1803dd7c8_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7c8_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1803dd7c8_4:;
wr(s->r,512,1,(rd(s->u,18,4)<rd(s->r,48,4)));
L_1803dd7c8_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),rd(s->r,48,4),4,1));
L_1803dd7c8_6:;
wr(s->u,22,4,(rd(s->u,18,4)-rd(s->r,48,4)));
L_1803dd7c8_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd7c8_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803dd7c8_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803dd7c8_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803dd7c8_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803dd7c8_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803dd7c8_13:;
/* 1803dd7ce: je 0x1803dd7f5 */
L_1803dd7ce_0:;
L_1803dd7ce_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd7f5);}
L_1803dd7ce_2:;
return UINT64_C(0x1803dd7d0);
}
uint64_t b_1803dd7d0(CPU*s){
/* 1803dd7d0: mov rdx, rdi */
L_1803dd7d0_0:;
L_1803dd7d0_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803dd7d0_2:;
/* 1803dd7d3: mov rcx, rbx */
L_1803dd7d3_0:;
L_1803dd7d3_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dd7d3_2:;
/* 1803dd7d6: call 0x1803dbdf0 */
L_1803dd7d6_0:;
L_1803dd7d6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd7d6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd7db)));
L_1803dd7d6_3:;
return (uint64_t)UINT64_C(0x1803dbdf0);
L_1803dd7d6_4:;
return UINT64_C(0x1803dd7db);
}
uint64_t b_1803dd7db(CPU*s){
/* 1803dd7db: mov eax, dword ptr [rbx + 0x7c] */
L_1803dd7db_0:;
L_1803dd7db_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x7c))));
L_1803dd7db_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7db_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dd7db_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd7db_5:;
/* 1803dd7de: mov dword ptr [rbx + 0xc0], esi */
L_1803dd7de_0:;
L_1803dd7de_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xc0))));
L_1803dd7de_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd7de_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dd7de_4:;
/* 1803dd7e4: neg eax */
L_1803dd7e4_0:;
L_1803dd7e4_1:;
wr(s->r,512,1,(rd(s->r,0,4)!=((U)UINT64_C(0x0))));
L_1803dd7e4_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,4),4,1));
L_1803dd7e4_3:;
wr(s->r,0,4,(-rd(s->r,0,4)));
L_1803dd7e4_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd7e4_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd7e4_6:;
wr(s->u,40,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd7e4_7:;
wr(s->u,48,1,pop(rd(s->u,40,4),4));
L_1803dd7e4_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dd7e4_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dd7e4_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd7e4_11:;
/* 1803dd7e6: mov dword ptr [rbx + 0x8c], esi */
L_1803dd7e6_0:;
L_1803dd7e6_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x8c))));
L_1803dd7e6_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd7e6_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dd7e6_4:;
/* 1803dd7ec: mov dword ptr [rbx + 0x80], esi */
L_1803dd7ec_0:;
L_1803dd7ec_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x80))));
L_1803dd7ec_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd7ec_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dd7ec_4:;
/* 1803dd7f2: mov dword ptr [rbx + 0x78], eax */
L_1803dd7f2_0:;
L_1803dd7f2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x78))));
L_1803dd7f2_2:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803dd7f2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dd7f2_4:;
/* 1803dd7f5: inc dword ptr [rbx + 0x4c] */
L_1803dd7f5_0:;
L_1803dd7f5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4c))));
L_1803dd7f5_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7f5_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,24,4),((U)UINT64_C(0x1)),4,0));
L_1803dd7f5_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7f5_5:;
wr(s->u,24,4,(rd(s->u,24,4)+((U)UINT64_C(0x1))));
L_1803dd7f5_6:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dd7f5_7:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7f5_8:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd7f5_9:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7f5_10:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dd7f5_11:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7f5_12:;
wr(s->u,40,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dd7f5_13:;
wr(s->u,48,1,pop(rd(s->u,40,4),4));
L_1803dd7f5_14:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dd7f5_15:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dd7f5_16:;
/* 1803dd7f8: mov eax, dword ptr [rbx + 0x60] */
L_1803dd7f8_0:;
L_1803dd7f8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x60))));
L_1803dd7f8_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7f8_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dd7f8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd7f8_5:;
/* 1803dd7fb: mov dword ptr [rbx + 0x48], esi */
L_1803dd7fb_0:;
L_1803dd7fb_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803dd7fb_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd7fb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dd7fb_4:;
/* 1803dd7fe: mov dword ptr [rbx + 0xc4], esi */
L_1803dd7fe_0:;
L_1803dd7fe_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xc4))));
L_1803dd7fe_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd7fe_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dd7fe_4:;
/* 1803dd804: mov rbx, qword ptr [rsp + 0x30] */
L_1803dd804_0:;
L_1803dd804_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dd804_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dd804_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803dd804_4:;
/* 1803dd809: mov rsi, qword ptr [rsp + 0x38] */
L_1803dd809_0:;
L_1803dd809_1:;
wr(s->u,16,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803dd809_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dd809_3:;
wr(s->r,48,8,rd(s->u,32,8));
L_1803dd809_4:;
/* 1803dd80e: add rsp, 0x20 */
L_1803dd80e_0:;
L_1803dd80e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dd80e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dd80e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dd80e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd80e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd80e_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd80e_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803dd80e_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dd80e_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dd80e_10:;
/* 1803dd812: pop rdi */
L_1803dd812_0:;
L_1803dd812_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803dd812_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd812_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd812_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803dd812_5:;
/* 1803dd813: ret  */
L_1803dd813_0:;
L_1803dd813_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd813_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd813_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dd813_4:;
return UINT64_C(0x1803dd814);
}
uint64_t b_1803dd7f5(CPU*s){
/* 1803dd7f5: inc dword ptr [rbx + 0x4c] */
L_1803dd7f5_0:;
L_1803dd7f5_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4c))));
L_1803dd7f5_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7f5_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,24,4),((U)UINT64_C(0x1)),4,0));
L_1803dd7f5_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7f5_5:;
wr(s->u,24,4,(rd(s->u,24,4)+((U)UINT64_C(0x1))));
L_1803dd7f5_6:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dd7f5_7:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7f5_8:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd7f5_9:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7f5_10:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803dd7f5_11:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7f5_12:;
wr(s->u,40,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803dd7f5_13:;
wr(s->u,48,1,pop(rd(s->u,40,4),4));
L_1803dd7f5_14:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dd7f5_15:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dd7f5_16:;
/* 1803dd7f8: mov eax, dword ptr [rbx + 0x60] */
L_1803dd7f8_0:;
L_1803dd7f8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x60))));
L_1803dd7f8_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd7f8_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803dd7f8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd7f8_5:;
/* 1803dd7fb: mov dword ptr [rbx + 0x48], esi */
L_1803dd7fb_0:;
L_1803dd7fb_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x48))));
L_1803dd7fb_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd7fb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803dd7fb_4:;
/* 1803dd7fe: mov dword ptr [rbx + 0xc4], esi */
L_1803dd7fe_0:;
L_1803dd7fe_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0xc4))));
L_1803dd7fe_2:;
wr(s->u,24,4,rd(s->r,48,4));
L_1803dd7fe_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803dd7fe_4:;
/* 1803dd804: mov rbx, qword ptr [rsp + 0x30] */
L_1803dd804_0:;
L_1803dd804_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dd804_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dd804_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803dd804_4:;
/* 1803dd809: mov rsi, qword ptr [rsp + 0x38] */
L_1803dd809_0:;
L_1803dd809_1:;
wr(s->u,16,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803dd809_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,16,8),8));
L_1803dd809_3:;
wr(s->r,48,8,rd(s->u,32,8));
L_1803dd809_4:;
/* 1803dd80e: add rsp, 0x20 */
L_1803dd80e_0:;
L_1803dd80e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dd80e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dd80e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dd80e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd80e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd80e_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd80e_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803dd80e_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dd80e_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dd80e_10:;
/* 1803dd812: pop rdi */
L_1803dd812_0:;
L_1803dd812_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803dd812_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd812_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd812_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803dd812_5:;
/* 1803dd813: ret  */
L_1803dd813_0:;
L_1803dd813_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd813_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd813_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dd813_4:;
return UINT64_C(0x1803dd814);
}
uint64_t b_1803dd820(CPU*s){
/* 1803dd820: mov qword ptr [rsp + 8], rbx */
L_1803dd820_0:;
L_1803dd820_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803dd820_2:;
wr(s->u,20,8,rd(s->r,24,8));
L_1803dd820_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803dd820_4:;
/* 1803dd825: push rdi */
L_1803dd825_0:;
L_1803dd825_1:;
wr(s->u,34,8,rd(s->r,56,8));
L_1803dd825_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd825_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,34,8));
L_1803dd825_4:;
/* 1803dd826: sub rsp, 0x20 */
L_1803dd826_0:;
L_1803dd826_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803dd826_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803dd826_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803dd826_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd826_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd826_6:;
wr(s->u,42,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd826_7:;
wr(s->u,50,1,pop(rd(s->u,42,8),8));
L_1803dd826_8:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803dd826_9:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803dd826_10:;
/* 1803dd82a: cmp dword ptr [rcx + 0x74], 0 */
L_1803dd82a_0:;
L_1803dd82a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x74))));
L_1803dd82a_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd82a_3:;
wr(s->u,52,4,rd(s->u,28,4));
L_1803dd82a_4:;
wr(s->r,512,1,(rd(s->u,52,4)<((U)UINT64_C(0x0))));
L_1803dd82a_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,52,4),((U)UINT64_C(0x0)),4,1));
L_1803dd82a_6:;
wr(s->u,56,4,(rd(s->u,52,4)-((U)UINT64_C(0x0))));
L_1803dd82a_7:;
wr(s->r,519,1,(sx(rd(s->u,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd82a_8:;
wr(s->r,518,1,(rd(s->u,56,4)==((U)UINT64_C(0x0))));
L_1803dd82a_9:;
wr(s->u,42,4,(rd(s->u,56,4)&((U)UINT64_C(0xff))));
L_1803dd82a_10:;
wr(s->u,50,1,pop(rd(s->u,42,4),4));
L_1803dd82a_11:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803dd82a_12:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803dd82a_13:;
/* 1803dd82e: mov rdi, rdx */
L_1803dd82e_0:;
L_1803dd82e_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803dd82e_2:;
/* 1803dd831: mov rbx, rcx */
L_1803dd831_0:;
L_1803dd831_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dd831_2:;
/* 1803dd834: mov dword ptr [rcx + 0x70], 0 */
L_1803dd834_0:;
L_1803dd834_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x70))));
L_1803dd834_2:;
wr(s->u,16,4,((U)UINT64_C(0x0)));
L_1803dd834_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd834_4:;
/* 1803dd83b: jle 0x1803dd866 */
L_1803dd83b_0:;
L_1803dd83b_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dd83b_2:;
wr(s->u,33,1,((rd(s->r,518,1)!=0)||(rd(s->u,32,1)!=0)));
L_1803dd83b_3:;
if(rd(s->u,33,1)){return UINT64_C(0x1803dd866);}
L_1803dd83b_4:;
return UINT64_C(0x1803dd83d);
}
uint64_t b_1803dd83d(CPU*s){
/* 1803dd83d: call 0x1803dc570 */
L_1803dd83d_0:;
L_1803dd83d_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd83d_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd842)));
L_1803dd83d_3:;
return (uint64_t)UINT64_C(0x1803dc570);
L_1803dd83d_4:;
return UINT64_C(0x1803dd842);
}
uint64_t b_1803dd842(CPU*s){
/* 1803dd842: mov r9, rdi */
L_1803dd842_0:;
L_1803dd842_1:;
wr(s->r,136,8,rd(s->r,56,8));
L_1803dd842_2:;
/* 1803dd845: xor r8d, r8d */
L_1803dd845_0:;
L_1803dd845_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd845_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd845_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803dd845_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dd845_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd845_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803dd845_7:;
wr(s->u,28,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803dd845_8:;
wr(s->u,36,1,pop(rd(s->u,28,4),4));
L_1803dd845_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803dd845_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803dd845_11:;
/* 1803dd848: sub dword ptr [rbx + 0x74], eax */
L_1803dd848_0:;
L_1803dd848_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x74))));
L_1803dd848_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd848_3:;
wr(s->r,512,1,(rd(s->u,16,4)<rd(s->r,0,4)));
L_1803dd848_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd848_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,4),rd(s->r,0,4),4,1));
L_1803dd848_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd848_7:;
wr(s->u,16,4,(rd(s->u,16,4)-rd(s->r,0,4)));
L_1803dd848_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd848_9:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd848_10:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd848_11:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd848_12:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803dd848_13:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd848_14:;
wr(s->u,28,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803dd848_15:;
wr(s->u,36,1,pop(rd(s->u,28,4),4));
L_1803dd848_16:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803dd848_17:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803dd848_18:;
/* 1803dd84b: xor edx, edx */
L_1803dd84b_0:;
L_1803dd84b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd84b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd84b_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1803dd84b_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dd84b_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd84b_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803dd84b_7:;
wr(s->u,28,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803dd84b_8:;
wr(s->u,36,1,pop(rd(s->u,28,4),4));
L_1803dd84b_9:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803dd84b_10:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803dd84b_11:;
/* 1803dd84d: mov rcx, rbx */
L_1803dd84d_0:;
L_1803dd84d_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803dd84d_2:;
/* 1803dd850: mov dword ptr [rbx + 0x70], 0 */
L_1803dd850_0:;
L_1803dd850_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x70))));
L_1803dd850_2:;
wr(s->u,16,4,((U)UINT64_C(0x0)));
L_1803dd850_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd850_4:;
/* 1803dd857: mov rbx, qword ptr [rsp + 0x30] */
L_1803dd857_0:;
L_1803dd857_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dd857_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dd857_3:;
wr(s->r,24,8,rd(s->u,20,8));
L_1803dd857_4:;
/* 1803dd85c: add rsp, 0x20 */
L_1803dd85c_0:;
L_1803dd85c_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dd85c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dd85c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dd85c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd85c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd85c_6:;
wr(s->u,28,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd85c_7:;
wr(s->u,36,1,pop(rd(s->u,28,8),8));
L_1803dd85c_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803dd85c_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803dd85c_10:;
/* 1803dd860: pop rdi */
L_1803dd860_0:;
L_1803dd860_1:;
wr(s->u,38,8,((U)UINT64_C(0x0)));
L_1803dd860_2:;
wr(s->u,38,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd860_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd860_4:;
wr(s->r,56,8,rd(s->u,38,8));
L_1803dd860_5:;
/* 1803dd861: jmp 0x1803dbd60 */
L_1803dd861_0:;
L_1803dd861_1:;
return UINT64_C(0x1803dbd60);
L_1803dd861_2:;
return UINT64_C(0x1803dd866);
}
uint64_t b_1803dd866(CPU*s){
/* 1803dd866: or eax, 0xffffffff */
L_1803dd866_0:;
L_1803dd866_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd866_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd866_3:;
wr(s->r,0,4,(rd(s->r,0,4)|((U)UINT64_C(0xffffffff))));
L_1803dd866_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd866_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd866_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd866_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd866_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803dd866_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dd866_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dd866_11:;
/* 1803dd869: mov rbx, qword ptr [rsp + 0x30] */
L_1803dd869_0:;
L_1803dd869_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dd869_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd869_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803dd869_4:;
/* 1803dd86e: add rsp, 0x20 */
L_1803dd86e_0:;
L_1803dd86e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dd86e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803dd86e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803dd86e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd86e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd86e_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd86e_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dd86e_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dd86e_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dd86e_10:;
/* 1803dd872: pop rdi */
L_1803dd872_0:;
L_1803dd872_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803dd872_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd872_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd872_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803dd872_5:;
/* 1803dd873: ret  */
L_1803dd873_0:;
L_1803dd873_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd873_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd873_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dd873_4:;
return UINT64_C(0x1803dd874);
}
uint64_t b_1803dd880(CPU*s){
/* 1803dd880: sub rcx, 8 */
L_1803dd880_0:;
L_1803dd880_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x8))));
L_1803dd880_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,1));
L_1803dd880_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x8))));
L_1803dd880_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd880_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803dd880_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803dd880_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dd880_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd880_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd880_10:;
/* 1803dd884: jmp 0x1803dd820 */
L_1803dd884_0:;
L_1803dd884_1:;
return UINT64_C(0x1803dd820);
L_1803dd884_2:;
return UINT64_C(0x1803dd889);
}
uint64_t b_1803dd890(CPU*s){
/* 1803dd890: push rdi */
L_1803dd890_0:;
L_1803dd890_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803dd890_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd890_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803dd890_4:;
/* 1803dd892: sub rsp, 0x40 */
L_1803dd892_0:;
L_1803dd892_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x40))));
L_1803dd892_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,1));
L_1803dd892_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x40))));
L_1803dd892_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd892_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd892_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd892_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dd892_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dd892_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dd892_10:;
/* 1803dd896: mov qword ptr [rsp + 0x30], 0xfffffffffffffffe */
L_1803dd896_0:;
L_1803dd896_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dd896_2:;
wr(s->u,8,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803dd896_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dd896_4:;
/* 1803dd89f: mov qword ptr [rsp + 0x58], rbx */
L_1803dd89f_0:;
L_1803dd89f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803dd89f_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803dd89f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dd89f_4:;
/* 1803dd8a4: mov qword ptr [rsp + 0x60], rbp */
L_1803dd8a4_0:;
L_1803dd8a4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dd8a4_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803dd8a4_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dd8a4_4:;
/* 1803dd8a9: mov qword ptr [rsp + 0x68], rsi */
L_1803dd8a9_0:;
L_1803dd8a9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803dd8a9_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803dd8a9_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dd8a9_4:;
/* 1803dd8ae: mov edi, r9d */
L_1803dd8ae_0:;
L_1803dd8ae_1:;
wr(s->r,56,4,rd(s->r,136,4));
L_1803dd8ae_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dd8ae_3:;
/* 1803dd8b1: mov esi, r8d */
L_1803dd8b1_0:;
L_1803dd8b1_1:;
wr(s->r,48,4,rd(s->r,128,4));
L_1803dd8b1_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803dd8b1_3:;
/* 1803dd8b4: mov rbp, rdx */
L_1803dd8b4_0:;
L_1803dd8b4_1:;
wr(s->r,40,8,rd(s->r,16,8));
L_1803dd8b4_2:;
/* 1803dd8b7: mov rbx, rcx */
L_1803dd8b7_0:;
L_1803dd8b7_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dd8b7_2:;
/* 1803dd8ba: mov ecx, 0xd0 */
L_1803dd8ba_0:;
L_1803dd8ba_1:;
wr(s->r,8,8,((U)UINT64_C(0xd0)));
L_1803dd8ba_2:;
/* 1803dd8bf: call 0x180003140 */
L_1803dd8bf_0:;
L_1803dd8bf_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd8bf_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd8c4)));
L_1803dd8bf_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803dd8bf_4:;
return UINT64_C(0x1803dd8c4);
}
uint64_t b_1803dd8c4(CPU*s){
/* 1803dd8c4: mov qword ptr [rsp + 0x50], rax */
L_1803dd8c4_0:;
L_1803dd8c4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dd8c4_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803dd8c4_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dd8c4_4:;
/* 1803dd8c9: test rax, rax */
L_1803dd8c9_0:;
L_1803dd8c9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd8c9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd8c9_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803dd8c9_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd8c9_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803dd8c9_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803dd8c9_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dd8c9_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dd8c9_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dd8c9_10:;
/* 1803dd8cc: je 0x1803dd8eb */
L_1803dd8cc_0:;
L_1803dd8cc_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd8eb);}
L_1803dd8cc_2:;
return UINT64_C(0x1803dd8ce);
}
uint64_t b_1803dd8ce(CPU*s){
/* 1803dd8ce: mov r10d, dword ptr [rsp + 0x70] */
L_1803dd8ce_0:;
L_1803dd8ce_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dd8ce_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd8ce_3:;
wr(s->r,144,4,rd(s->u,12,4));
L_1803dd8ce_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803dd8ce_5:;
/* 1803dd8d3: mov dword ptr [rsp + 0x20], r10d */
L_1803dd8d3_0:;
L_1803dd8d3_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dd8d3_2:;
wr(s->u,8,4,rd(s->r,144,4));
L_1803dd8d3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803dd8d3_4:;
/* 1803dd8d8: mov r9d, edi */
L_1803dd8d8_0:;
L_1803dd8d8_1:;
wr(s->r,136,4,rd(s->r,56,4));
L_1803dd8d8_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dd8d8_3:;
/* 1803dd8db: mov r8d, esi */
L_1803dd8db_0:;
L_1803dd8db_1:;
wr(s->r,128,4,rd(s->r,48,4));
L_1803dd8db_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dd8db_3:;
/* 1803dd8de: mov rdx, rbp */
L_1803dd8de_0:;
L_1803dd8de_1:;
wr(s->r,16,8,rd(s->r,40,8));
L_1803dd8de_2:;
/* 1803dd8e1: mov rcx, rax */
L_1803dd8e1_0:;
L_1803dd8e1_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dd8e1_2:;
/* 1803dd8e4: call 0x1803e5de0 */
L_1803dd8e4_0:;
L_1803dd8e4_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd8e4_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd8e9)));
L_1803dd8e4_3:;
return (uint64_t)UINT64_C(0x1803e5de0);
L_1803dd8e4_4:;
return UINT64_C(0x1803dd8e9);
}
uint64_t b_1803dd8e9(CPU*s){
/* 1803dd8e9: jmp 0x1803dd8ed */
L_1803dd8e9_0:;
L_1803dd8e9_1:;
return UINT64_C(0x1803dd8ed);
L_1803dd8e9_2:;
return UINT64_C(0x1803dd8eb);
}
uint64_t b_1803dd8eb(CPU*s){
/* 1803dd8eb: xor eax, eax */
L_1803dd8eb_0:;
L_1803dd8eb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd8eb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd8eb_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dd8eb_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd8eb_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd8eb_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd8eb_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd8eb_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803dd8eb_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dd8eb_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dd8eb_11:;
/* 1803dd8ed: mov qword ptr [rbx], rax */
L_1803dd8ed_0:;
L_1803dd8ed_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803dd8ed_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,8,8));
L_1803dd8ed_3:;
/* 1803dd8f0: xor eax, eax */
L_1803dd8f0_0:;
L_1803dd8f0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd8f0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd8f0_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dd8f0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd8f0_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd8f0_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd8f0_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd8f0_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803dd8f0_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dd8f0_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dd8f0_11:;
/* 1803dd8f2: mov rbx, qword ptr [rsp + 0x58] */
L_1803dd8f2_0:;
L_1803dd8f2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803dd8f2_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd8f2_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803dd8f2_4:;
/* 1803dd8f7: mov rbp, qword ptr [rsp + 0x60] */
L_1803dd8f7_0:;
L_1803dd8f7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dd8f7_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd8f7_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803dd8f7_4:;
/* 1803dd8fc: mov rsi, qword ptr [rsp + 0x68] */
L_1803dd8fc_0:;
L_1803dd8fc_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803dd8fc_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd8fc_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1803dd8fc_4:;
/* 1803dd901: add rsp, 0x40 */
L_1803dd901_0:;
L_1803dd901_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dd901_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803dd901_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803dd901_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd901_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd901_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd901_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dd901_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dd901_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dd901_10:;
/* 1803dd905: pop rdi */
L_1803dd905_0:;
L_1803dd905_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803dd905_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd905_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd905_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1803dd905_5:;
/* 1803dd906: ret  */
L_1803dd906_0:;
L_1803dd906_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd906_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd906_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dd906_4:;
return UINT64_C(0x1803dd907);
}
uint64_t b_1803dd8ed(CPU*s){
/* 1803dd8ed: mov qword ptr [rbx], rax */
L_1803dd8ed_0:;
L_1803dd8ed_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803dd8ed_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,8,8));
L_1803dd8ed_3:;
/* 1803dd8f0: xor eax, eax */
L_1803dd8f0_0:;
L_1803dd8f0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd8f0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd8f0_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dd8f0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd8f0_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd8f0_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd8f0_7:;
wr(s->u,24,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd8f0_8:;
wr(s->u,32,1,pop(rd(s->u,24,4),4));
L_1803dd8f0_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dd8f0_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dd8f0_11:;
/* 1803dd8f2: mov rbx, qword ptr [rsp + 0x58] */
L_1803dd8f2_0:;
L_1803dd8f2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803dd8f2_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd8f2_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803dd8f2_4:;
/* 1803dd8f7: mov rbp, qword ptr [rsp + 0x60] */
L_1803dd8f7_0:;
L_1803dd8f7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dd8f7_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd8f7_3:;
wr(s->r,40,8,rd(s->u,16,8));
L_1803dd8f7_4:;
/* 1803dd8fc: mov rsi, qword ptr [rsp + 0x68] */
L_1803dd8fc_0:;
L_1803dd8fc_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803dd8fc_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dd8fc_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1803dd8fc_4:;
/* 1803dd901: add rsp, 0x40 */
L_1803dd901_0:;
L_1803dd901_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dd901_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803dd901_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803dd901_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd901_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd901_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd901_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dd901_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dd901_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dd901_10:;
/* 1803dd905: pop rdi */
L_1803dd905_0:;
L_1803dd905_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803dd905_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd905_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd905_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1803dd905_5:;
/* 1803dd906: ret  */
L_1803dd906_0:;
L_1803dd906_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd906_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd906_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dd906_4:;
return UINT64_C(0x1803dd907);
}
uint64_t b_1803dd910(CPU*s){
/* 1803dd910: sub rsp, 0x28 */
L_1803dd910_0:;
L_1803dd910_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803dd910_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803dd910_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803dd910_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd910_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd910_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd910_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dd910_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd910_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd910_10:;
/* 1803dd914: test rcx, rcx */
L_1803dd914_0:;
L_1803dd914_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd914_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd914_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803dd914_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd914_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803dd914_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803dd914_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dd914_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd914_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd914_10:;
/* 1803dd917: je 0x1803dd923 */
L_1803dd917_0:;
L_1803dd917_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dd923);}
L_1803dd917_2:;
return UINT64_C(0x1803dd919);
}
uint64_t b_1803dd919(CPU*s){
/* 1803dd919: mov rax, qword ptr [rcx] */
L_1803dd919_0:;
L_1803dd919_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dd919_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803dd919_3:;
/* 1803dd91c: mov edx, 1 */
L_1803dd91c_0:;
L_1803dd91c_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803dd91c_2:;
/* 1803dd921: call qword ptr [rax] */
L_1803dd921_0:;
L_1803dd921_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803dd921_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803dd921_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd921_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd923)));
L_1803dd921_5:;
return (uint64_t)rd(s->u,8,8);
L_1803dd921_6:;
return UINT64_C(0x1803dd923);
}
uint64_t b_1803dd923(CPU*s){
/* 1803dd923: xor eax, eax */
L_1803dd923_0:;
L_1803dd923_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd923_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd923_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dd923_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dd923_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd923_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dd923_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dd923_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803dd923_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd923_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd923_11:;
/* 1803dd925: add rsp, 0x28 */
L_1803dd925_0:;
L_1803dd925_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dd925_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803dd925_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803dd925_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd925_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd925_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd925_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dd925_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dd925_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dd925_10:;
/* 1803dd929: ret  */
L_1803dd929_0:;
L_1803dd929_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dd929_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dd929_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dd929_4:;
return UINT64_C(0x1803dd92a);
}
uint64_t b_1803dd960(CPU*s){
/* 1803dd960: push rdi */
L_1803dd960_0:;
L_1803dd960_1:;
wr(s->u,41,8,rd(s->r,56,8));
L_1803dd960_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd960_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,41,8));
L_1803dd960_4:;
/* 1803dd962: sub rsp, 0x60 */
L_1803dd962_0:;
L_1803dd962_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x60))));
L_1803dd962_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x60)),8,1));
L_1803dd962_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x60))));
L_1803dd962_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd962_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dd962_6:;
wr(s->u,49,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dd962_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dd962_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dd962_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dd962_10:;
/* 1803dd966: mov qword ptr [rsp + 0x40], 0xfffffffffffffffe */
L_1803dd966_0:;
L_1803dd966_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803dd966_2:;
wr(s->u,16,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803dd966_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803dd966_4:;
/* 1803dd96f: mov qword ptr [rsp + 0x70], rbx */
L_1803dd96f_0:;
L_1803dd96f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dd96f_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803dd96f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803dd96f_4:;
/* 1803dd974: mov qword ptr [rsp + 0x80], rsi */
L_1803dd974_0:;
L_1803dd974_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803dd974_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803dd974_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803dd974_4:;
/* 1803dd97c: movaps xmmword ptr [rsp + 0x50], xmm6 */
L_1803dd97c_0:;
L_1803dd97c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dd97c_2:;
wr(s->u,24,16,rd(s->r,4992,16));
L_1803dd97c_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803dd97c_4:;
/* 1803dd981: mov esi, r9d */
L_1803dd981_0:;
L_1803dd981_1:;
wr(s->r,48,4,rd(s->r,136,4));
L_1803dd981_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803dd981_3:;
/* 1803dd984: movaps xmm6, xmm2 */
L_1803dd984_0:;
L_1803dd984_1:;
wr(s->r,4992,4,rd(s->r,4736,4));
L_1803dd984_2:;
wr(s->r,4996,4,rd(s->r,4740,4));
L_1803dd984_3:;
wr(s->r,5000,4,rd(s->r,4744,4));
L_1803dd984_4:;
wr(s->r,5004,4,rd(s->r,4748,4));
L_1803dd984_5:;
/* 1803dd987: mov rdi, rdx */
L_1803dd987_0:;
L_1803dd987_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803dd987_2:;
/* 1803dd98a: mov rbx, rcx */
L_1803dd98a_0:;
L_1803dd98a_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dd98a_2:;
/* 1803dd98d: test rdx, rdx */
L_1803dd98d_0:;
L_1803dd98d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd98d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd98d_3:;
wr(s->u,59,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803dd98d_4:;
wr(s->r,519,1,(sx(rd(s->u,59,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd98d_5:;
wr(s->r,518,1,(rd(s->u,59,8)==((U)UINT64_C(0x0))));
L_1803dd98d_6:;
wr(s->u,49,8,(rd(s->u,59,8)&((U)UINT64_C(0xff))));
L_1803dd98d_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803dd98d_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803dd98d_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803dd98d_10:;
/* 1803dd990: jne 0x1803dd99c */
L_1803dd990_0:;
L_1803dd990_1:;
wr(s->u,40,1,(!rd(s->r,518,1)));
L_1803dd990_2:;
if(rd(s->u,40,1)){return UINT64_C(0x1803dd99c);}
L_1803dd990_3:;
return UINT64_C(0x1803dd992);
}
uint64_t b_1803dd992(CPU*s){
/* 1803dd992: mov eax, 0x4c4b43 */
L_1803dd992_0:;
L_1803dd992_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803dd992_2:;
/* 1803dd997: jmp 0x1803dda3b */
L_1803dd997_0:;
L_1803dd997_1:;
return UINT64_C(0x1803dda3b);
L_1803dd997_2:;
return UINT64_C(0x1803dd99c);
}
uint64_t b_1803dd99c(CPU*s){
/* 1803dd99c: comiss xmm6, dword ptr [rip + 0x42ef85] */
L_1803dd99c_0:;
L_1803dd99c_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803dd99c_2:;
wr(s->u,1,1,isnan(fv(mr(UINT64_C(0x18080c928),4),4)));
L_1803dd99c_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803dd99c_4:;
wr(s->u,2,1,(fv(rd(s->r,4992,4),4)==fv(mr(UINT64_C(0x18080c928),4),4)));
L_1803dd99c_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803dd99c_6:;
wr(s->u,3,1,(fv(rd(s->r,4992,4),4)<fv(mr(UINT64_C(0x18080c928),4),4)));
L_1803dd99c_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803dd99c_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd99c_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803dd99c_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803dd99c_11:;
/* 1803dd9a3: jb 0x1803dd9af */
L_1803dd9a3_0:;
L_1803dd9a3_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803dd9af);}
L_1803dd9a3_2:;
return UINT64_C(0x1803dd9a5);
}
uint64_t b_1803dd9a5(CPU*s){
/* 1803dd9a5: mov eax, 0x4c4b43 */
L_1803dd9a5_0:;
L_1803dd9a5_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803dd9a5_2:;
/* 1803dd9aa: jmp 0x1803dda3b */
L_1803dd9aa_0:;
L_1803dd9aa_1:;
return UINT64_C(0x1803dda3b);
L_1803dd9aa_2:;
return UINT64_C(0x1803dd9af);
}
uint64_t b_1803dd9af(CPU*s){
/* 1803dd9af: cmp dword ptr [rsp + 0xa0], 1 */
L_1803dd9af_0:;
L_1803dd9af_1:;
wr(s->u,0,8,(((U)UINT64_C(0xa0))+rd(s->r,32,8)));
L_1803dd9af_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dd9af_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803dd9af_4:;
wr(s->r,512,1,(rd(s->u,19,4)<((U)UINT64_C(0x1))));
L_1803dd9af_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),((U)UINT64_C(0x1)),4,1));
L_1803dd9af_6:;
wr(s->u,23,4,(rd(s->u,19,4)-((U)UINT64_C(0x1))));
L_1803dd9af_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dd9af_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803dd9af_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803dd9af_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803dd9af_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803dd9af_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803dd9af_13:;
/* 1803dd9b7: jne 0x1803dda08 */
L_1803dd9b7_0:;
L_1803dd9b7_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1803dd9b7_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803dda08);}
L_1803dd9b7_3:;
return UINT64_C(0x1803dd9b9);
}
uint64_t b_1803dd9b9(CPU*s){
/* 1803dd9b9: mov ecx, 0x130 */
L_1803dd9b9_0:;
L_1803dd9b9_1:;
wr(s->r,8,8,((U)UINT64_C(0x130)));
L_1803dd9b9_2:;
/* 1803dd9be: call 0x180003140 */
L_1803dd9be_0:;
L_1803dd9be_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd9be_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd9c3)));
L_1803dd9be_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803dd9be_4:;
return UINT64_C(0x1803dd9c3);
}
uint64_t b_1803dd9c3(CPU*s){
/* 1803dd9c3: mov qword ptr [rsp + 0x78], rax */
L_1803dd9c3_0:;
L_1803dd9c3_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803dd9c3_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803dd9c3_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dd9c3_4:;
/* 1803dd9c8: test rax, rax */
L_1803dd9c8_0:;
L_1803dd9c8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dd9c8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dd9c8_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803dd9c8_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dd9c8_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803dd9c8_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803dd9c8_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dd9c8_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dd9c8_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dd9c8_10:;
/* 1803dd9cb: je 0x1803dda01 */
L_1803dd9cb_0:;
L_1803dd9cb_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dda01);}
L_1803dd9cb_2:;
return UINT64_C(0x1803dd9cd);
}
uint64_t b_1803dd9cd(CPU*s){
/* 1803dd9cd: mov ecx, dword ptr [rsp + 0xa8] */
L_1803dd9cd_0:;
L_1803dd9cd_1:;
wr(s->u,8,8,(((U)UINT64_C(0xa8))+rd(s->r,32,8)));
L_1803dd9cd_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dd9cd_3:;
wr(s->r,8,4,rd(s->u,20,4));
L_1803dd9cd_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd9cd_5:;
/* 1803dd9d4: mov dword ptr [rsp + 0x30], ecx */
L_1803dd9d4_0:;
L_1803dd9d4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803dd9d4_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803dd9d4_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd9d4_4:;
/* 1803dd9d8: mov ecx, dword ptr [rsp + 0x98] */
L_1803dd9d8_0:;
L_1803dd9d8_1:;
wr(s->u,8,8,(((U)UINT64_C(0x98))+rd(s->r,32,8)));
L_1803dd9d8_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dd9d8_3:;
wr(s->r,8,4,rd(s->u,20,4));
L_1803dd9d8_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd9d8_5:;
/* 1803dd9df: mov dword ptr [rsp + 0x28], ecx */
L_1803dd9df_0:;
L_1803dd9df_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803dd9df_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803dd9df_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd9df_4:;
/* 1803dd9e3: mov ecx, dword ptr [rsp + 0x90] */
L_1803dd9e3_0:;
L_1803dd9e3_1:;
wr(s->u,8,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803dd9e3_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dd9e3_3:;
wr(s->r,8,4,rd(s->u,20,4));
L_1803dd9e3_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dd9e3_5:;
/* 1803dd9ea: mov dword ptr [rsp + 0x20], ecx */
L_1803dd9ea_0:;
L_1803dd9ea_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dd9ea_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803dd9ea_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803dd9ea_4:;
/* 1803dd9ee: mov r9d, esi */
L_1803dd9ee_0:;
L_1803dd9ee_1:;
wr(s->r,136,4,rd(s->r,48,4));
L_1803dd9ee_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dd9ee_3:;
/* 1803dd9f1: movaps xmm2, xmm6 */
L_1803dd9f1_0:;
L_1803dd9f1_1:;
wr(s->r,4736,4,rd(s->r,4992,4));
L_1803dd9f1_2:;
wr(s->r,4740,4,rd(s->r,4996,4));
L_1803dd9f1_3:;
wr(s->r,4744,4,rd(s->r,5000,4));
L_1803dd9f1_4:;
wr(s->r,4748,4,rd(s->r,5004,4));
L_1803dd9f1_5:;
/* 1803dd9f4: mov rdx, rdi */
L_1803dd9f4_0:;
L_1803dd9f4_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803dd9f4_2:;
/* 1803dd9f7: mov rcx, rax */
L_1803dd9f7_0:;
L_1803dd9f7_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dd9f7_2:;
/* 1803dd9fa: call 0x1803e77d0 */
L_1803dd9fa_0:;
L_1803dd9fa_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dd9fa_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dd9ff)));
L_1803dd9fa_3:;
return (uint64_t)UINT64_C(0x1803e77d0);
L_1803dd9fa_4:;
return UINT64_C(0x1803dd9ff);
}
uint64_t b_1803dd9ff(CPU*s){
/* 1803dd9ff: jmp 0x1803dda03 */
L_1803dd9ff_0:;
L_1803dd9ff_1:;
return UINT64_C(0x1803dda03);
L_1803dd9ff_2:;
return UINT64_C(0x1803dda01);
}
uint64_t b_1803dda01(CPU*s){
/* 1803dda01: xor eax, eax */
L_1803dda01_0:;
L_1803dda01_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dda01_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dda01_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dda01_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dda01_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dda01_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dda01_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dda01_8:;
wr(s->u,12,1,pop(rd(s->u,8,4),4));
L_1803dda01_9:;
wr(s->u,13,1,(rd(s->u,12,1)&((U)UINT64_C(0x1))));
L_1803dda01_10:;
wr(s->r,514,1,(rd(s->u,13,1)==((U)UINT64_C(0x0))));
L_1803dda01_11:;
/* 1803dda03: mov qword ptr [rbx], rax */
L_1803dda03_0:;
L_1803dda03_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803dda03_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803dda03_3:;
/* 1803dda06: jmp 0x1803dda39 */
L_1803dda06_0:;
L_1803dda06_1:;
return UINT64_C(0x1803dda39);
L_1803dda06_2:;
return UINT64_C(0x1803dda08);
}
uint64_t b_1803dda03(CPU*s){
/* 1803dda03: mov qword ptr [rbx], rax */
L_1803dda03_0:;
L_1803dda03_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803dda03_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803dda03_3:;
/* 1803dda06: jmp 0x1803dda39 */
L_1803dda06_0:;
L_1803dda06_1:;
return UINT64_C(0x1803dda39);
L_1803dda06_2:;
return UINT64_C(0x1803dda08);
}
uint64_t b_1803dda08(CPU*s){
/* 1803dda08: mov ecx, 0x138 */
L_1803dda08_0:;
L_1803dda08_1:;
wr(s->r,8,8,((U)UINT64_C(0x138)));
L_1803dda08_2:;
/* 1803dda0d: call 0x180003140 */
L_1803dda0d_0:;
L_1803dda0d_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dda0d_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dda12)));
L_1803dda0d_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803dda0d_4:;
return UINT64_C(0x1803dda12);
}
uint64_t b_1803dda12(CPU*s){
/* 1803dda12: mov qword ptr [rsp + 0x78], rax */
L_1803dda12_0:;
L_1803dda12_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803dda12_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803dda12_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dda12_4:;
/* 1803dda17: test rax, rax */
L_1803dda17_0:;
L_1803dda17_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dda17_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dda17_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803dda17_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dda17_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803dda17_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803dda17_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803dda17_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803dda17_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803dda17_10:;
/* 1803dda1a: je 0x1803dda34 */
L_1803dda1a_0:;
L_1803dda1a_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803dda34);}
L_1803dda1a_2:;
return UINT64_C(0x1803dda1c);
}
uint64_t b_1803dda1c(CPU*s){
/* 1803dda1c: mov r9d, dword ptr [rsp + 0x90] */
L_1803dda1c_0:;
L_1803dda1c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803dda1c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dda1c_3:;
wr(s->r,136,4,rd(s->u,8,4));
L_1803dda1c_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dda1c_5:;
/* 1803dda24: movaps xmm2, xmm6 */
L_1803dda24_0:;
L_1803dda24_1:;
wr(s->r,4736,4,rd(s->r,4992,4));
L_1803dda24_2:;
wr(s->r,4740,4,rd(s->r,4996,4));
L_1803dda24_3:;
wr(s->r,4744,4,rd(s->r,5000,4));
L_1803dda24_4:;
wr(s->r,4748,4,rd(s->r,5004,4));
L_1803dda24_5:;
/* 1803dda27: mov rdx, rdi */
L_1803dda27_0:;
L_1803dda27_1:;
wr(s->r,16,8,rd(s->r,56,8));
L_1803dda27_2:;
/* 1803dda2a: mov rcx, rax */
L_1803dda2a_0:;
L_1803dda2a_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803dda2a_2:;
/* 1803dda2d: call 0x1803e6390 */
L_1803dda2d_0:;
L_1803dda2d_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dda2d_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dda32)));
L_1803dda2d_3:;
return (uint64_t)UINT64_C(0x1803e6390);
L_1803dda2d_4:;
return UINT64_C(0x1803dda32);
}
uint64_t b_1803dda32(CPU*s){
/* 1803dda32: jmp 0x1803dda36 */
L_1803dda32_0:;
L_1803dda32_1:;
return UINT64_C(0x1803dda36);
L_1803dda32_2:;
return UINT64_C(0x1803dda34);
}
uint64_t b_1803dda34(CPU*s){
/* 1803dda34: xor eax, eax */
L_1803dda34_0:;
L_1803dda34_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dda34_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dda34_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dda34_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dda34_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dda34_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dda34_7:;
wr(s->u,48,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dda34_8:;
wr(s->u,56,1,pop(rd(s->u,48,4),4));
L_1803dda34_9:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803dda34_10:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803dda34_11:;
/* 1803dda36: mov qword ptr [rbx], rax */
L_1803dda36_0:;
L_1803dda36_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803dda36_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,16,8));
L_1803dda36_3:;
/* 1803dda39: xor eax, eax */
L_1803dda39_0:;
L_1803dda39_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dda39_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dda39_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dda39_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dda39_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dda39_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dda39_7:;
wr(s->u,48,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dda39_8:;
wr(s->u,56,1,pop(rd(s->u,48,4),4));
L_1803dda39_9:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803dda39_10:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803dda39_11:;
/* 1803dda3b: mov rbx, qword ptr [rsp + 0x70] */
L_1803dda3b_0:;
L_1803dda3b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dda3b_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dda3b_3:;
wr(s->r,24,8,rd(s->u,40,8));
L_1803dda3b_4:;
/* 1803dda40: mov rsi, qword ptr [rsp + 0x80] */
L_1803dda40_0:;
L_1803dda40_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803dda40_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dda40_3:;
wr(s->r,48,8,rd(s->u,40,8));
L_1803dda40_4:;
/* 1803dda48: movaps xmm6, xmmword ptr [rsp + 0x50] */
L_1803dda48_0:;
L_1803dda48_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dda48_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dda48_3:;
wr(s->u,66,16,rd(s->u,24,16));
L_1803dda48_4:;
wr(s->r,4992,4,rd(s->u,66,4));
L_1803dda48_5:;
wr(s->r,4996,4,rd(s->u,70,4));
L_1803dda48_6:;
wr(s->r,5000,4,rd(s->u,74,4));
L_1803dda48_7:;
wr(s->r,5004,4,rd(s->u,78,4));
L_1803dda48_8:;
/* 1803dda4d: add rsp, 0x60 */
L_1803dda4d_0:;
L_1803dda4d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x60)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dda4d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x60)),8,0));
L_1803dda4d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x60))));
L_1803dda4d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dda4d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dda4d_6:;
wr(s->u,48,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dda4d_7:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_1803dda4d_8:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803dda4d_9:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803dda4d_10:;
/* 1803dda51: pop rdi */
L_1803dda51_0:;
L_1803dda51_1:;
wr(s->u,58,8,((U)UINT64_C(0x0)));
L_1803dda51_2:;
wr(s->u,58,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dda51_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dda51_4:;
wr(s->r,56,8,rd(s->u,58,8));
L_1803dda51_5:;
/* 1803dda52: ret  */
L_1803dda52_0:;
L_1803dda52_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dda52_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dda52_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dda52_4:;
return UINT64_C(0x1803dda53);
}
uint64_t b_1803dda36(CPU*s){
/* 1803dda36: mov qword ptr [rbx], rax */
L_1803dda36_0:;
L_1803dda36_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803dda36_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,16,8));
L_1803dda36_3:;
/* 1803dda39: xor eax, eax */
L_1803dda39_0:;
L_1803dda39_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dda39_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dda39_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dda39_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dda39_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dda39_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dda39_7:;
wr(s->u,48,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dda39_8:;
wr(s->u,56,1,pop(rd(s->u,48,4),4));
L_1803dda39_9:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803dda39_10:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803dda39_11:;
/* 1803dda3b: mov rbx, qword ptr [rsp + 0x70] */
L_1803dda3b_0:;
L_1803dda3b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dda3b_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dda3b_3:;
wr(s->r,24,8,rd(s->u,40,8));
L_1803dda3b_4:;
/* 1803dda40: mov rsi, qword ptr [rsp + 0x80] */
L_1803dda40_0:;
L_1803dda40_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803dda40_2:;
wr(s->u,40,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dda40_3:;
wr(s->r,48,8,rd(s->u,40,8));
L_1803dda40_4:;
/* 1803dda48: movaps xmm6, xmmword ptr [rsp + 0x50] */
L_1803dda48_0:;
L_1803dda48_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dda48_2:;
wr(s->u,24,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dda48_3:;
wr(s->u,66,16,rd(s->u,24,16));
L_1803dda48_4:;
wr(s->r,4992,4,rd(s->u,66,4));
L_1803dda48_5:;
wr(s->r,4996,4,rd(s->u,70,4));
L_1803dda48_6:;
wr(s->r,5000,4,rd(s->u,74,4));
L_1803dda48_7:;
wr(s->r,5004,4,rd(s->u,78,4));
L_1803dda48_8:;
/* 1803dda4d: add rsp, 0x60 */
L_1803dda4d_0:;
L_1803dda4d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x60)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dda4d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x60)),8,0));
L_1803dda4d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x60))));
L_1803dda4d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dda4d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dda4d_6:;
wr(s->u,48,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dda4d_7:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_1803dda4d_8:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803dda4d_9:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803dda4d_10:;
/* 1803dda51: pop rdi */
L_1803dda51_0:;
L_1803dda51_1:;
wr(s->u,58,8,((U)UINT64_C(0x0)));
L_1803dda51_2:;
wr(s->u,58,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dda51_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dda51_4:;
wr(s->r,56,8,rd(s->u,58,8));
L_1803dda51_5:;
/* 1803dda52: ret  */
L_1803dda52_0:;
L_1803dda52_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dda52_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dda52_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dda52_4:;
return UINT64_C(0x1803dda53);
}
uint64_t b_1803dda39(CPU*s){
/* 1803dda39: xor eax, eax */
L_1803dda39_0:;
L_1803dda39_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dda39_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dda39_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dda39_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dda39_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dda39_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dda39_7:;
wr(s->u,40,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dda39_8:;
wr(s->u,48,1,pop(rd(s->u,40,4),4));
L_1803dda39_9:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dda39_10:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dda39_11:;
/* 1803dda3b: mov rbx, qword ptr [rsp + 0x70] */
L_1803dda3b_0:;
L_1803dda3b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dda3b_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dda3b_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803dda3b_4:;
/* 1803dda40: mov rsi, qword ptr [rsp + 0x80] */
L_1803dda40_0:;
L_1803dda40_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803dda40_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dda40_3:;
wr(s->r,48,8,rd(s->u,32,8));
L_1803dda40_4:;
/* 1803dda48: movaps xmm6, xmmword ptr [rsp + 0x50] */
L_1803dda48_0:;
L_1803dda48_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dda48_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dda48_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803dda48_4:;
wr(s->r,4992,4,rd(s->u,58,4));
L_1803dda48_5:;
wr(s->r,4996,4,rd(s->u,62,4));
L_1803dda48_6:;
wr(s->r,5000,4,rd(s->u,66,4));
L_1803dda48_7:;
wr(s->r,5004,4,rd(s->u,70,4));
L_1803dda48_8:;
/* 1803dda4d: add rsp, 0x60 */
L_1803dda4d_0:;
L_1803dda4d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x60)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dda4d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x60)),8,0));
L_1803dda4d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x60))));
L_1803dda4d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dda4d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dda4d_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dda4d_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803dda4d_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dda4d_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dda4d_10:;
/* 1803dda51: pop rdi */
L_1803dda51_0:;
L_1803dda51_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803dda51_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dda51_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dda51_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803dda51_5:;
/* 1803dda52: ret  */
L_1803dda52_0:;
L_1803dda52_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dda52_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dda52_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dda52_4:;
return UINT64_C(0x1803dda53);
}
uint64_t b_1803dda3b(CPU*s){
/* 1803dda3b: mov rbx, qword ptr [rsp + 0x70] */
L_1803dda3b_0:;
L_1803dda3b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dda3b_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dda3b_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803dda3b_4:;
/* 1803dda40: mov rsi, qword ptr [rsp + 0x80] */
L_1803dda40_0:;
L_1803dda40_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803dda40_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803dda40_3:;
wr(s->r,48,8,rd(s->u,32,8));
L_1803dda40_4:;
/* 1803dda48: movaps xmm6, xmmword ptr [rsp + 0x50] */
L_1803dda48_0:;
L_1803dda48_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dda48_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803dda48_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803dda48_4:;
wr(s->r,4992,4,rd(s->u,58,4));
L_1803dda48_5:;
wr(s->r,4996,4,rd(s->u,62,4));
L_1803dda48_6:;
wr(s->r,5000,4,rd(s->u,66,4));
L_1803dda48_7:;
wr(s->r,5004,4,rd(s->u,70,4));
L_1803dda48_8:;
/* 1803dda4d: add rsp, 0x60 */
L_1803dda4d_0:;
L_1803dda4d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x60)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dda4d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x60)),8,0));
L_1803dda4d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x60))));
L_1803dda4d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dda4d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dda4d_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dda4d_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803dda4d_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803dda4d_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803dda4d_10:;
/* 1803dda51: pop rdi */
L_1803dda51_0:;
L_1803dda51_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803dda51_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dda51_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dda51_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803dda51_5:;
/* 1803dda52: ret  */
L_1803dda52_0:;
L_1803dda52_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dda52_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dda52_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dda52_4:;
return UINT64_C(0x1803dda53);
}
uint64_t b_1803dda60(CPU*s){
/* 1803dda60: sub rsp, 0x28 */
L_1803dda60_0:;
L_1803dda60_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803dda60_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803dda60_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803dda60_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dda60_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dda60_6:;
wr(s->u,1,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dda60_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803dda60_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dda60_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dda60_10:;
/* 1803dda64: test rcx, rcx */
L_1803dda64_0:;
L_1803dda64_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dda64_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dda64_3:;
wr(s->u,11,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803dda64_4:;
wr(s->r,519,1,(sx(rd(s->u,11,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dda64_5:;
wr(s->r,518,1,(rd(s->u,11,8)==((U)UINT64_C(0x0))));
L_1803dda64_6:;
wr(s->u,1,8,(rd(s->u,11,8)&((U)UINT64_C(0xff))));
L_1803dda64_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803dda64_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dda64_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dda64_10:;
/* 1803dda67: jne 0x1803dda73 */
L_1803dda67_0:;
L_1803dda67_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803dda67_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dda73);}
L_1803dda67_3:;
return UINT64_C(0x1803dda69);
}
uint64_t b_1803dda69(CPU*s){
/* 1803dda69: mov eax, 0x4c4b43 */
L_1803dda69_0:;
L_1803dda69_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803dda69_2:;
/* 1803dda6e: add rsp, 0x28 */
L_1803dda6e_0:;
L_1803dda6e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dda6e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803dda6e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803dda6e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dda6e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dda6e_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dda6e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dda6e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dda6e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dda6e_10:;
/* 1803dda72: ret  */
L_1803dda72_0:;
L_1803dda72_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dda72_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dda72_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dda72_4:;
return UINT64_C(0x1803dda73);
}
uint64_t b_1803dda73(CPU*s){
/* 1803dda73: mov rax, qword ptr [rcx] */
L_1803dda73_0:;
L_1803dda73_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803dda73_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803dda73_3:;
/* 1803dda76: mov edx, 1 */
L_1803dda76_0:;
L_1803dda76_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803dda76_2:;
/* 1803dda7b: call qword ptr [rax] */
L_1803dda7b_0:;
L_1803dda7b_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803dda7b_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803dda7b_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dda7b_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803dda7d)));
L_1803dda7b_5:;
return (uint64_t)rd(s->u,8,8);
L_1803dda7b_6:;
return UINT64_C(0x1803dda7d);
}
uint64_t b_1803dda7d(CPU*s){
/* 1803dda7d: xor eax, eax */
L_1803dda7d_0:;
L_1803dda7d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803dda7d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803dda7d_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803dda7d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dda7d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dda7d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803dda7d_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803dda7d_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803dda7d_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dda7d_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dda7d_11:;
/* 1803dda7f: add rsp, 0x28 */
L_1803dda7f_0:;
L_1803dda7f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803dda7f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803dda7f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803dda7f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dda7f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dda7f_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dda7f_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803dda7f_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803dda7f_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803dda7f_10:;
/* 1803dda83: ret  */
L_1803dda83_0:;
L_1803dda83_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dda83_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803dda83_3:;
return (uint64_t)rd(s->r,648,8);
L_1803dda83_4:;
return UINT64_C(0x1803dda84);
}
uint64_t b_1803dda90(CPU*s){
/* 1803dda90: push rbx */
L_1803dda90_0:;
L_1803dda90_1:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803dda90_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803dda90_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803dda90_4:;
/* 1803dda92: sub rsp, 0x30 */
L_1803dda92_0:;
L_1803dda92_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803dda92_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803dda92_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803dda92_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dda92_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803dda92_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803dda92_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803dda92_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803dda92_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803dda92_10:;
/* 1803dda96: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803dda96_0:;
L_1803dda96_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803dda96_2:;
wr(s->u,8,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803dda96_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803dda96_4:;
/* 1803dda9f: mov rbx, rcx */
L_1803dda9f_0:;
L_1803dda9f_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803dda9f_2:;
/* 1803ddaa2: mov ecx, 0x20 */
L_1803ddaa2_0:;
L_1803ddaa2_1:;
wr(s->r,8,8,((U)UINT64_C(0x20)));
L_1803ddaa2_2:;
/* 1803ddaa7: call 0x180003140 */
L_1803ddaa7_0:;
L_1803ddaa7_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddaa7_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddaac)));
L_1803ddaa7_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803ddaa7_4:;
return UINT64_C(0x1803ddaac);
}
uint64_t b_1803ddaac(CPU*s){
/* 1803ddaac: mov qword ptr [rsp + 0x40], rax */
L_1803ddaac_0:;
L_1803ddaac_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ddaac_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803ddaac_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ddaac_4:;
/* 1803ddab1: test rax, rax */
L_1803ddab1_0:;
L_1803ddab1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ddab1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddab1_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803ddab1_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddab1_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803ddab1_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803ddab1_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ddab1_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ddab1_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ddab1_10:;
/* 1803ddab4: je 0x1803ddac0 */
L_1803ddab4_0:;
L_1803ddab4_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ddac0);}
L_1803ddab4_2:;
return UINT64_C(0x1803ddab6);
}
uint64_t b_1803ddab6(CPU*s){
/* 1803ddab6: mov rcx, rax */
L_1803ddab6_0:;
L_1803ddab6_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803ddab6_2:;
/* 1803ddab9: call 0x1803e84a0 */
L_1803ddab9_0:;
L_1803ddab9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddab9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddabe)));
L_1803ddab9_3:;
return (uint64_t)UINT64_C(0x1803e84a0);
L_1803ddab9_4:;
return UINT64_C(0x1803ddabe);
}
uint64_t b_1803ddabe(CPU*s){
/* 1803ddabe: jmp 0x1803ddac2 */
L_1803ddabe_0:;
L_1803ddabe_1:;
return UINT64_C(0x1803ddac2);
L_1803ddabe_2:;
return UINT64_C(0x1803ddac0);
}
uint64_t b_1803ddac0(CPU*s){
/* 1803ddac0: xor eax, eax */
L_1803ddac0_0:;
L_1803ddac0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ddac0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddac0_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ddac0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddac0_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddac0_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ddac0_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ddac0_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803ddac0_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ddac0_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ddac0_11:;
/* 1803ddac2: mov qword ptr [rbx], rax */
L_1803ddac2_0:;
L_1803ddac2_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803ddac2_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803ddac2_3:;
/* 1803ddac5: xor eax, eax */
L_1803ddac5_0:;
L_1803ddac5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ddac5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddac5_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ddac5_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddac5_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddac5_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ddac5_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ddac5_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803ddac5_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ddac5_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ddac5_11:;
/* 1803ddac7: add rsp, 0x30 */
L_1803ddac7_0:;
L_1803ddac7_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ddac7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ddac7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ddac7_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddac7_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ddac7_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ddac7_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803ddac7_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ddac7_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ddac7_10:;
/* 1803ddacb: pop rbx */
L_1803ddacb_0:;
L_1803ddacb_1:;
wr(s->u,18,8,((U)UINT64_C(0x0)));
L_1803ddacb_2:;
wr(s->u,18,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddacb_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddacb_4:;
wr(s->r,24,8,rd(s->u,18,8));
L_1803ddacb_5:;
/* 1803ddacc: ret  */
L_1803ddacc_0:;
L_1803ddacc_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddacc_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddacc_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ddacc_4:;
return UINT64_C(0x1803ddacd);
}
uint64_t b_1803ddac2(CPU*s){
/* 1803ddac2: mov qword ptr [rbx], rax */
L_1803ddac2_0:;
L_1803ddac2_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803ddac2_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803ddac2_3:;
/* 1803ddac5: xor eax, eax */
L_1803ddac5_0:;
L_1803ddac5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ddac5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddac5_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ddac5_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddac5_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddac5_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ddac5_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ddac5_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803ddac5_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ddac5_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ddac5_11:;
/* 1803ddac7: add rsp, 0x30 */
L_1803ddac7_0:;
L_1803ddac7_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ddac7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803ddac7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803ddac7_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddac7_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ddac7_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ddac7_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803ddac7_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803ddac7_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803ddac7_10:;
/* 1803ddacb: pop rbx */
L_1803ddacb_0:;
L_1803ddacb_1:;
wr(s->u,18,8,((U)UINT64_C(0x0)));
L_1803ddacb_2:;
wr(s->u,18,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddacb_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddacb_4:;
wr(s->r,24,8,rd(s->u,18,8));
L_1803ddacb_5:;
/* 1803ddacc: ret  */
L_1803ddacc_0:;
L_1803ddacc_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddacc_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddacc_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ddacc_4:;
return UINT64_C(0x1803ddacd);
}
uint64_t b_1803ddad0(CPU*s){
/* 1803ddad0: sub rsp, 0x28 */
L_1803ddad0_0:;
L_1803ddad0_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803ddad0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803ddad0_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803ddad0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddad0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ddad0_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ddad0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ddad0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ddad0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ddad0_10:;
/* 1803ddad4: test rcx, rcx */
L_1803ddad4_0:;
L_1803ddad4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ddad4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddad4_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803ddad4_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddad4_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803ddad4_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803ddad4_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ddad4_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ddad4_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ddad4_10:;
/* 1803ddad7: je 0x1803ddae3 */
L_1803ddad7_0:;
L_1803ddad7_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ddae3);}
L_1803ddad7_2:;
return UINT64_C(0x1803ddad9);
}
uint64_t b_1803ddad9(CPU*s){
/* 1803ddad9: mov rax, qword ptr [rcx] */
L_1803ddad9_0:;
L_1803ddad9_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803ddad9_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803ddad9_3:;
/* 1803ddadc: mov edx, 1 */
L_1803ddadc_0:;
L_1803ddadc_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803ddadc_2:;
/* 1803ddae1: call qword ptr [rax] */
L_1803ddae1_0:;
L_1803ddae1_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803ddae1_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803ddae1_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddae1_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddae3)));
L_1803ddae1_5:;
return (uint64_t)rd(s->u,8,8);
L_1803ddae1_6:;
return UINT64_C(0x1803ddae3);
}
uint64_t b_1803ddae3(CPU*s){
/* 1803ddae3: xor eax, eax */
L_1803ddae3_0:;
L_1803ddae3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ddae3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddae3_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803ddae3_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddae3_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddae3_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ddae3_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ddae3_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803ddae3_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ddae3_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ddae3_11:;
/* 1803ddae5: add rsp, 0x28 */
L_1803ddae5_0:;
L_1803ddae5_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ddae5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803ddae5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803ddae5_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddae5_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ddae5_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ddae5_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ddae5_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ddae5_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ddae5_10:;
/* 1803ddae9: ret  */
L_1803ddae9_0:;
L_1803ddae9_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddae9_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddae9_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ddae9_4:;
return UINT64_C(0x1803ddaea);
}
uint64_t b_1803ddba0(CPU*s){
/* 1803ddba0: mov qword ptr [rsp + 0x18], rbx */
L_1803ddba0_0:;
L_1803ddba0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803ddba0_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803ddba0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803ddba0_4:;
/* 1803ddba5: push rbp */
L_1803ddba5_0:;
L_1803ddba5_1:;
wr(s->u,40,8,rd(s->r,40,8));
L_1803ddba5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddba5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,40,8));
L_1803ddba5_4:;
/* 1803ddba6: push rsi */
L_1803ddba6_0:;
L_1803ddba6_1:;
wr(s->u,40,8,rd(s->r,48,8));
L_1803ddba6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddba6_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,40,8));
L_1803ddba6_4:;
/* 1803ddba7: push rdi */
L_1803ddba7_0:;
L_1803ddba7_1:;
wr(s->u,40,8,rd(s->r,56,8));
L_1803ddba7_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddba7_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,40,8));
L_1803ddba7_4:;
/* 1803ddba8: sub rsp, 0x50 */
L_1803ddba8_0:;
L_1803ddba8_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x50))));
L_1803ddba8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,1));
L_1803ddba8_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x50))));
L_1803ddba8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddba8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ddba8_6:;
wr(s->u,48,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ddba8_7:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_1803ddba8_8:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803ddba8_9:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803ddba8_10:;
/* 1803ddbac: lea esi, [rdx - 1] */
L_1803ddbac_0:;
L_1803ddbac_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803ddbac_2:;
wr(s->r,48,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ddbac_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803ddbac_4:;
/* 1803ddbaf: movaps xmmword ptr [rsp + 0x20], xmm8 */
L_1803ddbaf_0:;
L_1803ddbaf_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ddbaf_2:;
wr(s->u,24,16,rd(s->r,5120,16));
L_1803ddbaf_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,24,16));
L_1803ddbaf_4:;
/* 1803ddbb5: movss xmm8, dword ptr [rip + 0x27d94e] */
L_1803ddbb5_0:;
L_1803ddbb5_1:;
wr(s->r,5120,4,mr(UINT64_C(0x18065b50c),4));
L_1803ddbb5_2:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ddbb5_3:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ddbb5_4:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ddbb5_5:;
/* 1803ddbbe: movd xmm0, esi */
L_1803ddbbe_0:;
L_1803ddbbe_1:;
wr(s->r,4608,16,rd(s->r,48,4));
L_1803ddbbe_2:;
/* 1803ddbc2: mov edi, edx */
L_1803ddbc2_0:;
L_1803ddbc2_1:;
wr(s->r,56,4,rd(s->r,16,4));
L_1803ddbc2_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ddbc2_3:;
/* 1803ddbc4: movd xmm1, r8d */
L_1803ddbc4_0:;
L_1803ddbc4_1:;
wr(s->r,4672,16,rd(s->r,128,4));
L_1803ddbc4_2:;
/* 1803ddbc9: mov rbx, rcx */
L_1803ddbc9_0:;
L_1803ddbc9_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ddbc9_2:;
/* 1803ddbcc: cvtdq2ps xmm0, xmm0 */
L_1803ddbcc_0:;
L_1803ddbcc_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ddbcc_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ddbcc_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ddbcc_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ddbcc_5:;
/* 1803ddbcf: cvtdq2ps xmm1, xmm1 */
L_1803ddbcf_0:;
L_1803ddbcf_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803ddbcf_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803ddbcf_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803ddbcf_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803ddbcf_5:;
/* 1803ddbd2: divss xmm8, xmm0 */
L_1803ddbd2_0:;
L_1803ddbd2_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)/fv(rd(s->r,4608,4),4),4));
L_1803ddbd2_2:;
/* 1803ddbd7: movd xmm0, edi */
L_1803ddbd7_0:;
L_1803ddbd7_1:;
wr(s->r,4608,16,rd(s->r,56,4));
L_1803ddbd7_2:;
/* 1803ddbdb: cvtdq2ps xmm0, xmm0 */
L_1803ddbdb_0:;
L_1803ddbdb_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ddbdb_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ddbdb_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ddbdb_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ddbdb_5:;
/* 1803ddbde: divss xmm0, xmm1 */
L_1803ddbde_0:;
L_1803ddbde_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803ddbde_2:;
/* 1803ddbe2: addss xmm0, dword ptr [rip + 0x26f05a] */
L_1803ddbe2_0:;
L_1803ddbe2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(mr(UINT64_C(0x18064cc44),4),4),4));
L_1803ddbe2_2:;
/* 1803ddbea: call 0x180609c04 */
L_1803ddbea_0:;
L_1803ddbea_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddbea_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddbef)));
L_1803ddbea_3:;
return (uint64_t)UINT64_C(0x180609c04);
L_1803ddbea_4:;
return UINT64_C(0x1803ddbef);
}
uint64_t b_1803ddbef(CPU*s){
/* 1803ddbef: mulss xmm0, dword ptr [rip + 0x42e929] */
L_1803ddbef_0:;
L_1803ddbef_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(mr(UINT64_C(0x18080c520),4),4),4));
L_1803ddbef_2:;
/* 1803ddbf7: cvttss2si ecx, xmm0 */
L_1803ddbf7_0:;
L_1803ddbf7_1:;
wr(s->r,8,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803ddbf7_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ddbf7_3:;
/* 1803ddbfb: cmp ecx, 0x80000000 */
L_1803ddbfb_0:;
L_1803ddbfb_1:;
wr(s->u,6,4,rd(s->r,8,4));
L_1803ddbfb_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x80000000))));
L_1803ddbfb_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x80000000)),4,1));
L_1803ddbfb_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x80000000))));
L_1803ddbfb_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddbfb_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803ddbfb_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803ddbfb_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803ddbfb_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803ddbfb_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803ddbfb_11:;
/* 1803ddc01: je 0x1803ddc23 */
L_1803ddc01_0:;
L_1803ddc01_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ddc23);}
L_1803ddc01_2:;
return UINT64_C(0x1803ddc03);
}
uint64_t b_1803ddc03(CPU*s){
/* 1803ddc03: pxor xmm1, xmm1 */
L_1803ddc03_0:;
L_1803ddc03_1:;
wr(s->r,4672,16,(rd(s->r,4672,16)^rd(s->r,4672,16)));
L_1803ddc03_2:;
/* 1803ddc07: cvtsi2ss xmm1, ecx */
L_1803ddc07_0:;
L_1803ddc07_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ddc07_2:;
/* 1803ddc0b: ucomiss xmm1, xmm0 */
L_1803ddc0b_0:;
L_1803ddc0b_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803ddc0b_2:;
wr(s->u,1,1,isnan(fv(rd(s->r,4608,4),4)));
L_1803ddc0b_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803ddc0b_4:;
wr(s->u,2,1,(fv(rd(s->r,4672,4),4)==fv(rd(s->r,4608,4),4)));
L_1803ddc0b_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803ddc0b_6:;
wr(s->u,3,1,(fv(rd(s->r,4672,4),4)<fv(rd(s->r,4608,4),4)));
L_1803ddc0b_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ddc0b_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddc0b_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ddc0b_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ddc0b_11:;
/* 1803ddc0e: je 0x1803ddc23 */
L_1803ddc0e_0:;
L_1803ddc0e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ddc23);}
L_1803ddc0e_2:;
return UINT64_C(0x1803ddc10);
}
uint64_t b_1803ddc10(CPU*s){
/* 1803ddc10: unpcklps xmm0, xmm0 */
L_1803ddc10_0:;
L_1803ddc10_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803ddc10_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803ddc10_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803ddc10_4:;
/* 1803ddc13: movmskps eax, xmm0 */
L_1803ddc13_0:;
L_1803ddc13_1:;
wr(s->r,0,4,(((rd(s->r,4608,16)>>31)&1)<<0)|(((rd(s->r,4608,16)>>63)&1)<<1)|(((rd(s->r,4608,16)>>95)&1)<<2)|(((rd(s->r,4608,16)>>127)&1)<<3));
L_1803ddc13_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddc13_3:;
/* 1803ddc16: pxor xmm0, xmm0 */
L_1803ddc16_0:;
L_1803ddc16_1:;
wr(s->r,4608,16,(rd(s->r,4608,16)^rd(s->r,4608,16)));
L_1803ddc16_2:;
/* 1803ddc1a: and eax, 1 */
L_1803ddc1a_0:;
L_1803ddc1a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ddc1a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddc1a_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x1))));
L_1803ddc1a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddc1a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddc1a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ddc1a_7:;
wr(s->u,5,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ddc1a_8:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ddc1a_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddc1a_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddc1a_11:;
/* 1803ddc1d: sub ecx, eax */
L_1803ddc1d_0:;
L_1803ddc1d_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803ddc1d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803ddc1d_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803ddc1d_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ddc1d_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddc1d_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ddc1d_7:;
wr(s->u,5,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ddc1d_8:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ddc1d_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddc1d_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddc1d_11:;
/* 1803ddc1f: cvtsi2ss xmm0, ecx */
L_1803ddc1f_0:;
L_1803ddc1f_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,8,4),4),4));
L_1803ddc1f_2:;
/* 1803ddc23: mov eax, 3 */
L_1803ddc23_0:;
L_1803ddc23_1:;
wr(s->r,0,8,((U)UINT64_C(0x3)));
L_1803ddc23_2:;
/* 1803ddc28: cvttss2si ebp, xmm0 */
L_1803ddc28_0:;
L_1803ddc28_1:;
wr(s->r,40,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803ddc28_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803ddc28_3:;
/* 1803ddc2c: cmp ebp, eax */
L_1803ddc2c_0:;
L_1803ddc2c_1:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803ddc2c_2:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,16,4)));
L_1803ddc2c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,16,4),4,1));
L_1803ddc2c_4:;
wr(s->u,20,4,(rd(s->r,40,4)-rd(s->u,16,4)));
L_1803ddc2c_5:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddc2c_6:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803ddc2c_7:;
wr(s->u,5,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803ddc2c_8:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ddc2c_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddc2c_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddc2c_11:;
/* 1803ddc2e: cmovg ebp, eax */
L_1803ddc2e_0:;
L_1803ddc2e_1:;
wr(s->u,2,1,(!rd(s->r,518,1)));
L_1803ddc2e_2:;
wr(s->u,3,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ddc2e_3:;
wr(s->u,4,1,((rd(s->u,2,1)!=0)&&(rd(s->u,3,1)!=0)));
L_1803ddc2e_4:;
wr(s->u,11,4,rd(s->r,0,4));
L_1803ddc2e_5:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803ddc2e_6:;
wr(s->u,15,1,(!rd(s->u,4,1)));
L_1803ddc2e_7:;
if(rd(s->u,15,1)){goto L_1803ddc31_0;}
L_1803ddc2e_8:;
wr(s->r,40,4,rd(s->u,11,4));
L_1803ddc2e_9:;
/* 1803ddc31: sar edi, 1 */
L_1803ddc31_0:;
L_1803ddc31_1:;
wr(s->u,24,4,(rd(s->r,56,4)&((U)UINT64_C(0x1))));
L_1803ddc31_2:;
wr(s->r,512,1,(rd(s->u,24,4)!=((U)UINT64_C(0x0))));
L_1803ddc31_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddc31_4:;
wr(s->r,56,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,56,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,56,4),4)>>((U)UINT64_C(0x1)))));
L_1803ddc31_5:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ddc31_6:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddc31_7:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803ddc31_8:;
wr(s->u,5,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803ddc31_9:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ddc31_10:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddc31_11:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddc31_12:;
/* 1803ddc33: movsxd rax, esi */
L_1803ddc33_0:;
L_1803ddc33_1:;
wr(s->r,0,8,(U)sx(rd(s->r,48,4),4));
L_1803ddc33_2:;
/* 1803ddc36: test edi, edi */
L_1803ddc36_0:;
L_1803ddc36_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ddc36_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddc36_3:;
wr(s->u,28,4,(rd(s->r,56,4)&rd(s->r,56,4)));
L_1803ddc36_4:;
wr(s->r,519,1,(sx(rd(s->u,28,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddc36_5:;
wr(s->r,518,1,(rd(s->u,28,4)==((U)UINT64_C(0x0))));
L_1803ddc36_6:;
wr(s->u,5,4,(rd(s->u,28,4)&((U)UINT64_C(0xff))));
L_1803ddc36_7:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ddc36_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddc36_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddc36_10:;
/* 1803ddc38: jle 0x1803ddd23 */
L_1803ddc38_0:;
L_1803ddc38_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ddc38_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803ddc38_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ddd23);}
L_1803ddc38_4:;
return UINT64_C(0x1803ddc3e);
}
uint64_t b_1803ddc23(CPU*s){
/* 1803ddc23: mov eax, 3 */
L_1803ddc23_0:;
L_1803ddc23_1:;
wr(s->r,0,8,((U)UINT64_C(0x3)));
L_1803ddc23_2:;
/* 1803ddc28: cvttss2si ebp, xmm0 */
L_1803ddc28_0:;
L_1803ddc28_1:;
wr(s->r,40,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803ddc28_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803ddc28_3:;
/* 1803ddc2c: cmp ebp, eax */
L_1803ddc2c_0:;
L_1803ddc2c_1:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803ddc2c_2:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,16,4)));
L_1803ddc2c_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,16,4),4,1));
L_1803ddc2c_4:;
wr(s->u,20,4,(rd(s->r,40,4)-rd(s->u,16,4)));
L_1803ddc2c_5:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddc2c_6:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803ddc2c_7:;
wr(s->u,5,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803ddc2c_8:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ddc2c_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddc2c_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddc2c_11:;
/* 1803ddc2e: cmovg ebp, eax */
L_1803ddc2e_0:;
L_1803ddc2e_1:;
wr(s->u,2,1,(!rd(s->r,518,1)));
L_1803ddc2e_2:;
wr(s->u,3,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ddc2e_3:;
wr(s->u,4,1,((rd(s->u,2,1)!=0)&&(rd(s->u,3,1)!=0)));
L_1803ddc2e_4:;
wr(s->u,11,4,rd(s->r,0,4));
L_1803ddc2e_5:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803ddc2e_6:;
wr(s->u,15,1,(!rd(s->u,4,1)));
L_1803ddc2e_7:;
if(rd(s->u,15,1)){goto L_1803ddc31_0;}
L_1803ddc2e_8:;
wr(s->r,40,4,rd(s->u,11,4));
L_1803ddc2e_9:;
/* 1803ddc31: sar edi, 1 */
L_1803ddc31_0:;
L_1803ddc31_1:;
wr(s->u,24,4,(rd(s->r,56,4)&((U)UINT64_C(0x1))));
L_1803ddc31_2:;
wr(s->r,512,1,(rd(s->u,24,4)!=((U)UINT64_C(0x0))));
L_1803ddc31_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddc31_4:;
wr(s->r,56,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,56,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,56,4),4)>>((U)UINT64_C(0x1)))));
L_1803ddc31_5:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ddc31_6:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddc31_7:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803ddc31_8:;
wr(s->u,5,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803ddc31_9:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ddc31_10:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddc31_11:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddc31_12:;
/* 1803ddc33: movsxd rax, esi */
L_1803ddc33_0:;
L_1803ddc33_1:;
wr(s->r,0,8,(U)sx(rd(s->r,48,4),4));
L_1803ddc33_2:;
/* 1803ddc36: test edi, edi */
L_1803ddc36_0:;
L_1803ddc36_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ddc36_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddc36_3:;
wr(s->u,28,4,(rd(s->r,56,4)&rd(s->r,56,4)));
L_1803ddc36_4:;
wr(s->r,519,1,(sx(rd(s->u,28,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddc36_5:;
wr(s->r,518,1,(rd(s->u,28,4)==((U)UINT64_C(0x0))));
L_1803ddc36_6:;
wr(s->u,5,4,(rd(s->u,28,4)&((U)UINT64_C(0xff))));
L_1803ddc36_7:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ddc36_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddc36_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddc36_10:;
/* 1803ddc38: jle 0x1803ddd23 */
L_1803ddc38_0:;
L_1803ddc38_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ddc38_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803ddc38_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ddd23);}
L_1803ddc38_4:;
return UINT64_C(0x1803ddc3e);
}
uint64_t b_1803ddc31(CPU*s){
/* 1803ddc31: sar edi, 1 */
L_1803ddc31_0:;
L_1803ddc31_1:;
wr(s->u,8,4,(rd(s->r,56,4)&((U)UINT64_C(0x1))));
L_1803ddc31_2:;
wr(s->r,512,1,(rd(s->u,8,4)!=((U)UINT64_C(0x0))));
L_1803ddc31_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddc31_4:;
wr(s->r,56,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,56,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,56,4),4)>>((U)UINT64_C(0x1)))));
L_1803ddc31_5:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803ddc31_6:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddc31_7:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803ddc31_8:;
wr(s->u,2,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803ddc31_9:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803ddc31_10:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803ddc31_11:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803ddc31_12:;
/* 1803ddc33: movsxd rax, esi */
L_1803ddc33_0:;
L_1803ddc33_1:;
wr(s->r,0,8,(U)sx(rd(s->r,48,4),4));
L_1803ddc33_2:;
/* 1803ddc36: test edi, edi */
L_1803ddc36_0:;
L_1803ddc36_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ddc36_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddc36_3:;
wr(s->u,12,4,(rd(s->r,56,4)&rd(s->r,56,4)));
L_1803ddc36_4:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddc36_5:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803ddc36_6:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803ddc36_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803ddc36_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803ddc36_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803ddc36_10:;
/* 1803ddc38: jle 0x1803ddd23 */
L_1803ddc38_0:;
L_1803ddc38_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ddc38_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803ddc38_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803ddd23);}
L_1803ddc38_4:;
return UINT64_C(0x1803ddc3e);
}
uint64_t b_1803ddc3e(CPU*s){
/* 1803ddc3e: mov qword ptr [rsp + 0x70], r12 */
L_1803ddc3e_0:;
L_1803ddc3e_1:;
wr(s->u,24,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803ddc3e_2:;
wr(s->u,32,8,rd(s->r,160,8));
L_1803ddc3e_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,32,8));
L_1803ddc3e_4:;
/* 1803ddc43: mov qword ptr [rsp + 0x78], r13 */
L_1803ddc43_0:;
L_1803ddc43_1:;
wr(s->u,24,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803ddc43_2:;
wr(s->u,32,8,rd(s->r,168,8));
L_1803ddc43_3:;
mw((uint64_t)rd(s->u,24,8),8,rd(s->u,32,8));
L_1803ddc43_4:;
/* 1803ddc48: movaps xmmword ptr [rsp + 0x40], xmm6 */
L_1803ddc48_0:;
L_1803ddc48_1:;
wr(s->u,24,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ddc48_2:;
wr(s->u,40,16,rd(s->r,4992,16));
L_1803ddc48_3:;
mw((uint64_t)rd(s->u,24,8),16,rd(s->u,40,16));
L_1803ddc48_4:;
/* 1803ddc4d: movsd xmm6, qword ptr [rip + 0x42ed13] */
L_1803ddc4d_0:;
L_1803ddc4d_1:;
wr(s->r,4992,8,mr(UINT64_C(0x18080c968),8));
L_1803ddc4d_2:;
wr(s->r,5000,8,((U)UINT64_C(0x0)));
L_1803ddc4d_3:;
/* 1803ddc55: movaps xmmword ptr [rsp + 0x30], xmm7 */
L_1803ddc55_0:;
L_1803ddc55_1:;
wr(s->u,24,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ddc55_2:;
wr(s->u,40,16,rd(s->r,5056,16));
L_1803ddc55_3:;
mw((uint64_t)rd(s->u,24,8),16,rd(s->u,40,16));
L_1803ddc55_4:;
/* 1803ddc5a: lea r13d, [rbp - 1] */
L_1803ddc5a_0:;
L_1803ddc5a_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803ddc5a_2:;
wr(s->r,168,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ddc5a_3:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803ddc5a_4:;
/* 1803ddc5e: movsd xmm7, qword ptr [rip + 0x42ecfa] */
L_1803ddc5e_0:;
L_1803ddc5e_1:;
wr(s->r,5056,8,mr(UINT64_C(0x18080c960),8));
L_1803ddc5e_2:;
wr(s->r,5064,8,((U)UINT64_C(0x0)));
L_1803ddc5e_3:;
/* 1803ddc66: xor r12d, r12d */
L_1803ddc66_0:;
L_1803ddc66_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ddc66_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddc66_3:;
wr(s->r,160,4,(rd(s->r,160,4)^rd(s->r,160,4)));
L_1803ddc66_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803ddc66_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddc66_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803ddc66_7:;
wr(s->u,56,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803ddc66_8:;
wr(s->u,60,1,pop(rd(s->u,56,4),4));
L_1803ddc66_9:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803ddc66_10:;
wr(s->r,514,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803ddc66_11:;
/* 1803ddc69: lea rsi, [rbx + rax*4] */
L_1803ddc69_0:;
L_1803ddc69_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803ddc69_2:;
wr(s->u,16,8,(rd(s->r,24,8)+rd(s->u,8,8)));
L_1803ddc69_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1803ddc69_4:;
/* 1803ddc6d: nop dword ptr [rax] */
L_1803ddc6d_0:;
L_1803ddc6d_1:;
/* 1803ddc70: movd xmm0, r12d */
L_1803ddc70_0:;
L_1803ddc70_1:;
wr(s->r,4608,16,rd(s->r,160,4));
L_1803ddc70_2:;
/* 1803ddc75: cvtdq2ps xmm0, xmm0 */
L_1803ddc75_0:;
L_1803ddc75_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ddc75_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ddc75_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ddc75_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ddc75_5:;
/* 1803ddc78: mulss xmm0, xmm8 */
L_1803ddc78_0:;
L_1803ddc78_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803ddc78_2:;
/* 1803ddc7d: call 0x180609b08 */
L_1803ddc7d_0:;
L_1803ddc7d_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddc7d_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddc82)));
L_1803ddc7d_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803ddc7d_4:;
return UINT64_C(0x1803ddc82);
}
uint64_t b_1803ddc70(CPU*s){
/* 1803ddc70: movd xmm0, r12d */
L_1803ddc70_0:;
L_1803ddc70_1:;
wr(s->r,4608,16,rd(s->r,160,4));
L_1803ddc70_2:;
/* 1803ddc75: cvtdq2ps xmm0, xmm0 */
L_1803ddc75_0:;
L_1803ddc75_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803ddc75_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803ddc75_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803ddc75_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803ddc75_5:;
/* 1803ddc78: mulss xmm0, xmm8 */
L_1803ddc78_0:;
L_1803ddc78_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803ddc78_2:;
/* 1803ddc7d: call 0x180609b08 */
L_1803ddc7d_0:;
L_1803ddc7d_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddc7d_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddc82)));
L_1803ddc7d_3:;
return (uint64_t)UINT64_C(0x180609b08);
L_1803ddc7d_4:;
return UINT64_C(0x1803ddc82);
}
uint64_t b_1803ddc82(CPU*s){
/* 1803ddc82: cmp r13d, 4 */
L_1803ddc82_0:;
L_1803ddc82_1:;
wr(s->u,11,4,rd(s->r,168,4));
L_1803ddc82_2:;
wr(s->r,512,1,(rd(s->u,11,4)<((U)UINT64_C(0x4))));
L_1803ddc82_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,11,4),((U)UINT64_C(0x4)),4,1));
L_1803ddc82_4:;
wr(s->u,15,4,(rd(s->u,11,4)-((U)UINT64_C(0x4))));
L_1803ddc82_5:;
wr(s->r,519,1,(sx(rd(s->u,15,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddc82_6:;
wr(s->r,518,1,(rd(s->u,15,4)==((U)UINT64_C(0x0))));
L_1803ddc82_7:;
wr(s->u,5,4,(rd(s->u,15,4)&((U)UINT64_C(0xff))));
L_1803ddc82_8:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ddc82_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddc82_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddc82_11:;
/* 1803ddc86: movapd xmm1, xmm7 */
L_1803ddc86_0:;
L_1803ddc86_1:;
wr(s->r,4672,8,rd(s->r,5056,8));
L_1803ddc86_2:;
wr(s->r,4680,8,rd(s->r,5064,8));
L_1803ddc86_3:;
/* 1803ddc8a: mov edx, 1 */
L_1803ddc8a_0:;
L_1803ddc8a_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803ddc8a_2:;
/* 1803ddc8f: unpcklps xmm0, xmm0 */
L_1803ddc8f_0:;
L_1803ddc8f_1:;
wr(s->r,4616,4,rd(s->r,4612,4));
L_1803ddc8f_2:;
wr(s->r,4620,4,rd(s->r,4612,4));
L_1803ddc8f_3:;
wr(s->r,4612,4,rd(s->r,4608,4));
L_1803ddc8f_4:;
/* 1803ddc92: cvtps2pd xmm2, xmm0 */
L_1803ddc92_0:;
L_1803ddc92_1:;
wr(s->u,19,8,rd(s->r,4608,8));
L_1803ddc92_2:;
wr(s->r,4736,8,fb(fv(rd(s->u,19,4),4),8));
L_1803ddc92_3:;
wr(s->r,4744,8,fb(fv(rd(s->u,23,4),4),8));
L_1803ddc92_4:;
/* 1803ddc95: mulsd xmm2, xmm6 */
L_1803ddc95_0:;
L_1803ddc95_1:;
wr(s->r,4736,8,fb(fv(rd(s->r,4736,8),8)*fv(rd(s->r,4992,8),8),8));
L_1803ddc95_2:;
/* 1803ddc99: subsd xmm1, xmm2 */
L_1803ddc99_0:;
L_1803ddc99_1:;
wr(s->r,4672,8,fb(fv(rd(s->r,4672,8),8)-fv(rd(s->r,4736,8),8),8));
L_1803ddc99_2:;
/* 1803ddc9d: cvtsd2ss xmm3, xmm1 */
L_1803ddc9d_0:;
L_1803ddc9d_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4672,8),8),4));
L_1803ddc9d_2:;
/* 1803ddca1: movss dword ptr [rbx], xmm3 */
L_1803ddca1_0:;
L_1803ddca1_1:;
wr(s->u,0,4,rd(s->r,4800,4));
L_1803ddca1_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,0,4));
L_1803ddca1_3:;
/* 1803ddca5: jl 0x1803ddcda */
L_1803ddca5_0:;
L_1803ddca5_1:;
wr(s->u,4,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ddca5_2:;
if(rd(s->u,4,1)){return UINT64_C(0x1803ddcda);}
L_1803ddca5_3:;
return UINT64_C(0x1803ddca7);
}
uint64_t b_1803ddca7(CPU*s){
/* 1803ddca7: lea eax, [rbp - 5] */
L_1803ddca7_0:;
L_1803ddca7_1:;
wr(s->u,5,8,(rd(s->r,40,8)+((U)UINT64_C(0xfffffffffffffffb))));
L_1803ddca7_2:;
wr(s->r,0,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ddca7_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddca7_4:;
/* 1803ddcaa: movaps xmm0, xmm3 */
L_1803ddcaa_0:;
L_1803ddcaa_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ddcaa_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ddcaa_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ddcaa_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ddcaa_5:;
/* 1803ddcad: shr eax, 2 */
L_1803ddcad_0:;
L_1803ddcad_1:;
wr(s->u,91,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803ddcad_2:;
wr(s->u,95,4,rd(s->r,0,4));
L_1803ddcad_3:;
wr(s->r,0,4,((rd(s->u,91,4)>=32)?0:(rd(s->r,0,4)>>rd(s->u,91,4))));
L_1803ddcad_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddcad_5:;
wr(s->u,75,1,(rd(s->u,91,4)==((U)UINT64_C(0x0))));
L_1803ddcad_6:;
wr(s->u,76,4,(rd(s->u,91,4)-((U)UINT64_C(0x1))));
L_1803ddcad_7:;
wr(s->u,80,4,((rd(s->u,76,4)>=32)?0:(rd(s->u,95,4)>>rd(s->u,76,4))));
L_1803ddcad_8:;
wr(s->u,84,4,(rd(s->u,80,4)&((U)UINT64_C(0x1))));
L_1803ddcad_9:;
wr(s->u,88,1,(rd(s->u,84,4)!=((U)UINT64_C(0x0))));
L_1803ddcad_10:;
wr(s->u,0,1,rd(s->u,75,1));
L_1803ddcad_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ddcad_12:;
wr(s->u,2,1,(!rd(s->u,75,1)));
L_1803ddcad_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ddcad_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,88,1)));
L_1803ddcad_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ddcad_16:;
wr(s->u,89,1,(rd(s->u,91,4)==((U)UINT64_C(0x1))));
L_1803ddcad_17:;
wr(s->u,90,1,(sx(rd(s->u,95,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddcad_18:;
wr(s->u,0,1,rd(s->u,89,1));
L_1803ddcad_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ddcad_20:;
wr(s->u,2,1,(!rd(s->u,89,1)));
L_1803ddcad_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ddcad_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,90,1)));
L_1803ddcad_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ddcad_24:;
wr(s->u,56,1,(rd(s->u,91,4)!=((U)UINT64_C(0x0))));
L_1803ddcad_25:;
wr(s->u,57,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddcad_26:;
wr(s->u,58,1,(!rd(s->u,56,1)));
L_1803ddcad_27:;
wr(s->u,59,1,(rd(s->u,58,1)&rd(s->r,519,1)));
L_1803ddcad_28:;
wr(s->u,60,1,(rd(s->u,56,1)&rd(s->u,57,1)));
L_1803ddcad_29:;
wr(s->r,519,1,(rd(s->u,59,1)|rd(s->u,60,1)));
L_1803ddcad_30:;
wr(s->u,61,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ddcad_31:;
wr(s->u,62,1,(!rd(s->u,56,1)));
L_1803ddcad_32:;
wr(s->u,63,1,(rd(s->u,62,1)&rd(s->r,518,1)));
L_1803ddcad_33:;
wr(s->u,64,1,(rd(s->u,56,1)&rd(s->u,61,1)));
L_1803ddcad_34:;
wr(s->r,518,1,(rd(s->u,63,1)|rd(s->u,64,1)));
L_1803ddcad_35:;
wr(s->u,65,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ddcad_36:;
wr(s->u,69,1,pop(rd(s->u,65,4),4));
L_1803ddcad_37:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803ddcad_38:;
wr(s->u,71,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803ddcad_39:;
wr(s->u,72,1,(!rd(s->u,56,1)));
L_1803ddcad_40:;
wr(s->u,73,1,(rd(s->u,72,1)&rd(s->r,514,1)));
L_1803ddcad_41:;
wr(s->u,74,1,(rd(s->u,56,1)&rd(s->u,71,1)));
L_1803ddcad_42:;
wr(s->r,514,1,(rd(s->u,73,1)|rd(s->u,74,1)));
L_1803ddcad_43:;
/* 1803ddcb0: inc eax */
L_1803ddcb0_0:;
L_1803ddcb0_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803ddcb0_2:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803ddcb0_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddcb0_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddcb0_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803ddcb0_6:;
wr(s->u,46,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803ddcb0_7:;
wr(s->u,54,1,pop(rd(s->u,46,4),4));
L_1803ddcb0_8:;
wr(s->u,55,1,(rd(s->u,54,1)&((U)UINT64_C(0x1))));
L_1803ddcb0_9:;
wr(s->r,514,1,(rd(s->u,55,1)==((U)UINT64_C(0x0))));
L_1803ddcb0_10:;
/* 1803ddcb2: mov ecx, eax */
L_1803ddcb2_0:;
L_1803ddcb2_1:;
wr(s->r,8,4,rd(s->r,0,4));
L_1803ddcb2_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ddcb2_3:;
/* 1803ddcb4: lea edx, [rax*4 + 1] */
L_1803ddcb4_0:;
L_1803ddcb4_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803ddcb4_2:;
wr(s->u,21,8,(((U)UINT64_C(0x1))+rd(s->u,13,8)));
L_1803ddcb4_3:;
wr(s->r,16,4,(rd(s->u,21,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ddcb4_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ddcb4_5:;
/* 1803ddcbb: nop dword ptr [rax + rax] */
L_1803ddcbb_0:;
L_1803ddcbb_1:;
wr(s->u,29,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803ddcbb_2:;
wr(s->u,37,8,(rd(s->r,0,8)+rd(s->u,29,8)));
L_1803ddcbb_3:;
/* 1803ddcc0: sub rcx, 1 */
L_1803ddcc0_0:;
L_1803ddcc0_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x1))));
L_1803ddcc0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,1));
L_1803ddcc0_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x1))));
L_1803ddcc0_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddcc0_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ddcc0_6:;
wr(s->u,46,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ddcc0_7:;
wr(s->u,54,1,pop(rd(s->u,46,8),8));
L_1803ddcc0_8:;
wr(s->u,55,1,(rd(s->u,54,1)&((U)UINT64_C(0x1))));
L_1803ddcc0_9:;
wr(s->r,514,1,(rd(s->u,55,1)==((U)UINT64_C(0x0))));
L_1803ddcc0_10:;
/* 1803ddcc4: mulss xmm0, xmm3 */
L_1803ddcc4_0:;
L_1803ddcc4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ddcc4_2:;
/* 1803ddcc8: mulss xmm0, xmm3 */
L_1803ddcc8_0:;
L_1803ddcc8_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ddcc8_2:;
/* 1803ddccc: mulss xmm0, xmm3 */
L_1803ddccc_0:;
L_1803ddccc_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ddccc_2:;
/* 1803ddcd0: mulss xmm0, xmm3 */
L_1803ddcd0_0:;
L_1803ddcd0_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ddcd0_2:;
/* 1803ddcd4: jne 0x1803ddcc0 */
L_1803ddcd4_0:;
L_1803ddcd4_1:;
wr(s->u,45,1,(!rd(s->r,518,1)));
L_1803ddcd4_2:;
if(rd(s->u,45,1)){goto L_1803ddcc0_0;}
L_1803ddcd4_3:;
return UINT64_C(0x1803ddcd6);
}
uint64_t b_1803ddcc0(CPU*s){
/* 1803ddcc0: sub rcx, 1 */
L_1803ddcc0_0:;
L_1803ddcc0_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x1))));
L_1803ddcc0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,1));
L_1803ddcc0_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x1))));
L_1803ddcc0_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddcc0_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ddcc0_6:;
wr(s->u,1,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ddcc0_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803ddcc0_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddcc0_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddcc0_10:;
/* 1803ddcc4: mulss xmm0, xmm3 */
L_1803ddcc4_0:;
L_1803ddcc4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ddcc4_2:;
/* 1803ddcc8: mulss xmm0, xmm3 */
L_1803ddcc8_0:;
L_1803ddcc8_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ddcc8_2:;
/* 1803ddccc: mulss xmm0, xmm3 */
L_1803ddccc_0:;
L_1803ddccc_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ddccc_2:;
/* 1803ddcd0: mulss xmm0, xmm3 */
L_1803ddcd0_0:;
L_1803ddcd0_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ddcd0_2:;
/* 1803ddcd4: jne 0x1803ddcc0 */
L_1803ddcd4_0:;
L_1803ddcd4_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803ddcd4_2:;
if(rd(s->u,0,1)){goto L_1803ddcc0_0;}
L_1803ddcd4_3:;
return UINT64_C(0x1803ddcd6);
}
uint64_t b_1803ddcd6(CPU*s){
/* 1803ddcd6: movss dword ptr [rbx], xmm0 */
L_1803ddcd6_0:;
L_1803ddcd6_1:;
wr(s->u,0,4,rd(s->r,4608,4));
L_1803ddcd6_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,0,4));
L_1803ddcd6_3:;
/* 1803ddcda: cmp edx, ebp */
L_1803ddcda_0:;
L_1803ddcda_1:;
wr(s->u,11,4,rd(s->r,40,4));
L_1803ddcda_2:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,11,4)));
L_1803ddcda_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,11,4),4,1));
L_1803ddcda_4:;
wr(s->u,15,4,(rd(s->r,16,4)-rd(s->u,11,4)));
L_1803ddcda_5:;
wr(s->r,519,1,(sx(rd(s->u,15,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddcda_6:;
wr(s->r,518,1,(rd(s->u,15,4)==((U)UINT64_C(0x0))));
L_1803ddcda_7:;
wr(s->u,5,4,(rd(s->u,15,4)&((U)UINT64_C(0xff))));
L_1803ddcda_8:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803ddcda_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddcda_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddcda_11:;
/* 1803ddcdc: jge 0x1803ddcf4 */
L_1803ddcdc_0:;
L_1803ddcdc_1:;
wr(s->u,4,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ddcdc_2:;
if(rd(s->u,4,1)){return UINT64_C(0x1803ddcf4);}
L_1803ddcdc_3:;
return UINT64_C(0x1803ddcde);
}
uint64_t b_1803ddcda(CPU*s){
/* 1803ddcda: cmp edx, ebp */
L_1803ddcda_0:;
L_1803ddcda_1:;
wr(s->u,7,4,rd(s->r,40,4));
L_1803ddcda_2:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,7,4)));
L_1803ddcda_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,7,4),4,1));
L_1803ddcda_4:;
wr(s->u,11,4,(rd(s->r,16,4)-rd(s->u,7,4)));
L_1803ddcda_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddcda_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803ddcda_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803ddcda_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803ddcda_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803ddcda_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803ddcda_11:;
/* 1803ddcdc: jge 0x1803ddcf4 */
L_1803ddcdc_0:;
L_1803ddcdc_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803ddcdc_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ddcf4);}
L_1803ddcdc_3:;
return UINT64_C(0x1803ddcde);
}
uint64_t b_1803ddcde(CPU*s){
/* 1803ddcde: movss xmm0, dword ptr [rbx] */
L_1803ddcde_0:;
L_1803ddcde_1:;
wr(s->u,0,4,mr((uint64_t)rd(s->r,24,8),4));
L_1803ddcde_2:;
wr(s->r,4608,4,rd(s->u,0,4));
L_1803ddcde_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ddcde_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ddcde_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ddcde_6:;
/* 1803ddce2: mov ecx, ebp */
L_1803ddce2_0:;
L_1803ddce2_1:;
wr(s->r,8,4,rd(s->r,40,4));
L_1803ddce2_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ddce2_3:;
/* 1803ddce4: sub ecx, edx */
L_1803ddce4_0:;
L_1803ddce4_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,16,4)));
L_1803ddce4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,16,4),4,1));
L_1803ddce4_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,16,4)));
L_1803ddce4_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ddce4_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddce4_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ddce4_7:;
wr(s->u,5,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ddce4_8:;
wr(s->u,13,1,pop(rd(s->u,5,4),4));
L_1803ddce4_9:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803ddce4_10:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803ddce4_11:;
/* 1803ddce6: sub rcx, 1 */
L_1803ddce6_0:;
L_1803ddce6_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x1))));
L_1803ddce6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,1));
L_1803ddce6_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x1))));
L_1803ddce6_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddce6_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ddce6_6:;
wr(s->u,5,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ddce6_7:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803ddce6_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803ddce6_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803ddce6_10:;
/* 1803ddcea: mulss xmm0, xmm3 */
L_1803ddcea_0:;
L_1803ddcea_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ddcea_2:;
/* 1803ddcee: jne 0x1803ddce6 */
L_1803ddcee_0:;
L_1803ddcee_1:;
wr(s->u,4,1,(!rd(s->r,518,1)));
L_1803ddcee_2:;
if(rd(s->u,4,1)){goto L_1803ddce6_0;}
L_1803ddcee_3:;
return UINT64_C(0x1803ddcf0);
}
uint64_t b_1803ddce6(CPU*s){
/* 1803ddce6: sub rcx, 1 */
L_1803ddce6_0:;
L_1803ddce6_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x1))));
L_1803ddce6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,1));
L_1803ddce6_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x1))));
L_1803ddce6_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddce6_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ddce6_6:;
wr(s->u,1,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ddce6_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803ddce6_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddce6_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddce6_10:;
/* 1803ddcea: mulss xmm0, xmm3 */
L_1803ddcea_0:;
L_1803ddcea_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803ddcea_2:;
/* 1803ddcee: jne 0x1803ddce6 */
L_1803ddcee_0:;
L_1803ddcee_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803ddcee_2:;
if(rd(s->u,0,1)){goto L_1803ddce6_0;}
L_1803ddcee_3:;
return UINT64_C(0x1803ddcf0);
}
uint64_t b_1803ddcf0(CPU*s){
/* 1803ddcf0: movss dword ptr [rbx], xmm0 */
L_1803ddcf0_0:;
L_1803ddcf0_1:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803ddcf0_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,8,4));
L_1803ddcf0_3:;
/* 1803ddcf4: mov eax, dword ptr [rbx] */
L_1803ddcf4_0:;
L_1803ddcf4_1:;
wr(s->u,12,4,mr((uint64_t)rd(s->r,24,8),4));
L_1803ddcf4_2:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ddcf4_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddcf4_4:;
/* 1803ddcf6: sub rsi, 4 */
L_1803ddcf6_0:;
L_1803ddcf6_1:;
wr(s->r,512,1,(rd(s->r,48,8)<((U)UINT64_C(0x4))));
L_1803ddcf6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x4)),8,1));
L_1803ddcf6_3:;
wr(s->r,48,8,(rd(s->r,48,8)-((U)UINT64_C(0x4))));
L_1803ddcf6_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddcf6_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803ddcf6_6:;
wr(s->u,17,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803ddcf6_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803ddcf6_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ddcf6_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ddcf6_10:;
/* 1803ddcfa: add r12d, 2 */
L_1803ddcfa_0:;
L_1803ddcfa_1:;
wr(s->r,512,1,(((rd(s->r,160,4)+((U)UINT64_C(0x2)))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803ddcfa_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),((U)UINT64_C(0x2)),4,0));
L_1803ddcfa_3:;
wr(s->r,160,4,(rd(s->r,160,4)+((U)UINT64_C(0x2))));
L_1803ddcfa_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803ddcfa_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddcfa_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803ddcfa_7:;
wr(s->u,17,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803ddcfa_8:;
wr(s->u,25,1,pop(rd(s->u,17,4),4));
L_1803ddcfa_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ddcfa_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ddcfa_11:;
/* 1803ddcfe: mov dword ptr [rsi + 4], eax */
L_1803ddcfe_0:;
L_1803ddcfe_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803ddcfe_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ddcfe_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ddcfe_4:;
/* 1803ddd01: add rbx, 4 */
L_1803ddd01_0:;
L_1803ddd01_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803ddd01_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x4)),8,0));
L_1803ddd01_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x4))));
L_1803ddd01_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddd01_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803ddd01_6:;
wr(s->u,17,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803ddd01_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803ddd01_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ddd01_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ddd01_10:;
/* 1803ddd05: sub rdi, 1 */
L_1803ddd05_0:;
L_1803ddd05_1:;
wr(s->r,512,1,(rd(s->r,56,8)<((U)UINT64_C(0x1))));
L_1803ddd05_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x1)),8,1));
L_1803ddd05_3:;
wr(s->r,56,8,(rd(s->r,56,8)-((U)UINT64_C(0x1))));
L_1803ddd05_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddd05_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803ddd05_6:;
wr(s->u,17,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803ddd05_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803ddd05_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ddd05_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ddd05_10:;
/* 1803ddd09: jne 0x1803ddc70 */
L_1803ddd09_0:;
L_1803ddd09_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1803ddd09_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803ddc70);}
L_1803ddd09_3:;
return UINT64_C(0x1803ddd0f);
}
uint64_t b_1803ddcf4(CPU*s){
/* 1803ddcf4: mov eax, dword ptr [rbx] */
L_1803ddcf4_0:;
L_1803ddcf4_1:;
wr(s->u,12,4,mr((uint64_t)rd(s->r,24,8),4));
L_1803ddcf4_2:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803ddcf4_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddcf4_4:;
/* 1803ddcf6: sub rsi, 4 */
L_1803ddcf6_0:;
L_1803ddcf6_1:;
wr(s->r,512,1,(rd(s->r,48,8)<((U)UINT64_C(0x4))));
L_1803ddcf6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x4)),8,1));
L_1803ddcf6_3:;
wr(s->r,48,8,(rd(s->r,48,8)-((U)UINT64_C(0x4))));
L_1803ddcf6_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddcf6_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803ddcf6_6:;
wr(s->u,17,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803ddcf6_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803ddcf6_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ddcf6_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ddcf6_10:;
/* 1803ddcfa: add r12d, 2 */
L_1803ddcfa_0:;
L_1803ddcfa_1:;
wr(s->r,512,1,(((rd(s->r,160,4)+((U)UINT64_C(0x2)))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803ddcfa_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),((U)UINT64_C(0x2)),4,0));
L_1803ddcfa_3:;
wr(s->r,160,4,(rd(s->r,160,4)+((U)UINT64_C(0x2))));
L_1803ddcfa_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803ddcfa_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddcfa_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803ddcfa_7:;
wr(s->u,17,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803ddcfa_8:;
wr(s->u,25,1,pop(rd(s->u,17,4),4));
L_1803ddcfa_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ddcfa_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ddcfa_11:;
/* 1803ddcfe: mov dword ptr [rsi + 4], eax */
L_1803ddcfe_0:;
L_1803ddcfe_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x4))));
L_1803ddcfe_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803ddcfe_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ddcfe_4:;
/* 1803ddd01: add rbx, 4 */
L_1803ddd01_0:;
L_1803ddd01_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803ddd01_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x4)),8,0));
L_1803ddd01_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x4))));
L_1803ddd01_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddd01_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803ddd01_6:;
wr(s->u,17,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803ddd01_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803ddd01_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ddd01_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ddd01_10:;
/* 1803ddd05: sub rdi, 1 */
L_1803ddd05_0:;
L_1803ddd05_1:;
wr(s->r,512,1,(rd(s->r,56,8)<((U)UINT64_C(0x1))));
L_1803ddd05_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x1)),8,1));
L_1803ddd05_3:;
wr(s->r,56,8,(rd(s->r,56,8)-((U)UINT64_C(0x1))));
L_1803ddd05_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddd05_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803ddd05_6:;
wr(s->u,17,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803ddd05_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803ddd05_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ddd05_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ddd05_10:;
/* 1803ddd09: jne 0x1803ddc70 */
L_1803ddd09_0:;
L_1803ddd09_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1803ddd09_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803ddc70);}
L_1803ddd09_3:;
return UINT64_C(0x1803ddd0f);
}
uint64_t b_1803ddd0f(CPU*s){
/* 1803ddd0f: movaps xmm7, xmmword ptr [rsp + 0x30] */
L_1803ddd0f_0:;
L_1803ddd0f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803ddd0f_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ddd0f_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803ddd0f_4:;
wr(s->r,5056,4,rd(s->u,58,4));
L_1803ddd0f_5:;
wr(s->r,5060,4,rd(s->u,62,4));
L_1803ddd0f_6:;
wr(s->r,5064,4,rd(s->u,66,4));
L_1803ddd0f_7:;
wr(s->r,5068,4,rd(s->u,70,4));
L_1803ddd0f_8:;
/* 1803ddd14: movaps xmm6, xmmword ptr [rsp + 0x40] */
L_1803ddd14_0:;
L_1803ddd14_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803ddd14_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ddd14_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803ddd14_4:;
wr(s->r,4992,4,rd(s->u,58,4));
L_1803ddd14_5:;
wr(s->r,4996,4,rd(s->u,62,4));
L_1803ddd14_6:;
wr(s->r,5000,4,rd(s->u,66,4));
L_1803ddd14_7:;
wr(s->r,5004,4,rd(s->u,70,4));
L_1803ddd14_8:;
/* 1803ddd19: mov r13, qword ptr [rsp + 0x78] */
L_1803ddd19_0:;
L_1803ddd19_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803ddd19_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ddd19_3:;
wr(s->r,168,8,rd(s->u,32,8));
L_1803ddd19_4:;
/* 1803ddd1e: mov r12, qword ptr [rsp + 0x70] */
L_1803ddd1e_0:;
L_1803ddd1e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803ddd1e_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ddd1e_3:;
wr(s->r,160,8,rd(s->u,32,8));
L_1803ddd1e_4:;
/* 1803ddd23: mov rbx, qword ptr [rsp + 0x80] */
L_1803ddd23_0:;
L_1803ddd23_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803ddd23_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ddd23_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803ddd23_4:;
/* 1803ddd2b: movaps xmm8, xmmword ptr [rsp + 0x20] */
L_1803ddd2b_0:;
L_1803ddd2b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ddd2b_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ddd2b_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803ddd2b_4:;
wr(s->r,5120,4,rd(s->u,58,4));
L_1803ddd2b_5:;
wr(s->r,5124,4,rd(s->u,62,4));
L_1803ddd2b_6:;
wr(s->r,5128,4,rd(s->u,66,4));
L_1803ddd2b_7:;
wr(s->r,5132,4,rd(s->u,70,4));
L_1803ddd2b_8:;
/* 1803ddd31: add rsp, 0x50 */
L_1803ddd31_0:;
L_1803ddd31_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ddd31_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803ddd31_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803ddd31_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddd31_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ddd31_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ddd31_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803ddd31_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803ddd31_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803ddd31_10:;
/* 1803ddd35: pop rdi */
L_1803ddd35_0:;
L_1803ddd35_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803ddd35_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddd35_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddd35_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803ddd35_5:;
/* 1803ddd36: pop rsi */
L_1803ddd36_0:;
L_1803ddd36_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803ddd36_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddd36_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddd36_4:;
wr(s->r,48,8,rd(s->u,50,8));
L_1803ddd36_5:;
/* 1803ddd37: pop rbp */
L_1803ddd37_0:;
L_1803ddd37_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803ddd37_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddd37_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddd37_4:;
wr(s->r,40,8,rd(s->u,50,8));
L_1803ddd37_5:;
/* 1803ddd38: ret  */
L_1803ddd38_0:;
L_1803ddd38_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddd38_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddd38_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ddd38_4:;
return UINT64_C(0x1803ddd39);
}
uint64_t b_1803ddd23(CPU*s){
/* 1803ddd23: mov rbx, qword ptr [rsp + 0x80] */
L_1803ddd23_0:;
L_1803ddd23_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803ddd23_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803ddd23_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803ddd23_4:;
/* 1803ddd2b: movaps xmm8, xmmword ptr [rsp + 0x20] */
L_1803ddd2b_0:;
L_1803ddd2b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ddd2b_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803ddd2b_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803ddd2b_4:;
wr(s->r,5120,4,rd(s->u,58,4));
L_1803ddd2b_5:;
wr(s->r,5124,4,rd(s->u,62,4));
L_1803ddd2b_6:;
wr(s->r,5128,4,rd(s->u,66,4));
L_1803ddd2b_7:;
wr(s->r,5132,4,rd(s->u,70,4));
L_1803ddd2b_8:;
/* 1803ddd31: add rsp, 0x50 */
L_1803ddd31_0:;
L_1803ddd31_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ddd31_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803ddd31_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803ddd31_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddd31_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ddd31_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ddd31_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803ddd31_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803ddd31_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803ddd31_10:;
/* 1803ddd35: pop rdi */
L_1803ddd35_0:;
L_1803ddd35_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803ddd35_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddd35_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddd35_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803ddd35_5:;
/* 1803ddd36: pop rsi */
L_1803ddd36_0:;
L_1803ddd36_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803ddd36_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddd36_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddd36_4:;
wr(s->r,48,8,rd(s->u,50,8));
L_1803ddd36_5:;
/* 1803ddd37: pop rbp */
L_1803ddd37_0:;
L_1803ddd37_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803ddd37_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddd37_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddd37_4:;
wr(s->r,40,8,rd(s->u,50,8));
L_1803ddd37_5:;
/* 1803ddd38: ret  */
L_1803ddd38_0:;
L_1803ddd38_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddd38_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddd38_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ddd38_4:;
return UINT64_C(0x1803ddd39);
}
uint64_t b_1803ddd40(CPU*s){
/* 1803ddd40: mov qword ptr [rsp + 8], rcx */
L_1803ddd40_0:;
L_1803ddd40_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ddd40_2:;
wr(s->u,12,8,rd(s->r,8,8));
L_1803ddd40_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803ddd40_4:;
/* 1803ddd45: push rbx */
L_1803ddd45_0:;
L_1803ddd45_1:;
wr(s->u,26,8,rd(s->r,24,8));
L_1803ddd45_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddd45_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,26,8));
L_1803ddd45_4:;
/* 1803ddd46: push rsi */
L_1803ddd46_0:;
L_1803ddd46_1:;
wr(s->u,26,8,rd(s->r,48,8));
L_1803ddd46_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddd46_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,26,8));
L_1803ddd46_4:;
/* 1803ddd47: push rdi */
L_1803ddd47_0:;
L_1803ddd47_1:;
wr(s->u,26,8,rd(s->r,56,8));
L_1803ddd47_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddd47_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,26,8));
L_1803ddd47_4:;
/* 1803ddd48: push r13 */
L_1803ddd48_0:;
L_1803ddd48_1:;
wr(s->u,26,8,rd(s->r,168,8));
L_1803ddd48_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddd48_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,26,8));
L_1803ddd48_4:;
/* 1803ddd4a: push r14 */
L_1803ddd4a_0:;
L_1803ddd4a_1:;
wr(s->u,26,8,rd(s->r,176,8));
L_1803ddd4a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddd4a_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,26,8));
L_1803ddd4a_4:;
/* 1803ddd4c: push r15 */
L_1803ddd4c_0:;
L_1803ddd4c_1:;
wr(s->u,26,8,rd(s->r,184,8));
L_1803ddd4c_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddd4c_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,26,8));
L_1803ddd4c_4:;
/* 1803ddd4e: sub rsp, 0x18 */
L_1803ddd4e_0:;
L_1803ddd4e_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x18))));
L_1803ddd4e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x18)),8,1));
L_1803ddd4e_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x18))));
L_1803ddd4e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddd4e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ddd4e_6:;
wr(s->u,34,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ddd4e_7:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803ddd4e_8:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803ddd4e_9:;
wr(s->r,514,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803ddd4e_10:;
/* 1803ddd52: movsxd rdi, dword ptr [rsp + 0x70] */
L_1803ddd52_0:;
L_1803ddd52_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803ddd52_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ddd52_3:;
wr(s->r,56,8,(U)sx(rd(s->u,20,4),4));
L_1803ddd52_4:;
/* 1803ddd57: mov r15, rdx */
L_1803ddd57_0:;
L_1803ddd57_1:;
wr(s->r,184,8,rd(s->r,16,8));
L_1803ddd57_2:;
/* 1803ddd5a: mov eax, r9d */
L_1803ddd5a_0:;
L_1803ddd5a_1:;
wr(s->r,0,4,rd(s->r,136,4));
L_1803ddd5a_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddd5a_3:;
/* 1803ddd5d: cdq  */
L_1803ddd5d_0:;
L_1803ddd5d_1:;
wr(s->u,44,8,(U)sx(rd(s->r,0,4),4));
L_1803ddd5d_2:;
wr(s->r,16,4,(rd(s->u,44,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ddd5d_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ddd5d_4:;
/* 1803ddd5e: xor r10d, r10d */
L_1803ddd5e_0:;
L_1803ddd5e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ddd5e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddd5e_3:;
wr(s->r,144,4,(rd(s->r,144,4)^rd(s->r,144,4)));
L_1803ddd5e_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ddd5e_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddd5e_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ddd5e_7:;
wr(s->u,34,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ddd5e_8:;
wr(s->u,42,1,pop(rd(s->u,34,4),4));
L_1803ddd5e_9:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803ddd5e_10:;
wr(s->r,514,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803ddd5e_11:;
/* 1803ddd61: mov r13d, r9d */
L_1803ddd61_0:;
L_1803ddd61_1:;
wr(s->r,168,4,rd(s->r,136,4));
L_1803ddd61_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803ddd61_3:;
/* 1803ddd64: mov esi, r8d */
L_1803ddd64_0:;
L_1803ddd64_1:;
wr(s->r,48,4,rd(s->r,128,4));
L_1803ddd64_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803ddd64_3:;
/* 1803ddd67: mov rbx, rcx */
L_1803ddd67_0:;
L_1803ddd67_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803ddd67_2:;
/* 1803ddd6a: mov qword ptr [rsp], rdi */
L_1803ddd6a_0:;
L_1803ddd6a_1:;
wr(s->u,12,8,rd(s->r,56,8));
L_1803ddd6a_2:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,12,8));
L_1803ddd6a_3:;
/* 1803ddd6e: idiv r8d */
L_1803ddd6e_0:;
L_1803ddd6e_1:;
wr(s->u,52,8,(U)sx(rd(s->r,128,4),4));
L_1803ddd6e_2:;
wr(s->u,60,8,rd(s->r,16,4));
L_1803ddd6e_3:;
wr(s->u,68,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,60,8)<<((U)UINT64_C(0x20)))));
L_1803ddd6e_4:;
wr(s->u,76,8,rd(s->r,0,4));
L_1803ddd6e_5:;
wr(s->u,84,8,(rd(s->u,68,8)|rd(s->u,76,8)));
L_1803ddd6e_6:;
wr(s->u,92,8,((U)(sx(rd(s->u,84,8),8)/sx(rd(s->u,52,8),8))));
L_1803ddd6e_7:;
wr(s->r,0,4,(rd(s->u,92,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ddd6e_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddd6e_9:;
wr(s->u,100,8,((U)(sx(rd(s->u,84,8),8)%sx(rd(s->u,52,8),8))));
L_1803ddd6e_10:;
wr(s->r,16,4,(rd(s->u,100,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ddd6e_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ddd6e_12:;
/* 1803ddd71: mov r14d, eax */
L_1803ddd71_0:;
L_1803ddd71_1:;
wr(s->r,176,4,rd(s->r,0,4));
L_1803ddd71_2:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803ddd71_3:;
/* 1803ddd74: mov dword ptr [rsp + 0x60], r14d */
L_1803ddd74_0:;
L_1803ddd74_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803ddd74_2:;
wr(s->u,8,4,rd(s->r,176,4));
L_1803ddd74_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803ddd74_4:;
/* 1803ddd79: test rdi, rdi */
L_1803ddd79_0:;
L_1803ddd79_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803ddd79_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddd79_3:;
wr(s->u,108,8,(rd(s->r,56,8)&rd(s->r,56,8)));
L_1803ddd79_4:;
wr(s->r,519,1,(sx(rd(s->u,108,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddd79_5:;
wr(s->r,518,1,(rd(s->u,108,8)==((U)UINT64_C(0x0))));
L_1803ddd79_6:;
wr(s->u,34,8,(rd(s->u,108,8)&((U)UINT64_C(0xff))));
L_1803ddd79_7:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803ddd79_8:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803ddd79_9:;
wr(s->r,514,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803ddd79_10:;
/* 1803ddd7c: jle 0x1803ddf27 */
L_1803ddd7c_0:;
L_1803ddd7c_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ddd7c_2:;
wr(s->u,25,1,((rd(s->r,518,1)!=0)||(rd(s->u,24,1)!=0)));
L_1803ddd7c_3:;
if(rd(s->u,25,1)){return UINT64_C(0x1803ddf27);}
L_1803ddd7c_4:;
return UINT64_C(0x1803ddd82);
}
uint64_t b_1803ddd82(CPU*s){
/* 1803ddd82: xorps xmm2, xmm2 */
L_1803ddd82_0:;
L_1803ddd82_1:;
wr(s->r,4736,4,(rd(s->r,4736,4)^rd(s->r,4736,4)));
L_1803ddd82_2:;
wr(s->r,4740,4,(rd(s->r,4740,4)^rd(s->r,4740,4)));
L_1803ddd82_3:;
wr(s->r,4744,4,(rd(s->r,4744,4)^rd(s->r,4744,4)));
L_1803ddd82_4:;
wr(s->r,4748,4,(rd(s->r,4748,4)^rd(s->r,4748,4)));
L_1803ddd82_5:;
/* 1803ddd85: movss xmm3, dword ptr [rip + 0x26eeb7] */
L_1803ddd85_0:;
L_1803ddd85_1:;
wr(s->r,4800,4,mr(UINT64_C(0x18064cc44),4));
L_1803ddd85_2:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803ddd85_3:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803ddd85_4:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803ddd85_5:;
/* 1803ddd8d: mov rax, r15 */
L_1803ddd8d_0:;
L_1803ddd8d_1:;
wr(s->r,0,8,rd(s->r,184,8));
L_1803ddd8d_2:;
/* 1803ddd90: sub rax, rcx */
L_1803ddd90_0:;
L_1803ddd90_1:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->r,8,8)));
L_1803ddd90_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,8,8),8,1));
L_1803ddd90_3:;
wr(s->r,0,8,(rd(s->r,0,8)-rd(s->r,8,8)));
L_1803ddd90_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddd90_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803ddd90_6:;
wr(s->u,37,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803ddd90_7:;
wr(s->u,45,1,pop(rd(s->u,37,8),8));
L_1803ddd90_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803ddd90_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803ddd90_10:;
/* 1803ddd93: mov qword ptr [rsp + 0x58], rbp */
L_1803ddd93_0:;
L_1803ddd93_1:;
wr(s->u,16,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803ddd93_2:;
wr(s->u,28,8,rd(s->r,40,8));
L_1803ddd93_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ddd93_4:;
/* 1803ddd98: mov qword ptr [rsp + 0x10], r12 */
L_1803ddd98_0:;
L_1803ddd98_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ddd98_2:;
wr(s->u,28,8,rd(s->r,160,8));
L_1803ddd98_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ddd98_4:;
/* 1803ddd9d: mov qword ptr [rsp + 8], rax */
L_1803ddd9d_0:;
L_1803ddd9d_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ddd9d_2:;
wr(s->u,28,8,rd(s->r,0,8));
L_1803ddd9d_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ddd9d_4:;
/* 1803ddda2: cmp r14d, 4 */
L_1803ddda2_0:;
L_1803ddda2_1:;
wr(s->u,47,4,rd(s->r,176,4));
L_1803ddda2_2:;
wr(s->r,512,1,(rd(s->u,47,4)<((U)UINT64_C(0x4))));
L_1803ddda2_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,47,4),((U)UINT64_C(0x4)),4,1));
L_1803ddda2_4:;
wr(s->u,51,4,(rd(s->u,47,4)-((U)UINT64_C(0x4))));
L_1803ddda2_5:;
wr(s->r,519,1,(sx(rd(s->u,51,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddda2_6:;
wr(s->r,518,1,(rd(s->u,51,4)==((U)UINT64_C(0x0))));
L_1803ddda2_7:;
wr(s->u,37,4,(rd(s->u,51,4)&((U)UINT64_C(0xff))));
L_1803ddda2_8:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803ddda2_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803ddda2_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803ddda2_11:;
/* 1803ddda6: movss xmm1, dword ptr [rax + rbx] */
L_1803ddda6_0:;
L_1803ddda6_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x1))));
L_1803ddda6_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803ddda6_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ddda6_4:;
wr(s->r,4672,4,rd(s->u,24,4));
L_1803ddda6_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ddda6_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ddda6_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ddda6_8:;
/* 1803dddab: mov edx, 1 */
L_1803dddab_0:;
L_1803dddab_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803dddab_2:;
/* 1803dddb0: mulss xmm1, xmm1 */
L_1803dddb0_0:;
L_1803dddb0_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803dddb0_2:;
/* 1803dddb4: jl 0x1803dde9b */
L_1803dddb4_0:;
L_1803dddb4_1:;
wr(s->u,36,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dddb4_2:;
if(rd(s->u,36,1)){return UINT64_C(0x1803dde9b);}
L_1803dddb4_3:;
return UINT64_C(0x1803dddba);
}
uint64_t b_1803ddd93(CPU*s){
/* 1803ddd93: mov qword ptr [rsp + 0x58], rbp */
L_1803ddd93_0:;
L_1803ddd93_1:;
wr(s->u,16,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803ddd93_2:;
wr(s->u,28,8,rd(s->r,40,8));
L_1803ddd93_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ddd93_4:;
/* 1803ddd98: mov qword ptr [rsp + 0x10], r12 */
L_1803ddd98_0:;
L_1803ddd98_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ddd98_2:;
wr(s->u,28,8,rd(s->r,160,8));
L_1803ddd98_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ddd98_4:;
/* 1803ddd9d: mov qword ptr [rsp + 8], rax */
L_1803ddd9d_0:;
L_1803ddd9d_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ddd9d_2:;
wr(s->u,28,8,rd(s->r,0,8));
L_1803ddd9d_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803ddd9d_4:;
/* 1803ddda2: cmp r14d, 4 */
L_1803ddda2_0:;
L_1803ddda2_1:;
wr(s->u,43,4,rd(s->r,176,4));
L_1803ddda2_2:;
wr(s->r,512,1,(rd(s->u,43,4)<((U)UINT64_C(0x4))));
L_1803ddda2_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,43,4),((U)UINT64_C(0x4)),4,1));
L_1803ddda2_4:;
wr(s->u,47,4,(rd(s->u,43,4)-((U)UINT64_C(0x4))));
L_1803ddda2_5:;
wr(s->r,519,1,(sx(rd(s->u,47,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddda2_6:;
wr(s->r,518,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803ddda2_7:;
wr(s->u,37,4,(rd(s->u,47,4)&((U)UINT64_C(0xff))));
L_1803ddda2_8:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803ddda2_9:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803ddda2_10:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803ddda2_11:;
/* 1803ddda6: movss xmm1, dword ptr [rax + rbx] */
L_1803ddda6_0:;
L_1803ddda6_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x1))));
L_1803ddda6_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803ddda6_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ddda6_4:;
wr(s->r,4672,4,rd(s->u,24,4));
L_1803ddda6_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ddda6_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ddda6_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ddda6_8:;
/* 1803dddab: mov edx, 1 */
L_1803dddab_0:;
L_1803dddab_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803dddab_2:;
/* 1803dddb0: mulss xmm1, xmm1 */
L_1803dddb0_0:;
L_1803dddb0_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803dddb0_2:;
/* 1803dddb4: jl 0x1803dde9b */
L_1803dddb4_0:;
L_1803dddb4_1:;
wr(s->u,36,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dddb4_2:;
if(rd(s->u,36,1)){return UINT64_C(0x1803dde9b);}
L_1803dddb4_3:;
return UINT64_C(0x1803dddba);
}
uint64_t b_1803ddda2(CPU*s){
/* 1803ddda2: cmp r14d, 4 */
L_1803ddda2_0:;
L_1803ddda2_1:;
wr(s->u,27,4,rd(s->r,176,4));
L_1803ddda2_2:;
wr(s->r,512,1,(rd(s->u,27,4)<((U)UINT64_C(0x4))));
L_1803ddda2_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,27,4),((U)UINT64_C(0x4)),4,1));
L_1803ddda2_4:;
wr(s->u,31,4,(rd(s->u,27,4)-((U)UINT64_C(0x4))));
L_1803ddda2_5:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddda2_6:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803ddda2_7:;
wr(s->u,21,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803ddda2_8:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803ddda2_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803ddda2_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803ddda2_11:;
/* 1803ddda6: movss xmm1, dword ptr [rax + rbx] */
L_1803ddda6_0:;
L_1803ddda6_1:;
wr(s->u,0,8,(rd(s->r,24,8)*((U)UINT64_C(0x1))));
L_1803ddda6_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803ddda6_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ddda6_4:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803ddda6_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803ddda6_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803ddda6_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803ddda6_8:;
/* 1803dddab: mov edx, 1 */
L_1803dddab_0:;
L_1803dddab_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803dddab_2:;
/* 1803dddb0: mulss xmm1, xmm1 */
L_1803dddb0_0:;
L_1803dddb0_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803dddb0_2:;
/* 1803dddb4: jl 0x1803dde9b */
L_1803dddb4_0:;
L_1803dddb4_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dddb4_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803dde9b);}
L_1803dddb4_3:;
return UINT64_C(0x1803dddba);
}
uint64_t b_1803dddba(CPU*s){
/* 1803dddba: lea eax, [rsi + rsi*2] */
L_1803dddba_0:;
L_1803dddba_1:;
wr(s->u,5,8,(rd(s->r,48,8)*((U)UINT64_C(0x2))));
L_1803dddba_2:;
wr(s->u,13,8,(rd(s->r,48,8)+rd(s->u,5,8)));
L_1803dddba_3:;
wr(s->r,0,4,(rd(s->u,13,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dddba_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dddba_5:;
/* 1803dddbd: lea edi, [rsi*4] */
L_1803dddbd_0:;
L_1803dddbd_1:;
wr(s->u,37,8,(rd(s->r,48,8)*((U)UINT64_C(0x4))));
L_1803dddbd_2:;
wr(s->r,56,4,(rd(s->u,37,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dddbd_3:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803dddbd_4:;
/* 1803dddc4: mov ebx, esi */
L_1803dddc4_0:;
L_1803dddc4_1:;
wr(s->r,24,4,rd(s->r,48,4));
L_1803dddc4_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dddc4_3:;
/* 1803dddc6: neg ebx */
L_1803dddc6_0:;
L_1803dddc6_1:;
wr(s->r,512,1,(rd(s->r,24,4)!=((U)UINT64_C(0x0))));
L_1803dddc6_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,24,4),4,1));
L_1803dddc6_3:;
wr(s->r,24,4,(-rd(s->r,24,4)));
L_1803dddc6_4:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dddc6_5:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803dddc6_6:;
wr(s->u,58,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803dddc6_7:;
wr(s->u,62,1,pop(rd(s->u,58,4),4));
L_1803dddc6_8:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803dddc6_9:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803dddc6_10:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dddc6_11:;
/* 1803dddc8: mov r8d, r13d */
L_1803dddc8_0:;
L_1803dddc8_1:;
wr(s->r,128,4,rd(s->r,168,4));
L_1803dddc8_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dddc8_3:;
/* 1803dddcb: mov r9d, r13d */
L_1803dddcb_0:;
L_1803dddcb_1:;
wr(s->r,136,4,rd(s->r,168,4));
L_1803dddcb_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dddcb_3:;
/* 1803dddce: mov ecx, r13d */
L_1803dddce_0:;
L_1803dddce_1:;
wr(s->r,8,4,rd(s->r,168,4));
L_1803dddce_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dddce_3:;
/* 1803dddd1: shl ebx, 2 */
L_1803dddd1_0:;
L_1803dddd1_1:;
wr(s->u,132,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803dddd1_2:;
wr(s->u,136,4,rd(s->r,24,4));
L_1803dddd1_3:;
wr(s->r,24,4,((rd(s->u,132,4)>=32)?0:(rd(s->r,24,4)<<rd(s->u,132,4))));
L_1803dddd1_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803dddd1_5:;
wr(s->u,87,1,(rd(s->u,132,4)==((U)UINT64_C(0x0))));
L_1803dddd1_6:;
wr(s->u,88,4,(rd(s->u,132,4)-((U)UINT64_C(0x1))));
L_1803dddd1_7:;
wr(s->u,92,4,((rd(s->u,88,4)>=32)?0:(rd(s->u,136,4)<<rd(s->u,88,4))));
L_1803dddd1_8:;
wr(s->u,96,1,(sx(rd(s->u,92,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dddd1_9:;
wr(s->u,0,1,rd(s->u,87,1));
L_1803dddd1_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803dddd1_11:;
wr(s->u,2,1,(!rd(s->u,87,1)));
L_1803dddd1_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dddd1_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,96,1)));
L_1803dddd1_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dddd1_15:;
wr(s->u,97,1,(rd(s->u,132,4)==((U)UINT64_C(0x1))));
L_1803dddd1_16:;
wr(s->u,98,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dddd1_17:;
wr(s->u,99,1,(rd(s->r,512,1)^rd(s->u,98,1)));
L_1803dddd1_18:;
wr(s->u,0,1,rd(s->u,97,1));
L_1803dddd1_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,99,1)));
L_1803dddd1_20:;
wr(s->u,2,1,(!rd(s->u,97,1)));
L_1803dddd1_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803dddd1_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803dddd1_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803dddd1_24:;
wr(s->u,64,1,(rd(s->u,132,4)!=((U)UINT64_C(0x0))));
L_1803dddd1_25:;
wr(s->u,65,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dddd1_26:;
wr(s->u,66,1,(!rd(s->u,64,1)));
L_1803dddd1_27:;
wr(s->u,67,1,(rd(s->u,66,1)&rd(s->r,519,1)));
L_1803dddd1_28:;
wr(s->u,68,1,(rd(s->u,64,1)&rd(s->u,65,1)));
L_1803dddd1_29:;
wr(s->r,519,1,(rd(s->u,67,1)|rd(s->u,68,1)));
L_1803dddd1_30:;
wr(s->u,69,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803dddd1_31:;
wr(s->u,70,1,(!rd(s->u,64,1)));
L_1803dddd1_32:;
wr(s->u,71,1,(rd(s->u,70,1)&rd(s->r,518,1)));
L_1803dddd1_33:;
wr(s->u,72,1,(rd(s->u,64,1)&rd(s->u,69,1)));
L_1803dddd1_34:;
wr(s->r,518,1,(rd(s->u,71,1)|rd(s->u,72,1)));
L_1803dddd1_35:;
wr(s->u,73,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803dddd1_36:;
wr(s->u,81,1,pop(rd(s->u,73,4),4));
L_1803dddd1_37:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803dddd1_38:;
wr(s->u,83,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803dddd1_39:;
wr(s->u,84,1,(!rd(s->u,64,1)));
L_1803dddd1_40:;
wr(s->u,85,1,(rd(s->u,84,1)&rd(s->r,514,1)));
L_1803dddd1_41:;
wr(s->u,86,1,(rd(s->u,64,1)&rd(s->u,83,1)));
L_1803dddd1_42:;
wr(s->r,514,1,(rd(s->u,85,1)|rd(s->u,86,1)));
L_1803dddd1_43:;
/* 1803dddd4: sub r8d, esi */
L_1803dddd4_0:;
L_1803dddd4_1:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->r,48,4)));
L_1803dddd4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->r,48,4),4,1));
L_1803dddd4_3:;
wr(s->r,128,4,(rd(s->r,128,4)-rd(s->r,48,4)));
L_1803dddd4_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dddd4_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dddd4_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803dddd4_7:;
wr(s->u,58,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803dddd4_8:;
wr(s->u,62,1,pop(rd(s->u,58,4),4));
L_1803dddd4_9:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803dddd4_10:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803dddd4_11:;
/* 1803dddd7: sub ecx, eax */
L_1803dddd7_0:;
L_1803dddd7_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803dddd7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803dddd7_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803dddd7_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dddd7_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dddd7_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dddd7_7:;
wr(s->u,58,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dddd7_8:;
wr(s->u,62,1,pop(rd(s->u,58,4),4));
L_1803dddd7_9:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803dddd7_10:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803dddd7_11:;
/* 1803dddd9: sub r9d, edi */
L_1803dddd9_0:;
L_1803dddd9_1:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->r,56,4)));
L_1803dddd9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->r,56,4),4,1));
L_1803dddd9_3:;
wr(s->r,136,4,(rd(s->r,136,4)-rd(s->r,56,4)));
L_1803dddd9_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dddd9_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dddd9_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dddd9_7:;
wr(s->u,58,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dddd9_8:;
wr(s->u,62,1,pop(rd(s->u,58,4),4));
L_1803dddd9_9:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803dddd9_10:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803dddd9_11:;
/* 1803ddddc: shr r14, 2 */
L_1803ddddc_0:;
L_1803ddddc_1:;
wr(s->u,140,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803ddddc_2:;
wr(s->u,144,8,rd(s->r,176,8));
L_1803ddddc_3:;
wr(s->r,176,8,((rd(s->u,140,4)>=64)?0:(rd(s->r,176,8)>>rd(s->u,140,4))));
L_1803ddddc_4:;
wr(s->u,100,1,(rd(s->u,140,4)==((U)UINT64_C(0x0))));
L_1803ddddc_5:;
wr(s->u,101,4,(rd(s->u,140,4)-((U)UINT64_C(0x1))));
L_1803ddddc_6:;
wr(s->u,105,8,((rd(s->u,101,4)>=64)?0:(rd(s->u,144,8)>>rd(s->u,101,4))));
L_1803ddddc_7:;
wr(s->u,113,8,(rd(s->u,105,8)&((U)UINT64_C(0x1))));
L_1803ddddc_8:;
wr(s->u,121,1,(rd(s->u,113,8)!=((U)UINT64_C(0x0))));
L_1803ddddc_9:;
wr(s->u,0,1,rd(s->u,100,1));
L_1803ddddc_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803ddddc_11:;
wr(s->u,2,1,(!rd(s->u,100,1)));
L_1803ddddc_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ddddc_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,121,1)));
L_1803ddddc_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ddddc_15:;
wr(s->u,122,1,(rd(s->u,140,4)==((U)UINT64_C(0x1))));
L_1803ddddc_16:;
wr(s->u,123,1,(sx(rd(s->u,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddddc_17:;
wr(s->u,0,1,rd(s->u,122,1));
L_1803ddddc_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803ddddc_19:;
wr(s->u,2,1,(!rd(s->u,122,1)));
L_1803ddddc_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803ddddc_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,123,1)));
L_1803ddddc_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803ddddc_23:;
wr(s->u,64,1,(rd(s->u,140,4)!=((U)UINT64_C(0x0))));
L_1803ddddc_24:;
wr(s->u,65,1,(sx(rd(s->r,176,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddddc_25:;
wr(s->u,66,1,(!rd(s->u,64,1)));
L_1803ddddc_26:;
wr(s->u,67,1,(rd(s->u,66,1)&rd(s->r,519,1)));
L_1803ddddc_27:;
wr(s->u,68,1,(rd(s->u,64,1)&rd(s->u,65,1)));
L_1803ddddc_28:;
wr(s->r,519,1,(rd(s->u,67,1)|rd(s->u,68,1)));
L_1803ddddc_29:;
wr(s->u,69,1,(rd(s->r,176,8)==((U)UINT64_C(0x0))));
L_1803ddddc_30:;
wr(s->u,70,1,(!rd(s->u,64,1)));
L_1803ddddc_31:;
wr(s->u,71,1,(rd(s->u,70,1)&rd(s->r,518,1)));
L_1803ddddc_32:;
wr(s->u,72,1,(rd(s->u,64,1)&rd(s->u,69,1)));
L_1803ddddc_33:;
wr(s->r,518,1,(rd(s->u,71,1)|rd(s->u,72,1)));
L_1803ddddc_34:;
wr(s->u,73,8,(rd(s->r,176,8)&((U)UINT64_C(0xff))));
L_1803ddddc_35:;
wr(s->u,81,1,pop(rd(s->u,73,8),8));
L_1803ddddc_36:;
wr(s->u,82,1,(rd(s->u,81,1)&((U)UINT64_C(0x1))));
L_1803ddddc_37:;
wr(s->u,83,1,(rd(s->u,82,1)==((U)UINT64_C(0x0))));
L_1803ddddc_38:;
wr(s->u,84,1,(!rd(s->u,64,1)));
L_1803ddddc_39:;
wr(s->u,85,1,(rd(s->u,84,1)&rd(s->r,514,1)));
L_1803ddddc_40:;
wr(s->u,86,1,(rd(s->u,64,1)&rd(s->u,83,1)));
L_1803ddddc_41:;
wr(s->r,514,1,(rd(s->u,85,1)|rd(s->u,86,1)));
L_1803ddddc_42:;
/* 1803ddde0: lea r12d, [rax + r10] */
L_1803ddde0_0:;
L_1803ddde0_1:;
wr(s->u,5,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803ddde0_2:;
wr(s->u,13,8,(rd(s->r,0,8)+rd(s->u,5,8)));
L_1803ddde0_3:;
wr(s->r,160,4,(rd(s->u,13,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ddde0_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803ddde0_5:;
/* 1803ddde4: lea eax, [r14*4 + 1] */
L_1803ddde4_0:;
L_1803ddde4_1:;
wr(s->u,21,8,(rd(s->r,176,8)*((U)UINT64_C(0x4))));
L_1803ddde4_2:;
wr(s->u,29,8,(((U)UINT64_C(0x1))+rd(s->u,21,8)));
L_1803ddde4_3:;
wr(s->r,0,4,(rd(s->u,29,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ddde4_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddde4_5:;
/* 1803dddec: lea r11d, [r10 + rsi] */
L_1803dddec_0:;
L_1803dddec_1:;
wr(s->u,5,8,(rd(s->r,48,8)*((U)UINT64_C(0x1))));
L_1803dddec_2:;
wr(s->u,13,8,(rd(s->r,144,8)+rd(s->u,5,8)));
L_1803dddec_3:;
wr(s->r,152,4,(rd(s->u,13,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dddec_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dddec_5:;
/* 1803dddf0: mov dword ptr [rsp + 0x70], eax */
L_1803dddf0_0:;
L_1803dddf0_1:;
wr(s->u,45,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dddf0_2:;
wr(s->u,53,4,rd(s->r,0,4));
L_1803dddf0_3:;
mw((uint64_t)rd(s->u,45,8),4,rd(s->u,53,4));
L_1803dddf0_4:;
/* 1803dddf4: lea ebp, [rdi + r10] */
L_1803dddf4_0:;
L_1803dddf4_1:;
wr(s->u,5,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803dddf4_2:;
wr(s->u,13,8,(rd(s->r,56,8)+rd(s->u,5,8)));
L_1803dddf4_3:;
wr(s->r,40,4,(rd(s->u,13,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dddf4_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dddf4_5:;
/* 1803dddf8: cmp r8d, r10d */
L_1803dddf8_0:;
L_1803dddf8_1:;
wr(s->u,124,4,rd(s->r,144,4));
L_1803dddf8_2:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->u,124,4)));
L_1803dddf8_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->u,124,4),4,1));
L_1803dddf8_4:;
wr(s->u,128,4,(rd(s->r,128,4)-rd(s->u,124,4)));
L_1803dddf8_5:;
wr(s->r,519,1,(sx(rd(s->u,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dddf8_6:;
wr(s->r,518,1,(rd(s->u,128,4)==((U)UINT64_C(0x0))));
L_1803dddf8_7:;
wr(s->u,58,4,(rd(s->u,128,4)&((U)UINT64_C(0xff))));
L_1803dddf8_8:;
wr(s->u,62,1,pop(rd(s->u,58,4),4));
L_1803dddf8_9:;
wr(s->u,63,1,(rd(s->u,62,1)&((U)UINT64_C(0x1))));
L_1803dddf8_10:;
wr(s->r,514,1,(rd(s->u,63,1)==((U)UINT64_C(0x0))));
L_1803dddf8_11:;
/* 1803dddfb: jl 0x1803dde15 */
L_1803dddfb_0:;
L_1803dddfb_1:;
wr(s->u,57,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dddfb_2:;
if(rd(s->u,57,1)){return UINT64_C(0x1803dde15);}
L_1803dddfb_3:;
return UINT64_C(0x1803dddfd);
}
uint64_t b_1803dddf8(CPU*s){
/* 1803dddf8: cmp r8d, r10d */
L_1803dddf8_0:;
L_1803dddf8_1:;
wr(s->u,7,4,rd(s->r,144,4));
L_1803dddf8_2:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->u,7,4)));
L_1803dddf8_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->u,7,4),4,1));
L_1803dddf8_4:;
wr(s->u,11,4,(rd(s->r,128,4)-rd(s->u,7,4)));
L_1803dddf8_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dddf8_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803dddf8_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803dddf8_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dddf8_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dddf8_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dddf8_11:;
/* 1803dddfb: jl 0x1803dde15 */
L_1803dddfb_0:;
L_1803dddfb_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dddfb_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dde15);}
L_1803dddfb_3:;
return UINT64_C(0x1803dddfd);
}
uint64_t b_1803dddfd(CPU*s){
/* 1803dddfd: mov eax, r11d */
L_1803dddfd_0:;
L_1803dddfd_1:;
wr(s->r,0,4,rd(s->r,152,4));
L_1803dddfd_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dddfd_3:;
/* 1803dde00: cdq  */
L_1803dde00_0:;
L_1803dde00_1:;
wr(s->u,27,8,(U)sx(rd(s->r,0,4),4));
L_1803dde00_2:;
wr(s->r,16,4,(rd(s->u,27,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dde00_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dde00_4:;
/* 1803dde01: idiv r13d */
L_1803dde01_0:;
L_1803dde01_1:;
wr(s->u,43,8,(U)sx(rd(s->r,168,4),4));
L_1803dde01_2:;
wr(s->u,51,8,rd(s->r,16,4));
L_1803dde01_3:;
wr(s->u,59,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,51,8)<<((U)UINT64_C(0x20)))));
L_1803dde01_4:;
wr(s->u,67,8,rd(s->r,0,4));
L_1803dde01_5:;
wr(s->u,75,8,(rd(s->u,59,8)|rd(s->u,67,8)));
L_1803dde01_6:;
wr(s->u,83,8,((U)(sx(rd(s->u,75,8),8)/sx(rd(s->u,43,8),8))));
L_1803dde01_7:;
wr(s->r,0,4,(rd(s->u,83,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dde01_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dde01_9:;
wr(s->u,91,8,((U)(sx(rd(s->u,75,8),8)%sx(rd(s->u,43,8),8))));
L_1803dde01_10:;
wr(s->r,16,4,(rd(s->u,91,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dde01_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dde01_12:;
/* 1803dde04: movsxd rax, edx */
L_1803dde04_0:;
L_1803dde04_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803dde04_2:;
/* 1803dde07: movss xmm0, dword ptr [r15 + rax*4] */
L_1803dde07_0:;
L_1803dde07_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803dde07_2:;
wr(s->u,8,8,(rd(s->r,184,8)+rd(s->u,0,8)));
L_1803dde07_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dde07_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803dde07_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dde07_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dde07_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dde07_8:;
/* 1803dde0d: mulss xmm0, xmm0 */
L_1803dde0d_0:;
L_1803dde0d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803dde0d_2:;
/* 1803dde11: addss xmm1, xmm0 */
L_1803dde11_0:;
L_1803dde11_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803dde11_2:;
/* 1803dde15: lea eax, [rcx + rsi] */
L_1803dde15_0:;
L_1803dde15_1:;
wr(s->u,0,8,(rd(s->r,48,8)*((U)UINT64_C(0x1))));
L_1803dde15_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803dde15_3:;
wr(s->r,0,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dde15_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dde15_5:;
/* 1803dde18: cmp eax, r10d */
L_1803dde18_0:;
L_1803dde18_1:;
wr(s->u,35,4,rd(s->r,144,4));
L_1803dde18_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,35,4)));
L_1803dde18_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,35,4),4,1));
L_1803dde18_4:;
wr(s->u,39,4,(rd(s->r,0,4)-rd(s->u,35,4)));
L_1803dde18_5:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde18_6:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803dde18_7:;
wr(s->u,21,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803dde18_8:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803dde18_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803dde18_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803dde18_11:;
/* 1803dde1b: jl 0x1803dde36 */
L_1803dde1b_0:;
L_1803dde1b_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dde1b_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803dde36);}
L_1803dde1b_3:;
return UINT64_C(0x1803dde1d);
}
uint64_t b_1803dde15(CPU*s){
/* 1803dde15: lea eax, [rcx + rsi] */
L_1803dde15_0:;
L_1803dde15_1:;
wr(s->u,0,8,(rd(s->r,48,8)*((U)UINT64_C(0x1))));
L_1803dde15_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803dde15_3:;
wr(s->r,0,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dde15_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dde15_5:;
/* 1803dde18: cmp eax, r10d */
L_1803dde18_0:;
L_1803dde18_1:;
wr(s->u,23,4,rd(s->r,144,4));
L_1803dde18_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,23,4)));
L_1803dde18_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,23,4),4,1));
L_1803dde18_4:;
wr(s->u,27,4,(rd(s->r,0,4)-rd(s->u,23,4)));
L_1803dde18_5:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde18_6:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803dde18_7:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803dde18_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803dde18_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803dde18_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803dde18_11:;
/* 1803dde1b: jl 0x1803dde36 */
L_1803dde1b_0:;
L_1803dde1b_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dde1b_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803dde36);}
L_1803dde1b_3:;
return UINT64_C(0x1803dde1d);
}
uint64_t b_1803dde1d(CPU*s){
/* 1803dde1d: lea eax, [r11 + rsi] */
L_1803dde1d_0:;
L_1803dde1d_1:;
wr(s->u,0,8,(rd(s->r,48,8)*((U)UINT64_C(0x1))));
L_1803dde1d_2:;
wr(s->u,8,8,(rd(s->r,152,8)+rd(s->u,0,8)));
L_1803dde1d_3:;
wr(s->r,0,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dde1d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dde1d_5:;
/* 1803dde21: cdq  */
L_1803dde21_0:;
L_1803dde21_1:;
wr(s->u,27,8,(U)sx(rd(s->r,0,4),4));
L_1803dde21_2:;
wr(s->r,16,4,(rd(s->u,27,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dde21_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dde21_4:;
/* 1803dde22: idiv r13d */
L_1803dde22_0:;
L_1803dde22_1:;
wr(s->u,43,8,(U)sx(rd(s->r,168,4),4));
L_1803dde22_2:;
wr(s->u,51,8,rd(s->r,16,4));
L_1803dde22_3:;
wr(s->u,59,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,51,8)<<((U)UINT64_C(0x20)))));
L_1803dde22_4:;
wr(s->u,67,8,rd(s->r,0,4));
L_1803dde22_5:;
wr(s->u,75,8,(rd(s->u,59,8)|rd(s->u,67,8)));
L_1803dde22_6:;
wr(s->u,83,8,((U)(sx(rd(s->u,75,8),8)/sx(rd(s->u,43,8),8))));
L_1803dde22_7:;
wr(s->r,0,4,(rd(s->u,83,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dde22_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dde22_9:;
wr(s->u,91,8,((U)(sx(rd(s->u,75,8),8)%sx(rd(s->u,43,8),8))));
L_1803dde22_10:;
wr(s->r,16,4,(rd(s->u,91,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dde22_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dde22_12:;
/* 1803dde25: movsxd rax, edx */
L_1803dde25_0:;
L_1803dde25_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803dde25_2:;
/* 1803dde28: movss xmm0, dword ptr [r15 + rax*4] */
L_1803dde28_0:;
L_1803dde28_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803dde28_2:;
wr(s->u,8,8,(rd(s->r,184,8)+rd(s->u,0,8)));
L_1803dde28_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dde28_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803dde28_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dde28_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dde28_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dde28_8:;
/* 1803dde2e: mulss xmm0, xmm0 */
L_1803dde2e_0:;
L_1803dde2e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803dde2e_2:;
/* 1803dde32: addss xmm1, xmm0 */
L_1803dde32_0:;
L_1803dde32_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803dde32_2:;
/* 1803dde36: cmp ecx, r10d */
L_1803dde36_0:;
L_1803dde36_1:;
wr(s->u,35,4,rd(s->r,144,4));
L_1803dde36_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,35,4)));
L_1803dde36_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,35,4),4,1));
L_1803dde36_4:;
wr(s->u,39,4,(rd(s->r,8,4)-rd(s->u,35,4)));
L_1803dde36_5:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde36_6:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803dde36_7:;
wr(s->u,21,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803dde36_8:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803dde36_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803dde36_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803dde36_11:;
/* 1803dde39: jl 0x1803dde53 */
L_1803dde39_0:;
L_1803dde39_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dde39_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803dde53);}
L_1803dde39_3:;
return UINT64_C(0x1803dde3b);
}
uint64_t b_1803dde36(CPU*s){
/* 1803dde36: cmp ecx, r10d */
L_1803dde36_0:;
L_1803dde36_1:;
wr(s->u,7,4,rd(s->r,144,4));
L_1803dde36_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,7,4)));
L_1803dde36_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,7,4),4,1));
L_1803dde36_4:;
wr(s->u,11,4,(rd(s->r,8,4)-rd(s->u,7,4)));
L_1803dde36_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde36_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803dde36_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803dde36_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dde36_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dde36_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dde36_11:;
/* 1803dde39: jl 0x1803dde53 */
L_1803dde39_0:;
L_1803dde39_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dde39_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dde53);}
L_1803dde39_3:;
return UINT64_C(0x1803dde3b);
}
uint64_t b_1803dde3b(CPU*s){
/* 1803dde3b: mov eax, r12d */
L_1803dde3b_0:;
L_1803dde3b_1:;
wr(s->r,0,4,rd(s->r,160,4));
L_1803dde3b_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dde3b_3:;
/* 1803dde3e: cdq  */
L_1803dde3e_0:;
L_1803dde3e_1:;
wr(s->u,27,8,(U)sx(rd(s->r,0,4),4));
L_1803dde3e_2:;
wr(s->r,16,4,(rd(s->u,27,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dde3e_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dde3e_4:;
/* 1803dde3f: idiv r13d */
L_1803dde3f_0:;
L_1803dde3f_1:;
wr(s->u,43,8,(U)sx(rd(s->r,168,4),4));
L_1803dde3f_2:;
wr(s->u,51,8,rd(s->r,16,4));
L_1803dde3f_3:;
wr(s->u,59,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,51,8)<<((U)UINT64_C(0x20)))));
L_1803dde3f_4:;
wr(s->u,67,8,rd(s->r,0,4));
L_1803dde3f_5:;
wr(s->u,75,8,(rd(s->u,59,8)|rd(s->u,67,8)));
L_1803dde3f_6:;
wr(s->u,83,8,((U)(sx(rd(s->u,75,8),8)/sx(rd(s->u,43,8),8))));
L_1803dde3f_7:;
wr(s->r,0,4,(rd(s->u,83,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dde3f_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dde3f_9:;
wr(s->u,91,8,((U)(sx(rd(s->u,75,8),8)%sx(rd(s->u,43,8),8))));
L_1803dde3f_10:;
wr(s->r,16,4,(rd(s->u,91,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dde3f_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dde3f_12:;
/* 1803dde42: movsxd rax, edx */
L_1803dde42_0:;
L_1803dde42_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803dde42_2:;
/* 1803dde45: movss xmm0, dword ptr [r15 + rax*4] */
L_1803dde45_0:;
L_1803dde45_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803dde45_2:;
wr(s->u,8,8,(rd(s->r,184,8)+rd(s->u,0,8)));
L_1803dde45_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dde45_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803dde45_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dde45_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dde45_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dde45_8:;
/* 1803dde4b: mulss xmm0, xmm0 */
L_1803dde4b_0:;
L_1803dde4b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803dde4b_2:;
/* 1803dde4f: addss xmm1, xmm0 */
L_1803dde4f_0:;
L_1803dde4f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803dde4f_2:;
/* 1803dde53: cmp r9d, r10d */
L_1803dde53_0:;
L_1803dde53_1:;
wr(s->u,35,4,rd(s->r,144,4));
L_1803dde53_2:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,35,4)));
L_1803dde53_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,35,4),4,1));
L_1803dde53_4:;
wr(s->u,39,4,(rd(s->r,136,4)-rd(s->u,35,4)));
L_1803dde53_5:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde53_6:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803dde53_7:;
wr(s->u,21,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803dde53_8:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803dde53_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803dde53_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803dde53_11:;
/* 1803dde56: jl 0x1803dde6f */
L_1803dde56_0:;
L_1803dde56_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dde56_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803dde6f);}
L_1803dde56_3:;
return UINT64_C(0x1803dde58);
}
uint64_t b_1803dde53(CPU*s){
/* 1803dde53: cmp r9d, r10d */
L_1803dde53_0:;
L_1803dde53_1:;
wr(s->u,7,4,rd(s->r,144,4));
L_1803dde53_2:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,7,4)));
L_1803dde53_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,7,4),4,1));
L_1803dde53_4:;
wr(s->u,11,4,(rd(s->r,136,4)-rd(s->u,7,4)));
L_1803dde53_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde53_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803dde53_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803dde53_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803dde53_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803dde53_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803dde53_11:;
/* 1803dde56: jl 0x1803dde6f */
L_1803dde56_0:;
L_1803dde56_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803dde56_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dde6f);}
L_1803dde56_3:;
return UINT64_C(0x1803dde58);
}
uint64_t b_1803dde58(CPU*s){
/* 1803dde58: mov eax, ebp */
L_1803dde58_0:;
L_1803dde58_1:;
wr(s->r,0,4,rd(s->r,40,4));
L_1803dde58_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dde58_3:;
/* 1803dde5a: cdq  */
L_1803dde5a_0:;
L_1803dde5a_1:;
wr(s->u,31,8,(U)sx(rd(s->r,0,4),4));
L_1803dde5a_2:;
wr(s->r,16,4,(rd(s->u,31,8) >> (((U)UINT64_C(0x4))*8)));
L_1803dde5a_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dde5a_4:;
/* 1803dde5b: idiv r13d */
L_1803dde5b_0:;
L_1803dde5b_1:;
wr(s->u,39,8,(U)sx(rd(s->r,168,4),4));
L_1803dde5b_2:;
wr(s->u,47,8,rd(s->r,16,4));
L_1803dde5b_3:;
wr(s->u,55,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,47,8)<<((U)UINT64_C(0x20)))));
L_1803dde5b_4:;
wr(s->u,63,8,rd(s->r,0,4));
L_1803dde5b_5:;
wr(s->u,71,8,(rd(s->u,55,8)|rd(s->u,63,8)));
L_1803dde5b_6:;
wr(s->u,79,8,((U)(sx(rd(s->u,71,8),8)/sx(rd(s->u,39,8),8))));
L_1803dde5b_7:;
wr(s->r,0,4,(rd(s->u,79,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dde5b_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803dde5b_9:;
wr(s->u,87,8,((U)(sx(rd(s->u,71,8),8)%sx(rd(s->u,39,8),8))));
L_1803dde5b_10:;
wr(s->r,16,4,(rd(s->u,87,8) >> (((U)UINT64_C(0x0))*8)));
L_1803dde5b_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dde5b_12:;
/* 1803dde5e: movsxd rax, edx */
L_1803dde5e_0:;
L_1803dde5e_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803dde5e_2:;
/* 1803dde61: movss xmm0, dword ptr [r15 + rax*4] */
L_1803dde61_0:;
L_1803dde61_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803dde61_2:;
wr(s->u,8,8,(rd(s->r,184,8)+rd(s->u,0,8)));
L_1803dde61_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803dde61_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803dde61_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803dde61_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803dde61_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803dde61_8:;
/* 1803dde67: mulss xmm0, xmm0 */
L_1803dde67_0:;
L_1803dde67_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803dde67_2:;
/* 1803dde6b: addss xmm1, xmm0 */
L_1803dde6b_0:;
L_1803dde6b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803dde6b_2:;
/* 1803dde6f: add r8d, ebx */
L_1803dde6f_0:;
L_1803dde6f_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+rd(s->r,24,4))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803dde6f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->r,24,4),4,0));
L_1803dde6f_3:;
wr(s->r,128,4,(rd(s->r,128,4)+rd(s->r,24,4)));
L_1803dde6f_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dde6f_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde6f_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803dde6f_7:;
wr(s->u,21,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803dde6f_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803dde6f_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dde6f_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dde6f_11:;
/* 1803dde72: add ecx, ebx */
L_1803dde72_0:;
L_1803dde72_1:;
wr(s->r,512,1,(((rd(s->r,8,4)+rd(s->r,24,4))&(((U)1<<32)-1))<rd(s->r,8,4)));
L_1803dde72_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,24,4),4,0));
L_1803dde72_3:;
wr(s->r,8,4,(rd(s->r,8,4)+rd(s->r,24,4)));
L_1803dde72_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dde72_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde72_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dde72_7:;
wr(s->u,21,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dde72_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803dde72_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dde72_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dde72_11:;
/* 1803dde74: add r9d, ebx */
L_1803dde74_0:;
L_1803dde74_1:;
wr(s->r,512,1,(((rd(s->r,136,4)+rd(s->r,24,4))&(((U)1<<32)-1))<rd(s->r,136,4)));
L_1803dde74_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->r,24,4),4,0));
L_1803dde74_3:;
wr(s->r,136,4,(rd(s->r,136,4)+rd(s->r,24,4)));
L_1803dde74_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dde74_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde74_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dde74_7:;
wr(s->u,21,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dde74_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803dde74_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dde74_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dde74_11:;
/* 1803dde77: add r11d, edi */
L_1803dde77_0:;
L_1803dde77_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+rd(s->r,56,4))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803dde77_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),rd(s->r,56,4),4,0));
L_1803dde77_3:;
wr(s->r,152,4,(rd(s->r,152,4)+rd(s->r,56,4)));
L_1803dde77_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dde77_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde77_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803dde77_7:;
wr(s->u,21,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803dde77_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803dde77_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dde77_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dde77_11:;
/* 1803dde7a: add r12d, edi */
L_1803dde7a_0:;
L_1803dde7a_1:;
wr(s->r,512,1,(((rd(s->r,160,4)+rd(s->r,56,4))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803dde7a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),rd(s->r,56,4),4,0));
L_1803dde7a_3:;
wr(s->r,160,4,(rd(s->r,160,4)+rd(s->r,56,4)));
L_1803dde7a_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803dde7a_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde7a_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803dde7a_7:;
wr(s->u,21,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803dde7a_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803dde7a_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dde7a_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dde7a_11:;
/* 1803dde7d: add ebp, edi */
L_1803dde7d_0:;
L_1803dde7d_1:;
wr(s->r,512,1,(((rd(s->r,40,4)+rd(s->r,56,4))&(((U)1<<32)-1))<rd(s->r,40,4)));
L_1803dde7d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->r,56,4),4,0));
L_1803dde7d_3:;
wr(s->r,40,4,(rd(s->r,40,4)+rd(s->r,56,4)));
L_1803dde7d_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dde7d_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde7d_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803dde7d_7:;
wr(s->u,21,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803dde7d_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803dde7d_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dde7d_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dde7d_11:;
/* 1803dde7f: sub r14, 1 */
L_1803dde7f_0:;
L_1803dde7f_1:;
wr(s->r,512,1,(rd(s->r,176,8)<((U)UINT64_C(0x1))));
L_1803dde7f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,8),((U)UINT64_C(0x1)),8,1));
L_1803dde7f_3:;
wr(s->r,176,8,(rd(s->r,176,8)-((U)UINT64_C(0x1))));
L_1803dde7f_4:;
wr(s->r,519,1,(sx(rd(s->r,176,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dde7f_5:;
wr(s->r,518,1,(rd(s->r,176,8)==((U)UINT64_C(0x0))));
L_1803dde7f_6:;
wr(s->u,21,8,(rd(s->r,176,8)&((U)UINT64_C(0xff))));
L_1803dde7f_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803dde7f_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803dde7f_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803dde7f_10:;
/* 1803dde83: jne 0x1803dddf8 */
L_1803dde83_0:;
L_1803dde83_1:;
wr(s->u,20,1,(!rd(s->r,518,1)));
L_1803dde83_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803dddf8);}
L_1803dde83_3:;
return UINT64_C(0x1803dde89);
}
uint64_t b_1803dde6f(CPU*s){
/* 1803dde6f: add r8d, ebx */
L_1803dde6f_0:;
L_1803dde6f_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+rd(s->r,24,4))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803dde6f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->r,24,4),4,0));
L_1803dde6f_3:;
wr(s->r,128,4,(rd(s->r,128,4)+rd(s->r,24,4)));
L_1803dde6f_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803dde6f_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde6f_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803dde6f_7:;
wr(s->u,1,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803dde6f_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803dde6f_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dde6f_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dde6f_11:;
/* 1803dde72: add ecx, ebx */
L_1803dde72_0:;
L_1803dde72_1:;
wr(s->r,512,1,(((rd(s->r,8,4)+rd(s->r,24,4))&(((U)1<<32)-1))<rd(s->r,8,4)));
L_1803dde72_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,24,4),4,0));
L_1803dde72_3:;
wr(s->r,8,4,(rd(s->r,8,4)+rd(s->r,24,4)));
L_1803dde72_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803dde72_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde72_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803dde72_7:;
wr(s->u,1,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803dde72_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803dde72_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dde72_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dde72_11:;
/* 1803dde74: add r9d, ebx */
L_1803dde74_0:;
L_1803dde74_1:;
wr(s->r,512,1,(((rd(s->r,136,4)+rd(s->r,24,4))&(((U)1<<32)-1))<rd(s->r,136,4)));
L_1803dde74_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->r,24,4),4,0));
L_1803dde74_3:;
wr(s->r,136,4,(rd(s->r,136,4)+rd(s->r,24,4)));
L_1803dde74_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803dde74_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde74_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803dde74_7:;
wr(s->u,1,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803dde74_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803dde74_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dde74_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dde74_11:;
/* 1803dde77: add r11d, edi */
L_1803dde77_0:;
L_1803dde77_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+rd(s->r,56,4))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803dde77_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),rd(s->r,56,4),4,0));
L_1803dde77_3:;
wr(s->r,152,4,(rd(s->r,152,4)+rd(s->r,56,4)));
L_1803dde77_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803dde77_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde77_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803dde77_7:;
wr(s->u,1,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803dde77_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803dde77_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dde77_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dde77_11:;
/* 1803dde7a: add r12d, edi */
L_1803dde7a_0:;
L_1803dde7a_1:;
wr(s->r,512,1,(((rd(s->r,160,4)+rd(s->r,56,4))&(((U)1<<32)-1))<rd(s->r,160,4)));
L_1803dde7a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),rd(s->r,56,4),4,0));
L_1803dde7a_3:;
wr(s->r,160,4,(rd(s->r,160,4)+rd(s->r,56,4)));
L_1803dde7a_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803dde7a_5:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde7a_6:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803dde7a_7:;
wr(s->u,1,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803dde7a_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803dde7a_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dde7a_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dde7a_11:;
/* 1803dde7d: add ebp, edi */
L_1803dde7d_0:;
L_1803dde7d_1:;
wr(s->r,512,1,(((rd(s->r,40,4)+rd(s->r,56,4))&(((U)1<<32)-1))<rd(s->r,40,4)));
L_1803dde7d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->r,56,4),4,0));
L_1803dde7d_3:;
wr(s->r,40,4,(rd(s->r,40,4)+rd(s->r,56,4)));
L_1803dde7d_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803dde7d_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde7d_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803dde7d_7:;
wr(s->u,1,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803dde7d_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803dde7d_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dde7d_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dde7d_11:;
/* 1803dde7f: sub r14, 1 */
L_1803dde7f_0:;
L_1803dde7f_1:;
wr(s->r,512,1,(rd(s->r,176,8)<((U)UINT64_C(0x1))));
L_1803dde7f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,8),((U)UINT64_C(0x1)),8,1));
L_1803dde7f_3:;
wr(s->r,176,8,(rd(s->r,176,8)-((U)UINT64_C(0x1))));
L_1803dde7f_4:;
wr(s->r,519,1,(sx(rd(s->r,176,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803dde7f_5:;
wr(s->r,518,1,(rd(s->r,176,8)==((U)UINT64_C(0x0))));
L_1803dde7f_6:;
wr(s->u,1,8,(rd(s->r,176,8)&((U)UINT64_C(0xff))));
L_1803dde7f_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803dde7f_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803dde7f_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803dde7f_10:;
/* 1803dde83: jne 0x1803dddf8 */
L_1803dde83_0:;
L_1803dde83_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803dde83_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803dddf8);}
L_1803dde83_3:;
return UINT64_C(0x1803dde89);
}
uint64_t b_1803dde89(CPU*s){
/* 1803dde89: mov rbx, qword ptr [rsp + 0x50] */
L_1803dde89_0:;
L_1803dde89_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803dde89_2:;
wr(s->u,12,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803dde89_3:;
wr(s->r,24,8,rd(s->u,12,8));
L_1803dde89_4:;
/* 1803dde8e: mov edx, dword ptr [rsp + 0x70] */
L_1803dde8e_0:;
L_1803dde8e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803dde8e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dde8e_3:;
wr(s->r,16,4,rd(s->u,8,4));
L_1803dde8e_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803dde8e_5:;
/* 1803dde92: mov r14d, dword ptr [rsp + 0x60] */
L_1803dde92_0:;
L_1803dde92_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803dde92_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803dde92_3:;
wr(s->r,176,4,rd(s->u,8,4));
L_1803dde92_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803dde92_5:;
/* 1803dde97: mov rdi, qword ptr [rsp] */
L_1803dde97_0:;
L_1803dde97_1:;
wr(s->u,12,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803dde97_2:;
wr(s->r,56,8,rd(s->u,12,8));
L_1803dde97_3:;
/* 1803dde9b: cmp edx, r14d */
L_1803dde9b_0:;
L_1803dde9b_1:;
wr(s->u,29,4,rd(s->r,176,4));
L_1803dde9b_2:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,29,4)));
L_1803dde9b_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,29,4),4,1));
L_1803dde9b_4:;
wr(s->u,33,4,(rd(s->r,16,4)-rd(s->u,29,4)));
L_1803dde9b_5:;
wr(s->r,519,1,(sx(rd(s->u,33,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde9b_6:;
wr(s->r,518,1,(rd(s->u,33,4)==((U)UINT64_C(0x0))));
L_1803dde9b_7:;
wr(s->u,23,4,(rd(s->u,33,4)&((U)UINT64_C(0xff))));
L_1803dde9b_8:;
wr(s->u,27,1,pop(rd(s->u,23,4),4));
L_1803dde9b_9:;
wr(s->u,28,1,(rd(s->u,27,1)&((U)UINT64_C(0x1))));
L_1803dde9b_10:;
wr(s->r,514,1,(rd(s->u,28,1)==((U)UINT64_C(0x0))));
L_1803dde9b_11:;
/* 1803dde9e: jg 0x1803ddee6 */
L_1803dde9e_0:;
L_1803dde9e_1:;
wr(s->u,20,1,(!rd(s->r,518,1)));
L_1803dde9e_2:;
wr(s->u,21,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dde9e_3:;
wr(s->u,22,1,((rd(s->u,20,1)!=0)&&(rd(s->u,21,1)!=0)));
L_1803dde9e_4:;
if(rd(s->u,22,1)){return UINT64_C(0x1803ddee6);}
L_1803dde9e_5:;
return UINT64_C(0x1803ddea0);
}
uint64_t b_1803dde9b(CPU*s){
/* 1803dde9b: cmp edx, r14d */
L_1803dde9b_0:;
L_1803dde9b_1:;
wr(s->u,9,4,rd(s->r,176,4));
L_1803dde9b_2:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->u,9,4)));
L_1803dde9b_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->u,9,4),4,1));
L_1803dde9b_4:;
wr(s->u,13,4,(rd(s->r,16,4)-rd(s->u,9,4)));
L_1803dde9b_5:;
wr(s->r,519,1,(sx(rd(s->u,13,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803dde9b_6:;
wr(s->r,518,1,(rd(s->u,13,4)==((U)UINT64_C(0x0))));
L_1803dde9b_7:;
wr(s->u,3,4,(rd(s->u,13,4)&((U)UINT64_C(0xff))));
L_1803dde9b_8:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803dde9b_9:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803dde9b_10:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803dde9b_11:;
/* 1803dde9e: jg 0x1803ddee6 */
L_1803dde9e_0:;
L_1803dde9e_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803dde9e_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803dde9e_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803dde9e_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803ddee6);}
L_1803dde9e_5:;
return UINT64_C(0x1803ddea0);
}
uint64_t b_1803ddea0(CPU*s){
/* 1803ddea0: mov eax, edx */
L_1803ddea0_0:;
L_1803ddea0_1:;
wr(s->r,0,4,rd(s->r,16,4));
L_1803ddea0_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddea0_3:;
/* 1803ddea2: mov r9d, r14d */
L_1803ddea2_0:;
L_1803ddea2_1:;
wr(s->r,136,4,rd(s->r,176,4));
L_1803ddea2_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ddea2_3:;
/* 1803ddea5: mov r11d, esi */
L_1803ddea5_0:;
L_1803ddea5_1:;
wr(s->r,152,4,rd(s->r,48,4));
L_1803ddea5_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ddea5_3:;
/* 1803ddea8: mov ecx, r13d */
L_1803ddea8_0:;
L_1803ddea8_1:;
wr(s->r,8,4,rd(s->r,168,4));
L_1803ddea8_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ddea8_3:;
/* 1803ddeab: sub r9d, edx */
L_1803ddeab_0:;
L_1803ddeab_1:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->r,16,4)));
L_1803ddeab_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->r,16,4),4,1));
L_1803ddeab_3:;
wr(s->r,136,4,(rd(s->r,136,4)-rd(s->r,16,4)));
L_1803ddeab_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ddeab_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddeab_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ddeab_7:;
wr(s->u,17,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ddeab_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803ddeab_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ddeab_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ddeab_11:;
/* 1803ddeae: neg r11d */
L_1803ddeae_0:;
L_1803ddeae_1:;
wr(s->r,512,1,(rd(s->r,152,4)!=((U)UINT64_C(0x0))));
L_1803ddeae_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,152,4),4,1));
L_1803ddeae_3:;
wr(s->r,152,4,(-rd(s->r,152,4)));
L_1803ddeae_4:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddeae_5:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803ddeae_6:;
wr(s->u,17,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803ddeae_7:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803ddeae_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ddeae_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ddeae_10:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803ddeae_11:;
/* 1803ddeb1: imul eax, esi */
L_1803ddeb1_0:;
L_1803ddeb1_1:;
wr(s->u,39,8,(U)sx(rd(s->r,0,4),4));
L_1803ddeb1_2:;
wr(s->u,47,8,(U)sx(rd(s->r,48,4),4));
L_1803ddeb1_3:;
wr(s->u,55,8,(rd(s->u,39,8)*rd(s->u,47,8)));
L_1803ddeb1_4:;
wr(s->r,0,4,(rd(s->u,55,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ddeb1_5:;
wr(s->u,63,4,(rd(s->u,55,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ddeb1_6:;
wr(s->u,23,8,(U)sx(rd(s->r,0,4),4));
L_1803ddeb1_7:;
wr(s->r,512,1,(rd(s->u,23,8)!=rd(s->u,55,8)));
L_1803ddeb1_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1803ddeb1_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddeb1_10:;
/* 1803ddeb4: sub ecx, eax */
L_1803ddeb4_0:;
L_1803ddeb4_1:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->r,0,4)));
L_1803ddeb4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,0,4),4,1));
L_1803ddeb4_3:;
wr(s->r,8,4,(rd(s->r,8,4)-rd(s->r,0,4)));
L_1803ddeb4_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ddeb4_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddeb4_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ddeb4_7:;
wr(s->u,17,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ddeb4_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803ddeb4_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ddeb4_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ddeb4_11:;
/* 1803ddeb6: lea r8d, [rax + r10] */
L_1803ddeb6_0:;
L_1803ddeb6_1:;
wr(s->u,0,8,(rd(s->r,144,8)*((U)UINT64_C(0x1))));
L_1803ddeb6_2:;
wr(s->u,8,8,(rd(s->r,0,8)+rd(s->u,0,8)));
L_1803ddeb6_3:;
wr(s->r,128,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ddeb6_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ddeb6_5:;
/* 1803ddeba: inc r9d */
L_1803ddeba_0:;
L_1803ddeba_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803ddeba_2:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803ddeba_3:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803ddeba_4:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddeba_5:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803ddeba_6:;
wr(s->u,17,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803ddeba_7:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803ddeba_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ddeba_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ddeba_10:;
/* 1803ddebd: cmp ecx, r10d */
L_1803ddebd_0:;
L_1803ddebd_1:;
wr(s->u,31,4,rd(s->r,144,4));
L_1803ddebd_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,31,4)));
L_1803ddebd_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,31,4),4,1));
L_1803ddebd_4:;
wr(s->u,35,4,(rd(s->r,8,4)-rd(s->u,31,4)));
L_1803ddebd_5:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddebd_6:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803ddebd_7:;
wr(s->u,17,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803ddebd_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803ddebd_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803ddebd_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803ddebd_11:;
/* 1803ddec0: jl 0x1803ddeda */
L_1803ddec0_0:;
L_1803ddec0_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ddec0_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803ddeda);}
L_1803ddec0_3:;
return UINT64_C(0x1803ddec2);
}
uint64_t b_1803ddebd(CPU*s){
/* 1803ddebd: cmp ecx, r10d */
L_1803ddebd_0:;
L_1803ddebd_1:;
wr(s->u,7,4,rd(s->r,144,4));
L_1803ddebd_2:;
wr(s->r,512,1,(rd(s->r,8,4)<rd(s->u,7,4)));
L_1803ddebd_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->u,7,4),4,1));
L_1803ddebd_4:;
wr(s->u,11,4,(rd(s->r,8,4)-rd(s->u,7,4)));
L_1803ddebd_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddebd_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803ddebd_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803ddebd_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803ddebd_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803ddebd_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803ddebd_11:;
/* 1803ddec0: jl 0x1803ddeda */
L_1803ddec0_0:;
L_1803ddec0_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803ddec0_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ddeda);}
L_1803ddec0_3:;
return UINT64_C(0x1803ddec2);
}
uint64_t b_1803ddec2(CPU*s){
/* 1803ddec2: mov eax, r8d */
L_1803ddec2_0:;
L_1803ddec2_1:;
wr(s->r,0,4,rd(s->r,128,4));
L_1803ddec2_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddec2_3:;
/* 1803ddec5: cdq  */
L_1803ddec5_0:;
L_1803ddec5_1:;
wr(s->u,31,8,(U)sx(rd(s->r,0,4),4));
L_1803ddec5_2:;
wr(s->r,16,4,(rd(s->u,31,8) >> (((U)UINT64_C(0x4))*8)));
L_1803ddec5_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ddec5_4:;
/* 1803ddec6: idiv r13d */
L_1803ddec6_0:;
L_1803ddec6_1:;
wr(s->u,39,8,(U)sx(rd(s->r,168,4),4));
L_1803ddec6_2:;
wr(s->u,47,8,rd(s->r,16,4));
L_1803ddec6_3:;
wr(s->u,55,8,((((U)UINT64_C(0x20))>=64)?0:(rd(s->u,47,8)<<((U)UINT64_C(0x20)))));
L_1803ddec6_4:;
wr(s->u,63,8,rd(s->r,0,4));
L_1803ddec6_5:;
wr(s->u,71,8,(rd(s->u,55,8)|rd(s->u,63,8)));
L_1803ddec6_6:;
wr(s->u,79,8,((U)(sx(rd(s->u,71,8),8)/sx(rd(s->u,39,8),8))));
L_1803ddec6_7:;
wr(s->r,0,4,(rd(s->u,79,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ddec6_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803ddec6_9:;
wr(s->u,87,8,((U)(sx(rd(s->u,71,8),8)%sx(rd(s->u,39,8),8))));
L_1803ddec6_10:;
wr(s->r,16,4,(rd(s->u,87,8) >> (((U)UINT64_C(0x0))*8)));
L_1803ddec6_11:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803ddec6_12:;
/* 1803ddec9: movsxd rax, edx */
L_1803ddec9_0:;
L_1803ddec9_1:;
wr(s->r,0,8,(U)sx(rd(s->r,16,4),4));
L_1803ddec9_2:;
/* 1803ddecc: movss xmm0, dword ptr [r15 + rax*4] */
L_1803ddecc_0:;
L_1803ddecc_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803ddecc_2:;
wr(s->u,8,8,(rd(s->r,184,8)+rd(s->u,0,8)));
L_1803ddecc_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803ddecc_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803ddecc_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803ddecc_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803ddecc_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803ddecc_8:;
/* 1803dded2: mulss xmm0, xmm0 */
L_1803dded2_0:;
L_1803dded2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803dded2_2:;
/* 1803dded6: addss xmm1, xmm0 */
L_1803dded6_0:;
L_1803dded6_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803dded6_2:;
/* 1803ddeda: add ecx, r11d */
L_1803ddeda_0:;
L_1803ddeda_1:;
wr(s->r,512,1,(((rd(s->r,8,4)+rd(s->r,152,4))&(((U)1<<32)-1))<rd(s->r,8,4)));
L_1803ddeda_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,152,4),4,0));
L_1803ddeda_3:;
wr(s->r,8,4,(rd(s->r,8,4)+rd(s->r,152,4)));
L_1803ddeda_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ddeda_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddeda_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ddeda_7:;
wr(s->u,21,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ddeda_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803ddeda_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803ddeda_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803ddeda_11:;
/* 1803ddedd: add r8d, esi */
L_1803ddedd_0:;
L_1803ddedd_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+rd(s->r,48,4))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803ddedd_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->r,48,4),4,0));
L_1803ddedd_3:;
wr(s->r,128,4,(rd(s->r,128,4)+rd(s->r,48,4)));
L_1803ddedd_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ddedd_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddedd_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ddedd_7:;
wr(s->u,21,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ddedd_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803ddedd_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803ddedd_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803ddedd_11:;
/* 1803ddee0: sub r9, 1 */
L_1803ddee0_0:;
L_1803ddee0_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803ddee0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803ddee0_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803ddee0_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddee0_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803ddee0_6:;
wr(s->u,21,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803ddee0_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803ddee0_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803ddee0_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803ddee0_10:;
/* 1803ddee4: jne 0x1803ddebd */
L_1803ddee4_0:;
L_1803ddee4_1:;
wr(s->u,20,1,(!rd(s->r,518,1)));
L_1803ddee4_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803ddebd);}
L_1803ddee4_3:;
return UINT64_C(0x1803ddee6);
}
uint64_t b_1803ddeda(CPU*s){
/* 1803ddeda: add ecx, r11d */
L_1803ddeda_0:;
L_1803ddeda_1:;
wr(s->r,512,1,(((rd(s->r,8,4)+rd(s->r,152,4))&(((U)1<<32)-1))<rd(s->r,8,4)));
L_1803ddeda_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,4),rd(s->r,152,4),4,0));
L_1803ddeda_3:;
wr(s->r,8,4,(rd(s->r,8,4)+rd(s->r,152,4)));
L_1803ddeda_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803ddeda_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddeda_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803ddeda_7:;
wr(s->u,1,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803ddeda_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803ddeda_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddeda_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddeda_11:;
/* 1803ddedd: add r8d, esi */
L_1803ddedd_0:;
L_1803ddedd_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+rd(s->r,48,4))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803ddedd_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->r,48,4),4,0));
L_1803ddedd_3:;
wr(s->r,128,4,(rd(s->r,128,4)+rd(s->r,48,4)));
L_1803ddedd_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803ddedd_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddedd_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803ddedd_7:;
wr(s->u,1,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803ddedd_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803ddedd_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddedd_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddedd_11:;
/* 1803ddee0: sub r9, 1 */
L_1803ddee0_0:;
L_1803ddee0_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803ddee0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803ddee0_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803ddee0_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddee0_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803ddee0_6:;
wr(s->u,1,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803ddee0_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803ddee0_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803ddee0_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803ddee0_10:;
/* 1803ddee4: jne 0x1803ddebd */
L_1803ddee4_0:;
L_1803ddee4_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803ddee4_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ddebd);}
L_1803ddee4_3:;
return UINT64_C(0x1803ddee6);
}
uint64_t b_1803ddee6(CPU*s){
/* 1803ddee6: ucomiss xmm1, xmm2 */
L_1803ddee6_0:;
L_1803ddee6_1:;
wr(s->u,1,1,isnan(fv(rd(s->r,4672,4),4)));
L_1803ddee6_2:;
wr(s->u,2,1,isnan(fv(rd(s->r,4736,4),4)));
L_1803ddee6_3:;
wr(s->r,514,1,((rd(s->u,1,1)!=0)||(rd(s->u,2,1)!=0)));
L_1803ddee6_4:;
wr(s->u,3,1,(fv(rd(s->r,4672,4),4)==fv(rd(s->r,4736,4),4)));
L_1803ddee6_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803ddee6_6:;
wr(s->u,4,1,(fv(rd(s->r,4672,4),4)<fv(rd(s->r,4736,4),4)));
L_1803ddee6_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803ddee6_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803ddee6_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803ddee6_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803ddee6_11:;
/* 1803ddee9: jne 0x1803ddef3 */
L_1803ddee9_0:;
L_1803ddee9_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803ddee9_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803ddef3);}
L_1803ddee9_3:;
return UINT64_C(0x1803ddeeb);
}
uint64_t b_1803ddeeb(CPU*s){
/* 1803ddeeb: mov dword ptr [rbx], 0x3f800000 */
L_1803ddeeb_0:;
L_1803ddeeb_1:;
wr(s->u,0,4,((U)UINT64_C(0x3f800000)));
L_1803ddeeb_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,0,4));
L_1803ddeeb_3:;
/* 1803ddef1: jmp 0x1803ddefe */
L_1803ddef1_0:;
L_1803ddef1_1:;
return UINT64_C(0x1803ddefe);
L_1803ddef1_2:;
return UINT64_C(0x1803ddef3);
}
uint64_t b_1803ddef3(CPU*s){
/* 1803ddef3: movaps xmm0, xmm3 */
L_1803ddef3_0:;
L_1803ddef3_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803ddef3_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803ddef3_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803ddef3_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803ddef3_5:;
/* 1803ddef6: divss xmm0, xmm1 */
L_1803ddef6_0:;
L_1803ddef6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4672,4),4),4));
L_1803ddef6_2:;
/* 1803ddefa: movss dword ptr [rbx], xmm0 */
L_1803ddefa_0:;
L_1803ddefa_1:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803ddefa_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,8,4));
L_1803ddefa_3:;
/* 1803ddefe: mov rax, qword ptr [rsp + 8] */
L_1803ddefe_0:;
L_1803ddefe_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ddefe_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ddefe_3:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803ddefe_4:;
/* 1803ddf03: add rbx, 4 */
L_1803ddf03_0:;
L_1803ddf03_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803ddf03_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x4)),8,0));
L_1803ddf03_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x4))));
L_1803ddf03_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddf03_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803ddf03_6:;
wr(s->u,29,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803ddf03_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ddf03_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ddf03_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ddf03_10:;
/* 1803ddf07: inc r10d */
L_1803ddf07_0:;
L_1803ddf07_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803ddf07_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803ddf07_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ddf07_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddf07_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ddf07_6:;
wr(s->u,29,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ddf07_7:;
wr(s->u,37,1,pop(rd(s->u,29,4),4));
L_1803ddf07_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ddf07_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ddf07_10:;
/* 1803ddf0a: sub rdi, 1 */
L_1803ddf0a_0:;
L_1803ddf0a_1:;
wr(s->r,512,1,(rd(s->r,56,8)<((U)UINT64_C(0x1))));
L_1803ddf0a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x1)),8,1));
L_1803ddf0a_3:;
wr(s->r,56,8,(rd(s->r,56,8)-((U)UINT64_C(0x1))));
L_1803ddf0a_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddf0a_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803ddf0a_6:;
wr(s->u,29,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803ddf0a_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803ddf0a_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803ddf0a_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803ddf0a_10:;
/* 1803ddf0e: mov qword ptr [rsp + 0x50], rbx */
L_1803ddf0e_0:;
L_1803ddf0e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ddf0e_2:;
wr(s->u,12,8,rd(s->r,24,8));
L_1803ddf0e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803ddf0e_4:;
/* 1803ddf13: mov qword ptr [rsp], rdi */
L_1803ddf13_0:;
L_1803ddf13_1:;
wr(s->u,12,8,rd(s->r,56,8));
L_1803ddf13_2:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,12,8));
L_1803ddf13_3:;
/* 1803ddf17: jne 0x1803ddda2 */
L_1803ddf17_0:;
L_1803ddf17_1:;
wr(s->u,28,1,(!rd(s->r,518,1)));
L_1803ddf17_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803ddda2);}
L_1803ddf17_3:;
return UINT64_C(0x1803ddf1d);
}
uint64_t b_1803ddefe(CPU*s){
/* 1803ddefe: mov rax, qword ptr [rsp + 8] */
L_1803ddefe_0:;
L_1803ddefe_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803ddefe_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ddefe_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803ddefe_4:;
/* 1803ddf03: add rbx, 4 */
L_1803ddf03_0:;
L_1803ddf03_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803ddf03_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x4)),8,0));
L_1803ddf03_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x4))));
L_1803ddf03_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddf03_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803ddf03_6:;
wr(s->u,25,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803ddf03_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803ddf03_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803ddf03_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803ddf03_10:;
/* 1803ddf07: inc r10d */
L_1803ddf07_0:;
L_1803ddf07_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803ddf07_2:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803ddf07_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ddf07_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ddf07_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ddf07_6:;
wr(s->u,25,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ddf07_7:;
wr(s->u,33,1,pop(rd(s->u,25,4),4));
L_1803ddf07_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803ddf07_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803ddf07_10:;
/* 1803ddf0a: sub rdi, 1 */
L_1803ddf0a_0:;
L_1803ddf0a_1:;
wr(s->r,512,1,(rd(s->r,56,8)<((U)UINT64_C(0x1))));
L_1803ddf0a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x1)),8,1));
L_1803ddf0a_3:;
wr(s->r,56,8,(rd(s->r,56,8)-((U)UINT64_C(0x1))));
L_1803ddf0a_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddf0a_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803ddf0a_6:;
wr(s->u,25,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803ddf0a_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803ddf0a_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803ddf0a_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803ddf0a_10:;
/* 1803ddf0e: mov qword ptr [rsp + 0x50], rbx */
L_1803ddf0e_0:;
L_1803ddf0e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803ddf0e_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803ddf0e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ddf0e_4:;
/* 1803ddf13: mov qword ptr [rsp], rdi */
L_1803ddf13_0:;
L_1803ddf13_1:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803ddf13_2:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,8,8));
L_1803ddf13_3:;
/* 1803ddf17: jne 0x1803ddda2 */
L_1803ddf17_0:;
L_1803ddf17_1:;
wr(s->u,24,1,(!rd(s->r,518,1)));
L_1803ddf17_2:;
if(rd(s->u,24,1)){return UINT64_C(0x1803ddda2);}
L_1803ddf17_3:;
return UINT64_C(0x1803ddf1d);
}
uint64_t b_1803ddf1d(CPU*s){
/* 1803ddf1d: mov r12, qword ptr [rsp + 0x10] */
L_1803ddf1d_0:;
L_1803ddf1d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803ddf1d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ddf1d_3:;
wr(s->r,160,8,rd(s->u,8,8));
L_1803ddf1d_4:;
/* 1803ddf22: mov rbp, qword ptr [rsp + 0x58] */
L_1803ddf22_0:;
L_1803ddf22_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803ddf22_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ddf22_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803ddf22_4:;
/* 1803ddf27: add rsp, 0x18 */
L_1803ddf27_0:;
L_1803ddf27_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x18)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ddf27_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x18)),8,0));
L_1803ddf27_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x18))));
L_1803ddf27_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddf27_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ddf27_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ddf27_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803ddf27_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ddf27_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ddf27_10:;
/* 1803ddf2b: pop r15 */
L_1803ddf2b_0:;
L_1803ddf2b_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ddf2b_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf2b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf2b_4:;
wr(s->r,184,8,rd(s->u,26,8));
L_1803ddf2b_5:;
/* 1803ddf2d: pop r14 */
L_1803ddf2d_0:;
L_1803ddf2d_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ddf2d_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf2d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf2d_4:;
wr(s->r,176,8,rd(s->u,26,8));
L_1803ddf2d_5:;
/* 1803ddf2f: pop r13 */
L_1803ddf2f_0:;
L_1803ddf2f_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ddf2f_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf2f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf2f_4:;
wr(s->r,168,8,rd(s->u,26,8));
L_1803ddf2f_5:;
/* 1803ddf31: pop rdi */
L_1803ddf31_0:;
L_1803ddf31_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ddf31_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf31_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf31_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803ddf31_5:;
/* 1803ddf32: pop rsi */
L_1803ddf32_0:;
L_1803ddf32_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ddf32_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf32_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf32_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803ddf32_5:;
/* 1803ddf33: pop rbx */
L_1803ddf33_0:;
L_1803ddf33_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803ddf33_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf33_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf33_4:;
wr(s->r,24,8,rd(s->u,26,8));
L_1803ddf33_5:;
/* 1803ddf34: ret  */
L_1803ddf34_0:;
L_1803ddf34_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf34_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf34_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ddf34_4:;
return UINT64_C(0x1803ddf35);
}
uint64_t b_1803ddf27(CPU*s){
/* 1803ddf27: add rsp, 0x18 */
L_1803ddf27_0:;
L_1803ddf27_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x18)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803ddf27_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x18)),8,0));
L_1803ddf27_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x18))));
L_1803ddf27_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddf27_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ddf27_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ddf27_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803ddf27_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803ddf27_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803ddf27_10:;
/* 1803ddf2b: pop r15 */
L_1803ddf2b_0:;
L_1803ddf2b_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803ddf2b_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf2b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf2b_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803ddf2b_5:;
/* 1803ddf2d: pop r14 */
L_1803ddf2d_0:;
L_1803ddf2d_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803ddf2d_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf2d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf2d_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803ddf2d_5:;
/* 1803ddf2f: pop r13 */
L_1803ddf2f_0:;
L_1803ddf2f_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803ddf2f_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf2f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf2f_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803ddf2f_5:;
/* 1803ddf31: pop rdi */
L_1803ddf31_0:;
L_1803ddf31_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803ddf31_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf31_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf31_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803ddf31_5:;
/* 1803ddf32: pop rsi */
L_1803ddf32_0:;
L_1803ddf32_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803ddf32_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf32_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf32_4:;
wr(s->r,48,8,rd(s->u,10,8));
L_1803ddf32_5:;
/* 1803ddf33: pop rbx */
L_1803ddf33_0:;
L_1803ddf33_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803ddf33_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf33_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf33_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803ddf33_5:;
/* 1803ddf34: ret  */
L_1803ddf34_0:;
L_1803ddf34_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803ddf34_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803ddf34_3:;
return (uint64_t)rd(s->r,648,8);
L_1803ddf34_4:;
return UINT64_C(0x1803ddf35);
}
uint64_t b_1803ddf40(CPU*s){
/* 1803ddf40: mov qword ptr [rsp + 0x20], rsi */
L_1803ddf40_0:;
L_1803ddf40_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803ddf40_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803ddf40_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803ddf40_4:;
/* 1803ddf45: push rdi */
L_1803ddf45_0:;
L_1803ddf45_1:;
wr(s->u,16,8,rd(s->r,56,8));
L_1803ddf45_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddf45_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,16,8));
L_1803ddf45_4:;
/* 1803ddf46: sub rsp, 0x20 */
L_1803ddf46_0:;
L_1803ddf46_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803ddf46_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803ddf46_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803ddf46_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddf46_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803ddf46_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803ddf46_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ddf46_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ddf46_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ddf46_10:;
/* 1803ddf4a: mov rdi, rcx */
L_1803ddf4a_0:;
L_1803ddf4a_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803ddf4a_2:;
/* 1803ddf4d: add rcx, 0x9e8 */
L_1803ddf4d_0:;
L_1803ddf4d_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x9e8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803ddf4d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x9e8)),8,0));
L_1803ddf4d_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x9e8))));
L_1803ddf4d_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803ddf4d_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803ddf4d_6:;
wr(s->u,24,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803ddf4d_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803ddf4d_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803ddf4d_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803ddf4d_10:;
/* 1803ddf54: call qword ptr [rip + 0x640206] */
L_1803ddf54_0:;
L_1803ddf54_1:;
wr(s->u,34,8,mr(UINT64_C(0x180a1e160),8));
L_1803ddf54_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddf54_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddf5a)));
L_1803ddf54_4:;
return (uint64_t)rd(s->u,34,8);
L_1803ddf54_5:;
return UINT64_C(0x1803ddf5a);
}
uint64_t b_1803ddf5a(CPU*s){
/* 1803ddf5a: lea rcx, [rdi + 0x9f0] */
L_1803ddf5a_0:;
L_1803ddf5a_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9f0))));
L_1803ddf5a_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ddf5a_3:;
/* 1803ddf61: call qword ptr [rip + 0x6401f9] */
L_1803ddf61_0:;
L_1803ddf61_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803ddf61_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddf61_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddf67)));
L_1803ddf61_4:;
return (uint64_t)rd(s->u,8,8);
L_1803ddf61_5:;
return UINT64_C(0x1803ddf67);
}
uint64_t b_1803ddf67(CPU*s){
/* 1803ddf67: lea rcx, [rdi + 0x9e0] */
L_1803ddf67_0:;
L_1803ddf67_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9e0))));
L_1803ddf67_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ddf67_3:;
/* 1803ddf6e: call qword ptr [rip + 0x6401ec] */
L_1803ddf6e_0:;
L_1803ddf6e_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803ddf6e_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddf6e_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddf74)));
L_1803ddf6e_4:;
return (uint64_t)rd(s->u,8,8);
L_1803ddf6e_5:;
return UINT64_C(0x1803ddf74);
}
uint64_t b_1803ddf74(CPU*s){
/* 1803ddf74: lea rcx, [rdi + 0x680] */
L_1803ddf74_0:;
L_1803ddf74_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x680))));
L_1803ddf74_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ddf74_3:;
/* 1803ddf7b: call qword ptr [rip + 0x6401df] */
L_1803ddf7b_0:;
L_1803ddf7b_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803ddf7b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddf7b_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddf81)));
L_1803ddf7b_4:;
return (uint64_t)rd(s->u,8,8);
L_1803ddf7b_5:;
return UINT64_C(0x1803ddf81);
}
uint64_t b_1803ddf81(CPU*s){
/* 1803ddf81: lea rcx, [rdi + 0x830] */
L_1803ddf81_0:;
L_1803ddf81_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x830))));
L_1803ddf81_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ddf81_3:;
/* 1803ddf88: call qword ptr [rip + 0x6401d2] */
L_1803ddf88_0:;
L_1803ddf88_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803ddf88_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddf88_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddf8e)));
L_1803ddf88_4:;
return (uint64_t)rd(s->u,8,8);
L_1803ddf88_5:;
return UINT64_C(0x1803ddf8e);
}
uint64_t b_1803ddf8e(CPU*s){
/* 1803ddf8e: lea rcx, [rdi + 0x9d0] */
L_1803ddf8e_0:;
L_1803ddf8e_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9d0))));
L_1803ddf8e_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ddf8e_3:;
/* 1803ddf95: call qword ptr [rip + 0x6401c5] */
L_1803ddf95_0:;
L_1803ddf95_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803ddf95_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddf95_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddf9b)));
L_1803ddf95_4:;
return (uint64_t)rd(s->u,8,8);
L_1803ddf95_5:;
return UINT64_C(0x1803ddf9b);
}
uint64_t b_1803ddf9b(CPU*s){
/* 1803ddf9b: lea rcx, [rdi + 0x9d8] */
L_1803ddf9b_0:;
L_1803ddf9b_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x9d8))));
L_1803ddf9b_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ddf9b_3:;
/* 1803ddfa2: call qword ptr [rip + 0x6401b8] */
L_1803ddfa2_0:;
L_1803ddfa2_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803ddfa2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddfa2_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddfa8)));
L_1803ddfa2_4:;
return (uint64_t)rd(s->u,8,8);
L_1803ddfa2_5:;
return UINT64_C(0x1803ddfa8);
}
uint64_t b_1803ddfa8(CPU*s){
/* 1803ddfa8: mov rcx, qword ptr [rdi + 0x50] */
L_1803ddfa8_0:;
L_1803ddfa8_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x50))));
L_1803ddfa8_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803ddfa8_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803ddfa8_4:;
/* 1803ddfac: call 0x18000dffe */
L_1803ddfac_0:;
L_1803ddfac_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddfac_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddfb1)));
L_1803ddfac_3:;
return (uint64_t)UINT64_C(0x18000dffe);
L_1803ddfac_4:;
return UINT64_C(0x1803ddfb1);
}
uint64_t b_1803ddfb1(CPU*s){
/* 1803ddfb1: lea rcx, [rdi + 0x818] */
L_1803ddfb1_0:;
L_1803ddfb1_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x818))));
L_1803ddfb1_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ddfb1_3:;
/* 1803ddfb8: call qword ptr [rip + 0x6401a2] */
L_1803ddfb8_0:;
L_1803ddfb8_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803ddfb8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddfb8_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddfbe)));
L_1803ddfb8_4:;
return (uint64_t)rd(s->u,8,8);
L_1803ddfb8_5:;
return UINT64_C(0x1803ddfbe);
}
uint64_t b_1803ddfbe(CPU*s){
/* 1803ddfbe: lea rcx, [rdi + 0x820] */
L_1803ddfbe_0:;
L_1803ddfbe_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x820))));
L_1803ddfbe_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ddfbe_3:;
/* 1803ddfc5: call qword ptr [rip + 0x640195] */
L_1803ddfc5_0:;
L_1803ddfc5_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803ddfc5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddfc5_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddfcb)));
L_1803ddfc5_4:;
return (uint64_t)rd(s->u,8,8);
L_1803ddfc5_5:;
return UINT64_C(0x1803ddfcb);
}
uint64_t b_1803ddfcb(CPU*s){
/* 1803ddfcb: lea rcx, [rdi + 0x828] */
L_1803ddfcb_0:;
L_1803ddfcb_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x828))));
L_1803ddfcb_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ddfcb_3:;
/* 1803ddfd2: call qword ptr [rip + 0x640188] */
L_1803ddfd2_0:;
L_1803ddfd2_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803ddfd2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddfd2_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddfd8)));
L_1803ddfd2_4:;
return (uint64_t)rd(s->u,8,8);
L_1803ddfd2_5:;
return UINT64_C(0x1803ddfd8);
}
uint64_t b_1803ddfd8(CPU*s){
/* 1803ddfd8: lea rcx, [rdi + 0x810] */
L_1803ddfd8_0:;
L_1803ddfd8_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x810))));
L_1803ddfd8_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ddfd8_3:;
/* 1803ddfdf: call qword ptr [rip + 0x64017b] */
L_1803ddfdf_0:;
L_1803ddfdf_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803ddfdf_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddfdf_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddfe5)));
L_1803ddfdf_4:;
return (uint64_t)rd(s->u,8,8);
L_1803ddfdf_5:;
return UINT64_C(0x1803ddfe5);
}
uint64_t b_1803ddfe5(CPU*s){
/* 1803ddfe5: lea rcx, [rdi + 0x8a10] */
L_1803ddfe5_0:;
L_1803ddfe5_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x8a10))));
L_1803ddfe5_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ddfe5_3:;
/* 1803ddfec: call qword ptr [rip + 0x64016e] */
L_1803ddfec_0:;
L_1803ddfec_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803ddfec_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddfec_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddff2)));
L_1803ddfec_4:;
return (uint64_t)rd(s->u,8,8);
L_1803ddfec_5:;
return UINT64_C(0x1803ddff2);
}
uint64_t b_1803ddff2(CPU*s){
/* 1803ddff2: lea rcx, [rdi + 0x360] */
L_1803ddff2_0:;
L_1803ddff2_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x360))));
L_1803ddff2_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ddff2_3:;
/* 1803ddff9: call qword ptr [rip + 0x640161] */
L_1803ddff9_0:;
L_1803ddff9_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803ddff9_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803ddff9_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803ddfff)));
L_1803ddff9_4:;
return (uint64_t)rd(s->u,8,8);
L_1803ddff9_5:;
return UINT64_C(0x1803ddfff);
}
uint64_t b_1803ddfff(CPU*s){
/* 1803ddfff: lea rcx, [rdi + 0x368] */
L_1803ddfff_0:;
L_1803ddfff_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x368))));
L_1803ddfff_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803ddfff_3:;
/* 1803de006: call qword ptr [rip + 0x640154] */
L_1803de006_0:;
L_1803de006_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803de006_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803de006_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803de00c)));
L_1803de006_4:;
return (uint64_t)rd(s->u,8,8);
L_1803de006_5:;
return UINT64_C(0x1803de00c);
}
