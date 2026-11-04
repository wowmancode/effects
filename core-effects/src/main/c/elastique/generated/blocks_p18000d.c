#include "lift_runtime.h"
uint64_t b_18000d680(CPU*s){
/* 18000d680: cmp rcx, qword ptr [rip + 0x941751] */
L_18000d680_0:;
L_18000d680_1:;
wr(s->u,11,8,mr(UINT64_C(0x18094edd8),8));
L_18000d680_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,11,8)));
L_18000d680_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,11,8),8,1));
L_18000d680_4:;
wr(s->u,19,8,(rd(s->r,8,8)-rd(s->u,11,8)));
L_18000d680_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18000d680_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_18000d680_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_18000d680_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_18000d680_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_18000d680_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_18000d680_11:;
/* 18000d687: jne 0x18000d69a */
L_18000d687_0:;
L_18000d687_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_18000d687_2:;
if(rd(s->u,0,1)){return UINT64_C(0x18000d69a);}
L_18000d687_3:;
return UINT64_C(0x18000d689);
}
uint64_t b_18000d689(CPU*s){
/* 18000d689: rol rcx, 0x10 */
L_18000d689_0:;
L_18000d689_1:;
wr(s->u,23,4,(((U)UINT64_C(0x10))&((U)UINT64_C(0x3f))));
L_18000d689_2:;
wr(s->u,27,8,((rd(s->u,23,4)>=64)?0:(rd(s->r,8,8)<<rd(s->u,23,4))));
L_18000d689_3:;
wr(s->u,35,4,(((U)UINT64_C(0x40))-rd(s->u,23,4)));
L_18000d689_4:;
wr(s->u,39,8,((rd(s->u,35,4)>=64)?0:(rd(s->r,8,8)>>rd(s->u,35,4))));
L_18000d689_5:;
wr(s->r,8,8,(rd(s->u,27,8)|rd(s->u,39,8)));
L_18000d689_6:;
wr(s->u,10,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_18000d689_7:;
wr(s->u,11,8,(rd(s->r,8,8)&((U)UINT64_C(0x1))));
L_18000d689_8:;
wr(s->u,19,1,(rd(s->u,11,8)!=((U)UINT64_C(0x0))));
L_18000d689_9:;
wr(s->u,0,1,rd(s->u,10,1));
L_18000d689_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_18000d689_11:;
wr(s->u,2,1,(!rd(s->u,10,1)));
L_18000d689_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_18000d689_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,19,1)));
L_18000d689_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_18000d689_15:;
wr(s->u,20,1,(rd(s->u,23,4)==((U)UINT64_C(0x1))));
L_18000d689_16:;
wr(s->u,21,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18000d689_17:;
wr(s->u,22,1,(rd(s->r,512,1)^rd(s->u,21,1)));
L_18000d689_18:;
wr(s->u,0,1,rd(s->u,20,1));
L_18000d689_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,22,1)));
L_18000d689_20:;
wr(s->u,2,1,(!rd(s->u,20,1)));
L_18000d689_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_18000d689_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_18000d689_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_18000d689_24:;
/* 18000d68d: test cx, 0xffff */
L_18000d68d_0:;
L_18000d68d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_18000d68d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18000d68d_3:;
wr(s->u,47,2,(rd(s->r,8,2)&((U)UINT64_C(0xffff))));
L_18000d68d_4:;
wr(s->r,519,1,(sx(rd(s->u,47,2),2)<sx(((U)UINT64_C(0x0)),2)));
L_18000d68d_5:;
wr(s->r,518,1,(rd(s->u,47,2)==((U)UINT64_C(0x0))));
L_18000d68d_6:;
wr(s->u,6,2,(rd(s->u,47,2)&((U)UINT64_C(0xff))));
L_18000d68d_7:;
wr(s->u,8,1,pop(rd(s->u,6,2),2));
L_18000d68d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_18000d68d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_18000d68d_10:;
/* 18000d692: jne 0x18000d696 */
L_18000d692_0:;
L_18000d692_1:;
wr(s->u,5,1,(!rd(s->r,518,1)));
L_18000d692_2:;
if(rd(s->u,5,1)){return UINT64_C(0x18000d696);}
L_18000d692_3:;
return UINT64_C(0x18000d694);
}
uint64_t b_18000d694(CPU*s){
/* 18000d694: repz ret  */
L_18000d694_0:;
L_18000d694_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_18000d694_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_18000d694_3:;
return (uint64_t)rd(s->r,648,8);
L_18000d694_4:;
return UINT64_C(0x18000d696);
}
uint64_t b_18000d696(CPU*s){
/* 18000d696: ror rcx, 0x10 */
L_18000d696_0:;
L_18000d696_1:;
wr(s->u,18,4,(((U)UINT64_C(0x10))&((U)UINT64_C(0x3f))));
L_18000d696_2:;
wr(s->u,22,8,((rd(s->u,18,4)>=64)?0:(rd(s->r,8,8)>>rd(s->u,18,4))));
L_18000d696_3:;
wr(s->u,30,4,(((U)UINT64_C(0x40))-rd(s->u,18,4)));
L_18000d696_4:;
wr(s->u,34,8,((rd(s->u,30,4)>=64)?0:(rd(s->r,8,8)<<rd(s->u,30,4))));
L_18000d696_5:;
wr(s->r,8,8,(rd(s->u,22,8)|rd(s->u,34,8)));
L_18000d696_6:;
wr(s->u,5,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_18000d696_7:;
wr(s->u,6,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18000d696_8:;
wr(s->u,0,1,rd(s->u,5,1));
L_18000d696_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_18000d696_10:;
wr(s->u,2,1,(!rd(s->u,5,1)));
L_18000d696_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_18000d696_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,6,1)));
L_18000d696_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_18000d696_14:;
wr(s->u,7,1,(rd(s->u,18,4)==((U)UINT64_C(0x1))));
L_18000d696_15:;
wr(s->u,8,8,((((U)UINT64_C(0x1))>=64)?0:(rd(s->r,8,8)<<((U)UINT64_C(0x1)))));
L_18000d696_16:;
wr(s->u,16,1,(sx(rd(s->u,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18000d696_17:;
wr(s->u,17,1,(rd(s->r,512,1)^rd(s->u,16,1)));
L_18000d696_18:;
wr(s->u,0,1,rd(s->u,7,1));
L_18000d696_19:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,17,1)));
L_18000d696_20:;
wr(s->u,2,1,(!rd(s->u,7,1)));
L_18000d696_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_18000d696_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_18000d696_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_18000d696_24:;
/* 18000d69a: jmp 0x18000dc90 */
L_18000d69a_0:;
L_18000d69a_1:;
return UINT64_C(0x18000dc90);
L_18000d69a_2:;
return UINT64_C(0x18000d69f);
}
uint64_t b_18000d69a(CPU*s){
/* 18000d69a: jmp 0x18000dc90 */
L_18000d69a_0:;
L_18000d69a_1:;
return UINT64_C(0x18000dc90);
L_18000d69a_2:;
return UINT64_C(0x18000d69f);
}
uint64_t b_18000dc90(CPU*s){
/* 18000dc90: mov qword ptr [rsp + 8], rcx */
L_18000dc90_0:;
L_18000dc90_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_18000dc90_2:;
wr(s->u,8,8,rd(s->r,8,8));
L_18000dc90_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_18000dc90_4:;
/* 18000dc95: sub rsp, 0x88 */
L_18000dc95_0:;
L_18000dc95_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x88))));
L_18000dc95_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x88)),8,1));
L_18000dc95_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x88))));
L_18000dc95_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18000dc95_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_18000dc95_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_18000dc95_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_18000dc95_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_18000dc95_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_18000dc95_10:;
/* 18000dc9c: lea rcx, [rip + 0x95cb0d] */
L_18000dc9c_0:;
L_18000dc9c_1:;
wr(s->r,8,8,((U)UINT64_C(0x18096a7b0)));
L_18000dc9c_2:;
/* 18000dca3: call qword ptr [rip + 0x63ab07] */
L_18000dca3_0:;
L_18000dca3_1:;
wr(s->u,26,8,mr(UINT64_C(0x1806487b0),8));
L_18000dca3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18000dca3_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18000dca9)));
L_18000dca3_4:;
return (uint64_t)rd(s->u,26,8);
L_18000dca3_5:;
return UINT64_C(0x18000dca9);
}
uint64_t b_18000dca9(CPU*s){
/* 18000dca9: mov r11, qword ptr [rip + 0x95cbf8] */
L_18000dca9_0:;
L_18000dca9_1:;
wr(s->r,152,8,mr(UINT64_C(0x18096a8a8),8));
L_18000dca9_2:;
/* 18000dcb0: mov qword ptr [rsp + 0x58], r11 */
L_18000dcb0_0:;
L_18000dcb0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_18000dcb0_2:;
wr(s->u,8,8,rd(s->r,152,8));
L_18000dcb0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_18000dcb0_4:;
/* 18000dcb5: xor r8d, r8d */
L_18000dcb5_0:;
L_18000dcb5_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_18000dcb5_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18000dcb5_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_18000dcb5_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_18000dcb5_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_18000dcb5_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_18000dcb5_7:;
wr(s->u,24,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_18000dcb5_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_18000dcb5_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_18000dcb5_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_18000dcb5_11:;
/* 18000dcb8: lea rdx, [rsp + 0x60] */
L_18000dcb8_0:;
L_18000dcb8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_18000dcb8_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_18000dcb8_3:;
/* 18000dcbd: mov rcx, qword ptr [rsp + 0x58] */
L_18000dcbd_0:;
L_18000dcbd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_18000dcbd_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_18000dcbd_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_18000dcbd_4:;
/* 18000dcc2: call 0x180608f5c */
L_18000dcc2_0:;
L_18000dcc2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18000dcc2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18000dcc7)));
L_18000dcc2_3:;
return (uint64_t)UINT64_C(0x180608f5c);
L_18000dcc2_4:;
return UINT64_C(0x18000dcc7);
}
uint64_t b_18000dcc7(CPU*s){
/* 18000dcc7: mov qword ptr [rsp + 0x50], rax */
L_18000dcc7_0:;
L_18000dcc7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_18000dcc7_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_18000dcc7_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_18000dcc7_4:;
/* 18000dccc: cmp qword ptr [rsp + 0x50], 0 */
L_18000dccc_0:;
L_18000dccc_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_18000dccc_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_18000dccc_3:;
wr(s->u,34,8,rd(s->u,16,8));
L_18000dccc_4:;
wr(s->r,512,1,(rd(s->u,34,8)<((U)UINT64_C(0x0))));
L_18000dccc_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,34,8),((U)UINT64_C(0x0)),8,1));
L_18000dccc_6:;
wr(s->u,42,8,(rd(s->u,34,8)-((U)UINT64_C(0x0))));
L_18000dccc_7:;
wr(s->r,519,1,(sx(rd(s->u,42,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18000dccc_8:;
wr(s->r,518,1,(rd(s->u,42,8)==((U)UINT64_C(0x0))));
L_18000dccc_9:;
wr(s->u,24,8,(rd(s->u,42,8)&((U)UINT64_C(0xff))));
L_18000dccc_10:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_18000dccc_11:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_18000dccc_12:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_18000dccc_13:;
/* 18000dcd2: je 0x18000dd15 */
L_18000dcd2_0:;
L_18000dcd2_1:;
if(rd(s->r,518,1)){return UINT64_C(0x18000dd15);}
L_18000dcd2_2:;
return UINT64_C(0x18000dcd4);
}
uint64_t b_18000dcd4(CPU*s){
/* 18000dcd4: mov qword ptr [rsp + 0x38], 0 */
L_18000dcd4_0:;
L_18000dcd4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_18000dcd4_2:;
wr(s->u,8,8,((U)UINT64_C(0x0)));
L_18000dcd4_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_18000dcd4_4:;
/* 18000dcdd: lea rax, [rsp + 0x48] */
L_18000dcdd_0:;
L_18000dcdd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_18000dcdd_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_18000dcdd_3:;
/* 18000dce2: mov qword ptr [rsp + 0x30], rax */
L_18000dce2_0:;
L_18000dce2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_18000dce2_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_18000dce2_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_18000dce2_4:;
/* 18000dce7: lea rax, [rsp + 0x40] */
L_18000dce7_0:;
L_18000dce7_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_18000dce7_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_18000dce7_3:;
/* 18000dcec: mov qword ptr [rsp + 0x28], rax */
L_18000dcec_0:;
L_18000dcec_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_18000dcec_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_18000dcec_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_18000dcec_4:;
/* 18000dcf1: lea rax, [rip + 0x95cab8] */
L_18000dcf1_0:;
L_18000dcf1_1:;
wr(s->r,0,8,((U)UINT64_C(0x18096a7b0)));
L_18000dcf1_2:;
/* 18000dcf8: mov qword ptr [rsp + 0x20], rax */
L_18000dcf8_0:;
L_18000dcf8_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_18000dcf8_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_18000dcf8_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_18000dcf8_4:;
/* 18000dcfd: mov r9, qword ptr [rsp + 0x50] */
L_18000dcfd_0:;
L_18000dcfd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_18000dcfd_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_18000dcfd_3:;
wr(s->r,136,8,rd(s->u,16,8));
L_18000dcfd_4:;
/* 18000dd02: mov r8, qword ptr [rsp + 0x58] */
L_18000dd02_0:;
L_18000dd02_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_18000dd02_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_18000dd02_3:;
wr(s->r,128,8,rd(s->u,16,8));
L_18000dd02_4:;
/* 18000dd07: mov rdx, qword ptr [rsp + 0x60] */
L_18000dd07_0:;
L_18000dd07_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_18000dd07_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_18000dd07_3:;
wr(s->r,16,8,rd(s->u,16,8));
L_18000dd07_4:;
/* 18000dd0c: xor ecx, ecx */
L_18000dd0c_0:;
L_18000dd0c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_18000dd0c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18000dd0c_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_18000dd0c_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_18000dd0c_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_18000dd0c_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_18000dd0c_7:;
wr(s->u,24,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_18000dd0c_8:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_18000dd0c_9:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_18000dd0c_10:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_18000dd0c_11:;
/* 18000dd0e: call 0x180608f56 */
L_18000dd0e_0:;
L_18000dd0e_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18000dd0e_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18000dd13)));
L_18000dd0e_3:;
return (uint64_t)UINT64_C(0x180608f56);
L_18000dd0e_4:;
return UINT64_C(0x18000dd13);
}
uint64_t b_18000dd13(CPU*s){
/* 18000dd13: jmp 0x18000dd37 */
L_18000dd13_0:;
L_18000dd13_1:;
return UINT64_C(0x18000dd37);
L_18000dd13_2:;
return UINT64_C(0x18000dd15);
}
uint64_t b_18000dd15(CPU*s){
/* 18000dd15: mov rax, qword ptr [rsp + 0x88] */
L_18000dd15_0:;
L_18000dd15_1:;
wr(s->u,8,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_18000dd15_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_18000dd15_3:;
wr(s->r,0,8,rd(s->u,24,8));
L_18000dd15_4:;
/* 18000dd1d: mov qword ptr [rip + 0x95cb84], rax */
L_18000dd1d_0:;
L_18000dd1d_1:;
mw(UINT64_C(0x18096a8a8),8,rd(s->r,0,8));
L_18000dd1d_2:;
/* 18000dd24: lea rax, [rsp + 0x88] */
L_18000dd24_0:;
L_18000dd24_1:;
wr(s->u,8,8,(((U)UINT64_C(0x88))+rd(s->r,32,8)));
L_18000dd24_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_18000dd24_3:;
/* 18000dd2c: add rax, 8 */
L_18000dd2c_0:;
L_18000dd2c_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_18000dd2c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x8)),8,0));
L_18000dd2c_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_18000dd2c_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18000dd2c_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_18000dd2c_6:;
wr(s->u,32,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_18000dd2c_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_18000dd2c_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_18000dd2c_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_18000dd2c_10:;
/* 18000dd30: mov qword ptr [rip + 0x95cb11], rax */
L_18000dd30_0:;
L_18000dd30_1:;
mw(UINT64_C(0x18096a848),8,rd(s->r,0,8));
L_18000dd30_2:;
/* 18000dd37: mov rax, qword ptr [rip + 0x95cb6a] */
L_18000dd37_0:;
L_18000dd37_1:;
wr(s->r,0,8,mr(UINT64_C(0x18096a8a8),8));
L_18000dd37_2:;
/* 18000dd3e: mov qword ptr [rip + 0x95c9db], rax */
L_18000dd3e_0:;
L_18000dd3e_1:;
mw(UINT64_C(0x18096a720),8,rd(s->r,0,8));
L_18000dd3e_2:;
/* 18000dd45: mov rax, qword ptr [rsp + 0x90] */
L_18000dd45_0:;
L_18000dd45_1:;
wr(s->u,8,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_18000dd45_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_18000dd45_3:;
wr(s->r,0,8,rd(s->u,24,8));
L_18000dd45_4:;
/* 18000dd4d: mov qword ptr [rip + 0x95cadc], rax */
L_18000dd4d_0:;
L_18000dd4d_1:;
mw(UINT64_C(0x18096a830),8,rd(s->r,0,8));
L_18000dd4d_2:;
/* 18000dd54: mov dword ptr [rip + 0x95c9b2], 0xc0000409 */
L_18000dd54_0:;
L_18000dd54_1:;
mw(UINT64_C(0x18096a710),4,((U)UINT64_C(0xc0000409)));
L_18000dd54_2:;
/* 18000dd5e: mov dword ptr [rip + 0x95c9ac], 1 */
L_18000dd5e_0:;
L_18000dd5e_1:;
mw(UINT64_C(0x18096a714),4,((U)UINT64_C(0x1)));
L_18000dd5e_2:;
/* 18000dd68: mov rax, qword ptr [rip + 0x941069] */
L_18000dd68_0:;
L_18000dd68_1:;
wr(s->r,0,8,mr(UINT64_C(0x18094edd8),8));
L_18000dd68_2:;
/* 18000dd6f: mov qword ptr [rsp + 0x68], rax */
L_18000dd6f_0:;
L_18000dd6f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_18000dd6f_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_18000dd6f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_18000dd6f_4:;
/* 18000dd74: mov rax, qword ptr [rip + 0x941065] */
L_18000dd74_0:;
L_18000dd74_1:;
wr(s->r,0,8,mr(UINT64_C(0x18094ede0),8));
L_18000dd74_2:;
/* 18000dd7b: mov qword ptr [rsp + 0x70], rax */
L_18000dd7b_0:;
L_18000dd7b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_18000dd7b_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_18000dd7b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_18000dd7b_4:;
/* 18000dd80: call qword ptr [rip + 0x63aa12] */
L_18000dd80_0:;
L_18000dd80_1:;
wr(s->u,42,8,mr(UINT64_C(0x180648798),8));
L_18000dd80_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18000dd80_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18000dd86)));
L_18000dd80_4:;
return (uint64_t)rd(s->u,42,8);
L_18000dd80_5:;
return UINT64_C(0x18000dd86);
}
uint64_t b_18000dd37(CPU*s){
/* 18000dd37: mov rax, qword ptr [rip + 0x95cb6a] */
L_18000dd37_0:;
L_18000dd37_1:;
wr(s->r,0,8,mr(UINT64_C(0x18096a8a8),8));
L_18000dd37_2:;
/* 18000dd3e: mov qword ptr [rip + 0x95c9db], rax */
L_18000dd3e_0:;
L_18000dd3e_1:;
mw(UINT64_C(0x18096a720),8,rd(s->r,0,8));
L_18000dd3e_2:;
/* 18000dd45: mov rax, qword ptr [rsp + 0x90] */
L_18000dd45_0:;
L_18000dd45_1:;
wr(s->u,8,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_18000dd45_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_18000dd45_3:;
wr(s->r,0,8,rd(s->u,24,8));
L_18000dd45_4:;
/* 18000dd4d: mov qword ptr [rip + 0x95cadc], rax */
L_18000dd4d_0:;
L_18000dd4d_1:;
mw(UINT64_C(0x18096a830),8,rd(s->r,0,8));
L_18000dd4d_2:;
/* 18000dd54: mov dword ptr [rip + 0x95c9b2], 0xc0000409 */
L_18000dd54_0:;
L_18000dd54_1:;
mw(UINT64_C(0x18096a710),4,((U)UINT64_C(0xc0000409)));
L_18000dd54_2:;
/* 18000dd5e: mov dword ptr [rip + 0x95c9ac], 1 */
L_18000dd5e_0:;
L_18000dd5e_1:;
mw(UINT64_C(0x18096a714),4,((U)UINT64_C(0x1)));
L_18000dd5e_2:;
/* 18000dd68: mov rax, qword ptr [rip + 0x941069] */
L_18000dd68_0:;
L_18000dd68_1:;
wr(s->r,0,8,mr(UINT64_C(0x18094edd8),8));
L_18000dd68_2:;
/* 18000dd6f: mov qword ptr [rsp + 0x68], rax */
L_18000dd6f_0:;
L_18000dd6f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_18000dd6f_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_18000dd6f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_18000dd6f_4:;
/* 18000dd74: mov rax, qword ptr [rip + 0x941065] */
L_18000dd74_0:;
L_18000dd74_1:;
wr(s->r,0,8,mr(UINT64_C(0x18094ede0),8));
L_18000dd74_2:;
/* 18000dd7b: mov qword ptr [rsp + 0x70], rax */
L_18000dd7b_0:;
L_18000dd7b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_18000dd7b_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_18000dd7b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_18000dd7b_4:;
/* 18000dd80: call qword ptr [rip + 0x63aa12] */
L_18000dd80_0:;
L_18000dd80_1:;
wr(s->u,32,8,mr(UINT64_C(0x180648798),8));
L_18000dd80_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18000dd80_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18000dd86)));
L_18000dd80_4:;
return (uint64_t)rd(s->u,32,8);
L_18000dd80_5:;
return UINT64_C(0x18000dd86);
}
uint64_t b_18000dd86(CPU*s){
/* 18000dd86: mov dword ptr [rip + 0x95ca1c], eax */
L_18000dd86_0:;
L_18000dd86_1:;
mw(UINT64_C(0x18096a7a8),4,rd(s->r,0,4));
L_18000dd86_2:;
/* 18000dd8c: mov ecx, 1 */
L_18000dd8c_0:;
L_18000dd8c_1:;
wr(s->r,8,8,((U)UINT64_C(0x1)));
L_18000dd8c_2:;
/* 18000dd91: call 0x18000e0e4 */
L_18000dd91_0:;
L_18000dd91_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18000dd91_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18000dd96)));
L_18000dd91_3:;
return (uint64_t)UINT64_C(0x18000e0e4);
L_18000dd91_4:;
return UINT64_C(0x18000dd96);
}
uint64_t b_18000dd96(CPU*s){
/* 18000dd96: xor ecx, ecx */
L_18000dd96_0:;
L_18000dd96_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_18000dd96_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18000dd96_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_18000dd96_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_18000dd96_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_18000dd96_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_18000dd96_7:;
wr(s->u,0,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_18000dd96_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_18000dd96_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_18000dd96_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_18000dd96_11:;
/* 18000dd98: call qword ptr [rip + 0x63a9f2] */
L_18000dd98_0:;
L_18000dd98_1:;
wr(s->u,6,8,mr(UINT64_C(0x180648790),8));
L_18000dd98_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18000dd98_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18000dd9e)));
L_18000dd98_4:;
return (uint64_t)rd(s->u,6,8);
L_18000dd98_5:;
return UINT64_C(0x18000dd9e);
}
uint64_t b_18000dd9e(CPU*s){
/* 18000dd9e: lea rcx, [rip + 0x640fbb] */
L_18000dd9e_0:;
L_18000dd9e_1:;
wr(s->r,8,8,((U)UINT64_C(0x18064ed60)));
L_18000dd9e_2:;
/* 18000dda5: call qword ptr [rip + 0x63a9dd] */
L_18000dda5_0:;
L_18000dda5_1:;
wr(s->u,0,8,mr(UINT64_C(0x180648788),8));
L_18000dda5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18000dda5_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18000ddab)));
L_18000dda5_4:;
return (uint64_t)rd(s->u,0,8);
L_18000dda5_5:;
return UINT64_C(0x18000ddab);
}
uint64_t b_18000ddab(CPU*s){
/* 18000ddab: cmp dword ptr [rip + 0x95c9f6], 0 */
L_18000ddab_0:;
L_18000ddab_1:;
wr(s->u,7,4,mr(UINT64_C(0x18096a7a8),4));
L_18000ddab_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x0))));
L_18000ddab_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x0)),4,1));
L_18000ddab_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x0))));
L_18000ddab_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_18000ddab_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_18000ddab_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_18000ddab_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_18000ddab_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_18000ddab_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_18000ddab_11:;
/* 18000ddb2: jne 0x18000ddbe */
L_18000ddb2_0:;
L_18000ddb2_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_18000ddb2_2:;
if(rd(s->u,0,1)){return UINT64_C(0x18000ddbe);}
L_18000ddb2_3:;
return UINT64_C(0x18000ddb4);
}
uint64_t b_18000ddb4(CPU*s){
/* 18000ddb4: mov ecx, 1 */
L_18000ddb4_0:;
L_18000ddb4_1:;
wr(s->r,8,8,((U)UINT64_C(0x1)));
L_18000ddb4_2:;
/* 18000ddb9: call 0x18000e0e4 */
L_18000ddb9_0:;
L_18000ddb9_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18000ddb9_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18000ddbe)));
L_18000ddb9_3:;
return (uint64_t)UINT64_C(0x18000e0e4);
L_18000ddb9_4:;
return UINT64_C(0x18000ddbe);
}
uint64_t b_18000ddbe(CPU*s){
/* 18000ddbe: call qword ptr [rip + 0x63a67c] */
L_18000ddbe_0:;
L_18000ddbe_1:;
wr(s->u,0,8,mr(UINT64_C(0x180648440),8));
L_18000ddbe_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18000ddbe_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18000ddc4)));
L_18000ddbe_4:;
return (uint64_t)rd(s->u,0,8);
L_18000ddbe_5:;
return UINT64_C(0x18000ddc4);
}
uint64_t b_18000ddc4(CPU*s){
/* 18000ddc4: mov edx, 0xc0000409 */
L_18000ddc4_0:;
L_18000ddc4_1:;
wr(s->r,16,8,((U)UINT64_C(0xc0000409)));
L_18000ddc4_2:;
/* 18000ddc9: mov rcx, rax */
L_18000ddc9_0:;
L_18000ddc9_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_18000ddc9_2:;
/* 18000ddcc: call qword ptr [rip + 0x63a9ae] */
L_18000ddcc_0:;
L_18000ddcc_1:;
wr(s->u,0,8,mr(UINT64_C(0x180648780),8));
L_18000ddcc_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18000ddcc_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18000ddd2)));
L_18000ddcc_4:;
return (uint64_t)rd(s->u,0,8);
L_18000ddcc_5:;
return UINT64_C(0x18000ddd2);
}
uint64_t b_18000ddd2(CPU*s){
/* 18000ddd2: add rsp, 0x88 */
L_18000ddd2_0:;
L_18000ddd2_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x88)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_18000ddd2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x88)),8,0));
L_18000ddd2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x88))));
L_18000ddd2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18000ddd2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_18000ddd2_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_18000ddd2_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_18000ddd2_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_18000ddd2_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_18000ddd2_10:;
/* 18000ddd9: ret  */
L_18000ddd9_0:;
L_18000ddd9_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_18000ddd9_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_18000ddd9_3:;
return (uint64_t)rd(s->r,648,8);
L_18000ddd9_4:;
return UINT64_C(0x18000ddda);
}
uint64_t b_18000dffe(CPU*s){
/* 18000dffe: jmp qword ptr [rip + 0x63af74] */
L_18000dffe_0:;
L_18000dffe_1:;
return (uint64_t)mr(UINT64_C(0x180648f78),8);
L_18000dffe_2:;
return UINT64_C(0x18000e004);
}
