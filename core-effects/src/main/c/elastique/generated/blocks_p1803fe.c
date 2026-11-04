#include "lift_runtime.h"
uint64_t b_1803fe07b(CPU*s){
/* 1803fe07b: addss xmm3, xmm1 */
L_1803fe07b_0:;
L_1803fe07b_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe07b_2:;
/* 1803fe07f: movss dword ptr [r10 + 0x1c], xmm3 */
L_1803fe07f_0:;
L_1803fe07f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x1c))));
L_1803fe07f_2:;
wr(s->u,8,4,rd(s->r,4800,4));
L_1803fe07f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fe07f_4:;
/* 1803fe085: subss xmm5, xmm1 */
L_1803fe085_0:;
L_1803fe085_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe085_2:;
/* 1803fe089: movss dword ptr [r10 + 0x3c], xmm5 */
L_1803fe089_0:;
L_1803fe089_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x3c))));
L_1803fe089_2:;
wr(s->u,8,4,rd(s->r,4928,4));
L_1803fe089_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fe089_4:;
/* 1803fe08f: add r10, 0x40 */
L_1803fe08f_0:;
L_1803fe08f_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803fe08f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x40)),8,0));
L_1803fe08f_3:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0x40))));
L_1803fe08f_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fe08f_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803fe08f_6:;
wr(s->u,14,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803fe08f_7:;
wr(s->u,22,1,pop(rd(s->u,14,8),8));
L_1803fe08f_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fe08f_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fe08f_10:;
/* 1803fe093: add eax, 1 */
L_1803fe093_0:;
L_1803fe093_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803fe093_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803fe093_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803fe093_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fe093_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fe093_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fe093_7:;
wr(s->u,14,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fe093_8:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fe093_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fe093_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fe093_11:;
/* 1803fe096: cmp eax, r11d */
L_1803fe096_0:;
L_1803fe096_1:;
wr(s->u,24,4,rd(s->r,152,4));
L_1803fe096_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,24,4)));
L_1803fe096_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,24,4),4,1));
L_1803fe096_4:;
wr(s->u,28,4,(rd(s->r,0,4)-rd(s->u,24,4)));
L_1803fe096_5:;
wr(s->r,519,1,(sx(rd(s->u,28,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fe096_6:;
wr(s->r,518,1,(rd(s->u,28,4)==((U)UINT64_C(0x0))));
L_1803fe096_7:;
wr(s->u,14,4,(rd(s->u,28,4)&((U)UINT64_C(0xff))));
L_1803fe096_8:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fe096_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fe096_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fe096_11:;
/* 1803fe099: jle 0x1803fdf46 */
L_1803fe099_0:;
L_1803fe099_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fe099_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803fe099_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fdf46);}
L_1803fe099_4:;
return UINT64_C(0x1803fe09f);
}
uint64_t b_1803fe09f(CPU*s){
/* 1803fe09f: mov ebp, edx */
L_1803fe09f_0:;
L_1803fe09f_1:;
wr(s->r,40,4,rd(s->r,16,4));
L_1803fe09f_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fe09f_3:;
/* 1803fe0a1: sar ebp, 5 */
L_1803fe0a1_0:;
L_1803fe0a1_1:;
wr(s->u,45,4,(((U)UINT64_C(0x5))&((U)UINT64_C(0x1f))));
L_1803fe0a1_2:;
wr(s->u,49,4,rd(s->r,40,4));
L_1803fe0a1_3:;
wr(s->r,40,4,((rd(s->u,45,4)>=32)?(sx(rd(s->r,40,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,40,4),4)>>rd(s->u,45,4))));
L_1803fe0a1_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fe0a1_5:;
wr(s->u,30,1,(rd(s->u,45,4)==((U)UINT64_C(0x0))));
L_1803fe0a1_6:;
wr(s->u,31,4,(rd(s->u,45,4)-((U)UINT64_C(0x1))));
L_1803fe0a1_7:;
wr(s->u,35,4,((rd(s->u,31,4)>=32)?(sx(rd(s->u,49,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,49,4),4)>>rd(s->u,31,4))));
L_1803fe0a1_8:;
wr(s->u,39,4,(rd(s->u,35,4)&((U)UINT64_C(0x1))));
L_1803fe0a1_9:;
wr(s->u,43,1,(rd(s->u,39,4)!=((U)UINT64_C(0x0))));
L_1803fe0a1_10:;
wr(s->u,0,1,rd(s->u,30,1));
L_1803fe0a1_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fe0a1_12:;
wr(s->u,2,1,(!rd(s->u,30,1)));
L_1803fe0a1_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fe0a1_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,43,1)));
L_1803fe0a1_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fe0a1_16:;
wr(s->u,44,1,(rd(s->u,45,4)==((U)UINT64_C(0x1))));
L_1803fe0a1_17:;
wr(s->u,0,1,rd(s->u,44,1));
L_1803fe0a1_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fe0a1_19:;
wr(s->u,2,1,(!rd(s->u,44,1)));
L_1803fe0a1_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fe0a1_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fe0a1_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fe0a1_23:;
wr(s->u,11,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803fe0a1_24:;
wr(s->u,12,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fe0a1_25:;
wr(s->u,13,1,(!rd(s->u,11,1)));
L_1803fe0a1_26:;
wr(s->u,14,1,(rd(s->u,13,1)&rd(s->r,519,1)));
L_1803fe0a1_27:;
wr(s->u,15,1,(rd(s->u,11,1)&rd(s->u,12,1)));
L_1803fe0a1_28:;
wr(s->r,519,1,(rd(s->u,14,1)|rd(s->u,15,1)));
L_1803fe0a1_29:;
wr(s->u,16,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fe0a1_30:;
wr(s->u,17,1,(!rd(s->u,11,1)));
L_1803fe0a1_31:;
wr(s->u,18,1,(rd(s->u,17,1)&rd(s->r,518,1)));
L_1803fe0a1_32:;
wr(s->u,19,1,(rd(s->u,11,1)&rd(s->u,16,1)));
L_1803fe0a1_33:;
wr(s->r,518,1,(rd(s->u,18,1)|rd(s->u,19,1)));
L_1803fe0a1_34:;
wr(s->u,20,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fe0a1_35:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fe0a1_36:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fe0a1_37:;
wr(s->u,26,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fe0a1_38:;
wr(s->u,27,1,(!rd(s->u,11,1)));
L_1803fe0a1_39:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,514,1)));
L_1803fe0a1_40:;
wr(s->u,29,1,(rd(s->u,11,1)&rd(s->u,26,1)));
L_1803fe0a1_41:;
wr(s->r,514,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803fe0a1_42:;
/* 1803fe0a4: test ebp, ebp */
L_1803fe0a4_0:;
L_1803fe0a4_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fe0a4_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fe0a4_3:;
wr(s->u,53,4,(rd(s->r,40,4)&rd(s->r,40,4)));
L_1803fe0a4_4:;
wr(s->r,519,1,(sx(rd(s->u,53,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fe0a4_5:;
wr(s->r,518,1,(rd(s->u,53,4)==((U)UINT64_C(0x0))));
L_1803fe0a4_6:;
wr(s->u,5,4,(rd(s->u,53,4)&((U)UINT64_C(0xff))));
L_1803fe0a4_7:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803fe0a4_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fe0a4_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fe0a4_10:;
/* 1803fe0a6: je 0x180400312 */
L_1803fe0a6_0:;
L_1803fe0a6_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803fe0a6_2:;
return UINT64_C(0x1803fe0ac);
}
uint64_t b_1803fe0ac(CPU*s){
/* 1803fe0ac: sar r9d, 4 */
L_1803fe0ac_0:;
L_1803fe0ac_1:;
wr(s->u,47,4,(((U)UINT64_C(0x4))&((U)UINT64_C(0x1f))));
L_1803fe0ac_2:;
wr(s->u,51,4,rd(s->r,136,4));
L_1803fe0ac_3:;
wr(s->r,136,4,((rd(s->u,47,4)>=32)?(sx(rd(s->r,136,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,136,4),4)>>rd(s->u,47,4))));
L_1803fe0ac_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fe0ac_5:;
wr(s->u,32,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803fe0ac_6:;
wr(s->u,33,4,(rd(s->u,47,4)-((U)UINT64_C(0x1))));
L_1803fe0ac_7:;
wr(s->u,37,4,((rd(s->u,33,4)>=32)?(sx(rd(s->u,51,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,51,4),4)>>rd(s->u,33,4))));
L_1803fe0ac_8:;
wr(s->u,41,4,(rd(s->u,37,4)&((U)UINT64_C(0x1))));
L_1803fe0ac_9:;
wr(s->u,45,1,(rd(s->u,41,4)!=((U)UINT64_C(0x0))));
L_1803fe0ac_10:;
wr(s->u,0,1,rd(s->u,32,1));
L_1803fe0ac_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fe0ac_12:;
wr(s->u,2,1,(!rd(s->u,32,1)));
L_1803fe0ac_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fe0ac_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,45,1)));
L_1803fe0ac_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fe0ac_16:;
wr(s->u,46,1,(rd(s->u,47,4)==((U)UINT64_C(0x1))));
L_1803fe0ac_17:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803fe0ac_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fe0ac_19:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803fe0ac_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fe0ac_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fe0ac_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fe0ac_23:;
wr(s->u,13,1,(rd(s->u,47,4)!=((U)UINT64_C(0x0))));
L_1803fe0ac_24:;
wr(s->u,14,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fe0ac_25:;
wr(s->u,15,1,(!rd(s->u,13,1)));
L_1803fe0ac_26:;
wr(s->u,16,1,(rd(s->u,15,1)&rd(s->r,519,1)));
L_1803fe0ac_27:;
wr(s->u,17,1,(rd(s->u,13,1)&rd(s->u,14,1)));
L_1803fe0ac_28:;
wr(s->r,519,1,(rd(s->u,16,1)|rd(s->u,17,1)));
L_1803fe0ac_29:;
wr(s->u,18,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fe0ac_30:;
wr(s->u,19,1,(!rd(s->u,13,1)));
L_1803fe0ac_31:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,518,1)));
L_1803fe0ac_32:;
wr(s->u,21,1,(rd(s->u,13,1)&rd(s->u,18,1)));
L_1803fe0ac_33:;
wr(s->r,518,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803fe0ac_34:;
wr(s->u,22,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fe0ac_35:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803fe0ac_36:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803fe0ac_37:;
wr(s->u,28,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803fe0ac_38:;
wr(s->u,29,1,(!rd(s->u,13,1)));
L_1803fe0ac_39:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,514,1)));
L_1803fe0ac_40:;
wr(s->u,31,1,(rd(s->u,13,1)&rd(s->u,28,1)));
L_1803fe0ac_41:;
wr(s->r,514,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803fe0ac_42:;
/* 1803fe0b0: movsxd rax, r9d */
L_1803fe0b0_0:;
L_1803fe0b0_1:;
wr(s->r,0,8,(U)sx(rd(s->r,136,4),4));
L_1803fe0b0_2:;
/* 1803fe0b3: mov r15, rcx */
L_1803fe0b3_0:;
L_1803fe0b3_1:;
wr(s->r,184,8,rd(s->r,8,8));
L_1803fe0b3_2:;
/* 1803fe0b6: xor r9d, r9d */
L_1803fe0b6_0:;
L_1803fe0b6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fe0b6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fe0b6_3:;
wr(s->r,136,4,(rd(s->r,136,4)^rd(s->r,136,4)));
L_1803fe0b6_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fe0b6_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fe0b6_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fe0b6_7:;
wr(s->u,7,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fe0b6_8:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803fe0b6_9:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803fe0b6_10:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803fe0b6_11:;
/* 1803fe0b9: test ebp, ebp */
L_1803fe0b9_0:;
L_1803fe0b9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fe0b9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fe0b9_3:;
wr(s->u,55,4,(rd(s->r,40,4)&rd(s->r,40,4)));
L_1803fe0b9_4:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fe0b9_5:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803fe0b9_6:;
wr(s->u,7,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803fe0b9_7:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803fe0b9_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803fe0b9_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803fe0b9_10:;
/* 1803fe0bb: jle 0x1803feb5a */
L_1803fe0bb_0:;
L_1803fe0bb_1:;
wr(s->u,5,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fe0bb_2:;
wr(s->u,6,1,((rd(s->r,518,1)!=0)||(rd(s->u,5,1)!=0)));
L_1803fe0bb_3:;
if(rd(s->u,6,1)){return UINT64_C(0x1803feb5a);}
L_1803fe0bb_4:;
return UINT64_C(0x1803fe0c1);
}
uint64_t b_1803fe0c1(CPU*s){
/* 1803fe0c1: movaps xmmword ptr [rsp + 0x60], xmm6 */
L_1803fe0c1_0:;
L_1803fe0c1_1:;
wr(s->u,32,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803fe0c1_2:;
wr(s->u,52,16,rd(s->r,4992,16));
L_1803fe0c1_3:;
mw((uint64_t)rd(s->u,32,8),16,rd(s->u,52,16));
L_1803fe0c1_4:;
/* 1803fe0c6: movaps xmmword ptr [rsp + 0x50], xmm7 */
L_1803fe0c6_0:;
L_1803fe0c6_1:;
wr(s->u,32,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803fe0c6_2:;
wr(s->u,52,16,rd(s->r,5056,16));
L_1803fe0c6_3:;
mw((uint64_t)rd(s->u,32,8),16,rd(s->u,52,16));
L_1803fe0c6_4:;
/* 1803fe0cb: movaps xmmword ptr [rsp + 0x40], xmm8 */
L_1803fe0cb_0:;
L_1803fe0cb_1:;
wr(s->u,32,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fe0cb_2:;
wr(s->u,52,16,rd(s->r,5120,16));
L_1803fe0cb_3:;
mw((uint64_t)rd(s->u,32,8),16,rd(s->u,52,16));
L_1803fe0cb_4:;
/* 1803fe0d1: movaps xmmword ptr [rsp + 0x30], xmm9 */
L_1803fe0d1_0:;
L_1803fe0d1_1:;
wr(s->u,32,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fe0d1_2:;
wr(s->u,52,16,rd(s->r,5184,16));
L_1803fe0d1_3:;
mw((uint64_t)rd(s->u,32,8),16,rd(s->u,52,16));
L_1803fe0d1_4:;
/* 1803fe0d7: mov qword ptr [rsp + 0x20], r14 */
L_1803fe0d7_0:;
L_1803fe0d7_1:;
wr(s->u,32,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fe0d7_2:;
wr(s->u,44,8,rd(s->r,176,8));
L_1803fe0d7_3:;
mw((uint64_t)rd(s->u,32,8),8,rd(s->u,44,8));
L_1803fe0d7_4:;
/* 1803fe0dc: lea r11, [r8 + rax*4] */
L_1803fe0dc_0:;
L_1803fe0dc_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fe0dc_2:;
wr(s->u,24,8,(rd(s->r,128,8)+rd(s->u,16,8)));
L_1803fe0dc_3:;
wr(s->r,152,8,rd(s->u,24,8));
L_1803fe0dc_4:;
/* 1803fe0e0: lea r10, [r11 + rax*4] */
L_1803fe0e0_0:;
L_1803fe0e0_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fe0e0_2:;
wr(s->u,24,8,(rd(s->r,152,8)+rd(s->u,16,8)));
L_1803fe0e0_3:;
wr(s->r,144,8,rd(s->u,24,8));
L_1803fe0e0_4:;
/* 1803fe0e4: movss xmm5, dword ptr [r15] */
L_1803fe0e4_0:;
L_1803fe0e4_1:;
wr(s->u,40,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803fe0e4_2:;
wr(s->r,4928,4,rd(s->u,40,4));
L_1803fe0e4_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe0e4_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe0e4_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe0e4_6:;
/* 1803fe0e9: movss xmm0, dword ptr [r15 + 0x40] */
L_1803fe0e9_0:;
L_1803fe0e9_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x40))));
L_1803fe0e9_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe0e9_3:;
wr(s->r,4608,4,rd(s->u,40,4));
L_1803fe0e9_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fe0e9_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fe0e9_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fe0e9_7:;
/* 1803fe0ef: movaps xmm6, xmm0 */
L_1803fe0ef_0:;
L_1803fe0ef_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803fe0ef_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803fe0ef_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803fe0ef_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803fe0ef_5:;
/* 1803fe0f2: movss xmm7, dword ptr [r15 + 4] */
L_1803fe0f2_0:;
L_1803fe0f2_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803fe0f2_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe0f2_3:;
wr(s->r,5056,4,rd(s->u,40,4));
L_1803fe0f2_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe0f2_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe0f2_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe0f2_7:;
/* 1803fe0f8: movaps xmm4, xmm7 */
L_1803fe0f8_0:;
L_1803fe0f8_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803fe0f8_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803fe0f8_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803fe0f8_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803fe0f8_5:;
/* 1803fe0fb: movss xmm1, dword ptr [r15 + 0x44] */
L_1803fe0fb_0:;
L_1803fe0fb_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x44))));
L_1803fe0fb_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe0fb_3:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803fe0fb_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe0fb_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe0fb_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe0fb_7:;
/* 1803fe101: movss xmm3, dword ptr [r15 + 0x80] */
L_1803fe101_0:;
L_1803fe101_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x80))));
L_1803fe101_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe101_3:;
wr(s->r,4800,4,rd(s->u,40,4));
L_1803fe101_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe101_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe101_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe101_7:;
/* 1803fe10a: movss xmm8, dword ptr [r15 + 0xc0] */
L_1803fe10a_0:;
L_1803fe10a_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xc0))));
L_1803fe10a_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe10a_3:;
wr(s->r,5120,4,rd(s->u,40,4));
L_1803fe10a_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe10a_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe10a_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe10a_7:;
/* 1803fe113: movss xmm2, dword ptr [r15 + 0x84] */
L_1803fe113_0:;
L_1803fe113_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x84))));
L_1803fe113_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe113_3:;
wr(s->r,4736,4,rd(s->u,40,4));
L_1803fe113_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe113_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe113_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe113_7:;
/* 1803fe11c: movss xmm9, dword ptr [r15 + 0xc4] */
L_1803fe11c_0:;
L_1803fe11c_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xc4))));
L_1803fe11c_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe11c_3:;
wr(s->r,5184,4,rd(s->u,40,4));
L_1803fe11c_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe11c_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe11c_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe11c_7:;
/* 1803fe125: addss xmm6, xmm5 */
L_1803fe125_0:;
L_1803fe125_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe125_2:;
/* 1803fe129: addss xmm4, xmm1 */
L_1803fe129_0:;
L_1803fe129_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe129_2:;
/* 1803fe12d: subss xmm5, xmm0 */
L_1803fe12d_0:;
L_1803fe12d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe12d_2:;
/* 1803fe131: movaps xmm0, xmm3 */
L_1803fe131_0:;
L_1803fe131_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fe131_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fe131_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fe131_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fe131_5:;
/* 1803fe134: subss xmm7, xmm1 */
L_1803fe134_0:;
L_1803fe134_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe134_2:;
/* 1803fe138: movaps xmm1, xmm2 */
L_1803fe138_0:;
L_1803fe138_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803fe138_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803fe138_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803fe138_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803fe138_5:;
/* 1803fe13b: addss xmm0, xmm8 */
L_1803fe13b_0:;
L_1803fe13b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fe13b_2:;
/* 1803fe140: subss xmm3, xmm8 */
L_1803fe140_0:;
L_1803fe140_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803fe140_2:;
/* 1803fe145: movaps xmm8, xmm6 */
L_1803fe145_0:;
L_1803fe145_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803fe145_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803fe145_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803fe145_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803fe145_5:;
/* 1803fe149: addss xmm1, xmm9 */
L_1803fe149_0:;
L_1803fe149_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe149_2:;
/* 1803fe14e: subss xmm2, xmm9 */
L_1803fe14e_0:;
L_1803fe14e_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fe14e_2:;
/* 1803fe153: movss xmm9, dword ptr [r15 + 0xcc] */
L_1803fe153_0:;
L_1803fe153_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xcc))));
L_1803fe153_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe153_3:;
wr(s->r,5184,4,rd(s->u,40,4));
L_1803fe153_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe153_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe153_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe153_7:;
/* 1803fe15c: addss xmm8, xmm0 */
L_1803fe15c_0:;
L_1803fe15c_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe15c_2:;
/* 1803fe161: movss dword ptr [r15], xmm8 */
L_1803fe161_0:;
L_1803fe161_1:;
wr(s->u,40,4,rd(s->r,5120,4));
L_1803fe161_2:;
mw((uint64_t)rd(s->r,184,8),4,rd(s->u,40,4));
L_1803fe161_3:;
/* 1803fe166: movaps xmm8, xmm4 */
L_1803fe166_0:;
L_1803fe166_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803fe166_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803fe166_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803fe166_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803fe166_5:;
return UINT64_C(0x1803fe16a);
}
uint64_t b_1803fe0e4(CPU*s){
/* 1803fe0e4: movss xmm5, dword ptr [r15] */
L_1803fe0e4_0:;
L_1803fe0e4_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803fe0e4_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe0e4_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe0e4_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe0e4_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe0e4_6:;
/* 1803fe0e9: movss xmm0, dword ptr [r15 + 0x40] */
L_1803fe0e9_0:;
L_1803fe0e9_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x40))));
L_1803fe0e9_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe0e9_3:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fe0e9_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fe0e9_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fe0e9_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fe0e9_7:;
/* 1803fe0ef: movaps xmm6, xmm0 */
L_1803fe0ef_0:;
L_1803fe0ef_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803fe0ef_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803fe0ef_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803fe0ef_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803fe0ef_5:;
/* 1803fe0f2: movss xmm7, dword ptr [r15 + 4] */
L_1803fe0f2_0:;
L_1803fe0f2_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803fe0f2_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe0f2_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fe0f2_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe0f2_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe0f2_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe0f2_7:;
/* 1803fe0f8: movaps xmm4, xmm7 */
L_1803fe0f8_0:;
L_1803fe0f8_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803fe0f8_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803fe0f8_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803fe0f8_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803fe0f8_5:;
/* 1803fe0fb: movss xmm1, dword ptr [r15 + 0x44] */
L_1803fe0fb_0:;
L_1803fe0fb_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x44))));
L_1803fe0fb_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe0fb_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe0fb_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe0fb_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe0fb_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe0fb_7:;
/* 1803fe101: movss xmm3, dword ptr [r15 + 0x80] */
L_1803fe101_0:;
L_1803fe101_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x80))));
L_1803fe101_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe101_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe101_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe101_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe101_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe101_7:;
/* 1803fe10a: movss xmm8, dword ptr [r15 + 0xc0] */
L_1803fe10a_0:;
L_1803fe10a_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xc0))));
L_1803fe10a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe10a_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe10a_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe10a_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe10a_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe10a_7:;
/* 1803fe113: movss xmm2, dword ptr [r15 + 0x84] */
L_1803fe113_0:;
L_1803fe113_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x84))));
L_1803fe113_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe113_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fe113_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe113_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe113_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe113_7:;
/* 1803fe11c: movss xmm9, dword ptr [r15 + 0xc4] */
L_1803fe11c_0:;
L_1803fe11c_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xc4))));
L_1803fe11c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe11c_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803fe11c_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe11c_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe11c_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe11c_7:;
/* 1803fe125: addss xmm6, xmm5 */
L_1803fe125_0:;
L_1803fe125_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe125_2:;
/* 1803fe129: addss xmm4, xmm1 */
L_1803fe129_0:;
L_1803fe129_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe129_2:;
/* 1803fe12d: subss xmm5, xmm0 */
L_1803fe12d_0:;
L_1803fe12d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe12d_2:;
/* 1803fe131: movaps xmm0, xmm3 */
L_1803fe131_0:;
L_1803fe131_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fe131_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fe131_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fe131_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fe131_5:;
/* 1803fe134: subss xmm7, xmm1 */
L_1803fe134_0:;
L_1803fe134_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe134_2:;
/* 1803fe138: movaps xmm1, xmm2 */
L_1803fe138_0:;
L_1803fe138_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803fe138_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803fe138_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803fe138_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803fe138_5:;
/* 1803fe13b: addss xmm0, xmm8 */
L_1803fe13b_0:;
L_1803fe13b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fe13b_2:;
/* 1803fe140: subss xmm3, xmm8 */
L_1803fe140_0:;
L_1803fe140_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803fe140_2:;
/* 1803fe145: movaps xmm8, xmm6 */
L_1803fe145_0:;
L_1803fe145_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803fe145_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803fe145_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803fe145_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803fe145_5:;
/* 1803fe149: addss xmm1, xmm9 */
L_1803fe149_0:;
L_1803fe149_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe149_2:;
/* 1803fe14e: subss xmm2, xmm9 */
L_1803fe14e_0:;
L_1803fe14e_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fe14e_2:;
/* 1803fe153: movss xmm9, dword ptr [r15 + 0xcc] */
L_1803fe153_0:;
L_1803fe153_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xcc))));
L_1803fe153_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe153_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803fe153_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe153_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe153_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe153_7:;
/* 1803fe15c: addss xmm8, xmm0 */
L_1803fe15c_0:;
L_1803fe15c_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe15c_2:;
/* 1803fe161: movss dword ptr [r15], xmm8 */
L_1803fe161_0:;
L_1803fe161_1:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fe161_2:;
mw((uint64_t)rd(s->r,184,8),4,rd(s->u,16,4));
L_1803fe161_3:;
/* 1803fe166: movaps xmm8, xmm4 */
L_1803fe166_0:;
L_1803fe166_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803fe166_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803fe166_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803fe166_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803fe166_5:;
/* 1803fe16a: subss xmm6, xmm0 */
L_1803fe16a_0:;
L_1803fe16a_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe16a_2:;
/* 1803fe16e: movss dword ptr [r15 + 0x80], xmm6 */
L_1803fe16e_0:;
L_1803fe16e_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x80))));
L_1803fe16e_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803fe16e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe16e_4:;
/* 1803fe177: movaps xmm0, xmm5 */
L_1803fe177_0:;
L_1803fe177_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe177_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe177_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe177_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe177_5:;
/* 1803fe17a: addss xmm8, xmm1 */
L_1803fe17a_0:;
L_1803fe17a_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe17a_2:;
/* 1803fe17f: movss dword ptr [r15 + 4], xmm8 */
L_1803fe17f_0:;
L_1803fe17f_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803fe17f_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fe17f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe17f_4:;
/* 1803fe185: subss xmm4, xmm1 */
L_1803fe185_0:;
L_1803fe185_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe185_2:;
/* 1803fe189: movss dword ptr [r15 + 0x84], xmm4 */
L_1803fe189_0:;
L_1803fe189_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x84))));
L_1803fe189_2:;
wr(s->u,16,4,rd(s->r,4864,4));
L_1803fe189_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe189_4:;
return UINT64_C(0x1803fe192);
}
uint64_t b_1803fe16a(CPU*s){
/* 1803fe16a: subss xmm6, xmm0 */
L_1803fe16a_0:;
L_1803fe16a_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe16a_2:;
/* 1803fe16e: movss dword ptr [r15 + 0x80], xmm6 */
L_1803fe16e_0:;
L_1803fe16e_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x80))));
L_1803fe16e_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803fe16e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe16e_4:;
/* 1803fe177: movaps xmm0, xmm5 */
L_1803fe177_0:;
L_1803fe177_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe177_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe177_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe177_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe177_5:;
/* 1803fe17a: addss xmm8, xmm1 */
L_1803fe17a_0:;
L_1803fe17a_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe17a_2:;
/* 1803fe17f: movss dword ptr [r15 + 4], xmm8 */
L_1803fe17f_0:;
L_1803fe17f_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803fe17f_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fe17f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe17f_4:;
/* 1803fe185: subss xmm4, xmm1 */
L_1803fe185_0:;
L_1803fe185_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe185_2:;
/* 1803fe189: movss dword ptr [r15 + 0x84], xmm4 */
L_1803fe189_0:;
L_1803fe189_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x84))));
L_1803fe189_2:;
wr(s->u,16,4,rd(s->r,4864,4));
L_1803fe189_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe189_4:;
/* 1803fe192: addss xmm0, xmm2 */
L_1803fe192_0:;
L_1803fe192_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fe192_2:;
/* 1803fe196: movss dword ptr [r15 + 0x40], xmm0 */
L_1803fe196_0:;
L_1803fe196_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x40))));
L_1803fe196_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe196_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe196_4:;
/* 1803fe19c: movaps xmm0, xmm7 */
L_1803fe19c_0:;
L_1803fe19c_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fe19c_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fe19c_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fe19c_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fe19c_5:;
/* 1803fe19f: subss xmm5, xmm2 */
L_1803fe19f_0:;
L_1803fe19f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe19f_2:;
/* 1803fe1a3: movss xmm2, dword ptr [r15 + 0x88] */
L_1803fe1a3_0:;
L_1803fe1a3_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x88))));
L_1803fe1a3_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe1a3_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fe1a3_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe1a3_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe1a3_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe1a3_7:;
/* 1803fe1ac: movss dword ptr [r15 + 0xc0], xmm5 */
L_1803fe1ac_0:;
L_1803fe1ac_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xc0))));
L_1803fe1ac_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803fe1ac_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe1ac_4:;
/* 1803fe1b5: movaps xmm4, xmm2 */
L_1803fe1b5_0:;
L_1803fe1b5_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fe1b5_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fe1b5_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fe1b5_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fe1b5_5:;
/* 1803fe1b8: movss xmm5, dword ptr [r15 + 0x8c] */
L_1803fe1b8_0:;
L_1803fe1b8_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x8c))));
L_1803fe1b8_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe1b8_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe1b8_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe1b8_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe1b8_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe1b8_7:;
/* 1803fe1c1: subss xmm0, xmm3 */
L_1803fe1c1_0:;
L_1803fe1c1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe1c1_2:;
/* 1803fe1c5: movss dword ptr [r15 + 0x44], xmm0 */
L_1803fe1c5_0:;
L_1803fe1c5_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x44))));
L_1803fe1c5_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe1c5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe1c5_4:;
/* 1803fe1cb: movaps xmm0, xmm5 */
L_1803fe1cb_0:;
L_1803fe1cb_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe1cb_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe1cb_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe1cb_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe1cb_5:;
/* 1803fe1ce: addss xmm7, xmm3 */
L_1803fe1ce_0:;
L_1803fe1ce_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe1ce_2:;
/* 1803fe1d2: movss dword ptr [r15 + 0xc4], xmm7 */
L_1803fe1d2_0:;
L_1803fe1d2_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xc4))));
L_1803fe1d2_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803fe1d2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe1d2_4:;
/* 1803fe1db: movss xmm7, dword ptr [r15 + 0x4c] */
L_1803fe1db_0:;
L_1803fe1db_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4c))));
L_1803fe1db_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe1db_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fe1db_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe1db_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe1db_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe1db_7:;
/* 1803fe1e1: movss xmm3, dword ptr [r11] */
L_1803fe1e1_0:;
L_1803fe1e1_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,152,8),4));
L_1803fe1e1_2:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe1e1_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe1e1_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe1e1_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe1e1_6:;
/* 1803fe1e6: mulss xmm4, xmm3 */
L_1803fe1e6_0:;
L_1803fe1e6_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe1e6_2:;
/* 1803fe1ea: mulss xmm5, xmm3 */
L_1803fe1ea_0:;
L_1803fe1ea_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe1ea_2:;
/* 1803fe1ee: movss xmm1, dword ptr [r11 + 4] */
L_1803fe1ee_0:;
L_1803fe1ee_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x4))));
L_1803fe1ee_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe1ee_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe1ee_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe1ee_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe1ee_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe1ee_7:;
/* 1803fe1f4: mulss xmm0, xmm1 */
L_1803fe1f4_0:;
L_1803fe1f4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe1f4_2:;
/* 1803fe1f8: mulss xmm2, xmm1 */
L_1803fe1f8_0:;
L_1803fe1f8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe1f8_2:;
/* 1803fe1fc: movss xmm1, dword ptr [r15 + 0x48] */
L_1803fe1fc_0:;
L_1803fe1fc_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x48))));
L_1803fe1fc_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe1fc_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe1fc_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe1fc_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe1fc_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe1fc_7:;
/* 1803fe202: movaps xmm6, xmm1 */
L_1803fe202_0:;
L_1803fe202_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fe202_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fe202_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fe202_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fe202_5:;
/* 1803fe205: movss xmm3, dword ptr [r11 + 0xc] */
L_1803fe205_0:;
L_1803fe205_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xc))));
L_1803fe205_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe205_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe205_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe205_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe205_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe205_7:;
/* 1803fe20b: mulss xmm1, xmm3 */
L_1803fe20b_0:;
L_1803fe20b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe20b_2:;
/* 1803fe20f: movss xmm8, dword ptr [r11 + 0x10] */
L_1803fe20f_0:;
L_1803fe20f_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x10))));
L_1803fe20f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe20f_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe20f_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe20f_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe20f_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe20f_7:;
return UINT64_C(0x1803fe215);
}
uint64_t b_1803fe192(CPU*s){
/* 1803fe192: addss xmm0, xmm2 */
L_1803fe192_0:;
L_1803fe192_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fe192_2:;
/* 1803fe196: movss dword ptr [r15 + 0x40], xmm0 */
L_1803fe196_0:;
L_1803fe196_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x40))));
L_1803fe196_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe196_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe196_4:;
/* 1803fe19c: movaps xmm0, xmm7 */
L_1803fe19c_0:;
L_1803fe19c_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fe19c_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fe19c_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fe19c_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fe19c_5:;
/* 1803fe19f: subss xmm5, xmm2 */
L_1803fe19f_0:;
L_1803fe19f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe19f_2:;
/* 1803fe1a3: movss xmm2, dword ptr [r15 + 0x88] */
L_1803fe1a3_0:;
L_1803fe1a3_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x88))));
L_1803fe1a3_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe1a3_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fe1a3_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe1a3_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe1a3_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe1a3_7:;
/* 1803fe1ac: movss dword ptr [r15 + 0xc0], xmm5 */
L_1803fe1ac_0:;
L_1803fe1ac_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xc0))));
L_1803fe1ac_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803fe1ac_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe1ac_4:;
/* 1803fe1b5: movaps xmm4, xmm2 */
L_1803fe1b5_0:;
L_1803fe1b5_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fe1b5_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fe1b5_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fe1b5_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fe1b5_5:;
/* 1803fe1b8: movss xmm5, dword ptr [r15 + 0x8c] */
L_1803fe1b8_0:;
L_1803fe1b8_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x8c))));
L_1803fe1b8_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe1b8_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe1b8_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe1b8_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe1b8_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe1b8_7:;
/* 1803fe1c1: subss xmm0, xmm3 */
L_1803fe1c1_0:;
L_1803fe1c1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe1c1_2:;
/* 1803fe1c5: movss dword ptr [r15 + 0x44], xmm0 */
L_1803fe1c5_0:;
L_1803fe1c5_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x44))));
L_1803fe1c5_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe1c5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe1c5_4:;
/* 1803fe1cb: movaps xmm0, xmm5 */
L_1803fe1cb_0:;
L_1803fe1cb_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe1cb_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe1cb_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe1cb_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe1cb_5:;
/* 1803fe1ce: addss xmm7, xmm3 */
L_1803fe1ce_0:;
L_1803fe1ce_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe1ce_2:;
/* 1803fe1d2: movss dword ptr [r15 + 0xc4], xmm7 */
L_1803fe1d2_0:;
L_1803fe1d2_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xc4))));
L_1803fe1d2_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803fe1d2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe1d2_4:;
/* 1803fe1db: movss xmm7, dword ptr [r15 + 0x4c] */
L_1803fe1db_0:;
L_1803fe1db_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4c))));
L_1803fe1db_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe1db_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fe1db_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe1db_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe1db_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe1db_7:;
/* 1803fe1e1: movss xmm3, dword ptr [r11] */
L_1803fe1e1_0:;
L_1803fe1e1_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,152,8),4));
L_1803fe1e1_2:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe1e1_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe1e1_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe1e1_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe1e1_6:;
/* 1803fe1e6: mulss xmm4, xmm3 */
L_1803fe1e6_0:;
L_1803fe1e6_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe1e6_2:;
/* 1803fe1ea: mulss xmm5, xmm3 */
L_1803fe1ea_0:;
L_1803fe1ea_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe1ea_2:;
/* 1803fe1ee: movss xmm1, dword ptr [r11 + 4] */
L_1803fe1ee_0:;
L_1803fe1ee_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x4))));
L_1803fe1ee_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe1ee_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe1ee_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe1ee_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe1ee_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe1ee_7:;
/* 1803fe1f4: mulss xmm0, xmm1 */
L_1803fe1f4_0:;
L_1803fe1f4_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe1f4_2:;
/* 1803fe1f8: mulss xmm2, xmm1 */
L_1803fe1f8_0:;
L_1803fe1f8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe1f8_2:;
/* 1803fe1fc: movss xmm1, dword ptr [r15 + 0x48] */
L_1803fe1fc_0:;
L_1803fe1fc_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x48))));
L_1803fe1fc_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe1fc_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe1fc_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe1fc_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe1fc_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe1fc_7:;
/* 1803fe202: movaps xmm6, xmm1 */
L_1803fe202_0:;
L_1803fe202_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fe202_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fe202_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fe202_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fe202_5:;
/* 1803fe205: movss xmm3, dword ptr [r11 + 0xc] */
L_1803fe205_0:;
L_1803fe205_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0xc))));
L_1803fe205_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe205_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe205_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe205_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe205_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe205_7:;
/* 1803fe20b: mulss xmm1, xmm3 */
L_1803fe20b_0:;
L_1803fe20b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe20b_2:;
/* 1803fe20f: movss xmm8, dword ptr [r11 + 0x10] */
L_1803fe20f_0:;
L_1803fe20f_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x10))));
L_1803fe20f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe20f_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe20f_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe20f_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe20f_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe20f_7:;
/* 1803fe215: subss xmm4, xmm0 */
L_1803fe215_0:;
L_1803fe215_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe215_2:;
/* 1803fe219: movaps xmm0, xmm7 */
L_1803fe219_0:;
L_1803fe219_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fe219_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fe219_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fe219_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fe219_5:;
/* 1803fe21c: mulss xmm0, xmm3 */
L_1803fe21c_0:;
L_1803fe21c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe21c_2:;
/* 1803fe220: movaps xmm3, xmm9 */
L_1803fe220_0:;
L_1803fe220_1:;
wr(s->r,4800,4,rd(s->r,5184,4));
L_1803fe220_2:;
wr(s->r,4804,4,rd(s->r,5188,4));
L_1803fe220_3:;
wr(s->r,4808,4,rd(s->r,5192,4));
L_1803fe220_4:;
wr(s->r,4812,4,rd(s->r,5196,4));
L_1803fe220_5:;
/* 1803fe224: mulss xmm9, xmm8 */
L_1803fe224_0:;
L_1803fe224_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe224_2:;
/* 1803fe229: addss xmm2, xmm5 */
L_1803fe229_0:;
L_1803fe229_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe229_2:;
/* 1803fe22d: movss xmm5, dword ptr [r11 + 8] */
L_1803fe22d_0:;
L_1803fe22d_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x8))));
L_1803fe22d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe22d_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe22d_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe22d_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe22d_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe22d_7:;
return UINT64_C(0x1803fe233);
}
uint64_t b_1803fe215(CPU*s){
/* 1803fe215: subss xmm4, xmm0 */
L_1803fe215_0:;
L_1803fe215_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe215_2:;
/* 1803fe219: movaps xmm0, xmm7 */
L_1803fe219_0:;
L_1803fe219_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fe219_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fe219_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fe219_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fe219_5:;
/* 1803fe21c: mulss xmm0, xmm3 */
L_1803fe21c_0:;
L_1803fe21c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe21c_2:;
/* 1803fe220: movaps xmm3, xmm9 */
L_1803fe220_0:;
L_1803fe220_1:;
wr(s->r,4800,4,rd(s->r,5184,4));
L_1803fe220_2:;
wr(s->r,4804,4,rd(s->r,5188,4));
L_1803fe220_3:;
wr(s->r,4808,4,rd(s->r,5192,4));
L_1803fe220_4:;
wr(s->r,4812,4,rd(s->r,5196,4));
L_1803fe220_5:;
/* 1803fe224: mulss xmm9, xmm8 */
L_1803fe224_0:;
L_1803fe224_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe224_2:;
/* 1803fe229: addss xmm2, xmm5 */
L_1803fe229_0:;
L_1803fe229_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe229_2:;
/* 1803fe22d: movss xmm5, dword ptr [r11 + 8] */
L_1803fe22d_0:;
L_1803fe22d_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x8))));
L_1803fe22d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe22d_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe22d_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe22d_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe22d_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe22d_7:;
/* 1803fe233: mulss xmm6, xmm5 */
L_1803fe233_0:;
L_1803fe233_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe233_2:;
/* 1803fe237: mulss xmm7, xmm5 */
L_1803fe237_0:;
L_1803fe237_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe237_2:;
/* 1803fe23b: movss xmm5, dword ptr [r15 + 0xc8] */
L_1803fe23b_0:;
L_1803fe23b_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xc8))));
L_1803fe23b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe23b_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe23b_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe23b_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe23b_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe23b_7:;
/* 1803fe244: subss xmm6, xmm0 */
L_1803fe244_0:;
L_1803fe244_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe244_2:;
/* 1803fe248: movaps xmm0, xmm5 */
L_1803fe248_0:;
L_1803fe248_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe248_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe248_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe248_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe248_5:;
/* 1803fe24b: mulss xmm0, xmm8 */
L_1803fe24b_0:;
L_1803fe24b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe24b_2:;
/* 1803fe250: movss xmm8, dword ptr [r15 + 8] */
L_1803fe250_0:;
L_1803fe250_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x8))));
L_1803fe250_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe250_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe250_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe250_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe250_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe250_7:;
/* 1803fe256: addss xmm1, xmm7 */
L_1803fe256_0:;
L_1803fe256_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fe256_2:;
/* 1803fe25a: movss xmm7, dword ptr [r11 + 0x14] */
L_1803fe25a_0:;
L_1803fe25a_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x14))));
L_1803fe25a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe25a_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fe25a_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe25a_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe25a_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe25a_7:;
/* 1803fe260: mulss xmm3, xmm7 */
L_1803fe260_0:;
L_1803fe260_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe260_2:;
/* 1803fe264: mulss xmm5, xmm7 */
L_1803fe264_0:;
L_1803fe264_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe264_2:;
/* 1803fe268: movaps xmm7, xmm8 */
L_1803fe268_0:;
L_1803fe268_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fe268_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fe268_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fe268_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fe268_5:;
/* 1803fe26c: subss xmm0, xmm3 */
L_1803fe26c_0:;
L_1803fe26c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe26c_2:;
/* 1803fe270: movaps xmm3, xmm4 */
L_1803fe270_0:;
L_1803fe270_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fe270_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fe270_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fe270_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fe270_5:;
/* 1803fe273: addss xmm5, xmm9 */
L_1803fe273_0:;
L_1803fe273_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe273_2:;
/* 1803fe278: subss xmm4, xmm0 */
L_1803fe278_0:;
L_1803fe278_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe278_2:;
/* 1803fe27c: addss xmm3, xmm0 */
L_1803fe27c_0:;
L_1803fe27c_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe27c_2:;
/* 1803fe280: movaps xmm0, xmm2 */
L_1803fe280_0:;
L_1803fe280_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fe280_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fe280_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fe280_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fe280_5:;
/* 1803fe283: subss xmm2, xmm5 */
L_1803fe283_0:;
L_1803fe283_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fe283_2:;
/* 1803fe287: addss xmm7, xmm6 */
L_1803fe287_0:;
L_1803fe287_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fe287_2:;
/* 1803fe28b: addss xmm0, xmm5 */
L_1803fe28b_0:;
L_1803fe28b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe28b_2:;
/* 1803fe28f: subss xmm8, xmm6 */
L_1803fe28f_0:;
L_1803fe28f_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fe28f_2:;
/* 1803fe294: movss xmm6, dword ptr [r15 + 0xc] */
L_1803fe294_0:;
L_1803fe294_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0xc))));
L_1803fe294_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe294_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803fe294_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe294_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe294_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe294_7:;
/* 1803fe29a: movaps xmm5, xmm6 */
L_1803fe29a_0:;
L_1803fe29a_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fe29a_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fe29a_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fe29a_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fe29a_5:;
/* 1803fe29d: subss xmm6, xmm1 */
L_1803fe29d_0:;
L_1803fe29d_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe29d_2:;
return UINT64_C(0x1803fe2a1);
}
uint64_t b_1803fe233(CPU*s){
/* 1803fe233: mulss xmm6, xmm5 */
L_1803fe233_0:;
L_1803fe233_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe233_2:;
/* 1803fe237: mulss xmm7, xmm5 */
L_1803fe237_0:;
L_1803fe237_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe237_2:;
/* 1803fe23b: movss xmm5, dword ptr [r15 + 0xc8] */
L_1803fe23b_0:;
L_1803fe23b_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xc8))));
L_1803fe23b_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe23b_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fe23b_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe23b_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe23b_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe23b_7:;
/* 1803fe244: subss xmm6, xmm0 */
L_1803fe244_0:;
L_1803fe244_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe244_2:;
/* 1803fe248: movaps xmm0, xmm5 */
L_1803fe248_0:;
L_1803fe248_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe248_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe248_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe248_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe248_5:;
/* 1803fe24b: mulss xmm0, xmm8 */
L_1803fe24b_0:;
L_1803fe24b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe24b_2:;
/* 1803fe250: movss xmm8, dword ptr [r15 + 8] */
L_1803fe250_0:;
L_1803fe250_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x8))));
L_1803fe250_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe250_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803fe250_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe250_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe250_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe250_7:;
/* 1803fe256: addss xmm1, xmm7 */
L_1803fe256_0:;
L_1803fe256_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fe256_2:;
/* 1803fe25a: movss xmm7, dword ptr [r11 + 0x14] */
L_1803fe25a_0:;
L_1803fe25a_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x14))));
L_1803fe25a_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe25a_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fe25a_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe25a_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe25a_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe25a_7:;
/* 1803fe260: mulss xmm3, xmm7 */
L_1803fe260_0:;
L_1803fe260_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe260_2:;
/* 1803fe264: mulss xmm5, xmm7 */
L_1803fe264_0:;
L_1803fe264_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe264_2:;
/* 1803fe268: movaps xmm7, xmm8 */
L_1803fe268_0:;
L_1803fe268_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fe268_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fe268_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fe268_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fe268_5:;
/* 1803fe26c: subss xmm0, xmm3 */
L_1803fe26c_0:;
L_1803fe26c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe26c_2:;
/* 1803fe270: movaps xmm3, xmm4 */
L_1803fe270_0:;
L_1803fe270_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fe270_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fe270_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fe270_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fe270_5:;
/* 1803fe273: addss xmm5, xmm9 */
L_1803fe273_0:;
L_1803fe273_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe273_2:;
/* 1803fe278: subss xmm4, xmm0 */
L_1803fe278_0:;
L_1803fe278_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe278_2:;
/* 1803fe27c: addss xmm3, xmm0 */
L_1803fe27c_0:;
L_1803fe27c_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe27c_2:;
/* 1803fe280: movaps xmm0, xmm2 */
L_1803fe280_0:;
L_1803fe280_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fe280_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fe280_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fe280_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fe280_5:;
/* 1803fe283: subss xmm2, xmm5 */
L_1803fe283_0:;
L_1803fe283_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fe283_2:;
/* 1803fe287: addss xmm7, xmm6 */
L_1803fe287_0:;
L_1803fe287_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fe287_2:;
/* 1803fe28b: addss xmm0, xmm5 */
L_1803fe28b_0:;
L_1803fe28b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe28b_2:;
/* 1803fe28f: subss xmm8, xmm6 */
L_1803fe28f_0:;
L_1803fe28f_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fe28f_2:;
/* 1803fe294: movss xmm6, dword ptr [r15 + 0xc] */
L_1803fe294_0:;
L_1803fe294_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0xc))));
L_1803fe294_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe294_3:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803fe294_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe294_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe294_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe294_7:;
/* 1803fe29a: movaps xmm5, xmm6 */
L_1803fe29a_0:;
L_1803fe29a_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fe29a_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fe29a_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fe29a_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fe29a_5:;
/* 1803fe29d: subss xmm6, xmm1 */
L_1803fe29d_0:;
L_1803fe29d_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe29d_2:;
/* 1803fe2a1: lea r14, [r10 + rax*4] */
L_1803fe2a1_0:;
L_1803fe2a1_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fe2a1_2:;
wr(s->u,24,8,(rd(s->r,144,8)+rd(s->u,16,8)));
L_1803fe2a1_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fe2a1_4:;
/* 1803fe2a5: addss xmm5, xmm1 */
L_1803fe2a5_0:;
L_1803fe2a5_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe2a5_2:;
/* 1803fe2a9: movaps xmm1, xmm7 */
L_1803fe2a9_0:;
L_1803fe2a9_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fe2a9_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fe2a9_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fe2a9_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fe2a9_5:;
/* 1803fe2ac: subss xmm7, xmm3 */
L_1803fe2ac_0:;
L_1803fe2ac_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe2ac_2:;
/* 1803fe2b0: movss dword ptr [r15 + 0x88], xmm7 */
L_1803fe2b0_0:;
L_1803fe2b0_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x88))));
L_1803fe2b0_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803fe2b0_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe2b0_4:;
/* 1803fe2b9: movss xmm7, dword ptr [r15 + 0x90] */
L_1803fe2b9_0:;
L_1803fe2b9_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x90))));
L_1803fe2b9_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe2b9_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fe2b9_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe2b9_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe2b9_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe2b9_7:;
/* 1803fe2c2: movaps xmm9, xmm7 */
L_1803fe2c2_0:;
L_1803fe2c2_1:;
wr(s->r,5184,4,rd(s->r,5056,4));
L_1803fe2c2_2:;
wr(s->r,5188,4,rd(s->r,5060,4));
L_1803fe2c2_3:;
wr(s->r,5192,4,rd(s->r,5064,4));
L_1803fe2c2_4:;
wr(s->r,5196,4,rd(s->r,5068,4));
L_1803fe2c2_5:;
return UINT64_C(0x1803fe2c6);
}
uint64_t b_1803fe2a1(CPU*s){
/* 1803fe2a1: lea r14, [r10 + rax*4] */
L_1803fe2a1_0:;
L_1803fe2a1_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fe2a1_2:;
wr(s->u,24,8,(rd(s->r,144,8)+rd(s->u,16,8)));
L_1803fe2a1_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fe2a1_4:;
/* 1803fe2a5: addss xmm5, xmm1 */
L_1803fe2a5_0:;
L_1803fe2a5_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe2a5_2:;
/* 1803fe2a9: movaps xmm1, xmm7 */
L_1803fe2a9_0:;
L_1803fe2a9_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fe2a9_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fe2a9_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fe2a9_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fe2a9_5:;
/* 1803fe2ac: subss xmm7, xmm3 */
L_1803fe2ac_0:;
L_1803fe2ac_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe2ac_2:;
/* 1803fe2b0: movss dword ptr [r15 + 0x88], xmm7 */
L_1803fe2b0_0:;
L_1803fe2b0_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x88))));
L_1803fe2b0_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803fe2b0_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe2b0_4:;
/* 1803fe2b9: movss xmm7, dword ptr [r15 + 0x90] */
L_1803fe2b9_0:;
L_1803fe2b9_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x90))));
L_1803fe2b9_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe2b9_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fe2b9_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe2b9_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe2b9_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe2b9_7:;
/* 1803fe2c2: movaps xmm9, xmm7 */
L_1803fe2c2_0:;
L_1803fe2c2_1:;
wr(s->r,5184,4,rd(s->r,5056,4));
L_1803fe2c2_2:;
wr(s->r,5188,4,rd(s->r,5060,4));
L_1803fe2c2_3:;
wr(s->r,5192,4,rd(s->r,5064,4));
L_1803fe2c2_4:;
wr(s->r,5196,4,rd(s->r,5068,4));
L_1803fe2c2_5:;
/* 1803fe2c6: addss xmm1, xmm3 */
L_1803fe2c6_0:;
L_1803fe2c6_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe2c6_2:;
/* 1803fe2ca: movss xmm3, dword ptr [r15 + 0x94] */
L_1803fe2ca_0:;
L_1803fe2ca_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x94))));
L_1803fe2ca_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe2ca_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fe2ca_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe2ca_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe2ca_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe2ca_7:;
/* 1803fe2d3: movss dword ptr [r15 + 8], xmm1 */
L_1803fe2d3_0:;
L_1803fe2d3_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x8))));
L_1803fe2d3_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803fe2d3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe2d3_4:;
/* 1803fe2d9: movaps xmm1, xmm5 */
L_1803fe2d9_0:;
L_1803fe2d9_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fe2d9_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fe2d9_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fe2d9_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fe2d9_5:;
/* 1803fe2dc: subss xmm5, xmm0 */
L_1803fe2dc_0:;
L_1803fe2dc_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe2dc_2:;
/* 1803fe2e0: movss dword ptr [r15 + 0x8c], xmm5 */
L_1803fe2e0_0:;
L_1803fe2e0_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x8c))));
L_1803fe2e0_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803fe2e0_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe2e0_4:;
/* 1803fe2e9: addss xmm1, xmm0 */
L_1803fe2e9_0:;
L_1803fe2e9_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe2e9_2:;
/* 1803fe2ed: movss dword ptr [r15 + 0xc], xmm1 */
L_1803fe2ed_0:;
L_1803fe2ed_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0xc))));
L_1803fe2ed_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803fe2ed_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe2ed_4:;
/* 1803fe2f3: movaps xmm0, xmm8 */
L_1803fe2f3_0:;
L_1803fe2f3_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fe2f3_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fe2f3_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fe2f3_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fe2f3_5:;
/* 1803fe2f7: subss xmm8, xmm2 */
L_1803fe2f7_0:;
L_1803fe2f7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe2f7_2:;
/* 1803fe2fc: movss dword ptr [r15 + 0xc8], xmm8 */
L_1803fe2fc_0:;
L_1803fe2fc_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xc8))));
L_1803fe2fc_2:;
wr(s->u,32,4,rd(s->r,5120,4));
L_1803fe2fc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe2fc_4:;
/* 1803fe305: movss xmm8, dword ptr [r15 + 0xd4] */
L_1803fe305_0:;
L_1803fe305_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xd4))));
L_1803fe305_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe305_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803fe305_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe305_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe305_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe305_7:;
/* 1803fe30e: addss xmm0, xmm2 */
L_1803fe30e_0:;
L_1803fe30e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fe30e_2:;
/* 1803fe312: movss dword ptr [r15 + 0x48], xmm0 */
L_1803fe312_0:;
L_1803fe312_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x48))));
L_1803fe312_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fe312_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe312_4:;
/* 1803fe318: movaps xmm0, xmm6 */
L_1803fe318_0:;
L_1803fe318_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fe318_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fe318_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fe318_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fe318_5:;
/* 1803fe31b: addss xmm6, xmm4 */
L_1803fe31b_0:;
L_1803fe31b_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fe31b_2:;
/* 1803fe31f: movss dword ptr [r15 + 0xcc], xmm6 */
L_1803fe31f_0:;
L_1803fe31f_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xcc))));
L_1803fe31f_2:;
wr(s->u,32,4,rd(s->r,4992,4));
L_1803fe31f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe31f_4:;
/* 1803fe328: movss xmm6, dword ptr [r15 + 0x50] */
L_1803fe328_0:;
L_1803fe328_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x50))));
L_1803fe328_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe328_3:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803fe328_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe328_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe328_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe328_7:;
/* 1803fe32e: subss xmm0, xmm4 */
L_1803fe32e_0:;
L_1803fe32e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fe32e_2:;
/* 1803fe332: movss dword ptr [r15 + 0x4c], xmm0 */
L_1803fe332_0:;
L_1803fe332_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4c))));
L_1803fe332_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fe332_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe332_4:;
/* 1803fe338: movaps xmm0, xmm3 */
L_1803fe338_0:;
L_1803fe338_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fe338_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fe338_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fe338_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fe338_5:;
/* 1803fe33b: movaps xmm4, xmm6 */
L_1803fe33b_0:;
L_1803fe33b_1:;
wr(s->r,4864,4,rd(s->r,4992,4));
L_1803fe33b_2:;
wr(s->r,4868,4,rd(s->r,4996,4));
L_1803fe33b_3:;
wr(s->r,4872,4,rd(s->r,5000,4));
L_1803fe33b_4:;
wr(s->r,4876,4,rd(s->r,5004,4));
L_1803fe33b_5:;
/* 1803fe33e: movss xmm2, dword ptr [r10] */
L_1803fe33e_0:;
L_1803fe33e_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,144,8),4));
L_1803fe33e_2:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fe33e_3:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe33e_4:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe33e_5:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe33e_6:;
/* 1803fe343: mulss xmm9, xmm2 */
L_1803fe343_0:;
L_1803fe343_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fe343_2:;
/* 1803fe348: mulss xmm3, xmm2 */
L_1803fe348_0:;
L_1803fe348_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fe348_2:;
return UINT64_C(0x1803fe34c);
}
uint64_t b_1803fe2c6(CPU*s){
/* 1803fe2c6: addss xmm1, xmm3 */
L_1803fe2c6_0:;
L_1803fe2c6_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe2c6_2:;
/* 1803fe2ca: movss xmm3, dword ptr [r15 + 0x94] */
L_1803fe2ca_0:;
L_1803fe2ca_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x94))));
L_1803fe2ca_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe2ca_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe2ca_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe2ca_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe2ca_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe2ca_7:;
/* 1803fe2d3: movss dword ptr [r15 + 8], xmm1 */
L_1803fe2d3_0:;
L_1803fe2d3_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x8))));
L_1803fe2d3_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fe2d3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe2d3_4:;
/* 1803fe2d9: movaps xmm1, xmm5 */
L_1803fe2d9_0:;
L_1803fe2d9_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fe2d9_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fe2d9_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fe2d9_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fe2d9_5:;
/* 1803fe2dc: subss xmm5, xmm0 */
L_1803fe2dc_0:;
L_1803fe2dc_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe2dc_2:;
/* 1803fe2e0: movss dword ptr [r15 + 0x8c], xmm5 */
L_1803fe2e0_0:;
L_1803fe2e0_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x8c))));
L_1803fe2e0_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803fe2e0_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe2e0_4:;
/* 1803fe2e9: addss xmm1, xmm0 */
L_1803fe2e9_0:;
L_1803fe2e9_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe2e9_2:;
/* 1803fe2ed: movss dword ptr [r15 + 0xc], xmm1 */
L_1803fe2ed_0:;
L_1803fe2ed_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0xc))));
L_1803fe2ed_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fe2ed_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe2ed_4:;
/* 1803fe2f3: movaps xmm0, xmm8 */
L_1803fe2f3_0:;
L_1803fe2f3_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fe2f3_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fe2f3_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fe2f3_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fe2f3_5:;
/* 1803fe2f7: subss xmm8, xmm2 */
L_1803fe2f7_0:;
L_1803fe2f7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe2f7_2:;
/* 1803fe2fc: movss dword ptr [r15 + 0xc8], xmm8 */
L_1803fe2fc_0:;
L_1803fe2fc_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xc8))));
L_1803fe2fc_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fe2fc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe2fc_4:;
/* 1803fe305: movss xmm8, dword ptr [r15 + 0xd4] */
L_1803fe305_0:;
L_1803fe305_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xd4))));
L_1803fe305_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe305_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe305_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe305_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe305_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe305_7:;
/* 1803fe30e: addss xmm0, xmm2 */
L_1803fe30e_0:;
L_1803fe30e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fe30e_2:;
/* 1803fe312: movss dword ptr [r15 + 0x48], xmm0 */
L_1803fe312_0:;
L_1803fe312_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x48))));
L_1803fe312_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe312_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe312_4:;
/* 1803fe318: movaps xmm0, xmm6 */
L_1803fe318_0:;
L_1803fe318_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fe318_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fe318_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fe318_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fe318_5:;
/* 1803fe31b: addss xmm6, xmm4 */
L_1803fe31b_0:;
L_1803fe31b_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fe31b_2:;
/* 1803fe31f: movss dword ptr [r15 + 0xcc], xmm6 */
L_1803fe31f_0:;
L_1803fe31f_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xcc))));
L_1803fe31f_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803fe31f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe31f_4:;
/* 1803fe328: movss xmm6, dword ptr [r15 + 0x50] */
L_1803fe328_0:;
L_1803fe328_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x50))));
L_1803fe328_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe328_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803fe328_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe328_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe328_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe328_7:;
/* 1803fe32e: subss xmm0, xmm4 */
L_1803fe32e_0:;
L_1803fe32e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fe32e_2:;
/* 1803fe332: movss dword ptr [r15 + 0x4c], xmm0 */
L_1803fe332_0:;
L_1803fe332_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4c))));
L_1803fe332_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe332_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe332_4:;
/* 1803fe338: movaps xmm0, xmm3 */
L_1803fe338_0:;
L_1803fe338_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fe338_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fe338_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fe338_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fe338_5:;
/* 1803fe33b: movaps xmm4, xmm6 */
L_1803fe33b_0:;
L_1803fe33b_1:;
wr(s->r,4864,4,rd(s->r,4992,4));
L_1803fe33b_2:;
wr(s->r,4868,4,rd(s->r,4996,4));
L_1803fe33b_3:;
wr(s->r,4872,4,rd(s->r,5000,4));
L_1803fe33b_4:;
wr(s->r,4876,4,rd(s->r,5004,4));
L_1803fe33b_5:;
/* 1803fe33e: movss xmm2, dword ptr [r10] */
L_1803fe33e_0:;
L_1803fe33e_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,144,8),4));
L_1803fe33e_2:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fe33e_3:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe33e_4:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe33e_5:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe33e_6:;
/* 1803fe343: mulss xmm9, xmm2 */
L_1803fe343_0:;
L_1803fe343_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fe343_2:;
/* 1803fe348: mulss xmm3, xmm2 */
L_1803fe348_0:;
L_1803fe348_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fe348_2:;
/* 1803fe34c: movss xmm1, dword ptr [r10 + 4] */
L_1803fe34c_0:;
L_1803fe34c_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803fe34c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe34c_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe34c_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe34c_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe34c_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe34c_7:;
/* 1803fe352: mulss xmm0, xmm1 */
L_1803fe352_0:;
L_1803fe352_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe352_2:;
/* 1803fe356: mulss xmm7, xmm1 */
L_1803fe356_0:;
L_1803fe356_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe356_2:;
/* 1803fe35a: movss xmm2, dword ptr [r10 + 8] */
L_1803fe35a_0:;
L_1803fe35a_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803fe35a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe35a_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fe35a_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe35a_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe35a_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe35a_7:;
/* 1803fe360: mulss xmm4, xmm2 */
L_1803fe360_0:;
L_1803fe360_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fe360_2:;
/* 1803fe364: movss xmm1, dword ptr [r10 + 0xc] */
L_1803fe364_0:;
L_1803fe364_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803fe364_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe364_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe364_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe364_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe364_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe364_7:;
/* 1803fe36a: mulss xmm6, xmm1 */
L_1803fe36a_0:;
L_1803fe36a_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe36a_2:;
return UINT64_C(0x1803fe36e);
}
uint64_t b_1803fe34c(CPU*s){
/* 1803fe34c: movss xmm1, dword ptr [r10 + 4] */
L_1803fe34c_0:;
L_1803fe34c_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803fe34c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe34c_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe34c_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe34c_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe34c_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe34c_7:;
/* 1803fe352: mulss xmm0, xmm1 */
L_1803fe352_0:;
L_1803fe352_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe352_2:;
/* 1803fe356: mulss xmm7, xmm1 */
L_1803fe356_0:;
L_1803fe356_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe356_2:;
/* 1803fe35a: movss xmm2, dword ptr [r10 + 8] */
L_1803fe35a_0:;
L_1803fe35a_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803fe35a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe35a_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fe35a_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe35a_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe35a_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe35a_7:;
/* 1803fe360: mulss xmm4, xmm2 */
L_1803fe360_0:;
L_1803fe360_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fe360_2:;
/* 1803fe364: movss xmm1, dword ptr [r10 + 0xc] */
L_1803fe364_0:;
L_1803fe364_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803fe364_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe364_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe364_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe364_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe364_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe364_7:;
/* 1803fe36a: mulss xmm6, xmm1 */
L_1803fe36a_0:;
L_1803fe36a_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe36a_2:;
/* 1803fe36e: movss xmm5, dword ptr [r10 + 0x10] */
L_1803fe36e_0:;
L_1803fe36e_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x10))));
L_1803fe36e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe36e_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe36e_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe36e_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe36e_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe36e_7:;
/* 1803fe374: subss xmm9, xmm0 */
L_1803fe374_0:;
L_1803fe374_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe374_2:;
/* 1803fe379: addss xmm7, xmm3 */
L_1803fe379_0:;
L_1803fe379_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe379_2:;
/* 1803fe37d: movss xmm3, dword ptr [r15 + 0x54] */
L_1803fe37d_0:;
L_1803fe37d_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x54))));
L_1803fe37d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe37d_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe37d_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe37d_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe37d_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe37d_7:;
/* 1803fe383: movaps xmm0, xmm3 */
L_1803fe383_0:;
L_1803fe383_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fe383_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fe383_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fe383_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fe383_5:;
/* 1803fe386: mulss xmm3, xmm2 */
L_1803fe386_0:;
L_1803fe386_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fe386_2:;
/* 1803fe38a: movaps xmm2, xmm8 */
L_1803fe38a_0:;
L_1803fe38a_1:;
wr(s->r,4736,4,rd(s->r,5120,4));
L_1803fe38a_2:;
wr(s->r,4740,4,rd(s->r,5124,4));
L_1803fe38a_3:;
wr(s->r,4744,4,rd(s->r,5128,4));
L_1803fe38a_4:;
wr(s->r,4748,4,rd(s->r,5132,4));
L_1803fe38a_5:;
/* 1803fe38e: mulss xmm0, xmm1 */
L_1803fe38e_0:;
L_1803fe38e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe38e_2:;
/* 1803fe392: mulss xmm8, xmm5 */
L_1803fe392_0:;
L_1803fe392_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe392_2:;
/* 1803fe397: movss xmm1, dword ptr [r15 + 0xd0] */
L_1803fe397_0:;
L_1803fe397_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xd0))));
L_1803fe397_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe397_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe397_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe397_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe397_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe397_7:;
/* 1803fe3a0: subss xmm4, xmm0 */
L_1803fe3a0_0:;
L_1803fe3a0_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe3a0_2:;
/* 1803fe3a4: movaps xmm0, xmm1 */
L_1803fe3a4_0:;
L_1803fe3a4_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803fe3a4_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803fe3a4_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803fe3a4_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803fe3a4_5:;
/* 1803fe3a7: mulss xmm0, xmm5 */
L_1803fe3a7_0:;
L_1803fe3a7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe3a7_2:;
/* 1803fe3ab: movaps xmm5, xmm7 */
L_1803fe3ab_0:;
L_1803fe3ab_1:;
wr(s->r,4928,4,rd(s->r,5056,4));
L_1803fe3ab_2:;
wr(s->r,4932,4,rd(s->r,5060,4));
L_1803fe3ab_3:;
wr(s->r,4936,4,rd(s->r,5064,4));
L_1803fe3ab_4:;
wr(s->r,4940,4,rd(s->r,5068,4));
L_1803fe3ab_5:;
/* 1803fe3ae: addss xmm6, xmm3 */
L_1803fe3ae_0:;
L_1803fe3ae_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe3ae_2:;
/* 1803fe3b2: movss xmm3, dword ptr [r10 + 0x14] */
L_1803fe3b2_0:;
L_1803fe3b2_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x14))));
L_1803fe3b2_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe3b2_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe3b2_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe3b2_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe3b2_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe3b2_7:;
/* 1803fe3b8: mulss xmm2, xmm3 */
L_1803fe3b8_0:;
L_1803fe3b8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe3b8_2:;
/* 1803fe3bc: mulss xmm1, xmm3 */
L_1803fe3bc_0:;
L_1803fe3bc_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe3bc_2:;
/* 1803fe3c0: movss xmm3, dword ptr [r15 + 0x10] */
L_1803fe3c0_0:;
L_1803fe3c0_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x10))));
L_1803fe3c0_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe3c0_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe3c0_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe3c0_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe3c0_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe3c0_7:;
/* 1803fe3c6: subss xmm0, xmm2 */
L_1803fe3c6_0:;
L_1803fe3c6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe3c6_2:;
/* 1803fe3ca: movaps xmm2, xmm3 */
L_1803fe3ca_0:;
L_1803fe3ca_1:;
wr(s->r,4736,4,rd(s->r,4800,4));
L_1803fe3ca_2:;
wr(s->r,4740,4,rd(s->r,4804,4));
L_1803fe3ca_3:;
wr(s->r,4744,4,rd(s->r,4808,4));
L_1803fe3ca_4:;
wr(s->r,4748,4,rd(s->r,4812,4));
L_1803fe3ca_5:;
/* 1803fe3cd: addss xmm1, xmm8 */
L_1803fe3cd_0:;
L_1803fe3cd_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fe3cd_2:;
/* 1803fe3d2: movaps xmm8, xmm9 */
L_1803fe3d2_0:;
L_1803fe3d2_1:;
wr(s->r,5120,4,rd(s->r,5184,4));
L_1803fe3d2_2:;
wr(s->r,5124,4,rd(s->r,5188,4));
L_1803fe3d2_3:;
wr(s->r,5128,4,rd(s->r,5192,4));
L_1803fe3d2_4:;
wr(s->r,5132,4,rd(s->r,5196,4));
L_1803fe3d2_5:;
/* 1803fe3d6: subss xmm9, xmm0 */
L_1803fe3d6_0:;
L_1803fe3d6_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe3d6_2:;
/* 1803fe3db: addss xmm5, xmm1 */
L_1803fe3db_0:;
L_1803fe3db_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe3db_2:;
return UINT64_C(0x1803fe3df);
}
uint64_t b_1803fe36e(CPU*s){
/* 1803fe36e: movss xmm5, dword ptr [r10 + 0x10] */
L_1803fe36e_0:;
L_1803fe36e_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x10))));
L_1803fe36e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe36e_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe36e_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe36e_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe36e_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe36e_7:;
/* 1803fe374: subss xmm9, xmm0 */
L_1803fe374_0:;
L_1803fe374_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe374_2:;
/* 1803fe379: addss xmm7, xmm3 */
L_1803fe379_0:;
L_1803fe379_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe379_2:;
/* 1803fe37d: movss xmm3, dword ptr [r15 + 0x54] */
L_1803fe37d_0:;
L_1803fe37d_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x54))));
L_1803fe37d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe37d_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe37d_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe37d_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe37d_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe37d_7:;
/* 1803fe383: movaps xmm0, xmm3 */
L_1803fe383_0:;
L_1803fe383_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fe383_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fe383_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fe383_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fe383_5:;
/* 1803fe386: mulss xmm3, xmm2 */
L_1803fe386_0:;
L_1803fe386_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fe386_2:;
/* 1803fe38a: movaps xmm2, xmm8 */
L_1803fe38a_0:;
L_1803fe38a_1:;
wr(s->r,4736,4,rd(s->r,5120,4));
L_1803fe38a_2:;
wr(s->r,4740,4,rd(s->r,5124,4));
L_1803fe38a_3:;
wr(s->r,4744,4,rd(s->r,5128,4));
L_1803fe38a_4:;
wr(s->r,4748,4,rd(s->r,5132,4));
L_1803fe38a_5:;
/* 1803fe38e: mulss xmm0, xmm1 */
L_1803fe38e_0:;
L_1803fe38e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe38e_2:;
/* 1803fe392: mulss xmm8, xmm5 */
L_1803fe392_0:;
L_1803fe392_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe392_2:;
/* 1803fe397: movss xmm1, dword ptr [r15 + 0xd0] */
L_1803fe397_0:;
L_1803fe397_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xd0))));
L_1803fe397_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe397_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe397_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe397_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe397_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe397_7:;
/* 1803fe3a0: subss xmm4, xmm0 */
L_1803fe3a0_0:;
L_1803fe3a0_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe3a0_2:;
/* 1803fe3a4: movaps xmm0, xmm1 */
L_1803fe3a4_0:;
L_1803fe3a4_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803fe3a4_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803fe3a4_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803fe3a4_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803fe3a4_5:;
/* 1803fe3a7: mulss xmm0, xmm5 */
L_1803fe3a7_0:;
L_1803fe3a7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe3a7_2:;
/* 1803fe3ab: movaps xmm5, xmm7 */
L_1803fe3ab_0:;
L_1803fe3ab_1:;
wr(s->r,4928,4,rd(s->r,5056,4));
L_1803fe3ab_2:;
wr(s->r,4932,4,rd(s->r,5060,4));
L_1803fe3ab_3:;
wr(s->r,4936,4,rd(s->r,5064,4));
L_1803fe3ab_4:;
wr(s->r,4940,4,rd(s->r,5068,4));
L_1803fe3ab_5:;
/* 1803fe3ae: addss xmm6, xmm3 */
L_1803fe3ae_0:;
L_1803fe3ae_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe3ae_2:;
/* 1803fe3b2: movss xmm3, dword ptr [r10 + 0x14] */
L_1803fe3b2_0:;
L_1803fe3b2_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x14))));
L_1803fe3b2_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe3b2_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe3b2_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe3b2_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe3b2_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe3b2_7:;
/* 1803fe3b8: mulss xmm2, xmm3 */
L_1803fe3b8_0:;
L_1803fe3b8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe3b8_2:;
/* 1803fe3bc: mulss xmm1, xmm3 */
L_1803fe3bc_0:;
L_1803fe3bc_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe3bc_2:;
/* 1803fe3c0: movss xmm3, dword ptr [r15 + 0x10] */
L_1803fe3c0_0:;
L_1803fe3c0_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x10))));
L_1803fe3c0_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe3c0_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe3c0_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe3c0_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe3c0_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe3c0_7:;
/* 1803fe3c6: subss xmm0, xmm2 */
L_1803fe3c6_0:;
L_1803fe3c6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe3c6_2:;
/* 1803fe3ca: movaps xmm2, xmm3 */
L_1803fe3ca_0:;
L_1803fe3ca_1:;
wr(s->r,4736,4,rd(s->r,4800,4));
L_1803fe3ca_2:;
wr(s->r,4740,4,rd(s->r,4804,4));
L_1803fe3ca_3:;
wr(s->r,4744,4,rd(s->r,4808,4));
L_1803fe3ca_4:;
wr(s->r,4748,4,rd(s->r,4812,4));
L_1803fe3ca_5:;
/* 1803fe3cd: addss xmm1, xmm8 */
L_1803fe3cd_0:;
L_1803fe3cd_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fe3cd_2:;
/* 1803fe3d2: movaps xmm8, xmm9 */
L_1803fe3d2_0:;
L_1803fe3d2_1:;
wr(s->r,5120,4,rd(s->r,5184,4));
L_1803fe3d2_2:;
wr(s->r,5124,4,rd(s->r,5188,4));
L_1803fe3d2_3:;
wr(s->r,5128,4,rd(s->r,5192,4));
L_1803fe3d2_4:;
wr(s->r,5132,4,rd(s->r,5196,4));
L_1803fe3d2_5:;
/* 1803fe3d6: subss xmm9, xmm0 */
L_1803fe3d6_0:;
L_1803fe3d6_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe3d6_2:;
/* 1803fe3db: addss xmm5, xmm1 */
L_1803fe3db_0:;
L_1803fe3db_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe3db_2:;
/* 1803fe3df: addss xmm8, xmm0 */
L_1803fe3df_0:;
L_1803fe3df_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe3df_2:;
/* 1803fe3e4: subss xmm7, xmm1 */
L_1803fe3e4_0:;
L_1803fe3e4_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe3e4_2:;
/* 1803fe3e8: movss xmm1, dword ptr [r15 + 0x14] */
L_1803fe3e8_0:;
L_1803fe3e8_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x14))));
L_1803fe3e8_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe3e8_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe3e8_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe3e8_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe3e8_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe3e8_7:;
/* 1803fe3ee: movaps xmm0, xmm1 */
L_1803fe3ee_0:;
L_1803fe3ee_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803fe3ee_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803fe3ee_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803fe3ee_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803fe3ee_5:;
/* 1803fe3f1: addss xmm2, xmm4 */
L_1803fe3f1_0:;
L_1803fe3f1_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fe3f1_2:;
/* 1803fe3f5: subss xmm3, xmm4 */
L_1803fe3f5_0:;
L_1803fe3f5_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fe3f5_2:;
/* 1803fe3f9: movaps xmm4, xmm2 */
L_1803fe3f9_0:;
L_1803fe3f9_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fe3f9_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fe3f9_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fe3f9_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fe3f9_5:;
return UINT64_C(0x1803fe3fc);
}
uint64_t b_1803fe3df(CPU*s){
/* 1803fe3df: addss xmm8, xmm0 */
L_1803fe3df_0:;
L_1803fe3df_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe3df_2:;
/* 1803fe3e4: subss xmm7, xmm1 */
L_1803fe3e4_0:;
L_1803fe3e4_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe3e4_2:;
/* 1803fe3e8: movss xmm1, dword ptr [r15 + 0x14] */
L_1803fe3e8_0:;
L_1803fe3e8_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x14))));
L_1803fe3e8_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe3e8_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe3e8_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe3e8_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe3e8_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe3e8_7:;
/* 1803fe3ee: movaps xmm0, xmm1 */
L_1803fe3ee_0:;
L_1803fe3ee_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803fe3ee_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803fe3ee_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803fe3ee_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803fe3ee_5:;
/* 1803fe3f1: addss xmm2, xmm4 */
L_1803fe3f1_0:;
L_1803fe3f1_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fe3f1_2:;
/* 1803fe3f5: subss xmm3, xmm4 */
L_1803fe3f5_0:;
L_1803fe3f5_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fe3f5_2:;
/* 1803fe3f9: movaps xmm4, xmm2 */
L_1803fe3f9_0:;
L_1803fe3f9_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fe3f9_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fe3f9_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fe3f9_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fe3f9_5:;
/* 1803fe3fc: addss xmm0, xmm6 */
L_1803fe3fc_0:;
L_1803fe3fc_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fe3fc_2:;
/* 1803fe400: subss xmm1, xmm6 */
L_1803fe400_0:;
L_1803fe400_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fe400_2:;
/* 1803fe404: addss xmm4, xmm8 */
L_1803fe404_0:;
L_1803fe404_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fe404_2:;
/* 1803fe409: movss dword ptr [r15 + 0x10], xmm4 */
L_1803fe409_0:;
L_1803fe409_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x10))));
L_1803fe409_2:;
wr(s->u,16,4,rd(s->r,4864,4));
L_1803fe409_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe409_4:;
/* 1803fe40f: movaps xmm4, xmm0 */
L_1803fe40f_0:;
L_1803fe40f_1:;
wr(s->r,4864,4,rd(s->r,4608,4));
L_1803fe40f_2:;
wr(s->r,4868,4,rd(s->r,4612,4));
L_1803fe40f_3:;
wr(s->r,4872,4,rd(s->r,4616,4));
L_1803fe40f_4:;
wr(s->r,4876,4,rd(s->r,4620,4));
L_1803fe40f_5:;
/* 1803fe412: subss xmm2, xmm8 */
L_1803fe412_0:;
L_1803fe412_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803fe412_2:;
/* 1803fe417: movss dword ptr [r15 + 0x90], xmm2 */
L_1803fe417_0:;
L_1803fe417_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x90))));
L_1803fe417_2:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803fe417_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe417_4:;
/* 1803fe420: movss xmm2, dword ptr [r15 + 0x98] */
L_1803fe420_0:;
L_1803fe420_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x98))));
L_1803fe420_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe420_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fe420_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe420_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe420_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe420_7:;
/* 1803fe429: addss xmm4, xmm5 */
L_1803fe429_0:;
L_1803fe429_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe429_2:;
/* 1803fe42d: movss dword ptr [r15 + 0x14], xmm4 */
L_1803fe42d_0:;
L_1803fe42d_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x14))));
L_1803fe42d_2:;
wr(s->u,16,4,rd(s->r,4864,4));
L_1803fe42d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe42d_4:;
/* 1803fe433: movaps xmm4, xmm2 */
L_1803fe433_0:;
L_1803fe433_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fe433_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fe433_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fe433_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fe433_5:;
/* 1803fe436: subss xmm0, xmm5 */
L_1803fe436_0:;
L_1803fe436_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fe436_2:;
/* 1803fe43a: movss xmm5, dword ptr [r15 + 0x9c] */
L_1803fe43a_0:;
L_1803fe43a_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x9c))));
L_1803fe43a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe43a_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe43a_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe43a_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe43a_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe43a_7:;
/* 1803fe443: movss dword ptr [r15 + 0x94], xmm0 */
L_1803fe443_0:;
L_1803fe443_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x94))));
L_1803fe443_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe443_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe443_4:;
/* 1803fe44c: movaps xmm0, xmm3 */
L_1803fe44c_0:;
L_1803fe44c_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fe44c_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fe44c_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fe44c_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fe44c_5:;
/* 1803fe44f: subss xmm3, xmm7 */
L_1803fe44f_0:;
L_1803fe44f_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5056,4),4),4));
L_1803fe44f_2:;
/* 1803fe453: movss dword ptr [r15 + 0xd0], xmm3 */
L_1803fe453_0:;
L_1803fe453_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xd0))));
L_1803fe453_2:;
wr(s->u,16,4,rd(s->r,4800,4));
L_1803fe453_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe453_4:;
/* 1803fe45c: addss xmm0, xmm7 */
L_1803fe45c_0:;
L_1803fe45c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fe45c_2:;
/* 1803fe460: movss xmm7, dword ptr [r15 + 0x5c] */
L_1803fe460_0:;
L_1803fe460_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x5c))));
L_1803fe460_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe460_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fe460_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe460_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe460_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe460_7:;
/* 1803fe466: movss dword ptr [r15 + 0x50], xmm0 */
L_1803fe466_0:;
L_1803fe466_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x50))));
L_1803fe466_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe466_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe466_4:;
/* 1803fe46c: movaps xmm0, xmm1 */
L_1803fe46c_0:;
L_1803fe46c_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803fe46c_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803fe46c_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803fe46c_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803fe46c_5:;
/* 1803fe46f: addss xmm1, xmm9 */
L_1803fe46f_0:;
L_1803fe46f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe46f_2:;
/* 1803fe474: movss dword ptr [r15 + 0xd4], xmm1 */
L_1803fe474_0:;
L_1803fe474_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xd4))));
L_1803fe474_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fe474_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe474_4:;
/* 1803fe47d: subss xmm0, xmm9 */
L_1803fe47d_0:;
L_1803fe47d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fe47d_2:;
/* 1803fe482: movss xmm9, dword ptr [r15 + 0xdc] */
L_1803fe482_0:;
L_1803fe482_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xdc))));
L_1803fe482_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe482_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803fe482_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe482_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe482_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe482_7:;
return UINT64_C(0x1803fe48b);
}
uint64_t b_1803fe3fc(CPU*s){
/* 1803fe3fc: addss xmm0, xmm6 */
L_1803fe3fc_0:;
L_1803fe3fc_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fe3fc_2:;
/* 1803fe400: subss xmm1, xmm6 */
L_1803fe400_0:;
L_1803fe400_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fe400_2:;
/* 1803fe404: addss xmm4, xmm8 */
L_1803fe404_0:;
L_1803fe404_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fe404_2:;
/* 1803fe409: movss dword ptr [r15 + 0x10], xmm4 */
L_1803fe409_0:;
L_1803fe409_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x10))));
L_1803fe409_2:;
wr(s->u,16,4,rd(s->r,4864,4));
L_1803fe409_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe409_4:;
/* 1803fe40f: movaps xmm4, xmm0 */
L_1803fe40f_0:;
L_1803fe40f_1:;
wr(s->r,4864,4,rd(s->r,4608,4));
L_1803fe40f_2:;
wr(s->r,4868,4,rd(s->r,4612,4));
L_1803fe40f_3:;
wr(s->r,4872,4,rd(s->r,4616,4));
L_1803fe40f_4:;
wr(s->r,4876,4,rd(s->r,4620,4));
L_1803fe40f_5:;
/* 1803fe412: subss xmm2, xmm8 */
L_1803fe412_0:;
L_1803fe412_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803fe412_2:;
/* 1803fe417: movss dword ptr [r15 + 0x90], xmm2 */
L_1803fe417_0:;
L_1803fe417_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x90))));
L_1803fe417_2:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803fe417_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe417_4:;
/* 1803fe420: movss xmm2, dword ptr [r15 + 0x98] */
L_1803fe420_0:;
L_1803fe420_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x98))));
L_1803fe420_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe420_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fe420_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe420_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe420_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe420_7:;
/* 1803fe429: addss xmm4, xmm5 */
L_1803fe429_0:;
L_1803fe429_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe429_2:;
/* 1803fe42d: movss dword ptr [r15 + 0x14], xmm4 */
L_1803fe42d_0:;
L_1803fe42d_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x14))));
L_1803fe42d_2:;
wr(s->u,16,4,rd(s->r,4864,4));
L_1803fe42d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe42d_4:;
/* 1803fe433: movaps xmm4, xmm2 */
L_1803fe433_0:;
L_1803fe433_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fe433_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fe433_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fe433_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fe433_5:;
/* 1803fe436: subss xmm0, xmm5 */
L_1803fe436_0:;
L_1803fe436_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fe436_2:;
/* 1803fe43a: movss xmm5, dword ptr [r15 + 0x9c] */
L_1803fe43a_0:;
L_1803fe43a_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x9c))));
L_1803fe43a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe43a_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe43a_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe43a_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe43a_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe43a_7:;
/* 1803fe443: movss dword ptr [r15 + 0x94], xmm0 */
L_1803fe443_0:;
L_1803fe443_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x94))));
L_1803fe443_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe443_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe443_4:;
/* 1803fe44c: movaps xmm0, xmm3 */
L_1803fe44c_0:;
L_1803fe44c_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fe44c_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fe44c_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fe44c_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fe44c_5:;
/* 1803fe44f: subss xmm3, xmm7 */
L_1803fe44f_0:;
L_1803fe44f_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5056,4),4),4));
L_1803fe44f_2:;
/* 1803fe453: movss dword ptr [r15 + 0xd0], xmm3 */
L_1803fe453_0:;
L_1803fe453_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xd0))));
L_1803fe453_2:;
wr(s->u,16,4,rd(s->r,4800,4));
L_1803fe453_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe453_4:;
/* 1803fe45c: addss xmm0, xmm7 */
L_1803fe45c_0:;
L_1803fe45c_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fe45c_2:;
/* 1803fe460: movss xmm7, dword ptr [r15 + 0x5c] */
L_1803fe460_0:;
L_1803fe460_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x5c))));
L_1803fe460_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe460_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fe460_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe460_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe460_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe460_7:;
/* 1803fe466: movss dword ptr [r15 + 0x50], xmm0 */
L_1803fe466_0:;
L_1803fe466_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x50))));
L_1803fe466_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe466_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe466_4:;
/* 1803fe46c: movaps xmm0, xmm1 */
L_1803fe46c_0:;
L_1803fe46c_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803fe46c_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803fe46c_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803fe46c_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803fe46c_5:;
/* 1803fe46f: addss xmm1, xmm9 */
L_1803fe46f_0:;
L_1803fe46f_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe46f_2:;
/* 1803fe474: movss dword ptr [r15 + 0xd4], xmm1 */
L_1803fe474_0:;
L_1803fe474_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xd4))));
L_1803fe474_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fe474_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe474_4:;
/* 1803fe47d: subss xmm0, xmm9 */
L_1803fe47d_0:;
L_1803fe47d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fe47d_2:;
/* 1803fe482: movss xmm9, dword ptr [r15 + 0xdc] */
L_1803fe482_0:;
L_1803fe482_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xdc))));
L_1803fe482_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe482_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803fe482_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe482_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe482_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe482_7:;
/* 1803fe48b: movss dword ptr [r15 + 0x54], xmm0 */
L_1803fe48b_0:;
L_1803fe48b_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x54))));
L_1803fe48b_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe48b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe48b_4:;
/* 1803fe491: movaps xmm0, xmm5 */
L_1803fe491_0:;
L_1803fe491_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe491_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe491_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe491_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe491_5:;
/* 1803fe494: movss xmm3, dword ptr [r14] */
L_1803fe494_0:;
L_1803fe494_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fe494_2:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe494_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe494_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe494_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe494_6:;
/* 1803fe499: mulss xmm4, xmm3 */
L_1803fe499_0:;
L_1803fe499_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe499_2:;
/* 1803fe49d: mulss xmm5, xmm3 */
L_1803fe49d_0:;
L_1803fe49d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe49d_2:;
/* 1803fe4a1: movss xmm1, dword ptr [r14 + 4] */
L_1803fe4a1_0:;
L_1803fe4a1_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fe4a1_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe4a1_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe4a1_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe4a1_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe4a1_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe4a1_7:;
/* 1803fe4a7: mulss xmm0, xmm1 */
L_1803fe4a7_0:;
L_1803fe4a7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe4a7_2:;
return UINT64_C(0x1803fe4ab);
}
uint64_t b_1803fe48b(CPU*s){
/* 1803fe48b: movss dword ptr [r15 + 0x54], xmm0 */
L_1803fe48b_0:;
L_1803fe48b_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x54))));
L_1803fe48b_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe48b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe48b_4:;
/* 1803fe491: movaps xmm0, xmm5 */
L_1803fe491_0:;
L_1803fe491_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe491_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe491_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe491_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe491_5:;
/* 1803fe494: movss xmm3, dword ptr [r14] */
L_1803fe494_0:;
L_1803fe494_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fe494_2:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe494_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe494_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe494_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe494_6:;
/* 1803fe499: mulss xmm4, xmm3 */
L_1803fe499_0:;
L_1803fe499_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe499_2:;
/* 1803fe49d: mulss xmm5, xmm3 */
L_1803fe49d_0:;
L_1803fe49d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe49d_2:;
/* 1803fe4a1: movss xmm1, dword ptr [r14 + 4] */
L_1803fe4a1_0:;
L_1803fe4a1_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fe4a1_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe4a1_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe4a1_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe4a1_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe4a1_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe4a1_7:;
/* 1803fe4a7: mulss xmm0, xmm1 */
L_1803fe4a7_0:;
L_1803fe4a7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe4a7_2:;
/* 1803fe4ab: mulss xmm2, xmm1 */
L_1803fe4ab_0:;
L_1803fe4ab_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe4ab_2:;
/* 1803fe4af: movss xmm1, dword ptr [r15 + 0x58] */
L_1803fe4af_0:;
L_1803fe4af_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x58))));
L_1803fe4af_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe4af_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe4af_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe4af_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe4af_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe4af_7:;
/* 1803fe4b5: movaps xmm6, xmm1 */
L_1803fe4b5_0:;
L_1803fe4b5_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fe4b5_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fe4b5_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fe4b5_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fe4b5_5:;
/* 1803fe4b8: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fe4b8_0:;
L_1803fe4b8_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fe4b8_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe4b8_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe4b8_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe4b8_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe4b8_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe4b8_7:;
/* 1803fe4be: mulss xmm1, xmm3 */
L_1803fe4be_0:;
L_1803fe4be_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe4be_2:;
/* 1803fe4c2: movss xmm8, dword ptr [r14 + 0x10] */
L_1803fe4c2_0:;
L_1803fe4c2_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fe4c2_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe4c2_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe4c2_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe4c2_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe4c2_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe4c2_7:;
/* 1803fe4c8: subss xmm4, xmm0 */
L_1803fe4c8_0:;
L_1803fe4c8_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe4c8_2:;
/* 1803fe4cc: movaps xmm0, xmm7 */
L_1803fe4cc_0:;
L_1803fe4cc_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fe4cc_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fe4cc_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fe4cc_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fe4cc_5:;
/* 1803fe4cf: mulss xmm0, xmm3 */
L_1803fe4cf_0:;
L_1803fe4cf_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe4cf_2:;
/* 1803fe4d3: movaps xmm3, xmm9 */
L_1803fe4d3_0:;
L_1803fe4d3_1:;
wr(s->r,4800,4,rd(s->r,5184,4));
L_1803fe4d3_2:;
wr(s->r,4804,4,rd(s->r,5188,4));
L_1803fe4d3_3:;
wr(s->r,4808,4,rd(s->r,5192,4));
L_1803fe4d3_4:;
wr(s->r,4812,4,rd(s->r,5196,4));
L_1803fe4d3_5:;
/* 1803fe4d7: mulss xmm9, xmm8 */
L_1803fe4d7_0:;
L_1803fe4d7_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe4d7_2:;
/* 1803fe4dc: addss xmm2, xmm5 */
L_1803fe4dc_0:;
L_1803fe4dc_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe4dc_2:;
/* 1803fe4e0: movss xmm5, dword ptr [r14 + 8] */
L_1803fe4e0_0:;
L_1803fe4e0_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fe4e0_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe4e0_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe4e0_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe4e0_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe4e0_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe4e0_7:;
/* 1803fe4e6: mulss xmm6, xmm5 */
L_1803fe4e6_0:;
L_1803fe4e6_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe4e6_2:;
/* 1803fe4ea: mulss xmm7, xmm5 */
L_1803fe4ea_0:;
L_1803fe4ea_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe4ea_2:;
/* 1803fe4ee: movss xmm5, dword ptr [r15 + 0xd8] */
L_1803fe4ee_0:;
L_1803fe4ee_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xd8))));
L_1803fe4ee_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe4ee_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe4ee_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe4ee_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe4ee_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe4ee_7:;
/* 1803fe4f7: subss xmm6, xmm0 */
L_1803fe4f7_0:;
L_1803fe4f7_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe4f7_2:;
/* 1803fe4fb: movaps xmm0, xmm5 */
L_1803fe4fb_0:;
L_1803fe4fb_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe4fb_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe4fb_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe4fb_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe4fb_5:;
/* 1803fe4fe: mulss xmm0, xmm8 */
L_1803fe4fe_0:;
L_1803fe4fe_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe4fe_2:;
/* 1803fe503: movss xmm8, dword ptr [r15 + 0x18] */
L_1803fe503_0:;
L_1803fe503_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x18))));
L_1803fe503_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe503_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe503_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe503_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe503_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe503_7:;
/* 1803fe509: addss xmm1, xmm7 */
L_1803fe509_0:;
L_1803fe509_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fe509_2:;
/* 1803fe50d: movss xmm7, dword ptr [r14 + 0x14] */
L_1803fe50d_0:;
L_1803fe50d_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x14))));
L_1803fe50d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe50d_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fe50d_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe50d_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe50d_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe50d_7:;
/* 1803fe513: mulss xmm3, xmm7 */
L_1803fe513_0:;
L_1803fe513_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe513_2:;
/* 1803fe517: mulss xmm5, xmm7 */
L_1803fe517_0:;
L_1803fe517_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe517_2:;
/* 1803fe51b: movaps xmm7, xmm8 */
L_1803fe51b_0:;
L_1803fe51b_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fe51b_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fe51b_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fe51b_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fe51b_5:;
return UINT64_C(0x1803fe51f);
}
uint64_t b_1803fe4ab(CPU*s){
/* 1803fe4ab: mulss xmm2, xmm1 */
L_1803fe4ab_0:;
L_1803fe4ab_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe4ab_2:;
/* 1803fe4af: movss xmm1, dword ptr [r15 + 0x58] */
L_1803fe4af_0:;
L_1803fe4af_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x58))));
L_1803fe4af_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe4af_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe4af_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe4af_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe4af_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe4af_7:;
/* 1803fe4b5: movaps xmm6, xmm1 */
L_1803fe4b5_0:;
L_1803fe4b5_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fe4b5_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fe4b5_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fe4b5_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fe4b5_5:;
/* 1803fe4b8: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fe4b8_0:;
L_1803fe4b8_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fe4b8_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe4b8_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe4b8_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe4b8_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe4b8_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe4b8_7:;
/* 1803fe4be: mulss xmm1, xmm3 */
L_1803fe4be_0:;
L_1803fe4be_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe4be_2:;
/* 1803fe4c2: movss xmm8, dword ptr [r14 + 0x10] */
L_1803fe4c2_0:;
L_1803fe4c2_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fe4c2_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe4c2_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe4c2_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe4c2_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe4c2_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe4c2_7:;
/* 1803fe4c8: subss xmm4, xmm0 */
L_1803fe4c8_0:;
L_1803fe4c8_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe4c8_2:;
/* 1803fe4cc: movaps xmm0, xmm7 */
L_1803fe4cc_0:;
L_1803fe4cc_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fe4cc_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fe4cc_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fe4cc_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fe4cc_5:;
/* 1803fe4cf: mulss xmm0, xmm3 */
L_1803fe4cf_0:;
L_1803fe4cf_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe4cf_2:;
/* 1803fe4d3: movaps xmm3, xmm9 */
L_1803fe4d3_0:;
L_1803fe4d3_1:;
wr(s->r,4800,4,rd(s->r,5184,4));
L_1803fe4d3_2:;
wr(s->r,4804,4,rd(s->r,5188,4));
L_1803fe4d3_3:;
wr(s->r,4808,4,rd(s->r,5192,4));
L_1803fe4d3_4:;
wr(s->r,4812,4,rd(s->r,5196,4));
L_1803fe4d3_5:;
/* 1803fe4d7: mulss xmm9, xmm8 */
L_1803fe4d7_0:;
L_1803fe4d7_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe4d7_2:;
/* 1803fe4dc: addss xmm2, xmm5 */
L_1803fe4dc_0:;
L_1803fe4dc_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe4dc_2:;
/* 1803fe4e0: movss xmm5, dword ptr [r14 + 8] */
L_1803fe4e0_0:;
L_1803fe4e0_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fe4e0_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe4e0_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe4e0_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe4e0_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe4e0_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe4e0_7:;
/* 1803fe4e6: mulss xmm6, xmm5 */
L_1803fe4e6_0:;
L_1803fe4e6_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe4e6_2:;
/* 1803fe4ea: mulss xmm7, xmm5 */
L_1803fe4ea_0:;
L_1803fe4ea_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe4ea_2:;
/* 1803fe4ee: movss xmm5, dword ptr [r15 + 0xd8] */
L_1803fe4ee_0:;
L_1803fe4ee_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xd8))));
L_1803fe4ee_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe4ee_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe4ee_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe4ee_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe4ee_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe4ee_7:;
/* 1803fe4f7: subss xmm6, xmm0 */
L_1803fe4f7_0:;
L_1803fe4f7_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe4f7_2:;
/* 1803fe4fb: movaps xmm0, xmm5 */
L_1803fe4fb_0:;
L_1803fe4fb_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe4fb_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe4fb_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe4fb_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe4fb_5:;
/* 1803fe4fe: mulss xmm0, xmm8 */
L_1803fe4fe_0:;
L_1803fe4fe_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe4fe_2:;
/* 1803fe503: movss xmm8, dword ptr [r15 + 0x18] */
L_1803fe503_0:;
L_1803fe503_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x18))));
L_1803fe503_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe503_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe503_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe503_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe503_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe503_7:;
/* 1803fe509: addss xmm1, xmm7 */
L_1803fe509_0:;
L_1803fe509_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fe509_2:;
/* 1803fe50d: movss xmm7, dword ptr [r14 + 0x14] */
L_1803fe50d_0:;
L_1803fe50d_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x14))));
L_1803fe50d_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe50d_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fe50d_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe50d_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe50d_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe50d_7:;
/* 1803fe513: mulss xmm3, xmm7 */
L_1803fe513_0:;
L_1803fe513_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe513_2:;
/* 1803fe517: mulss xmm5, xmm7 */
L_1803fe517_0:;
L_1803fe517_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe517_2:;
/* 1803fe51b: movaps xmm7, xmm8 */
L_1803fe51b_0:;
L_1803fe51b_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fe51b_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fe51b_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fe51b_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fe51b_5:;
/* 1803fe51f: subss xmm0, xmm3 */
L_1803fe51f_0:;
L_1803fe51f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe51f_2:;
/* 1803fe523: movaps xmm3, xmm4 */
L_1803fe523_0:;
L_1803fe523_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fe523_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fe523_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fe523_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fe523_5:;
/* 1803fe526: addss xmm5, xmm9 */
L_1803fe526_0:;
L_1803fe526_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe526_2:;
/* 1803fe52b: movss xmm9, dword ptr [r15 + 0xe4] */
L_1803fe52b_0:;
L_1803fe52b_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xe4))));
L_1803fe52b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe52b_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803fe52b_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe52b_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe52b_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe52b_7:;
/* 1803fe534: addss xmm3, xmm0 */
L_1803fe534_0:;
L_1803fe534_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe534_2:;
/* 1803fe538: subss xmm4, xmm0 */
L_1803fe538_0:;
L_1803fe538_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe538_2:;
/* 1803fe53c: movaps xmm0, xmm2 */
L_1803fe53c_0:;
L_1803fe53c_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fe53c_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fe53c_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fe53c_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fe53c_5:;
return UINT64_C(0x1803fe53f);
}
uint64_t b_1803fe51f(CPU*s){
/* 1803fe51f: subss xmm0, xmm3 */
L_1803fe51f_0:;
L_1803fe51f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe51f_2:;
/* 1803fe523: movaps xmm3, xmm4 */
L_1803fe523_0:;
L_1803fe523_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fe523_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fe523_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fe523_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fe523_5:;
/* 1803fe526: addss xmm5, xmm9 */
L_1803fe526_0:;
L_1803fe526_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe526_2:;
/* 1803fe52b: movss xmm9, dword ptr [r15 + 0xe4] */
L_1803fe52b_0:;
L_1803fe52b_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xe4))));
L_1803fe52b_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe52b_3:;
wr(s->r,5184,4,rd(s->u,32,4));
L_1803fe52b_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe52b_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe52b_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe52b_7:;
/* 1803fe534: addss xmm3, xmm0 */
L_1803fe534_0:;
L_1803fe534_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe534_2:;
/* 1803fe538: subss xmm4, xmm0 */
L_1803fe538_0:;
L_1803fe538_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe538_2:;
/* 1803fe53c: movaps xmm0, xmm2 */
L_1803fe53c_0:;
L_1803fe53c_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fe53c_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fe53c_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fe53c_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fe53c_5:;
/* 1803fe53f: subss xmm2, xmm5 */
L_1803fe53f_0:;
L_1803fe53f_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fe53f_2:;
/* 1803fe543: addss xmm7, xmm6 */
L_1803fe543_0:;
L_1803fe543_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fe543_2:;
/* 1803fe547: addss xmm0, xmm5 */
L_1803fe547_0:;
L_1803fe547_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe547_2:;
/* 1803fe54b: subss xmm8, xmm6 */
L_1803fe54b_0:;
L_1803fe54b_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fe54b_2:;
/* 1803fe550: movss xmm6, dword ptr [r15 + 0x1c] */
L_1803fe550_0:;
L_1803fe550_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x1c))));
L_1803fe550_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe550_3:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803fe550_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe550_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe550_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe550_7:;
/* 1803fe556: movaps xmm5, xmm6 */
L_1803fe556_0:;
L_1803fe556_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fe556_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fe556_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fe556_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fe556_5:;
/* 1803fe559: subss xmm6, xmm1 */
L_1803fe559_0:;
L_1803fe559_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe559_2:;
/* 1803fe55d: lea r14, [r14 + rax*4] */
L_1803fe55d_0:;
L_1803fe55d_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fe55d_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fe55d_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fe55d_4:;
/* 1803fe561: addss xmm5, xmm1 */
L_1803fe561_0:;
L_1803fe561_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe561_2:;
/* 1803fe565: movaps xmm1, xmm7 */
L_1803fe565_0:;
L_1803fe565_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fe565_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fe565_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fe565_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fe565_5:;
/* 1803fe568: subss xmm7, xmm3 */
L_1803fe568_0:;
L_1803fe568_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe568_2:;
/* 1803fe56c: movss dword ptr [r15 + 0x98], xmm7 */
L_1803fe56c_0:;
L_1803fe56c_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x98))));
L_1803fe56c_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803fe56c_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe56c_4:;
/* 1803fe575: movss xmm7, dword ptr [r15 + 0x64] */
L_1803fe575_0:;
L_1803fe575_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x64))));
L_1803fe575_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe575_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fe575_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe575_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe575_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe575_7:;
/* 1803fe57b: addss xmm1, xmm3 */
L_1803fe57b_0:;
L_1803fe57b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe57b_2:;
/* 1803fe57f: movss dword ptr [r15 + 0x18], xmm1 */
L_1803fe57f_0:;
L_1803fe57f_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x18))));
L_1803fe57f_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803fe57f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe57f_4:;
/* 1803fe585: movaps xmm1, xmm5 */
L_1803fe585_0:;
L_1803fe585_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fe585_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fe585_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fe585_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fe585_5:;
/* 1803fe588: subss xmm5, xmm0 */
L_1803fe588_0:;
L_1803fe588_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe588_2:;
/* 1803fe58c: movss dword ptr [r15 + 0x9c], xmm5 */
L_1803fe58c_0:;
L_1803fe58c_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x9c))));
L_1803fe58c_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803fe58c_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe58c_4:;
/* 1803fe595: movss xmm5, dword ptr [r15 + 0xa4] */
L_1803fe595_0:;
L_1803fe595_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xa4))));
L_1803fe595_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe595_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fe595_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe595_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe595_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe595_7:;
/* 1803fe59e: addss xmm1, xmm0 */
L_1803fe59e_0:;
L_1803fe59e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe59e_2:;
/* 1803fe5a2: movss dword ptr [r15 + 0x1c], xmm1 */
L_1803fe5a2_0:;
L_1803fe5a2_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x1c))));
L_1803fe5a2_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803fe5a2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe5a2_4:;
/* 1803fe5a8: movaps xmm0, xmm8 */
L_1803fe5a8_0:;
L_1803fe5a8_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fe5a8_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fe5a8_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fe5a8_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fe5a8_5:;
/* 1803fe5ac: subss xmm8, xmm2 */
L_1803fe5ac_0:;
L_1803fe5ac_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe5ac_2:;
/* 1803fe5b1: movss dword ptr [r15 + 0xd8], xmm8 */
L_1803fe5b1_0:;
L_1803fe5b1_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xd8))));
L_1803fe5b1_2:;
wr(s->u,32,4,rd(s->r,5120,4));
L_1803fe5b1_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe5b1_4:;
/* 1803fe5ba: addss xmm0, xmm2 */
L_1803fe5ba_0:;
L_1803fe5ba_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fe5ba_2:;
return UINT64_C(0x1803fe5be);
}
uint64_t b_1803fe53f(CPU*s){
/* 1803fe53f: subss xmm2, xmm5 */
L_1803fe53f_0:;
L_1803fe53f_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fe53f_2:;
/* 1803fe543: addss xmm7, xmm6 */
L_1803fe543_0:;
L_1803fe543_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fe543_2:;
/* 1803fe547: addss xmm0, xmm5 */
L_1803fe547_0:;
L_1803fe547_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe547_2:;
/* 1803fe54b: subss xmm8, xmm6 */
L_1803fe54b_0:;
L_1803fe54b_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fe54b_2:;
/* 1803fe550: movss xmm6, dword ptr [r15 + 0x1c] */
L_1803fe550_0:;
L_1803fe550_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x1c))));
L_1803fe550_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe550_3:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803fe550_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe550_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe550_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe550_7:;
/* 1803fe556: movaps xmm5, xmm6 */
L_1803fe556_0:;
L_1803fe556_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fe556_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fe556_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fe556_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fe556_5:;
/* 1803fe559: subss xmm6, xmm1 */
L_1803fe559_0:;
L_1803fe559_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe559_2:;
/* 1803fe55d: lea r14, [r14 + rax*4] */
L_1803fe55d_0:;
L_1803fe55d_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fe55d_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fe55d_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fe55d_4:;
/* 1803fe561: addss xmm5, xmm1 */
L_1803fe561_0:;
L_1803fe561_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe561_2:;
/* 1803fe565: movaps xmm1, xmm7 */
L_1803fe565_0:;
L_1803fe565_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fe565_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fe565_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fe565_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fe565_5:;
/* 1803fe568: subss xmm7, xmm3 */
L_1803fe568_0:;
L_1803fe568_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe568_2:;
/* 1803fe56c: movss dword ptr [r15 + 0x98], xmm7 */
L_1803fe56c_0:;
L_1803fe56c_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x98))));
L_1803fe56c_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803fe56c_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe56c_4:;
/* 1803fe575: movss xmm7, dword ptr [r15 + 0x64] */
L_1803fe575_0:;
L_1803fe575_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x64))));
L_1803fe575_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe575_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fe575_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe575_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe575_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe575_7:;
/* 1803fe57b: addss xmm1, xmm3 */
L_1803fe57b_0:;
L_1803fe57b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe57b_2:;
/* 1803fe57f: movss dword ptr [r15 + 0x18], xmm1 */
L_1803fe57f_0:;
L_1803fe57f_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x18))));
L_1803fe57f_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803fe57f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe57f_4:;
/* 1803fe585: movaps xmm1, xmm5 */
L_1803fe585_0:;
L_1803fe585_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fe585_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fe585_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fe585_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fe585_5:;
/* 1803fe588: subss xmm5, xmm0 */
L_1803fe588_0:;
L_1803fe588_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe588_2:;
/* 1803fe58c: movss dword ptr [r15 + 0x9c], xmm5 */
L_1803fe58c_0:;
L_1803fe58c_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0x9c))));
L_1803fe58c_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803fe58c_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe58c_4:;
/* 1803fe595: movss xmm5, dword ptr [r15 + 0xa4] */
L_1803fe595_0:;
L_1803fe595_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xa4))));
L_1803fe595_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe595_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fe595_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe595_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe595_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe595_7:;
/* 1803fe59e: addss xmm1, xmm0 */
L_1803fe59e_0:;
L_1803fe59e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe59e_2:;
/* 1803fe5a2: movss dword ptr [r15 + 0x1c], xmm1 */
L_1803fe5a2_0:;
L_1803fe5a2_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x1c))));
L_1803fe5a2_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803fe5a2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe5a2_4:;
/* 1803fe5a8: movaps xmm0, xmm8 */
L_1803fe5a8_0:;
L_1803fe5a8_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fe5a8_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fe5a8_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fe5a8_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fe5a8_5:;
/* 1803fe5ac: subss xmm8, xmm2 */
L_1803fe5ac_0:;
L_1803fe5ac_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe5ac_2:;
/* 1803fe5b1: movss dword ptr [r15 + 0xd8], xmm8 */
L_1803fe5b1_0:;
L_1803fe5b1_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xd8))));
L_1803fe5b1_2:;
wr(s->u,32,4,rd(s->r,5120,4));
L_1803fe5b1_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe5b1_4:;
/* 1803fe5ba: addss xmm0, xmm2 */
L_1803fe5ba_0:;
L_1803fe5ba_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fe5ba_2:;
/* 1803fe5be: movss xmm2, dword ptr [r15 + 0xa0] */
L_1803fe5be_0:;
L_1803fe5be_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xa0))));
L_1803fe5be_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe5be_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fe5be_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe5be_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe5be_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe5be_7:;
/* 1803fe5c7: movss dword ptr [r15 + 0x58], xmm0 */
L_1803fe5c7_0:;
L_1803fe5c7_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x58))));
L_1803fe5c7_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fe5c7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe5c7_4:;
/* 1803fe5cd: movaps xmm0, xmm6 */
L_1803fe5cd_0:;
L_1803fe5cd_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fe5cd_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fe5cd_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fe5cd_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fe5cd_5:;
/* 1803fe5d0: addss xmm6, xmm4 */
L_1803fe5d0_0:;
L_1803fe5d0_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fe5d0_2:;
/* 1803fe5d4: movss dword ptr [r15 + 0xdc], xmm6 */
L_1803fe5d4_0:;
L_1803fe5d4_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xdc))));
L_1803fe5d4_2:;
wr(s->u,32,4,rd(s->r,4992,4));
L_1803fe5d4_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe5d4_4:;
/* 1803fe5dd: subss xmm0, xmm4 */
L_1803fe5dd_0:;
L_1803fe5dd_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fe5dd_2:;
/* 1803fe5e1: movss dword ptr [r15 + 0x5c], xmm0 */
L_1803fe5e1_0:;
L_1803fe5e1_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x5c))));
L_1803fe5e1_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fe5e1_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe5e1_4:;
return UINT64_C(0x1803fe5e7);
}
uint64_t b_1803fe5be(CPU*s){
/* 1803fe5be: movss xmm2, dword ptr [r15 + 0xa0] */
L_1803fe5be_0:;
L_1803fe5be_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xa0))));
L_1803fe5be_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe5be_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fe5be_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe5be_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe5be_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe5be_7:;
/* 1803fe5c7: movss dword ptr [r15 + 0x58], xmm0 */
L_1803fe5c7_0:;
L_1803fe5c7_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x58))));
L_1803fe5c7_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe5c7_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe5c7_4:;
/* 1803fe5cd: movaps xmm0, xmm6 */
L_1803fe5cd_0:;
L_1803fe5cd_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fe5cd_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fe5cd_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fe5cd_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fe5cd_5:;
/* 1803fe5d0: addss xmm6, xmm4 */
L_1803fe5d0_0:;
L_1803fe5d0_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fe5d0_2:;
/* 1803fe5d4: movss dword ptr [r15 + 0xdc], xmm6 */
L_1803fe5d4_0:;
L_1803fe5d4_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xdc))));
L_1803fe5d4_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803fe5d4_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe5d4_4:;
/* 1803fe5dd: subss xmm0, xmm4 */
L_1803fe5dd_0:;
L_1803fe5dd_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fe5dd_2:;
/* 1803fe5e1: movss dword ptr [r15 + 0x5c], xmm0 */
L_1803fe5e1_0:;
L_1803fe5e1_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x5c))));
L_1803fe5e1_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe5e1_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe5e1_4:;
/* 1803fe5e7: movaps xmm4, xmm2 */
L_1803fe5e7_0:;
L_1803fe5e7_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fe5e7_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fe5e7_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fe5e7_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fe5e7_5:;
/* 1803fe5ea: movaps xmm0, xmm5 */
L_1803fe5ea_0:;
L_1803fe5ea_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe5ea_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe5ea_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe5ea_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe5ea_5:;
/* 1803fe5ed: movss xmm3, dword ptr [r14] */
L_1803fe5ed_0:;
L_1803fe5ed_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fe5ed_2:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe5ed_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe5ed_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe5ed_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe5ed_6:;
/* 1803fe5f2: mulss xmm4, xmm3 */
L_1803fe5f2_0:;
L_1803fe5f2_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe5f2_2:;
/* 1803fe5f6: mulss xmm5, xmm3 */
L_1803fe5f6_0:;
L_1803fe5f6_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe5f6_2:;
/* 1803fe5fa: movss xmm1, dword ptr [r14 + 4] */
L_1803fe5fa_0:;
L_1803fe5fa_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fe5fa_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe5fa_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe5fa_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe5fa_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe5fa_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe5fa_7:;
/* 1803fe600: mulss xmm0, xmm1 */
L_1803fe600_0:;
L_1803fe600_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe600_2:;
/* 1803fe604: mulss xmm2, xmm1 */
L_1803fe604_0:;
L_1803fe604_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe604_2:;
/* 1803fe608: movss xmm1, dword ptr [r15 + 0x60] */
L_1803fe608_0:;
L_1803fe608_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x60))));
L_1803fe608_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe608_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe608_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe608_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe608_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe608_7:;
/* 1803fe60e: movaps xmm6, xmm1 */
L_1803fe60e_0:;
L_1803fe60e_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fe60e_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fe60e_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fe60e_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fe60e_5:;
/* 1803fe611: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fe611_0:;
L_1803fe611_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fe611_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe611_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe611_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe611_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe611_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe611_7:;
/* 1803fe617: mulss xmm1, xmm3 */
L_1803fe617_0:;
L_1803fe617_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe617_2:;
/* 1803fe61b: movss xmm8, dword ptr [r14 + 0x10] */
L_1803fe61b_0:;
L_1803fe61b_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fe61b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe61b_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe61b_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe61b_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe61b_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe61b_7:;
/* 1803fe621: subss xmm4, xmm0 */
L_1803fe621_0:;
L_1803fe621_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe621_2:;
/* 1803fe625: movaps xmm0, xmm7 */
L_1803fe625_0:;
L_1803fe625_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fe625_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fe625_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fe625_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fe625_5:;
/* 1803fe628: mulss xmm0, xmm3 */
L_1803fe628_0:;
L_1803fe628_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe628_2:;
/* 1803fe62c: movaps xmm3, xmm9 */
L_1803fe62c_0:;
L_1803fe62c_1:;
wr(s->r,4800,4,rd(s->r,5184,4));
L_1803fe62c_2:;
wr(s->r,4804,4,rd(s->r,5188,4));
L_1803fe62c_3:;
wr(s->r,4808,4,rd(s->r,5192,4));
L_1803fe62c_4:;
wr(s->r,4812,4,rd(s->r,5196,4));
L_1803fe62c_5:;
/* 1803fe630: mulss xmm9, xmm8 */
L_1803fe630_0:;
L_1803fe630_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe630_2:;
/* 1803fe635: addss xmm2, xmm5 */
L_1803fe635_0:;
L_1803fe635_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe635_2:;
/* 1803fe639: movss xmm5, dword ptr [r14 + 8] */
L_1803fe639_0:;
L_1803fe639_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fe639_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe639_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe639_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe639_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe639_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe639_7:;
/* 1803fe63f: mulss xmm6, xmm5 */
L_1803fe63f_0:;
L_1803fe63f_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe63f_2:;
/* 1803fe643: mulss xmm7, xmm5 */
L_1803fe643_0:;
L_1803fe643_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe643_2:;
/* 1803fe647: movss xmm5, dword ptr [r15 + 0xe0] */
L_1803fe647_0:;
L_1803fe647_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xe0))));
L_1803fe647_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe647_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe647_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe647_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe647_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe647_7:;
/* 1803fe650: subss xmm6, xmm0 */
L_1803fe650_0:;
L_1803fe650_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe650_2:;
/* 1803fe654: movaps xmm0, xmm5 */
L_1803fe654_0:;
L_1803fe654_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe654_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe654_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe654_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe654_5:;
return UINT64_C(0x1803fe657);
}
uint64_t b_1803fe5e7(CPU*s){
/* 1803fe5e7: movaps xmm4, xmm2 */
L_1803fe5e7_0:;
L_1803fe5e7_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fe5e7_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fe5e7_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fe5e7_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fe5e7_5:;
/* 1803fe5ea: movaps xmm0, xmm5 */
L_1803fe5ea_0:;
L_1803fe5ea_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe5ea_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe5ea_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe5ea_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe5ea_5:;
/* 1803fe5ed: movss xmm3, dword ptr [r14] */
L_1803fe5ed_0:;
L_1803fe5ed_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fe5ed_2:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe5ed_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe5ed_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe5ed_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe5ed_6:;
/* 1803fe5f2: mulss xmm4, xmm3 */
L_1803fe5f2_0:;
L_1803fe5f2_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe5f2_2:;
/* 1803fe5f6: mulss xmm5, xmm3 */
L_1803fe5f6_0:;
L_1803fe5f6_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe5f6_2:;
/* 1803fe5fa: movss xmm1, dword ptr [r14 + 4] */
L_1803fe5fa_0:;
L_1803fe5fa_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fe5fa_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe5fa_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe5fa_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe5fa_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe5fa_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe5fa_7:;
/* 1803fe600: mulss xmm0, xmm1 */
L_1803fe600_0:;
L_1803fe600_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe600_2:;
/* 1803fe604: mulss xmm2, xmm1 */
L_1803fe604_0:;
L_1803fe604_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe604_2:;
/* 1803fe608: movss xmm1, dword ptr [r15 + 0x60] */
L_1803fe608_0:;
L_1803fe608_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x60))));
L_1803fe608_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe608_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe608_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe608_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe608_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe608_7:;
/* 1803fe60e: movaps xmm6, xmm1 */
L_1803fe60e_0:;
L_1803fe60e_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fe60e_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fe60e_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fe60e_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fe60e_5:;
/* 1803fe611: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fe611_0:;
L_1803fe611_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fe611_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe611_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe611_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe611_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe611_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe611_7:;
/* 1803fe617: mulss xmm1, xmm3 */
L_1803fe617_0:;
L_1803fe617_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe617_2:;
/* 1803fe61b: movss xmm8, dword ptr [r14 + 0x10] */
L_1803fe61b_0:;
L_1803fe61b_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fe61b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe61b_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe61b_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe61b_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe61b_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe61b_7:;
/* 1803fe621: subss xmm4, xmm0 */
L_1803fe621_0:;
L_1803fe621_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe621_2:;
/* 1803fe625: movaps xmm0, xmm7 */
L_1803fe625_0:;
L_1803fe625_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fe625_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fe625_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fe625_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fe625_5:;
/* 1803fe628: mulss xmm0, xmm3 */
L_1803fe628_0:;
L_1803fe628_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe628_2:;
/* 1803fe62c: movaps xmm3, xmm9 */
L_1803fe62c_0:;
L_1803fe62c_1:;
wr(s->r,4800,4,rd(s->r,5184,4));
L_1803fe62c_2:;
wr(s->r,4804,4,rd(s->r,5188,4));
L_1803fe62c_3:;
wr(s->r,4808,4,rd(s->r,5192,4));
L_1803fe62c_4:;
wr(s->r,4812,4,rd(s->r,5196,4));
L_1803fe62c_5:;
/* 1803fe630: mulss xmm9, xmm8 */
L_1803fe630_0:;
L_1803fe630_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe630_2:;
/* 1803fe635: addss xmm2, xmm5 */
L_1803fe635_0:;
L_1803fe635_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe635_2:;
/* 1803fe639: movss xmm5, dword ptr [r14 + 8] */
L_1803fe639_0:;
L_1803fe639_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fe639_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe639_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe639_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe639_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe639_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe639_7:;
/* 1803fe63f: mulss xmm6, xmm5 */
L_1803fe63f_0:;
L_1803fe63f_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe63f_2:;
/* 1803fe643: mulss xmm7, xmm5 */
L_1803fe643_0:;
L_1803fe643_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe643_2:;
/* 1803fe647: movss xmm5, dword ptr [r15 + 0xe0] */
L_1803fe647_0:;
L_1803fe647_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xe0))));
L_1803fe647_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe647_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe647_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe647_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe647_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe647_7:;
/* 1803fe650: subss xmm6, xmm0 */
L_1803fe650_0:;
L_1803fe650_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe650_2:;
/* 1803fe654: movaps xmm0, xmm5 */
L_1803fe654_0:;
L_1803fe654_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe654_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe654_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe654_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe654_5:;
/* 1803fe657: mulss xmm0, xmm8 */
L_1803fe657_0:;
L_1803fe657_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe657_2:;
/* 1803fe65c: movss xmm8, dword ptr [r15 + 0x20] */
L_1803fe65c_0:;
L_1803fe65c_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x20))));
L_1803fe65c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe65c_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe65c_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe65c_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe65c_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe65c_7:;
/* 1803fe662: addss xmm1, xmm7 */
L_1803fe662_0:;
L_1803fe662_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fe662_2:;
/* 1803fe666: movss xmm7, dword ptr [r14 + 0x14] */
L_1803fe666_0:;
L_1803fe666_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x14))));
L_1803fe666_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe666_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fe666_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe666_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe666_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe666_7:;
/* 1803fe66c: mulss xmm3, xmm7 */
L_1803fe66c_0:;
L_1803fe66c_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe66c_2:;
/* 1803fe670: mulss xmm5, xmm7 */
L_1803fe670_0:;
L_1803fe670_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe670_2:;
/* 1803fe674: movaps xmm7, xmm8 */
L_1803fe674_0:;
L_1803fe674_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fe674_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fe674_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fe674_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fe674_5:;
return UINT64_C(0x1803fe678);
}
uint64_t b_1803fe657(CPU*s){
/* 1803fe657: mulss xmm0, xmm8 */
L_1803fe657_0:;
L_1803fe657_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe657_2:;
/* 1803fe65c: movss xmm8, dword ptr [r15 + 0x20] */
L_1803fe65c_0:;
L_1803fe65c_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x20))));
L_1803fe65c_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe65c_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803fe65c_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe65c_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe65c_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe65c_7:;
/* 1803fe662: addss xmm1, xmm7 */
L_1803fe662_0:;
L_1803fe662_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fe662_2:;
/* 1803fe666: movss xmm7, dword ptr [r14 + 0x14] */
L_1803fe666_0:;
L_1803fe666_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x14))));
L_1803fe666_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe666_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fe666_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe666_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe666_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe666_7:;
/* 1803fe66c: mulss xmm3, xmm7 */
L_1803fe66c_0:;
L_1803fe66c_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe66c_2:;
/* 1803fe670: mulss xmm5, xmm7 */
L_1803fe670_0:;
L_1803fe670_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe670_2:;
/* 1803fe674: movaps xmm7, xmm8 */
L_1803fe674_0:;
L_1803fe674_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fe674_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fe674_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fe674_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fe674_5:;
/* 1803fe678: subss xmm0, xmm3 */
L_1803fe678_0:;
L_1803fe678_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe678_2:;
/* 1803fe67c: movaps xmm3, xmm4 */
L_1803fe67c_0:;
L_1803fe67c_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fe67c_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fe67c_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fe67c_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fe67c_5:;
/* 1803fe67f: addss xmm5, xmm9 */
L_1803fe67f_0:;
L_1803fe67f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe67f_2:;
/* 1803fe684: movss xmm9, dword ptr [r15 + 0xec] */
L_1803fe684_0:;
L_1803fe684_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xec))));
L_1803fe684_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe684_3:;
wr(s->r,5184,4,rd(s->u,32,4));
L_1803fe684_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe684_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe684_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe684_7:;
/* 1803fe68d: addss xmm3, xmm0 */
L_1803fe68d_0:;
L_1803fe68d_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe68d_2:;
/* 1803fe691: subss xmm4, xmm0 */
L_1803fe691_0:;
L_1803fe691_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe691_2:;
/* 1803fe695: movaps xmm0, xmm2 */
L_1803fe695_0:;
L_1803fe695_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fe695_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fe695_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fe695_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fe695_5:;
/* 1803fe698: subss xmm2, xmm5 */
L_1803fe698_0:;
L_1803fe698_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fe698_2:;
/* 1803fe69c: addss xmm7, xmm6 */
L_1803fe69c_0:;
L_1803fe69c_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fe69c_2:;
/* 1803fe6a0: addss xmm0, xmm5 */
L_1803fe6a0_0:;
L_1803fe6a0_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe6a0_2:;
/* 1803fe6a4: subss xmm8, xmm6 */
L_1803fe6a4_0:;
L_1803fe6a4_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fe6a4_2:;
/* 1803fe6a9: movss xmm6, dword ptr [r15 + 0x24] */
L_1803fe6a9_0:;
L_1803fe6a9_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x24))));
L_1803fe6a9_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe6a9_3:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803fe6a9_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe6a9_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe6a9_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe6a9_7:;
/* 1803fe6af: movaps xmm5, xmm6 */
L_1803fe6af_0:;
L_1803fe6af_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fe6af_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fe6af_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fe6af_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fe6af_5:;
/* 1803fe6b2: subss xmm6, xmm1 */
L_1803fe6b2_0:;
L_1803fe6b2_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe6b2_2:;
/* 1803fe6b6: lea r14, [r14 + rax*4] */
L_1803fe6b6_0:;
L_1803fe6b6_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fe6b6_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fe6b6_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fe6b6_4:;
/* 1803fe6ba: addss xmm5, xmm1 */
L_1803fe6ba_0:;
L_1803fe6ba_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe6ba_2:;
/* 1803fe6be: movaps xmm1, xmm7 */
L_1803fe6be_0:;
L_1803fe6be_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fe6be_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fe6be_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fe6be_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fe6be_5:;
/* 1803fe6c1: subss xmm7, xmm3 */
L_1803fe6c1_0:;
L_1803fe6c1_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe6c1_2:;
/* 1803fe6c5: movss dword ptr [r15 + 0xa0], xmm7 */
L_1803fe6c5_0:;
L_1803fe6c5_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xa0))));
L_1803fe6c5_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803fe6c5_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe6c5_4:;
/* 1803fe6ce: movss xmm7, dword ptr [r15 + 0x6c] */
L_1803fe6ce_0:;
L_1803fe6ce_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x6c))));
L_1803fe6ce_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe6ce_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fe6ce_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe6ce_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe6ce_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe6ce_7:;
/* 1803fe6d4: addss xmm1, xmm3 */
L_1803fe6d4_0:;
L_1803fe6d4_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe6d4_2:;
/* 1803fe6d8: movss dword ptr [r15 + 0x20], xmm1 */
L_1803fe6d8_0:;
L_1803fe6d8_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x20))));
L_1803fe6d8_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803fe6d8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe6d8_4:;
/* 1803fe6de: movaps xmm1, xmm5 */
L_1803fe6de_0:;
L_1803fe6de_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fe6de_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fe6de_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fe6de_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fe6de_5:;
/* 1803fe6e1: subss xmm5, xmm0 */
L_1803fe6e1_0:;
L_1803fe6e1_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe6e1_2:;
/* 1803fe6e5: movss dword ptr [r15 + 0xa4], xmm5 */
L_1803fe6e5_0:;
L_1803fe6e5_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xa4))));
L_1803fe6e5_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803fe6e5_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe6e5_4:;
return UINT64_C(0x1803fe6ee);
}
uint64_t b_1803fe678(CPU*s){
/* 1803fe678: subss xmm0, xmm3 */
L_1803fe678_0:;
L_1803fe678_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe678_2:;
/* 1803fe67c: movaps xmm3, xmm4 */
L_1803fe67c_0:;
L_1803fe67c_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fe67c_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fe67c_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fe67c_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fe67c_5:;
/* 1803fe67f: addss xmm5, xmm9 */
L_1803fe67f_0:;
L_1803fe67f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe67f_2:;
/* 1803fe684: movss xmm9, dword ptr [r15 + 0xec] */
L_1803fe684_0:;
L_1803fe684_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xec))));
L_1803fe684_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe684_3:;
wr(s->r,5184,4,rd(s->u,32,4));
L_1803fe684_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe684_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe684_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe684_7:;
/* 1803fe68d: addss xmm3, xmm0 */
L_1803fe68d_0:;
L_1803fe68d_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe68d_2:;
/* 1803fe691: subss xmm4, xmm0 */
L_1803fe691_0:;
L_1803fe691_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe691_2:;
/* 1803fe695: movaps xmm0, xmm2 */
L_1803fe695_0:;
L_1803fe695_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fe695_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fe695_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fe695_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fe695_5:;
/* 1803fe698: subss xmm2, xmm5 */
L_1803fe698_0:;
L_1803fe698_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fe698_2:;
/* 1803fe69c: addss xmm7, xmm6 */
L_1803fe69c_0:;
L_1803fe69c_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fe69c_2:;
/* 1803fe6a0: addss xmm0, xmm5 */
L_1803fe6a0_0:;
L_1803fe6a0_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe6a0_2:;
/* 1803fe6a4: subss xmm8, xmm6 */
L_1803fe6a4_0:;
L_1803fe6a4_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fe6a4_2:;
/* 1803fe6a9: movss xmm6, dword ptr [r15 + 0x24] */
L_1803fe6a9_0:;
L_1803fe6a9_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x24))));
L_1803fe6a9_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe6a9_3:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803fe6a9_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe6a9_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe6a9_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe6a9_7:;
/* 1803fe6af: movaps xmm5, xmm6 */
L_1803fe6af_0:;
L_1803fe6af_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fe6af_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fe6af_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fe6af_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fe6af_5:;
/* 1803fe6b2: subss xmm6, xmm1 */
L_1803fe6b2_0:;
L_1803fe6b2_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe6b2_2:;
/* 1803fe6b6: lea r14, [r14 + rax*4] */
L_1803fe6b6_0:;
L_1803fe6b6_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fe6b6_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fe6b6_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fe6b6_4:;
/* 1803fe6ba: addss xmm5, xmm1 */
L_1803fe6ba_0:;
L_1803fe6ba_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe6ba_2:;
/* 1803fe6be: movaps xmm1, xmm7 */
L_1803fe6be_0:;
L_1803fe6be_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fe6be_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fe6be_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fe6be_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fe6be_5:;
/* 1803fe6c1: subss xmm7, xmm3 */
L_1803fe6c1_0:;
L_1803fe6c1_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe6c1_2:;
/* 1803fe6c5: movss dword ptr [r15 + 0xa0], xmm7 */
L_1803fe6c5_0:;
L_1803fe6c5_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xa0))));
L_1803fe6c5_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803fe6c5_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe6c5_4:;
/* 1803fe6ce: movss xmm7, dword ptr [r15 + 0x6c] */
L_1803fe6ce_0:;
L_1803fe6ce_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x6c))));
L_1803fe6ce_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe6ce_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fe6ce_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe6ce_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe6ce_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe6ce_7:;
/* 1803fe6d4: addss xmm1, xmm3 */
L_1803fe6d4_0:;
L_1803fe6d4_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe6d4_2:;
/* 1803fe6d8: movss dword ptr [r15 + 0x20], xmm1 */
L_1803fe6d8_0:;
L_1803fe6d8_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x20))));
L_1803fe6d8_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803fe6d8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe6d8_4:;
/* 1803fe6de: movaps xmm1, xmm5 */
L_1803fe6de_0:;
L_1803fe6de_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fe6de_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fe6de_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fe6de_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fe6de_5:;
/* 1803fe6e1: subss xmm5, xmm0 */
L_1803fe6e1_0:;
L_1803fe6e1_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe6e1_2:;
/* 1803fe6e5: movss dword ptr [r15 + 0xa4], xmm5 */
L_1803fe6e5_0:;
L_1803fe6e5_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xa4))));
L_1803fe6e5_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803fe6e5_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe6e5_4:;
/* 1803fe6ee: movss xmm5, dword ptr [r15 + 0xac] */
L_1803fe6ee_0:;
L_1803fe6ee_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xac))));
L_1803fe6ee_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe6ee_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fe6ee_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe6ee_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe6ee_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe6ee_7:;
/* 1803fe6f7: addss xmm1, xmm0 */
L_1803fe6f7_0:;
L_1803fe6f7_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe6f7_2:;
/* 1803fe6fb: movss dword ptr [r15 + 0x24], xmm1 */
L_1803fe6fb_0:;
L_1803fe6fb_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x24))));
L_1803fe6fb_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803fe6fb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe6fb_4:;
/* 1803fe701: movaps xmm0, xmm8 */
L_1803fe701_0:;
L_1803fe701_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fe701_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fe701_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fe701_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fe701_5:;
/* 1803fe705: subss xmm8, xmm2 */
L_1803fe705_0:;
L_1803fe705_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe705_2:;
/* 1803fe70a: movss dword ptr [r15 + 0xe0], xmm8 */
L_1803fe70a_0:;
L_1803fe70a_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xe0))));
L_1803fe70a_2:;
wr(s->u,32,4,rd(s->r,5120,4));
L_1803fe70a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe70a_4:;
/* 1803fe713: addss xmm0, xmm2 */
L_1803fe713_0:;
L_1803fe713_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fe713_2:;
return UINT64_C(0x1803fe717);
}
uint64_t b_1803fe6ee(CPU*s){
/* 1803fe6ee: movss xmm5, dword ptr [r15 + 0xac] */
L_1803fe6ee_0:;
L_1803fe6ee_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xac))));
L_1803fe6ee_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe6ee_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe6ee_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe6ee_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe6ee_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe6ee_7:;
/* 1803fe6f7: addss xmm1, xmm0 */
L_1803fe6f7_0:;
L_1803fe6f7_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe6f7_2:;
/* 1803fe6fb: movss dword ptr [r15 + 0x24], xmm1 */
L_1803fe6fb_0:;
L_1803fe6fb_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x24))));
L_1803fe6fb_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fe6fb_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe6fb_4:;
/* 1803fe701: movaps xmm0, xmm8 */
L_1803fe701_0:;
L_1803fe701_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fe701_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fe701_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fe701_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fe701_5:;
/* 1803fe705: subss xmm8, xmm2 */
L_1803fe705_0:;
L_1803fe705_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe705_2:;
/* 1803fe70a: movss dword ptr [r15 + 0xe0], xmm8 */
L_1803fe70a_0:;
L_1803fe70a_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xe0))));
L_1803fe70a_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fe70a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe70a_4:;
/* 1803fe713: addss xmm0, xmm2 */
L_1803fe713_0:;
L_1803fe713_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fe713_2:;
/* 1803fe717: movss xmm2, dword ptr [r15 + 0xa8] */
L_1803fe717_0:;
L_1803fe717_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xa8))));
L_1803fe717_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe717_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fe717_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe717_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe717_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe717_7:;
/* 1803fe720: movss dword ptr [r15 + 0x60], xmm0 */
L_1803fe720_0:;
L_1803fe720_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x60))));
L_1803fe720_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe720_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe720_4:;
/* 1803fe726: movaps xmm0, xmm6 */
L_1803fe726_0:;
L_1803fe726_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fe726_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fe726_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fe726_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fe726_5:;
/* 1803fe729: addss xmm6, xmm4 */
L_1803fe729_0:;
L_1803fe729_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fe729_2:;
/* 1803fe72d: movss dword ptr [r15 + 0xe4], xmm6 */
L_1803fe72d_0:;
L_1803fe72d_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xe4))));
L_1803fe72d_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803fe72d_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe72d_4:;
/* 1803fe736: subss xmm0, xmm4 */
L_1803fe736_0:;
L_1803fe736_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fe736_2:;
/* 1803fe73a: movss dword ptr [r15 + 0x64], xmm0 */
L_1803fe73a_0:;
L_1803fe73a_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x64))));
L_1803fe73a_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe73a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe73a_4:;
/* 1803fe740: movaps xmm4, xmm2 */
L_1803fe740_0:;
L_1803fe740_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fe740_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fe740_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fe740_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fe740_5:;
/* 1803fe743: movaps xmm0, xmm5 */
L_1803fe743_0:;
L_1803fe743_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe743_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe743_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe743_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe743_5:;
/* 1803fe746: movss xmm3, dword ptr [r14] */
L_1803fe746_0:;
L_1803fe746_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fe746_2:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe746_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe746_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe746_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe746_6:;
/* 1803fe74b: mulss xmm4, xmm3 */
L_1803fe74b_0:;
L_1803fe74b_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe74b_2:;
/* 1803fe74f: mulss xmm5, xmm3 */
L_1803fe74f_0:;
L_1803fe74f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe74f_2:;
/* 1803fe753: movss xmm1, dword ptr [r14 + 4] */
L_1803fe753_0:;
L_1803fe753_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fe753_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe753_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe753_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe753_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe753_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe753_7:;
/* 1803fe759: mulss xmm0, xmm1 */
L_1803fe759_0:;
L_1803fe759_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe759_2:;
/* 1803fe75d: mulss xmm2, xmm1 */
L_1803fe75d_0:;
L_1803fe75d_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe75d_2:;
/* 1803fe761: movss xmm1, dword ptr [r15 + 0x68] */
L_1803fe761_0:;
L_1803fe761_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x68))));
L_1803fe761_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe761_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe761_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe761_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe761_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe761_7:;
/* 1803fe767: movaps xmm6, xmm1 */
L_1803fe767_0:;
L_1803fe767_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fe767_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fe767_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fe767_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fe767_5:;
/* 1803fe76a: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fe76a_0:;
L_1803fe76a_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fe76a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe76a_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe76a_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe76a_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe76a_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe76a_7:;
/* 1803fe770: mulss xmm1, xmm3 */
L_1803fe770_0:;
L_1803fe770_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe770_2:;
/* 1803fe774: movss xmm8, dword ptr [r14 + 0x10] */
L_1803fe774_0:;
L_1803fe774_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fe774_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe774_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe774_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe774_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe774_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe774_7:;
/* 1803fe77a: subss xmm4, xmm0 */
L_1803fe77a_0:;
L_1803fe77a_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe77a_2:;
/* 1803fe77e: movaps xmm0, xmm7 */
L_1803fe77e_0:;
L_1803fe77e_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fe77e_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fe77e_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fe77e_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fe77e_5:;
/* 1803fe781: mulss xmm0, xmm3 */
L_1803fe781_0:;
L_1803fe781_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe781_2:;
/* 1803fe785: movaps xmm3, xmm9 */
L_1803fe785_0:;
L_1803fe785_1:;
wr(s->r,4800,4,rd(s->r,5184,4));
L_1803fe785_2:;
wr(s->r,4804,4,rd(s->r,5188,4));
L_1803fe785_3:;
wr(s->r,4808,4,rd(s->r,5192,4));
L_1803fe785_4:;
wr(s->r,4812,4,rd(s->r,5196,4));
L_1803fe785_5:;
/* 1803fe789: mulss xmm9, xmm8 */
L_1803fe789_0:;
L_1803fe789_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe789_2:;
return UINT64_C(0x1803fe78e);
}
uint64_t b_1803fe717(CPU*s){
/* 1803fe717: movss xmm2, dword ptr [r15 + 0xa8] */
L_1803fe717_0:;
L_1803fe717_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xa8))));
L_1803fe717_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe717_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fe717_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe717_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe717_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe717_7:;
/* 1803fe720: movss dword ptr [r15 + 0x60], xmm0 */
L_1803fe720_0:;
L_1803fe720_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x60))));
L_1803fe720_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe720_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe720_4:;
/* 1803fe726: movaps xmm0, xmm6 */
L_1803fe726_0:;
L_1803fe726_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fe726_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fe726_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fe726_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fe726_5:;
/* 1803fe729: addss xmm6, xmm4 */
L_1803fe729_0:;
L_1803fe729_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fe729_2:;
/* 1803fe72d: movss dword ptr [r15 + 0xe4], xmm6 */
L_1803fe72d_0:;
L_1803fe72d_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xe4))));
L_1803fe72d_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803fe72d_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe72d_4:;
/* 1803fe736: subss xmm0, xmm4 */
L_1803fe736_0:;
L_1803fe736_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fe736_2:;
/* 1803fe73a: movss dword ptr [r15 + 0x64], xmm0 */
L_1803fe73a_0:;
L_1803fe73a_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x64))));
L_1803fe73a_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe73a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe73a_4:;
/* 1803fe740: movaps xmm4, xmm2 */
L_1803fe740_0:;
L_1803fe740_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fe740_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fe740_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fe740_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fe740_5:;
/* 1803fe743: movaps xmm0, xmm5 */
L_1803fe743_0:;
L_1803fe743_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe743_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe743_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe743_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe743_5:;
/* 1803fe746: movss xmm3, dword ptr [r14] */
L_1803fe746_0:;
L_1803fe746_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fe746_2:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe746_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe746_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe746_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe746_6:;
/* 1803fe74b: mulss xmm4, xmm3 */
L_1803fe74b_0:;
L_1803fe74b_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe74b_2:;
/* 1803fe74f: mulss xmm5, xmm3 */
L_1803fe74f_0:;
L_1803fe74f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe74f_2:;
/* 1803fe753: movss xmm1, dword ptr [r14 + 4] */
L_1803fe753_0:;
L_1803fe753_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fe753_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe753_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe753_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe753_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe753_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe753_7:;
/* 1803fe759: mulss xmm0, xmm1 */
L_1803fe759_0:;
L_1803fe759_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe759_2:;
/* 1803fe75d: mulss xmm2, xmm1 */
L_1803fe75d_0:;
L_1803fe75d_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe75d_2:;
/* 1803fe761: movss xmm1, dword ptr [r15 + 0x68] */
L_1803fe761_0:;
L_1803fe761_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x68))));
L_1803fe761_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe761_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe761_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe761_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe761_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe761_7:;
/* 1803fe767: movaps xmm6, xmm1 */
L_1803fe767_0:;
L_1803fe767_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fe767_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fe767_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fe767_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fe767_5:;
/* 1803fe76a: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fe76a_0:;
L_1803fe76a_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fe76a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe76a_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe76a_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe76a_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe76a_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe76a_7:;
/* 1803fe770: mulss xmm1, xmm3 */
L_1803fe770_0:;
L_1803fe770_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe770_2:;
/* 1803fe774: movss xmm8, dword ptr [r14 + 0x10] */
L_1803fe774_0:;
L_1803fe774_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fe774_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe774_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe774_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe774_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe774_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe774_7:;
/* 1803fe77a: subss xmm4, xmm0 */
L_1803fe77a_0:;
L_1803fe77a_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe77a_2:;
/* 1803fe77e: movaps xmm0, xmm7 */
L_1803fe77e_0:;
L_1803fe77e_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fe77e_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fe77e_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fe77e_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fe77e_5:;
/* 1803fe781: mulss xmm0, xmm3 */
L_1803fe781_0:;
L_1803fe781_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe781_2:;
/* 1803fe785: movaps xmm3, xmm9 */
L_1803fe785_0:;
L_1803fe785_1:;
wr(s->r,4800,4,rd(s->r,5184,4));
L_1803fe785_2:;
wr(s->r,4804,4,rd(s->r,5188,4));
L_1803fe785_3:;
wr(s->r,4808,4,rd(s->r,5192,4));
L_1803fe785_4:;
wr(s->r,4812,4,rd(s->r,5196,4));
L_1803fe785_5:;
/* 1803fe789: mulss xmm9, xmm8 */
L_1803fe789_0:;
L_1803fe789_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe789_2:;
/* 1803fe78e: addss xmm2, xmm5 */
L_1803fe78e_0:;
L_1803fe78e_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe78e_2:;
/* 1803fe792: movss xmm5, dword ptr [r14 + 8] */
L_1803fe792_0:;
L_1803fe792_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fe792_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe792_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe792_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe792_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe792_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe792_7:;
/* 1803fe798: mulss xmm6, xmm5 */
L_1803fe798_0:;
L_1803fe798_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe798_2:;
/* 1803fe79c: mulss xmm7, xmm5 */
L_1803fe79c_0:;
L_1803fe79c_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe79c_2:;
/* 1803fe7a0: movss xmm5, dword ptr [r15 + 0xe8] */
L_1803fe7a0_0:;
L_1803fe7a0_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xe8))));
L_1803fe7a0_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe7a0_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe7a0_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe7a0_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe7a0_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe7a0_7:;
/* 1803fe7a9: subss xmm6, xmm0 */
L_1803fe7a9_0:;
L_1803fe7a9_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe7a9_2:;
/* 1803fe7ad: movaps xmm0, xmm5 */
L_1803fe7ad_0:;
L_1803fe7ad_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe7ad_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe7ad_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe7ad_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe7ad_5:;
return UINT64_C(0x1803fe7b0);
}
uint64_t b_1803fe78e(CPU*s){
/* 1803fe78e: addss xmm2, xmm5 */
L_1803fe78e_0:;
L_1803fe78e_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe78e_2:;
/* 1803fe792: movss xmm5, dword ptr [r14 + 8] */
L_1803fe792_0:;
L_1803fe792_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fe792_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe792_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fe792_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe792_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe792_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe792_7:;
/* 1803fe798: mulss xmm6, xmm5 */
L_1803fe798_0:;
L_1803fe798_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe798_2:;
/* 1803fe79c: mulss xmm7, xmm5 */
L_1803fe79c_0:;
L_1803fe79c_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe79c_2:;
/* 1803fe7a0: movss xmm5, dword ptr [r15 + 0xe8] */
L_1803fe7a0_0:;
L_1803fe7a0_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xe8))));
L_1803fe7a0_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe7a0_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fe7a0_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe7a0_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe7a0_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe7a0_7:;
/* 1803fe7a9: subss xmm6, xmm0 */
L_1803fe7a9_0:;
L_1803fe7a9_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe7a9_2:;
/* 1803fe7ad: movaps xmm0, xmm5 */
L_1803fe7ad_0:;
L_1803fe7ad_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe7ad_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe7ad_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe7ad_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe7ad_5:;
/* 1803fe7b0: mulss xmm0, xmm8 */
L_1803fe7b0_0:;
L_1803fe7b0_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe7b0_2:;
/* 1803fe7b5: movss xmm8, dword ptr [r15 + 0x28] */
L_1803fe7b5_0:;
L_1803fe7b5_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x28))));
L_1803fe7b5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe7b5_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803fe7b5_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe7b5_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe7b5_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe7b5_7:;
/* 1803fe7bb: addss xmm1, xmm7 */
L_1803fe7bb_0:;
L_1803fe7bb_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fe7bb_2:;
/* 1803fe7bf: movss xmm7, dword ptr [r14 + 0x14] */
L_1803fe7bf_0:;
L_1803fe7bf_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x14))));
L_1803fe7bf_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe7bf_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fe7bf_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe7bf_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe7bf_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe7bf_7:;
/* 1803fe7c5: mulss xmm3, xmm7 */
L_1803fe7c5_0:;
L_1803fe7c5_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe7c5_2:;
/* 1803fe7c9: mulss xmm5, xmm7 */
L_1803fe7c9_0:;
L_1803fe7c9_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe7c9_2:;
/* 1803fe7cd: movaps xmm7, xmm8 */
L_1803fe7cd_0:;
L_1803fe7cd_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fe7cd_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fe7cd_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fe7cd_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fe7cd_5:;
/* 1803fe7d1: subss xmm0, xmm3 */
L_1803fe7d1_0:;
L_1803fe7d1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe7d1_2:;
/* 1803fe7d5: movaps xmm3, xmm4 */
L_1803fe7d5_0:;
L_1803fe7d5_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fe7d5_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fe7d5_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fe7d5_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fe7d5_5:;
/* 1803fe7d8: addss xmm5, xmm9 */
L_1803fe7d8_0:;
L_1803fe7d8_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe7d8_2:;
/* 1803fe7dd: subss xmm4, xmm0 */
L_1803fe7dd_0:;
L_1803fe7dd_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe7dd_2:;
/* 1803fe7e1: addss xmm3, xmm0 */
L_1803fe7e1_0:;
L_1803fe7e1_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe7e1_2:;
/* 1803fe7e5: movaps xmm0, xmm2 */
L_1803fe7e5_0:;
L_1803fe7e5_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fe7e5_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fe7e5_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fe7e5_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fe7e5_5:;
/* 1803fe7e8: subss xmm2, xmm5 */
L_1803fe7e8_0:;
L_1803fe7e8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fe7e8_2:;
/* 1803fe7ec: addss xmm7, xmm6 */
L_1803fe7ec_0:;
L_1803fe7ec_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fe7ec_2:;
/* 1803fe7f0: addss xmm0, xmm5 */
L_1803fe7f0_0:;
L_1803fe7f0_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe7f0_2:;
/* 1803fe7f4: subss xmm8, xmm6 */
L_1803fe7f4_0:;
L_1803fe7f4_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fe7f4_2:;
/* 1803fe7f9: movss xmm6, dword ptr [r15 + 0x2c] */
L_1803fe7f9_0:;
L_1803fe7f9_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x2c))));
L_1803fe7f9_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe7f9_3:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803fe7f9_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe7f9_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe7f9_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe7f9_7:;
/* 1803fe7ff: movaps xmm5, xmm6 */
L_1803fe7ff_0:;
L_1803fe7ff_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fe7ff_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fe7ff_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fe7ff_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fe7ff_5:;
/* 1803fe802: subss xmm6, xmm1 */
L_1803fe802_0:;
L_1803fe802_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe802_2:;
/* 1803fe806: lea r14, [r14 + rax*4] */
L_1803fe806_0:;
L_1803fe806_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fe806_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fe806_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fe806_4:;
/* 1803fe80a: addss xmm5, xmm1 */
L_1803fe80a_0:;
L_1803fe80a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe80a_2:;
/* 1803fe80e: movaps xmm1, xmm7 */
L_1803fe80e_0:;
L_1803fe80e_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fe80e_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fe80e_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fe80e_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fe80e_5:;
/* 1803fe811: subss xmm7, xmm3 */
L_1803fe811_0:;
L_1803fe811_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe811_2:;
/* 1803fe815: movss dword ptr [r15 + 0xa8], xmm7 */
L_1803fe815_0:;
L_1803fe815_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xa8))));
L_1803fe815_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803fe815_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe815_4:;
return UINT64_C(0x1803fe81e);
}
uint64_t b_1803fe7b0(CPU*s){
/* 1803fe7b0: mulss xmm0, xmm8 */
L_1803fe7b0_0:;
L_1803fe7b0_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe7b0_2:;
/* 1803fe7b5: movss xmm8, dword ptr [r15 + 0x28] */
L_1803fe7b5_0:;
L_1803fe7b5_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x28))));
L_1803fe7b5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe7b5_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803fe7b5_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe7b5_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe7b5_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe7b5_7:;
/* 1803fe7bb: addss xmm1, xmm7 */
L_1803fe7bb_0:;
L_1803fe7bb_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fe7bb_2:;
/* 1803fe7bf: movss xmm7, dword ptr [r14 + 0x14] */
L_1803fe7bf_0:;
L_1803fe7bf_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x14))));
L_1803fe7bf_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe7bf_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fe7bf_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe7bf_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe7bf_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe7bf_7:;
/* 1803fe7c5: mulss xmm3, xmm7 */
L_1803fe7c5_0:;
L_1803fe7c5_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe7c5_2:;
/* 1803fe7c9: mulss xmm5, xmm7 */
L_1803fe7c9_0:;
L_1803fe7c9_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe7c9_2:;
/* 1803fe7cd: movaps xmm7, xmm8 */
L_1803fe7cd_0:;
L_1803fe7cd_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fe7cd_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fe7cd_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fe7cd_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fe7cd_5:;
/* 1803fe7d1: subss xmm0, xmm3 */
L_1803fe7d1_0:;
L_1803fe7d1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe7d1_2:;
/* 1803fe7d5: movaps xmm3, xmm4 */
L_1803fe7d5_0:;
L_1803fe7d5_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fe7d5_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fe7d5_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fe7d5_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fe7d5_5:;
/* 1803fe7d8: addss xmm5, xmm9 */
L_1803fe7d8_0:;
L_1803fe7d8_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe7d8_2:;
/* 1803fe7dd: subss xmm4, xmm0 */
L_1803fe7dd_0:;
L_1803fe7dd_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe7dd_2:;
/* 1803fe7e1: addss xmm3, xmm0 */
L_1803fe7e1_0:;
L_1803fe7e1_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe7e1_2:;
/* 1803fe7e5: movaps xmm0, xmm2 */
L_1803fe7e5_0:;
L_1803fe7e5_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fe7e5_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fe7e5_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fe7e5_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fe7e5_5:;
/* 1803fe7e8: subss xmm2, xmm5 */
L_1803fe7e8_0:;
L_1803fe7e8_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fe7e8_2:;
/* 1803fe7ec: addss xmm7, xmm6 */
L_1803fe7ec_0:;
L_1803fe7ec_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fe7ec_2:;
/* 1803fe7f0: addss xmm0, xmm5 */
L_1803fe7f0_0:;
L_1803fe7f0_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe7f0_2:;
/* 1803fe7f4: subss xmm8, xmm6 */
L_1803fe7f4_0:;
L_1803fe7f4_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fe7f4_2:;
/* 1803fe7f9: movss xmm6, dword ptr [r15 + 0x2c] */
L_1803fe7f9_0:;
L_1803fe7f9_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x2c))));
L_1803fe7f9_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe7f9_3:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803fe7f9_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe7f9_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe7f9_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe7f9_7:;
/* 1803fe7ff: movaps xmm5, xmm6 */
L_1803fe7ff_0:;
L_1803fe7ff_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fe7ff_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fe7ff_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fe7ff_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fe7ff_5:;
/* 1803fe802: subss xmm6, xmm1 */
L_1803fe802_0:;
L_1803fe802_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe802_2:;
/* 1803fe806: lea r14, [r14 + rax*4] */
L_1803fe806_0:;
L_1803fe806_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fe806_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fe806_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fe806_4:;
/* 1803fe80a: addss xmm5, xmm1 */
L_1803fe80a_0:;
L_1803fe80a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe80a_2:;
/* 1803fe80e: movaps xmm1, xmm7 */
L_1803fe80e_0:;
L_1803fe80e_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fe80e_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fe80e_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fe80e_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fe80e_5:;
/* 1803fe811: subss xmm7, xmm3 */
L_1803fe811_0:;
L_1803fe811_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe811_2:;
/* 1803fe815: movss dword ptr [r15 + 0xa8], xmm7 */
L_1803fe815_0:;
L_1803fe815_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xa8))));
L_1803fe815_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803fe815_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe815_4:;
/* 1803fe81e: addss xmm1, xmm3 */
L_1803fe81e_0:;
L_1803fe81e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe81e_2:;
/* 1803fe822: movss dword ptr [r15 + 0x28], xmm1 */
L_1803fe822_0:;
L_1803fe822_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x28))));
L_1803fe822_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803fe822_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe822_4:;
/* 1803fe828: movaps xmm1, xmm5 */
L_1803fe828_0:;
L_1803fe828_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fe828_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fe828_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fe828_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fe828_5:;
/* 1803fe82b: subss xmm5, xmm0 */
L_1803fe82b_0:;
L_1803fe82b_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe82b_2:;
/* 1803fe82f: movss dword ptr [r15 + 0xac], xmm5 */
L_1803fe82f_0:;
L_1803fe82f_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xac))));
L_1803fe82f_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803fe82f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe82f_4:;
/* 1803fe838: movss xmm5, dword ptr [r15 + 0xb4] */
L_1803fe838_0:;
L_1803fe838_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xb4))));
L_1803fe838_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe838_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fe838_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe838_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe838_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe838_7:;
/* 1803fe841: addss xmm1, xmm0 */
L_1803fe841_0:;
L_1803fe841_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe841_2:;
return UINT64_C(0x1803fe845);
}
uint64_t b_1803fe81e(CPU*s){
/* 1803fe81e: addss xmm1, xmm3 */
L_1803fe81e_0:;
L_1803fe81e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe81e_2:;
/* 1803fe822: movss dword ptr [r15 + 0x28], xmm1 */
L_1803fe822_0:;
L_1803fe822_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x28))));
L_1803fe822_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fe822_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe822_4:;
/* 1803fe828: movaps xmm1, xmm5 */
L_1803fe828_0:;
L_1803fe828_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fe828_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fe828_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fe828_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fe828_5:;
/* 1803fe82b: subss xmm5, xmm0 */
L_1803fe82b_0:;
L_1803fe82b_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe82b_2:;
/* 1803fe82f: movss dword ptr [r15 + 0xac], xmm5 */
L_1803fe82f_0:;
L_1803fe82f_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xac))));
L_1803fe82f_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803fe82f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe82f_4:;
/* 1803fe838: movss xmm5, dword ptr [r15 + 0xb4] */
L_1803fe838_0:;
L_1803fe838_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xb4))));
L_1803fe838_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe838_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe838_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe838_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe838_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe838_7:;
/* 1803fe841: addss xmm1, xmm0 */
L_1803fe841_0:;
L_1803fe841_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe841_2:;
/* 1803fe845: movss dword ptr [r15 + 0x2c], xmm1 */
L_1803fe845_0:;
L_1803fe845_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x2c))));
L_1803fe845_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fe845_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe845_4:;
/* 1803fe84b: movaps xmm0, xmm8 */
L_1803fe84b_0:;
L_1803fe84b_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fe84b_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fe84b_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fe84b_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fe84b_5:;
/* 1803fe84f: subss xmm8, xmm2 */
L_1803fe84f_0:;
L_1803fe84f_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe84f_2:;
/* 1803fe854: movss dword ptr [r15 + 0xe8], xmm8 */
L_1803fe854_0:;
L_1803fe854_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xe8))));
L_1803fe854_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fe854_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe854_4:;
/* 1803fe85d: addss xmm0, xmm2 */
L_1803fe85d_0:;
L_1803fe85d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fe85d_2:;
/* 1803fe861: movss xmm2, dword ptr [r15 + 0xb0] */
L_1803fe861_0:;
L_1803fe861_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xb0))));
L_1803fe861_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe861_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fe861_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe861_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe861_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe861_7:;
/* 1803fe86a: movss dword ptr [r15 + 0x68], xmm0 */
L_1803fe86a_0:;
L_1803fe86a_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x68))));
L_1803fe86a_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe86a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe86a_4:;
/* 1803fe870: movaps xmm0, xmm6 */
L_1803fe870_0:;
L_1803fe870_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fe870_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fe870_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fe870_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fe870_5:;
/* 1803fe873: addss xmm6, xmm4 */
L_1803fe873_0:;
L_1803fe873_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fe873_2:;
/* 1803fe877: movss dword ptr [r15 + 0xec], xmm6 */
L_1803fe877_0:;
L_1803fe877_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xec))));
L_1803fe877_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803fe877_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe877_4:;
/* 1803fe880: subss xmm0, xmm4 */
L_1803fe880_0:;
L_1803fe880_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fe880_2:;
/* 1803fe884: movss dword ptr [r15 + 0x6c], xmm0 */
L_1803fe884_0:;
L_1803fe884_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x6c))));
L_1803fe884_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe884_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe884_4:;
/* 1803fe88a: movaps xmm4, xmm2 */
L_1803fe88a_0:;
L_1803fe88a_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fe88a_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fe88a_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fe88a_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fe88a_5:;
/* 1803fe88d: movss xmm3, dword ptr [r14] */
L_1803fe88d_0:;
L_1803fe88d_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fe88d_2:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe88d_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe88d_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe88d_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe88d_6:;
/* 1803fe892: mulss xmm4, xmm3 */
L_1803fe892_0:;
L_1803fe892_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe892_2:;
/* 1803fe896: movss xmm1, dword ptr [r14 + 4] */
L_1803fe896_0:;
L_1803fe896_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fe896_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe896_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe896_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe896_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe896_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe896_7:;
/* 1803fe89c: movaps xmm0, xmm5 */
L_1803fe89c_0:;
L_1803fe89c_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe89c_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe89c_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe89c_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe89c_5:;
/* 1803fe89f: mulss xmm2, xmm1 */
L_1803fe89f_0:;
L_1803fe89f_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe89f_2:;
/* 1803fe8a3: mulss xmm5, xmm3 */
L_1803fe8a3_0:;
L_1803fe8a3_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe8a3_2:;
/* 1803fe8a7: mulss xmm0, xmm1 */
L_1803fe8a7_0:;
L_1803fe8a7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe8a7_2:;
/* 1803fe8ab: movss xmm1, dword ptr [r15 + 0x70] */
L_1803fe8ab_0:;
L_1803fe8ab_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x70))));
L_1803fe8ab_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe8ab_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe8ab_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe8ab_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe8ab_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe8ab_7:;
/* 1803fe8b1: movaps xmm6, xmm1 */
L_1803fe8b1_0:;
L_1803fe8b1_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fe8b1_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fe8b1_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fe8b1_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fe8b1_5:;
/* 1803fe8b4: movss xmm7, dword ptr [r15 + 0x74] */
L_1803fe8b4_0:;
L_1803fe8b4_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x74))));
L_1803fe8b4_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe8b4_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fe8b4_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe8b4_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe8b4_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe8b4_7:;
/* 1803fe8ba: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fe8ba_0:;
L_1803fe8ba_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fe8ba_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe8ba_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe8ba_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe8ba_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe8ba_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe8ba_7:;
/* 1803fe8c0: mulss xmm1, xmm3 */
L_1803fe8c0_0:;
L_1803fe8c0_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe8c0_2:;
return UINT64_C(0x1803fe8c4);
}
uint64_t b_1803fe845(CPU*s){
/* 1803fe845: movss dword ptr [r15 + 0x2c], xmm1 */
L_1803fe845_0:;
L_1803fe845_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x2c))));
L_1803fe845_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fe845_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe845_4:;
/* 1803fe84b: movaps xmm0, xmm8 */
L_1803fe84b_0:;
L_1803fe84b_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fe84b_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fe84b_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fe84b_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fe84b_5:;
/* 1803fe84f: subss xmm8, xmm2 */
L_1803fe84f_0:;
L_1803fe84f_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe84f_2:;
/* 1803fe854: movss dword ptr [r15 + 0xe8], xmm8 */
L_1803fe854_0:;
L_1803fe854_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xe8))));
L_1803fe854_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fe854_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe854_4:;
/* 1803fe85d: addss xmm0, xmm2 */
L_1803fe85d_0:;
L_1803fe85d_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fe85d_2:;
/* 1803fe861: movss xmm2, dword ptr [r15 + 0xb0] */
L_1803fe861_0:;
L_1803fe861_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xb0))));
L_1803fe861_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe861_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fe861_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe861_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe861_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe861_7:;
/* 1803fe86a: movss dword ptr [r15 + 0x68], xmm0 */
L_1803fe86a_0:;
L_1803fe86a_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x68))));
L_1803fe86a_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe86a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe86a_4:;
/* 1803fe870: movaps xmm0, xmm6 */
L_1803fe870_0:;
L_1803fe870_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fe870_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fe870_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fe870_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fe870_5:;
/* 1803fe873: addss xmm6, xmm4 */
L_1803fe873_0:;
L_1803fe873_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fe873_2:;
/* 1803fe877: movss dword ptr [r15 + 0xec], xmm6 */
L_1803fe877_0:;
L_1803fe877_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xec))));
L_1803fe877_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803fe877_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fe877_4:;
/* 1803fe880: subss xmm0, xmm4 */
L_1803fe880_0:;
L_1803fe880_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fe880_2:;
/* 1803fe884: movss dword ptr [r15 + 0x6c], xmm0 */
L_1803fe884_0:;
L_1803fe884_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x6c))));
L_1803fe884_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fe884_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fe884_4:;
/* 1803fe88a: movaps xmm4, xmm2 */
L_1803fe88a_0:;
L_1803fe88a_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fe88a_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fe88a_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fe88a_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fe88a_5:;
/* 1803fe88d: movss xmm3, dword ptr [r14] */
L_1803fe88d_0:;
L_1803fe88d_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fe88d_2:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe88d_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe88d_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe88d_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe88d_6:;
/* 1803fe892: mulss xmm4, xmm3 */
L_1803fe892_0:;
L_1803fe892_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe892_2:;
/* 1803fe896: movss xmm1, dword ptr [r14 + 4] */
L_1803fe896_0:;
L_1803fe896_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fe896_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe896_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe896_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe896_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe896_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe896_7:;
/* 1803fe89c: movaps xmm0, xmm5 */
L_1803fe89c_0:;
L_1803fe89c_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe89c_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe89c_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe89c_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe89c_5:;
/* 1803fe89f: mulss xmm2, xmm1 */
L_1803fe89f_0:;
L_1803fe89f_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe89f_2:;
/* 1803fe8a3: mulss xmm5, xmm3 */
L_1803fe8a3_0:;
L_1803fe8a3_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe8a3_2:;
/* 1803fe8a7: mulss xmm0, xmm1 */
L_1803fe8a7_0:;
L_1803fe8a7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fe8a7_2:;
/* 1803fe8ab: movss xmm1, dword ptr [r15 + 0x70] */
L_1803fe8ab_0:;
L_1803fe8ab_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x70))));
L_1803fe8ab_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe8ab_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803fe8ab_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe8ab_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe8ab_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe8ab_7:;
/* 1803fe8b1: movaps xmm6, xmm1 */
L_1803fe8b1_0:;
L_1803fe8b1_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fe8b1_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fe8b1_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fe8b1_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fe8b1_5:;
/* 1803fe8b4: movss xmm7, dword ptr [r15 + 0x74] */
L_1803fe8b4_0:;
L_1803fe8b4_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x74))));
L_1803fe8b4_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe8b4_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fe8b4_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe8b4_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe8b4_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe8b4_7:;
/* 1803fe8ba: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fe8ba_0:;
L_1803fe8ba_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fe8ba_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe8ba_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fe8ba_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe8ba_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe8ba_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe8ba_7:;
/* 1803fe8c0: mulss xmm1, xmm3 */
L_1803fe8c0_0:;
L_1803fe8c0_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe8c0_2:;
/* 1803fe8c4: movss xmm8, dword ptr [r14 + 0x10] */
L_1803fe8c4_0:;
L_1803fe8c4_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fe8c4_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe8c4_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe8c4_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe8c4_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe8c4_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe8c4_7:;
/* 1803fe8ca: movss xmm9, dword ptr [r15 + 0xf4] */
L_1803fe8ca_0:;
L_1803fe8ca_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xf4))));
L_1803fe8ca_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe8ca_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803fe8ca_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe8ca_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe8ca_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe8ca_7:;
/* 1803fe8d3: subss xmm4, xmm0 */
L_1803fe8d3_0:;
L_1803fe8d3_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe8d3_2:;
/* 1803fe8d7: movaps xmm0, xmm7 */
L_1803fe8d7_0:;
L_1803fe8d7_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fe8d7_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fe8d7_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fe8d7_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fe8d7_5:;
/* 1803fe8da: mulss xmm0, xmm3 */
L_1803fe8da_0:;
L_1803fe8da_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe8da_2:;
/* 1803fe8de: movaps xmm3, xmm9 */
L_1803fe8de_0:;
L_1803fe8de_1:;
wr(s->r,4800,4,rd(s->r,5184,4));
L_1803fe8de_2:;
wr(s->r,4804,4,rd(s->r,5188,4));
L_1803fe8de_3:;
wr(s->r,4808,4,rd(s->r,5192,4));
L_1803fe8de_4:;
wr(s->r,4812,4,rd(s->r,5196,4));
L_1803fe8de_5:;
/* 1803fe8e2: mulss xmm9, xmm8 */
L_1803fe8e2_0:;
L_1803fe8e2_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe8e2_2:;
return UINT64_C(0x1803fe8e7);
}
uint64_t b_1803fe8c4(CPU*s){
/* 1803fe8c4: movss xmm8, dword ptr [r14 + 0x10] */
L_1803fe8c4_0:;
L_1803fe8c4_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x10))));
L_1803fe8c4_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe8c4_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe8c4_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe8c4_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe8c4_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe8c4_7:;
/* 1803fe8ca: movss xmm9, dword ptr [r15 + 0xf4] */
L_1803fe8ca_0:;
L_1803fe8ca_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xf4))));
L_1803fe8ca_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe8ca_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803fe8ca_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe8ca_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe8ca_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe8ca_7:;
/* 1803fe8d3: subss xmm4, xmm0 */
L_1803fe8d3_0:;
L_1803fe8d3_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe8d3_2:;
/* 1803fe8d7: movaps xmm0, xmm7 */
L_1803fe8d7_0:;
L_1803fe8d7_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fe8d7_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fe8d7_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fe8d7_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fe8d7_5:;
/* 1803fe8da: mulss xmm0, xmm3 */
L_1803fe8da_0:;
L_1803fe8da_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe8da_2:;
/* 1803fe8de: movaps xmm3, xmm9 */
L_1803fe8de_0:;
L_1803fe8de_1:;
wr(s->r,4800,4,rd(s->r,5184,4));
L_1803fe8de_2:;
wr(s->r,4804,4,rd(s->r,5188,4));
L_1803fe8de_3:;
wr(s->r,4808,4,rd(s->r,5192,4));
L_1803fe8de_4:;
wr(s->r,4812,4,rd(s->r,5196,4));
L_1803fe8de_5:;
/* 1803fe8e2: mulss xmm9, xmm8 */
L_1803fe8e2_0:;
L_1803fe8e2_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe8e2_2:;
/* 1803fe8e7: addss xmm2, xmm5 */
L_1803fe8e7_0:;
L_1803fe8e7_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe8e7_2:;
/* 1803fe8eb: movss xmm5, dword ptr [r14 + 8] */
L_1803fe8eb_0:;
L_1803fe8eb_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fe8eb_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe8eb_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe8eb_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe8eb_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe8eb_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe8eb_7:;
/* 1803fe8f1: mulss xmm6, xmm5 */
L_1803fe8f1_0:;
L_1803fe8f1_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe8f1_2:;
/* 1803fe8f5: mulss xmm7, xmm5 */
L_1803fe8f5_0:;
L_1803fe8f5_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe8f5_2:;
/* 1803fe8f9: movss xmm5, dword ptr [r15 + 0xf0] */
L_1803fe8f9_0:;
L_1803fe8f9_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xf0))));
L_1803fe8f9_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe8f9_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe8f9_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe8f9_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe8f9_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe8f9_7:;
/* 1803fe902: subss xmm6, xmm0 */
L_1803fe902_0:;
L_1803fe902_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe902_2:;
/* 1803fe906: movaps xmm0, xmm5 */
L_1803fe906_0:;
L_1803fe906_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe906_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe906_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe906_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe906_5:;
/* 1803fe909: mulss xmm0, xmm8 */
L_1803fe909_0:;
L_1803fe909_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe909_2:;
/* 1803fe90e: movss xmm8, dword ptr [r15 + 0x30] */
L_1803fe90e_0:;
L_1803fe90e_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x30))));
L_1803fe90e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe90e_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe90e_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe90e_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe90e_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe90e_7:;
/* 1803fe914: addss xmm1, xmm7 */
L_1803fe914_0:;
L_1803fe914_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fe914_2:;
/* 1803fe918: movss xmm7, dword ptr [r14 + 0x14] */
L_1803fe918_0:;
L_1803fe918_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x14))));
L_1803fe918_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe918_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fe918_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe918_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe918_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe918_7:;
/* 1803fe91e: mulss xmm3, xmm7 */
L_1803fe91e_0:;
L_1803fe91e_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe91e_2:;
/* 1803fe922: mulss xmm5, xmm7 */
L_1803fe922_0:;
L_1803fe922_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe922_2:;
/* 1803fe926: movaps xmm7, xmm8 */
L_1803fe926_0:;
L_1803fe926_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fe926_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fe926_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fe926_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fe926_5:;
/* 1803fe92a: subss xmm0, xmm3 */
L_1803fe92a_0:;
L_1803fe92a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe92a_2:;
/* 1803fe92e: movaps xmm3, xmm4 */
L_1803fe92e_0:;
L_1803fe92e_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fe92e_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fe92e_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fe92e_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fe92e_5:;
/* 1803fe931: addss xmm5, xmm9 */
L_1803fe931_0:;
L_1803fe931_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe931_2:;
/* 1803fe936: movss xmm9, dword ptr [r15 + 0xfc] */
L_1803fe936_0:;
L_1803fe936_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xfc))));
L_1803fe936_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe936_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803fe936_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe936_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe936_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe936_7:;
/* 1803fe93f: addss xmm3, xmm0 */
L_1803fe93f_0:;
L_1803fe93f_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe93f_2:;
/* 1803fe943: subss xmm4, xmm0 */
L_1803fe943_0:;
L_1803fe943_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe943_2:;
/* 1803fe947: movaps xmm0, xmm2 */
L_1803fe947_0:;
L_1803fe947_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fe947_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fe947_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fe947_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fe947_5:;
/* 1803fe94a: subss xmm2, xmm5 */
L_1803fe94a_0:;
L_1803fe94a_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fe94a_2:;
/* 1803fe94e: addss xmm7, xmm6 */
L_1803fe94e_0:;
L_1803fe94e_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fe94e_2:;
/* 1803fe952: addss xmm0, xmm5 */
L_1803fe952_0:;
L_1803fe952_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe952_2:;
/* 1803fe956: subss xmm8, xmm6 */
L_1803fe956_0:;
L_1803fe956_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fe956_2:;
return UINT64_C(0x1803fe95b);
}
uint64_t b_1803fe8e7(CPU*s){
/* 1803fe8e7: addss xmm2, xmm5 */
L_1803fe8e7_0:;
L_1803fe8e7_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe8e7_2:;
/* 1803fe8eb: movss xmm5, dword ptr [r14 + 8] */
L_1803fe8eb_0:;
L_1803fe8eb_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fe8eb_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe8eb_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe8eb_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe8eb_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe8eb_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe8eb_7:;
/* 1803fe8f1: mulss xmm6, xmm5 */
L_1803fe8f1_0:;
L_1803fe8f1_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe8f1_2:;
/* 1803fe8f5: mulss xmm7, xmm5 */
L_1803fe8f5_0:;
L_1803fe8f5_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fe8f5_2:;
/* 1803fe8f9: movss xmm5, dword ptr [r15 + 0xf0] */
L_1803fe8f9_0:;
L_1803fe8f9_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xf0))));
L_1803fe8f9_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe8f9_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fe8f9_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe8f9_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe8f9_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe8f9_7:;
/* 1803fe902: subss xmm6, xmm0 */
L_1803fe902_0:;
L_1803fe902_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe902_2:;
/* 1803fe906: movaps xmm0, xmm5 */
L_1803fe906_0:;
L_1803fe906_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fe906_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fe906_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fe906_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fe906_5:;
/* 1803fe909: mulss xmm0, xmm8 */
L_1803fe909_0:;
L_1803fe909_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fe909_2:;
/* 1803fe90e: movss xmm8, dword ptr [r15 + 0x30] */
L_1803fe90e_0:;
L_1803fe90e_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x30))));
L_1803fe90e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe90e_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fe90e_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fe90e_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fe90e_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fe90e_7:;
/* 1803fe914: addss xmm1, xmm7 */
L_1803fe914_0:;
L_1803fe914_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fe914_2:;
/* 1803fe918: movss xmm7, dword ptr [r14 + 0x14] */
L_1803fe918_0:;
L_1803fe918_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x14))));
L_1803fe918_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe918_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fe918_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fe918_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fe918_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fe918_7:;
/* 1803fe91e: mulss xmm3, xmm7 */
L_1803fe91e_0:;
L_1803fe91e_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe91e_2:;
/* 1803fe922: mulss xmm5, xmm7 */
L_1803fe922_0:;
L_1803fe922_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fe922_2:;
/* 1803fe926: movaps xmm7, xmm8 */
L_1803fe926_0:;
L_1803fe926_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fe926_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fe926_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fe926_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fe926_5:;
/* 1803fe92a: subss xmm0, xmm3 */
L_1803fe92a_0:;
L_1803fe92a_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe92a_2:;
/* 1803fe92e: movaps xmm3, xmm4 */
L_1803fe92e_0:;
L_1803fe92e_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fe92e_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fe92e_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fe92e_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fe92e_5:;
/* 1803fe931: addss xmm5, xmm9 */
L_1803fe931_0:;
L_1803fe931_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fe931_2:;
/* 1803fe936: movss xmm9, dword ptr [r15 + 0xfc] */
L_1803fe936_0:;
L_1803fe936_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xfc))));
L_1803fe936_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe936_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803fe936_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fe936_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fe936_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fe936_7:;
/* 1803fe93f: addss xmm3, xmm0 */
L_1803fe93f_0:;
L_1803fe93f_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe93f_2:;
/* 1803fe943: subss xmm4, xmm0 */
L_1803fe943_0:;
L_1803fe943_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe943_2:;
/* 1803fe947: movaps xmm0, xmm2 */
L_1803fe947_0:;
L_1803fe947_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fe947_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fe947_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fe947_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fe947_5:;
/* 1803fe94a: subss xmm2, xmm5 */
L_1803fe94a_0:;
L_1803fe94a_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fe94a_2:;
/* 1803fe94e: addss xmm7, xmm6 */
L_1803fe94e_0:;
L_1803fe94e_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fe94e_2:;
/* 1803fe952: addss xmm0, xmm5 */
L_1803fe952_0:;
L_1803fe952_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fe952_2:;
/* 1803fe956: subss xmm8, xmm6 */
L_1803fe956_0:;
L_1803fe956_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fe956_2:;
/* 1803fe95b: movss xmm6, dword ptr [r15 + 0x34] */
L_1803fe95b_0:;
L_1803fe95b_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x34))));
L_1803fe95b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe95b_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803fe95b_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe95b_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe95b_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe95b_7:;
/* 1803fe961: movaps xmm5, xmm6 */
L_1803fe961_0:;
L_1803fe961_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fe961_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fe961_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fe961_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fe961_5:;
/* 1803fe964: subss xmm6, xmm1 */
L_1803fe964_0:;
L_1803fe964_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe964_2:;
/* 1803fe968: add r9d, 1 */
L_1803fe968_0:;
L_1803fe968_1:;
wr(s->r,512,1,(((rd(s->r,136,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,136,4)));
L_1803fe968_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803fe968_3:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803fe968_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fe968_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fe968_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fe968_7:;
wr(s->u,20,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fe968_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fe968_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fe968_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fe968_11:;
/* 1803fe96c: addss xmm5, xmm1 */
L_1803fe96c_0:;
L_1803fe96c_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe96c_2:;
/* 1803fe970: movaps xmm1, xmm7 */
L_1803fe970_0:;
L_1803fe970_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fe970_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fe970_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fe970_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fe970_5:;
/* 1803fe973: subss xmm7, xmm3 */
L_1803fe973_0:;
L_1803fe973_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe973_2:;
return UINT64_C(0x1803fe977);
}
uint64_t b_1803fe95b(CPU*s){
/* 1803fe95b: movss xmm6, dword ptr [r15 + 0x34] */
L_1803fe95b_0:;
L_1803fe95b_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x34))));
L_1803fe95b_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe95b_3:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803fe95b_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe95b_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe95b_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe95b_7:;
/* 1803fe961: movaps xmm5, xmm6 */
L_1803fe961_0:;
L_1803fe961_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fe961_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fe961_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fe961_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fe961_5:;
/* 1803fe964: subss xmm6, xmm1 */
L_1803fe964_0:;
L_1803fe964_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe964_2:;
/* 1803fe968: add r9d, 1 */
L_1803fe968_0:;
L_1803fe968_1:;
wr(s->r,512,1,(((rd(s->r,136,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,136,4)));
L_1803fe968_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x1)),4,0));
L_1803fe968_3:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x1))));
L_1803fe968_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fe968_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fe968_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803fe968_7:;
wr(s->u,36,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803fe968_8:;
wr(s->u,40,1,pop(rd(s->u,36,4),4));
L_1803fe968_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803fe968_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803fe968_11:;
/* 1803fe96c: addss xmm5, xmm1 */
L_1803fe96c_0:;
L_1803fe96c_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe96c_2:;
/* 1803fe970: movaps xmm1, xmm7 */
L_1803fe970_0:;
L_1803fe970_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fe970_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fe970_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fe970_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fe970_5:;
/* 1803fe973: subss xmm7, xmm3 */
L_1803fe973_0:;
L_1803fe973_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fe973_2:;
/* 1803fe977: movss dword ptr [r15 + 0xb0], xmm7 */
L_1803fe977_0:;
L_1803fe977_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xb0))));
L_1803fe977_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803fe977_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe977_4:;
/* 1803fe980: addss xmm1, xmm3 */
L_1803fe980_0:;
L_1803fe980_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe980_2:;
/* 1803fe984: movss xmm3, dword ptr [r15 + 0xbc] */
L_1803fe984_0:;
L_1803fe984_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xbc))));
L_1803fe984_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe984_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fe984_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe984_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe984_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe984_7:;
/* 1803fe98d: movss dword ptr [r15 + 0x30], xmm1 */
L_1803fe98d_0:;
L_1803fe98d_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x30))));
L_1803fe98d_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803fe98d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe98d_4:;
/* 1803fe993: movaps xmm1, xmm5 */
L_1803fe993_0:;
L_1803fe993_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fe993_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fe993_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fe993_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fe993_5:;
/* 1803fe996: subss xmm5, xmm0 */
L_1803fe996_0:;
L_1803fe996_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe996_2:;
/* 1803fe99a: movss dword ptr [r15 + 0xb4], xmm5 */
L_1803fe99a_0:;
L_1803fe99a_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xb4))));
L_1803fe99a_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803fe99a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe99a_4:;
/* 1803fe9a3: movss xmm5, dword ptr [r15 + 0xb8] */
L_1803fe9a3_0:;
L_1803fe9a3_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xb8))));
L_1803fe9a3_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe9a3_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fe9a3_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe9a3_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe9a3_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe9a3_7:;
/* 1803fe9ac: movaps xmm7, xmm5 */
L_1803fe9ac_0:;
L_1803fe9ac_1:;
wr(s->r,5056,4,rd(s->r,4928,4));
L_1803fe9ac_2:;
wr(s->r,5060,4,rd(s->r,4932,4));
L_1803fe9ac_3:;
wr(s->r,5064,4,rd(s->r,4936,4));
L_1803fe9ac_4:;
wr(s->r,5068,4,rd(s->r,4940,4));
L_1803fe9ac_5:;
/* 1803fe9af: addss xmm1, xmm0 */
L_1803fe9af_0:;
L_1803fe9af_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe9af_2:;
/* 1803fe9b3: movss dword ptr [r15 + 0x34], xmm1 */
L_1803fe9b3_0:;
L_1803fe9b3_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x34))));
L_1803fe9b3_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803fe9b3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe9b3_4:;
/* 1803fe9b9: movaps xmm0, xmm8 */
L_1803fe9b9_0:;
L_1803fe9b9_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fe9b9_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fe9b9_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fe9b9_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fe9b9_5:;
/* 1803fe9bd: subss xmm8, xmm2 */
L_1803fe9bd_0:;
L_1803fe9bd_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe9bd_2:;
/* 1803fe9c2: movss dword ptr [r15 + 0xf0], xmm8 */
L_1803fe9c2_0:;
L_1803fe9c2_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xf0))));
L_1803fe9c2_2:;
wr(s->u,32,4,rd(s->r,5120,4));
L_1803fe9c2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe9c2_4:;
/* 1803fe9cb: addss xmm0, xmm2 */
L_1803fe9cb_0:;
L_1803fe9cb_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fe9cb_2:;
/* 1803fe9cf: movss dword ptr [r15 + 0x70], xmm0 */
L_1803fe9cf_0:;
L_1803fe9cf_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x70))));
L_1803fe9cf_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fe9cf_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe9cf_4:;
/* 1803fe9d5: movaps xmm0, xmm6 */
L_1803fe9d5_0:;
L_1803fe9d5_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fe9d5_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fe9d5_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fe9d5_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fe9d5_5:;
/* 1803fe9d8: addss xmm6, xmm4 */
L_1803fe9d8_0:;
L_1803fe9d8_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fe9d8_2:;
/* 1803fe9dc: movss dword ptr [r15 + 0xf4], xmm6 */
L_1803fe9dc_0:;
L_1803fe9dc_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xf4))));
L_1803fe9dc_2:;
wr(s->u,32,4,rd(s->r,4992,4));
L_1803fe9dc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fe9dc_4:;
/* 1803fe9e5: movss xmm6, dword ptr [r15 + 0x7c] */
L_1803fe9e5_0:;
L_1803fe9e5_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x7c))));
L_1803fe9e5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe9e5_3:;
wr(s->r,4992,4,rd(s->u,32,4));
L_1803fe9e5_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe9e5_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe9e5_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe9e5_7:;
/* 1803fe9eb: subss xmm0, xmm4 */
L_1803fe9eb_0:;
L_1803fe9eb_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fe9eb_2:;
/* 1803fe9ef: movss xmm4, dword ptr [r15 + 0x78] */
L_1803fe9ef_0:;
L_1803fe9ef_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x78))));
L_1803fe9ef_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe9ef_3:;
wr(s->r,4864,4,rd(s->u,32,4));
L_1803fe9ef_4:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803fe9ef_5:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803fe9ef_6:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803fe9ef_7:;
/* 1803fe9f5: movss dword ptr [r15 + 0x74], xmm0 */
L_1803fe9f5_0:;
L_1803fe9f5_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x74))));
L_1803fe9f5_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fe9f5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe9f5_4:;
/* 1803fe9fb: movaps xmm0, xmm3 */
L_1803fe9fb_0:;
L_1803fe9fb_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fe9fb_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fe9fb_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fe9fb_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fe9fb_5:;
/* 1803fe9fe: movss xmm2, dword ptr [r14 + rax*4] */
L_1803fe9fe_0:;
L_1803fe9fe_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fe9fe_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fe9fe_3:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803fe9fe_4:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fe9fe_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe9fe_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe9fe_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe9fe_8:;
return UINT64_C(0x1803fea04);
}
uint64_t b_1803fe977(CPU*s){
/* 1803fe977: movss dword ptr [r15 + 0xb0], xmm7 */
L_1803fe977_0:;
L_1803fe977_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xb0))));
L_1803fe977_2:;
wr(s->u,56,4,rd(s->r,5056,4));
L_1803fe977_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,56,4));
L_1803fe977_4:;
/* 1803fe980: addss xmm1, xmm3 */
L_1803fe980_0:;
L_1803fe980_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fe980_2:;
/* 1803fe984: movss xmm3, dword ptr [r15 + 0xbc] */
L_1803fe984_0:;
L_1803fe984_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xbc))));
L_1803fe984_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe984_3:;
wr(s->r,4800,4,rd(s->u,56,4));
L_1803fe984_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe984_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe984_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe984_7:;
/* 1803fe98d: movss dword ptr [r15 + 0x30], xmm1 */
L_1803fe98d_0:;
L_1803fe98d_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x30))));
L_1803fe98d_2:;
wr(s->u,56,4,rd(s->r,4672,4));
L_1803fe98d_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803fe98d_4:;
/* 1803fe993: movaps xmm1, xmm5 */
L_1803fe993_0:;
L_1803fe993_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fe993_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fe993_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fe993_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fe993_5:;
/* 1803fe996: subss xmm5, xmm0 */
L_1803fe996_0:;
L_1803fe996_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe996_2:;
/* 1803fe99a: movss dword ptr [r15 + 0xb4], xmm5 */
L_1803fe99a_0:;
L_1803fe99a_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xb4))));
L_1803fe99a_2:;
wr(s->u,56,4,rd(s->r,4928,4));
L_1803fe99a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,56,4));
L_1803fe99a_4:;
/* 1803fe9a3: movss xmm5, dword ptr [r15 + 0xb8] */
L_1803fe9a3_0:;
L_1803fe9a3_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xb8))));
L_1803fe9a3_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fe9a3_3:;
wr(s->r,4928,4,rd(s->u,56,4));
L_1803fe9a3_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe9a3_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe9a3_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe9a3_7:;
/* 1803fe9ac: movaps xmm7, xmm5 */
L_1803fe9ac_0:;
L_1803fe9ac_1:;
wr(s->r,5056,4,rd(s->r,4928,4));
L_1803fe9ac_2:;
wr(s->r,5060,4,rd(s->r,4932,4));
L_1803fe9ac_3:;
wr(s->r,5064,4,rd(s->r,4936,4));
L_1803fe9ac_4:;
wr(s->r,5068,4,rd(s->r,4940,4));
L_1803fe9ac_5:;
/* 1803fe9af: addss xmm1, xmm0 */
L_1803fe9af_0:;
L_1803fe9af_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe9af_2:;
/* 1803fe9b3: movss dword ptr [r15 + 0x34], xmm1 */
L_1803fe9b3_0:;
L_1803fe9b3_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x34))));
L_1803fe9b3_2:;
wr(s->u,56,4,rd(s->r,4672,4));
L_1803fe9b3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803fe9b3_4:;
/* 1803fe9b9: movaps xmm0, xmm8 */
L_1803fe9b9_0:;
L_1803fe9b9_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fe9b9_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fe9b9_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fe9b9_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fe9b9_5:;
/* 1803fe9bd: subss xmm8, xmm2 */
L_1803fe9bd_0:;
L_1803fe9bd_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fe9bd_2:;
/* 1803fe9c2: movss dword ptr [r15 + 0xf0], xmm8 */
L_1803fe9c2_0:;
L_1803fe9c2_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xf0))));
L_1803fe9c2_2:;
wr(s->u,56,4,rd(s->r,5120,4));
L_1803fe9c2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,56,4));
L_1803fe9c2_4:;
/* 1803fe9cb: addss xmm0, xmm2 */
L_1803fe9cb_0:;
L_1803fe9cb_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fe9cb_2:;
/* 1803fe9cf: movss dword ptr [r15 + 0x70], xmm0 */
L_1803fe9cf_0:;
L_1803fe9cf_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x70))));
L_1803fe9cf_2:;
wr(s->u,56,4,rd(s->r,4608,4));
L_1803fe9cf_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803fe9cf_4:;
/* 1803fe9d5: movaps xmm0, xmm6 */
L_1803fe9d5_0:;
L_1803fe9d5_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fe9d5_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fe9d5_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fe9d5_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fe9d5_5:;
/* 1803fe9d8: addss xmm6, xmm4 */
L_1803fe9d8_0:;
L_1803fe9d8_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fe9d8_2:;
/* 1803fe9dc: movss dword ptr [r15 + 0xf4], xmm6 */
L_1803fe9dc_0:;
L_1803fe9dc_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xf4))));
L_1803fe9dc_2:;
wr(s->u,56,4,rd(s->r,4992,4));
L_1803fe9dc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,56,4));
L_1803fe9dc_4:;
/* 1803fe9e5: movss xmm6, dword ptr [r15 + 0x7c] */
L_1803fe9e5_0:;
L_1803fe9e5_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x7c))));
L_1803fe9e5_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe9e5_3:;
wr(s->r,4992,4,rd(s->u,56,4));
L_1803fe9e5_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fe9e5_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fe9e5_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fe9e5_7:;
/* 1803fe9eb: subss xmm0, xmm4 */
L_1803fe9eb_0:;
L_1803fe9eb_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fe9eb_2:;
/* 1803fe9ef: movss xmm4, dword ptr [r15 + 0x78] */
L_1803fe9ef_0:;
L_1803fe9ef_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x78))));
L_1803fe9ef_2:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe9ef_3:;
wr(s->r,4864,4,rd(s->u,56,4));
L_1803fe9ef_4:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803fe9ef_5:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803fe9ef_6:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803fe9ef_7:;
/* 1803fe9f5: movss dword ptr [r15 + 0x74], xmm0 */
L_1803fe9f5_0:;
L_1803fe9f5_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x74))));
L_1803fe9f5_2:;
wr(s->u,56,4,rd(s->r,4608,4));
L_1803fe9f5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,56,4));
L_1803fe9f5_4:;
/* 1803fe9fb: movaps xmm0, xmm3 */
L_1803fe9fb_0:;
L_1803fe9fb_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fe9fb_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fe9fb_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fe9fb_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fe9fb_5:;
/* 1803fe9fe: movss xmm2, dword ptr [r14 + rax*4] */
L_1803fe9fe_0:;
L_1803fe9fe_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fe9fe_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fe9fe_3:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803fe9fe_4:;
wr(s->r,4736,4,rd(s->u,56,4));
L_1803fe9fe_5:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe9fe_6:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe9fe_7:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe9fe_8:;
/* 1803fea04: mulss xmm7, xmm2 */
L_1803fea04_0:;
L_1803fea04_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fea04_2:;
/* 1803fea08: mulss xmm3, xmm2 */
L_1803fea08_0:;
L_1803fea08_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fea08_2:;
/* 1803fea0c: movss xmm1, dword ptr [r14 + rax*4 + 4] */
L_1803fea0c_0:;
L_1803fea0c_1:;
wr(s->u,32,8,(((U)UINT64_C(0x4))+rd(s->r,176,8)));
L_1803fea0c_2:;
wr(s->u,40,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fea0c_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803fea0c_4:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,48,8),4));
L_1803fea0c_5:;
wr(s->r,4672,4,rd(s->u,56,4));
L_1803fea0c_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fea0c_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fea0c_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fea0c_9:;
/* 1803fea13: mulss xmm0, xmm1 */
L_1803fea13_0:;
L_1803fea13_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fea13_2:;
/* 1803fea17: mulss xmm5, xmm1 */
L_1803fea17_0:;
L_1803fea17_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fea17_2:;
/* 1803fea1b: movss xmm2, dword ptr [r14 + rax*4 + 8] */
L_1803fea1b_0:;
L_1803fea1b_1:;
wr(s->u,32,8,(((U)UINT64_C(0x8))+rd(s->r,176,8)));
L_1803fea1b_2:;
wr(s->u,40,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fea1b_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803fea1b_4:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,48,8),4));
L_1803fea1b_5:;
wr(s->r,4736,4,rd(s->u,56,4));
L_1803fea1b_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fea1b_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fea1b_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fea1b_9:;
/* 1803fea22: movss xmm1, dword ptr [r14 + rax*4 + 0xc] */
L_1803fea22_0:;
L_1803fea22_1:;
wr(s->u,32,8,(((U)UINT64_C(0xc))+rd(s->r,176,8)));
L_1803fea22_2:;
wr(s->u,40,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fea22_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803fea22_4:;
wr(s->u,56,4,mr((uint64_t)rd(s->u,48,8),4));
L_1803fea22_5:;
wr(s->r,4672,4,rd(s->u,56,4));
L_1803fea22_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fea22_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fea22_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fea22_9:;
return UINT64_C(0x1803fea29);
}
uint64_t b_1803fea04(CPU*s){
/* 1803fea04: mulss xmm7, xmm2 */
L_1803fea04_0:;
L_1803fea04_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fea04_2:;
/* 1803fea08: mulss xmm3, xmm2 */
L_1803fea08_0:;
L_1803fea08_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fea08_2:;
/* 1803fea0c: movss xmm1, dword ptr [r14 + rax*4 + 4] */
L_1803fea0c_0:;
L_1803fea0c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,176,8)));
L_1803fea0c_2:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fea0c_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fea0c_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fea0c_5:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803fea0c_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fea0c_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fea0c_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fea0c_9:;
/* 1803fea13: mulss xmm0, xmm1 */
L_1803fea13_0:;
L_1803fea13_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fea13_2:;
/* 1803fea17: mulss xmm5, xmm1 */
L_1803fea17_0:;
L_1803fea17_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fea17_2:;
/* 1803fea1b: movss xmm2, dword ptr [r14 + rax*4 + 8] */
L_1803fea1b_0:;
L_1803fea1b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,176,8)));
L_1803fea1b_2:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fea1b_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fea1b_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fea1b_5:;
wr(s->r,4736,4,rd(s->u,40,4));
L_1803fea1b_6:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fea1b_7:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fea1b_8:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fea1b_9:;
/* 1803fea22: movss xmm1, dword ptr [r14 + rax*4 + 0xc] */
L_1803fea22_0:;
L_1803fea22_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,176,8)));
L_1803fea22_2:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fea22_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fea22_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fea22_5:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803fea22_6:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fea22_7:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fea22_8:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fea22_9:;
/* 1803fea29: movss xmm8, dword ptr [r14 + rax*4 + 0x10] */
L_1803fea29_0:;
L_1803fea29_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,176,8)));
L_1803fea29_2:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fea29_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fea29_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fea29_5:;
wr(s->r,5120,4,rd(s->u,40,4));
L_1803fea29_6:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fea29_7:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fea29_8:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fea29_9:;
/* 1803fea30: subss xmm7, xmm0 */
L_1803fea30_0:;
L_1803fea30_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fea30_2:;
/* 1803fea34: movaps xmm0, xmm6 */
L_1803fea34_0:;
L_1803fea34_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fea34_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fea34_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fea34_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fea34_5:;
/* 1803fea37: mulss xmm6, xmm2 */
L_1803fea37_0:;
L_1803fea37_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fea37_2:;
/* 1803fea3b: mulss xmm0, xmm1 */
L_1803fea3b_0:;
L_1803fea3b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fea3b_2:;
/* 1803fea3f: addss xmm5, xmm3 */
L_1803fea3f_0:;
L_1803fea3f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fea3f_2:;
/* 1803fea43: movaps xmm3, xmm4 */
L_1803fea43_0:;
L_1803fea43_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fea43_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fea43_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fea43_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fea43_5:;
/* 1803fea46: mulss xmm4, xmm1 */
L_1803fea46_0:;
L_1803fea46_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fea46_2:;
/* 1803fea4a: mulss xmm3, xmm2 */
L_1803fea4a_0:;
L_1803fea4a_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fea4a_2:;
/* 1803fea4e: movaps xmm2, xmm9 */
L_1803fea4e_0:;
L_1803fea4e_1:;
wr(s->r,4736,4,rd(s->r,5184,4));
L_1803fea4e_2:;
wr(s->r,4740,4,rd(s->r,5188,4));
L_1803fea4e_3:;
wr(s->r,4744,4,rd(s->r,5192,4));
L_1803fea4e_4:;
wr(s->r,4748,4,rd(s->r,5196,4));
L_1803fea4e_5:;
/* 1803fea52: mulss xmm9, xmm8 */
L_1803fea52_0:;
L_1803fea52_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fea52_2:;
/* 1803fea57: movss xmm1, dword ptr [r15 + 0xf8] */
L_1803fea57_0:;
L_1803fea57_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xf8))));
L_1803fea57_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fea57_3:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803fea57_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fea57_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fea57_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fea57_7:;
/* 1803fea60: subss xmm3, xmm0 */
L_1803fea60_0:;
L_1803fea60_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fea60_2:;
/* 1803fea64: movaps xmm0, xmm1 */
L_1803fea64_0:;
L_1803fea64_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803fea64_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803fea64_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803fea64_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803fea64_5:;
/* 1803fea67: mulss xmm0, xmm8 */
L_1803fea67_0:;
L_1803fea67_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fea67_2:;
/* 1803fea6c: addss xmm4, xmm6 */
L_1803fea6c_0:;
L_1803fea6c_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fea6c_2:;
/* 1803fea70: movss xmm6, dword ptr [r14 + rax*4 + 0x14] */
L_1803fea70_0:;
L_1803fea70_1:;
wr(s->u,16,8,(((U)UINT64_C(0x14))+rd(s->r,176,8)));
L_1803fea70_2:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fea70_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fea70_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fea70_5:;
wr(s->r,4992,4,rd(s->u,40,4));
L_1803fea70_6:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fea70_7:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fea70_8:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fea70_9:;
/* 1803fea77: mulss xmm2, xmm6 */
L_1803fea77_0:;
L_1803fea77_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803fea77_2:;
/* 1803fea7b: mulss xmm1, xmm6 */
L_1803fea7b_0:;
L_1803fea7b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803fea7b_2:;
/* 1803fea7f: movaps xmm6, xmm7 */
L_1803fea7f_0:;
L_1803fea7f_1:;
wr(s->r,4992,4,rd(s->r,5056,4));
L_1803fea7f_2:;
wr(s->r,4996,4,rd(s->r,5060,4));
L_1803fea7f_3:;
wr(s->r,5000,4,rd(s->r,5064,4));
L_1803fea7f_4:;
wr(s->r,5004,4,rd(s->r,5068,4));
L_1803fea7f_5:;
/* 1803fea82: subss xmm0, xmm2 */
L_1803fea82_0:;
L_1803fea82_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fea82_2:;
/* 1803fea86: movaps xmm2, xmm5 */
L_1803fea86_0:;
L_1803fea86_1:;
wr(s->r,4736,4,rd(s->r,4928,4));
L_1803fea86_2:;
wr(s->r,4740,4,rd(s->r,4932,4));
L_1803fea86_3:;
wr(s->r,4744,4,rd(s->r,4936,4));
L_1803fea86_4:;
wr(s->r,4748,4,rd(s->r,4940,4));
L_1803fea86_5:;
/* 1803fea89: addss xmm1, xmm9 */
L_1803fea89_0:;
L_1803fea89_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fea89_2:;
/* 1803fea8e: movss xmm9, dword ptr [r15 + 0x3c] */
L_1803fea8e_0:;
L_1803fea8e_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x3c))));
L_1803fea8e_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fea8e_3:;
wr(s->r,5184,4,rd(s->u,40,4));
L_1803fea8e_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fea8e_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fea8e_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fea8e_7:;
/* 1803fea94: movaps xmm8, xmm9 */
L_1803fea94_0:;
L_1803fea94_1:;
wr(s->r,5120,4,rd(s->r,5184,4));
L_1803fea94_2:;
wr(s->r,5124,4,rd(s->r,5188,4));
L_1803fea94_3:;
wr(s->r,5128,4,rd(s->r,5192,4));
L_1803fea94_4:;
wr(s->r,5132,4,rd(s->r,5196,4));
L_1803fea94_5:;
return UINT64_C(0x1803fea98);
}
uint64_t b_1803fea29(CPU*s){
/* 1803fea29: movss xmm8, dword ptr [r14 + rax*4 + 0x10] */
L_1803fea29_0:;
L_1803fea29_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,176,8)));
L_1803fea29_2:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fea29_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fea29_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fea29_5:;
wr(s->r,5120,4,rd(s->u,40,4));
L_1803fea29_6:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fea29_7:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fea29_8:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fea29_9:;
/* 1803fea30: subss xmm7, xmm0 */
L_1803fea30_0:;
L_1803fea30_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fea30_2:;
/* 1803fea34: movaps xmm0, xmm6 */
L_1803fea34_0:;
L_1803fea34_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fea34_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fea34_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fea34_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fea34_5:;
/* 1803fea37: mulss xmm6, xmm2 */
L_1803fea37_0:;
L_1803fea37_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fea37_2:;
/* 1803fea3b: mulss xmm0, xmm1 */
L_1803fea3b_0:;
L_1803fea3b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fea3b_2:;
/* 1803fea3f: addss xmm5, xmm3 */
L_1803fea3f_0:;
L_1803fea3f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fea3f_2:;
/* 1803fea43: movaps xmm3, xmm4 */
L_1803fea43_0:;
L_1803fea43_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fea43_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fea43_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fea43_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fea43_5:;
/* 1803fea46: mulss xmm4, xmm1 */
L_1803fea46_0:;
L_1803fea46_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fea46_2:;
/* 1803fea4a: mulss xmm3, xmm2 */
L_1803fea4a_0:;
L_1803fea4a_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fea4a_2:;
/* 1803fea4e: movaps xmm2, xmm9 */
L_1803fea4e_0:;
L_1803fea4e_1:;
wr(s->r,4736,4,rd(s->r,5184,4));
L_1803fea4e_2:;
wr(s->r,4740,4,rd(s->r,5188,4));
L_1803fea4e_3:;
wr(s->r,4744,4,rd(s->r,5192,4));
L_1803fea4e_4:;
wr(s->r,4748,4,rd(s->r,5196,4));
L_1803fea4e_5:;
/* 1803fea52: mulss xmm9, xmm8 */
L_1803fea52_0:;
L_1803fea52_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fea52_2:;
/* 1803fea57: movss xmm1, dword ptr [r15 + 0xf8] */
L_1803fea57_0:;
L_1803fea57_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xf8))));
L_1803fea57_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fea57_3:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803fea57_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fea57_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fea57_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fea57_7:;
/* 1803fea60: subss xmm3, xmm0 */
L_1803fea60_0:;
L_1803fea60_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fea60_2:;
/* 1803fea64: movaps xmm0, xmm1 */
L_1803fea64_0:;
L_1803fea64_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803fea64_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803fea64_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803fea64_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803fea64_5:;
/* 1803fea67: mulss xmm0, xmm8 */
L_1803fea67_0:;
L_1803fea67_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,5120,4),4),4));
L_1803fea67_2:;
/* 1803fea6c: addss xmm4, xmm6 */
L_1803fea6c_0:;
L_1803fea6c_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fea6c_2:;
/* 1803fea70: movss xmm6, dword ptr [r14 + rax*4 + 0x14] */
L_1803fea70_0:;
L_1803fea70_1:;
wr(s->u,16,8,(((U)UINT64_C(0x14))+rd(s->r,176,8)));
L_1803fea70_2:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fea70_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fea70_4:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fea70_5:;
wr(s->r,4992,4,rd(s->u,40,4));
L_1803fea70_6:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fea70_7:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fea70_8:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fea70_9:;
/* 1803fea77: mulss xmm2, xmm6 */
L_1803fea77_0:;
L_1803fea77_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803fea77_2:;
/* 1803fea7b: mulss xmm1, xmm6 */
L_1803fea7b_0:;
L_1803fea7b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4992,4),4),4));
L_1803fea7b_2:;
/* 1803fea7f: movaps xmm6, xmm7 */
L_1803fea7f_0:;
L_1803fea7f_1:;
wr(s->r,4992,4,rd(s->r,5056,4));
L_1803fea7f_2:;
wr(s->r,4996,4,rd(s->r,5060,4));
L_1803fea7f_3:;
wr(s->r,5000,4,rd(s->r,5064,4));
L_1803fea7f_4:;
wr(s->r,5004,4,rd(s->r,5068,4));
L_1803fea7f_5:;
/* 1803fea82: subss xmm0, xmm2 */
L_1803fea82_0:;
L_1803fea82_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fea82_2:;
/* 1803fea86: movaps xmm2, xmm5 */
L_1803fea86_0:;
L_1803fea86_1:;
wr(s->r,4736,4,rd(s->r,4928,4));
L_1803fea86_2:;
wr(s->r,4740,4,rd(s->r,4932,4));
L_1803fea86_3:;
wr(s->r,4744,4,rd(s->r,4936,4));
L_1803fea86_4:;
wr(s->r,4748,4,rd(s->r,4940,4));
L_1803fea86_5:;
/* 1803fea89: addss xmm1, xmm9 */
L_1803fea89_0:;
L_1803fea89_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fea89_2:;
/* 1803fea8e: movss xmm9, dword ptr [r15 + 0x3c] */
L_1803fea8e_0:;
L_1803fea8e_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x3c))));
L_1803fea8e_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fea8e_3:;
wr(s->r,5184,4,rd(s->u,40,4));
L_1803fea8e_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fea8e_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fea8e_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fea8e_7:;
/* 1803fea94: movaps xmm8, xmm9 */
L_1803fea94_0:;
L_1803fea94_1:;
wr(s->r,5120,4,rd(s->r,5184,4));
L_1803fea94_2:;
wr(s->r,5124,4,rd(s->r,5188,4));
L_1803fea94_3:;
wr(s->r,5128,4,rd(s->r,5192,4));
L_1803fea94_4:;
wr(s->r,5132,4,rd(s->r,5196,4));
L_1803fea94_5:;
/* 1803fea98: addss xmm6, xmm0 */
L_1803fea98_0:;
L_1803fea98_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fea98_2:;
/* 1803fea9c: subss xmm7, xmm0 */
L_1803fea9c_0:;
L_1803fea9c_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fea9c_2:;
/* 1803feaa0: addss xmm2, xmm1 */
L_1803feaa0_0:;
L_1803feaa0_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803feaa0_2:;
/* 1803feaa4: subss xmm5, xmm1 */
L_1803feaa4_0:;
L_1803feaa4_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803feaa4_2:;
/* 1803feaa8: movss xmm1, dword ptr [r15 + 0x38] */
L_1803feaa8_0:;
L_1803feaa8_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x38))));
L_1803feaa8_2:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803feaa8_3:;
wr(s->r,4672,4,rd(s->u,40,4));
L_1803feaa8_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803feaa8_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803feaa8_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803feaa8_7:;
/* 1803feaae: movaps xmm0, xmm1 */
L_1803feaae_0:;
L_1803feaae_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803feaae_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803feaae_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803feaae_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803feaae_5:;
/* 1803feab1: subss xmm1, xmm3 */
L_1803feab1_0:;
L_1803feab1_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803feab1_2:;
return UINT64_C(0x1803feab5);
}
uint64_t b_1803fea98(CPU*s){
/* 1803fea98: addss xmm6, xmm0 */
L_1803fea98_0:;
L_1803fea98_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fea98_2:;
/* 1803fea9c: subss xmm7, xmm0 */
L_1803fea9c_0:;
L_1803fea9c_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fea9c_2:;
/* 1803feaa0: addss xmm2, xmm1 */
L_1803feaa0_0:;
L_1803feaa0_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803feaa0_2:;
/* 1803feaa4: subss xmm5, xmm1 */
L_1803feaa4_0:;
L_1803feaa4_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803feaa4_2:;
/* 1803feaa8: movss xmm1, dword ptr [r15 + 0x38] */
L_1803feaa8_0:;
L_1803feaa8_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x38))));
L_1803feaa8_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803feaa8_3:;
wr(s->r,4672,4,rd(s->u,16,4));
L_1803feaa8_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803feaa8_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803feaa8_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803feaa8_7:;
/* 1803feaae: movaps xmm0, xmm1 */
L_1803feaae_0:;
L_1803feaae_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803feaae_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803feaae_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803feaae_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803feaae_5:;
/* 1803feab1: subss xmm1, xmm3 */
L_1803feab1_0:;
L_1803feab1_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803feab1_2:;
/* 1803feab5: addss xmm8, xmm4 */
L_1803feab5_0:;
L_1803feab5_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803feab5_2:;
/* 1803feaba: addss xmm0, xmm3 */
L_1803feaba_0:;
L_1803feaba_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803feaba_2:;
/* 1803feabe: movaps xmm3, xmm0 */
L_1803feabe_0:;
L_1803feabe_1:;
wr(s->r,4800,4,rd(s->r,4608,4));
L_1803feabe_2:;
wr(s->r,4804,4,rd(s->r,4612,4));
L_1803feabe_3:;
wr(s->r,4808,4,rd(s->r,4616,4));
L_1803feabe_4:;
wr(s->r,4812,4,rd(s->r,4620,4));
L_1803feabe_5:;
/* 1803feac1: subss xmm9, xmm4 */
L_1803feac1_0:;
L_1803feac1_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803feac1_2:;
/* 1803feac6: subss xmm0, xmm6 */
L_1803feac6_0:;
L_1803feac6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803feac6_2:;
/* 1803feaca: movss dword ptr [r15 + 0xb8], xmm0 */
L_1803feaca_0:;
L_1803feaca_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xb8))));
L_1803feaca_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803feaca_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803feaca_4:;
/* 1803fead3: movaps xmm0, xmm1 */
L_1803fead3_0:;
L_1803fead3_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803fead3_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803fead3_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803fead3_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803fead3_5:;
/* 1803fead6: addss xmm3, xmm6 */
L_1803fead6_0:;
L_1803fead6_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fead6_2:;
/* 1803feada: movss dword ptr [r15 + 0x38], xmm3 */
L_1803feada_0:;
L_1803feada_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x38))));
L_1803feada_2:;
wr(s->u,16,4,rd(s->r,4800,4));
L_1803feada_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803feada_4:;
/* 1803feae0: movaps xmm3, xmm8 */
L_1803feae0_0:;
L_1803feae0_1:;
wr(s->r,4800,4,rd(s->r,5120,4));
L_1803feae0_2:;
wr(s->r,4804,4,rd(s->r,5124,4));
L_1803feae0_3:;
wr(s->r,4808,4,rd(s->r,5128,4));
L_1803feae0_4:;
wr(s->r,4812,4,rd(s->r,5132,4));
L_1803feae0_5:;
/* 1803feae4: subss xmm8, xmm2 */
L_1803feae4_0:;
L_1803feae4_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803feae4_2:;
/* 1803feae9: movss dword ptr [r15 + 0xbc], xmm8 */
L_1803feae9_0:;
L_1803feae9_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xbc))));
L_1803feae9_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803feae9_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803feae9_4:;
/* 1803feaf2: addss xmm3, xmm2 */
L_1803feaf2_0:;
L_1803feaf2_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803feaf2_2:;
/* 1803feaf6: movss dword ptr [r15 + 0x3c], xmm3 */
L_1803feaf6_0:;
L_1803feaf6_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x3c))));
L_1803feaf6_2:;
wr(s->u,16,4,rd(s->r,4800,4));
L_1803feaf6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803feaf6_4:;
/* 1803feafc: addss xmm0, xmm5 */
L_1803feafc_0:;
L_1803feafc_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803feafc_2:;
/* 1803feb00: movss dword ptr [r15 + 0x78], xmm0 */
L_1803feb00_0:;
L_1803feb00_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x78))));
L_1803feb00_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803feb00_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803feb00_4:;
/* 1803feb06: movaps xmm0, xmm9 */
L_1803feb06_0:;
L_1803feb06_1:;
wr(s->r,4608,4,rd(s->r,5184,4));
L_1803feb06_2:;
wr(s->r,4612,4,rd(s->r,5188,4));
L_1803feb06_3:;
wr(s->r,4616,4,rd(s->r,5192,4));
L_1803feb06_4:;
wr(s->r,4620,4,rd(s->r,5196,4));
L_1803feb06_5:;
/* 1803feb0a: subss xmm1, xmm5 */
L_1803feb0a_0:;
L_1803feb0a_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803feb0a_2:;
/* 1803feb0e: movss dword ptr [r15 + 0xf8], xmm1 */
L_1803feb0e_0:;
L_1803feb0e_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xf8))));
L_1803feb0e_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803feb0e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803feb0e_4:;
/* 1803feb17: subss xmm0, xmm7 */
L_1803feb17_0:;
L_1803feb17_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,5056,4),4),4));
L_1803feb17_2:;
/* 1803feb1b: movss dword ptr [r15 + 0x7c], xmm0 */
L_1803feb1b_0:;
L_1803feb1b_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x7c))));
L_1803feb1b_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803feb1b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803feb1b_4:;
/* 1803feb21: addss xmm9, xmm7 */
L_1803feb21_0:;
L_1803feb21_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803feb21_2:;
/* 1803feb26: movss dword ptr [r15 + 0xfc], xmm9 */
L_1803feb26_0:;
L_1803feb26_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xfc))));
L_1803feb26_2:;
wr(s->u,16,4,rd(s->r,5184,4));
L_1803feb26_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803feb26_4:;
/* 1803feb2f: add r15, 0x100 */
L_1803feb2f_0:;
L_1803feb2f_1:;
wr(s->r,512,1,(((rd(s->r,184,8)+((U)UINT64_C(0x100)))&(((U)1<<64)-1))<rd(s->r,184,8)));
L_1803feb2f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),((U)UINT64_C(0x100)),8,0));
L_1803feb2f_3:;
wr(s->r,184,8,(rd(s->r,184,8)+((U)UINT64_C(0x100))));
L_1803feb2f_4:;
wr(s->r,519,1,(sx(rd(s->r,184,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803feb2f_5:;
wr(s->r,518,1,(rd(s->r,184,8)==((U)UINT64_C(0x0))));
L_1803feb2f_6:;
wr(s->u,20,8,(rd(s->r,184,8)&((U)UINT64_C(0xff))));
L_1803feb2f_7:;
wr(s->u,28,1,pop(rd(s->u,20,8),8));
L_1803feb2f_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803feb2f_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803feb2f_10:;
/* 1803feb36: cmp r9d, ebp */
L_1803feb36_0:;
L_1803feb36_1:;
wr(s->u,30,4,rd(s->r,40,4));
L_1803feb36_2:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,30,4)));
L_1803feb36_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,30,4),4,1));
L_1803feb36_4:;
wr(s->u,34,4,(rd(s->r,136,4)-rd(s->u,30,4)));
L_1803feb36_5:;
wr(s->r,519,1,(sx(rd(s->u,34,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803feb36_6:;
wr(s->r,518,1,(rd(s->u,34,4)==((U)UINT64_C(0x0))));
L_1803feb36_7:;
wr(s->u,20,4,(rd(s->u,34,4)&((U)UINT64_C(0xff))));
L_1803feb36_8:;
wr(s->u,28,1,pop(rd(s->u,20,4),4));
L_1803feb36_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803feb36_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803feb36_11:;
return UINT64_C(0x1803feb39);
}
uint64_t b_1803feab5(CPU*s){
/* 1803feab5: addss xmm8, xmm4 */
L_1803feab5_0:;
L_1803feab5_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803feab5_2:;
/* 1803feaba: addss xmm0, xmm3 */
L_1803feaba_0:;
L_1803feaba_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803feaba_2:;
/* 1803feabe: movaps xmm3, xmm0 */
L_1803feabe_0:;
L_1803feabe_1:;
wr(s->r,4800,4,rd(s->r,4608,4));
L_1803feabe_2:;
wr(s->r,4804,4,rd(s->r,4612,4));
L_1803feabe_3:;
wr(s->r,4808,4,rd(s->r,4616,4));
L_1803feabe_4:;
wr(s->r,4812,4,rd(s->r,4620,4));
L_1803feabe_5:;
/* 1803feac1: subss xmm9, xmm4 */
L_1803feac1_0:;
L_1803feac1_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803feac1_2:;
/* 1803feac6: subss xmm0, xmm6 */
L_1803feac6_0:;
L_1803feac6_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803feac6_2:;
/* 1803feaca: movss dword ptr [r15 + 0xb8], xmm0 */
L_1803feaca_0:;
L_1803feaca_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xb8))));
L_1803feaca_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803feaca_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803feaca_4:;
/* 1803fead3: movaps xmm0, xmm1 */
L_1803fead3_0:;
L_1803fead3_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803fead3_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803fead3_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803fead3_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803fead3_5:;
/* 1803fead6: addss xmm3, xmm6 */
L_1803fead6_0:;
L_1803fead6_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fead6_2:;
/* 1803feada: movss dword ptr [r15 + 0x38], xmm3 */
L_1803feada_0:;
L_1803feada_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x38))));
L_1803feada_2:;
wr(s->u,16,4,rd(s->r,4800,4));
L_1803feada_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803feada_4:;
/* 1803feae0: movaps xmm3, xmm8 */
L_1803feae0_0:;
L_1803feae0_1:;
wr(s->r,4800,4,rd(s->r,5120,4));
L_1803feae0_2:;
wr(s->r,4804,4,rd(s->r,5124,4));
L_1803feae0_3:;
wr(s->r,4808,4,rd(s->r,5128,4));
L_1803feae0_4:;
wr(s->r,4812,4,rd(s->r,5132,4));
L_1803feae0_5:;
/* 1803feae4: subss xmm8, xmm2 */
L_1803feae4_0:;
L_1803feae4_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803feae4_2:;
/* 1803feae9: movss dword ptr [r15 + 0xbc], xmm8 */
L_1803feae9_0:;
L_1803feae9_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xbc))));
L_1803feae9_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803feae9_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803feae9_4:;
/* 1803feaf2: addss xmm3, xmm2 */
L_1803feaf2_0:;
L_1803feaf2_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803feaf2_2:;
/* 1803feaf6: movss dword ptr [r15 + 0x3c], xmm3 */
L_1803feaf6_0:;
L_1803feaf6_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x3c))));
L_1803feaf6_2:;
wr(s->u,16,4,rd(s->r,4800,4));
L_1803feaf6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803feaf6_4:;
/* 1803feafc: addss xmm0, xmm5 */
L_1803feafc_0:;
L_1803feafc_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803feafc_2:;
/* 1803feb00: movss dword ptr [r15 + 0x78], xmm0 */
L_1803feb00_0:;
L_1803feb00_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x78))));
L_1803feb00_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803feb00_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803feb00_4:;
/* 1803feb06: movaps xmm0, xmm9 */
L_1803feb06_0:;
L_1803feb06_1:;
wr(s->r,4608,4,rd(s->r,5184,4));
L_1803feb06_2:;
wr(s->r,4612,4,rd(s->r,5188,4));
L_1803feb06_3:;
wr(s->r,4616,4,rd(s->r,5192,4));
L_1803feb06_4:;
wr(s->r,4620,4,rd(s->r,5196,4));
L_1803feb06_5:;
/* 1803feb0a: subss xmm1, xmm5 */
L_1803feb0a_0:;
L_1803feb0a_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803feb0a_2:;
/* 1803feb0e: movss dword ptr [r15 + 0xf8], xmm1 */
L_1803feb0e_0:;
L_1803feb0e_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xf8))));
L_1803feb0e_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803feb0e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803feb0e_4:;
/* 1803feb17: subss xmm0, xmm7 */
L_1803feb17_0:;
L_1803feb17_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,5056,4),4),4));
L_1803feb17_2:;
/* 1803feb1b: movss dword ptr [r15 + 0x7c], xmm0 */
L_1803feb1b_0:;
L_1803feb1b_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x7c))));
L_1803feb1b_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803feb1b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803feb1b_4:;
/* 1803feb21: addss xmm9, xmm7 */
L_1803feb21_0:;
L_1803feb21_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803feb21_2:;
/* 1803feb26: movss dword ptr [r15 + 0xfc], xmm9 */
L_1803feb26_0:;
L_1803feb26_1:;
wr(s->u,8,8,(rd(s->r,184,8)+((U)UINT64_C(0xfc))));
L_1803feb26_2:;
wr(s->u,16,4,rd(s->r,5184,4));
L_1803feb26_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803feb26_4:;
/* 1803feb2f: add r15, 0x100 */
L_1803feb2f_0:;
L_1803feb2f_1:;
wr(s->r,512,1,(((rd(s->r,184,8)+((U)UINT64_C(0x100)))&(((U)1<<64)-1))<rd(s->r,184,8)));
L_1803feb2f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,8),((U)UINT64_C(0x100)),8,0));
L_1803feb2f_3:;
wr(s->r,184,8,(rd(s->r,184,8)+((U)UINT64_C(0x100))));
L_1803feb2f_4:;
wr(s->r,519,1,(sx(rd(s->r,184,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803feb2f_5:;
wr(s->r,518,1,(rd(s->r,184,8)==((U)UINT64_C(0x0))));
L_1803feb2f_6:;
wr(s->u,20,8,(rd(s->r,184,8)&((U)UINT64_C(0xff))));
L_1803feb2f_7:;
wr(s->u,28,1,pop(rd(s->u,20,8),8));
L_1803feb2f_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803feb2f_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803feb2f_10:;
/* 1803feb36: cmp r9d, ebp */
L_1803feb36_0:;
L_1803feb36_1:;
wr(s->u,30,4,rd(s->r,40,4));
L_1803feb36_2:;
wr(s->r,512,1,(rd(s->r,136,4)<rd(s->u,30,4)));
L_1803feb36_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),rd(s->u,30,4),4,1));
L_1803feb36_4:;
wr(s->u,34,4,(rd(s->r,136,4)-rd(s->u,30,4)));
L_1803feb36_5:;
wr(s->r,519,1,(sx(rd(s->u,34,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803feb36_6:;
wr(s->r,518,1,(rd(s->u,34,4)==((U)UINT64_C(0x0))));
L_1803feb36_7:;
wr(s->u,20,4,(rd(s->u,34,4)&((U)UINT64_C(0xff))));
L_1803feb36_8:;
wr(s->u,28,1,pop(rd(s->u,20,4),4));
L_1803feb36_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803feb36_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803feb36_11:;
/* 1803feb39: jb 0x1803fe0e4 */
L_1803feb39_0:;
L_1803feb39_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fe0e4);}
L_1803feb39_2:;
return UINT64_C(0x1803feb3f);
}
uint64_t b_1803feb39(CPU*s){
/* 1803feb39: jb 0x1803fe0e4 */
L_1803feb39_0:;
L_1803feb39_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fe0e4);}
L_1803feb39_2:;
return UINT64_C(0x1803feb3f);
}
uint64_t b_1803feb3f(CPU*s){
/* 1803feb3f: movaps xmm6, xmmword ptr [rsp + 0x60] */
L_1803feb3f_0:;
L_1803feb3f_1:;
wr(s->u,5,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803feb3f_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803feb3f_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803feb3f_4:;
wr(s->r,4992,4,rd(s->u,89,4));
L_1803feb3f_5:;
wr(s->r,4996,4,rd(s->u,93,4));
L_1803feb3f_6:;
wr(s->r,5000,4,rd(s->u,97,4));
L_1803feb3f_7:;
wr(s->r,5004,4,rd(s->u,101,4));
L_1803feb3f_8:;
/* 1803feb44: movaps xmm7, xmmword ptr [rsp + 0x50] */
L_1803feb44_0:;
L_1803feb44_1:;
wr(s->u,5,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803feb44_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803feb44_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803feb44_4:;
wr(s->r,5056,4,rd(s->u,89,4));
L_1803feb44_5:;
wr(s->r,5060,4,rd(s->u,93,4));
L_1803feb44_6:;
wr(s->r,5064,4,rd(s->u,97,4));
L_1803feb44_7:;
wr(s->r,5068,4,rd(s->u,101,4));
L_1803feb44_8:;
/* 1803feb49: movaps xmm8, xmmword ptr [rsp + 0x40] */
L_1803feb49_0:;
L_1803feb49_1:;
wr(s->u,5,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803feb49_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803feb49_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803feb49_4:;
wr(s->r,5120,4,rd(s->u,89,4));
L_1803feb49_5:;
wr(s->r,5124,4,rd(s->u,93,4));
L_1803feb49_6:;
wr(s->r,5128,4,rd(s->u,97,4));
L_1803feb49_7:;
wr(s->r,5132,4,rd(s->u,101,4));
L_1803feb49_8:;
/* 1803feb4f: movaps xmm9, xmmword ptr [rsp + 0x30] */
L_1803feb4f_0:;
L_1803feb4f_1:;
wr(s->u,5,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803feb4f_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803feb4f_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803feb4f_4:;
wr(s->r,5184,4,rd(s->u,89,4));
L_1803feb4f_5:;
wr(s->r,5188,4,rd(s->u,93,4));
L_1803feb4f_6:;
wr(s->r,5192,4,rd(s->u,97,4));
L_1803feb4f_7:;
wr(s->r,5196,4,rd(s->u,101,4));
L_1803feb4f_8:;
/* 1803feb55: mov r14, qword ptr [rsp + 0x20] */
L_1803feb55_0:;
L_1803feb55_1:;
wr(s->u,5,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803feb55_2:;
wr(s->u,29,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803feb55_3:;
wr(s->r,176,8,rd(s->u,29,8));
L_1803feb55_4:;
/* 1803feb5a: mov r9d, edx */
L_1803feb5a_0:;
L_1803feb5a_1:;
wr(s->r,136,4,rd(s->r,16,4));
L_1803feb5a_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803feb5a_3:;
/* 1803feb5d: sar r9d, 7 */
L_1803feb5d_0:;
L_1803feb5d_1:;
wr(s->u,77,4,(((U)UINT64_C(0x7))&((U)UINT64_C(0x1f))));
L_1803feb5d_2:;
wr(s->u,81,4,rd(s->r,136,4));
L_1803feb5d_3:;
wr(s->r,136,4,((rd(s->u,77,4)>=32)?(sx(rd(s->r,136,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,136,4),4)>>rd(s->u,77,4))));
L_1803feb5d_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803feb5d_5:;
wr(s->u,62,1,(rd(s->u,77,4)==((U)UINT64_C(0x0))));
L_1803feb5d_6:;
wr(s->u,63,4,(rd(s->u,77,4)-((U)UINT64_C(0x1))));
L_1803feb5d_7:;
wr(s->u,67,4,((rd(s->u,63,4)>=32)?(sx(rd(s->u,81,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,81,4),4)>>rd(s->u,63,4))));
L_1803feb5d_8:;
wr(s->u,71,4,(rd(s->u,67,4)&((U)UINT64_C(0x1))));
L_1803feb5d_9:;
wr(s->u,75,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803feb5d_10:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803feb5d_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803feb5d_12:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803feb5d_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803feb5d_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,75,1)));
L_1803feb5d_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803feb5d_16:;
wr(s->u,76,1,(rd(s->u,77,4)==((U)UINT64_C(0x1))));
L_1803feb5d_17:;
wr(s->u,0,1,rd(s->u,76,1));
L_1803feb5d_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803feb5d_19:;
wr(s->u,2,1,(!rd(s->u,76,1)));
L_1803feb5d_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803feb5d_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803feb5d_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803feb5d_23:;
wr(s->u,43,1,(rd(s->u,77,4)!=((U)UINT64_C(0x0))));
L_1803feb5d_24:;
wr(s->u,44,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803feb5d_25:;
wr(s->u,45,1,(!rd(s->u,43,1)));
L_1803feb5d_26:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,519,1)));
L_1803feb5d_27:;
wr(s->u,47,1,(rd(s->u,43,1)&rd(s->u,44,1)));
L_1803feb5d_28:;
wr(s->r,519,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803feb5d_29:;
wr(s->u,48,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803feb5d_30:;
wr(s->u,49,1,(!rd(s->u,43,1)));
L_1803feb5d_31:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,518,1)));
L_1803feb5d_32:;
wr(s->u,51,1,(rd(s->u,43,1)&rd(s->u,48,1)));
L_1803feb5d_33:;
wr(s->r,518,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803feb5d_34:;
wr(s->u,52,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803feb5d_35:;
wr(s->u,56,1,pop(rd(s->u,52,4),4));
L_1803feb5d_36:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803feb5d_37:;
wr(s->u,58,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803feb5d_38:;
wr(s->u,59,1,(!rd(s->u,43,1)));
L_1803feb5d_39:;
wr(s->u,60,1,(rd(s->u,59,1)&rd(s->r,514,1)));
L_1803feb5d_40:;
wr(s->u,61,1,(rd(s->u,43,1)&rd(s->u,58,1)));
L_1803feb5d_41:;
wr(s->r,514,1,(rd(s->u,60,1)|rd(s->u,61,1)));
L_1803feb5d_42:;
/* 1803feb61: test r9d, r9d */
L_1803feb61_0:;
L_1803feb61_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803feb61_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803feb61_3:;
wr(s->u,85,4,(rd(s->r,136,4)&rd(s->r,136,4)));
L_1803feb61_4:;
wr(s->r,519,1,(sx(rd(s->u,85,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803feb61_5:;
wr(s->r,518,1,(rd(s->u,85,4)==((U)UINT64_C(0x0))));
L_1803feb61_6:;
wr(s->u,37,4,(rd(s->u,85,4)&((U)UINT64_C(0xff))));
L_1803feb61_7:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803feb61_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803feb61_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803feb61_10:;
/* 1803feb64: je 0x180400312 */
L_1803feb64_0:;
L_1803feb64_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803feb64_2:;
return UINT64_C(0x1803feb6a);
}
uint64_t b_1803feb5a(CPU*s){
/* 1803feb5a: mov r9d, edx */
L_1803feb5a_0:;
L_1803feb5a_1:;
wr(s->r,136,4,rd(s->r,16,4));
L_1803feb5a_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803feb5a_3:;
/* 1803feb5d: sar r9d, 7 */
L_1803feb5d_0:;
L_1803feb5d_1:;
wr(s->u,45,4,(((U)UINT64_C(0x7))&((U)UINT64_C(0x1f))));
L_1803feb5d_2:;
wr(s->u,49,4,rd(s->r,136,4));
L_1803feb5d_3:;
wr(s->r,136,4,((rd(s->u,45,4)>=32)?(sx(rd(s->r,136,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,136,4),4)>>rd(s->u,45,4))));
L_1803feb5d_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803feb5d_5:;
wr(s->u,30,1,(rd(s->u,45,4)==((U)UINT64_C(0x0))));
L_1803feb5d_6:;
wr(s->u,31,4,(rd(s->u,45,4)-((U)UINT64_C(0x1))));
L_1803feb5d_7:;
wr(s->u,35,4,((rd(s->u,31,4)>=32)?(sx(rd(s->u,49,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,49,4),4)>>rd(s->u,31,4))));
L_1803feb5d_8:;
wr(s->u,39,4,(rd(s->u,35,4)&((U)UINT64_C(0x1))));
L_1803feb5d_9:;
wr(s->u,43,1,(rd(s->u,39,4)!=((U)UINT64_C(0x0))));
L_1803feb5d_10:;
wr(s->u,0,1,rd(s->u,30,1));
L_1803feb5d_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803feb5d_12:;
wr(s->u,2,1,(!rd(s->u,30,1)));
L_1803feb5d_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803feb5d_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,43,1)));
L_1803feb5d_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803feb5d_16:;
wr(s->u,44,1,(rd(s->u,45,4)==((U)UINT64_C(0x1))));
L_1803feb5d_17:;
wr(s->u,0,1,rd(s->u,44,1));
L_1803feb5d_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803feb5d_19:;
wr(s->u,2,1,(!rd(s->u,44,1)));
L_1803feb5d_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803feb5d_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803feb5d_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803feb5d_23:;
wr(s->u,11,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803feb5d_24:;
wr(s->u,12,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803feb5d_25:;
wr(s->u,13,1,(!rd(s->u,11,1)));
L_1803feb5d_26:;
wr(s->u,14,1,(rd(s->u,13,1)&rd(s->r,519,1)));
L_1803feb5d_27:;
wr(s->u,15,1,(rd(s->u,11,1)&rd(s->u,12,1)));
L_1803feb5d_28:;
wr(s->r,519,1,(rd(s->u,14,1)|rd(s->u,15,1)));
L_1803feb5d_29:;
wr(s->u,16,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803feb5d_30:;
wr(s->u,17,1,(!rd(s->u,11,1)));
L_1803feb5d_31:;
wr(s->u,18,1,(rd(s->u,17,1)&rd(s->r,518,1)));
L_1803feb5d_32:;
wr(s->u,19,1,(rd(s->u,11,1)&rd(s->u,16,1)));
L_1803feb5d_33:;
wr(s->r,518,1,(rd(s->u,18,1)|rd(s->u,19,1)));
L_1803feb5d_34:;
wr(s->u,20,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803feb5d_35:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803feb5d_36:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803feb5d_37:;
wr(s->u,26,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803feb5d_38:;
wr(s->u,27,1,(!rd(s->u,11,1)));
L_1803feb5d_39:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,514,1)));
L_1803feb5d_40:;
wr(s->u,29,1,(rd(s->u,11,1)&rd(s->u,26,1)));
L_1803feb5d_41:;
wr(s->r,514,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803feb5d_42:;
/* 1803feb61: test r9d, r9d */
L_1803feb61_0:;
L_1803feb61_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803feb61_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803feb61_3:;
wr(s->u,53,4,(rd(s->r,136,4)&rd(s->r,136,4)));
L_1803feb61_4:;
wr(s->r,519,1,(sx(rd(s->u,53,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803feb61_5:;
wr(s->r,518,1,(rd(s->u,53,4)==((U)UINT64_C(0x0))));
L_1803feb61_6:;
wr(s->u,5,4,(rd(s->u,53,4)&((U)UINT64_C(0xff))));
L_1803feb61_7:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803feb61_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803feb61_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803feb61_10:;
/* 1803feb64: je 0x180400312 */
L_1803feb64_0:;
L_1803feb64_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803feb64_2:;
return UINT64_C(0x1803feb6a);
}
uint64_t b_1803feb6a(CPU*s){
/* 1803feb6a: sar eax, 2 */
L_1803feb6a_0:;
L_1803feb6a_1:;
wr(s->u,47,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803feb6a_2:;
wr(s->u,51,4,rd(s->r,0,4));
L_1803feb6a_3:;
wr(s->r,0,4,((rd(s->u,47,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,47,4))));
L_1803feb6a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803feb6a_5:;
wr(s->u,32,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803feb6a_6:;
wr(s->u,33,4,(rd(s->u,47,4)-((U)UINT64_C(0x1))));
L_1803feb6a_7:;
wr(s->u,37,4,((rd(s->u,33,4)>=32)?(sx(rd(s->u,51,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,51,4),4)>>rd(s->u,33,4))));
L_1803feb6a_8:;
wr(s->u,41,4,(rd(s->u,37,4)&((U)UINT64_C(0x1))));
L_1803feb6a_9:;
wr(s->u,45,1,(rd(s->u,41,4)!=((U)UINT64_C(0x0))));
L_1803feb6a_10:;
wr(s->u,0,1,rd(s->u,32,1));
L_1803feb6a_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803feb6a_12:;
wr(s->u,2,1,(!rd(s->u,32,1)));
L_1803feb6a_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803feb6a_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,45,1)));
L_1803feb6a_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803feb6a_16:;
wr(s->u,46,1,(rd(s->u,47,4)==((U)UINT64_C(0x1))));
L_1803feb6a_17:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803feb6a_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803feb6a_19:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803feb6a_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803feb6a_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803feb6a_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803feb6a_23:;
wr(s->u,13,1,(rd(s->u,47,4)!=((U)UINT64_C(0x0))));
L_1803feb6a_24:;
wr(s->u,14,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803feb6a_25:;
wr(s->u,15,1,(!rd(s->u,13,1)));
L_1803feb6a_26:;
wr(s->u,16,1,(rd(s->u,15,1)&rd(s->r,519,1)));
L_1803feb6a_27:;
wr(s->u,17,1,(rd(s->u,13,1)&rd(s->u,14,1)));
L_1803feb6a_28:;
wr(s->r,519,1,(rd(s->u,16,1)|rd(s->u,17,1)));
L_1803feb6a_29:;
wr(s->u,18,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803feb6a_30:;
wr(s->u,19,1,(!rd(s->u,13,1)));
L_1803feb6a_31:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,518,1)));
L_1803feb6a_32:;
wr(s->u,21,1,(rd(s->u,13,1)&rd(s->u,18,1)));
L_1803feb6a_33:;
wr(s->r,518,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803feb6a_34:;
wr(s->u,22,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803feb6a_35:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803feb6a_36:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803feb6a_37:;
wr(s->u,28,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803feb6a_38:;
wr(s->u,29,1,(!rd(s->u,13,1)));
L_1803feb6a_39:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,514,1)));
L_1803feb6a_40:;
wr(s->u,31,1,(rd(s->u,13,1)&rd(s->u,28,1)));
L_1803feb6a_41:;
wr(s->r,514,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803feb6a_42:;
/* 1803feb6d: movsxd r10, eax */
L_1803feb6d_0:;
L_1803feb6d_1:;
wr(s->r,144,8,(U)sx(rd(s->r,0,4),4));
L_1803feb6d_2:;
/* 1803feb70: mov rbp, rcx */
L_1803feb70_0:;
L_1803feb70_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1803feb70_2:;
/* 1803feb73: xor eax, eax */
L_1803feb73_0:;
L_1803feb73_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803feb73_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803feb73_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803feb73_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803feb73_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803feb73_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803feb73_7:;
wr(s->u,7,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803feb73_8:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803feb73_9:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803feb73_10:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803feb73_11:;
/* 1803feb75: test r9d, r9d */
L_1803feb75_0:;
L_1803feb75_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803feb75_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803feb75_3:;
wr(s->u,55,4,(rd(s->r,136,4)&rd(s->r,136,4)));
L_1803feb75_4:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803feb75_5:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803feb75_6:;
wr(s->u,7,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803feb75_7:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803feb75_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803feb75_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803feb75_10:;
/* 1803feb78: jle 0x1803fee20 */
L_1803feb78_0:;
L_1803feb78_1:;
wr(s->u,5,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803feb78_2:;
wr(s->u,6,1,((rd(s->r,518,1)!=0)||(rd(s->u,5,1)!=0)));
L_1803feb78_3:;
if(rd(s->u,6,1)){return UINT64_C(0x1803fee20);}
L_1803feb78_4:;
return UINT64_C(0x1803feb7e);
}
uint64_t b_1803feb7e(CPU*s){
/* 1803feb7e: movaps xmmword ptr [rsp + 0x60], xmm6 */
L_1803feb7e_0:;
L_1803feb7e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803feb7e_2:;
wr(s->u,36,16,rd(s->r,4992,16));
L_1803feb7e_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803feb7e_4:;
/* 1803feb83: movaps xmmword ptr [rsp + 0x50], xmm7 */
L_1803feb83_0:;
L_1803feb83_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803feb83_2:;
wr(s->u,36,16,rd(s->r,5056,16));
L_1803feb83_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803feb83_4:;
/* 1803feb88: movaps xmmword ptr [rsp + 0x40], xmm8 */
L_1803feb88_0:;
L_1803feb88_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803feb88_2:;
wr(s->u,36,16,rd(s->r,5120,16));
L_1803feb88_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803feb88_4:;
/* 1803feb8e: movaps xmmword ptr [rsp + 0x30], xmm9 */
L_1803feb8e_0:;
L_1803feb8e_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803feb8e_2:;
wr(s->u,36,16,rd(s->r,5184,16));
L_1803feb8e_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803feb8e_4:;
/* 1803feb94: mov qword ptr [rsp + 0x20], r14 */
L_1803feb94_0:;
L_1803feb94_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803feb94_2:;
wr(s->u,28,8,rd(s->r,176,8));
L_1803feb94_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803feb94_4:;
/* 1803feb99: movss xmm5, dword ptr [rbp] */
L_1803feb99_0:;
L_1803feb99_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803feb99_2:;
wr(s->r,4928,4,rd(s->u,24,4));
L_1803feb99_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803feb99_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803feb99_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803feb99_6:;
/* 1803feb9e: movss xmm8, dword ptr [rbp + 0x100] */
L_1803feb9e_0:;
L_1803feb9e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803feb9e_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803feb9e_3:;
wr(s->r,5120,4,rd(s->u,24,4));
L_1803feb9e_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803feb9e_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803feb9e_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803feb9e_7:;
/* 1803feba7: movaps xmm6, xmm8 */
L_1803feba7_0:;
L_1803feba7_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803feba7_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803feba7_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803feba7_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803feba7_5:;
/* 1803febab: movss xmm7, dword ptr [rbp + 4] */
L_1803febab_0:;
L_1803febab_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803febab_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803febab_3:;
wr(s->r,5056,4,rd(s->u,24,4));
L_1803febab_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803febab_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803febab_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803febab_7:;
/* 1803febb0: movaps xmm4, xmm7 */
L_1803febb0_0:;
L_1803febb0_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803febb0_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803febb0_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803febb0_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803febb0_5:;
/* 1803febb3: movss xmm9, dword ptr [rbp + 0x104] */
L_1803febb3_0:;
L_1803febb3_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803febb3_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803febb3_3:;
wr(s->r,5184,4,rd(s->u,24,4));
L_1803febb3_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803febb3_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803febb3_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803febb3_7:;
/* 1803febbc: movss xmm3, dword ptr [rbp + 0x200] */
L_1803febbc_0:;
L_1803febbc_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803febbc_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803febbc_3:;
wr(s->r,4800,4,rd(s->u,24,4));
L_1803febbc_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803febbc_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803febbc_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803febbc_7:;
/* 1803febc4: movaps xmm0, xmm3 */
L_1803febc4_0:;
L_1803febc4_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803febc4_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803febc4_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803febc4_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803febc4_5:;
/* 1803febc7: movss xmm2, dword ptr [rbp + 0x204] */
L_1803febc7_0:;
L_1803febc7_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803febc7_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803febc7_3:;
wr(s->r,4736,4,rd(s->u,24,4));
L_1803febc7_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803febc7_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803febc7_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803febc7_7:;
/* 1803febcf: movaps xmm1, xmm2 */
L_1803febcf_0:;
L_1803febcf_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803febcf_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803febcf_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803febcf_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803febcf_5:;
/* 1803febd2: addss xmm6, xmm5 */
L_1803febd2_0:;
L_1803febd2_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803febd2_2:;
/* 1803febd6: addss xmm4, xmm9 */
L_1803febd6_0:;
L_1803febd6_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803febd6_2:;
/* 1803febdb: subss xmm5, xmm8 */
L_1803febdb_0:;
L_1803febdb_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803febdb_2:;
/* 1803febe0: movss xmm8, dword ptr [rbp + 0x300] */
L_1803febe0_0:;
L_1803febe0_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x300))));
L_1803febe0_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803febe0_3:;
wr(s->r,5120,4,rd(s->u,24,4));
L_1803febe0_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803febe0_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803febe0_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803febe0_7:;
/* 1803febe9: subss xmm7, xmm9 */
L_1803febe9_0:;
L_1803febe9_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803febe9_2:;
/* 1803febee: movss xmm9, dword ptr [rbp + 0x304] */
L_1803febee_0:;
L_1803febee_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x304))));
L_1803febee_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803febee_3:;
wr(s->r,5184,4,rd(s->u,24,4));
L_1803febee_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803febee_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803febee_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803febee_7:;
/* 1803febf7: addss xmm0, xmm8 */
L_1803febf7_0:;
L_1803febf7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803febf7_2:;
/* 1803febfc: addss xmm1, xmm9 */
L_1803febfc_0:;
L_1803febfc_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803febfc_2:;
/* 1803fec01: subss xmm3, xmm8 */
L_1803fec01_0:;
L_1803fec01_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803fec01_2:;
/* 1803fec06: movaps xmm8, xmm6 */
L_1803fec06_0:;
L_1803fec06_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803fec06_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803fec06_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803fec06_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803fec06_5:;
/* 1803fec0a: subss xmm2, xmm9 */
L_1803fec0a_0:;
L_1803fec0a_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fec0a_2:;
/* 1803fec0f: subss xmm6, xmm0 */
L_1803fec0f_0:;
L_1803fec0f_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fec0f_2:;
/* 1803fec13: movss dword ptr [rbp + 0x200], xmm6 */
L_1803fec13_0:;
L_1803fec13_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803fec13_2:;
wr(s->u,24,4,rd(s->r,4992,4));
L_1803fec13_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803fec13_4:;
/* 1803fec1b: addss xmm8, xmm0 */
L_1803fec1b_0:;
L_1803fec1b_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fec1b_2:;
/* 1803fec20: movss dword ptr [rbp], xmm8 */
L_1803fec20_0:;
L_1803fec20_1:;
wr(s->u,24,4,rd(s->r,5120,4));
L_1803fec20_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,24,4));
L_1803fec20_3:;
/* 1803fec26: movaps xmm8, xmm4 */
L_1803fec26_0:;
L_1803fec26_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803fec26_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803fec26_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803fec26_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803fec26_5:;
/* 1803fec2a: movaps xmm0, xmm5 */
L_1803fec2a_0:;
L_1803fec2a_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fec2a_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fec2a_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fec2a_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fec2a_5:;
return UINT64_C(0x1803fec2d);
}
uint64_t b_1803feb99(CPU*s){
/* 1803feb99: movss xmm5, dword ptr [rbp] */
L_1803feb99_0:;
L_1803feb99_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803feb99_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803feb99_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803feb99_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803feb99_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803feb99_6:;
/* 1803feb9e: movss xmm8, dword ptr [rbp + 0x100] */
L_1803feb9e_0:;
L_1803feb9e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803feb9e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803feb9e_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803feb9e_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803feb9e_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803feb9e_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803feb9e_7:;
/* 1803feba7: movaps xmm6, xmm8 */
L_1803feba7_0:;
L_1803feba7_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803feba7_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803feba7_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803feba7_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803feba7_5:;
/* 1803febab: movss xmm7, dword ptr [rbp + 4] */
L_1803febab_0:;
L_1803febab_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803febab_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803febab_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803febab_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803febab_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803febab_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803febab_7:;
/* 1803febb0: movaps xmm4, xmm7 */
L_1803febb0_0:;
L_1803febb0_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803febb0_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803febb0_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803febb0_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803febb0_5:;
/* 1803febb3: movss xmm9, dword ptr [rbp + 0x104] */
L_1803febb3_0:;
L_1803febb3_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803febb3_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803febb3_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803febb3_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803febb3_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803febb3_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803febb3_7:;
/* 1803febbc: movss xmm3, dword ptr [rbp + 0x200] */
L_1803febbc_0:;
L_1803febbc_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803febbc_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803febbc_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803febbc_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803febbc_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803febbc_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803febbc_7:;
/* 1803febc4: movaps xmm0, xmm3 */
L_1803febc4_0:;
L_1803febc4_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803febc4_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803febc4_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803febc4_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803febc4_5:;
/* 1803febc7: movss xmm2, dword ptr [rbp + 0x204] */
L_1803febc7_0:;
L_1803febc7_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803febc7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803febc7_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803febc7_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803febc7_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803febc7_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803febc7_7:;
/* 1803febcf: movaps xmm1, xmm2 */
L_1803febcf_0:;
L_1803febcf_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803febcf_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803febcf_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803febcf_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803febcf_5:;
/* 1803febd2: addss xmm6, xmm5 */
L_1803febd2_0:;
L_1803febd2_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803febd2_2:;
/* 1803febd6: addss xmm4, xmm9 */
L_1803febd6_0:;
L_1803febd6_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803febd6_2:;
/* 1803febdb: subss xmm5, xmm8 */
L_1803febdb_0:;
L_1803febdb_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803febdb_2:;
/* 1803febe0: movss xmm8, dword ptr [rbp + 0x300] */
L_1803febe0_0:;
L_1803febe0_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x300))));
L_1803febe0_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803febe0_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803febe0_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803febe0_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803febe0_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803febe0_7:;
/* 1803febe9: subss xmm7, xmm9 */
L_1803febe9_0:;
L_1803febe9_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803febe9_2:;
/* 1803febee: movss xmm9, dword ptr [rbp + 0x304] */
L_1803febee_0:;
L_1803febee_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x304))));
L_1803febee_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803febee_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803febee_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803febee_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803febee_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803febee_7:;
/* 1803febf7: addss xmm0, xmm8 */
L_1803febf7_0:;
L_1803febf7_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803febf7_2:;
/* 1803febfc: addss xmm1, xmm9 */
L_1803febfc_0:;
L_1803febfc_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803febfc_2:;
/* 1803fec01: subss xmm3, xmm8 */
L_1803fec01_0:;
L_1803fec01_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803fec01_2:;
/* 1803fec06: movaps xmm8, xmm6 */
L_1803fec06_0:;
L_1803fec06_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803fec06_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803fec06_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803fec06_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803fec06_5:;
/* 1803fec0a: subss xmm2, xmm9 */
L_1803fec0a_0:;
L_1803fec0a_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fec0a_2:;
/* 1803fec0f: subss xmm6, xmm0 */
L_1803fec0f_0:;
L_1803fec0f_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fec0f_2:;
/* 1803fec13: movss dword ptr [rbp + 0x200], xmm6 */
L_1803fec13_0:;
L_1803fec13_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803fec13_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803fec13_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fec13_4:;
/* 1803fec1b: addss xmm8, xmm0 */
L_1803fec1b_0:;
L_1803fec1b_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fec1b_2:;
/* 1803fec20: movss dword ptr [rbp], xmm8 */
L_1803fec20_0:;
L_1803fec20_1:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fec20_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803fec20_3:;
/* 1803fec26: movaps xmm8, xmm4 */
L_1803fec26_0:;
L_1803fec26_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803fec26_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803fec26_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803fec26_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803fec26_5:;
/* 1803fec2a: movaps xmm0, xmm5 */
L_1803fec2a_0:;
L_1803fec2a_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fec2a_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fec2a_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fec2a_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fec2a_5:;
/* 1803fec2d: subss xmm4, xmm1 */
L_1803fec2d_0:;
L_1803fec2d_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fec2d_2:;
/* 1803fec31: movss dword ptr [rbp + 0x204], xmm4 */
L_1803fec31_0:;
L_1803fec31_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803fec31_2:;
wr(s->u,16,4,rd(s->r,4864,4));
L_1803fec31_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fec31_4:;
/* 1803fec39: addss xmm8, xmm1 */
L_1803fec39_0:;
L_1803fec39_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fec39_2:;
/* 1803fec3e: movss dword ptr [rbp + 4], xmm8 */
L_1803fec3e_0:;
L_1803fec3e_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fec3e_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fec3e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fec3e_4:;
/* 1803fec44: addss xmm0, xmm2 */
L_1803fec44_0:;
L_1803fec44_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fec44_2:;
return UINT64_C(0x1803fec48);
}
uint64_t b_1803fec2d(CPU*s){
/* 1803fec2d: subss xmm4, xmm1 */
L_1803fec2d_0:;
L_1803fec2d_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fec2d_2:;
/* 1803fec31: movss dword ptr [rbp + 0x204], xmm4 */
L_1803fec31_0:;
L_1803fec31_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803fec31_2:;
wr(s->u,32,4,rd(s->r,4864,4));
L_1803fec31_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fec31_4:;
/* 1803fec39: addss xmm8, xmm1 */
L_1803fec39_0:;
L_1803fec39_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fec39_2:;
/* 1803fec3e: movss dword ptr [rbp + 4], xmm8 */
L_1803fec3e_0:;
L_1803fec3e_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fec3e_2:;
wr(s->u,32,4,rd(s->r,5120,4));
L_1803fec3e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fec3e_4:;
/* 1803fec44: addss xmm0, xmm2 */
L_1803fec44_0:;
L_1803fec44_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fec44_2:;
/* 1803fec48: movss dword ptr [rbp + 0x100], xmm0 */
L_1803fec48_0:;
L_1803fec48_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803fec48_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fec48_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fec48_4:;
/* 1803fec50: movaps xmm0, xmm7 */
L_1803fec50_0:;
L_1803fec50_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fec50_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fec50_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fec50_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fec50_5:;
/* 1803fec53: subss xmm5, xmm2 */
L_1803fec53_0:;
L_1803fec53_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fec53_2:;
/* 1803fec57: movss dword ptr [rbp + 0x300], xmm5 */
L_1803fec57_0:;
L_1803fec57_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x300))));
L_1803fec57_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803fec57_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fec57_4:;
/* 1803fec5f: subss xmm0, xmm3 */
L_1803fec5f_0:;
L_1803fec5f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fec5f_2:;
/* 1803fec63: movss dword ptr [rbp + 0x104], xmm0 */
L_1803fec63_0:;
L_1803fec63_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803fec63_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fec63_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fec63_4:;
/* 1803fec6b: addss xmm7, xmm3 */
L_1803fec6b_0:;
L_1803fec6b_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fec6b_2:;
/* 1803fec6f: movss dword ptr [rbp + 0x304], xmm7 */
L_1803fec6f_0:;
L_1803fec6f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x304))));
L_1803fec6f_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803fec6f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fec6f_4:;
/* 1803fec77: mov r15, r8 */
L_1803fec77_0:;
L_1803fec77_1:;
wr(s->r,184,8,rd(s->r,128,8));
L_1803fec77_2:;
/* 1803fec7a: lea r14, [r8 + 8] */
L_1803fec7a_0:;
L_1803fec7a_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803fec7a_2:;
wr(s->r,176,8,rd(s->u,0,8));
L_1803fec7a_3:;
/* 1803fec7e: xor r11d, r11d */
L_1803fec7e_0:;
L_1803fec7e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fec7e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fec7e_3:;
wr(s->r,152,4,(rd(s->r,152,4)^rd(s->r,152,4)));
L_1803fec7e_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fec7e_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fec7e_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fec7e_7:;
wr(s->u,36,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fec7e_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803fec7e_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fec7e_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fec7e_11:;
/* 1803fec81: lea r14, [r14 + r10*4] */
L_1803fec81_0:;
L_1803fec81_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fec81_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fec81_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fec81_4:;
/* 1803fec85: lea r15, [r15 + r10*4] */
L_1803fec85_0:;
L_1803fec85_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fec85_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803fec85_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803fec85_4:;
/* 1803fec89: movss xmm3, dword ptr [r15] */
L_1803fec89_0:;
L_1803fec89_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803fec89_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fec89_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fec89_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fec89_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fec89_6:;
/* 1803fec8e: movss xmm1, dword ptr [r15 + 4] */
L_1803fec8e_0:;
L_1803fec8e_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803fec8e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fec8e_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fec8e_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fec8e_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fec8e_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fec8e_7:;
/* 1803fec94: add rbp, 8 */
L_1803fec94_0:;
L_1803fec94_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803fec94_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803fec94_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803fec94_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fec94_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803fec94_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803fec94_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803fec94_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fec94_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fec94_10:;
/* 1803fec98: movss xmm2, dword ptr [rbp + 0x200] */
L_1803fec98_0:;
L_1803fec98_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803fec98_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fec98_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fec98_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fec98_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fec98_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fec98_7:;
/* 1803feca0: movaps xmm4, xmm2 */
L_1803feca0_0:;
L_1803feca0_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803feca0_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803feca0_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803feca0_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803feca0_5:;
/* 1803feca3: mulss xmm2, xmm1 */
L_1803feca3_0:;
L_1803feca3_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803feca3_2:;
/* 1803feca7: mulss xmm4, xmm3 */
L_1803feca7_0:;
L_1803feca7_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803feca7_2:;
/* 1803fecab: movss xmm5, dword ptr [rbp + 0x204] */
L_1803fecab_0:;
L_1803fecab_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803fecab_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fecab_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fecab_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fecab_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fecab_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fecab_7:;
/* 1803fecb3: movaps xmm0, xmm5 */
L_1803fecb3_0:;
L_1803fecb3_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fecb3_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fecb3_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fecb3_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fecb3_5:;
/* 1803fecb6: mulss xmm5, xmm3 */
L_1803fecb6_0:;
L_1803fecb6_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fecb6_2:;
/* 1803fecba: mulss xmm0, xmm1 */
L_1803fecba_0:;
L_1803fecba_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fecba_2:;
/* 1803fecbe: movss xmm1, dword ptr [rbp + 0x100] */
L_1803fecbe_0:;
L_1803fecbe_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803fecbe_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fecbe_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fecbe_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fecbe_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fecbe_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fecbe_7:;
/* 1803fecc6: movaps xmm6, xmm1 */
L_1803fecc6_0:;
L_1803fecc6_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fecc6_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fecc6_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fecc6_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fecc6_5:;
/* 1803fecc9: movss xmm7, dword ptr [rbp + 0x104] */
L_1803fecc9_0:;
L_1803fecc9_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803fecc9_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fecc9_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fecc9_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fecc9_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fecc9_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fecc9_7:;
return UINT64_C(0x1803fecd1);
}
uint64_t b_1803fec48(CPU*s){
/* 1803fec48: movss dword ptr [rbp + 0x100], xmm0 */
L_1803fec48_0:;
L_1803fec48_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803fec48_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fec48_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fec48_4:;
/* 1803fec50: movaps xmm0, xmm7 */
L_1803fec50_0:;
L_1803fec50_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fec50_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fec50_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fec50_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fec50_5:;
/* 1803fec53: subss xmm5, xmm2 */
L_1803fec53_0:;
L_1803fec53_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fec53_2:;
/* 1803fec57: movss dword ptr [rbp + 0x300], xmm5 */
L_1803fec57_0:;
L_1803fec57_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x300))));
L_1803fec57_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803fec57_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fec57_4:;
/* 1803fec5f: subss xmm0, xmm3 */
L_1803fec5f_0:;
L_1803fec5f_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fec5f_2:;
/* 1803fec63: movss dword ptr [rbp + 0x104], xmm0 */
L_1803fec63_0:;
L_1803fec63_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803fec63_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fec63_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fec63_4:;
/* 1803fec6b: addss xmm7, xmm3 */
L_1803fec6b_0:;
L_1803fec6b_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fec6b_2:;
/* 1803fec6f: movss dword ptr [rbp + 0x304], xmm7 */
L_1803fec6f_0:;
L_1803fec6f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x304))));
L_1803fec6f_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803fec6f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fec6f_4:;
/* 1803fec77: mov r15, r8 */
L_1803fec77_0:;
L_1803fec77_1:;
wr(s->r,184,8,rd(s->r,128,8));
L_1803fec77_2:;
/* 1803fec7a: lea r14, [r8 + 8] */
L_1803fec7a_0:;
L_1803fec7a_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803fec7a_2:;
wr(s->r,176,8,rd(s->u,0,8));
L_1803fec7a_3:;
/* 1803fec7e: xor r11d, r11d */
L_1803fec7e_0:;
L_1803fec7e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fec7e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fec7e_3:;
wr(s->r,152,4,(rd(s->r,152,4)^rd(s->r,152,4)));
L_1803fec7e_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fec7e_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fec7e_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fec7e_7:;
wr(s->u,36,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fec7e_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803fec7e_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fec7e_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fec7e_11:;
/* 1803fec81: lea r14, [r14 + r10*4] */
L_1803fec81_0:;
L_1803fec81_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fec81_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fec81_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fec81_4:;
/* 1803fec85: lea r15, [r15 + r10*4] */
L_1803fec85_0:;
L_1803fec85_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fec85_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803fec85_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803fec85_4:;
/* 1803fec89: movss xmm3, dword ptr [r15] */
L_1803fec89_0:;
L_1803fec89_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803fec89_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fec89_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fec89_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fec89_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fec89_6:;
/* 1803fec8e: movss xmm1, dword ptr [r15 + 4] */
L_1803fec8e_0:;
L_1803fec8e_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803fec8e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fec8e_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fec8e_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fec8e_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fec8e_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fec8e_7:;
/* 1803fec94: add rbp, 8 */
L_1803fec94_0:;
L_1803fec94_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803fec94_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803fec94_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803fec94_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fec94_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803fec94_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803fec94_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803fec94_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fec94_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fec94_10:;
/* 1803fec98: movss xmm2, dword ptr [rbp + 0x200] */
L_1803fec98_0:;
L_1803fec98_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803fec98_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fec98_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fec98_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fec98_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fec98_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fec98_7:;
/* 1803feca0: movaps xmm4, xmm2 */
L_1803feca0_0:;
L_1803feca0_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803feca0_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803feca0_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803feca0_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803feca0_5:;
/* 1803feca3: mulss xmm2, xmm1 */
L_1803feca3_0:;
L_1803feca3_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803feca3_2:;
/* 1803feca7: mulss xmm4, xmm3 */
L_1803feca7_0:;
L_1803feca7_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803feca7_2:;
/* 1803fecab: movss xmm5, dword ptr [rbp + 0x204] */
L_1803fecab_0:;
L_1803fecab_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803fecab_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fecab_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fecab_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fecab_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fecab_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fecab_7:;
/* 1803fecb3: movaps xmm0, xmm5 */
L_1803fecb3_0:;
L_1803fecb3_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fecb3_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fecb3_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fecb3_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fecb3_5:;
/* 1803fecb6: mulss xmm5, xmm3 */
L_1803fecb6_0:;
L_1803fecb6_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fecb6_2:;
/* 1803fecba: mulss xmm0, xmm1 */
L_1803fecba_0:;
L_1803fecba_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fecba_2:;
/* 1803fecbe: movss xmm1, dword ptr [rbp + 0x100] */
L_1803fecbe_0:;
L_1803fecbe_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803fecbe_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fecbe_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fecbe_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fecbe_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fecbe_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fecbe_7:;
/* 1803fecc6: movaps xmm6, xmm1 */
L_1803fecc6_0:;
L_1803fecc6_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fecc6_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fecc6_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fecc6_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fecc6_5:;
/* 1803fecc9: movss xmm7, dword ptr [rbp + 0x104] */
L_1803fecc9_0:;
L_1803fecc9_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803fecc9_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fecc9_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fecc9_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fecc9_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fecc9_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fecc9_7:;
/* 1803fecd1: movss xmm3, dword ptr [r14 + 4] */
L_1803fecd1_0:;
L_1803fecd1_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fecd1_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fecd1_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fecd1_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fecd1_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fecd1_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fecd1_7:;
/* 1803fecd7: mulss xmm1, xmm3 */
L_1803fecd7_0:;
L_1803fecd7_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fecd7_2:;
/* 1803fecdb: movss xmm8, dword ptr [rbp + 0x304] */
L_1803fecdb_0:;
L_1803fecdb_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x304))));
L_1803fecdb_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fecdb_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803fecdb_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fecdb_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fecdb_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fecdb_7:;
/* 1803fece4: subss xmm4, xmm0 */
L_1803fece4_0:;
L_1803fece4_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fece4_2:;
/* 1803fece8: movaps xmm0, xmm7 */
L_1803fece8_0:;
L_1803fece8_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fece8_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fece8_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fece8_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fece8_5:;
return UINT64_C(0x1803feceb);
}
uint64_t b_1803fec81(CPU*s){
/* 1803fec81: lea r14, [r14 + r10*4] */
L_1803fec81_0:;
L_1803fec81_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fec81_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fec81_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fec81_4:;
/* 1803fec85: lea r15, [r15 + r10*4] */
L_1803fec85_0:;
L_1803fec85_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fec85_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803fec85_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803fec85_4:;
/* 1803fec89: movss xmm3, dword ptr [r15] */
L_1803fec89_0:;
L_1803fec89_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803fec89_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fec89_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fec89_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fec89_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fec89_6:;
/* 1803fec8e: movss xmm1, dword ptr [r15 + 4] */
L_1803fec8e_0:;
L_1803fec8e_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803fec8e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fec8e_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fec8e_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fec8e_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fec8e_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fec8e_7:;
/* 1803fec94: add rbp, 8 */
L_1803fec94_0:;
L_1803fec94_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803fec94_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803fec94_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803fec94_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fec94_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803fec94_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803fec94_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803fec94_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fec94_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fec94_10:;
/* 1803fec98: movss xmm2, dword ptr [rbp + 0x200] */
L_1803fec98_0:;
L_1803fec98_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803fec98_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fec98_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fec98_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fec98_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fec98_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fec98_7:;
/* 1803feca0: movaps xmm4, xmm2 */
L_1803feca0_0:;
L_1803feca0_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803feca0_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803feca0_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803feca0_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803feca0_5:;
/* 1803feca3: mulss xmm2, xmm1 */
L_1803feca3_0:;
L_1803feca3_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803feca3_2:;
/* 1803feca7: mulss xmm4, xmm3 */
L_1803feca7_0:;
L_1803feca7_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803feca7_2:;
/* 1803fecab: movss xmm5, dword ptr [rbp + 0x204] */
L_1803fecab_0:;
L_1803fecab_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803fecab_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fecab_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fecab_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fecab_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fecab_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fecab_7:;
/* 1803fecb3: movaps xmm0, xmm5 */
L_1803fecb3_0:;
L_1803fecb3_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fecb3_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fecb3_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fecb3_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fecb3_5:;
/* 1803fecb6: mulss xmm5, xmm3 */
L_1803fecb6_0:;
L_1803fecb6_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fecb6_2:;
/* 1803fecba: mulss xmm0, xmm1 */
L_1803fecba_0:;
L_1803fecba_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fecba_2:;
/* 1803fecbe: movss xmm1, dword ptr [rbp + 0x100] */
L_1803fecbe_0:;
L_1803fecbe_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803fecbe_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fecbe_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fecbe_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fecbe_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fecbe_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fecbe_7:;
/* 1803fecc6: movaps xmm6, xmm1 */
L_1803fecc6_0:;
L_1803fecc6_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fecc6_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fecc6_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fecc6_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fecc6_5:;
/* 1803fecc9: movss xmm7, dword ptr [rbp + 0x104] */
L_1803fecc9_0:;
L_1803fecc9_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803fecc9_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fecc9_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fecc9_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fecc9_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fecc9_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fecc9_7:;
/* 1803fecd1: movss xmm3, dword ptr [r14 + 4] */
L_1803fecd1_0:;
L_1803fecd1_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fecd1_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fecd1_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fecd1_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fecd1_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fecd1_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fecd1_7:;
/* 1803fecd7: mulss xmm1, xmm3 */
L_1803fecd7_0:;
L_1803fecd7_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fecd7_2:;
/* 1803fecdb: movss xmm8, dword ptr [rbp + 0x304] */
L_1803fecdb_0:;
L_1803fecdb_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x304))));
L_1803fecdb_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fecdb_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803fecdb_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fecdb_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fecdb_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fecdb_7:;
/* 1803fece4: subss xmm4, xmm0 */
L_1803fece4_0:;
L_1803fece4_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fece4_2:;
/* 1803fece8: movaps xmm0, xmm7 */
L_1803fece8_0:;
L_1803fece8_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fece8_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fece8_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fece8_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fece8_5:;
/* 1803feceb: mulss xmm0, xmm3 */
L_1803feceb_0:;
L_1803feceb_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803feceb_2:;
/* 1803fecef: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fecef_0:;
L_1803fecef_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fecef_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fecef_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fecef_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fecef_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fecef_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fecef_7:;
/* 1803fecf5: addss xmm2, xmm5 */
L_1803fecf5_0:;
L_1803fecf5_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fecf5_2:;
/* 1803fecf9: movss xmm5, dword ptr [r14] */
L_1803fecf9_0:;
L_1803fecf9_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fecf9_2:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fecf9_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fecf9_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fecf9_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fecf9_6:;
/* 1803fecfe: mulss xmm6, xmm5 */
L_1803fecfe_0:;
L_1803fecfe_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fecfe_2:;
/* 1803fed02: mulss xmm7, xmm5 */
L_1803fed02_0:;
L_1803fed02_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fed02_2:;
/* 1803fed06: movss xmm5, dword ptr [rbp + 0x300] */
L_1803fed06_0:;
L_1803fed06_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x300))));
L_1803fed06_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fed06_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fed06_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fed06_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fed06_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fed06_7:;
/* 1803fed0e: movaps xmm9, xmm5 */
L_1803fed0e_0:;
L_1803fed0e_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803fed0e_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803fed0e_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803fed0e_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803fed0e_5:;
/* 1803fed12: mulss xmm5, xmm3 */
L_1803fed12_0:;
L_1803fed12_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fed12_2:;
/* 1803fed16: subss xmm6, xmm0 */
L_1803fed16_0:;
L_1803fed16_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fed16_2:;
/* 1803fed1a: movaps xmm0, xmm8 */
L_1803fed1a_0:;
L_1803fed1a_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fed1a_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fed1a_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fed1a_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fed1a_5:;
return UINT64_C(0x1803fed1e);
}
uint64_t b_1803fecd1(CPU*s){
/* 1803fecd1: movss xmm3, dword ptr [r14 + 4] */
L_1803fecd1_0:;
L_1803fecd1_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fecd1_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fecd1_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fecd1_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fecd1_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fecd1_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fecd1_7:;
/* 1803fecd7: mulss xmm1, xmm3 */
L_1803fecd7_0:;
L_1803fecd7_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fecd7_2:;
/* 1803fecdb: movss xmm8, dword ptr [rbp + 0x304] */
L_1803fecdb_0:;
L_1803fecdb_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x304))));
L_1803fecdb_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fecdb_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fecdb_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fecdb_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fecdb_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fecdb_7:;
/* 1803fece4: subss xmm4, xmm0 */
L_1803fece4_0:;
L_1803fece4_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fece4_2:;
/* 1803fece8: movaps xmm0, xmm7 */
L_1803fece8_0:;
L_1803fece8_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fece8_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fece8_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fece8_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fece8_5:;
/* 1803feceb: mulss xmm0, xmm3 */
L_1803feceb_0:;
L_1803feceb_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803feceb_2:;
/* 1803fecef: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fecef_0:;
L_1803fecef_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fecef_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fecef_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fecef_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fecef_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fecef_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fecef_7:;
/* 1803fecf5: addss xmm2, xmm5 */
L_1803fecf5_0:;
L_1803fecf5_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fecf5_2:;
/* 1803fecf9: movss xmm5, dword ptr [r14] */
L_1803fecf9_0:;
L_1803fecf9_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fecf9_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fecf9_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fecf9_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fecf9_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fecf9_6:;
/* 1803fecfe: mulss xmm6, xmm5 */
L_1803fecfe_0:;
L_1803fecfe_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fecfe_2:;
/* 1803fed02: mulss xmm7, xmm5 */
L_1803fed02_0:;
L_1803fed02_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fed02_2:;
/* 1803fed06: movss xmm5, dword ptr [rbp + 0x300] */
L_1803fed06_0:;
L_1803fed06_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x300))));
L_1803fed06_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fed06_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fed06_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fed06_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fed06_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fed06_7:;
/* 1803fed0e: movaps xmm9, xmm5 */
L_1803fed0e_0:;
L_1803fed0e_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803fed0e_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803fed0e_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803fed0e_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803fed0e_5:;
/* 1803fed12: mulss xmm5, xmm3 */
L_1803fed12_0:;
L_1803fed12_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fed12_2:;
/* 1803fed16: subss xmm6, xmm0 */
L_1803fed16_0:;
L_1803fed16_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fed16_2:;
/* 1803fed1a: movaps xmm0, xmm8 */
L_1803fed1a_0:;
L_1803fed1a_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fed1a_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fed1a_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fed1a_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fed1a_5:;
/* 1803fed1e: mulss xmm0, xmm3 */
L_1803fed1e_0:;
L_1803fed1e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fed1e_2:;
/* 1803fed22: movaps xmm3, xmm4 */
L_1803fed22_0:;
L_1803fed22_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fed22_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fed22_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fed22_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fed22_5:;
/* 1803fed25: addss xmm1, xmm7 */
L_1803fed25_0:;
L_1803fed25_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fed25_2:;
/* 1803fed29: movss xmm7, dword ptr [r14 + 8] */
L_1803fed29_0:;
L_1803fed29_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fed29_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fed29_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fed29_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fed29_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fed29_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fed29_7:;
/* 1803fed2f: mulss xmm9, xmm7 */
L_1803fed2f_0:;
L_1803fed2f_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fed2f_2:;
/* 1803fed34: mulss xmm8, xmm7 */
L_1803fed34_0:;
L_1803fed34_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fed34_2:;
/* 1803fed39: add r11d, 1 */
L_1803fed39_0:;
L_1803fed39_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803fed39_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803fed39_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803fed39_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fed39_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fed39_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fed39_7:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fed39_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fed39_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fed39_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fed39_11:;
/* 1803fed3d: subss xmm9, xmm0 */
L_1803fed3d_0:;
L_1803fed3d_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fed3d_2:;
/* 1803fed42: movaps xmm0, xmm2 */
L_1803fed42_0:;
L_1803fed42_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fed42_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fed42_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fed42_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fed42_5:;
/* 1803fed45: addss xmm5, xmm8 */
L_1803fed45_0:;
L_1803fed45_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fed45_2:;
/* 1803fed4a: movss xmm8, dword ptr [rbp] */
L_1803fed4a_0:;
L_1803fed4a_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803fed4a_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fed4a_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fed4a_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fed4a_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fed4a_6:;
/* 1803fed50: movaps xmm7, xmm8 */
L_1803fed50_0:;
L_1803fed50_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fed50_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fed50_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fed50_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fed50_5:;
/* 1803fed54: addss xmm3, xmm9 */
L_1803fed54_0:;
L_1803fed54_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fed54_2:;
/* 1803fed59: subss xmm4, xmm9 */
L_1803fed59_0:;
L_1803fed59_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fed59_2:;
/* 1803fed5e: addss xmm0, xmm5 */
L_1803fed5e_0:;
L_1803fed5e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fed5e_2:;
/* 1803fed62: subss xmm2, xmm5 */
L_1803fed62_0:;
L_1803fed62_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fed62_2:;
return UINT64_C(0x1803fed66);
}
uint64_t b_1803feceb(CPU*s){
/* 1803feceb: mulss xmm0, xmm3 */
L_1803feceb_0:;
L_1803feceb_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803feceb_2:;
/* 1803fecef: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fecef_0:;
L_1803fecef_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fecef_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fecef_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fecef_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fecef_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fecef_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fecef_7:;
/* 1803fecf5: addss xmm2, xmm5 */
L_1803fecf5_0:;
L_1803fecf5_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fecf5_2:;
/* 1803fecf9: movss xmm5, dword ptr [r14] */
L_1803fecf9_0:;
L_1803fecf9_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fecf9_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fecf9_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fecf9_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fecf9_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fecf9_6:;
/* 1803fecfe: mulss xmm6, xmm5 */
L_1803fecfe_0:;
L_1803fecfe_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fecfe_2:;
/* 1803fed02: mulss xmm7, xmm5 */
L_1803fed02_0:;
L_1803fed02_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fed02_2:;
/* 1803fed06: movss xmm5, dword ptr [rbp + 0x300] */
L_1803fed06_0:;
L_1803fed06_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x300))));
L_1803fed06_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fed06_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fed06_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fed06_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fed06_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fed06_7:;
/* 1803fed0e: movaps xmm9, xmm5 */
L_1803fed0e_0:;
L_1803fed0e_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803fed0e_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803fed0e_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803fed0e_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803fed0e_5:;
/* 1803fed12: mulss xmm5, xmm3 */
L_1803fed12_0:;
L_1803fed12_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fed12_2:;
/* 1803fed16: subss xmm6, xmm0 */
L_1803fed16_0:;
L_1803fed16_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fed16_2:;
/* 1803fed1a: movaps xmm0, xmm8 */
L_1803fed1a_0:;
L_1803fed1a_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fed1a_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fed1a_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fed1a_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fed1a_5:;
/* 1803fed1e: mulss xmm0, xmm3 */
L_1803fed1e_0:;
L_1803fed1e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fed1e_2:;
/* 1803fed22: movaps xmm3, xmm4 */
L_1803fed22_0:;
L_1803fed22_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fed22_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fed22_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fed22_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fed22_5:;
/* 1803fed25: addss xmm1, xmm7 */
L_1803fed25_0:;
L_1803fed25_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fed25_2:;
/* 1803fed29: movss xmm7, dword ptr [r14 + 8] */
L_1803fed29_0:;
L_1803fed29_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fed29_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fed29_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fed29_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fed29_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fed29_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fed29_7:;
/* 1803fed2f: mulss xmm9, xmm7 */
L_1803fed2f_0:;
L_1803fed2f_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fed2f_2:;
/* 1803fed34: mulss xmm8, xmm7 */
L_1803fed34_0:;
L_1803fed34_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fed34_2:;
/* 1803fed39: add r11d, 1 */
L_1803fed39_0:;
L_1803fed39_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803fed39_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803fed39_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803fed39_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fed39_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fed39_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fed39_7:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fed39_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fed39_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fed39_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fed39_11:;
/* 1803fed3d: subss xmm9, xmm0 */
L_1803fed3d_0:;
L_1803fed3d_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fed3d_2:;
/* 1803fed42: movaps xmm0, xmm2 */
L_1803fed42_0:;
L_1803fed42_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fed42_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fed42_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fed42_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fed42_5:;
/* 1803fed45: addss xmm5, xmm8 */
L_1803fed45_0:;
L_1803fed45_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fed45_2:;
/* 1803fed4a: movss xmm8, dword ptr [rbp] */
L_1803fed4a_0:;
L_1803fed4a_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803fed4a_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fed4a_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fed4a_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fed4a_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fed4a_6:;
/* 1803fed50: movaps xmm7, xmm8 */
L_1803fed50_0:;
L_1803fed50_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fed50_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fed50_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fed50_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fed50_5:;
/* 1803fed54: addss xmm3, xmm9 */
L_1803fed54_0:;
L_1803fed54_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fed54_2:;
/* 1803fed59: subss xmm4, xmm9 */
L_1803fed59_0:;
L_1803fed59_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fed59_2:;
/* 1803fed5e: addss xmm0, xmm5 */
L_1803fed5e_0:;
L_1803fed5e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fed5e_2:;
/* 1803fed62: subss xmm2, xmm5 */
L_1803fed62_0:;
L_1803fed62_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fed62_2:;
/* 1803fed66: addss xmm7, xmm6 */
L_1803fed66_0:;
L_1803fed66_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fed66_2:;
/* 1803fed6a: subss xmm8, xmm6 */
L_1803fed6a_0:;
L_1803fed6a_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fed6a_2:;
/* 1803fed6f: movss xmm6, dword ptr [rbp + 4] */
L_1803fed6f_0:;
L_1803fed6f_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fed6f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fed6f_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803fed6f_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fed6f_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fed6f_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fed6f_7:;
/* 1803fed74: movaps xmm5, xmm6 */
L_1803fed74_0:;
L_1803fed74_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fed74_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fed74_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fed74_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fed74_5:;
/* 1803fed77: subss xmm6, xmm1 */
L_1803fed77_0:;
L_1803fed77_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fed77_2:;
return UINT64_C(0x1803fed7b);
}
uint64_t b_1803fed1e(CPU*s){
/* 1803fed1e: mulss xmm0, xmm3 */
L_1803fed1e_0:;
L_1803fed1e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fed1e_2:;
/* 1803fed22: movaps xmm3, xmm4 */
L_1803fed22_0:;
L_1803fed22_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fed22_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fed22_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fed22_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fed22_5:;
/* 1803fed25: addss xmm1, xmm7 */
L_1803fed25_0:;
L_1803fed25_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fed25_2:;
/* 1803fed29: movss xmm7, dword ptr [r14 + 8] */
L_1803fed29_0:;
L_1803fed29_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803fed29_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fed29_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fed29_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fed29_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fed29_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fed29_7:;
/* 1803fed2f: mulss xmm9, xmm7 */
L_1803fed2f_0:;
L_1803fed2f_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fed2f_2:;
/* 1803fed34: mulss xmm8, xmm7 */
L_1803fed34_0:;
L_1803fed34_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803fed34_2:;
/* 1803fed39: add r11d, 1 */
L_1803fed39_0:;
L_1803fed39_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803fed39_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803fed39_3:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803fed39_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fed39_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fed39_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fed39_7:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fed39_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fed39_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fed39_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fed39_11:;
/* 1803fed3d: subss xmm9, xmm0 */
L_1803fed3d_0:;
L_1803fed3d_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fed3d_2:;
/* 1803fed42: movaps xmm0, xmm2 */
L_1803fed42_0:;
L_1803fed42_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fed42_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fed42_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fed42_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fed42_5:;
/* 1803fed45: addss xmm5, xmm8 */
L_1803fed45_0:;
L_1803fed45_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fed45_2:;
/* 1803fed4a: movss xmm8, dword ptr [rbp] */
L_1803fed4a_0:;
L_1803fed4a_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803fed4a_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fed4a_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fed4a_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fed4a_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fed4a_6:;
/* 1803fed50: movaps xmm7, xmm8 */
L_1803fed50_0:;
L_1803fed50_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803fed50_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803fed50_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803fed50_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803fed50_5:;
/* 1803fed54: addss xmm3, xmm9 */
L_1803fed54_0:;
L_1803fed54_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fed54_2:;
/* 1803fed59: subss xmm4, xmm9 */
L_1803fed59_0:;
L_1803fed59_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fed59_2:;
/* 1803fed5e: addss xmm0, xmm5 */
L_1803fed5e_0:;
L_1803fed5e_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fed5e_2:;
/* 1803fed62: subss xmm2, xmm5 */
L_1803fed62_0:;
L_1803fed62_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fed62_2:;
/* 1803fed66: addss xmm7, xmm6 */
L_1803fed66_0:;
L_1803fed66_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fed66_2:;
/* 1803fed6a: subss xmm8, xmm6 */
L_1803fed6a_0:;
L_1803fed6a_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fed6a_2:;
/* 1803fed6f: movss xmm6, dword ptr [rbp + 4] */
L_1803fed6f_0:;
L_1803fed6f_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fed6f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fed6f_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803fed6f_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fed6f_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fed6f_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fed6f_7:;
/* 1803fed74: movaps xmm5, xmm6 */
L_1803fed74_0:;
L_1803fed74_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fed74_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fed74_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fed74_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fed74_5:;
/* 1803fed77: subss xmm6, xmm1 */
L_1803fed77_0:;
L_1803fed77_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fed77_2:;
/* 1803fed7b: cmp r11d, 0x1f */
L_1803fed7b_0:;
L_1803fed7b_1:;
wr(s->u,26,4,rd(s->r,152,4));
L_1803fed7b_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x1f))));
L_1803fed7b_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x1f)),4,1));
L_1803fed7b_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x1f))));
L_1803fed7b_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fed7b_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803fed7b_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803fed7b_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fed7b_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fed7b_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fed7b_11:;
/* 1803fed7f: addss xmm5, xmm1 */
L_1803fed7f_0:;
L_1803fed7f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fed7f_2:;
/* 1803fed83: movaps xmm1, xmm7 */
L_1803fed83_0:;
L_1803fed83_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fed83_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fed83_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fed83_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fed83_5:;
/* 1803fed86: subss xmm7, xmm3 */
L_1803fed86_0:;
L_1803fed86_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fed86_2:;
/* 1803fed8a: movss dword ptr [rbp + 0x200], xmm7 */
L_1803fed8a_0:;
L_1803fed8a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803fed8a_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803fed8a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fed8a_4:;
/* 1803fed92: addss xmm1, xmm3 */
L_1803fed92_0:;
L_1803fed92_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fed92_2:;
/* 1803fed96: movss dword ptr [rbp], xmm1 */
L_1803fed96_0:;
L_1803fed96_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fed96_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803fed96_3:;
/* 1803fed9b: movaps xmm1, xmm5 */
L_1803fed9b_0:;
L_1803fed9b_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fed9b_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fed9b_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fed9b_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fed9b_5:;
/* 1803fed9e: subss xmm5, xmm0 */
L_1803fed9e_0:;
L_1803fed9e_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fed9e_2:;
/* 1803feda2: movss dword ptr [rbp + 0x204], xmm5 */
L_1803feda2_0:;
L_1803feda2_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803feda2_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803feda2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803feda2_4:;
/* 1803fedaa: addss xmm1, xmm0 */
L_1803fedaa_0:;
L_1803fedaa_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fedaa_2:;
return UINT64_C(0x1803fedae);
}
uint64_t b_1803fed66(CPU*s){
/* 1803fed66: addss xmm7, xmm6 */
L_1803fed66_0:;
L_1803fed66_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803fed66_2:;
/* 1803fed6a: subss xmm8, xmm6 */
L_1803fed6a_0:;
L_1803fed6a_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803fed6a_2:;
/* 1803fed6f: movss xmm6, dword ptr [rbp + 4] */
L_1803fed6f_0:;
L_1803fed6f_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fed6f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fed6f_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803fed6f_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803fed6f_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803fed6f_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803fed6f_7:;
/* 1803fed74: movaps xmm5, xmm6 */
L_1803fed74_0:;
L_1803fed74_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803fed74_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803fed74_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803fed74_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803fed74_5:;
/* 1803fed77: subss xmm6, xmm1 */
L_1803fed77_0:;
L_1803fed77_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fed77_2:;
/* 1803fed7b: cmp r11d, 0x1f */
L_1803fed7b_0:;
L_1803fed7b_1:;
wr(s->u,26,4,rd(s->r,152,4));
L_1803fed7b_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x1f))));
L_1803fed7b_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x1f)),4,1));
L_1803fed7b_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x1f))));
L_1803fed7b_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fed7b_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803fed7b_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803fed7b_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fed7b_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fed7b_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fed7b_11:;
/* 1803fed7f: addss xmm5, xmm1 */
L_1803fed7f_0:;
L_1803fed7f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fed7f_2:;
/* 1803fed83: movaps xmm1, xmm7 */
L_1803fed83_0:;
L_1803fed83_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fed83_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fed83_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fed83_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fed83_5:;
/* 1803fed86: subss xmm7, xmm3 */
L_1803fed86_0:;
L_1803fed86_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fed86_2:;
/* 1803fed8a: movss dword ptr [rbp + 0x200], xmm7 */
L_1803fed8a_0:;
L_1803fed8a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803fed8a_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803fed8a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fed8a_4:;
/* 1803fed92: addss xmm1, xmm3 */
L_1803fed92_0:;
L_1803fed92_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fed92_2:;
/* 1803fed96: movss dword ptr [rbp], xmm1 */
L_1803fed96_0:;
L_1803fed96_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fed96_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803fed96_3:;
/* 1803fed9b: movaps xmm1, xmm5 */
L_1803fed9b_0:;
L_1803fed9b_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fed9b_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fed9b_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fed9b_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fed9b_5:;
/* 1803fed9e: subss xmm5, xmm0 */
L_1803fed9e_0:;
L_1803fed9e_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fed9e_2:;
/* 1803feda2: movss dword ptr [rbp + 0x204], xmm5 */
L_1803feda2_0:;
L_1803feda2_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803feda2_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803feda2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803feda2_4:;
/* 1803fedaa: addss xmm1, xmm0 */
L_1803fedaa_0:;
L_1803fedaa_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fedaa_2:;
/* 1803fedae: movss dword ptr [rbp + 4], xmm1 */
L_1803fedae_0:;
L_1803fedae_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fedae_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fedae_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fedae_4:;
/* 1803fedb3: movaps xmm0, xmm8 */
L_1803fedb3_0:;
L_1803fedb3_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fedb3_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fedb3_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fedb3_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fedb3_5:;
/* 1803fedb7: subss xmm8, xmm2 */
L_1803fedb7_0:;
L_1803fedb7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fedb7_2:;
/* 1803fedbc: movss dword ptr [rbp + 0x300], xmm8 */
L_1803fedbc_0:;
L_1803fedbc_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x300))));
L_1803fedbc_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fedbc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fedbc_4:;
/* 1803fedc5: addss xmm0, xmm2 */
L_1803fedc5_0:;
L_1803fedc5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fedc5_2:;
/* 1803fedc9: movss dword ptr [rbp + 0x100], xmm0 */
L_1803fedc9_0:;
L_1803fedc9_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803fedc9_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fedc9_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fedc9_4:;
/* 1803fedd1: movaps xmm0, xmm6 */
L_1803fedd1_0:;
L_1803fedd1_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fedd1_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fedd1_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fedd1_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fedd1_5:;
/* 1803fedd4: addss xmm6, xmm4 */
L_1803fedd4_0:;
L_1803fedd4_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fedd4_2:;
/* 1803fedd8: movss dword ptr [rbp + 0x304], xmm6 */
L_1803fedd8_0:;
L_1803fedd8_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x304))));
L_1803fedd8_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803fedd8_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fedd8_4:;
/* 1803fede0: subss xmm0, xmm4 */
L_1803fede0_0:;
L_1803fede0_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fede0_2:;
/* 1803fede4: movss dword ptr [rbp + 0x104], xmm0 */
L_1803fede4_0:;
L_1803fede4_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803fede4_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fede4_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fede4_4:;
/* 1803fedec: jb 0x1803fec81 */
L_1803fedec_0:;
L_1803fedec_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fec81);}
L_1803fedec_2:;
return UINT64_C(0x1803fedf2);
}
uint64_t b_1803fed7b(CPU*s){
/* 1803fed7b: cmp r11d, 0x1f */
L_1803fed7b_0:;
L_1803fed7b_1:;
wr(s->u,26,4,rd(s->r,152,4));
L_1803fed7b_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x1f))));
L_1803fed7b_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x1f)),4,1));
L_1803fed7b_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x1f))));
L_1803fed7b_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fed7b_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803fed7b_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803fed7b_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fed7b_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fed7b_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fed7b_11:;
/* 1803fed7f: addss xmm5, xmm1 */
L_1803fed7f_0:;
L_1803fed7f_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fed7f_2:;
/* 1803fed83: movaps xmm1, xmm7 */
L_1803fed83_0:;
L_1803fed83_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803fed83_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803fed83_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803fed83_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803fed83_5:;
/* 1803fed86: subss xmm7, xmm3 */
L_1803fed86_0:;
L_1803fed86_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fed86_2:;
/* 1803fed8a: movss dword ptr [rbp + 0x200], xmm7 */
L_1803fed8a_0:;
L_1803fed8a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x200))));
L_1803fed8a_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803fed8a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fed8a_4:;
/* 1803fed92: addss xmm1, xmm3 */
L_1803fed92_0:;
L_1803fed92_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fed92_2:;
/* 1803fed96: movss dword ptr [rbp], xmm1 */
L_1803fed96_0:;
L_1803fed96_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fed96_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803fed96_3:;
/* 1803fed9b: movaps xmm1, xmm5 */
L_1803fed9b_0:;
L_1803fed9b_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fed9b_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fed9b_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fed9b_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fed9b_5:;
/* 1803fed9e: subss xmm5, xmm0 */
L_1803fed9e_0:;
L_1803fed9e_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fed9e_2:;
/* 1803feda2: movss dword ptr [rbp + 0x204], xmm5 */
L_1803feda2_0:;
L_1803feda2_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x204))));
L_1803feda2_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803feda2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803feda2_4:;
/* 1803fedaa: addss xmm1, xmm0 */
L_1803fedaa_0:;
L_1803fedaa_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fedaa_2:;
/* 1803fedae: movss dword ptr [rbp + 4], xmm1 */
L_1803fedae_0:;
L_1803fedae_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fedae_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fedae_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fedae_4:;
/* 1803fedb3: movaps xmm0, xmm8 */
L_1803fedb3_0:;
L_1803fedb3_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fedb3_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fedb3_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fedb3_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fedb3_5:;
/* 1803fedb7: subss xmm8, xmm2 */
L_1803fedb7_0:;
L_1803fedb7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fedb7_2:;
/* 1803fedbc: movss dword ptr [rbp + 0x300], xmm8 */
L_1803fedbc_0:;
L_1803fedbc_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x300))));
L_1803fedbc_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fedbc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fedbc_4:;
/* 1803fedc5: addss xmm0, xmm2 */
L_1803fedc5_0:;
L_1803fedc5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fedc5_2:;
/* 1803fedc9: movss dword ptr [rbp + 0x100], xmm0 */
L_1803fedc9_0:;
L_1803fedc9_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803fedc9_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fedc9_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fedc9_4:;
/* 1803fedd1: movaps xmm0, xmm6 */
L_1803fedd1_0:;
L_1803fedd1_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fedd1_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fedd1_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fedd1_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fedd1_5:;
/* 1803fedd4: addss xmm6, xmm4 */
L_1803fedd4_0:;
L_1803fedd4_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fedd4_2:;
/* 1803fedd8: movss dword ptr [rbp + 0x304], xmm6 */
L_1803fedd8_0:;
L_1803fedd8_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x304))));
L_1803fedd8_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803fedd8_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fedd8_4:;
/* 1803fede0: subss xmm0, xmm4 */
L_1803fede0_0:;
L_1803fede0_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fede0_2:;
/* 1803fede4: movss dword ptr [rbp + 0x104], xmm0 */
L_1803fede4_0:;
L_1803fede4_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803fede4_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fede4_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fede4_4:;
/* 1803fedec: jb 0x1803fec81 */
L_1803fedec_0:;
L_1803fedec_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fec81);}
L_1803fedec_2:;
return UINT64_C(0x1803fedf2);
}
uint64_t b_1803fedae(CPU*s){
/* 1803fedae: movss dword ptr [rbp + 4], xmm1 */
L_1803fedae_0:;
L_1803fedae_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fedae_2:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803fedae_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fedae_4:;
/* 1803fedb3: movaps xmm0, xmm8 */
L_1803fedb3_0:;
L_1803fedb3_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fedb3_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fedb3_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fedb3_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fedb3_5:;
/* 1803fedb7: subss xmm8, xmm2 */
L_1803fedb7_0:;
L_1803fedb7_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fedb7_2:;
/* 1803fedbc: movss dword ptr [rbp + 0x300], xmm8 */
L_1803fedbc_0:;
L_1803fedbc_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x300))));
L_1803fedbc_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fedbc_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fedbc_4:;
/* 1803fedc5: addss xmm0, xmm2 */
L_1803fedc5_0:;
L_1803fedc5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fedc5_2:;
/* 1803fedc9: movss dword ptr [rbp + 0x100], xmm0 */
L_1803fedc9_0:;
L_1803fedc9_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x100))));
L_1803fedc9_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fedc9_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fedc9_4:;
/* 1803fedd1: movaps xmm0, xmm6 */
L_1803fedd1_0:;
L_1803fedd1_1:;
wr(s->r,4608,4,rd(s->r,4992,4));
L_1803fedd1_2:;
wr(s->r,4612,4,rd(s->r,4996,4));
L_1803fedd1_3:;
wr(s->r,4616,4,rd(s->r,5000,4));
L_1803fedd1_4:;
wr(s->r,4620,4,rd(s->r,5004,4));
L_1803fedd1_5:;
/* 1803fedd4: addss xmm6, xmm4 */
L_1803fedd4_0:;
L_1803fedd4_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fedd4_2:;
/* 1803fedd8: movss dword ptr [rbp + 0x304], xmm6 */
L_1803fedd8_0:;
L_1803fedd8_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x304))));
L_1803fedd8_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803fedd8_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fedd8_4:;
/* 1803fede0: subss xmm0, xmm4 */
L_1803fede0_0:;
L_1803fede0_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fede0_2:;
/* 1803fede4: movss dword ptr [rbp + 0x104], xmm0 */
L_1803fede4_0:;
L_1803fede4_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x104))));
L_1803fede4_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fede4_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fede4_4:;
/* 1803fedec: jb 0x1803fec81 */
L_1803fedec_0:;
L_1803fedec_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fec81);}
L_1803fedec_2:;
return UINT64_C(0x1803fedf2);
}
uint64_t b_1803fedf2(CPU*s){
/* 1803fedf2: add rbp, 0x308 */
L_1803fedf2_0:;
L_1803fedf2_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x308)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803fedf2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x308)),8,0));
L_1803fedf2_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x308))));
L_1803fedf2_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fedf2_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803fedf2_6:;
wr(s->u,0,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803fedf2_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fedf2_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fedf2_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fedf2_10:;
/* 1803fedf9: add eax, 1 */
L_1803fedf9_0:;
L_1803fedf9_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803fedf9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0x1)),4,0));
L_1803fedf9_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0x1))));
L_1803fedf9_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fedf9_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fedf9_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fedf9_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fedf9_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fedf9_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fedf9_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fedf9_11:;
/* 1803fedfc: cmp eax, r9d */
L_1803fedfc_0:;
L_1803fedfc_1:;
wr(s->u,10,4,rd(s->r,136,4));
L_1803fedfc_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,10,4)));
L_1803fedfc_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,10,4),4,1));
L_1803fedfc_4:;
wr(s->u,14,4,(rd(s->r,0,4)-rd(s->u,10,4)));
L_1803fedfc_5:;
wr(s->r,519,1,(sx(rd(s->u,14,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fedfc_6:;
wr(s->r,518,1,(rd(s->u,14,4)==((U)UINT64_C(0x0))));
L_1803fedfc_7:;
wr(s->u,0,4,(rd(s->u,14,4)&((U)UINT64_C(0xff))));
L_1803fedfc_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fedfc_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fedfc_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fedfc_11:;
/* 1803fedff: jb 0x1803feb99 */
L_1803fedff_0:;
L_1803fedff_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803feb99);}
L_1803fedff_2:;
return UINT64_C(0x1803fee05);
}
uint64_t b_1803fee05(CPU*s){
/* 1803fee05: movaps xmm6, xmmword ptr [rsp + 0x60] */
L_1803fee05_0:;
L_1803fee05_1:;
wr(s->u,5,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803fee05_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803fee05_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803fee05_4:;
wr(s->r,4992,4,rd(s->u,89,4));
L_1803fee05_5:;
wr(s->r,4996,4,rd(s->u,93,4));
L_1803fee05_6:;
wr(s->r,5000,4,rd(s->u,97,4));
L_1803fee05_7:;
wr(s->r,5004,4,rd(s->u,101,4));
L_1803fee05_8:;
/* 1803fee0a: movaps xmm7, xmmword ptr [rsp + 0x50] */
L_1803fee0a_0:;
L_1803fee0a_1:;
wr(s->u,5,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803fee0a_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803fee0a_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803fee0a_4:;
wr(s->r,5056,4,rd(s->u,89,4));
L_1803fee0a_5:;
wr(s->r,5060,4,rd(s->u,93,4));
L_1803fee0a_6:;
wr(s->r,5064,4,rd(s->u,97,4));
L_1803fee0a_7:;
wr(s->r,5068,4,rd(s->u,101,4));
L_1803fee0a_8:;
/* 1803fee0f: movaps xmm8, xmmword ptr [rsp + 0x40] */
L_1803fee0f_0:;
L_1803fee0f_1:;
wr(s->u,5,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fee0f_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803fee0f_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803fee0f_4:;
wr(s->r,5120,4,rd(s->u,89,4));
L_1803fee0f_5:;
wr(s->r,5124,4,rd(s->u,93,4));
L_1803fee0f_6:;
wr(s->r,5128,4,rd(s->u,97,4));
L_1803fee0f_7:;
wr(s->r,5132,4,rd(s->u,101,4));
L_1803fee0f_8:;
/* 1803fee15: movaps xmm9, xmmword ptr [rsp + 0x30] */
L_1803fee15_0:;
L_1803fee15_1:;
wr(s->u,5,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fee15_2:;
wr(s->u,13,16,mr((uint64_t)rd(s->u,5,8),16));
L_1803fee15_3:;
wr(s->u,89,16,rd(s->u,13,16));
L_1803fee15_4:;
wr(s->r,5184,4,rd(s->u,89,4));
L_1803fee15_5:;
wr(s->r,5188,4,rd(s->u,93,4));
L_1803fee15_6:;
wr(s->r,5192,4,rd(s->u,97,4));
L_1803fee15_7:;
wr(s->r,5196,4,rd(s->u,101,4));
L_1803fee15_8:;
/* 1803fee1b: mov r14, qword ptr [rsp + 0x20] */
L_1803fee1b_0:;
L_1803fee1b_1:;
wr(s->u,5,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fee1b_2:;
wr(s->u,29,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803fee1b_3:;
wr(s->r,176,8,rd(s->u,29,8));
L_1803fee1b_4:;
/* 1803fee20: mov r11d, edx */
L_1803fee20_0:;
L_1803fee20_1:;
wr(s->r,152,4,rd(s->r,16,4));
L_1803fee20_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fee20_3:;
/* 1803fee23: sar r11d, 9 */
L_1803fee23_0:;
L_1803fee23_1:;
wr(s->u,77,4,(((U)UINT64_C(0x9))&((U)UINT64_C(0x1f))));
L_1803fee23_2:;
wr(s->u,81,4,rd(s->r,152,4));
L_1803fee23_3:;
wr(s->r,152,4,((rd(s->u,77,4)>=32)?(sx(rd(s->r,152,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,152,4),4)>>rd(s->u,77,4))));
L_1803fee23_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fee23_5:;
wr(s->u,62,1,(rd(s->u,77,4)==((U)UINT64_C(0x0))));
L_1803fee23_6:;
wr(s->u,63,4,(rd(s->u,77,4)-((U)UINT64_C(0x1))));
L_1803fee23_7:;
wr(s->u,67,4,((rd(s->u,63,4)>=32)?(sx(rd(s->u,81,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,81,4),4)>>rd(s->u,63,4))));
L_1803fee23_8:;
wr(s->u,71,4,(rd(s->u,67,4)&((U)UINT64_C(0x1))));
L_1803fee23_9:;
wr(s->u,75,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803fee23_10:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803fee23_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fee23_12:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803fee23_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fee23_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,75,1)));
L_1803fee23_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fee23_16:;
wr(s->u,76,1,(rd(s->u,77,4)==((U)UINT64_C(0x1))));
L_1803fee23_17:;
wr(s->u,0,1,rd(s->u,76,1));
L_1803fee23_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fee23_19:;
wr(s->u,2,1,(!rd(s->u,76,1)));
L_1803fee23_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fee23_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fee23_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fee23_23:;
wr(s->u,43,1,(rd(s->u,77,4)!=((U)UINT64_C(0x0))));
L_1803fee23_24:;
wr(s->u,44,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fee23_25:;
wr(s->u,45,1,(!rd(s->u,43,1)));
L_1803fee23_26:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,519,1)));
L_1803fee23_27:;
wr(s->u,47,1,(rd(s->u,43,1)&rd(s->u,44,1)));
L_1803fee23_28:;
wr(s->r,519,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803fee23_29:;
wr(s->u,48,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fee23_30:;
wr(s->u,49,1,(!rd(s->u,43,1)));
L_1803fee23_31:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,518,1)));
L_1803fee23_32:;
wr(s->u,51,1,(rd(s->u,43,1)&rd(s->u,48,1)));
L_1803fee23_33:;
wr(s->r,518,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803fee23_34:;
wr(s->u,52,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fee23_35:;
wr(s->u,56,1,pop(rd(s->u,52,4),4));
L_1803fee23_36:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803fee23_37:;
wr(s->u,58,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803fee23_38:;
wr(s->u,59,1,(!rd(s->u,43,1)));
L_1803fee23_39:;
wr(s->u,60,1,(rd(s->u,59,1)&rd(s->r,514,1)));
L_1803fee23_40:;
wr(s->u,61,1,(rd(s->u,43,1)&rd(s->u,58,1)));
L_1803fee23_41:;
wr(s->r,514,1,(rd(s->u,60,1)|rd(s->u,61,1)));
L_1803fee23_42:;
/* 1803fee27: test r11d, r11d */
L_1803fee27_0:;
L_1803fee27_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fee27_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fee27_3:;
wr(s->u,85,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803fee27_4:;
wr(s->r,519,1,(sx(rd(s->u,85,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fee27_5:;
wr(s->r,518,1,(rd(s->u,85,4)==((U)UINT64_C(0x0))));
L_1803fee27_6:;
wr(s->u,37,4,(rd(s->u,85,4)&((U)UINT64_C(0xff))));
L_1803fee27_7:;
wr(s->u,41,1,pop(rd(s->u,37,4),4));
L_1803fee27_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803fee27_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803fee27_10:;
/* 1803fee2a: je 0x180400312 */
L_1803fee2a_0:;
L_1803fee2a_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803fee2a_2:;
return UINT64_C(0x1803fee30);
}
uint64_t b_1803fee20(CPU*s){
/* 1803fee20: mov r11d, edx */
L_1803fee20_0:;
L_1803fee20_1:;
wr(s->r,152,4,rd(s->r,16,4));
L_1803fee20_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fee20_3:;
/* 1803fee23: sar r11d, 9 */
L_1803fee23_0:;
L_1803fee23_1:;
wr(s->u,45,4,(((U)UINT64_C(0x9))&((U)UINT64_C(0x1f))));
L_1803fee23_2:;
wr(s->u,49,4,rd(s->r,152,4));
L_1803fee23_3:;
wr(s->r,152,4,((rd(s->u,45,4)>=32)?(sx(rd(s->r,152,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,152,4),4)>>rd(s->u,45,4))));
L_1803fee23_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fee23_5:;
wr(s->u,30,1,(rd(s->u,45,4)==((U)UINT64_C(0x0))));
L_1803fee23_6:;
wr(s->u,31,4,(rd(s->u,45,4)-((U)UINT64_C(0x1))));
L_1803fee23_7:;
wr(s->u,35,4,((rd(s->u,31,4)>=32)?(sx(rd(s->u,49,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,49,4),4)>>rd(s->u,31,4))));
L_1803fee23_8:;
wr(s->u,39,4,(rd(s->u,35,4)&((U)UINT64_C(0x1))));
L_1803fee23_9:;
wr(s->u,43,1,(rd(s->u,39,4)!=((U)UINT64_C(0x0))));
L_1803fee23_10:;
wr(s->u,0,1,rd(s->u,30,1));
L_1803fee23_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fee23_12:;
wr(s->u,2,1,(!rd(s->u,30,1)));
L_1803fee23_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fee23_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,43,1)));
L_1803fee23_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fee23_16:;
wr(s->u,44,1,(rd(s->u,45,4)==((U)UINT64_C(0x1))));
L_1803fee23_17:;
wr(s->u,0,1,rd(s->u,44,1));
L_1803fee23_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fee23_19:;
wr(s->u,2,1,(!rd(s->u,44,1)));
L_1803fee23_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fee23_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fee23_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fee23_23:;
wr(s->u,11,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803fee23_24:;
wr(s->u,12,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fee23_25:;
wr(s->u,13,1,(!rd(s->u,11,1)));
L_1803fee23_26:;
wr(s->u,14,1,(rd(s->u,13,1)&rd(s->r,519,1)));
L_1803fee23_27:;
wr(s->u,15,1,(rd(s->u,11,1)&rd(s->u,12,1)));
L_1803fee23_28:;
wr(s->r,519,1,(rd(s->u,14,1)|rd(s->u,15,1)));
L_1803fee23_29:;
wr(s->u,16,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fee23_30:;
wr(s->u,17,1,(!rd(s->u,11,1)));
L_1803fee23_31:;
wr(s->u,18,1,(rd(s->u,17,1)&rd(s->r,518,1)));
L_1803fee23_32:;
wr(s->u,19,1,(rd(s->u,11,1)&rd(s->u,16,1)));
L_1803fee23_33:;
wr(s->r,518,1,(rd(s->u,18,1)|rd(s->u,19,1)));
L_1803fee23_34:;
wr(s->u,20,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fee23_35:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803fee23_36:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fee23_37:;
wr(s->u,26,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fee23_38:;
wr(s->u,27,1,(!rd(s->u,11,1)));
L_1803fee23_39:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,514,1)));
L_1803fee23_40:;
wr(s->u,29,1,(rd(s->u,11,1)&rd(s->u,26,1)));
L_1803fee23_41:;
wr(s->r,514,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803fee23_42:;
/* 1803fee27: test r11d, r11d */
L_1803fee27_0:;
L_1803fee27_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fee27_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fee27_3:;
wr(s->u,53,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803fee27_4:;
wr(s->r,519,1,(sx(rd(s->u,53,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fee27_5:;
wr(s->r,518,1,(rd(s->u,53,4)==((U)UINT64_C(0x0))));
L_1803fee27_6:;
wr(s->u,5,4,(rd(s->u,53,4)&((U)UINT64_C(0xff))));
L_1803fee27_7:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803fee27_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fee27_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fee27_10:;
/* 1803fee2a: je 0x180400312 */
L_1803fee2a_0:;
L_1803fee2a_1:;
if(rd(s->r,518,1)){return UINT64_C(0x180400312);}
L_1803fee2a_2:;
return UINT64_C(0x1803fee30);
}
uint64_t b_1803fee30(CPU*s){
/* 1803fee30: sar r10d, 2 */
L_1803fee30_0:;
L_1803fee30_1:;
wr(s->u,47,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fee30_2:;
wr(s->u,51,4,rd(s->r,144,4));
L_1803fee30_3:;
wr(s->r,144,4,((rd(s->u,47,4)>=32)?(sx(rd(s->r,144,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,144,4),4)>>rd(s->u,47,4))));
L_1803fee30_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fee30_5:;
wr(s->u,32,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803fee30_6:;
wr(s->u,33,4,(rd(s->u,47,4)-((U)UINT64_C(0x1))));
L_1803fee30_7:;
wr(s->u,37,4,((rd(s->u,33,4)>=32)?(sx(rd(s->u,51,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,51,4),4)>>rd(s->u,33,4))));
L_1803fee30_8:;
wr(s->u,41,4,(rd(s->u,37,4)&((U)UINT64_C(0x1))));
L_1803fee30_9:;
wr(s->u,45,1,(rd(s->u,41,4)!=((U)UINT64_C(0x0))));
L_1803fee30_10:;
wr(s->u,0,1,rd(s->u,32,1));
L_1803fee30_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fee30_12:;
wr(s->u,2,1,(!rd(s->u,32,1)));
L_1803fee30_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fee30_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,45,1)));
L_1803fee30_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fee30_16:;
wr(s->u,46,1,(rd(s->u,47,4)==((U)UINT64_C(0x1))));
L_1803fee30_17:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803fee30_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fee30_19:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803fee30_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fee30_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fee30_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fee30_23:;
wr(s->u,13,1,(rd(s->u,47,4)!=((U)UINT64_C(0x0))));
L_1803fee30_24:;
wr(s->u,14,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fee30_25:;
wr(s->u,15,1,(!rd(s->u,13,1)));
L_1803fee30_26:;
wr(s->u,16,1,(rd(s->u,15,1)&rd(s->r,519,1)));
L_1803fee30_27:;
wr(s->u,17,1,(rd(s->u,13,1)&rd(s->u,14,1)));
L_1803fee30_28:;
wr(s->r,519,1,(rd(s->u,16,1)|rd(s->u,17,1)));
L_1803fee30_29:;
wr(s->u,18,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fee30_30:;
wr(s->u,19,1,(!rd(s->u,13,1)));
L_1803fee30_31:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,518,1)));
L_1803fee30_32:;
wr(s->u,21,1,(rd(s->u,13,1)&rd(s->u,18,1)));
L_1803fee30_33:;
wr(s->r,518,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803fee30_34:;
wr(s->u,22,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fee30_35:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803fee30_36:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803fee30_37:;
wr(s->u,28,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803fee30_38:;
wr(s->u,29,1,(!rd(s->u,13,1)));
L_1803fee30_39:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,514,1)));
L_1803fee30_40:;
wr(s->u,31,1,(rd(s->u,13,1)&rd(s->u,28,1)));
L_1803fee30_41:;
wr(s->r,514,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803fee30_42:;
/* 1803fee34: movsxd r9, r10d */
L_1803fee34_0:;
L_1803fee34_1:;
wr(s->r,136,8,(U)sx(rd(s->r,144,4),4));
L_1803fee34_2:;
/* 1803fee37: mov rbp, rcx */
L_1803fee37_0:;
L_1803fee37_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_1803fee37_2:;
/* 1803fee3a: xor eax, eax */
L_1803fee3a_0:;
L_1803fee3a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fee3a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fee3a_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fee3a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fee3a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fee3a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fee3a_7:;
wr(s->u,7,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fee3a_8:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803fee3a_9:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803fee3a_10:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803fee3a_11:;
/* 1803fee3c: test r11d, r11d */
L_1803fee3c_0:;
L_1803fee3c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fee3c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fee3c_3:;
wr(s->u,55,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803fee3c_4:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fee3c_5:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803fee3c_6:;
wr(s->u,7,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803fee3c_7:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803fee3c_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803fee3c_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803fee3c_10:;
/* 1803fee3f: jle 0x1803ff0e7 */
L_1803fee3f_0:;
L_1803fee3f_1:;
wr(s->u,5,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fee3f_2:;
wr(s->u,6,1,((rd(s->r,518,1)!=0)||(rd(s->u,5,1)!=0)));
L_1803fee3f_3:;
if(rd(s->u,6,1)){return UINT64_C(0x1803ff0e7);}
L_1803fee3f_4:;
return UINT64_C(0x1803fee45);
}
uint64_t b_1803fee45(CPU*s){
/* 1803fee45: movaps xmmword ptr [rsp + 0x60], xmm6 */
L_1803fee45_0:;
L_1803fee45_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803fee45_2:;
wr(s->u,36,16,rd(s->r,4992,16));
L_1803fee45_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803fee45_4:;
/* 1803fee4a: movaps xmmword ptr [rsp + 0x50], xmm7 */
L_1803fee4a_0:;
L_1803fee4a_1:;
wr(s->u,16,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803fee4a_2:;
wr(s->u,36,16,rd(s->r,5056,16));
L_1803fee4a_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803fee4a_4:;
/* 1803fee4f: movaps xmmword ptr [rsp + 0x40], xmm8 */
L_1803fee4f_0:;
L_1803fee4f_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fee4f_2:;
wr(s->u,36,16,rd(s->r,5120,16));
L_1803fee4f_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803fee4f_4:;
/* 1803fee55: movaps xmmword ptr [rsp + 0x30], xmm9 */
L_1803fee55_0:;
L_1803fee55_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fee55_2:;
wr(s->u,36,16,rd(s->r,5184,16));
L_1803fee55_3:;
mw((uint64_t)rd(s->u,16,8),16,rd(s->u,36,16));
L_1803fee55_4:;
/* 1803fee5b: mov qword ptr [rsp + 0x20], r14 */
L_1803fee5b_0:;
L_1803fee5b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fee5b_2:;
wr(s->u,28,8,rd(s->r,176,8));
L_1803fee5b_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,28,8));
L_1803fee5b_4:;
/* 1803fee60: movss xmm5, dword ptr [rbp] */
L_1803fee60_0:;
L_1803fee60_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803fee60_2:;
wr(s->r,4928,4,rd(s->u,24,4));
L_1803fee60_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fee60_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fee60_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fee60_6:;
/* 1803fee65: movss xmm8, dword ptr [rbp + 0x400] */
L_1803fee65_0:;
L_1803fee65_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803fee65_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fee65_3:;
wr(s->r,5120,4,rd(s->u,24,4));
L_1803fee65_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fee65_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fee65_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fee65_7:;
/* 1803fee6e: movaps xmm6, xmm8 */
L_1803fee6e_0:;
L_1803fee6e_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803fee6e_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803fee6e_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803fee6e_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803fee6e_5:;
/* 1803fee72: movss xmm7, dword ptr [rbp + 4] */
L_1803fee72_0:;
L_1803fee72_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fee72_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fee72_3:;
wr(s->r,5056,4,rd(s->u,24,4));
L_1803fee72_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fee72_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fee72_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fee72_7:;
/* 1803fee77: movaps xmm4, xmm7 */
L_1803fee77_0:;
L_1803fee77_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803fee77_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803fee77_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803fee77_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803fee77_5:;
/* 1803fee7a: movss xmm9, dword ptr [rbp + 0x404] */
L_1803fee7a_0:;
L_1803fee7a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803fee7a_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fee7a_3:;
wr(s->r,5184,4,rd(s->u,24,4));
L_1803fee7a_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fee7a_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fee7a_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fee7a_7:;
/* 1803fee83: movss xmm3, dword ptr [rbp + 0x800] */
L_1803fee83_0:;
L_1803fee83_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803fee83_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fee83_3:;
wr(s->r,4800,4,rd(s->u,24,4));
L_1803fee83_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fee83_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fee83_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fee83_7:;
/* 1803fee8b: movaps xmm0, xmm3 */
L_1803fee8b_0:;
L_1803fee8b_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fee8b_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fee8b_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fee8b_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fee8b_5:;
/* 1803fee8e: movss xmm2, dword ptr [rbp + 0x804] */
L_1803fee8e_0:;
L_1803fee8e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803fee8e_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fee8e_3:;
wr(s->r,4736,4,rd(s->u,24,4));
L_1803fee8e_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fee8e_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fee8e_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fee8e_7:;
/* 1803fee96: movaps xmm1, xmm2 */
L_1803fee96_0:;
L_1803fee96_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803fee96_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803fee96_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803fee96_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803fee96_5:;
/* 1803fee99: addss xmm6, xmm5 */
L_1803fee99_0:;
L_1803fee99_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fee99_2:;
/* 1803fee9d: addss xmm4, xmm9 */
L_1803fee9d_0:;
L_1803fee9d_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fee9d_2:;
/* 1803feea2: subss xmm5, xmm8 */
L_1803feea2_0:;
L_1803feea2_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803feea2_2:;
/* 1803feea7: movss xmm8, dword ptr [rbp + 0xc00] */
L_1803feea7_0:;
L_1803feea7_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc00))));
L_1803feea7_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803feea7_3:;
wr(s->r,5120,4,rd(s->u,24,4));
L_1803feea7_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803feea7_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803feea7_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803feea7_7:;
/* 1803feeb0: subss xmm7, xmm9 */
L_1803feeb0_0:;
L_1803feeb0_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803feeb0_2:;
/* 1803feeb5: movss xmm9, dword ptr [rbp + 0xc04] */
L_1803feeb5_0:;
L_1803feeb5_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc04))));
L_1803feeb5_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803feeb5_3:;
wr(s->r,5184,4,rd(s->u,24,4));
L_1803feeb5_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803feeb5_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803feeb5_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803feeb5_7:;
/* 1803feebe: addss xmm0, xmm8 */
L_1803feebe_0:;
L_1803feebe_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803feebe_2:;
/* 1803feec3: addss xmm1, xmm9 */
L_1803feec3_0:;
L_1803feec3_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803feec3_2:;
/* 1803feec8: subss xmm3, xmm8 */
L_1803feec8_0:;
L_1803feec8_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803feec8_2:;
/* 1803feecd: movaps xmm8, xmm6 */
L_1803feecd_0:;
L_1803feecd_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803feecd_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803feecd_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803feecd_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803feecd_5:;
/* 1803feed1: subss xmm2, xmm9 */
L_1803feed1_0:;
L_1803feed1_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803feed1_2:;
/* 1803feed6: subss xmm6, xmm0 */
L_1803feed6_0:;
L_1803feed6_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803feed6_2:;
/* 1803feeda: movss dword ptr [rbp + 0x800], xmm6 */
L_1803feeda_0:;
L_1803feeda_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803feeda_2:;
wr(s->u,24,4,rd(s->r,4992,4));
L_1803feeda_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,24,4));
L_1803feeda_4:;
/* 1803feee2: addss xmm8, xmm0 */
L_1803feee2_0:;
L_1803feee2_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803feee2_2:;
/* 1803feee7: movss dword ptr [rbp], xmm8 */
L_1803feee7_0:;
L_1803feee7_1:;
wr(s->u,24,4,rd(s->r,5120,4));
L_1803feee7_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,24,4));
L_1803feee7_3:;
/* 1803feeed: movaps xmm8, xmm4 */
L_1803feeed_0:;
L_1803feeed_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803feeed_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803feeed_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803feeed_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803feeed_5:;
/* 1803feef1: movaps xmm0, xmm5 */
L_1803feef1_0:;
L_1803feef1_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803feef1_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803feef1_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803feef1_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803feef1_5:;
return UINT64_C(0x1803feef4);
}
uint64_t b_1803fee60(CPU*s){
/* 1803fee60: movss xmm5, dword ptr [rbp] */
L_1803fee60_0:;
L_1803fee60_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803fee60_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fee60_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fee60_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fee60_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fee60_6:;
/* 1803fee65: movss xmm8, dword ptr [rbp + 0x400] */
L_1803fee65_0:;
L_1803fee65_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803fee65_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fee65_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fee65_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fee65_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fee65_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fee65_7:;
/* 1803fee6e: movaps xmm6, xmm8 */
L_1803fee6e_0:;
L_1803fee6e_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803fee6e_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803fee6e_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803fee6e_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803fee6e_5:;
/* 1803fee72: movss xmm7, dword ptr [rbp + 4] */
L_1803fee72_0:;
L_1803fee72_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fee72_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fee72_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fee72_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fee72_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fee72_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fee72_7:;
/* 1803fee77: movaps xmm4, xmm7 */
L_1803fee77_0:;
L_1803fee77_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803fee77_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803fee77_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803fee77_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803fee77_5:;
/* 1803fee7a: movss xmm9, dword ptr [rbp + 0x404] */
L_1803fee7a_0:;
L_1803fee7a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803fee7a_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fee7a_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803fee7a_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fee7a_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fee7a_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fee7a_7:;
/* 1803fee83: movss xmm3, dword ptr [rbp + 0x800] */
L_1803fee83_0:;
L_1803fee83_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803fee83_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fee83_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fee83_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fee83_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fee83_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fee83_7:;
/* 1803fee8b: movaps xmm0, xmm3 */
L_1803fee8b_0:;
L_1803fee8b_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fee8b_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fee8b_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fee8b_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fee8b_5:;
/* 1803fee8e: movss xmm2, dword ptr [rbp + 0x804] */
L_1803fee8e_0:;
L_1803fee8e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803fee8e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fee8e_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fee8e_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fee8e_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fee8e_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fee8e_7:;
/* 1803fee96: movaps xmm1, xmm2 */
L_1803fee96_0:;
L_1803fee96_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803fee96_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803fee96_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803fee96_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803fee96_5:;
/* 1803fee99: addss xmm6, xmm5 */
L_1803fee99_0:;
L_1803fee99_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fee99_2:;
/* 1803fee9d: addss xmm4, xmm9 */
L_1803fee9d_0:;
L_1803fee9d_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fee9d_2:;
/* 1803feea2: subss xmm5, xmm8 */
L_1803feea2_0:;
L_1803feea2_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803feea2_2:;
/* 1803feea7: movss xmm8, dword ptr [rbp + 0xc00] */
L_1803feea7_0:;
L_1803feea7_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc00))));
L_1803feea7_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803feea7_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803feea7_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803feea7_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803feea7_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803feea7_7:;
/* 1803feeb0: subss xmm7, xmm9 */
L_1803feeb0_0:;
L_1803feeb0_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803feeb0_2:;
/* 1803feeb5: movss xmm9, dword ptr [rbp + 0xc04] */
L_1803feeb5_0:;
L_1803feeb5_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc04))));
L_1803feeb5_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803feeb5_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803feeb5_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803feeb5_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803feeb5_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803feeb5_7:;
/* 1803feebe: addss xmm0, xmm8 */
L_1803feebe_0:;
L_1803feebe_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803feebe_2:;
/* 1803feec3: addss xmm1, xmm9 */
L_1803feec3_0:;
L_1803feec3_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803feec3_2:;
/* 1803feec8: subss xmm3, xmm8 */
L_1803feec8_0:;
L_1803feec8_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803feec8_2:;
/* 1803feecd: movaps xmm8, xmm6 */
L_1803feecd_0:;
L_1803feecd_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803feecd_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803feecd_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803feecd_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803feecd_5:;
/* 1803feed1: subss xmm2, xmm9 */
L_1803feed1_0:;
L_1803feed1_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803feed1_2:;
/* 1803feed6: subss xmm6, xmm0 */
L_1803feed6_0:;
L_1803feed6_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803feed6_2:;
/* 1803feeda: movss dword ptr [rbp + 0x800], xmm6 */
L_1803feeda_0:;
L_1803feeda_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803feeda_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803feeda_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803feeda_4:;
/* 1803feee2: addss xmm8, xmm0 */
L_1803feee2_0:;
L_1803feee2_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803feee2_2:;
/* 1803feee7: movss dword ptr [rbp], xmm8 */
L_1803feee7_0:;
L_1803feee7_1:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803feee7_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803feee7_3:;
/* 1803feeed: movaps xmm8, xmm4 */
L_1803feeed_0:;
L_1803feeed_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803feeed_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803feeed_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803feeed_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803feeed_5:;
/* 1803feef1: movaps xmm0, xmm5 */
L_1803feef1_0:;
L_1803feef1_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803feef1_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803feef1_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803feef1_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803feef1_5:;
/* 1803feef4: subss xmm4, xmm1 */
L_1803feef4_0:;
L_1803feef4_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803feef4_2:;
/* 1803feef8: movss dword ptr [rbp + 0x804], xmm4 */
L_1803feef8_0:;
L_1803feef8_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803feef8_2:;
wr(s->u,16,4,rd(s->r,4864,4));
L_1803feef8_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803feef8_4:;
/* 1803fef00: addss xmm8, xmm1 */
L_1803fef00_0:;
L_1803fef00_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fef00_2:;
/* 1803fef05: movss dword ptr [rbp + 4], xmm8 */
L_1803fef05_0:;
L_1803fef05_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fef05_2:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fef05_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fef05_4:;
/* 1803fef0b: addss xmm0, xmm2 */
L_1803fef0b_0:;
L_1803fef0b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fef0b_2:;
return UINT64_C(0x1803fef0f);
}
uint64_t b_1803feef4(CPU*s){
/* 1803feef4: subss xmm4, xmm1 */
L_1803feef4_0:;
L_1803feef4_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803feef4_2:;
/* 1803feef8: movss dword ptr [rbp + 0x804], xmm4 */
L_1803feef8_0:;
L_1803feef8_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803feef8_2:;
wr(s->u,32,4,rd(s->r,4864,4));
L_1803feef8_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803feef8_4:;
/* 1803fef00: addss xmm8, xmm1 */
L_1803fef00_0:;
L_1803fef00_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fef00_2:;
/* 1803fef05: movss dword ptr [rbp + 4], xmm8 */
L_1803fef05_0:;
L_1803fef05_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803fef05_2:;
wr(s->u,32,4,rd(s->r,5120,4));
L_1803fef05_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fef05_4:;
/* 1803fef0b: addss xmm0, xmm2 */
L_1803fef0b_0:;
L_1803fef0b_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fef0b_2:;
/* 1803fef0f: movss dword ptr [rbp + 0x400], xmm0 */
L_1803fef0f_0:;
L_1803fef0f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803fef0f_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fef0f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fef0f_4:;
/* 1803fef17: movaps xmm0, xmm7 */
L_1803fef17_0:;
L_1803fef17_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fef17_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fef17_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fef17_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fef17_5:;
/* 1803fef1a: subss xmm5, xmm2 */
L_1803fef1a_0:;
L_1803fef1a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fef1a_2:;
/* 1803fef1e: movss dword ptr [rbp + 0xc00], xmm5 */
L_1803fef1e_0:;
L_1803fef1e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc00))));
L_1803fef1e_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803fef1e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fef1e_4:;
/* 1803fef26: subss xmm0, xmm3 */
L_1803fef26_0:;
L_1803fef26_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fef26_2:;
/* 1803fef2a: movss dword ptr [rbp + 0x404], xmm0 */
L_1803fef2a_0:;
L_1803fef2a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803fef2a_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fef2a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fef2a_4:;
/* 1803fef32: addss xmm7, xmm3 */
L_1803fef32_0:;
L_1803fef32_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fef32_2:;
/* 1803fef36: movss dword ptr [rbp + 0xc04], xmm7 */
L_1803fef36_0:;
L_1803fef36_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc04))));
L_1803fef36_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803fef36_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fef36_4:;
/* 1803fef3e: mov r15, r8 */
L_1803fef3e_0:;
L_1803fef3e_1:;
wr(s->r,184,8,rd(s->r,128,8));
L_1803fef3e_2:;
/* 1803fef41: lea r14, [r8 + 8] */
L_1803fef41_0:;
L_1803fef41_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803fef41_2:;
wr(s->r,176,8,rd(s->u,0,8));
L_1803fef41_3:;
/* 1803fef45: xor r10d, r10d */
L_1803fef45_0:;
L_1803fef45_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fef45_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fef45_3:;
wr(s->r,144,4,(rd(s->r,144,4)^rd(s->r,144,4)));
L_1803fef45_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fef45_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fef45_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fef45_7:;
wr(s->u,36,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fef45_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803fef45_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fef45_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fef45_11:;
/* 1803fef48: lea r14, [r14 + r9*4] */
L_1803fef48_0:;
L_1803fef48_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fef48_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fef48_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fef48_4:;
/* 1803fef4c: lea r15, [r15 + r9*4] */
L_1803fef4c_0:;
L_1803fef4c_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fef4c_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803fef4c_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803fef4c_4:;
/* 1803fef50: movss xmm3, dword ptr [r15] */
L_1803fef50_0:;
L_1803fef50_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803fef50_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fef50_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fef50_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fef50_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fef50_6:;
/* 1803fef55: movss xmm1, dword ptr [r15 + 4] */
L_1803fef55_0:;
L_1803fef55_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803fef55_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fef55_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fef55_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fef55_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fef55_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fef55_7:;
/* 1803fef5b: add rbp, 8 */
L_1803fef5b_0:;
L_1803fef5b_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803fef5b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803fef5b_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803fef5b_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fef5b_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803fef5b_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803fef5b_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803fef5b_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fef5b_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fef5b_10:;
/* 1803fef5f: movss xmm2, dword ptr [rbp + 0x800] */
L_1803fef5f_0:;
L_1803fef5f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803fef5f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fef5f_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fef5f_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fef5f_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fef5f_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fef5f_7:;
/* 1803fef67: movaps xmm4, xmm2 */
L_1803fef67_0:;
L_1803fef67_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fef67_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fef67_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fef67_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fef67_5:;
/* 1803fef6a: mulss xmm2, xmm1 */
L_1803fef6a_0:;
L_1803fef6a_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fef6a_2:;
/* 1803fef6e: mulss xmm4, xmm3 */
L_1803fef6e_0:;
L_1803fef6e_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fef6e_2:;
/* 1803fef72: movss xmm5, dword ptr [rbp + 0x804] */
L_1803fef72_0:;
L_1803fef72_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803fef72_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fef72_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fef72_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fef72_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fef72_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fef72_7:;
/* 1803fef7a: movaps xmm0, xmm5 */
L_1803fef7a_0:;
L_1803fef7a_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fef7a_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fef7a_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fef7a_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fef7a_5:;
/* 1803fef7d: mulss xmm5, xmm3 */
L_1803fef7d_0:;
L_1803fef7d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fef7d_2:;
/* 1803fef81: mulss xmm0, xmm1 */
L_1803fef81_0:;
L_1803fef81_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fef81_2:;
/* 1803fef85: movss xmm1, dword ptr [rbp + 0x400] */
L_1803fef85_0:;
L_1803fef85_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803fef85_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fef85_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fef85_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fef85_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fef85_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fef85_7:;
/* 1803fef8d: movaps xmm6, xmm1 */
L_1803fef8d_0:;
L_1803fef8d_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fef8d_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fef8d_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fef8d_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fef8d_5:;
/* 1803fef90: movss xmm7, dword ptr [rbp + 0x404] */
L_1803fef90_0:;
L_1803fef90_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803fef90_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fef90_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fef90_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fef90_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fef90_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fef90_7:;
return UINT64_C(0x1803fef98);
}
uint64_t b_1803fef0f(CPU*s){
/* 1803fef0f: movss dword ptr [rbp + 0x400], xmm0 */
L_1803fef0f_0:;
L_1803fef0f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803fef0f_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fef0f_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fef0f_4:;
/* 1803fef17: movaps xmm0, xmm7 */
L_1803fef17_0:;
L_1803fef17_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fef17_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fef17_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fef17_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fef17_5:;
/* 1803fef1a: subss xmm5, xmm2 */
L_1803fef1a_0:;
L_1803fef1a_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fef1a_2:;
/* 1803fef1e: movss dword ptr [rbp + 0xc00], xmm5 */
L_1803fef1e_0:;
L_1803fef1e_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc00))));
L_1803fef1e_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803fef1e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fef1e_4:;
/* 1803fef26: subss xmm0, xmm3 */
L_1803fef26_0:;
L_1803fef26_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fef26_2:;
/* 1803fef2a: movss dword ptr [rbp + 0x404], xmm0 */
L_1803fef2a_0:;
L_1803fef2a_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803fef2a_2:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803fef2a_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fef2a_4:;
/* 1803fef32: addss xmm7, xmm3 */
L_1803fef32_0:;
L_1803fef32_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fef32_2:;
/* 1803fef36: movss dword ptr [rbp + 0xc04], xmm7 */
L_1803fef36_0:;
L_1803fef36_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc04))));
L_1803fef36_2:;
wr(s->u,32,4,rd(s->r,5056,4));
L_1803fef36_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803fef36_4:;
/* 1803fef3e: mov r15, r8 */
L_1803fef3e_0:;
L_1803fef3e_1:;
wr(s->r,184,8,rd(s->r,128,8));
L_1803fef3e_2:;
/* 1803fef41: lea r14, [r8 + 8] */
L_1803fef41_0:;
L_1803fef41_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803fef41_2:;
wr(s->r,176,8,rd(s->u,0,8));
L_1803fef41_3:;
/* 1803fef45: xor r10d, r10d */
L_1803fef45_0:;
L_1803fef45_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fef45_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fef45_3:;
wr(s->r,144,4,(rd(s->r,144,4)^rd(s->r,144,4)));
L_1803fef45_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fef45_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fef45_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fef45_7:;
wr(s->u,36,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fef45_8:;
wr(s->u,44,1,pop(rd(s->u,36,4),4));
L_1803fef45_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fef45_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fef45_11:;
/* 1803fef48: lea r14, [r14 + r9*4] */
L_1803fef48_0:;
L_1803fef48_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fef48_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fef48_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fef48_4:;
/* 1803fef4c: lea r15, [r15 + r9*4] */
L_1803fef4c_0:;
L_1803fef4c_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fef4c_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803fef4c_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803fef4c_4:;
/* 1803fef50: movss xmm3, dword ptr [r15] */
L_1803fef50_0:;
L_1803fef50_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803fef50_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fef50_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fef50_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fef50_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fef50_6:;
/* 1803fef55: movss xmm1, dword ptr [r15 + 4] */
L_1803fef55_0:;
L_1803fef55_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803fef55_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fef55_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fef55_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fef55_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fef55_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fef55_7:;
/* 1803fef5b: add rbp, 8 */
L_1803fef5b_0:;
L_1803fef5b_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803fef5b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803fef5b_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803fef5b_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fef5b_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803fef5b_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803fef5b_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803fef5b_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fef5b_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fef5b_10:;
/* 1803fef5f: movss xmm2, dword ptr [rbp + 0x800] */
L_1803fef5f_0:;
L_1803fef5f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803fef5f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fef5f_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fef5f_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fef5f_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fef5f_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fef5f_7:;
/* 1803fef67: movaps xmm4, xmm2 */
L_1803fef67_0:;
L_1803fef67_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fef67_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fef67_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fef67_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fef67_5:;
/* 1803fef6a: mulss xmm2, xmm1 */
L_1803fef6a_0:;
L_1803fef6a_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fef6a_2:;
/* 1803fef6e: mulss xmm4, xmm3 */
L_1803fef6e_0:;
L_1803fef6e_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fef6e_2:;
/* 1803fef72: movss xmm5, dword ptr [rbp + 0x804] */
L_1803fef72_0:;
L_1803fef72_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803fef72_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fef72_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fef72_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fef72_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fef72_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fef72_7:;
/* 1803fef7a: movaps xmm0, xmm5 */
L_1803fef7a_0:;
L_1803fef7a_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fef7a_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fef7a_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fef7a_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fef7a_5:;
/* 1803fef7d: mulss xmm5, xmm3 */
L_1803fef7d_0:;
L_1803fef7d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fef7d_2:;
/* 1803fef81: mulss xmm0, xmm1 */
L_1803fef81_0:;
L_1803fef81_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fef81_2:;
/* 1803fef85: movss xmm1, dword ptr [rbp + 0x400] */
L_1803fef85_0:;
L_1803fef85_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803fef85_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fef85_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fef85_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fef85_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fef85_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fef85_7:;
/* 1803fef8d: movaps xmm6, xmm1 */
L_1803fef8d_0:;
L_1803fef8d_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fef8d_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fef8d_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fef8d_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fef8d_5:;
/* 1803fef90: movss xmm7, dword ptr [rbp + 0x404] */
L_1803fef90_0:;
L_1803fef90_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803fef90_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fef90_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fef90_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fef90_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fef90_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fef90_7:;
/* 1803fef98: movss xmm3, dword ptr [r14 + 4] */
L_1803fef98_0:;
L_1803fef98_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fef98_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fef98_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fef98_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fef98_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fef98_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fef98_7:;
/* 1803fef9e: mulss xmm1, xmm3 */
L_1803fef9e_0:;
L_1803fef9e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fef9e_2:;
/* 1803fefa2: movss xmm8, dword ptr [rbp + 0xc04] */
L_1803fefa2_0:;
L_1803fefa2_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc04))));
L_1803fefa2_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fefa2_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803fefa2_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fefa2_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fefa2_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fefa2_7:;
/* 1803fefab: subss xmm4, xmm0 */
L_1803fefab_0:;
L_1803fefab_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fefab_2:;
/* 1803fefaf: movaps xmm0, xmm7 */
L_1803fefaf_0:;
L_1803fefaf_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fefaf_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fefaf_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fefaf_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fefaf_5:;
return UINT64_C(0x1803fefb2);
}
uint64_t b_1803fef48(CPU*s){
/* 1803fef48: lea r14, [r14 + r9*4] */
L_1803fef48_0:;
L_1803fef48_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fef48_2:;
wr(s->u,24,8,(rd(s->r,176,8)+rd(s->u,16,8)));
L_1803fef48_3:;
wr(s->r,176,8,rd(s->u,24,8));
L_1803fef48_4:;
/* 1803fef4c: lea r15, [r15 + r9*4] */
L_1803fef4c_0:;
L_1803fef4c_1:;
wr(s->u,16,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fef4c_2:;
wr(s->u,24,8,(rd(s->r,184,8)+rd(s->u,16,8)));
L_1803fef4c_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803fef4c_4:;
/* 1803fef50: movss xmm3, dword ptr [r15] */
L_1803fef50_0:;
L_1803fef50_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,184,8),4));
L_1803fef50_2:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fef50_3:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fef50_4:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fef50_5:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fef50_6:;
/* 1803fef55: movss xmm1, dword ptr [r15 + 4] */
L_1803fef55_0:;
L_1803fef55_1:;
wr(s->u,0,8,(rd(s->r,184,8)+((U)UINT64_C(0x4))));
L_1803fef55_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fef55_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fef55_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fef55_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fef55_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fef55_7:;
/* 1803fef5b: add rbp, 8 */
L_1803fef5b_0:;
L_1803fef5b_1:;
wr(s->r,512,1,(((rd(s->r,40,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,40,8)));
L_1803fef5b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,8),((U)UINT64_C(0x8)),8,0));
L_1803fef5b_3:;
wr(s->r,40,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_1803fef5b_4:;
wr(s->r,519,1,(sx(rd(s->r,40,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fef5b_5:;
wr(s->r,518,1,(rd(s->r,40,8)==((U)UINT64_C(0x0))));
L_1803fef5b_6:;
wr(s->u,36,8,(rd(s->r,40,8)&((U)UINT64_C(0xff))));
L_1803fef5b_7:;
wr(s->u,44,1,pop(rd(s->u,36,8),8));
L_1803fef5b_8:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_1803fef5b_9:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_1803fef5b_10:;
/* 1803fef5f: movss xmm2, dword ptr [rbp + 0x800] */
L_1803fef5f_0:;
L_1803fef5f_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803fef5f_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fef5f_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fef5f_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fef5f_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fef5f_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fef5f_7:;
/* 1803fef67: movaps xmm4, xmm2 */
L_1803fef67_0:;
L_1803fef67_1:;
wr(s->r,4864,4,rd(s->r,4736,4));
L_1803fef67_2:;
wr(s->r,4868,4,rd(s->r,4740,4));
L_1803fef67_3:;
wr(s->r,4872,4,rd(s->r,4744,4));
L_1803fef67_4:;
wr(s->r,4876,4,rd(s->r,4748,4));
L_1803fef67_5:;
/* 1803fef6a: mulss xmm2, xmm1 */
L_1803fef6a_0:;
L_1803fef6a_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fef6a_2:;
/* 1803fef6e: mulss xmm4, xmm3 */
L_1803fef6e_0:;
L_1803fef6e_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fef6e_2:;
/* 1803fef72: movss xmm5, dword ptr [rbp + 0x804] */
L_1803fef72_0:;
L_1803fef72_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803fef72_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fef72_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fef72_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fef72_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fef72_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fef72_7:;
/* 1803fef7a: movaps xmm0, xmm5 */
L_1803fef7a_0:;
L_1803fef7a_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fef7a_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fef7a_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fef7a_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fef7a_5:;
/* 1803fef7d: mulss xmm5, xmm3 */
L_1803fef7d_0:;
L_1803fef7d_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fef7d_2:;
/* 1803fef81: mulss xmm0, xmm1 */
L_1803fef81_0:;
L_1803fef81_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fef81_2:;
/* 1803fef85: movss xmm1, dword ptr [rbp + 0x400] */
L_1803fef85_0:;
L_1803fef85_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x400))));
L_1803fef85_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fef85_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fef85_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fef85_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fef85_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fef85_7:;
/* 1803fef8d: movaps xmm6, xmm1 */
L_1803fef8d_0:;
L_1803fef8d_1:;
wr(s->r,4992,4,rd(s->r,4672,4));
L_1803fef8d_2:;
wr(s->r,4996,4,rd(s->r,4676,4));
L_1803fef8d_3:;
wr(s->r,5000,4,rd(s->r,4680,4));
L_1803fef8d_4:;
wr(s->r,5004,4,rd(s->r,4684,4));
L_1803fef8d_5:;
/* 1803fef90: movss xmm7, dword ptr [rbp + 0x404] */
L_1803fef90_0:;
L_1803fef90_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x404))));
L_1803fef90_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fef90_3:;
wr(s->r,5056,4,rd(s->u,32,4));
L_1803fef90_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fef90_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fef90_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fef90_7:;
/* 1803fef98: movss xmm3, dword ptr [r14 + 4] */
L_1803fef98_0:;
L_1803fef98_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fef98_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fef98_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fef98_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fef98_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fef98_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fef98_7:;
/* 1803fef9e: mulss xmm1, xmm3 */
L_1803fef9e_0:;
L_1803fef9e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fef9e_2:;
/* 1803fefa2: movss xmm8, dword ptr [rbp + 0xc04] */
L_1803fefa2_0:;
L_1803fefa2_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc04))));
L_1803fefa2_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fefa2_3:;
wr(s->r,5120,4,rd(s->u,32,4));
L_1803fefa2_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fefa2_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fefa2_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fefa2_7:;
/* 1803fefab: subss xmm4, xmm0 */
L_1803fefab_0:;
L_1803fefab_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fefab_2:;
/* 1803fefaf: movaps xmm0, xmm7 */
L_1803fefaf_0:;
L_1803fefaf_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fefaf_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fefaf_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fefaf_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fefaf_5:;
/* 1803fefb2: mulss xmm0, xmm3 */
L_1803fefb2_0:;
L_1803fefb2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fefb2_2:;
/* 1803fefb6: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fefb6_0:;
L_1803fefb6_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fefb6_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fefb6_3:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fefb6_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fefb6_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fefb6_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fefb6_7:;
/* 1803fefbc: addss xmm2, xmm5 */
L_1803fefbc_0:;
L_1803fefbc_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fefbc_2:;
/* 1803fefc0: movss xmm5, dword ptr [r14] */
L_1803fefc0_0:;
L_1803fefc0_1:;
wr(s->u,32,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fefc0_2:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fefc0_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fefc0_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fefc0_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fefc0_6:;
/* 1803fefc5: mulss xmm6, xmm5 */
L_1803fefc5_0:;
L_1803fefc5_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fefc5_2:;
/* 1803fefc9: mulss xmm7, xmm5 */
L_1803fefc9_0:;
L_1803fefc9_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fefc9_2:;
/* 1803fefcd: movss xmm5, dword ptr [rbp + 0xc00] */
L_1803fefcd_0:;
L_1803fefcd_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc00))));
L_1803fefcd_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fefcd_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fefcd_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fefcd_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fefcd_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fefcd_7:;
/* 1803fefd5: movaps xmm9, xmm5 */
L_1803fefd5_0:;
L_1803fefd5_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803fefd5_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803fefd5_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803fefd5_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803fefd5_5:;
/* 1803fefd9: mulss xmm5, xmm3 */
L_1803fefd9_0:;
L_1803fefd9_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fefd9_2:;
/* 1803fefdd: subss xmm6, xmm0 */
L_1803fefdd_0:;
L_1803fefdd_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fefdd_2:;
/* 1803fefe1: movaps xmm0, xmm8 */
L_1803fefe1_0:;
L_1803fefe1_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fefe1_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fefe1_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fefe1_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fefe1_5:;
return UINT64_C(0x1803fefe5);
}
uint64_t b_1803fef98(CPU*s){
/* 1803fef98: movss xmm3, dword ptr [r14 + 4] */
L_1803fef98_0:;
L_1803fef98_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x4))));
L_1803fef98_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fef98_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fef98_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fef98_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fef98_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fef98_7:;
/* 1803fef9e: mulss xmm1, xmm3 */
L_1803fef9e_0:;
L_1803fef9e_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fef9e_2:;
/* 1803fefa2: movss xmm8, dword ptr [rbp + 0xc04] */
L_1803fefa2_0:;
L_1803fefa2_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc04))));
L_1803fefa2_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fefa2_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fefa2_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fefa2_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fefa2_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fefa2_7:;
/* 1803fefab: subss xmm4, xmm0 */
L_1803fefab_0:;
L_1803fefab_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fefab_2:;
/* 1803fefaf: movaps xmm0, xmm7 */
L_1803fefaf_0:;
L_1803fefaf_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fefaf_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fefaf_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fefaf_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fefaf_5:;
/* 1803fefb2: mulss xmm0, xmm3 */
L_1803fefb2_0:;
L_1803fefb2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fefb2_2:;
/* 1803fefb6: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fefb6_0:;
L_1803fefb6_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fefb6_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fefb6_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fefb6_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fefb6_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fefb6_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fefb6_7:;
/* 1803fefbc: addss xmm2, xmm5 */
L_1803fefbc_0:;
L_1803fefbc_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fefbc_2:;
/* 1803fefc0: movss xmm5, dword ptr [r14] */
L_1803fefc0_0:;
L_1803fefc0_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fefc0_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fefc0_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fefc0_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fefc0_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fefc0_6:;
/* 1803fefc5: mulss xmm6, xmm5 */
L_1803fefc5_0:;
L_1803fefc5_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fefc5_2:;
/* 1803fefc9: mulss xmm7, xmm5 */
L_1803fefc9_0:;
L_1803fefc9_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fefc9_2:;
/* 1803fefcd: movss xmm5, dword ptr [rbp + 0xc00] */
L_1803fefcd_0:;
L_1803fefcd_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc00))));
L_1803fefcd_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fefcd_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fefcd_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fefcd_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fefcd_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fefcd_7:;
/* 1803fefd5: movaps xmm9, xmm5 */
L_1803fefd5_0:;
L_1803fefd5_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803fefd5_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803fefd5_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803fefd5_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803fefd5_5:;
/* 1803fefd9: mulss xmm5, xmm3 */
L_1803fefd9_0:;
L_1803fefd9_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fefd9_2:;
/* 1803fefdd: subss xmm6, xmm0 */
L_1803fefdd_0:;
L_1803fefdd_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fefdd_2:;
/* 1803fefe1: movaps xmm0, xmm8 */
L_1803fefe1_0:;
L_1803fefe1_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fefe1_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fefe1_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fefe1_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fefe1_5:;
/* 1803fefe5: mulss xmm0, xmm3 */
L_1803fefe5_0:;
L_1803fefe5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fefe5_2:;
/* 1803fefe9: movaps xmm3, xmm4 */
L_1803fefe9_0:;
L_1803fefe9_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fefe9_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fefe9_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fefe9_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fefe9_5:;
/* 1803fefec: addss xmm1, xmm7 */
L_1803fefec_0:;
L_1803fefec_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fefec_2:;
/* 1803feff0: movss xmm7, dword ptr [r14 + 8] */
L_1803feff0_0:;
L_1803feff0_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803feff0_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803feff0_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803feff0_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803feff0_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803feff0_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803feff0_7:;
/* 1803feff6: mulss xmm9, xmm7 */
L_1803feff6_0:;
L_1803feff6_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803feff6_2:;
/* 1803feffb: mulss xmm8, xmm7 */
L_1803feffb_0:;
L_1803feffb_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803feffb_2:;
/* 1803ff000: add r10d, 1 */
L_1803ff000_0:;
L_1803ff000_1:;
wr(s->r,512,1,(((rd(s->r,144,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,144,4)));
L_1803ff000_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803ff000_3:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803ff000_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ff000_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff000_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ff000_7:;
wr(s->u,20,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ff000_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff000_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff000_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff000_11:;
/* 1803ff004: subss xmm9, xmm0 */
L_1803ff004_0:;
L_1803ff004_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff004_2:;
/* 1803ff009: movaps xmm0, xmm2 */
L_1803ff009_0:;
L_1803ff009_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ff009_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ff009_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ff009_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ff009_5:;
/* 1803ff00c: addss xmm5, xmm8 */
L_1803ff00c_0:;
L_1803ff00c_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff00c_2:;
/* 1803ff011: movss xmm8, dword ptr [rbp] */
L_1803ff011_0:;
L_1803ff011_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ff011_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff011_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff011_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff011_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff011_6:;
/* 1803ff017: movaps xmm7, xmm8 */
L_1803ff017_0:;
L_1803ff017_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803ff017_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803ff017_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803ff017_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803ff017_5:;
/* 1803ff01b: addss xmm3, xmm9 */
L_1803ff01b_0:;
L_1803ff01b_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff01b_2:;
/* 1803ff020: subss xmm4, xmm9 */
L_1803ff020_0:;
L_1803ff020_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff020_2:;
/* 1803ff025: addss xmm0, xmm5 */
L_1803ff025_0:;
L_1803ff025_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff025_2:;
/* 1803ff029: subss xmm2, xmm5 */
L_1803ff029_0:;
L_1803ff029_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff029_2:;
return UINT64_C(0x1803ff02d);
}
uint64_t b_1803fefb2(CPU*s){
/* 1803fefb2: mulss xmm0, xmm3 */
L_1803fefb2_0:;
L_1803fefb2_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fefb2_2:;
/* 1803fefb6: movss xmm3, dword ptr [r14 + 0xc] */
L_1803fefb6_0:;
L_1803fefb6_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0xc))));
L_1803fefb6_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fefb6_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fefb6_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fefb6_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fefb6_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fefb6_7:;
/* 1803fefbc: addss xmm2, xmm5 */
L_1803fefbc_0:;
L_1803fefbc_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fefbc_2:;
/* 1803fefc0: movss xmm5, dword ptr [r14] */
L_1803fefc0_0:;
L_1803fefc0_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,176,8),4));
L_1803fefc0_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fefc0_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fefc0_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fefc0_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fefc0_6:;
/* 1803fefc5: mulss xmm6, xmm5 */
L_1803fefc5_0:;
L_1803fefc5_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fefc5_2:;
/* 1803fefc9: mulss xmm7, xmm5 */
L_1803fefc9_0:;
L_1803fefc9_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)*fv(rd(s->r,4928,4),4),4));
L_1803fefc9_2:;
/* 1803fefcd: movss xmm5, dword ptr [rbp + 0xc00] */
L_1803fefcd_0:;
L_1803fefcd_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0xc00))));
L_1803fefcd_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fefcd_3:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fefcd_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fefcd_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fefcd_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fefcd_7:;
/* 1803fefd5: movaps xmm9, xmm5 */
L_1803fefd5_0:;
L_1803fefd5_1:;
wr(s->r,5184,4,rd(s->r,4928,4));
L_1803fefd5_2:;
wr(s->r,5188,4,rd(s->r,4932,4));
L_1803fefd5_3:;
wr(s->r,5192,4,rd(s->r,4936,4));
L_1803fefd5_4:;
wr(s->r,5196,4,rd(s->r,4940,4));
L_1803fefd5_5:;
/* 1803fefd9: mulss xmm5, xmm3 */
L_1803fefd9_0:;
L_1803fefd9_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fefd9_2:;
/* 1803fefdd: subss xmm6, xmm0 */
L_1803fefdd_0:;
L_1803fefdd_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fefdd_2:;
/* 1803fefe1: movaps xmm0, xmm8 */
L_1803fefe1_0:;
L_1803fefe1_1:;
wr(s->r,4608,4,rd(s->r,5120,4));
L_1803fefe1_2:;
wr(s->r,4612,4,rd(s->r,5124,4));
L_1803fefe1_3:;
wr(s->r,4616,4,rd(s->r,5128,4));
L_1803fefe1_4:;
wr(s->r,4620,4,rd(s->r,5132,4));
L_1803fefe1_5:;
/* 1803fefe5: mulss xmm0, xmm3 */
L_1803fefe5_0:;
L_1803fefe5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fefe5_2:;
/* 1803fefe9: movaps xmm3, xmm4 */
L_1803fefe9_0:;
L_1803fefe9_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fefe9_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fefe9_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fefe9_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fefe9_5:;
/* 1803fefec: addss xmm1, xmm7 */
L_1803fefec_0:;
L_1803fefec_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fefec_2:;
/* 1803feff0: movss xmm7, dword ptr [r14 + 8] */
L_1803feff0_0:;
L_1803feff0_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803feff0_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803feff0_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803feff0_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803feff0_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803feff0_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803feff0_7:;
/* 1803feff6: mulss xmm9, xmm7 */
L_1803feff6_0:;
L_1803feff6_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803feff6_2:;
/* 1803feffb: mulss xmm8, xmm7 */
L_1803feffb_0:;
L_1803feffb_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803feffb_2:;
/* 1803ff000: add r10d, 1 */
L_1803ff000_0:;
L_1803ff000_1:;
wr(s->r,512,1,(((rd(s->r,144,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,144,4)));
L_1803ff000_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803ff000_3:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803ff000_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ff000_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff000_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ff000_7:;
wr(s->u,20,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ff000_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff000_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff000_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff000_11:;
/* 1803ff004: subss xmm9, xmm0 */
L_1803ff004_0:;
L_1803ff004_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff004_2:;
/* 1803ff009: movaps xmm0, xmm2 */
L_1803ff009_0:;
L_1803ff009_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ff009_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ff009_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ff009_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ff009_5:;
/* 1803ff00c: addss xmm5, xmm8 */
L_1803ff00c_0:;
L_1803ff00c_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff00c_2:;
/* 1803ff011: movss xmm8, dword ptr [rbp] */
L_1803ff011_0:;
L_1803ff011_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ff011_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff011_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff011_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff011_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff011_6:;
/* 1803ff017: movaps xmm7, xmm8 */
L_1803ff017_0:;
L_1803ff017_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803ff017_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803ff017_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803ff017_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803ff017_5:;
/* 1803ff01b: addss xmm3, xmm9 */
L_1803ff01b_0:;
L_1803ff01b_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff01b_2:;
/* 1803ff020: subss xmm4, xmm9 */
L_1803ff020_0:;
L_1803ff020_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff020_2:;
/* 1803ff025: addss xmm0, xmm5 */
L_1803ff025_0:;
L_1803ff025_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff025_2:;
/* 1803ff029: subss xmm2, xmm5 */
L_1803ff029_0:;
L_1803ff029_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff029_2:;
/* 1803ff02d: addss xmm7, xmm6 */
L_1803ff02d_0:;
L_1803ff02d_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ff02d_2:;
/* 1803ff031: subss xmm8, xmm6 */
L_1803ff031_0:;
L_1803ff031_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ff031_2:;
/* 1803ff036: movss xmm6, dword ptr [rbp + 4] */
L_1803ff036_0:;
L_1803ff036_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ff036_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff036_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803ff036_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff036_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff036_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff036_7:;
/* 1803ff03b: movaps xmm5, xmm6 */
L_1803ff03b_0:;
L_1803ff03b_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ff03b_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ff03b_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ff03b_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ff03b_5:;
/* 1803ff03e: subss xmm6, xmm1 */
L_1803ff03e_0:;
L_1803ff03e_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff03e_2:;
return UINT64_C(0x1803ff042);
}
uint64_t b_1803fefe5(CPU*s){
/* 1803fefe5: mulss xmm0, xmm3 */
L_1803fefe5_0:;
L_1803fefe5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fefe5_2:;
/* 1803fefe9: movaps xmm3, xmm4 */
L_1803fefe9_0:;
L_1803fefe9_1:;
wr(s->r,4800,4,rd(s->r,4864,4));
L_1803fefe9_2:;
wr(s->r,4804,4,rd(s->r,4868,4));
L_1803fefe9_3:;
wr(s->r,4808,4,rd(s->r,4872,4));
L_1803fefe9_4:;
wr(s->r,4812,4,rd(s->r,4876,4));
L_1803fefe9_5:;
/* 1803fefec: addss xmm1, xmm7 */
L_1803fefec_0:;
L_1803fefec_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5056,4),4),4));
L_1803fefec_2:;
/* 1803feff0: movss xmm7, dword ptr [r14 + 8] */
L_1803feff0_0:;
L_1803feff0_1:;
wr(s->u,0,8,(rd(s->r,176,8)+((U)UINT64_C(0x8))));
L_1803feff0_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803feff0_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803feff0_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803feff0_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803feff0_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803feff0_7:;
/* 1803feff6: mulss xmm9, xmm7 */
L_1803feff6_0:;
L_1803feff6_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803feff6_2:;
/* 1803feffb: mulss xmm8, xmm7 */
L_1803feffb_0:;
L_1803feffb_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)*fv(rd(s->r,5056,4),4),4));
L_1803feffb_2:;
/* 1803ff000: add r10d, 1 */
L_1803ff000_0:;
L_1803ff000_1:;
wr(s->r,512,1,(((rd(s->r,144,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,144,4)));
L_1803ff000_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x1)),4,0));
L_1803ff000_3:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x1))));
L_1803ff000_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803ff000_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff000_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803ff000_7:;
wr(s->u,20,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803ff000_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff000_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff000_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff000_11:;
/* 1803ff004: subss xmm9, xmm0 */
L_1803ff004_0:;
L_1803ff004_1:;
wr(s->r,5184,4,fb(fv(rd(s->r,5184,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff004_2:;
/* 1803ff009: movaps xmm0, xmm2 */
L_1803ff009_0:;
L_1803ff009_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803ff009_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803ff009_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803ff009_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803ff009_5:;
/* 1803ff00c: addss xmm5, xmm8 */
L_1803ff00c_0:;
L_1803ff00c_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803ff00c_2:;
/* 1803ff011: movss xmm8, dword ptr [rbp] */
L_1803ff011_0:;
L_1803ff011_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,40,8),4));
L_1803ff011_2:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803ff011_3:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803ff011_4:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803ff011_5:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803ff011_6:;
/* 1803ff017: movaps xmm7, xmm8 */
L_1803ff017_0:;
L_1803ff017_1:;
wr(s->r,5056,4,rd(s->r,5120,4));
L_1803ff017_2:;
wr(s->r,5060,4,rd(s->r,5124,4));
L_1803ff017_3:;
wr(s->r,5064,4,rd(s->r,5128,4));
L_1803ff017_4:;
wr(s->r,5068,4,rd(s->r,5132,4));
L_1803ff017_5:;
/* 1803ff01b: addss xmm3, xmm9 */
L_1803ff01b_0:;
L_1803ff01b_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803ff01b_2:;
/* 1803ff020: subss xmm4, xmm9 */
L_1803ff020_0:;
L_1803ff020_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803ff020_2:;
/* 1803ff025: addss xmm0, xmm5 */
L_1803ff025_0:;
L_1803ff025_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803ff025_2:;
/* 1803ff029: subss xmm2, xmm5 */
L_1803ff029_0:;
L_1803ff029_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803ff029_2:;
/* 1803ff02d: addss xmm7, xmm6 */
L_1803ff02d_0:;
L_1803ff02d_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4992,4),4),4));
L_1803ff02d_2:;
/* 1803ff031: subss xmm8, xmm6 */
L_1803ff031_0:;
L_1803ff031_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)-fv(rd(s->r,4992,4),4),4));
L_1803ff031_2:;
/* 1803ff036: movss xmm6, dword ptr [rbp + 4] */
L_1803ff036_0:;
L_1803ff036_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x4))));
L_1803ff036_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803ff036_3:;
wr(s->r,4992,4,rd(s->u,16,4));
L_1803ff036_4:;
wr(s->r,4996,4,((U)UINT64_C(0x0)));
L_1803ff036_5:;
wr(s->r,5000,4,((U)UINT64_C(0x0)));
L_1803ff036_6:;
wr(s->r,5004,4,((U)UINT64_C(0x0)));
L_1803ff036_7:;
/* 1803ff03b: movaps xmm5, xmm6 */
L_1803ff03b_0:;
L_1803ff03b_1:;
wr(s->r,4928,4,rd(s->r,4992,4));
L_1803ff03b_2:;
wr(s->r,4932,4,rd(s->r,4996,4));
L_1803ff03b_3:;
wr(s->r,4936,4,rd(s->r,5000,4));
L_1803ff03b_4:;
wr(s->r,4940,4,rd(s->r,5004,4));
L_1803ff03b_5:;
/* 1803ff03e: subss xmm6, xmm1 */
L_1803ff03e_0:;
L_1803ff03e_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803ff03e_2:;
/* 1803ff042: cmp r10d, 0x7f */
L_1803ff042_0:;
L_1803ff042_1:;
wr(s->u,26,4,rd(s->r,144,4));
L_1803ff042_2:;
wr(s->r,512,1,(rd(s->u,26,4)<((U)UINT64_C(0x7f))));
L_1803ff042_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,26,4),((U)UINT64_C(0x7f)),4,1));
L_1803ff042_4:;
wr(s->u,30,4,(rd(s->u,26,4)-((U)UINT64_C(0x7f))));
L_1803ff042_5:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803ff042_6:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803ff042_7:;
wr(s->u,20,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803ff042_8:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803ff042_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803ff042_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803ff042_11:;
/* 1803ff046: addss xmm5, xmm1 */
L_1803ff046_0:;
L_1803ff046_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803ff046_2:;
/* 1803ff04a: movaps xmm1, xmm7 */
L_1803ff04a_0:;
L_1803ff04a_1:;
wr(s->r,4672,4,rd(s->r,5056,4));
L_1803ff04a_2:;
wr(s->r,4676,4,rd(s->r,5060,4));
L_1803ff04a_3:;
wr(s->r,4680,4,rd(s->r,5064,4));
L_1803ff04a_4:;
wr(s->r,4684,4,rd(s->r,5068,4));
L_1803ff04a_5:;
/* 1803ff04d: subss xmm7, xmm3 */
L_1803ff04d_0:;
L_1803ff04d_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803ff04d_2:;
/* 1803ff051: movss dword ptr [rbp + 0x800], xmm7 */
L_1803ff051_0:;
L_1803ff051_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x800))));
L_1803ff051_2:;
wr(s->u,16,4,rd(s->r,5056,4));
L_1803ff051_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff051_4:;
/* 1803ff059: addss xmm1, xmm3 */
L_1803ff059_0:;
L_1803ff059_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803ff059_2:;
/* 1803ff05d: movss dword ptr [rbp], xmm1 */
L_1803ff05d_0:;
L_1803ff05d_1:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803ff05d_2:;
mw((uint64_t)rd(s->r,40,8),4,rd(s->u,16,4));
L_1803ff05d_3:;
/* 1803ff062: movaps xmm1, xmm5 */
L_1803ff062_0:;
L_1803ff062_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803ff062_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803ff062_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803ff062_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803ff062_5:;
/* 1803ff065: subss xmm5, xmm0 */
L_1803ff065_0:;
L_1803ff065_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803ff065_2:;
/* 1803ff069: movss dword ptr [rbp + 0x804], xmm5 */
L_1803ff069_0:;
L_1803ff069_1:;
wr(s->u,8,8,(rd(s->r,40,8)+((U)UINT64_C(0x804))));
L_1803ff069_2:;
wr(s->u,16,4,rd(s->r,4928,4));
L_1803ff069_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803ff069_4:;
/* 1803ff071: addss xmm1, xmm0 */
L_1803ff071_0:;
L_1803ff071_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803ff071_2:;
return UINT64_C(0x1803ff075);
}
