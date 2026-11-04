#include "lift_runtime.h"
uint64_t b_1803d5240(CPU*s){
/* 1803d5240: push rbx */
L_1803d5240_0:;
L_1803d5240_1:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803d5240_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5240_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,8,8));
L_1803d5240_4:;
/* 1803d5242: sub rsp, 0x20 */
L_1803d5242_0:;
L_1803d5242_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803d5242_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803d5242_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803d5242_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5242_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5242_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5242_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d5242_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5242_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5242_10:;
/* 1803d5246: lea rax, [rip + 0x436ccb] */
L_1803d5246_0:;
L_1803d5246_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080bf18)));
L_1803d5246_2:;
/* 1803d524d: mov rbx, rcx */
L_1803d524d_0:;
L_1803d524d_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803d524d_2:;
/* 1803d5250: mov qword ptr [rcx], rax */
L_1803d5250_0:;
L_1803d5250_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803d5250_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,0,8));
L_1803d5250_3:;
/* 1803d5253: test dl, 1 */
L_1803d5253_0:;
L_1803d5253_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5253_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5253_3:;
wr(s->u,26,1,(rd(s->r,16,1)&((U)UINT64_C(0x1))));
L_1803d5253_4:;
wr(s->r,519,1,(sx(rd(s->u,26,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803d5253_5:;
wr(s->r,518,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803d5253_6:;
wr(s->u,16,1,(rd(s->u,26,1)&((U)UINT64_C(0xff))));
L_1803d5253_7:;
wr(s->u,24,1,pop(rd(s->u,16,1),1));
L_1803d5253_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5253_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5253_10:;
/* 1803d5256: je 0x1803d525d */
L_1803d5256_0:;
L_1803d5256_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d525d);}
L_1803d5256_2:;
return UINT64_C(0x1803d5258);
}
uint64_t b_1803d5258(CPU*s){
/* 1803d5258: call 0x180003160 */
L_1803d5258_0:;
L_1803d5258_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5258_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d525d)));
L_1803d5258_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803d5258_4:;
return UINT64_C(0x1803d525d);
}
uint64_t b_1803d525d(CPU*s){
/* 1803d525d: mov rax, rbx */
L_1803d525d_0:;
L_1803d525d_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803d525d_2:;
/* 1803d5260: add rsp, 0x20 */
L_1803d5260_0:;
L_1803d5260_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5260_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803d5260_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803d5260_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5260_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5260_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5260_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5260_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5260_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5260_10:;
/* 1803d5264: pop rbx */
L_1803d5264_0:;
L_1803d5264_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803d5264_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5264_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5264_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803d5264_5:;
/* 1803d5265: ret  */
L_1803d5265_0:;
L_1803d5265_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5265_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5265_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5265_4:;
return UINT64_C(0x1803d5266);
}
uint64_t b_1803d52b0(CPU*s){
/* 1803d52b0: push rbx */
L_1803d52b0_0:;
L_1803d52b0_1:;
wr(s->u,9,8,rd(s->r,24,8));
L_1803d52b0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d52b0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,9,8));
L_1803d52b0_4:;
/* 1803d52b2: sub rsp, 0x20 */
L_1803d52b2_0:;
L_1803d52b2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803d52b2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803d52b2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803d52b2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d52b2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d52b2_6:;
wr(s->u,17,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d52b2_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803d52b2_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803d52b2_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803d52b2_10:;
/* 1803d52b6: mov rbx, rcx */
L_1803d52b6_0:;
L_1803d52b6_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803d52b6_2:;
/* 1803d52b9: mov rcx, qword ptr [rcx] */
L_1803d52b9_0:;
L_1803d52b9_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d52b9_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803d52b9_3:;
/* 1803d52bc: test rcx, rcx */
L_1803d52bc_0:;
L_1803d52bc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d52bc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d52bc_3:;
wr(s->u,27,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803d52bc_4:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d52bc_5:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803d52bc_6:;
wr(s->u,17,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803d52bc_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803d52bc_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803d52bc_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803d52bc_10:;
/* 1803d52bf: jne 0x1803d52cc */
L_1803d52bf_0:;
L_1803d52bf_1:;
wr(s->u,8,1,(!rd(s->r,518,1)));
L_1803d52bf_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803d52cc);}
L_1803d52bf_3:;
return UINT64_C(0x1803d52c1);
}
uint64_t b_1803d52c1(CPU*s){
/* 1803d52c1: mov eax, 0x4c4b43 */
L_1803d52c1_0:;
L_1803d52c1_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803d52c1_2:;
/* 1803d52c6: add rsp, 0x20 */
L_1803d52c6_0:;
L_1803d52c6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d52c6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803d52c6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803d52c6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d52c6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d52c6_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d52c6_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d52c6_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d52c6_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d52c6_10:;
/* 1803d52ca: pop rbx */
L_1803d52ca_0:;
L_1803d52ca_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803d52ca_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d52ca_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d52ca_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803d52ca_5:;
/* 1803d52cb: ret  */
L_1803d52cb_0:;
L_1803d52cb_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d52cb_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d52cb_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d52cb_4:;
return UINT64_C(0x1803d52cc);
}
uint64_t b_1803d52cc(CPU*s){
/* 1803d52cc: mov rax, qword ptr [rcx] */
L_1803d52cc_0:;
L_1803d52cc_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d52cc_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803d52cc_3:;
/* 1803d52cf: mov edx, 1 */
L_1803d52cf_0:;
L_1803d52cf_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803d52cf_2:;
/* 1803d52d4: call qword ptr [rax] */
L_1803d52d4_0:;
L_1803d52d4_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803d52d4_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803d52d4_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d52d4_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d52d6)));
L_1803d52d4_5:;
return (uint64_t)rd(s->u,8,8);
L_1803d52d4_6:;
return UINT64_C(0x1803d52d6);
}
uint64_t b_1803d52d6(CPU*s){
/* 1803d52d6: mov qword ptr [rbx], 0 */
L_1803d52d6_0:;
L_1803d52d6_1:;
wr(s->u,0,8,((U)UINT64_C(0x0)));
L_1803d52d6_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803d52d6_3:;
/* 1803d52dd: xor eax, eax */
L_1803d52dd_0:;
L_1803d52dd_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d52dd_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d52dd_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803d52dd_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d52dd_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d52dd_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d52dd_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d52dd_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803d52dd_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803d52dd_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803d52dd_11:;
/* 1803d52df: add rsp, 0x20 */
L_1803d52df_0:;
L_1803d52df_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d52df_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803d52df_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803d52df_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d52df_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d52df_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d52df_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803d52df_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803d52df_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803d52df_10:;
/* 1803d52e3: pop rbx */
L_1803d52e3_0:;
L_1803d52e3_1:;
wr(s->u,18,8,((U)UINT64_C(0x0)));
L_1803d52e3_2:;
wr(s->u,18,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d52e3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d52e3_4:;
wr(s->r,24,8,rd(s->u,18,8));
L_1803d52e3_5:;
/* 1803d52e4: ret  */
L_1803d52e4_0:;
L_1803d52e4_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d52e4_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d52e4_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d52e4_4:;
return UINT64_C(0x1803d52e5);
}
uint64_t b_1803d52f0(CPU*s){
/* 1803d52f0: mov qword ptr [rsp + 8], rcx */
L_1803d52f0_0:;
L_1803d52f0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803d52f0_2:;
wr(s->u,12,8,rd(s->r,8,8));
L_1803d52f0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803d52f0_4:;
/* 1803d52f5: push rbx */
L_1803d52f5_0:;
L_1803d52f5_1:;
wr(s->u,24,8,rd(s->r,24,8));
L_1803d52f5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d52f5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,24,8));
L_1803d52f5_4:;
/* 1803d52f6: sub rsp, 0x40 */
L_1803d52f6_0:;
L_1803d52f6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x40))));
L_1803d52f6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,1));
L_1803d52f6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x40))));
L_1803d52f6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d52f6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d52f6_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d52f6_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803d52f6_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803d52f6_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803d52f6_10:;
/* 1803d52fa: mov qword ptr [rsp + 0x30], 0xfffffffffffffffe */
L_1803d52fa_0:;
L_1803d52fa_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803d52fa_2:;
wr(s->u,12,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803d52fa_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803d52fa_4:;
/* 1803d5303: mov rbx, rcx */
L_1803d5303_0:;
L_1803d5303_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803d5303_2:;
/* 1803d5306: lea rax, [rip + 0x436cab] */
L_1803d5306_0:;
L_1803d5306_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080bfb8)));
L_1803d5306_2:;
/* 1803d530d: mov qword ptr [rcx], rax */
L_1803d530d_0:;
L_1803d530d_1:;
wr(s->u,12,8,rd(s->r,0,8));
L_1803d530d_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,12,8));
L_1803d530d_3:;
/* 1803d5310: mov eax, dword ptr [rsp + 0x70] */
L_1803d5310_0:;
L_1803d5310_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803d5310_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5310_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803d5310_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5310_5:;
/* 1803d5314: add eax, -2 */
L_1803d5314_0:;
L_1803d5314_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0xfffffffe)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803d5314_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xfffffffe)),4,0));
L_1803d5314_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0xfffffffe))));
L_1803d5314_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5314_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5314_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5314_7:;
wr(s->u,32,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5314_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803d5314_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803d5314_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803d5314_11:;
/* 1803d5317: add rcx, 8 */
L_1803d5317_0:;
L_1803d5317_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803d5317_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,0));
L_1803d5317_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d5317_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5317_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803d5317_6:;
wr(s->u,32,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803d5317_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803d5317_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803d5317_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803d5317_10:;
/* 1803d531b: mov dword ptr [rsp + 0x20], eax */
L_1803d531b_0:;
L_1803d531b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803d531b_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803d531b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d531b_4:;
/* 1803d531f: call 0x1803d57d0 */
L_1803d531f_0:;
L_1803d531f_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d531f_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5324)));
L_1803d531f_3:;
return (uint64_t)UINT64_C(0x1803d57d0);
L_1803d531f_4:;
return UINT64_C(0x1803d5324);
}
uint64_t b_1803d5324(CPU*s){
/* 1803d5324: nop  */
L_1803d5324_0:;
L_1803d5324_1:;
/* 1803d5325: mov rax, rbx */
L_1803d5325_0:;
L_1803d5325_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803d5325_2:;
/* 1803d5328: add rsp, 0x40 */
L_1803d5328_0:;
L_1803d5328_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5328_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803d5328_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803d5328_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5328_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5328_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5328_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5328_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5328_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5328_10:;
/* 1803d532c: pop rbx */
L_1803d532c_0:;
L_1803d532c_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803d532c_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d532c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d532c_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803d532c_5:;
/* 1803d532d: ret  */
L_1803d532d_0:;
L_1803d532d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d532d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d532d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d532d_4:;
return UINT64_C(0x1803d532e);
}
uint64_t b_1803d5370(CPU*s){
/* 1803d5370: mov rcx, qword ptr [rcx + 8] */
L_1803d5370_0:;
L_1803d5370_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d5370_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5370_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803d5370_4:;
/* 1803d5374: mov rax, qword ptr [rcx] */
L_1803d5374_0:;
L_1803d5374_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d5374_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803d5374_3:;
/* 1803d5377: jmp qword ptr [rax + 8] */
L_1803d5377_0:;
L_1803d5377_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803d5377_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5377_3:;
return (uint64_t)rd(s->u,8,8);
L_1803d5377_4:;
return UINT64_C(0x1803d537b);
}
uint64_t b_1803d5380(CPU*s){
/* 1803d5380: mov rcx, qword ptr [rcx + 8] */
L_1803d5380_0:;
L_1803d5380_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d5380_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5380_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803d5380_4:;
/* 1803d5384: mov rax, qword ptr [rcx] */
L_1803d5384_0:;
L_1803d5384_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d5384_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803d5384_3:;
/* 1803d5387: jmp qword ptr [rax + 0x18] */
L_1803d5387_0:;
L_1803d5387_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803d5387_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5387_3:;
return (uint64_t)rd(s->u,8,8);
L_1803d5387_4:;
return UINT64_C(0x1803d538b);
}
uint64_t b_1803d5390(CPU*s){
/* 1803d5390: mov rcx, qword ptr [rcx + 8] */
L_1803d5390_0:;
L_1803d5390_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d5390_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5390_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803d5390_4:;
/* 1803d5394: mov rax, qword ptr [rcx] */
L_1803d5394_0:;
L_1803d5394_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d5394_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803d5394_3:;
/* 1803d5397: jmp qword ptr [rax + 0x20] */
L_1803d5397_0:;
L_1803d5397_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803d5397_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5397_3:;
return (uint64_t)rd(s->u,8,8);
L_1803d5397_4:;
return UINT64_C(0x1803d539b);
}
uint64_t b_1803d53a0(CPU*s){
/* 1803d53a0: mov rcx, qword ptr [rcx + 8] */
L_1803d53a0_0:;
L_1803d53a0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d53a0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d53a0_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803d53a0_4:;
/* 1803d53a4: mov rax, qword ptr [rcx] */
L_1803d53a4_0:;
L_1803d53a4_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d53a4_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803d53a4_3:;
/* 1803d53a7: jmp qword ptr [rax + 0x10] */
L_1803d53a7_0:;
L_1803d53a7_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803d53a7_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d53a7_3:;
return (uint64_t)rd(s->u,8,8);
L_1803d53a7_4:;
return UINT64_C(0x1803d53ab);
}
uint64_t b_1803d53b0(CPU*s){
/* 1803d53b0: mov rcx, qword ptr [rcx + 8] */
L_1803d53b0_0:;
L_1803d53b0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d53b0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d53b0_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803d53b0_4:;
/* 1803d53b4: mov rax, qword ptr [rcx] */
L_1803d53b4_0:;
L_1803d53b4_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d53b4_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803d53b4_3:;
/* 1803d53b7: jmp qword ptr [rax + 0x28] */
L_1803d53b7_0:;
L_1803d53b7_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x28))));
L_1803d53b7_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d53b7_3:;
return (uint64_t)rd(s->u,8,8);
L_1803d53b7_4:;
return UINT64_C(0x1803d53bb);
}
uint64_t b_1803d53c0(CPU*s){
/* 1803d53c0: mov rcx, qword ptr [rcx + 8] */
L_1803d53c0_0:;
L_1803d53c0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d53c0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d53c0_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803d53c0_4:;
/* 1803d53c4: mov rax, qword ptr [rcx] */
L_1803d53c4_0:;
L_1803d53c4_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d53c4_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803d53c4_3:;
/* 1803d53c7: jmp qword ptr [rax + 0x30] */
L_1803d53c7_0:;
L_1803d53c7_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x30))));
L_1803d53c7_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d53c7_3:;
return (uint64_t)rd(s->u,8,8);
L_1803d53c7_4:;
return UINT64_C(0x1803d53cb);
}
uint64_t b_1803d53d0(CPU*s){
/* 1803d53d0: mov rcx, qword ptr [rcx + 8] */
L_1803d53d0_0:;
L_1803d53d0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d53d0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d53d0_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803d53d0_4:;
/* 1803d53d4: mov rax, qword ptr [rcx] */
L_1803d53d4_0:;
L_1803d53d4_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d53d4_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803d53d4_3:;
/* 1803d53d7: jmp qword ptr [rax + 0x40] */
L_1803d53d7_0:;
L_1803d53d7_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x40))));
L_1803d53d7_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d53d7_3:;
return (uint64_t)rd(s->u,8,8);
L_1803d53d7_4:;
return UINT64_C(0x1803d53db);
}
uint64_t b_1803d53e0(CPU*s){
/* 1803d53e0: mov rcx, qword ptr [rcx + 8] */
L_1803d53e0_0:;
L_1803d53e0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d53e0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d53e0_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803d53e0_4:;
/* 1803d53e4: mov rax, qword ptr [rcx] */
L_1803d53e4_0:;
L_1803d53e4_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d53e4_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803d53e4_3:;
/* 1803d53e7: jmp qword ptr [rax + 0x38] */
L_1803d53e7_0:;
L_1803d53e7_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x38))));
L_1803d53e7_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d53e7_3:;
return (uint64_t)rd(s->u,8,8);
L_1803d53e7_4:;
return UINT64_C(0x1803d53eb);
}
uint64_t b_1803d53f0(CPU*s){
/* 1803d53f0: mov rcx, qword ptr [rcx + 8] */
L_1803d53f0_0:;
L_1803d53f0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d53f0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d53f0_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803d53f0_4:;
/* 1803d53f4: mov rax, qword ptr [rcx] */
L_1803d53f4_0:;
L_1803d53f4_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d53f4_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803d53f4_3:;
/* 1803d53f7: jmp qword ptr [rax + 0x48] */
L_1803d53f7_0:;
L_1803d53f7_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803d53f7_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d53f7_3:;
return (uint64_t)rd(s->u,8,8);
L_1803d53f7_4:;
return UINT64_C(0x1803d53fb);
}
uint64_t b_1803d5400(CPU*s){
/* 1803d5400: mov rcx, qword ptr [rcx + 8] */
L_1803d5400_0:;
L_1803d5400_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d5400_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5400_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803d5400_4:;
/* 1803d5404: mov rax, qword ptr [rcx] */
L_1803d5404_0:;
L_1803d5404_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d5404_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803d5404_3:;
/* 1803d5407: jmp qword ptr [rax + 0x50] */
L_1803d5407_0:;
L_1803d5407_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x50))));
L_1803d5407_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5407_3:;
return (uint64_t)rd(s->u,8,8);
L_1803d5407_4:;
return UINT64_C(0x1803d540b);
}
uint64_t b_1803d5410(CPU*s){
/* 1803d5410: xor eax, eax */
L_1803d5410_0:;
L_1803d5410_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5410_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5410_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803d5410_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5410_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5410_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5410_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5410_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803d5410_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803d5410_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803d5410_11:;
/* 1803d5412: ret  */
L_1803d5412_0:;
L_1803d5412_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5412_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5412_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5412_4:;
return UINT64_C(0x1803d5413);
}
uint64_t b_1803d5420(CPU*s){
/* 1803d5420: xor eax, eax */
L_1803d5420_0:;
L_1803d5420_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5420_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5420_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803d5420_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5420_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5420_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5420_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5420_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803d5420_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803d5420_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803d5420_11:;
/* 1803d5422: ret  */
L_1803d5422_0:;
L_1803d5422_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5422_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5422_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5422_4:;
return UINT64_C(0x1803d5423);
}
uint64_t b_1803d5430(CPU*s){
/* 1803d5430: sub rsp, 0x28 */
L_1803d5430_0:;
L_1803d5430_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803d5430_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803d5430_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803d5430_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5430_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5430_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5430_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d5430_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5430_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5430_10:;
/* 1803d5434: mov rcx, qword ptr [rcx + 8] */
L_1803d5434_0:;
L_1803d5434_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d5434_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5434_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803d5434_4:;
/* 1803d5438: mov rax, qword ptr [rcx] */
L_1803d5438_0:;
L_1803d5438_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d5438_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803d5438_3:;
/* 1803d543b: call qword ptr [rax + 0x60] */
L_1803d543b_0:;
L_1803d543b_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x60))));
L_1803d543b_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d543b_3:;
wr(s->u,26,8,rd(s->u,8,8));
L_1803d543b_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d543b_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d543e)));
L_1803d543b_6:;
return (uint64_t)rd(s->u,26,8);
L_1803d543b_7:;
return UINT64_C(0x1803d543e);
}
uint64_t b_1803d543e(CPU*s){
/* 1803d543e: movd xmm0, eax */
L_1803d543e_0:;
L_1803d543e_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803d543e_2:;
/* 1803d5442: cvtdq2pd xmm0, xmm0 */
L_1803d5442_0:;
L_1803d5442_1:;
wr(s->u,10,8,rd(s->r,4608,8));
L_1803d5442_2:;
wr(s->r,4608,8,fb((double)sx(rd(s->u,10,4),4),8));
L_1803d5442_3:;
wr(s->r,4616,8,fb((double)sx(rd(s->u,14,4),4),8));
L_1803d5442_4:;
/* 1803d5446: add rsp, 0x28 */
L_1803d5446_0:;
L_1803d5446_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5446_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803d5446_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803d5446_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5446_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5446_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5446_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5446_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5446_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5446_10:;
/* 1803d544a: ret  */
L_1803d544a_0:;
L_1803d544a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d544a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d544a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d544a_4:;
return UINT64_C(0x1803d544b);
}
uint64_t b_1803d5450(CPU*s){
/* 1803d5450: mov qword ptr [rsp + 8], rcx */
L_1803d5450_0:;
L_1803d5450_1:;
wr(s->u,8,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803d5450_2:;
wr(s->u,16,8,rd(s->r,8,8));
L_1803d5450_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803d5450_4:;
/* 1803d5455: push rdi */
L_1803d5455_0:;
L_1803d5455_1:;
wr(s->u,32,8,rd(s->r,56,8));
L_1803d5455_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5455_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,32,8));
L_1803d5455_4:;
/* 1803d5456: sub rsp, 0x30 */
L_1803d5456_0:;
L_1803d5456_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803d5456_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803d5456_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803d5456_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5456_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5456_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5456_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803d5456_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803d5456_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803d5456_10:;
/* 1803d545a: mov qword ptr [rsp + 0x20], 0xfffffffffffffffe */
L_1803d545a_0:;
L_1803d545a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803d545a_2:;
wr(s->u,16,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803d545a_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803d545a_4:;
/* 1803d5463: mov qword ptr [rsp + 0x48], rbx */
L_1803d5463_0:;
L_1803d5463_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803d5463_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803d5463_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803d5463_4:;
/* 1803d5468: mov ebx, edx */
L_1803d5468_0:;
L_1803d5468_1:;
wr(s->r,24,4,rd(s->r,16,4));
L_1803d5468_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803d5468_3:;
/* 1803d546a: mov rdi, rcx */
L_1803d546a_0:;
L_1803d546a_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803d546a_2:;
/* 1803d546d: lea rax, [rip + 0x436b44] */
L_1803d546d_0:;
L_1803d546d_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080bfb8)));
L_1803d546d_2:;
/* 1803d5474: mov qword ptr [rcx], rax */
L_1803d5474_0:;
L_1803d5474_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803d5474_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1803d5474_3:;
/* 1803d5477: mov rcx, qword ptr [rcx + 8] */
L_1803d5477_0:;
L_1803d5477_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d5477_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5477_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803d5477_4:;
/* 1803d547b: call 0x1803d5860 */
L_1803d547b_0:;
L_1803d547b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d547b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5480)));
L_1803d547b_3:;
return (uint64_t)UINT64_C(0x1803d5860);
L_1803d547b_4:;
return UINT64_C(0x1803d5480);
}
uint64_t b_1803d5480(CPU*s){
/* 1803d5480: nop  */
L_1803d5480_0:;
L_1803d5480_1:;
/* 1803d5481: lea rax, [rip + 0x436a90] */
L_1803d5481_0:;
L_1803d5481_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080bf18)));
L_1803d5481_2:;
/* 1803d5488: mov qword ptr [rdi], rax */
L_1803d5488_0:;
L_1803d5488_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803d5488_2:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,0,8));
L_1803d5488_3:;
/* 1803d548b: test bl, 1 */
L_1803d548b_0:;
L_1803d548b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d548b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d548b_3:;
wr(s->u,11,1,(rd(s->r,24,1)&((U)UINT64_C(0x1))));
L_1803d548b_4:;
wr(s->r,519,1,(sx(rd(s->u,11,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803d548b_5:;
wr(s->r,518,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803d548b_6:;
wr(s->u,8,1,(rd(s->u,11,1)&((U)UINT64_C(0xff))));
L_1803d548b_7:;
wr(s->u,9,1,pop(rd(s->u,8,1),1));
L_1803d548b_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803d548b_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803d548b_10:;
/* 1803d548e: je 0x1803d549d */
L_1803d548e_0:;
L_1803d548e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d549d);}
L_1803d548e_2:;
return UINT64_C(0x1803d5490);
}
uint64_t b_1803d5490(CPU*s){
/* 1803d5490: mov rcx, rdi */
L_1803d5490_0:;
L_1803d5490_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_1803d5490_2:;
/* 1803d5493: call 0x180003160 */
L_1803d5493_0:;
L_1803d5493_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5493_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5498)));
L_1803d5493_3:;
return (uint64_t)UINT64_C(0x180003160);
L_1803d5493_4:;
return UINT64_C(0x1803d5498);
}
uint64_t b_1803d5498(CPU*s){
/* 1803d5498: mov rax, rdi */
L_1803d5498_0:;
L_1803d5498_1:;
wr(s->r,0,8,rd(s->r,56,8));
L_1803d5498_2:;
/* 1803d549b: jmp 0x1803d54a0 */
L_1803d549b_0:;
L_1803d549b_1:;
return UINT64_C(0x1803d54a0);
L_1803d549b_2:;
return UINT64_C(0x1803d549d);
}
uint64_t b_1803d549d(CPU*s){
/* 1803d549d: mov rax, rdi */
L_1803d549d_0:;
L_1803d549d_1:;
wr(s->r,0,8,rd(s->r,56,8));
L_1803d549d_2:;
/* 1803d54a0: mov rbx, qword ptr [rsp + 0x48] */
L_1803d54a0_0:;
L_1803d54a0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803d54a0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d54a0_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803d54a0_4:;
/* 1803d54a5: add rsp, 0x30 */
L_1803d54a5_0:;
L_1803d54a5_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d54a5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803d54a5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803d54a5_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d54a5_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d54a5_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d54a5_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d54a5_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d54a5_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d54a5_10:;
/* 1803d54a9: pop rdi */
L_1803d54a9_0:;
L_1803d54a9_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d54a9_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d54a9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d54a9_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803d54a9_5:;
/* 1803d54aa: ret  */
L_1803d54aa_0:;
L_1803d54aa_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d54aa_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d54aa_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d54aa_4:;
return UINT64_C(0x1803d54ab);
}
uint64_t b_1803d54a0(CPU*s){
/* 1803d54a0: mov rbx, qword ptr [rsp + 0x48] */
L_1803d54a0_0:;
L_1803d54a0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803d54a0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d54a0_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803d54a0_4:;
/* 1803d54a5: add rsp, 0x30 */
L_1803d54a5_0:;
L_1803d54a5_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d54a5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803d54a5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803d54a5_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d54a5_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d54a5_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d54a5_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d54a5_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d54a5_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d54a5_10:;
/* 1803d54a9: pop rdi */
L_1803d54a9_0:;
L_1803d54a9_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d54a9_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d54a9_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d54a9_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803d54a9_5:;
/* 1803d54aa: ret  */
L_1803d54aa_0:;
L_1803d54aa_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d54aa_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d54aa_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d54aa_4:;
return UINT64_C(0x1803d54ab);
}
uint64_t b_1803d54b0(CPU*s){
/* 1803d54b0: push rsi */
L_1803d54b0_0:;
L_1803d54b0_1:;
wr(s->u,42,8,rd(s->r,48,8));
L_1803d54b0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d54b0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,42,8));
L_1803d54b0_4:;
/* 1803d54b2: push rdi */
L_1803d54b2_0:;
L_1803d54b2_1:;
wr(s->u,42,8,rd(s->r,56,8));
L_1803d54b2_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d54b2_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,42,8));
L_1803d54b2_4:;
/* 1803d54b3: push r12 */
L_1803d54b3_0:;
L_1803d54b3_1:;
wr(s->u,42,8,rd(s->r,160,8));
L_1803d54b3_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d54b3_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,42,8));
L_1803d54b3_4:;
/* 1803d54b5: sub rsp, 0x50 */
L_1803d54b5_0:;
L_1803d54b5_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x50))));
L_1803d54b5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,1));
L_1803d54b5_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x50))));
L_1803d54b5_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d54b5_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d54b5_6:;
wr(s->u,50,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d54b5_7:;
wr(s->u,58,1,pop(rd(s->u,50,8),8));
L_1803d54b5_8:;
wr(s->u,59,1,(rd(s->u,58,1)&((U)UINT64_C(0x1))));
L_1803d54b5_9:;
wr(s->r,514,1,(rd(s->u,59,1)==((U)UINT64_C(0x0))));
L_1803d54b5_10:;
/* 1803d54b9: mov qword ptr [rsp + 0x30], 0xfffffffffffffffe */
L_1803d54b9_0:;
L_1803d54b9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803d54b9_2:;
wr(s->u,16,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803d54b9_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803d54b9_4:;
/* 1803d54c2: mov qword ptr [rsp + 0x78], rbx */
L_1803d54c2_0:;
L_1803d54c2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803d54c2_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803d54c2_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803d54c2_4:;
/* 1803d54c7: mov qword ptr [rsp + 0x80], rbp */
L_1803d54c7_0:;
L_1803d54c7_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803d54c7_2:;
wr(s->u,16,8,rd(s->r,40,8));
L_1803d54c7_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803d54c7_4:;
/* 1803d54cf: movaps xmmword ptr [rsp + 0x40], xmm6 */
L_1803d54cf_0:;
L_1803d54cf_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803d54cf_2:;
wr(s->u,24,16,rd(s->r,4992,16));
L_1803d54cf_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,24,16));
L_1803d54cf_4:;
/* 1803d54d4: movaps xmm6, xmm3 */
L_1803d54d4_0:;
L_1803d54d4_1:;
wr(s->r,4992,4,rd(s->r,4800,4));
L_1803d54d4_2:;
wr(s->r,4996,4,rd(s->r,4804,4));
L_1803d54d4_3:;
wr(s->r,5000,4,rd(s->r,4808,4));
L_1803d54d4_4:;
wr(s->r,5004,4,rd(s->r,4812,4));
L_1803d54d4_5:;
/* 1803d54d7: mov ebp, r8d */
L_1803d54d7_0:;
L_1803d54d7_1:;
wr(s->r,40,4,rd(s->r,128,4));
L_1803d54d7_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803d54d7_3:;
/* 1803d54da: mov r12d, edx */
L_1803d54da_0:;
L_1803d54da_1:;
wr(s->r,160,4,rd(s->r,16,4));
L_1803d54da_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803d54da_3:;
/* 1803d54dd: mov rsi, rcx */
L_1803d54dd_0:;
L_1803d54dd_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803d54dd_2:;
/* 1803d54e0: xor ebx, ebx */
L_1803d54e0_0:;
L_1803d54e0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d54e0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d54e0_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_1803d54e0_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803d54e0_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d54e0_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803d54e0_7:;
wr(s->u,50,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803d54e0_8:;
wr(s->u,58,1,pop(rd(s->u,50,4),4));
L_1803d54e0_9:;
wr(s->u,59,1,(rd(s->u,58,1)&((U)UINT64_C(0x1))));
L_1803d54e0_10:;
wr(s->r,514,1,(rd(s->u,59,1)==((U)UINT64_C(0x0))));
L_1803d54e0_11:;
/* 1803d54e2: mov qword ptr [rcx], rbx */
L_1803d54e2_0:;
L_1803d54e2_1:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803d54e2_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1803d54e2_3:;
/* 1803d54e5: cmp edx, 0x400 */
L_1803d54e5_0:;
L_1803d54e5_1:;
wr(s->u,60,4,rd(s->r,16,4));
L_1803d54e5_2:;
wr(s->r,512,1,(rd(s->u,60,4)<((U)UINT64_C(0x400))));
L_1803d54e5_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,60,4),((U)UINT64_C(0x400)),4,1));
L_1803d54e5_4:;
wr(s->u,64,4,(rd(s->u,60,4)-((U)UINT64_C(0x400))));
L_1803d54e5_5:;
wr(s->r,519,1,(sx(rd(s->u,64,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d54e5_6:;
wr(s->r,518,1,(rd(s->u,64,4)==((U)UINT64_C(0x0))));
L_1803d54e5_7:;
wr(s->u,50,4,(rd(s->u,64,4)&((U)UINT64_C(0xff))));
L_1803d54e5_8:;
wr(s->u,58,1,pop(rd(s->u,50,4),4));
L_1803d54e5_9:;
wr(s->u,59,1,(rd(s->u,58,1)&((U)UINT64_C(0x1))));
L_1803d54e5_10:;
wr(s->r,514,1,(rd(s->u,59,1)==((U)UINT64_C(0x0))));
L_1803d54e5_11:;
/* 1803d54eb: jle 0x1803d54f7 */
L_1803d54eb_0:;
L_1803d54eb_1:;
wr(s->u,40,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d54eb_2:;
wr(s->u,41,1,((rd(s->r,518,1)!=0)||(rd(s->u,40,1)!=0)));
L_1803d54eb_3:;
if(rd(s->u,41,1)){return UINT64_C(0x1803d54f7);}
L_1803d54eb_4:;
return UINT64_C(0x1803d54ed);
}
uint64_t b_1803d54ed(CPU*s){
/* 1803d54ed: mov eax, 0x4c4b43 */
L_1803d54ed_0:;
L_1803d54ed_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803d54ed_2:;
/* 1803d54f2: jmp 0x1803d5615 */
L_1803d54f2_0:;
L_1803d54f2_1:;
return UINT64_C(0x1803d5615);
L_1803d54f2_2:;
return UINT64_C(0x1803d54f7);
}
uint64_t b_1803d54f7(CPU*s){
/* 1803d54f7: comiss xmm6, dword ptr [rip + 0x436ba6] */
L_1803d54f7_0:;
L_1803d54f7_1:;
wr(s->u,0,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803d54f7_2:;
wr(s->u,1,1,isnan(fv(mr(UINT64_C(0x18080c0a4),4),4)));
L_1803d54f7_3:;
wr(s->r,514,1,((rd(s->u,0,1)!=0)||(rd(s->u,1,1)!=0)));
L_1803d54f7_4:;
wr(s->u,2,1,(fv(rd(s->r,4992,4),4)==fv(mr(UINT64_C(0x18080c0a4),4),4)));
L_1803d54f7_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,2,1)));
L_1803d54f7_6:;
wr(s->u,3,1,(fv(rd(s->r,4992,4),4)<fv(mr(UINT64_C(0x18080c0a4),4),4)));
L_1803d54f7_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,3,1)));
L_1803d54f7_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d54f7_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803d54f7_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803d54f7_11:;
/* 1803d54fe: jb 0x1803d5610 */
L_1803d54fe_0:;
L_1803d54fe_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803d5610);}
L_1803d54fe_2:;
return UINT64_C(0x1803d5504);
}
uint64_t b_1803d5504(CPU*s){
/* 1803d5504: comiss xmm6, dword ptr [rip + 0x436b95] */
L_1803d5504_0:;
L_1803d5504_1:;
wr(s->u,2,1,isnan(fv(rd(s->r,4992,4),4)));
L_1803d5504_2:;
wr(s->u,3,1,isnan(fv(mr(UINT64_C(0x18080c0a0),4),4)));
L_1803d5504_3:;
wr(s->r,514,1,((rd(s->u,2,1)!=0)||(rd(s->u,3,1)!=0)));
L_1803d5504_4:;
wr(s->u,4,1,(fv(rd(s->r,4992,4),4)==fv(mr(UINT64_C(0x18080c0a0),4),4)));
L_1803d5504_5:;
wr(s->r,518,1,(rd(s->r,514,1)|rd(s->u,4,1)));
L_1803d5504_6:;
wr(s->u,5,1,(fv(rd(s->r,4992,4),4)<fv(mr(UINT64_C(0x18080c0a0),4),4)));
L_1803d5504_7:;
wr(s->r,512,1,(rd(s->r,514,1)|rd(s->u,5,1)));
L_1803d5504_8:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5504_9:;
wr(s->r,516,1,((U)UINT64_C(0x0)));
L_1803d5504_10:;
wr(s->r,519,1,((U)UINT64_C(0x0)));
L_1803d5504_11:;
/* 1803d550b: ja 0x1803d5610 */
L_1803d550b_0:;
L_1803d550b_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803d550b_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803d550b_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803d5610);}
L_1803d550b_4:;
return UINT64_C(0x1803d5511);
}
uint64_t b_1803d5511(CPU*s){
/* 1803d5511: lea eax, [r8 - 1] */
L_1803d5511_0:;
L_1803d5511_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803d5511_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803d5511_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5511_4:;
/* 1803d5515: cmp eax, 0x2f */
L_1803d5515_0:;
L_1803d5515_1:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803d5515_2:;
wr(s->r,512,1,(rd(s->u,16,4)<((U)UINT64_C(0x2f))));
L_1803d5515_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,4),((U)UINT64_C(0x2f)),4,1));
L_1803d5515_4:;
wr(s->u,20,4,(rd(s->u,16,4)-((U)UINT64_C(0x2f))));
L_1803d5515_5:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5515_6:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803d5515_7:;
wr(s->u,10,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803d5515_8:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_1803d5515_9:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1803d5515_10:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1803d5515_11:;
/* 1803d5518: ja 0x1803d5609 */
L_1803d5518_0:;
L_1803d5518_1:;
wr(s->u,8,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803d5518_2:;
wr(s->u,9,1,(!rd(s->u,8,1)));
L_1803d5518_3:;
if(rd(s->u,9,1)){return UINT64_C(0x1803d5609);}
L_1803d5518_4:;
return UINT64_C(0x1803d551e);
}
uint64_t b_1803d551e(CPU*s){
/* 1803d551e: mov edi, dword ptr [rsp + 0x90] */
L_1803d551e_0:;
L_1803d551e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x90))+rd(s->r,32,8)));
L_1803d551e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d551e_3:;
wr(s->r,56,4,rd(s->u,8,4));
L_1803d551e_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803d551e_5:;
/* 1803d5525: cmp edi, 1 */
L_1803d5525_0:;
L_1803d5525_1:;
wr(s->u,18,4,rd(s->r,56,4));
L_1803d5525_2:;
wr(s->r,512,1,(rd(s->u,18,4)<((U)UINT64_C(0x1))));
L_1803d5525_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),((U)UINT64_C(0x1)),4,1));
L_1803d5525_4:;
wr(s->u,22,4,(rd(s->u,18,4)-((U)UINT64_C(0x1))));
L_1803d5525_5:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5525_6:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803d5525_7:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803d5525_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803d5525_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803d5525_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803d5525_11:;
/* 1803d5528: je 0x1803d55ba */
L_1803d5528_0:;
L_1803d5528_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d55ba);}
L_1803d5528_2:;
return UINT64_C(0x1803d552e);
}
uint64_t b_1803d552e(CPU*s){
/* 1803d552e: test edi, edi */
L_1803d552e_0:;
L_1803d552e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d552e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d552e_3:;
wr(s->u,6,4,(rd(s->r,56,4)&rd(s->r,56,4)));
L_1803d552e_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d552e_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803d552e_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803d552e_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803d552e_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803d552e_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803d552e_10:;
/* 1803d5530: je 0x1803d55ba */
L_1803d5530_0:;
L_1803d5530_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d55ba);}
L_1803d5530_2:;
return UINT64_C(0x1803d5536);
}
uint64_t b_1803d5536(CPU*s){
/* 1803d5536: cmp edi, 2 */
L_1803d5536_0:;
L_1803d5536_1:;
wr(s->u,6,4,rd(s->r,56,4));
L_1803d5536_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x2))));
L_1803d5536_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x2)),4,1));
L_1803d5536_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x2))));
L_1803d5536_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5536_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803d5536_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803d5536_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803d5536_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803d5536_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803d5536_11:;
/* 1803d5539: je 0x1803d5587 */
L_1803d5539_0:;
L_1803d5539_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d5587);}
L_1803d5539_2:;
return UINT64_C(0x1803d553b);
}
uint64_t b_1803d553b(CPU*s){
/* 1803d553b: cmp edi, 3 */
L_1803d553b_0:;
L_1803d553b_1:;
wr(s->u,6,4,rd(s->r,56,4));
L_1803d553b_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x3))));
L_1803d553b_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x3)),4,1));
L_1803d553b_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x3))));
L_1803d553b_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d553b_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803d553b_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803d553b_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803d553b_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803d553b_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803d553b_11:;
/* 1803d553e: je 0x1803d5587 */
L_1803d553e_0:;
L_1803d553e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d5587);}
L_1803d553e_2:;
return UINT64_C(0x1803d5540);
}
uint64_t b_1803d5540(CPU*s){
/* 1803d5540: cmp edi, 5 */
L_1803d5540_0:;
L_1803d5540_1:;
wr(s->u,6,4,rd(s->r,56,4));
L_1803d5540_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x5))));
L_1803d5540_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x5)),4,1));
L_1803d5540_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x5))));
L_1803d5540_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5540_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803d5540_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803d5540_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803d5540_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803d5540_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803d5540_11:;
/* 1803d5543: je 0x1803d5554 */
L_1803d5543_0:;
L_1803d5543_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d5554);}
L_1803d5543_2:;
return UINT64_C(0x1803d5545);
}
uint64_t b_1803d5545(CPU*s){
/* 1803d5545: cmp edi, 4 */
L_1803d5545_0:;
L_1803d5545_1:;
wr(s->u,6,4,rd(s->r,56,4));
L_1803d5545_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0x4))));
L_1803d5545_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0x4)),4,1));
L_1803d5545_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0x4))));
L_1803d5545_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5545_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803d5545_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803d5545_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803d5545_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803d5545_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803d5545_11:;
/* 1803d5548: je 0x1803d5554 */
L_1803d5548_0:;
L_1803d5548_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d5554);}
L_1803d5548_2:;
return UINT64_C(0x1803d554a);
}
uint64_t b_1803d554a(CPU*s){
/* 1803d554a: mov eax, 0x4c4b43 */
L_1803d554a_0:;
L_1803d554a_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803d554a_2:;
/* 1803d554f: jmp 0x1803d5615 */
L_1803d554f_0:;
L_1803d554f_1:;
return UINT64_C(0x1803d5615);
L_1803d554f_2:;
return UINT64_C(0x1803d5554);
}
uint64_t b_1803d5554(CPU*s){
/* 1803d5554: mov ecx, 0x1c0 */
L_1803d5554_0:;
L_1803d5554_1:;
wr(s->r,8,8,((U)UINT64_C(0x1c0)));
L_1803d5554_2:;
/* 1803d5559: call 0x180003140 */
L_1803d5559_0:;
L_1803d5559_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5559_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d555e)));
L_1803d5559_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803d5559_4:;
return UINT64_C(0x1803d555e);
}
uint64_t b_1803d555e(CPU*s){
/* 1803d555e: mov qword ptr [rsp + 0x70], rax */
L_1803d555e_0:;
L_1803d555e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803d555e_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803d555e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d555e_4:;
/* 1803d5563: test rax, rax */
L_1803d5563_0:;
L_1803d5563_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5563_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5563_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803d5563_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5563_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803d5563_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803d5563_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d5563_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5563_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5563_10:;
/* 1803d5566: je 0x1803d557f */
L_1803d5566_0:;
L_1803d5566_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d557f);}
L_1803d5566_2:;
return UINT64_C(0x1803d5568);
}
uint64_t b_1803d5568(CPU*s){
/* 1803d5568: mov dword ptr [rsp + 0x20], edi */
L_1803d5568_0:;
L_1803d5568_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803d5568_2:;
wr(s->u,8,4,rd(s->r,56,4));
L_1803d5568_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5568_4:;
/* 1803d556c: movaps xmm3, xmm6 */
L_1803d556c_0:;
L_1803d556c_1:;
wr(s->r,4800,4,rd(s->r,4992,4));
L_1803d556c_2:;
wr(s->r,4804,4,rd(s->r,4996,4));
L_1803d556c_3:;
wr(s->r,4808,4,rd(s->r,5000,4));
L_1803d556c_4:;
wr(s->r,4812,4,rd(s->r,5004,4));
L_1803d556c_5:;
/* 1803d556f: mov r8d, ebp */
L_1803d556f_0:;
L_1803d556f_1:;
wr(s->r,128,4,rd(s->r,40,4));
L_1803d556f_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803d556f_3:;
/* 1803d5572: mov edx, r12d */
L_1803d5572_0:;
L_1803d5572_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803d5572_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803d5572_3:;
/* 1803d5575: mov rcx, rax */
L_1803d5575_0:;
L_1803d5575_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803d5575_2:;
/* 1803d5578: call 0x1803d65b0 */
L_1803d5578_0:;
L_1803d5578_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5578_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d557d)));
L_1803d5578_3:;
return (uint64_t)UINT64_C(0x1803d65b0);
L_1803d5578_4:;
return UINT64_C(0x1803d557d);
}
uint64_t b_1803d557d(CPU*s){
/* 1803d557d: jmp 0x1803d5582 */
L_1803d557d_0:;
L_1803d557d_1:;
return UINT64_C(0x1803d5582);
L_1803d557d_2:;
return UINT64_C(0x1803d557f);
}
uint64_t b_1803d557f(CPU*s){
/* 1803d557f: mov rax, rbx */
L_1803d557f_0:;
L_1803d557f_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803d557f_2:;
/* 1803d5582: mov qword ptr [rsi], rax */
L_1803d5582_0:;
L_1803d5582_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803d5582_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1803d5582_3:;
/* 1803d5585: jmp 0x1803d55f9 */
L_1803d5585_0:;
L_1803d5585_1:;
return UINT64_C(0x1803d55f9);
L_1803d5585_2:;
return UINT64_C(0x1803d5587);
}
uint64_t b_1803d5582(CPU*s){
/* 1803d5582: mov qword ptr [rsi], rax */
L_1803d5582_0:;
L_1803d5582_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803d5582_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1803d5582_3:;
/* 1803d5585: jmp 0x1803d55f9 */
L_1803d5585_0:;
L_1803d5585_1:;
return UINT64_C(0x1803d55f9);
L_1803d5585_2:;
return UINT64_C(0x1803d5587);
}
uint64_t b_1803d5587(CPU*s){
/* 1803d5587: mov ecx, 0x10 */
L_1803d5587_0:;
L_1803d5587_1:;
wr(s->r,8,8,((U)UINT64_C(0x10)));
L_1803d5587_2:;
/* 1803d558c: call 0x180003140 */
L_1803d558c_0:;
L_1803d558c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d558c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5591)));
L_1803d558c_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803d558c_4:;
return UINT64_C(0x1803d5591);
}
uint64_t b_1803d5591(CPU*s){
/* 1803d5591: mov qword ptr [rsp + 0x70], rax */
L_1803d5591_0:;
L_1803d5591_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803d5591_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803d5591_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d5591_4:;
/* 1803d5596: test rax, rax */
L_1803d5596_0:;
L_1803d5596_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5596_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5596_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803d5596_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5596_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803d5596_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803d5596_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d5596_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5596_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5596_10:;
/* 1803d5599: je 0x1803d55b2 */
L_1803d5599_0:;
L_1803d5599_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d55b2);}
L_1803d5599_2:;
return UINT64_C(0x1803d559b);
}
uint64_t b_1803d559b(CPU*s){
/* 1803d559b: mov dword ptr [rsp + 0x20], edi */
L_1803d559b_0:;
L_1803d559b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803d559b_2:;
wr(s->u,8,4,rd(s->r,56,4));
L_1803d559b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d559b_4:;
/* 1803d559f: movaps xmm3, xmm6 */
L_1803d559f_0:;
L_1803d559f_1:;
wr(s->r,4800,4,rd(s->r,4992,4));
L_1803d559f_2:;
wr(s->r,4804,4,rd(s->r,4996,4));
L_1803d559f_3:;
wr(s->r,4808,4,rd(s->r,5000,4));
L_1803d559f_4:;
wr(s->r,4812,4,rd(s->r,5004,4));
L_1803d559f_5:;
/* 1803d55a2: mov r8d, ebp */
L_1803d55a2_0:;
L_1803d55a2_1:;
wr(s->r,128,4,rd(s->r,40,4));
L_1803d55a2_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803d55a2_3:;
/* 1803d55a5: mov edx, r12d */
L_1803d55a5_0:;
L_1803d55a5_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803d55a5_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803d55a5_3:;
/* 1803d55a8: mov rcx, rax */
L_1803d55a8_0:;
L_1803d55a8_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803d55a8_2:;
/* 1803d55ab: call 0x1803d52f0 */
L_1803d55ab_0:;
L_1803d55ab_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d55ab_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d55b0)));
L_1803d55ab_3:;
return (uint64_t)UINT64_C(0x1803d52f0);
L_1803d55ab_4:;
return UINT64_C(0x1803d55b0);
}
uint64_t b_1803d55b0(CPU*s){
/* 1803d55b0: jmp 0x1803d55b5 */
L_1803d55b0_0:;
L_1803d55b0_1:;
return UINT64_C(0x1803d55b5);
L_1803d55b0_2:;
return UINT64_C(0x1803d55b2);
}
uint64_t b_1803d55b2(CPU*s){
/* 1803d55b2: mov rax, rbx */
L_1803d55b2_0:;
L_1803d55b2_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803d55b2_2:;
/* 1803d55b5: mov qword ptr [rsi], rax */
L_1803d55b5_0:;
L_1803d55b5_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803d55b5_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1803d55b5_3:;
/* 1803d55b8: jmp 0x1803d55f9 */
L_1803d55b8_0:;
L_1803d55b8_1:;
return UINT64_C(0x1803d55f9);
L_1803d55b8_2:;
return UINT64_C(0x1803d55ba);
}
uint64_t b_1803d55b5(CPU*s){
/* 1803d55b5: mov qword ptr [rsi], rax */
L_1803d55b5_0:;
L_1803d55b5_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803d55b5_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1803d55b5_3:;
/* 1803d55b8: jmp 0x1803d55f9 */
L_1803d55b8_0:;
L_1803d55b8_1:;
return UINT64_C(0x1803d55f9);
L_1803d55b8_2:;
return UINT64_C(0x1803d55ba);
}
uint64_t b_1803d55ba(CPU*s){
/* 1803d55ba: mov ecx, 0x6a38 */
L_1803d55ba_0:;
L_1803d55ba_1:;
wr(s->r,8,8,((U)UINT64_C(0x6a38)));
L_1803d55ba_2:;
/* 1803d55bf: call 0x180003140 */
L_1803d55bf_0:;
L_1803d55bf_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d55bf_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d55c4)));
L_1803d55bf_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803d55bf_4:;
return UINT64_C(0x1803d55c4);
}
uint64_t b_1803d55c4(CPU*s){
/* 1803d55c4: mov qword ptr [rsp + 0x70], rax */
L_1803d55c4_0:;
L_1803d55c4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803d55c4_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803d55c4_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d55c4_4:;
/* 1803d55c9: test rax, rax */
L_1803d55c9_0:;
L_1803d55c9_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d55c9_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d55c9_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803d55c9_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d55c9_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803d55c9_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803d55c9_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d55c9_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d55c9_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d55c9_10:;
/* 1803d55cc: je 0x1803d55e5 */
L_1803d55cc_0:;
L_1803d55cc_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d55e5);}
L_1803d55cc_2:;
return UINT64_C(0x1803d55ce);
}
uint64_t b_1803d55ce(CPU*s){
/* 1803d55ce: mov dword ptr [rsp + 0x20], edi */
L_1803d55ce_0:;
L_1803d55ce_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803d55ce_2:;
wr(s->u,8,4,rd(s->r,56,4));
L_1803d55ce_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d55ce_4:;
/* 1803d55d2: movaps xmm3, xmm6 */
L_1803d55d2_0:;
L_1803d55d2_1:;
wr(s->r,4800,4,rd(s->r,4992,4));
L_1803d55d2_2:;
wr(s->r,4804,4,rd(s->r,4996,4));
L_1803d55d2_3:;
wr(s->r,4808,4,rd(s->r,5000,4));
L_1803d55d2_4:;
wr(s->r,4812,4,rd(s->r,5004,4));
L_1803d55d2_5:;
/* 1803d55d5: mov r8d, ebp */
L_1803d55d5_0:;
L_1803d55d5_1:;
wr(s->r,128,4,rd(s->r,40,4));
L_1803d55d5_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803d55d5_3:;
/* 1803d55d8: mov edx, r12d */
L_1803d55d8_0:;
L_1803d55d8_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803d55d8_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803d55d8_3:;
/* 1803d55db: mov rcx, rax */
L_1803d55db_0:;
L_1803d55db_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803d55db_2:;
/* 1803d55de: call 0x1803d6070 */
L_1803d55de_0:;
L_1803d55de_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d55de_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d55e3)));
L_1803d55de_3:;
return (uint64_t)UINT64_C(0x1803d6070);
L_1803d55de_4:;
return UINT64_C(0x1803d55e3);
}
uint64_t b_1803d55e3(CPU*s){
/* 1803d55e3: jmp 0x1803d55e8 */
L_1803d55e3_0:;
L_1803d55e3_1:;
return UINT64_C(0x1803d55e8);
L_1803d55e3_2:;
return UINT64_C(0x1803d55e5);
}
uint64_t b_1803d55e5(CPU*s){
/* 1803d55e5: mov rax, rbx */
L_1803d55e5_0:;
L_1803d55e5_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803d55e5_2:;
/* 1803d55e8: test rax, rax */
L_1803d55e8_0:;
L_1803d55e8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d55e8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d55e8_3:;
wr(s->u,10,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803d55e8_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d55e8_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803d55e8_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803d55e8_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d55e8_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d55e8_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d55e8_10:;
/* 1803d55eb: je 0x1803d55f3 */
L_1803d55eb_0:;
L_1803d55eb_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d55f3);}
L_1803d55eb_2:;
return UINT64_C(0x1803d55ed);
}
uint64_t b_1803d55e8(CPU*s){
/* 1803d55e8: test rax, rax */
L_1803d55e8_0:;
L_1803d55e8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d55e8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d55e8_3:;
wr(s->u,10,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803d55e8_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d55e8_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803d55e8_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803d55e8_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d55e8_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d55e8_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d55e8_10:;
/* 1803d55eb: je 0x1803d55f3 */
L_1803d55eb_0:;
L_1803d55eb_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d55f3);}
L_1803d55eb_2:;
return UINT64_C(0x1803d55ed);
}
uint64_t b_1803d55ed(CPU*s){
/* 1803d55ed: add rax, 8 */
L_1803d55ed_0:;
L_1803d55ed_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803d55ed_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x8)),8,0));
L_1803d55ed_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803d55ed_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d55ed_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803d55ed_6:;
wr(s->u,0,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803d55ed_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d55ed_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d55ed_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d55ed_10:;
/* 1803d55f1: jmp 0x1803d55f6 */
L_1803d55f1_0:;
L_1803d55f1_1:;
return UINT64_C(0x1803d55f6);
L_1803d55f1_2:;
return UINT64_C(0x1803d55f3);
}
uint64_t b_1803d55f3(CPU*s){
/* 1803d55f3: mov rax, rbx */
L_1803d55f3_0:;
L_1803d55f3_1:;
wr(s->r,0,8,rd(s->r,24,8));
L_1803d55f3_2:;
/* 1803d55f6: mov qword ptr [rsi], rax */
L_1803d55f6_0:;
L_1803d55f6_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803d55f6_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1803d55f6_3:;
/* 1803d55f9: mov eax, 0xf4241 */
L_1803d55f9_0:;
L_1803d55f9_1:;
wr(s->r,0,8,((U)UINT64_C(0xf4241)));
L_1803d55f9_2:;
/* 1803d55fe: cmp qword ptr [rsi], 0 */
L_1803d55fe_0:;
L_1803d55fe_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803d55fe_2:;
wr(s->u,31,8,rd(s->u,8,8));
L_1803d55fe_3:;
wr(s->r,512,1,(rd(s->u,31,8)<((U)UINT64_C(0x0))));
L_1803d55fe_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,31,8),((U)UINT64_C(0x0)),8,1));
L_1803d55fe_5:;
wr(s->u,39,8,(rd(s->u,31,8)-((U)UINT64_C(0x0))));
L_1803d55fe_6:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d55fe_7:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803d55fe_8:;
wr(s->u,16,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803d55fe_9:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d55fe_10:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d55fe_11:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d55fe_12:;
/* 1803d5602: cmove ebx, eax */
L_1803d5602_0:;
L_1803d5602_1:;
wr(s->u,26,4,rd(s->r,0,4));
L_1803d5602_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803d5602_3:;
wr(s->u,30,1,(!rd(s->r,518,1)));
L_1803d5602_4:;
if(rd(s->u,30,1)){goto L_1803d5605_0;}
L_1803d5602_5:;
wr(s->r,24,4,rd(s->u,26,4));
L_1803d5602_6:;
/* 1803d5605: mov eax, ebx */
L_1803d5605_0:;
L_1803d5605_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803d5605_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5605_3:;
/* 1803d5607: jmp 0x1803d5615 */
L_1803d5607_0:;
L_1803d5607_1:;
return UINT64_C(0x1803d5615);
L_1803d5607_2:;
return UINT64_C(0x1803d5609);
}
uint64_t b_1803d55f6(CPU*s){
/* 1803d55f6: mov qword ptr [rsi], rax */
L_1803d55f6_0:;
L_1803d55f6_1:;
wr(s->u,0,8,rd(s->r,0,8));
L_1803d55f6_2:;
mw((uint64_t)rd(s->r,48,8),8,rd(s->u,0,8));
L_1803d55f6_3:;
/* 1803d55f9: mov eax, 0xf4241 */
L_1803d55f9_0:;
L_1803d55f9_1:;
wr(s->r,0,8,((U)UINT64_C(0xf4241)));
L_1803d55f9_2:;
/* 1803d55fe: cmp qword ptr [rsi], 0 */
L_1803d55fe_0:;
L_1803d55fe_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803d55fe_2:;
wr(s->u,31,8,rd(s->u,8,8));
L_1803d55fe_3:;
wr(s->r,512,1,(rd(s->u,31,8)<((U)UINT64_C(0x0))));
L_1803d55fe_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,31,8),((U)UINT64_C(0x0)),8,1));
L_1803d55fe_5:;
wr(s->u,39,8,(rd(s->u,31,8)-((U)UINT64_C(0x0))));
L_1803d55fe_6:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d55fe_7:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803d55fe_8:;
wr(s->u,16,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803d55fe_9:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d55fe_10:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d55fe_11:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d55fe_12:;
/* 1803d5602: cmove ebx, eax */
L_1803d5602_0:;
L_1803d5602_1:;
wr(s->u,26,4,rd(s->r,0,4));
L_1803d5602_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803d5602_3:;
wr(s->u,30,1,(!rd(s->r,518,1)));
L_1803d5602_4:;
if(rd(s->u,30,1)){goto L_1803d5605_0;}
L_1803d5602_5:;
wr(s->r,24,4,rd(s->u,26,4));
L_1803d5602_6:;
/* 1803d5605: mov eax, ebx */
L_1803d5605_0:;
L_1803d5605_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803d5605_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5605_3:;
/* 1803d5607: jmp 0x1803d5615 */
L_1803d5607_0:;
L_1803d5607_1:;
return UINT64_C(0x1803d5615);
L_1803d5607_2:;
return UINT64_C(0x1803d5609);
}
uint64_t b_1803d55f9(CPU*s){
/* 1803d55f9: mov eax, 0xf4241 */
L_1803d55f9_0:;
L_1803d55f9_1:;
wr(s->r,0,8,((U)UINT64_C(0xf4241)));
L_1803d55f9_2:;
/* 1803d55fe: cmp qword ptr [rsi], 0 */
L_1803d55fe_0:;
L_1803d55fe_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803d55fe_2:;
wr(s->u,23,8,rd(s->u,0,8));
L_1803d55fe_3:;
wr(s->r,512,1,(rd(s->u,23,8)<((U)UINT64_C(0x0))));
L_1803d55fe_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,8),((U)UINT64_C(0x0)),8,1));
L_1803d55fe_5:;
wr(s->u,31,8,(rd(s->u,23,8)-((U)UINT64_C(0x0))));
L_1803d55fe_6:;
wr(s->r,519,1,(sx(rd(s->u,31,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d55fe_7:;
wr(s->r,518,1,(rd(s->u,31,8)==((U)UINT64_C(0x0))));
L_1803d55fe_8:;
wr(s->u,8,8,(rd(s->u,31,8)&((U)UINT64_C(0xff))));
L_1803d55fe_9:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803d55fe_10:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803d55fe_11:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803d55fe_12:;
/* 1803d5602: cmove ebx, eax */
L_1803d5602_0:;
L_1803d5602_1:;
wr(s->u,18,4,rd(s->r,0,4));
L_1803d5602_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803d5602_3:;
wr(s->u,22,1,(!rd(s->r,518,1)));
L_1803d5602_4:;
if(rd(s->u,22,1)){goto L_1803d5605_0;}
L_1803d5602_5:;
wr(s->r,24,4,rd(s->u,18,4));
L_1803d5602_6:;
/* 1803d5605: mov eax, ebx */
L_1803d5605_0:;
L_1803d5605_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803d5605_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5605_3:;
/* 1803d5607: jmp 0x1803d5615 */
L_1803d5607_0:;
L_1803d5607_1:;
return UINT64_C(0x1803d5615);
L_1803d5607_2:;
return UINT64_C(0x1803d5609);
}
uint64_t b_1803d5605(CPU*s){
/* 1803d5605: mov eax, ebx */
L_1803d5605_0:;
L_1803d5605_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803d5605_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5605_3:;
/* 1803d5607: jmp 0x1803d5615 */
L_1803d5607_0:;
L_1803d5607_1:;
return UINT64_C(0x1803d5615);
L_1803d5607_2:;
return UINT64_C(0x1803d5609);
}
uint64_t b_1803d5609(CPU*s){
/* 1803d5609: mov eax, 0x4c4b45 */
L_1803d5609_0:;
L_1803d5609_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b45)));
L_1803d5609_2:;
/* 1803d560e: jmp 0x1803d5615 */
L_1803d560e_0:;
L_1803d560e_1:;
return UINT64_C(0x1803d5615);
L_1803d560e_2:;
return UINT64_C(0x1803d5610);
}
uint64_t b_1803d5610(CPU*s){
/* 1803d5610: mov eax, 0x4c4b44 */
L_1803d5610_0:;
L_1803d5610_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b44)));
L_1803d5610_2:;
/* 1803d5615: mov rbx, qword ptr [rsp + 0x78] */
L_1803d5615_0:;
L_1803d5615_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803d5615_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5615_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803d5615_4:;
/* 1803d561a: mov rbp, qword ptr [rsp + 0x80] */
L_1803d561a_0:;
L_1803d561a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803d561a_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d561a_3:;
wr(s->r,40,8,rd(s->u,32,8));
L_1803d561a_4:;
/* 1803d5622: movaps xmm6, xmmword ptr [rsp + 0x40] */
L_1803d5622_0:;
L_1803d5622_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803d5622_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803d5622_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803d5622_4:;
wr(s->r,4992,4,rd(s->u,58,4));
L_1803d5622_5:;
wr(s->r,4996,4,rd(s->u,62,4));
L_1803d5622_6:;
wr(s->r,5000,4,rd(s->u,66,4));
L_1803d5622_7:;
wr(s->r,5004,4,rd(s->u,70,4));
L_1803d5622_8:;
/* 1803d5627: add rsp, 0x50 */
L_1803d5627_0:;
L_1803d5627_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5627_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803d5627_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803d5627_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5627_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5627_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5627_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803d5627_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803d5627_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803d5627_10:;
/* 1803d562b: pop r12 */
L_1803d562b_0:;
L_1803d562b_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803d562b_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d562b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d562b_4:;
wr(s->r,160,8,rd(s->u,50,8));
L_1803d562b_5:;
/* 1803d562d: pop rdi */
L_1803d562d_0:;
L_1803d562d_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803d562d_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d562d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d562d_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803d562d_5:;
/* 1803d562e: pop rsi */
L_1803d562e_0:;
L_1803d562e_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803d562e_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d562e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d562e_4:;
wr(s->r,48,8,rd(s->u,50,8));
L_1803d562e_5:;
/* 1803d562f: ret  */
L_1803d562f_0:;
L_1803d562f_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d562f_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d562f_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d562f_4:;
return UINT64_C(0x1803d5630);
}
uint64_t b_1803d5615(CPU*s){
/* 1803d5615: mov rbx, qword ptr [rsp + 0x78] */
L_1803d5615_0:;
L_1803d5615_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803d5615_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5615_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803d5615_4:;
/* 1803d561a: mov rbp, qword ptr [rsp + 0x80] */
L_1803d561a_0:;
L_1803d561a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803d561a_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d561a_3:;
wr(s->r,40,8,rd(s->u,32,8));
L_1803d561a_4:;
/* 1803d5622: movaps xmm6, xmmword ptr [rsp + 0x40] */
L_1803d5622_0:;
L_1803d5622_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803d5622_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803d5622_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803d5622_4:;
wr(s->r,4992,4,rd(s->u,58,4));
L_1803d5622_5:;
wr(s->r,4996,4,rd(s->u,62,4));
L_1803d5622_6:;
wr(s->r,5000,4,rd(s->u,66,4));
L_1803d5622_7:;
wr(s->r,5004,4,rd(s->u,70,4));
L_1803d5622_8:;
/* 1803d5627: add rsp, 0x50 */
L_1803d5627_0:;
L_1803d5627_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5627_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803d5627_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803d5627_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5627_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5627_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5627_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803d5627_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803d5627_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803d5627_10:;
/* 1803d562b: pop r12 */
L_1803d562b_0:;
L_1803d562b_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803d562b_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d562b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d562b_4:;
wr(s->r,160,8,rd(s->u,50,8));
L_1803d562b_5:;
/* 1803d562d: pop rdi */
L_1803d562d_0:;
L_1803d562d_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803d562d_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d562d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d562d_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803d562d_5:;
/* 1803d562e: pop rsi */
L_1803d562e_0:;
L_1803d562e_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803d562e_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d562e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d562e_4:;
wr(s->r,48,8,rd(s->u,50,8));
L_1803d562e_5:;
/* 1803d562f: ret  */
L_1803d562f_0:;
L_1803d562f_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d562f_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d562f_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d562f_4:;
return UINT64_C(0x1803d5630);
}
uint64_t b_1803d57d0(CPU*s){
/* 1803d57d0: push rdi */
L_1803d57d0_0:;
L_1803d57d0_1:;
wr(s->u,34,8,rd(s->r,56,8));
L_1803d57d0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d57d0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,34,8));
L_1803d57d0_4:;
/* 1803d57d2: sub rsp, 0x50 */
L_1803d57d2_0:;
L_1803d57d2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x50))));
L_1803d57d2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,1));
L_1803d57d2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x50))));
L_1803d57d2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d57d2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d57d2_6:;
wr(s->u,42,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d57d2_7:;
wr(s->u,50,1,pop(rd(s->u,42,8),8));
L_1803d57d2_8:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803d57d2_9:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803d57d2_10:;
/* 1803d57d6: mov qword ptr [rsp + 0x30], 0xfffffffffffffffe */
L_1803d57d6_0:;
L_1803d57d6_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803d57d6_2:;
wr(s->u,8,8,((U)UINT64_C(0xfffffffffffffffe)));
L_1803d57d6_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d57d6_4:;
/* 1803d57df: mov qword ptr [rsp + 0x60], rbx */
L_1803d57df_0:;
L_1803d57df_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803d57df_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803d57df_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d57df_4:;
/* 1803d57e4: mov qword ptr [rsp + 0x68], rsi */
L_1803d57e4_0:;
L_1803d57e4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803d57e4_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803d57e4_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d57e4_4:;
/* 1803d57e9: movaps xmmword ptr [rsp + 0x40], xmm6 */
L_1803d57e9_0:;
L_1803d57e9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803d57e9_2:;
wr(s->u,16,16,rd(s->r,4992,16));
L_1803d57e9_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803d57e9_4:;
/* 1803d57ee: movaps xmm6, xmm3 */
L_1803d57ee_0:;
L_1803d57ee_1:;
wr(s->r,4992,4,rd(s->r,4800,4));
L_1803d57ee_2:;
wr(s->r,4996,4,rd(s->r,4804,4));
L_1803d57ee_3:;
wr(s->r,5000,4,rd(s->r,4808,4));
L_1803d57ee_4:;
wr(s->r,5004,4,rd(s->r,4812,4));
L_1803d57ee_5:;
/* 1803d57f1: mov edi, r8d */
L_1803d57f1_0:;
L_1803d57f1_1:;
wr(s->r,56,4,rd(s->r,128,4));
L_1803d57f1_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803d57f1_3:;
/* 1803d57f4: mov esi, edx */
L_1803d57f4_0:;
L_1803d57f4_1:;
wr(s->r,48,4,rd(s->r,16,4));
L_1803d57f4_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803d57f4_3:;
/* 1803d57f6: mov rbx, rcx */
L_1803d57f6_0:;
L_1803d57f6_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803d57f6_2:;
/* 1803d57f9: cmp r8d, 0x30 */
L_1803d57f9_0:;
L_1803d57f9_1:;
wr(s->u,52,4,rd(s->r,128,4));
L_1803d57f9_2:;
wr(s->r,512,1,(rd(s->u,52,4)<((U)UINT64_C(0x30))));
L_1803d57f9_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,52,4),((U)UINT64_C(0x30)),4,1));
L_1803d57f9_4:;
wr(s->u,56,4,(rd(s->u,52,4)-((U)UINT64_C(0x30))));
L_1803d57f9_5:;
wr(s->r,519,1,(sx(rd(s->u,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d57f9_6:;
wr(s->r,518,1,(rd(s->u,56,4)==((U)UINT64_C(0x0))));
L_1803d57f9_7:;
wr(s->u,42,4,(rd(s->u,56,4)&((U)UINT64_C(0xff))));
L_1803d57f9_8:;
wr(s->u,50,1,pop(rd(s->u,42,4),4));
L_1803d57f9_9:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803d57f9_10:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803d57f9_11:;
/* 1803d57fd: jle 0x1803d5806 */
L_1803d57fd_0:;
L_1803d57fd_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d57fd_2:;
wr(s->u,33,1,((rd(s->r,518,1)!=0)||(rd(s->u,32,1)!=0)));
L_1803d57fd_3:;
if(rd(s->u,33,1)){return UINT64_C(0x1803d5806);}
L_1803d57fd_4:;
return UINT64_C(0x1803d57ff);
}
uint64_t b_1803d57ff(CPU*s){
/* 1803d57ff: mov eax, 0x4c4b43 */
L_1803d57ff_0:;
L_1803d57ff_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803d57ff_2:;
/* 1803d5804: jmp 0x1803d583e */
L_1803d5804_0:;
L_1803d5804_1:;
return UINT64_C(0x1803d583e);
L_1803d5804_2:;
return UINT64_C(0x1803d5806);
}
uint64_t b_1803d5806(CPU*s){
/* 1803d5806: mov ecx, 0x3d8 */
L_1803d5806_0:;
L_1803d5806_1:;
wr(s->r,8,8,((U)UINT64_C(0x3d8)));
L_1803d5806_2:;
/* 1803d580b: call 0x180003140 */
L_1803d580b_0:;
L_1803d580b_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d580b_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5810)));
L_1803d580b_3:;
return (uint64_t)UINT64_C(0x180003140);
L_1803d580b_4:;
return UINT64_C(0x1803d5810);
}
uint64_t b_1803d5810(CPU*s){
/* 1803d5810: mov qword ptr [rsp + 0x38], rax */
L_1803d5810_0:;
L_1803d5810_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803d5810_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803d5810_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d5810_4:;
/* 1803d5815: test rax, rax */
L_1803d5815_0:;
L_1803d5815_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5815_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5815_3:;
wr(s->u,26,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_1803d5815_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5815_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803d5815_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803d5815_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d5815_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5815_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5815_10:;
/* 1803d5818: je 0x1803d5837 */
L_1803d5818_0:;
L_1803d5818_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d5837);}
L_1803d5818_2:;
return UINT64_C(0x1803d581a);
}
uint64_t b_1803d581a(CPU*s){
/* 1803d581a: mov ecx, dword ptr [rsp + 0x80] */
L_1803d581a_0:;
L_1803d581a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803d581a_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803d581a_3:;
wr(s->r,8,4,rd(s->u,20,4));
L_1803d581a_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803d581a_5:;
/* 1803d5821: mov dword ptr [rsp + 0x20], ecx */
L_1803d5821_0:;
L_1803d5821_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803d5821_2:;
wr(s->u,16,4,rd(s->r,8,4));
L_1803d5821_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803d5821_4:;
/* 1803d5825: movaps xmm3, xmm6 */
L_1803d5825_0:;
L_1803d5825_1:;
wr(s->r,4800,4,rd(s->r,4992,4));
L_1803d5825_2:;
wr(s->r,4804,4,rd(s->r,4996,4));
L_1803d5825_3:;
wr(s->r,4808,4,rd(s->r,5000,4));
L_1803d5825_4:;
wr(s->r,4812,4,rd(s->r,5004,4));
L_1803d5825_5:;
/* 1803d5828: mov r8d, edi */
L_1803d5828_0:;
L_1803d5828_1:;
wr(s->r,128,4,rd(s->r,56,4));
L_1803d5828_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803d5828_3:;
/* 1803d582b: mov edx, esi */
L_1803d582b_0:;
L_1803d582b_1:;
wr(s->r,16,4,rd(s->r,48,4));
L_1803d582b_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803d582b_3:;
/* 1803d582d: mov rcx, rax */
L_1803d582d_0:;
L_1803d582d_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803d582d_2:;
/* 1803d5830: call 0x1803dab20 */
L_1803d5830_0:;
L_1803d5830_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5830_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5835)));
L_1803d5830_3:;
return (uint64_t)UINT64_C(0x1803dab20);
L_1803d5830_4:;
return UINT64_C(0x1803d5835);
}
uint64_t b_1803d5835(CPU*s){
/* 1803d5835: jmp 0x1803d5839 */
L_1803d5835_0:;
L_1803d5835_1:;
return UINT64_C(0x1803d5839);
L_1803d5835_2:;
return UINT64_C(0x1803d5837);
}
uint64_t b_1803d5837(CPU*s){
/* 1803d5837: xor eax, eax */
L_1803d5837_0:;
L_1803d5837_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5837_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5837_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803d5837_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5837_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5837_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5837_7:;
wr(s->u,40,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5837_8:;
wr(s->u,48,1,pop(rd(s->u,40,4),4));
L_1803d5837_9:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803d5837_10:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803d5837_11:;
/* 1803d5839: mov qword ptr [rbx], rax */
L_1803d5839_0:;
L_1803d5839_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803d5839_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,8,8));
L_1803d5839_3:;
/* 1803d583c: xor eax, eax */
L_1803d583c_0:;
L_1803d583c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d583c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d583c_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803d583c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d583c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d583c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d583c_7:;
wr(s->u,40,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d583c_8:;
wr(s->u,48,1,pop(rd(s->u,40,4),4));
L_1803d583c_9:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803d583c_10:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803d583c_11:;
/* 1803d583e: mov rbx, qword ptr [rsp + 0x60] */
L_1803d583e_0:;
L_1803d583e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803d583e_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d583e_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803d583e_4:;
/* 1803d5843: mov rsi, qword ptr [rsp + 0x68] */
L_1803d5843_0:;
L_1803d5843_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803d5843_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5843_3:;
wr(s->r,48,8,rd(s->u,32,8));
L_1803d5843_4:;
/* 1803d5848: movaps xmm6, xmmword ptr [rsp + 0x40] */
L_1803d5848_0:;
L_1803d5848_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803d5848_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803d5848_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803d5848_4:;
wr(s->r,4992,4,rd(s->u,58,4));
L_1803d5848_5:;
wr(s->r,4996,4,rd(s->u,62,4));
L_1803d5848_6:;
wr(s->r,5000,4,rd(s->u,66,4));
L_1803d5848_7:;
wr(s->r,5004,4,rd(s->u,70,4));
L_1803d5848_8:;
/* 1803d584d: add rsp, 0x50 */
L_1803d584d_0:;
L_1803d584d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d584d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803d584d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803d584d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d584d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d584d_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d584d_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803d584d_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803d584d_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803d584d_10:;
/* 1803d5851: pop rdi */
L_1803d5851_0:;
L_1803d5851_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803d5851_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5851_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5851_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803d5851_5:;
/* 1803d5852: ret  */
L_1803d5852_0:;
L_1803d5852_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5852_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5852_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5852_4:;
return UINT64_C(0x1803d5853);
}
uint64_t b_1803d5839(CPU*s){
/* 1803d5839: mov qword ptr [rbx], rax */
L_1803d5839_0:;
L_1803d5839_1:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803d5839_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,8,8));
L_1803d5839_3:;
/* 1803d583c: xor eax, eax */
L_1803d583c_0:;
L_1803d583c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d583c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d583c_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803d583c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d583c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d583c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d583c_7:;
wr(s->u,40,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d583c_8:;
wr(s->u,48,1,pop(rd(s->u,40,4),4));
L_1803d583c_9:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803d583c_10:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803d583c_11:;
/* 1803d583e: mov rbx, qword ptr [rsp + 0x60] */
L_1803d583e_0:;
L_1803d583e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803d583e_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d583e_3:;
wr(s->r,24,8,rd(s->u,32,8));
L_1803d583e_4:;
/* 1803d5843: mov rsi, qword ptr [rsp + 0x68] */
L_1803d5843_0:;
L_1803d5843_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803d5843_2:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5843_3:;
wr(s->r,48,8,rd(s->u,32,8));
L_1803d5843_4:;
/* 1803d5848: movaps xmm6, xmmword ptr [rsp + 0x40] */
L_1803d5848_0:;
L_1803d5848_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803d5848_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803d5848_3:;
wr(s->u,58,16,rd(s->u,16,16));
L_1803d5848_4:;
wr(s->r,4992,4,rd(s->u,58,4));
L_1803d5848_5:;
wr(s->r,4996,4,rd(s->u,62,4));
L_1803d5848_6:;
wr(s->r,5000,4,rd(s->u,66,4));
L_1803d5848_7:;
wr(s->r,5004,4,rd(s->u,70,4));
L_1803d5848_8:;
/* 1803d584d: add rsp, 0x50 */
L_1803d584d_0:;
L_1803d584d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d584d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803d584d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803d584d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d584d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d584d_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d584d_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803d584d_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803d584d_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803d584d_10:;
/* 1803d5851: pop rdi */
L_1803d5851_0:;
L_1803d5851_1:;
wr(s->u,50,8,((U)UINT64_C(0x0)));
L_1803d5851_2:;
wr(s->u,50,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5851_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5851_4:;
wr(s->r,56,8,rd(s->u,50,8));
L_1803d5851_5:;
/* 1803d5852: ret  */
L_1803d5852_0:;
L_1803d5852_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5852_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5852_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5852_4:;
return UINT64_C(0x1803d5853);
}
uint64_t b_1803d583e(CPU*s){
/* 1803d583e: mov rbx, qword ptr [rsp + 0x60] */
L_1803d583e_0:;
L_1803d583e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803d583e_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d583e_3:;
wr(s->r,24,8,rd(s->u,24,8));
L_1803d583e_4:;
/* 1803d5843: mov rsi, qword ptr [rsp + 0x68] */
L_1803d5843_0:;
L_1803d5843_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803d5843_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5843_3:;
wr(s->r,48,8,rd(s->u,24,8));
L_1803d5843_4:;
/* 1803d5848: movaps xmm6, xmmword ptr [rsp + 0x40] */
L_1803d5848_0:;
L_1803d5848_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803d5848_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803d5848_3:;
wr(s->u,50,16,rd(s->u,8,16));
L_1803d5848_4:;
wr(s->r,4992,4,rd(s->u,50,4));
L_1803d5848_5:;
wr(s->r,4996,4,rd(s->u,54,4));
L_1803d5848_6:;
wr(s->r,5000,4,rd(s->u,58,4));
L_1803d5848_7:;
wr(s->r,5004,4,rd(s->u,62,4));
L_1803d5848_8:;
/* 1803d584d: add rsp, 0x50 */
L_1803d584d_0:;
L_1803d584d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x50)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d584d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x50)),8,0));
L_1803d584d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x50))));
L_1803d584d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d584d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d584d_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d584d_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803d584d_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803d584d_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803d584d_10:;
/* 1803d5851: pop rdi */
L_1803d5851_0:;
L_1803d5851_1:;
wr(s->u,42,8,((U)UINT64_C(0x0)));
L_1803d5851_2:;
wr(s->u,42,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5851_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5851_4:;
wr(s->r,56,8,rd(s->u,42,8));
L_1803d5851_5:;
/* 1803d5852: ret  */
L_1803d5852_0:;
L_1803d5852_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5852_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5852_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5852_4:;
return UINT64_C(0x1803d5853);
}
uint64_t b_1803d5860(CPU*s){
/* 1803d5860: sub rsp, 0x28 */
L_1803d5860_0:;
L_1803d5860_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803d5860_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803d5860_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803d5860_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5860_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5860_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5860_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5860_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5860_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5860_10:;
/* 1803d5864: test rcx, rcx */
L_1803d5864_0:;
L_1803d5864_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5864_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5864_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803d5864_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5864_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803d5864_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803d5864_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5864_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5864_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5864_10:;
/* 1803d5867: je 0x1803d5873 */
L_1803d5867_0:;
L_1803d5867_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d5873);}
L_1803d5867_2:;
return UINT64_C(0x1803d5869);
}
uint64_t b_1803d5869(CPU*s){
/* 1803d5869: mov rax, qword ptr [rcx] */
L_1803d5869_0:;
L_1803d5869_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803d5869_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803d5869_3:;
/* 1803d586c: mov edx, 1 */
L_1803d586c_0:;
L_1803d586c_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803d586c_2:;
/* 1803d5871: call qword ptr [rax] */
L_1803d5871_0:;
L_1803d5871_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803d5871_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803d5871_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5871_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5873)));
L_1803d5871_5:;
return (uint64_t)rd(s->u,8,8);
L_1803d5871_6:;
return UINT64_C(0x1803d5873);
}
uint64_t b_1803d5873(CPU*s){
/* 1803d5873: xor eax, eax */
L_1803d5873_0:;
L_1803d5873_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5873_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5873_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803d5873_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5873_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5873_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5873_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5873_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803d5873_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5873_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5873_11:;
/* 1803d5875: add rsp, 0x28 */
L_1803d5875_0:;
L_1803d5875_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5875_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803d5875_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803d5875_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5875_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5875_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5875_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5875_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5875_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5875_10:;
/* 1803d5879: ret  */
L_1803d5879_0:;
L_1803d5879_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5879_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5879_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5879_4:;
return UINT64_C(0x1803d587a);
}
uint64_t b_1803d58d0(CPU*s){
/* 1803d58d0: mov qword ptr [rsp + 0x10], rbx */
L_1803d58d0_0:;
L_1803d58d0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803d58d0_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803d58d0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803d58d0_4:;
/* 1803d58d5: push rsi */
L_1803d58d5_0:;
L_1803d58d5_1:;
wr(s->u,30,8,rd(s->r,48,8));
L_1803d58d5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d58d5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,30,8));
L_1803d58d5_4:;
/* 1803d58d6: sub rsp, 0x20 */
L_1803d58d6_0:;
L_1803d58d6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803d58d6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803d58d6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803d58d6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d58d6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d58d6_6:;
wr(s->u,38,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d58d6_7:;
wr(s->u,46,1,pop(rd(s->u,38,8),8));
L_1803d58d6_8:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803d58d6_9:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803d58d6_10:;
/* 1803d58da: lea rax, [rip + 0x4368a7] */
L_1803d58da_0:;
L_1803d58da_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080c188)));
L_1803d58da_2:;
/* 1803d58e1: xor esi, esi */
L_1803d58e1_0:;
L_1803d58e1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d58e1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d58e1_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803d58e1_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803d58e1_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d58e1_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803d58e1_7:;
wr(s->u,38,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803d58e1_8:;
wr(s->u,46,1,pop(rd(s->u,38,4),4));
L_1803d58e1_9:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803d58e1_10:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803d58e1_11:;
/* 1803d58e3: mov rbx, rcx */
L_1803d58e3_0:;
L_1803d58e3_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803d58e3_2:;
/* 1803d58e6: cmp dword ptr [rcx + 0x30], esi */
L_1803d58e6_0:;
L_1803d58e6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x30))));
L_1803d58e6_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d58e6_3:;
wr(s->u,48,4,rd(s->u,24,4));
L_1803d58e6_4:;
wr(s->r,512,1,(rd(s->u,48,4)<rd(s->r,48,4)));
L_1803d58e6_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,48,4),rd(s->r,48,4),4,1));
L_1803d58e6_6:;
wr(s->u,52,4,(rd(s->u,48,4)-rd(s->r,48,4)));
L_1803d58e6_7:;
wr(s->r,519,1,(sx(rd(s->u,52,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d58e6_8:;
wr(s->r,518,1,(rd(s->u,52,4)==((U)UINT64_C(0x0))));
L_1803d58e6_9:;
wr(s->u,38,4,(rd(s->u,52,4)&((U)UINT64_C(0xff))));
L_1803d58e6_10:;
wr(s->u,46,1,pop(rd(s->u,38,4),4));
L_1803d58e6_11:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803d58e6_12:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803d58e6_13:;
/* 1803d58e9: mov qword ptr [rcx], rax */
L_1803d58e9_0:;
L_1803d58e9_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803d58e9_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1803d58e9_3:;
/* 1803d58ec: lea rax, [rip + 0x436815] */
L_1803d58ec_0:;
L_1803d58ec_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080c108)));
L_1803d58ec_2:;
/* 1803d58f3: mov qword ptr [rcx + 8], rax */
L_1803d58f3_0:;
L_1803d58f3_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803d58f3_2:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803d58f3_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,16,8));
L_1803d58f3_4:;
/* 1803d58f7: jle 0x1803d5945 */
L_1803d58f7_0:;
L_1803d58f7_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d58f7_2:;
wr(s->u,29,1,((rd(s->r,518,1)!=0)||(rd(s->u,28,1)!=0)));
L_1803d58f7_3:;
if(rd(s->u,29,1)){return UINT64_C(0x1803d5945);}
L_1803d58f7_4:;
return UINT64_C(0x1803d58f9);
}
uint64_t b_1803d58f9(CPU*s){
/* 1803d58f9: mov qword ptr [rsp + 0x30], rdi */
L_1803d58f9_0:;
L_1803d58f9_1:;
wr(s->u,13,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803d58f9_2:;
wr(s->u,37,8,rd(s->r,56,8));
L_1803d58f9_3:;
mw((uint64_t)rd(s->u,13,8),8,rd(s->u,37,8));
L_1803d58f9_4:;
/* 1803d58fe: lea rdi, [rcx + 0x6738] */
L_1803d58fe_0:;
L_1803d58fe_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x6738))));
L_1803d58fe_2:;
wr(s->r,56,8,rd(s->u,5,8));
L_1803d58fe_3:;
/* 1803d5905: nop word ptr [rax + rax] */
L_1803d5905_0:;
L_1803d5905_1:;
wr(s->u,21,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803d5905_2:;
wr(s->u,29,8,(rd(s->r,0,8)+rd(s->u,21,8)));
L_1803d5905_3:;
/* 1803d5910: movsxd rax, dword ptr [rbx + 0x672c] */
L_1803d5910_0:;
L_1803d5910_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x672c))));
L_1803d5910_2:;
wr(s->u,45,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5910_3:;
wr(s->r,0,8,(U)sx(rd(s->u,45,4),4));
L_1803d5910_4:;
/* 1803d5917: neg rax */
L_1803d5917_0:;
L_1803d5917_1:;
wr(s->r,512,1,(rd(s->r,0,8)!=((U)UINT64_C(0x0))));
L_1803d5917_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,8),8,1));
L_1803d5917_3:;
wr(s->r,0,8,(-rd(s->r,0,8)));
L_1803d5917_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5917_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803d5917_6:;
wr(s->u,57,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803d5917_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803d5917_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803d5917_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803d5917_10:;
/* 1803d591a: shl rax, 2 */
L_1803d591a_0:;
L_1803d591a_1:;
wr(s->u,107,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d591a_2:;
wr(s->u,111,8,rd(s->r,0,8));
L_1803d591a_3:;
wr(s->r,0,8,((rd(s->u,107,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,107,4))));
L_1803d591a_4:;
wr(s->u,90,1,(rd(s->u,107,4)==((U)UINT64_C(0x0))));
L_1803d591a_5:;
wr(s->u,91,4,(rd(s->u,107,4)-((U)UINT64_C(0x1))));
L_1803d591a_6:;
wr(s->u,95,8,((rd(s->u,91,4)>=64)?0:(rd(s->u,111,8)<<rd(s->u,91,4))));
L_1803d591a_7:;
wr(s->u,103,1,(sx(rd(s->u,95,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d591a_8:;
wr(s->u,0,1,rd(s->u,90,1));
L_1803d591a_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d591a_10:;
wr(s->u,2,1,(!rd(s->u,90,1)));
L_1803d591a_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d591a_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,103,1)));
L_1803d591a_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d591a_14:;
wr(s->u,104,1,(rd(s->u,107,4)==((U)UINT64_C(0x1))));
L_1803d591a_15:;
wr(s->u,105,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d591a_16:;
wr(s->u,106,1,(rd(s->r,512,1)^rd(s->u,105,1)));
L_1803d591a_17:;
wr(s->u,0,1,rd(s->u,104,1));
L_1803d591a_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,106,1)));
L_1803d591a_19:;
wr(s->u,2,1,(!rd(s->u,104,1)));
L_1803d591a_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d591a_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d591a_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d591a_23:;
wr(s->u,67,1,(rd(s->u,107,4)!=((U)UINT64_C(0x0))));
L_1803d591a_24:;
wr(s->u,68,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d591a_25:;
wr(s->u,69,1,(!rd(s->u,67,1)));
L_1803d591a_26:;
wr(s->u,70,1,(rd(s->u,69,1)&rd(s->r,519,1)));
L_1803d591a_27:;
wr(s->u,71,1,(rd(s->u,67,1)&rd(s->u,68,1)));
L_1803d591a_28:;
wr(s->r,519,1,(rd(s->u,70,1)|rd(s->u,71,1)));
L_1803d591a_29:;
wr(s->u,72,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803d591a_30:;
wr(s->u,73,1,(!rd(s->u,67,1)));
L_1803d591a_31:;
wr(s->u,74,1,(rd(s->u,73,1)&rd(s->r,518,1)));
L_1803d591a_32:;
wr(s->u,75,1,(rd(s->u,67,1)&rd(s->u,72,1)));
L_1803d591a_33:;
wr(s->r,518,1,(rd(s->u,74,1)|rd(s->u,75,1)));
L_1803d591a_34:;
wr(s->u,76,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803d591a_35:;
wr(s->u,84,1,pop(rd(s->u,76,8),8));
L_1803d591a_36:;
wr(s->u,85,1,(rd(s->u,84,1)&((U)UINT64_C(0x1))));
L_1803d591a_37:;
wr(s->u,86,1,(rd(s->u,85,1)==((U)UINT64_C(0x0))));
L_1803d591a_38:;
wr(s->u,87,1,(!rd(s->u,67,1)));
L_1803d591a_39:;
wr(s->u,88,1,(rd(s->u,87,1)&rd(s->r,514,1)));
L_1803d591a_40:;
wr(s->u,89,1,(rd(s->u,67,1)&rd(s->u,86,1)));
L_1803d591a_41:;
wr(s->r,514,1,(rd(s->u,88,1)|rd(s->u,89,1)));
L_1803d591a_42:;
/* 1803d591e: add qword ptr [rdi], rax */
L_1803d591e_0:;
L_1803d591e_1:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d591e_2:;
wr(s->r,512,1,(((rd(s->u,37,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->u,37,8)));
L_1803d591e_3:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d591e_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,37,8),rd(s->r,0,8),8,0));
L_1803d591e_5:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d591e_6:;
wr(s->u,37,8,(rd(s->u,37,8)+rd(s->r,0,8)));
L_1803d591e_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,37,8));
L_1803d591e_8:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d591e_9:;
wr(s->r,519,1,(sx(rd(s->u,37,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d591e_10:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d591e_11:;
wr(s->r,518,1,(rd(s->u,37,8)==((U)UINT64_C(0x0))));
L_1803d591e_12:;
wr(s->u,37,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d591e_13:;
wr(s->u,57,8,(rd(s->u,37,8)&((U)UINT64_C(0xff))));
L_1803d591e_14:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803d591e_15:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803d591e_16:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803d591e_17:;
/* 1803d5921: mov rcx, qword ptr [rdi] */
L_1803d5921_0:;
L_1803d5921_1:;
wr(s->u,49,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d5921_2:;
wr(s->r,8,8,rd(s->u,49,8));
L_1803d5921_3:;
/* 1803d5924: call 0x180003590 */
L_1803d5924_0:;
L_1803d5924_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5924_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5929)));
L_1803d5924_3:;
return (uint64_t)UINT64_C(0x180003590);
L_1803d5924_4:;
return UINT64_C(0x1803d5929);
}
uint64_t b_1803d5910(CPU*s){
/* 1803d5910: movsxd rax, dword ptr [rbx + 0x672c] */
L_1803d5910_0:;
L_1803d5910_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x672c))));
L_1803d5910_2:;
wr(s->u,21,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5910_3:;
wr(s->r,0,8,(U)sx(rd(s->u,21,4),4));
L_1803d5910_4:;
/* 1803d5917: neg rax */
L_1803d5917_0:;
L_1803d5917_1:;
wr(s->r,512,1,(rd(s->r,0,8)!=((U)UINT64_C(0x0))));
L_1803d5917_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,8),8,1));
L_1803d5917_3:;
wr(s->r,0,8,(-rd(s->r,0,8)));
L_1803d5917_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5917_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803d5917_6:;
wr(s->u,33,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803d5917_7:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803d5917_8:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803d5917_9:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803d5917_10:;
/* 1803d591a: shl rax, 2 */
L_1803d591a_0:;
L_1803d591a_1:;
wr(s->u,83,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d591a_2:;
wr(s->u,87,8,rd(s->r,0,8));
L_1803d591a_3:;
wr(s->r,0,8,((rd(s->u,83,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,83,4))));
L_1803d591a_4:;
wr(s->u,66,1,(rd(s->u,83,4)==((U)UINT64_C(0x0))));
L_1803d591a_5:;
wr(s->u,67,4,(rd(s->u,83,4)-((U)UINT64_C(0x1))));
L_1803d591a_6:;
wr(s->u,71,8,((rd(s->u,67,4)>=64)?0:(rd(s->u,87,8)<<rd(s->u,67,4))));
L_1803d591a_7:;
wr(s->u,79,1,(sx(rd(s->u,71,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d591a_8:;
wr(s->u,0,1,rd(s->u,66,1));
L_1803d591a_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d591a_10:;
wr(s->u,2,1,(!rd(s->u,66,1)));
L_1803d591a_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d591a_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,79,1)));
L_1803d591a_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d591a_14:;
wr(s->u,80,1,(rd(s->u,83,4)==((U)UINT64_C(0x1))));
L_1803d591a_15:;
wr(s->u,81,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d591a_16:;
wr(s->u,82,1,(rd(s->r,512,1)^rd(s->u,81,1)));
L_1803d591a_17:;
wr(s->u,0,1,rd(s->u,80,1));
L_1803d591a_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,82,1)));
L_1803d591a_19:;
wr(s->u,2,1,(!rd(s->u,80,1)));
L_1803d591a_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d591a_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d591a_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d591a_23:;
wr(s->u,43,1,(rd(s->u,83,4)!=((U)UINT64_C(0x0))));
L_1803d591a_24:;
wr(s->u,44,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d591a_25:;
wr(s->u,45,1,(!rd(s->u,43,1)));
L_1803d591a_26:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,519,1)));
L_1803d591a_27:;
wr(s->u,47,1,(rd(s->u,43,1)&rd(s->u,44,1)));
L_1803d591a_28:;
wr(s->r,519,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803d591a_29:;
wr(s->u,48,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803d591a_30:;
wr(s->u,49,1,(!rd(s->u,43,1)));
L_1803d591a_31:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,518,1)));
L_1803d591a_32:;
wr(s->u,51,1,(rd(s->u,43,1)&rd(s->u,48,1)));
L_1803d591a_33:;
wr(s->r,518,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803d591a_34:;
wr(s->u,52,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803d591a_35:;
wr(s->u,60,1,pop(rd(s->u,52,8),8));
L_1803d591a_36:;
wr(s->u,61,1,(rd(s->u,60,1)&((U)UINT64_C(0x1))));
L_1803d591a_37:;
wr(s->u,62,1,(rd(s->u,61,1)==((U)UINT64_C(0x0))));
L_1803d591a_38:;
wr(s->u,63,1,(!rd(s->u,43,1)));
L_1803d591a_39:;
wr(s->u,64,1,(rd(s->u,63,1)&rd(s->r,514,1)));
L_1803d591a_40:;
wr(s->u,65,1,(rd(s->u,43,1)&rd(s->u,62,1)));
L_1803d591a_41:;
wr(s->r,514,1,(rd(s->u,64,1)|rd(s->u,65,1)));
L_1803d591a_42:;
/* 1803d591e: add qword ptr [rdi], rax */
L_1803d591e_0:;
L_1803d591e_1:;
wr(s->u,13,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d591e_2:;
wr(s->r,512,1,(((rd(s->u,13,8)+rd(s->r,0,8))&(((U)1<<64)-1))<rd(s->u,13,8)));
L_1803d591e_3:;
wr(s->u,13,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d591e_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,13,8),rd(s->r,0,8),8,0));
L_1803d591e_5:;
wr(s->u,13,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d591e_6:;
wr(s->u,13,8,(rd(s->u,13,8)+rd(s->r,0,8)));
L_1803d591e_7:;
mw((uint64_t)rd(s->r,56,8),8,rd(s->u,13,8));
L_1803d591e_8:;
wr(s->u,13,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d591e_9:;
wr(s->r,519,1,(sx(rd(s->u,13,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d591e_10:;
wr(s->u,13,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d591e_11:;
wr(s->r,518,1,(rd(s->u,13,8)==((U)UINT64_C(0x0))));
L_1803d591e_12:;
wr(s->u,13,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d591e_13:;
wr(s->u,33,8,(rd(s->u,13,8)&((U)UINT64_C(0xff))));
L_1803d591e_14:;
wr(s->u,41,1,pop(rd(s->u,33,8),8));
L_1803d591e_15:;
wr(s->u,42,1,(rd(s->u,41,1)&((U)UINT64_C(0x1))));
L_1803d591e_16:;
wr(s->r,514,1,(rd(s->u,42,1)==((U)UINT64_C(0x0))));
L_1803d591e_17:;
/* 1803d5921: mov rcx, qword ptr [rdi] */
L_1803d5921_0:;
L_1803d5921_1:;
wr(s->u,25,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d5921_2:;
wr(s->r,8,8,rd(s->u,25,8));
L_1803d5921_3:;
/* 1803d5924: call 0x180003590 */
L_1803d5924_0:;
L_1803d5924_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5924_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5929)));
L_1803d5924_3:;
return (uint64_t)UINT64_C(0x180003590);
L_1803d5924_4:;
return UINT64_C(0x1803d5929);
}
uint64_t b_1803d5929(CPU*s){
/* 1803d5929: mov rcx, qword ptr [rdi + 0x180] */
L_1803d5929_0:;
L_1803d5929_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x180))));
L_1803d5929_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5929_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803d5929_4:;
/* 1803d5930: call 0x180003590 */
L_1803d5930_0:;
L_1803d5930_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5930_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5935)));
L_1803d5930_3:;
return (uint64_t)UINT64_C(0x180003590);
L_1803d5930_4:;
return UINT64_C(0x1803d5935);
}
uint64_t b_1803d5935(CPU*s){
/* 1803d5935: inc esi */
L_1803d5935_0:;
L_1803d5935_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0x1)),4,0));
L_1803d5935_2:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0x1))));
L_1803d5935_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803d5935_4:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5935_5:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803d5935_6:;
wr(s->u,13,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803d5935_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803d5935_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5935_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5935_10:;
/* 1803d5937: add rdi, 8 */
L_1803d5937_0:;
L_1803d5937_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803d5937_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x8)),8,0));
L_1803d5937_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803d5937_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5937_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803d5937_6:;
wr(s->u,13,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803d5937_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803d5937_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5937_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5937_10:;
/* 1803d593b: cmp esi, dword ptr [rbx + 0x30] */
L_1803d593b_0:;
L_1803d593b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d593b_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d593b_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803d593b_4:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->u,23,4)));
L_1803d593b_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->u,23,4),4,1));
L_1803d593b_6:;
wr(s->u,27,4,(rd(s->r,48,4)-rd(s->u,23,4)));
L_1803d593b_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d593b_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803d593b_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803d593b_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803d593b_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d593b_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d593b_13:;
/* 1803d593e: jl 0x1803d5910 */
L_1803d593e_0:;
L_1803d593e_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d593e_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803d5910);}
L_1803d593e_3:;
return UINT64_C(0x1803d5940);
}
uint64_t b_1803d5940(CPU*s){
/* 1803d5940: mov rdi, qword ptr [rsp + 0x30] */
L_1803d5940_0:;
L_1803d5940_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803d5940_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5940_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803d5940_4:;
/* 1803d5945: mov rcx, rbx */
L_1803d5945_0:;
L_1803d5945_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803d5945_2:;
/* 1803d5948: mov rbx, qword ptr [rsp + 0x38] */
L_1803d5948_0:;
L_1803d5948_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803d5948_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5948_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803d5948_4:;
/* 1803d594d: add rsp, 0x20 */
L_1803d594d_0:;
L_1803d594d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d594d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803d594d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803d594d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d594d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d594d_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d594d_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d594d_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d594d_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d594d_10:;
/* 1803d5951: pop rsi */
L_1803d5951_0:;
L_1803d5951_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5951_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5951_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5951_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803d5951_5:;
/* 1803d5952: jmp 0x1803db0c0 */
L_1803d5952_0:;
L_1803d5952_1:;
return UINT64_C(0x1803db0c0);
L_1803d5952_2:;
return UINT64_C(0x1803d5957);
}
uint64_t b_1803d5945(CPU*s){
/* 1803d5945: mov rcx, rbx */
L_1803d5945_0:;
L_1803d5945_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803d5945_2:;
/* 1803d5948: mov rbx, qword ptr [rsp + 0x38] */
L_1803d5948_0:;
L_1803d5948_1:;
wr(s->u,0,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803d5948_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5948_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803d5948_4:;
/* 1803d594d: add rsp, 0x20 */
L_1803d594d_0:;
L_1803d594d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d594d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803d594d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803d594d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d594d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d594d_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d594d_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d594d_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d594d_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d594d_10:;
/* 1803d5951: pop rsi */
L_1803d5951_0:;
L_1803d5951_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5951_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5951_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5951_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803d5951_5:;
/* 1803d5952: jmp 0x1803db0c0 */
L_1803d5952_0:;
L_1803d5952_1:;
return UINT64_C(0x1803db0c0);
L_1803d5952_2:;
return UINT64_C(0x1803d5957);
}
uint64_t b_1803d5960(CPU*s){
/* 1803d5960: mov rax, qword ptr [rcx - 8] */
L_1803d5960_0:;
L_1803d5960_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5960_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5960_3:;
wr(s->r,0,8,rd(s->u,16,8));
L_1803d5960_4:;
/* 1803d5964: add rcx, -8 */
L_1803d5964_0:;
L_1803d5964_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803d5964_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0xfffffffffffffff8)),8,0));
L_1803d5964_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5964_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5964_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803d5964_6:;
wr(s->u,24,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803d5964_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803d5964_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803d5964_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803d5964_10:;
/* 1803d5968: jmp qword ptr [rax + 0x88] */
L_1803d5968_0:;
L_1803d5968_1:;
wr(s->u,8,8,(rd(s->r,0,8)+((U)UINT64_C(0x88))));
L_1803d5968_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d5968_3:;
return (uint64_t)rd(s->u,16,8);
L_1803d5968_4:;
return UINT64_C(0x1803d596f);
}
uint64_t b_1803d5970(CPU*s){
/* 1803d5970: mov rax, rsp */
L_1803d5970_0:;
L_1803d5970_1:;
wr(s->r,0,8,rd(s->r,32,8));
L_1803d5970_2:;
/* 1803d5973: mov qword ptr [rax + 0x18], rbx */
L_1803d5973_0:;
L_1803d5973_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x18))));
L_1803d5973_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803d5973_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d5973_4:;
/* 1803d5977: mov qword ptr [rax + 0x20], r9 */
L_1803d5977_0:;
L_1803d5977_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x20))));
L_1803d5977_2:;
wr(s->u,8,8,rd(s->r,136,8));
L_1803d5977_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d5977_4:;
/* 1803d597b: push rbp */
L_1803d597b_0:;
L_1803d597b_1:;
wr(s->u,22,8,rd(s->r,40,8));
L_1803d597b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d597b_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,22,8));
L_1803d597b_4:;
/* 1803d597c: push rsi */
L_1803d597c_0:;
L_1803d597c_1:;
wr(s->u,22,8,rd(s->r,48,8));
L_1803d597c_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d597c_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,22,8));
L_1803d597c_4:;
/* 1803d597d: push rdi */
L_1803d597d_0:;
L_1803d597d_1:;
wr(s->u,22,8,rd(s->r,56,8));
L_1803d597d_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d597d_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,22,8));
L_1803d597d_4:;
/* 1803d597e: push r13 */
L_1803d597e_0:;
L_1803d597e_1:;
wr(s->u,22,8,rd(s->r,168,8));
L_1803d597e_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d597e_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,22,8));
L_1803d597e_4:;
/* 1803d5980: push r14 */
L_1803d5980_0:;
L_1803d5980_1:;
wr(s->u,22,8,rd(s->r,176,8));
L_1803d5980_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5980_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,22,8));
L_1803d5980_4:;
/* 1803d5982: sub rsp, 0x320 */
L_1803d5982_0:;
L_1803d5982_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x320))));
L_1803d5982_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x320)),8,1));
L_1803d5982_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x320))));
L_1803d5982_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5982_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5982_6:;
wr(s->u,30,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5982_7:;
wr(s->u,38,1,pop(rd(s->u,30,8),8));
L_1803d5982_8:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803d5982_9:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803d5982_10:;
/* 1803d5989: xor r14d, r14d */
L_1803d5989_0:;
L_1803d5989_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5989_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5989_3:;
wr(s->r,176,4,(rd(s->r,176,4)^rd(s->r,176,4)));
L_1803d5989_4:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803d5989_5:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5989_6:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803d5989_7:;
wr(s->u,30,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803d5989_8:;
wr(s->u,38,1,pop(rd(s->u,30,4),4));
L_1803d5989_9:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803d5989_10:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803d5989_11:;
/* 1803d598c: mov qword ptr [rax + 8], r12 */
L_1803d598c_0:;
L_1803d598c_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803d598c_2:;
wr(s->u,8,8,rd(s->r,160,8));
L_1803d598c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d598c_4:;
/* 1803d5990: mov qword ptr [rax + 0x10], r15 */
L_1803d5990_0:;
L_1803d5990_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803d5990_2:;
wr(s->u,8,8,rd(s->r,184,8));
L_1803d5990_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d5990_4:;
/* 1803d5994: cmp dword ptr [rcx + 0x28], r14d */
L_1803d5994_0:;
L_1803d5994_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x28))));
L_1803d5994_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5994_3:;
wr(s->u,40,4,rd(s->u,16,4));
L_1803d5994_4:;
wr(s->r,512,1,(rd(s->u,40,4)<rd(s->r,176,4)));
L_1803d5994_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,40,4),rd(s->r,176,4),4,1));
L_1803d5994_6:;
wr(s->u,44,4,(rd(s->u,40,4)-rd(s->r,176,4)));
L_1803d5994_7:;
wr(s->r,519,1,(sx(rd(s->u,44,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5994_8:;
wr(s->r,518,1,(rd(s->u,44,4)==((U)UINT64_C(0x0))));
L_1803d5994_9:;
wr(s->u,30,4,(rd(s->u,44,4)&((U)UINT64_C(0xff))));
L_1803d5994_10:;
wr(s->u,38,1,pop(rd(s->u,30,4),4));
L_1803d5994_11:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803d5994_12:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803d5994_13:;
/* 1803d5998: mov r13, r9 */
L_1803d5998_0:;
L_1803d5998_1:;
wr(s->r,168,8,rd(s->r,136,8));
L_1803d5998_2:;
/* 1803d599b: movsxd r15, r8d */
L_1803d599b_0:;
L_1803d599b_1:;
wr(s->r,184,8,(U)sx(rd(s->r,128,4),4));
L_1803d599b_2:;
/* 1803d599e: mov rdi, rdx */
L_1803d599e_0:;
L_1803d599e_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803d599e_2:;
/* 1803d59a1: mov rsi, rcx */
L_1803d59a1_0:;
L_1803d59a1_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803d59a1_2:;
/* 1803d59a4: mov ebp, r14d */
L_1803d59a4_0:;
L_1803d59a4_1:;
wr(s->r,40,4,rd(s->r,176,4));
L_1803d59a4_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803d59a4_3:;
/* 1803d59a7: mov r12d, r14d */
L_1803d59a7_0:;
L_1803d59a7_1:;
wr(s->r,160,4,rd(s->r,176,4));
L_1803d59a7_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803d59a7_3:;
/* 1803d59aa: jle 0x1803d59f2 */
L_1803d59aa_0:;
L_1803d59aa_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d59aa_2:;
wr(s->u,21,1,((rd(s->r,518,1)!=0)||(rd(s->u,20,1)!=0)));
L_1803d59aa_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803d59f2);}
L_1803d59aa_4:;
return UINT64_C(0x1803d59ac);
}
uint64_t b_1803d598c(CPU*s){
/* 1803d598c: mov qword ptr [rax + 8], r12 */
L_1803d598c_0:;
L_1803d598c_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803d598c_2:;
wr(s->u,8,8,rd(s->r,160,8));
L_1803d598c_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d598c_4:;
/* 1803d5990: mov qword ptr [rax + 0x10], r15 */
L_1803d5990_0:;
L_1803d5990_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803d5990_2:;
wr(s->u,8,8,rd(s->r,184,8));
L_1803d5990_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d5990_4:;
/* 1803d5994: cmp dword ptr [rcx + 0x28], r14d */
L_1803d5994_0:;
L_1803d5994_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x28))));
L_1803d5994_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5994_3:;
wr(s->u,28,4,rd(s->u,16,4));
L_1803d5994_4:;
wr(s->r,512,1,(rd(s->u,28,4)<rd(s->r,176,4)));
L_1803d5994_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,28,4),rd(s->r,176,4),4,1));
L_1803d5994_6:;
wr(s->u,32,4,(rd(s->u,28,4)-rd(s->r,176,4)));
L_1803d5994_7:;
wr(s->r,519,1,(sx(rd(s->u,32,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5994_8:;
wr(s->r,518,1,(rd(s->u,32,4)==((U)UINT64_C(0x0))));
L_1803d5994_9:;
wr(s->u,22,4,(rd(s->u,32,4)&((U)UINT64_C(0xff))));
L_1803d5994_10:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803d5994_11:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803d5994_12:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803d5994_13:;
/* 1803d5998: mov r13, r9 */
L_1803d5998_0:;
L_1803d5998_1:;
wr(s->r,168,8,rd(s->r,136,8));
L_1803d5998_2:;
/* 1803d599b: movsxd r15, r8d */
L_1803d599b_0:;
L_1803d599b_1:;
wr(s->r,184,8,(U)sx(rd(s->r,128,4),4));
L_1803d599b_2:;
/* 1803d599e: mov rdi, rdx */
L_1803d599e_0:;
L_1803d599e_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803d599e_2:;
/* 1803d59a1: mov rsi, rcx */
L_1803d59a1_0:;
L_1803d59a1_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803d59a1_2:;
/* 1803d59a4: mov ebp, r14d */
L_1803d59a4_0:;
L_1803d59a4_1:;
wr(s->r,40,4,rd(s->r,176,4));
L_1803d59a4_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803d59a4_3:;
/* 1803d59a7: mov r12d, r14d */
L_1803d59a7_0:;
L_1803d59a7_1:;
wr(s->r,160,4,rd(s->r,176,4));
L_1803d59a7_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803d59a7_3:;
/* 1803d59aa: jle 0x1803d59f2 */
L_1803d59aa_0:;
L_1803d59aa_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d59aa_2:;
wr(s->u,21,1,((rd(s->r,518,1)!=0)||(rd(s->u,20,1)!=0)));
L_1803d59aa_3:;
if(rd(s->u,21,1)){return UINT64_C(0x1803d59f2);}
L_1803d59aa_4:;
return UINT64_C(0x1803d59ac);
}
uint64_t b_1803d59ac(CPU*s){
/* 1803d59ac: mov r13, r15 */
L_1803d59ac_0:;
L_1803d59ac_1:;
wr(s->r,168,8,rd(s->r,184,8));
L_1803d59ac_2:;
/* 1803d59af: lea rbx, [rcx + 0x68b0] */
L_1803d59af_0:;
L_1803d59af_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x68b0))));
L_1803d59af_2:;
wr(s->r,24,8,rd(s->u,5,8));
L_1803d59af_3:;
/* 1803d59b6: shl r13, 2 */
L_1803d59b6_0:;
L_1803d59b6_1:;
wr(s->u,97,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d59b6_2:;
wr(s->u,101,8,rd(s->r,168,8));
L_1803d59b6_3:;
wr(s->r,168,8,((rd(s->u,97,4)>=64)?0:(rd(s->r,168,8)<<rd(s->u,97,4))));
L_1803d59b6_4:;
wr(s->u,80,1,(rd(s->u,97,4)==((U)UINT64_C(0x0))));
L_1803d59b6_5:;
wr(s->u,81,4,(rd(s->u,97,4)-((U)UINT64_C(0x1))));
L_1803d59b6_6:;
wr(s->u,85,8,((rd(s->u,81,4)>=64)?0:(rd(s->u,101,8)<<rd(s->u,81,4))));
L_1803d59b6_7:;
wr(s->u,93,1,(sx(rd(s->u,85,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d59b6_8:;
wr(s->u,0,1,rd(s->u,80,1));
L_1803d59b6_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d59b6_10:;
wr(s->u,2,1,(!rd(s->u,80,1)));
L_1803d59b6_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d59b6_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,93,1)));
L_1803d59b6_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d59b6_14:;
wr(s->u,94,1,(rd(s->u,97,4)==((U)UINT64_C(0x1))));
L_1803d59b6_15:;
wr(s->u,95,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d59b6_16:;
wr(s->u,96,1,(rd(s->r,512,1)^rd(s->u,95,1)));
L_1803d59b6_17:;
wr(s->u,0,1,rd(s->u,94,1));
L_1803d59b6_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,96,1)));
L_1803d59b6_19:;
wr(s->u,2,1,(!rd(s->u,94,1)));
L_1803d59b6_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d59b6_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d59b6_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d59b6_23:;
wr(s->u,57,1,(rd(s->u,97,4)!=((U)UINT64_C(0x0))));
L_1803d59b6_24:;
wr(s->u,58,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d59b6_25:;
wr(s->u,59,1,(!rd(s->u,57,1)));
L_1803d59b6_26:;
wr(s->u,60,1,(rd(s->u,59,1)&rd(s->r,519,1)));
L_1803d59b6_27:;
wr(s->u,61,1,(rd(s->u,57,1)&rd(s->u,58,1)));
L_1803d59b6_28:;
wr(s->r,519,1,(rd(s->u,60,1)|rd(s->u,61,1)));
L_1803d59b6_29:;
wr(s->u,62,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803d59b6_30:;
wr(s->u,63,1,(!rd(s->u,57,1)));
L_1803d59b6_31:;
wr(s->u,64,1,(rd(s->u,63,1)&rd(s->r,518,1)));
L_1803d59b6_32:;
wr(s->u,65,1,(rd(s->u,57,1)&rd(s->u,62,1)));
L_1803d59b6_33:;
wr(s->r,518,1,(rd(s->u,64,1)|rd(s->u,65,1)));
L_1803d59b6_34:;
wr(s->u,66,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803d59b6_35:;
wr(s->u,74,1,pop(rd(s->u,66,8),8));
L_1803d59b6_36:;
wr(s->u,75,1,(rd(s->u,74,1)&((U)UINT64_C(0x1))));
L_1803d59b6_37:;
wr(s->u,76,1,(rd(s->u,75,1)==((U)UINT64_C(0x0))));
L_1803d59b6_38:;
wr(s->u,77,1,(!rd(s->u,57,1)));
L_1803d59b6_39:;
wr(s->u,78,1,(rd(s->u,77,1)&rd(s->r,514,1)));
L_1803d59b6_40:;
wr(s->u,79,1,(rd(s->u,57,1)&rd(s->u,76,1)));
L_1803d59b6_41:;
wr(s->r,514,1,(rd(s->u,78,1)|rd(s->u,79,1)));
L_1803d59b6_42:;
/* 1803d59ba: nop word ptr [rax + rax] */
L_1803d59ba_0:;
L_1803d59ba_1:;
wr(s->u,29,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803d59ba_2:;
wr(s->u,37,8,(rd(s->r,0,8)+rd(s->u,29,8)));
L_1803d59ba_3:;
/* 1803d59c0: movsxd rcx, dword ptr [rsi + 0x6720] */
L_1803d59c0_0:;
L_1803d59c0_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x6720))));
L_1803d59c0_2:;
wr(s->u,45,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d59c0_3:;
wr(s->r,8,8,(U)sx(rd(s->u,45,4),4));
L_1803d59c0_4:;
/* 1803d59c7: mov rax, qword ptr [rbx] */
L_1803d59c7_0:;
L_1803d59c7_1:;
wr(s->u,49,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803d59c7_2:;
wr(s->r,0,8,rd(s->u,49,8));
L_1803d59c7_3:;
/* 1803d59ca: mov rdx, qword ptr [rdi] */
L_1803d59ca_0:;
L_1803d59ca_1:;
wr(s->u,49,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d59ca_2:;
wr(s->r,16,8,rd(s->u,49,8));
L_1803d59ca_3:;
/* 1803d59cd: lea rcx, [rax + rcx*4] */
L_1803d59cd_0:;
L_1803d59cd_1:;
wr(s->u,13,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803d59cd_2:;
wr(s->u,21,8,(rd(s->r,0,8)+rd(s->u,13,8)));
L_1803d59cd_3:;
wr(s->r,8,8,rd(s->u,21,8));
L_1803d59cd_4:;
/* 1803d59d1: mov r8, r13 */
L_1803d59d1_0:;
L_1803d59d1_1:;
wr(s->r,128,8,rd(s->r,168,8));
L_1803d59d1_2:;
/* 1803d59d4: call 0x18000d550 */
L_1803d59d4_0:;
L_1803d59d4_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d59d4_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d59d9)));
L_1803d59d4_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803d59d4_4:;
return UINT64_C(0x1803d59d9);
}
uint64_t b_1803d59c0(CPU*s){
/* 1803d59c0: movsxd rcx, dword ptr [rsi + 0x6720] */
L_1803d59c0_0:;
L_1803d59c0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6720))));
L_1803d59c0_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59c0_3:;
wr(s->r,8,8,(U)sx(rd(s->u,24,4),4));
L_1803d59c0_4:;
/* 1803d59c7: mov rax, qword ptr [rbx] */
L_1803d59c7_0:;
L_1803d59c7_1:;
wr(s->u,28,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803d59c7_2:;
wr(s->r,0,8,rd(s->u,28,8));
L_1803d59c7_3:;
/* 1803d59ca: mov rdx, qword ptr [rdi] */
L_1803d59ca_0:;
L_1803d59ca_1:;
wr(s->u,28,8,mr((uint64_t)rd(s->r,56,8),8));
L_1803d59ca_2:;
wr(s->r,16,8,rd(s->u,28,8));
L_1803d59ca_3:;
/* 1803d59cd: lea rcx, [rax + rcx*4] */
L_1803d59cd_0:;
L_1803d59cd_1:;
wr(s->u,8,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803d59cd_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803d59cd_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803d59cd_4:;
/* 1803d59d1: mov r8, r13 */
L_1803d59d1_0:;
L_1803d59d1_1:;
wr(s->r,128,8,rd(s->r,168,8));
L_1803d59d1_2:;
/* 1803d59d4: call 0x18000d550 */
L_1803d59d4_0:;
L_1803d59d4_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d59d4_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d59d9)));
L_1803d59d4_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803d59d4_4:;
return UINT64_C(0x1803d59d9);
}
uint64_t b_1803d59d9(CPU*s){
/* 1803d59d9: inc r12d */
L_1803d59d9_0:;
L_1803d59d9_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),((U)UINT64_C(0x1)),4,0));
L_1803d59d9_2:;
wr(s->r,160,4,(rd(s->r,160,4)+((U)UINT64_C(0x1))));
L_1803d59d9_3:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803d59d9_4:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d59d9_5:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803d59d9_6:;
wr(s->u,13,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803d59d9_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803d59d9_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d59d9_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d59d9_10:;
/* 1803d59dc: add rdi, 8 */
L_1803d59dc_0:;
L_1803d59dc_1:;
wr(s->r,512,1,(((rd(s->r,56,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,56,8)));
L_1803d59dc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,8),((U)UINT64_C(0x8)),8,0));
L_1803d59dc_3:;
wr(s->r,56,8,(rd(s->r,56,8)+((U)UINT64_C(0x8))));
L_1803d59dc_4:;
wr(s->r,519,1,(sx(rd(s->r,56,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d59dc_5:;
wr(s->r,518,1,(rd(s->r,56,8)==((U)UINT64_C(0x0))));
L_1803d59dc_6:;
wr(s->u,13,8,(rd(s->r,56,8)&((U)UINT64_C(0xff))));
L_1803d59dc_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803d59dc_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d59dc_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d59dc_10:;
/* 1803d59e0: add rbx, 8 */
L_1803d59e0_0:;
L_1803d59e0_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803d59e0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x8)),8,0));
L_1803d59e0_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803d59e0_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d59e0_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803d59e0_6:;
wr(s->u,13,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803d59e0_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803d59e0_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d59e0_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d59e0_10:;
/* 1803d59e4: cmp r12d, dword ptr [rsi + 0x28] */
L_1803d59e4_0:;
L_1803d59e4_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x28))));
L_1803d59e4_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59e4_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803d59e4_4:;
wr(s->r,512,1,(rd(s->r,160,4)<rd(s->u,23,4)));
L_1803d59e4_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),rd(s->u,23,4),4,1));
L_1803d59e4_6:;
wr(s->u,27,4,(rd(s->r,160,4)-rd(s->u,23,4)));
L_1803d59e4_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d59e4_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803d59e4_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803d59e4_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803d59e4_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d59e4_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d59e4_13:;
/* 1803d59e8: jl 0x1803d59c0 */
L_1803d59e8_0:;
L_1803d59e8_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d59e8_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803d59c0);}
L_1803d59e8_3:;
return UINT64_C(0x1803d59ea);
}
uint64_t b_1803d59ea(CPU*s){
/* 1803d59ea: mov r13, qword ptr [rsp + 0x368] */
L_1803d59ea_0:;
L_1803d59ea_1:;
wr(s->u,8,8,(((U)UINT64_C(0x368))+rd(s->r,32,8)));
L_1803d59ea_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d59ea_3:;
wr(s->r,168,8,rd(s->u,24,8));
L_1803d59ea_4:;
/* 1803d59f2: add dword ptr [rsi + 0x6720], r15d */
L_1803d59f2_0:;
L_1803d59f2_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6720))));
L_1803d59f2_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59f2_3:;
wr(s->r,512,1,(((rd(s->u,16,4)+rd(s->r,184,4))&(((U)1<<32)-1))<rd(s->u,16,4)));
L_1803d59f2_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59f2_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,4),rd(s->r,184,4),4,0));
L_1803d59f2_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59f2_7:;
wr(s->u,16,4,(rd(s->u,16,4)+rd(s->r,184,4)));
L_1803d59f2_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803d59f2_9:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59f2_10:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d59f2_11:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59f2_12:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803d59f2_13:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59f2_14:;
wr(s->u,32,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803d59f2_15:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803d59f2_16:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803d59f2_17:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803d59f2_18:;
/* 1803d59f9: mov r12, qword ptr [rsp + 0x350] */
L_1803d59f9_0:;
L_1803d59f9_1:;
wr(s->u,8,8,(((U)UINT64_C(0x350))+rd(s->r,32,8)));
L_1803d59f9_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d59f9_3:;
wr(s->r,160,8,rd(s->u,24,8));
L_1803d59f9_4:;
/* 1803d5a01: mov r15, qword ptr [rsp + 0x358] */
L_1803d5a01_0:;
L_1803d5a01_1:;
wr(s->u,8,8,(((U)UINT64_C(0x358))+rd(s->r,32,8)));
L_1803d5a01_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d5a01_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803d5a01_4:;
/* 1803d5a09: cmp dword ptr [rsi + 0x672c], ebp */
L_1803d5a09_0:;
L_1803d5a09_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x672c))));
L_1803d5a09_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a09_3:;
wr(s->u,38,4,rd(s->u,20,4));
L_1803d5a09_4:;
wr(s->r,512,1,(rd(s->u,38,4)<rd(s->r,40,4)));
L_1803d5a09_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,38,4),rd(s->r,40,4),4,1));
L_1803d5a09_6:;
wr(s->u,42,4,(rd(s->u,38,4)-rd(s->r,40,4)));
L_1803d5a09_7:;
wr(s->r,519,1,(sx(rd(s->u,42,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5a09_8:;
wr(s->r,518,1,(rd(s->u,42,4)==((U)UINT64_C(0x0))));
L_1803d5a09_9:;
wr(s->u,32,4,(rd(s->u,42,4)&((U)UINT64_C(0xff))));
L_1803d5a09_10:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803d5a09_11:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803d5a09_12:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803d5a09_13:;
/* 1803d5a0f: je 0x1803d5a4e */
L_1803d5a0f_0:;
L_1803d5a0f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d5a4e);}
L_1803d5a0f_2:;
return UINT64_C(0x1803d5a11);
}
uint64_t b_1803d59f2(CPU*s){
/* 1803d59f2: add dword ptr [rsi + 0x6720], r15d */
L_1803d59f2_0:;
L_1803d59f2_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6720))));
L_1803d59f2_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59f2_3:;
wr(s->r,512,1,(((rd(s->u,16,4)+rd(s->r,184,4))&(((U)1<<32)-1))<rd(s->u,16,4)));
L_1803d59f2_4:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59f2_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,16,4),rd(s->r,184,4),4,0));
L_1803d59f2_6:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59f2_7:;
wr(s->u,16,4,(rd(s->u,16,4)+rd(s->r,184,4)));
L_1803d59f2_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803d59f2_9:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59f2_10:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d59f2_11:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59f2_12:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_1803d59f2_13:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d59f2_14:;
wr(s->u,32,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_1803d59f2_15:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803d59f2_16:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803d59f2_17:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803d59f2_18:;
/* 1803d59f9: mov r12, qword ptr [rsp + 0x350] */
L_1803d59f9_0:;
L_1803d59f9_1:;
wr(s->u,8,8,(((U)UINT64_C(0x350))+rd(s->r,32,8)));
L_1803d59f9_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d59f9_3:;
wr(s->r,160,8,rd(s->u,24,8));
L_1803d59f9_4:;
/* 1803d5a01: mov r15, qword ptr [rsp + 0x358] */
L_1803d5a01_0:;
L_1803d5a01_1:;
wr(s->u,8,8,(((U)UINT64_C(0x358))+rd(s->r,32,8)));
L_1803d5a01_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d5a01_3:;
wr(s->r,184,8,rd(s->u,24,8));
L_1803d5a01_4:;
/* 1803d5a09: cmp dword ptr [rsi + 0x672c], ebp */
L_1803d5a09_0:;
L_1803d5a09_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x672c))));
L_1803d5a09_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a09_3:;
wr(s->u,38,4,rd(s->u,20,4));
L_1803d5a09_4:;
wr(s->r,512,1,(rd(s->u,38,4)<rd(s->r,40,4)));
L_1803d5a09_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,38,4),rd(s->r,40,4),4,1));
L_1803d5a09_6:;
wr(s->u,42,4,(rd(s->u,38,4)-rd(s->r,40,4)));
L_1803d5a09_7:;
wr(s->r,519,1,(sx(rd(s->u,42,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5a09_8:;
wr(s->r,518,1,(rd(s->u,42,4)==((U)UINT64_C(0x0))));
L_1803d5a09_9:;
wr(s->u,32,4,(rd(s->u,42,4)&((U)UINT64_C(0xff))));
L_1803d5a09_10:;
wr(s->u,36,1,pop(rd(s->u,32,4),4));
L_1803d5a09_11:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803d5a09_12:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803d5a09_13:;
/* 1803d5a0f: je 0x1803d5a4e */
L_1803d5a0f_0:;
L_1803d5a0f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d5a4e);}
L_1803d5a0f_2:;
return UINT64_C(0x1803d5a11);
}
uint64_t b_1803d5a11(CPU*s){
/* 1803d5a11: lea rcx, [rsi - 8] */
L_1803d5a11_0:;
L_1803d5a11_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5a11_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803d5a11_3:;
/* 1803d5a15: call 0x1803dca30 */
L_1803d5a15_0:;
L_1803d5a15_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5a15_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5a1a)));
L_1803d5a15_3:;
return (uint64_t)UINT64_C(0x1803dca30);
L_1803d5a15_4:;
return UINT64_C(0x1803d5a1a);
}
uint64_t b_1803d5a1a(CPU*s){
/* 1803d5a1a: mov r10, qword ptr [rsi - 8] */
L_1803d5a1a_0:;
L_1803d5a1a_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5a1a_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5a1a_3:;
wr(s->r,144,8,rd(s->u,16,8));
L_1803d5a1a_4:;
/* 1803d5a1e: lea r9, [rsi + 0x6730] */
L_1803d5a1e_0:;
L_1803d5a1e_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6730))));
L_1803d5a1e_2:;
wr(s->r,136,8,rd(s->u,8,8));
L_1803d5a1e_3:;
/* 1803d5a25: lea rdx, [rsi + 0x68b0] */
L_1803d5a25_0:;
L_1803d5a25_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x68b0))));
L_1803d5a25_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803d5a25_3:;
/* 1803d5a2c: lea rcx, [rsi - 8] */
L_1803d5a2c_0:;
L_1803d5a2c_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5a2c_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803d5a2c_3:;
/* 1803d5a30: mov r8d, eax */
L_1803d5a30_0:;
L_1803d5a30_1:;
wr(s->r,128,4,rd(s->r,0,4));
L_1803d5a30_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803d5a30_3:;
/* 1803d5a33: mov ebp, eax */
L_1803d5a33_0:;
L_1803d5a33_1:;
wr(s->r,40,4,rd(s->r,0,4));
L_1803d5a33_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803d5a33_3:;
/* 1803d5a35: call qword ptr [r10 + 8] */
L_1803d5a35_0:;
L_1803d5a35_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803d5a35_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5a35_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_1803d5a35_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5a35_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5a39)));
L_1803d5a35_6:;
return (uint64_t)rd(s->u,24,8);
L_1803d5a35_7:;
return UINT64_C(0x1803d5a39);
}
uint64_t b_1803d5a39(CPU*s){
/* 1803d5a39: test eax, eax */
L_1803d5a39_0:;
L_1803d5a39_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5a39_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5a39_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803d5a39_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5a39_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803d5a39_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803d5a39_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803d5a39_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803d5a39_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803d5a39_10:;
/* 1803d5a3b: js 0x1803d5ba3 */
L_1803d5a3b_0:;
L_1803d5a3b_1:;
if(rd(s->r,519,1)){return UINT64_C(0x1803d5ba3);}
L_1803d5a3b_2:;
return UINT64_C(0x1803d5a41);
}
uint64_t b_1803d5a41(CPU*s){
/* 1803d5a41: add dword ptr [rsi + 0x671c], eax */
L_1803d5a41_0:;
L_1803d5a41_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x671c))));
L_1803d5a41_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a41_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803d5a41_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a41_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,0,4),4,0));
L_1803d5a41_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a41_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,0,4)));
L_1803d5a41_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5a41_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a41_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5a41_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a41_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803d5a41_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a41_14:;
wr(s->u,17,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803d5a41_15:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803d5a41_16:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5a41_17:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5a41_18:;
/* 1803d5a47: mov dword ptr [rsi + 0x672c], r14d */
L_1803d5a47_0:;
L_1803d5a47_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x672c))));
L_1803d5a47_2:;
wr(s->u,8,4,rd(s->r,176,4));
L_1803d5a47_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5a47_4:;
/* 1803d5a4e: mov eax, dword ptr [rsi + 0x6718] */
L_1803d5a4e_0:;
L_1803d5a4e_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6718))));
L_1803d5a4e_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a4e_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803d5a4e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5a4e_5:;
/* 1803d5a54: cmp dword ptr [rsi + 0x671c], eax */
L_1803d5a54_0:;
L_1803d5a54_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x671c))));
L_1803d5a54_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a54_3:;
wr(s->u,23,4,rd(s->u,12,4));
L_1803d5a54_4:;
wr(s->r,512,1,(rd(s->u,23,4)<rd(s->r,0,4)));
L_1803d5a54_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,4),rd(s->r,0,4),4,1));
L_1803d5a54_6:;
wr(s->u,27,4,(rd(s->u,23,4)-rd(s->r,0,4)));
L_1803d5a54_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5a54_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803d5a54_9:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803d5a54_10:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803d5a54_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5a54_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5a54_13:;
/* 1803d5a5a: jge 0x1803d5afc */
L_1803d5a5a_0:;
L_1803d5a5a_1:;
wr(s->u,16,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803d5a5a_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803d5afc);}
L_1803d5a5a_3:;
return UINT64_C(0x1803d5a60);
}
uint64_t b_1803d5a4e(CPU*s){
/* 1803d5a4e: mov eax, dword ptr [rsi + 0x6718] */
L_1803d5a4e_0:;
L_1803d5a4e_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6718))));
L_1803d5a4e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a4e_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803d5a4e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5a4e_5:;
/* 1803d5a54: cmp dword ptr [rsi + 0x671c], eax */
L_1803d5a54_0:;
L_1803d5a54_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x671c))));
L_1803d5a54_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a54_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803d5a54_4:;
wr(s->r,512,1,(rd(s->u,19,4)<rd(s->r,0,4)));
L_1803d5a54_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),rd(s->r,0,4),4,1));
L_1803d5a54_6:;
wr(s->u,23,4,(rd(s->u,19,4)-rd(s->r,0,4)));
L_1803d5a54_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5a54_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803d5a54_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803d5a54_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803d5a54_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803d5a54_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803d5a54_13:;
/* 1803d5a5a: jge 0x1803d5afc */
L_1803d5a5a_0:;
L_1803d5a5a_1:;
wr(s->u,12,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803d5a5a_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803d5afc);}
L_1803d5a5a_3:;
return UINT64_C(0x1803d5a60);
}
uint64_t b_1803d5a60(CPU*s){
/* 1803d5a60: cmp ebp, dword ptr [rsi + 0x6720] */
L_1803d5a60_0:;
L_1803d5a60_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6720))));
L_1803d5a60_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a60_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803d5a60_4:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,19,4)));
L_1803d5a60_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,19,4),4,1));
L_1803d5a60_6:;
wr(s->u,23,4,(rd(s->r,40,4)-rd(s->u,19,4)));
L_1803d5a60_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5a60_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803d5a60_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803d5a60_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803d5a60_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803d5a60_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803d5a60_13:;
/* 1803d5a66: jge 0x1803d5afc */
L_1803d5a66_0:;
L_1803d5a66_1:;
wr(s->u,12,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803d5a66_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803d5afc);}
L_1803d5a66_3:;
return UINT64_C(0x1803d5a6c);
}
uint64_t b_1803d5a6c(CPU*s){
/* 1803d5a6c: cmp dword ptr [rsi + 0x28], r14d */
L_1803d5a6c_0:;
L_1803d5a6c_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x28))));
L_1803d5a6c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a6c_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803d5a6c_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,176,4)));
L_1803d5a6c_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,176,4),4,1));
L_1803d5a6c_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,176,4)));
L_1803d5a6c_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5a6c_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803d5a6c_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803d5a6c_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803d5a6c_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803d5a6c_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803d5a6c_13:;
/* 1803d5a70: jle 0x1803d5abe */
L_1803d5a70_0:;
L_1803d5a70_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5a70_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803d5a70_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803d5abe);}
L_1803d5a70_4:;
return UINT64_C(0x1803d5a72);
}
uint64_t b_1803d5a72(CPU*s){
/* 1803d5a72: movsxd r11, dword ptr [rsi + 0x671c] */
L_1803d5a72_0:;
L_1803d5a72_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x671c))));
L_1803d5a72_2:;
wr(s->u,104,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803d5a72_3:;
wr(s->r,152,8,(U)sx(rd(s->u,104,4),4));
L_1803d5a72_4:;
/* 1803d5a79: mov r9d, dword ptr [rsi + 0x28] */
L_1803d5a79_0:;
L_1803d5a79_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x28))));
L_1803d5a79_2:;
wr(s->u,104,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5a79_3:;
wr(s->r,136,4,rd(s->u,104,4));
L_1803d5a79_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803d5a79_5:;
/* 1803d5a7d: movsxd r10, ebp */
L_1803d5a7d_0:;
L_1803d5a7d_1:;
wr(s->r,144,8,(U)sx(rd(s->r,40,4),4));
L_1803d5a7d_2:;
/* 1803d5a80: lea rdx, [rsi + 0x6730] */
L_1803d5a80_0:;
L_1803d5a80_1:;
wr(s->u,8,8,(rd(s->r,48,8)+((U)UINT64_C(0x6730))));
L_1803d5a80_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_1803d5a80_3:;
/* 1803d5a87: mov r8, r14 */
L_1803d5a87_0:;
L_1803d5a87_1:;
wr(s->r,128,8,rd(s->r,176,8));
L_1803d5a87_2:;
/* 1803d5a8a: nop word ptr [rax + rax] */
L_1803d5a8a_0:;
L_1803d5a8a_1:;
wr(s->u,56,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803d5a8a_2:;
wr(s->u,64,8,(rd(s->r,0,8)+rd(s->u,56,8)));
L_1803d5a8a_3:;
/* 1803d5a90: mov rax, qword ptr [rdx + 0x180] */
L_1803d5a90_0:;
L_1803d5a90_1:;
wr(s->u,8,8,(rd(s->r,16,8)+((U)UINT64_C(0x180))));
L_1803d5a90_2:;
wr(s->u,108,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d5a90_3:;
wr(s->r,0,8,rd(s->u,108,8));
L_1803d5a90_4:;
/* 1803d5a97: add r8, 8 */
L_1803d5a97_0:;
L_1803d5a97_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803d5a97_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803d5a97_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803d5a97_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5a97_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5a97_6:;
wr(s->u,117,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5a97_7:;
wr(s->u,125,1,pop(rd(s->u,117,8),8));
L_1803d5a97_8:;
wr(s->u,126,1,(rd(s->u,125,1)&((U)UINT64_C(0x1))));
L_1803d5a97_9:;
wr(s->r,514,1,(rd(s->u,126,1)==((U)UINT64_C(0x0))));
L_1803d5a97_10:;
/* 1803d5a9b: add rdx, 8 */
L_1803d5a9b_0:;
L_1803d5a9b_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803d5a9b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803d5a9b_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803d5a9b_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5a9b_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803d5a9b_6:;
wr(s->u,117,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803d5a9b_7:;
wr(s->u,125,1,pop(rd(s->u,117,8),8));
L_1803d5a9b_8:;
wr(s->u,126,1,(rd(s->u,125,1)&((U)UINT64_C(0x1))));
L_1803d5a9b_9:;
wr(s->r,514,1,(rd(s->u,126,1)==((U)UINT64_C(0x0))));
L_1803d5a9b_10:;
/* 1803d5a9f: sub r9, 1 */
L_1803d5a9f_0:;
L_1803d5a9f_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803d5a9f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803d5a9f_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803d5a9f_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5a9f_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803d5a9f_6:;
wr(s->u,117,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803d5a9f_7:;
wr(s->u,125,1,pop(rd(s->u,117,8),8));
L_1803d5a9f_8:;
wr(s->u,126,1,(rd(s->u,125,1)&((U)UINT64_C(0x1))));
L_1803d5a9f_9:;
wr(s->r,514,1,(rd(s->u,126,1)==((U)UINT64_C(0x0))));
L_1803d5a9f_10:;
/* 1803d5aa3: lea rcx, [rax + r10*4] */
L_1803d5aa3_0:;
L_1803d5aa3_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803d5aa3_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803d5aa3_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803d5aa3_4:;
/* 1803d5aa7: mov rax, qword ptr [rdx - 8] */
L_1803d5aa7_0:;
L_1803d5aa7_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5aa7_2:;
wr(s->u,108,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5aa7_3:;
wr(s->r,0,8,rd(s->u,108,8));
L_1803d5aa7_4:;
/* 1803d5aab: mov qword ptr [rsp + r8 + 0x198], rcx */
L_1803d5aab_0:;
L_1803d5aab_1:;
wr(s->u,72,8,(((U)UINT64_C(0x198))+rd(s->r,32,8)));
L_1803d5aab_2:;
wr(s->u,80,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803d5aab_3:;
wr(s->u,88,8,(rd(s->u,72,8)+rd(s->u,80,8)));
L_1803d5aab_4:;
wr(s->u,96,8,rd(s->r,8,8));
L_1803d5aab_5:;
mw((uint64_t)rd(s->u,88,8),8,rd(s->u,96,8));
L_1803d5aab_6:;
/* 1803d5ab3: lea rcx, [rax + r11*4] */
L_1803d5ab3_0:;
L_1803d5ab3_1:;
wr(s->u,16,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803d5ab3_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803d5ab3_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803d5ab3_4:;
/* 1803d5ab7: mov qword ptr [rsp + r8 + 0x18], rcx */
L_1803d5ab7_0:;
L_1803d5ab7_1:;
wr(s->u,32,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803d5ab7_2:;
wr(s->u,40,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803d5ab7_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803d5ab7_4:;
wr(s->u,96,8,rd(s->r,8,8));
L_1803d5ab7_5:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,96,8));
L_1803d5ab7_6:;
/* 1803d5abc: jne 0x1803d5a90 */
L_1803d5abc_0:;
L_1803d5abc_1:;
wr(s->u,116,1,(!rd(s->r,518,1)));
L_1803d5abc_2:;
if(rd(s->u,116,1)){goto L_1803d5a90_0;}
L_1803d5abc_3:;
return UINT64_C(0x1803d5abe);
}
uint64_t b_1803d5a90(CPU*s){
/* 1803d5a90: mov rax, qword ptr [rdx + 0x180] */
L_1803d5a90_0:;
L_1803d5a90_1:;
wr(s->u,8,8,(rd(s->r,16,8)+((U)UINT64_C(0x180))));
L_1803d5a90_2:;
wr(s->u,88,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d5a90_3:;
wr(s->r,0,8,rd(s->u,88,8));
L_1803d5a90_4:;
/* 1803d5a97: add r8, 8 */
L_1803d5a97_0:;
L_1803d5a97_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803d5a97_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803d5a97_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803d5a97_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5a97_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5a97_6:;
wr(s->u,97,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5a97_7:;
wr(s->u,105,1,pop(rd(s->u,97,8),8));
L_1803d5a97_8:;
wr(s->u,106,1,(rd(s->u,105,1)&((U)UINT64_C(0x1))));
L_1803d5a97_9:;
wr(s->r,514,1,(rd(s->u,106,1)==((U)UINT64_C(0x0))));
L_1803d5a97_10:;
/* 1803d5a9b: add rdx, 8 */
L_1803d5a9b_0:;
L_1803d5a9b_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803d5a9b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803d5a9b_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803d5a9b_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5a9b_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803d5a9b_6:;
wr(s->u,97,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803d5a9b_7:;
wr(s->u,105,1,pop(rd(s->u,97,8),8));
L_1803d5a9b_8:;
wr(s->u,106,1,(rd(s->u,105,1)&((U)UINT64_C(0x1))));
L_1803d5a9b_9:;
wr(s->r,514,1,(rd(s->u,106,1)==((U)UINT64_C(0x0))));
L_1803d5a9b_10:;
/* 1803d5a9f: sub r9, 1 */
L_1803d5a9f_0:;
L_1803d5a9f_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803d5a9f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803d5a9f_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803d5a9f_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5a9f_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803d5a9f_6:;
wr(s->u,97,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803d5a9f_7:;
wr(s->u,105,1,pop(rd(s->u,97,8),8));
L_1803d5a9f_8:;
wr(s->u,106,1,(rd(s->u,105,1)&((U)UINT64_C(0x1))));
L_1803d5a9f_9:;
wr(s->r,514,1,(rd(s->u,106,1)==((U)UINT64_C(0x0))));
L_1803d5a9f_10:;
/* 1803d5aa3: lea rcx, [rax + r10*4] */
L_1803d5aa3_0:;
L_1803d5aa3_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803d5aa3_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803d5aa3_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803d5aa3_4:;
/* 1803d5aa7: mov rax, qword ptr [rdx - 8] */
L_1803d5aa7_0:;
L_1803d5aa7_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5aa7_2:;
wr(s->u,88,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5aa7_3:;
wr(s->r,0,8,rd(s->u,88,8));
L_1803d5aa7_4:;
/* 1803d5aab: mov qword ptr [rsp + r8 + 0x198], rcx */
L_1803d5aab_0:;
L_1803d5aab_1:;
wr(s->u,56,8,(((U)UINT64_C(0x198))+rd(s->r,32,8)));
L_1803d5aab_2:;
wr(s->u,64,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803d5aab_3:;
wr(s->u,72,8,(rd(s->u,56,8)+rd(s->u,64,8)));
L_1803d5aab_4:;
wr(s->u,80,8,rd(s->r,8,8));
L_1803d5aab_5:;
mw((uint64_t)rd(s->u,72,8),8,rd(s->u,80,8));
L_1803d5aab_6:;
/* 1803d5ab3: lea rcx, [rax + r11*4] */
L_1803d5ab3_0:;
L_1803d5ab3_1:;
wr(s->u,16,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803d5ab3_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803d5ab3_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803d5ab3_4:;
/* 1803d5ab7: mov qword ptr [rsp + r8 + 0x18], rcx */
L_1803d5ab7_0:;
L_1803d5ab7_1:;
wr(s->u,32,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803d5ab7_2:;
wr(s->u,40,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803d5ab7_3:;
wr(s->u,48,8,(rd(s->u,32,8)+rd(s->u,40,8)));
L_1803d5ab7_4:;
wr(s->u,80,8,rd(s->r,8,8));
L_1803d5ab7_5:;
mw((uint64_t)rd(s->u,48,8),8,rd(s->u,80,8));
L_1803d5ab7_6:;
/* 1803d5abc: jne 0x1803d5a90 */
L_1803d5abc_0:;
L_1803d5abc_1:;
wr(s->u,96,1,(!rd(s->r,518,1)));
L_1803d5abc_2:;
if(rd(s->u,96,1)){goto L_1803d5a90_0;}
L_1803d5abc_3:;
return UINT64_C(0x1803d5abe);
}
uint64_t b_1803d5abe(CPU*s){
/* 1803d5abe: lea rcx, [rsi - 8] */
L_1803d5abe_0:;
L_1803d5abe_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5abe_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803d5abe_3:;
/* 1803d5ac2: call 0x1803dc570 */
L_1803d5ac2_0:;
L_1803d5ac2_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5ac2_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5ac7)));
L_1803d5ac2_3:;
return (uint64_t)UINT64_C(0x1803dc570);
L_1803d5ac2_4:;
return UINT64_C(0x1803d5ac7);
}
uint64_t b_1803d5ac7(CPU*s){
/* 1803d5ac7: lea r9, [rsp + 0x20] */
L_1803d5ac7_0:;
L_1803d5ac7_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803d5ac7_2:;
wr(s->r,136,8,rd(s->u,8,8));
L_1803d5ac7_3:;
/* 1803d5acc: lea rdx, [rsp + 0x1a0] */
L_1803d5acc_0:;
L_1803d5acc_1:;
wr(s->u,16,8,(((U)UINT64_C(0x1a0))+rd(s->r,32,8)));
L_1803d5acc_2:;
wr(s->r,16,8,rd(s->u,16,8));
L_1803d5acc_3:;
/* 1803d5ad4: lea rcx, [rsi - 8] */
L_1803d5ad4_0:;
L_1803d5ad4_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5ad4_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803d5ad4_3:;
/* 1803d5ad8: mov r8d, eax */
L_1803d5ad8_0:;
L_1803d5ad8_1:;
wr(s->r,128,4,rd(s->r,0,4));
L_1803d5ad8_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803d5ad8_3:;
/* 1803d5adb: mov edi, eax */
L_1803d5adb_0:;
L_1803d5adb_1:;
wr(s->r,56,4,rd(s->r,0,4));
L_1803d5adb_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803d5adb_3:;
/* 1803d5add: call 0x1803dbd60 */
L_1803d5add_0:;
L_1803d5add_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5add_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5ae2)));
L_1803d5add_3:;
return (uint64_t)UINT64_C(0x1803dbd60);
L_1803d5add_4:;
return UINT64_C(0x1803d5ae2);
}
uint64_t b_1803d5ae2(CPU*s){
/* 1803d5ae2: add ebp, edi */
L_1803d5ae2_0:;
L_1803d5ae2_1:;
wr(s->r,512,1,(((rd(s->r,40,4)+rd(s->r,56,4))&(((U)1<<32)-1))<rd(s->r,40,4)));
L_1803d5ae2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->r,56,4),4,0));
L_1803d5ae2_3:;
wr(s->r,40,4,(rd(s->r,40,4)+rd(s->r,56,4)));
L_1803d5ae2_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803d5ae2_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5ae2_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803d5ae2_7:;
wr(s->u,17,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803d5ae2_8:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803d5ae2_9:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5ae2_10:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5ae2_11:;
/* 1803d5ae4: add dword ptr [rsi + 0x671c], eax */
L_1803d5ae4_0:;
L_1803d5ae4_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x671c))));
L_1803d5ae4_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5ae4_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803d5ae4_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5ae4_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,0,4),4,0));
L_1803d5ae4_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5ae4_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,0,4)));
L_1803d5ae4_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5ae4_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5ae4_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5ae4_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5ae4_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803d5ae4_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5ae4_14:;
wr(s->u,17,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803d5ae4_15:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803d5ae4_16:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5ae4_17:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5ae4_18:;
/* 1803d5aea: mov eax, dword ptr [rsi + 0x6718] */
L_1803d5aea_0:;
L_1803d5aea_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6718))));
L_1803d5aea_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5aea_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803d5aea_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5aea_5:;
/* 1803d5af0: cmp dword ptr [rsi + 0x671c], eax */
L_1803d5af0_0:;
L_1803d5af0_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x671c))));
L_1803d5af0_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5af0_3:;
wr(s->u,23,4,rd(s->u,12,4));
L_1803d5af0_4:;
wr(s->r,512,1,(rd(s->u,23,4)<rd(s->r,0,4)));
L_1803d5af0_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,4),rd(s->r,0,4),4,1));
L_1803d5af0_6:;
wr(s->u,27,4,(rd(s->u,23,4)-rd(s->r,0,4)));
L_1803d5af0_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5af0_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803d5af0_9:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803d5af0_10:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803d5af0_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5af0_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5af0_13:;
/* 1803d5af6: jl 0x1803d5a60 */
L_1803d5af6_0:;
L_1803d5af6_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5af6_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803d5a60);}
L_1803d5af6_3:;
return UINT64_C(0x1803d5afc);
}
uint64_t b_1803d5afc(CPU*s){
/* 1803d5afc: mov eax, dword ptr [rsi + 0x6718] */
L_1803d5afc_0:;
L_1803d5afc_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6718))));
L_1803d5afc_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5afc_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803d5afc_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5afc_5:;
/* 1803d5b02: cmp dword ptr [rsi + 0x671c], eax */
L_1803d5b02_0:;
L_1803d5b02_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x671c))));
L_1803d5b02_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b02_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803d5b02_4:;
wr(s->r,512,1,(rd(s->u,19,4)<rd(s->r,0,4)));
L_1803d5b02_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,19,4),rd(s->r,0,4),4,1));
L_1803d5b02_6:;
wr(s->u,23,4,(rd(s->u,19,4)-rd(s->r,0,4)));
L_1803d5b02_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5b02_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803d5b02_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803d5b02_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803d5b02_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803d5b02_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803d5b02_13:;
/* 1803d5b08: jl 0x1803d5ba0 */
L_1803d5b08_0:;
L_1803d5b08_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5b08_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803d5ba0);}
L_1803d5b08_3:;
return UINT64_C(0x1803d5b0e);
}
uint64_t b_1803d5b0e(CPU*s){
/* 1803d5b0e: cmp dword ptr [rsi + 0x28], r14d */
L_1803d5b0e_0:;
L_1803d5b0e_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x28))));
L_1803d5b0e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b0e_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803d5b0e_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,176,4)));
L_1803d5b0e_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,176,4),4,1));
L_1803d5b0e_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,176,4)));
L_1803d5b0e_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5b0e_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803d5b0e_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803d5b0e_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803d5b0e_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803d5b0e_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803d5b0e_13:;
/* 1803d5b12: jle 0x1803d5b8a */
L_1803d5b12_0:;
L_1803d5b12_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5b12_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803d5b12_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803d5b8a);}
L_1803d5b12_4:;
return UINT64_C(0x1803d5b14);
}
uint64_t b_1803d5b14(CPU*s){
/* 1803d5b14: movsxd rdi, ebp */
L_1803d5b14_0:;
L_1803d5b14_1:;
wr(s->r,56,8,(U)sx(rd(s->r,40,4),4));
L_1803d5b14_2:;
/* 1803d5b17: lea rbx, [rsi + 0x6730] */
L_1803d5b17_0:;
L_1803d5b17_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x6730))));
L_1803d5b17_2:;
wr(s->r,24,8,rd(s->u,5,8));
L_1803d5b17_3:;
/* 1803d5b1e: nop  */
L_1803d5b1e_0:;
L_1803d5b1e_1:;
/* 1803d5b20: movsxd r8, dword ptr [rsi + 0x6718] */
L_1803d5b20_0:;
L_1803d5b20_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x6718))));
L_1803d5b20_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5b20_3:;
wr(s->r,128,8,(U)sx(rd(s->u,13,4),4));
L_1803d5b20_4:;
/* 1803d5b27: mov rdx, qword ptr [rbx] */
L_1803d5b27_0:;
L_1803d5b27_1:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803d5b27_2:;
wr(s->r,16,8,rd(s->u,17,8));
L_1803d5b27_3:;
/* 1803d5b2a: mov rcx, qword ptr [r13] */
L_1803d5b2a_0:;
L_1803d5b2a_1:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,168,8),8));
L_1803d5b2a_2:;
wr(s->r,8,8,rd(s->u,17,8));
L_1803d5b2a_3:;
/* 1803d5b2e: shl r8, 2 */
L_1803d5b2e_0:;
L_1803d5b2e_1:;
wr(s->u,65,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d5b2e_2:;
wr(s->u,69,8,rd(s->r,128,8));
L_1803d5b2e_3:;
wr(s->r,128,8,((rd(s->u,65,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,65,4))));
L_1803d5b2e_4:;
wr(s->u,48,1,(rd(s->u,65,4)==((U)UINT64_C(0x0))));
L_1803d5b2e_5:;
wr(s->u,49,4,(rd(s->u,65,4)-((U)UINT64_C(0x1))));
L_1803d5b2e_6:;
wr(s->u,53,8,((rd(s->u,49,4)>=64)?0:(rd(s->u,69,8)<<rd(s->u,49,4))));
L_1803d5b2e_7:;
wr(s->u,61,1,(sx(rd(s->u,53,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b2e_8:;
wr(s->u,0,1,rd(s->u,48,1));
L_1803d5b2e_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d5b2e_10:;
wr(s->u,2,1,(!rd(s->u,48,1)));
L_1803d5b2e_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5b2e_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,61,1)));
L_1803d5b2e_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5b2e_14:;
wr(s->u,62,1,(rd(s->u,65,4)==((U)UINT64_C(0x1))));
L_1803d5b2e_15:;
wr(s->u,63,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b2e_16:;
wr(s->u,64,1,(rd(s->r,512,1)^rd(s->u,63,1)));
L_1803d5b2e_17:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803d5b2e_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,64,1)));
L_1803d5b2e_19:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803d5b2e_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5b2e_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d5b2e_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5b2e_23:;
wr(s->u,25,1,(rd(s->u,65,4)!=((U)UINT64_C(0x0))));
L_1803d5b2e_24:;
wr(s->u,26,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b2e_25:;
wr(s->u,27,1,(!rd(s->u,25,1)));
L_1803d5b2e_26:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,519,1)));
L_1803d5b2e_27:;
wr(s->u,29,1,(rd(s->u,25,1)&rd(s->u,26,1)));
L_1803d5b2e_28:;
wr(s->r,519,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803d5b2e_29:;
wr(s->u,30,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5b2e_30:;
wr(s->u,31,1,(!rd(s->u,25,1)));
L_1803d5b2e_31:;
wr(s->u,32,1,(rd(s->u,31,1)&rd(s->r,518,1)));
L_1803d5b2e_32:;
wr(s->u,33,1,(rd(s->u,25,1)&rd(s->u,30,1)));
L_1803d5b2e_33:;
wr(s->r,518,1,(rd(s->u,32,1)|rd(s->u,33,1)));
L_1803d5b2e_34:;
wr(s->u,34,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5b2e_35:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803d5b2e_36:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803d5b2e_37:;
wr(s->u,44,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803d5b2e_38:;
wr(s->u,45,1,(!rd(s->u,25,1)));
L_1803d5b2e_39:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,514,1)));
L_1803d5b2e_40:;
wr(s->u,47,1,(rd(s->u,25,1)&rd(s->u,44,1)));
L_1803d5b2e_41:;
wr(s->r,514,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803d5b2e_42:;
/* 1803d5b32: call 0x18000d550 */
L_1803d5b32_0:;
L_1803d5b32_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5b32_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5b37)));
L_1803d5b32_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803d5b32_4:;
return UINT64_C(0x1803d5b37);
}
uint64_t b_1803d5b20(CPU*s){
/* 1803d5b20: movsxd r8, dword ptr [rsi + 0x6718] */
L_1803d5b20_0:;
L_1803d5b20_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x6718))));
L_1803d5b20_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5b20_3:;
wr(s->r,128,8,(U)sx(rd(s->u,13,4),4));
L_1803d5b20_4:;
/* 1803d5b27: mov rdx, qword ptr [rbx] */
L_1803d5b27_0:;
L_1803d5b27_1:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803d5b27_2:;
wr(s->r,16,8,rd(s->u,17,8));
L_1803d5b27_3:;
/* 1803d5b2a: mov rcx, qword ptr [r13] */
L_1803d5b2a_0:;
L_1803d5b2a_1:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,168,8),8));
L_1803d5b2a_2:;
wr(s->r,8,8,rd(s->u,17,8));
L_1803d5b2a_3:;
/* 1803d5b2e: shl r8, 2 */
L_1803d5b2e_0:;
L_1803d5b2e_1:;
wr(s->u,65,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d5b2e_2:;
wr(s->u,69,8,rd(s->r,128,8));
L_1803d5b2e_3:;
wr(s->r,128,8,((rd(s->u,65,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,65,4))));
L_1803d5b2e_4:;
wr(s->u,48,1,(rd(s->u,65,4)==((U)UINT64_C(0x0))));
L_1803d5b2e_5:;
wr(s->u,49,4,(rd(s->u,65,4)-((U)UINT64_C(0x1))));
L_1803d5b2e_6:;
wr(s->u,53,8,((rd(s->u,49,4)>=64)?0:(rd(s->u,69,8)<<rd(s->u,49,4))));
L_1803d5b2e_7:;
wr(s->u,61,1,(sx(rd(s->u,53,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b2e_8:;
wr(s->u,0,1,rd(s->u,48,1));
L_1803d5b2e_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d5b2e_10:;
wr(s->u,2,1,(!rd(s->u,48,1)));
L_1803d5b2e_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5b2e_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,61,1)));
L_1803d5b2e_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5b2e_14:;
wr(s->u,62,1,(rd(s->u,65,4)==((U)UINT64_C(0x1))));
L_1803d5b2e_15:;
wr(s->u,63,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b2e_16:;
wr(s->u,64,1,(rd(s->r,512,1)^rd(s->u,63,1)));
L_1803d5b2e_17:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803d5b2e_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,64,1)));
L_1803d5b2e_19:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803d5b2e_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5b2e_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d5b2e_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5b2e_23:;
wr(s->u,25,1,(rd(s->u,65,4)!=((U)UINT64_C(0x0))));
L_1803d5b2e_24:;
wr(s->u,26,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b2e_25:;
wr(s->u,27,1,(!rd(s->u,25,1)));
L_1803d5b2e_26:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,519,1)));
L_1803d5b2e_27:;
wr(s->u,29,1,(rd(s->u,25,1)&rd(s->u,26,1)));
L_1803d5b2e_28:;
wr(s->r,519,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803d5b2e_29:;
wr(s->u,30,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5b2e_30:;
wr(s->u,31,1,(!rd(s->u,25,1)));
L_1803d5b2e_31:;
wr(s->u,32,1,(rd(s->u,31,1)&rd(s->r,518,1)));
L_1803d5b2e_32:;
wr(s->u,33,1,(rd(s->u,25,1)&rd(s->u,30,1)));
L_1803d5b2e_33:;
wr(s->r,518,1,(rd(s->u,32,1)|rd(s->u,33,1)));
L_1803d5b2e_34:;
wr(s->u,34,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5b2e_35:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803d5b2e_36:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803d5b2e_37:;
wr(s->u,44,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803d5b2e_38:;
wr(s->u,45,1,(!rd(s->u,25,1)));
L_1803d5b2e_39:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,514,1)));
L_1803d5b2e_40:;
wr(s->u,47,1,(rd(s->u,25,1)&rd(s->u,44,1)));
L_1803d5b2e_41:;
wr(s->r,514,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803d5b2e_42:;
/* 1803d5b32: call 0x18000d550 */
L_1803d5b32_0:;
L_1803d5b32_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5b32_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5b37)));
L_1803d5b32_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803d5b32_4:;
return UINT64_C(0x1803d5b37);
}
uint64_t b_1803d5b37(CPU*s){
/* 1803d5b37: movsxd r11, dword ptr [rsi + 0x6718] */
L_1803d5b37_0:;
L_1803d5b37_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x6718))));
L_1803d5b37_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5b37_3:;
wr(s->r,152,8,(U)sx(rd(s->u,29,4),4));
L_1803d5b37_4:;
/* 1803d5b3e: mov eax, dword ptr [rsi + 0x671c] */
L_1803d5b3e_0:;
L_1803d5b3e_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x671c))));
L_1803d5b3e_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5b3e_3:;
wr(s->r,0,4,rd(s->u,29,4));
L_1803d5b3e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5b3e_5:;
/* 1803d5b44: mov rcx, qword ptr [rbx] */
L_1803d5b44_0:;
L_1803d5b44_1:;
wr(s->u,33,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803d5b44_2:;
wr(s->r,8,8,rd(s->u,33,8));
L_1803d5b44_3:;
/* 1803d5b47: sub eax, r11d */
L_1803d5b47_0:;
L_1803d5b47_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,152,4)));
L_1803d5b47_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,152,4),4,1));
L_1803d5b47_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,152,4)));
L_1803d5b47_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5b47_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5b47_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5b47_7:;
wr(s->u,41,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5b47_8:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803d5b47_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803d5b47_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803d5b47_11:;
/* 1803d5b4a: movsxd r8, eax */
L_1803d5b4a_0:;
L_1803d5b4a_1:;
wr(s->r,128,8,(U)sx(rd(s->r,0,4),4));
L_1803d5b4a_2:;
/* 1803d5b4d: lea rdx, [rcx + r11*4] */
L_1803d5b4d_0:;
L_1803d5b4d_1:;
wr(s->u,13,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803d5b4d_2:;
wr(s->u,21,8,(rd(s->r,8,8)+rd(s->u,13,8)));
L_1803d5b4d_3:;
wr(s->r,16,8,rd(s->u,21,8));
L_1803d5b4d_4:;
/* 1803d5b51: shl r8, 2 */
L_1803d5b51_0:;
L_1803d5b51_1:;
wr(s->u,87,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d5b51_2:;
wr(s->u,91,8,rd(s->r,128,8));
L_1803d5b51_3:;
wr(s->r,128,8,((rd(s->u,87,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,87,4))));
L_1803d5b51_4:;
wr(s->u,70,1,(rd(s->u,87,4)==((U)UINT64_C(0x0))));
L_1803d5b51_5:;
wr(s->u,71,4,(rd(s->u,87,4)-((U)UINT64_C(0x1))));
L_1803d5b51_6:;
wr(s->u,75,8,((rd(s->u,71,4)>=64)?0:(rd(s->u,91,8)<<rd(s->u,71,4))));
L_1803d5b51_7:;
wr(s->u,83,1,(sx(rd(s->u,75,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b51_8:;
wr(s->u,0,1,rd(s->u,70,1));
L_1803d5b51_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d5b51_10:;
wr(s->u,2,1,(!rd(s->u,70,1)));
L_1803d5b51_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5b51_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,83,1)));
L_1803d5b51_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5b51_14:;
wr(s->u,84,1,(rd(s->u,87,4)==((U)UINT64_C(0x1))));
L_1803d5b51_15:;
wr(s->u,85,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b51_16:;
wr(s->u,86,1,(rd(s->r,512,1)^rd(s->u,85,1)));
L_1803d5b51_17:;
wr(s->u,0,1,rd(s->u,84,1));
L_1803d5b51_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,86,1)));
L_1803d5b51_19:;
wr(s->u,2,1,(!rd(s->u,84,1)));
L_1803d5b51_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5b51_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d5b51_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5b51_23:;
wr(s->u,47,1,(rd(s->u,87,4)!=((U)UINT64_C(0x0))));
L_1803d5b51_24:;
wr(s->u,48,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b51_25:;
wr(s->u,49,1,(!rd(s->u,47,1)));
L_1803d5b51_26:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,519,1)));
L_1803d5b51_27:;
wr(s->u,51,1,(rd(s->u,47,1)&rd(s->u,48,1)));
L_1803d5b51_28:;
wr(s->r,519,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803d5b51_29:;
wr(s->u,52,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5b51_30:;
wr(s->u,53,1,(!rd(s->u,47,1)));
L_1803d5b51_31:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,518,1)));
L_1803d5b51_32:;
wr(s->u,55,1,(rd(s->u,47,1)&rd(s->u,52,1)));
L_1803d5b51_33:;
wr(s->r,518,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803d5b51_34:;
wr(s->u,56,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5b51_35:;
wr(s->u,64,1,pop(rd(s->u,56,8),8));
L_1803d5b51_36:;
wr(s->u,65,1,(rd(s->u,64,1)&((U)UINT64_C(0x1))));
L_1803d5b51_37:;
wr(s->u,66,1,(rd(s->u,65,1)==((U)UINT64_C(0x0))));
L_1803d5b51_38:;
wr(s->u,67,1,(!rd(s->u,47,1)));
L_1803d5b51_39:;
wr(s->u,68,1,(rd(s->u,67,1)&rd(s->r,514,1)));
L_1803d5b51_40:;
wr(s->u,69,1,(rd(s->u,47,1)&rd(s->u,66,1)));
L_1803d5b51_41:;
wr(s->r,514,1,(rd(s->u,68,1)|rd(s->u,69,1)));
L_1803d5b51_42:;
/* 1803d5b55: call 0x180609ade */
L_1803d5b55_0:;
L_1803d5b55_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5b55_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5b5a)));
L_1803d5b55_3:;
return (uint64_t)UINT64_C(0x180609ade);
L_1803d5b55_4:;
return UINT64_C(0x1803d5b5a);
}
uint64_t b_1803d5b5a(CPU*s){
/* 1803d5b5a: mov eax, dword ptr [rsi + 0x6720] */
L_1803d5b5a_0:;
L_1803d5b5a_1:;
wr(s->u,5,8,(rd(s->r,48,8)+((U)UINT64_C(0x6720))));
L_1803d5b5a_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5b5a_3:;
wr(s->r,0,4,rd(s->u,29,4));
L_1803d5b5a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5b5a_5:;
/* 1803d5b60: mov rcx, qword ptr [rbx + 0x180] */
L_1803d5b60_0:;
L_1803d5b60_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x180))));
L_1803d5b60_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,5,8),8));
L_1803d5b60_3:;
wr(s->r,8,8,rd(s->u,33,8));
L_1803d5b60_4:;
/* 1803d5b67: sub eax, ebp */
L_1803d5b67_0:;
L_1803d5b67_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,40,4)));
L_1803d5b67_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,40,4),4,1));
L_1803d5b67_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,40,4)));
L_1803d5b67_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5b67_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5b67_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5b67_7:;
wr(s->u,41,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5b67_8:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803d5b67_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803d5b67_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803d5b67_11:;
/* 1803d5b69: lea rdx, [rcx + rdi*4] */
L_1803d5b69_0:;
L_1803d5b69_1:;
wr(s->u,13,8,(rd(s->r,56,8)*((U)UINT64_C(0x4))));
L_1803d5b69_2:;
wr(s->u,21,8,(rd(s->r,8,8)+rd(s->u,13,8)));
L_1803d5b69_3:;
wr(s->r,16,8,rd(s->u,21,8));
L_1803d5b69_4:;
/* 1803d5b6d: movsxd r8, eax */
L_1803d5b6d_0:;
L_1803d5b6d_1:;
wr(s->r,128,8,(U)sx(rd(s->r,0,4),4));
L_1803d5b6d_2:;
/* 1803d5b70: shl r8, 2 */
L_1803d5b70_0:;
L_1803d5b70_1:;
wr(s->u,87,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d5b70_2:;
wr(s->u,91,8,rd(s->r,128,8));
L_1803d5b70_3:;
wr(s->r,128,8,((rd(s->u,87,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,87,4))));
L_1803d5b70_4:;
wr(s->u,70,1,(rd(s->u,87,4)==((U)UINT64_C(0x0))));
L_1803d5b70_5:;
wr(s->u,71,4,(rd(s->u,87,4)-((U)UINT64_C(0x1))));
L_1803d5b70_6:;
wr(s->u,75,8,((rd(s->u,71,4)>=64)?0:(rd(s->u,91,8)<<rd(s->u,71,4))));
L_1803d5b70_7:;
wr(s->u,83,1,(sx(rd(s->u,75,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b70_8:;
wr(s->u,0,1,rd(s->u,70,1));
L_1803d5b70_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d5b70_10:;
wr(s->u,2,1,(!rd(s->u,70,1)));
L_1803d5b70_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5b70_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,83,1)));
L_1803d5b70_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5b70_14:;
wr(s->u,84,1,(rd(s->u,87,4)==((U)UINT64_C(0x1))));
L_1803d5b70_15:;
wr(s->u,85,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b70_16:;
wr(s->u,86,1,(rd(s->r,512,1)^rd(s->u,85,1)));
L_1803d5b70_17:;
wr(s->u,0,1,rd(s->u,84,1));
L_1803d5b70_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,86,1)));
L_1803d5b70_19:;
wr(s->u,2,1,(!rd(s->u,84,1)));
L_1803d5b70_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5b70_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d5b70_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5b70_23:;
wr(s->u,47,1,(rd(s->u,87,4)!=((U)UINT64_C(0x0))));
L_1803d5b70_24:;
wr(s->u,48,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b70_25:;
wr(s->u,49,1,(!rd(s->u,47,1)));
L_1803d5b70_26:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,519,1)));
L_1803d5b70_27:;
wr(s->u,51,1,(rd(s->u,47,1)&rd(s->u,48,1)));
L_1803d5b70_28:;
wr(s->r,519,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803d5b70_29:;
wr(s->u,52,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5b70_30:;
wr(s->u,53,1,(!rd(s->u,47,1)));
L_1803d5b70_31:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,518,1)));
L_1803d5b70_32:;
wr(s->u,55,1,(rd(s->u,47,1)&rd(s->u,52,1)));
L_1803d5b70_33:;
wr(s->r,518,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803d5b70_34:;
wr(s->u,56,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5b70_35:;
wr(s->u,64,1,pop(rd(s->u,56,8),8));
L_1803d5b70_36:;
wr(s->u,65,1,(rd(s->u,64,1)&((U)UINT64_C(0x1))));
L_1803d5b70_37:;
wr(s->u,66,1,(rd(s->u,65,1)==((U)UINT64_C(0x0))));
L_1803d5b70_38:;
wr(s->u,67,1,(!rd(s->u,47,1)));
L_1803d5b70_39:;
wr(s->u,68,1,(rd(s->u,67,1)&rd(s->r,514,1)));
L_1803d5b70_40:;
wr(s->u,69,1,(rd(s->u,47,1)&rd(s->u,66,1)));
L_1803d5b70_41:;
wr(s->r,514,1,(rd(s->u,68,1)|rd(s->u,69,1)));
L_1803d5b70_42:;
/* 1803d5b74: call 0x180609ade */
L_1803d5b74_0:;
L_1803d5b74_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5b74_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5b79)));
L_1803d5b74_3:;
return (uint64_t)UINT64_C(0x180609ade);
L_1803d5b74_4:;
return UINT64_C(0x1803d5b79);
}
uint64_t b_1803d5b79(CPU*s){
/* 1803d5b79: inc r14d */
L_1803d5b79_0:;
L_1803d5b79_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,4),((U)UINT64_C(0x1)),4,0));
L_1803d5b79_2:;
wr(s->r,176,4,(rd(s->r,176,4)+((U)UINT64_C(0x1))));
L_1803d5b79_3:;
wr(s->r,176,8,rd(s->r,176,4));
L_1803d5b79_4:;
wr(s->r,519,1,(sx(rd(s->r,176,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5b79_5:;
wr(s->r,518,1,(rd(s->r,176,4)==((U)UINT64_C(0x0))));
L_1803d5b79_6:;
wr(s->u,13,4,(rd(s->r,176,4)&((U)UINT64_C(0xff))));
L_1803d5b79_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803d5b79_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5b79_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5b79_10:;
/* 1803d5b7c: add r13, 8 */
L_1803d5b7c_0:;
L_1803d5b7c_1:;
wr(s->r,512,1,(((rd(s->r,168,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,168,8)));
L_1803d5b7c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,8),((U)UINT64_C(0x8)),8,0));
L_1803d5b7c_3:;
wr(s->r,168,8,(rd(s->r,168,8)+((U)UINT64_C(0x8))));
L_1803d5b7c_4:;
wr(s->r,519,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b7c_5:;
wr(s->r,518,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803d5b7c_6:;
wr(s->u,13,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803d5b7c_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803d5b7c_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5b7c_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5b7c_10:;
/* 1803d5b80: add rbx, 8 */
L_1803d5b80_0:;
L_1803d5b80_1:;
wr(s->r,512,1,(((rd(s->r,24,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,24,8)));
L_1803d5b80_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x8)),8,0));
L_1803d5b80_3:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1803d5b80_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5b80_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803d5b80_6:;
wr(s->u,13,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803d5b80_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803d5b80_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5b80_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5b80_10:;
/* 1803d5b84: cmp r14d, dword ptr [rsi + 0x28] */
L_1803d5b84_0:;
L_1803d5b84_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x28))));
L_1803d5b84_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b84_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803d5b84_4:;
wr(s->r,512,1,(rd(s->r,176,4)<rd(s->u,23,4)));
L_1803d5b84_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,176,4),rd(s->u,23,4),4,1));
L_1803d5b84_6:;
wr(s->u,27,4,(rd(s->r,176,4)-rd(s->u,23,4)));
L_1803d5b84_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5b84_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803d5b84_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803d5b84_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803d5b84_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5b84_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5b84_13:;
/* 1803d5b88: jl 0x1803d5b20 */
L_1803d5b88_0:;
L_1803d5b88_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5b88_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803d5b20);}
L_1803d5b88_3:;
return UINT64_C(0x1803d5b8a);
}
uint64_t b_1803d5b8a(CPU*s){
/* 1803d5b8a: mov eax, dword ptr [rsi + 0x6718] */
L_1803d5b8a_0:;
L_1803d5b8a_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6718))));
L_1803d5b8a_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b8a_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803d5b8a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5b8a_5:;
/* 1803d5b90: sub dword ptr [rsi + 0x6720], ebp */
L_1803d5b90_0:;
L_1803d5b90_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x6720))));
L_1803d5b90_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b90_3:;
wr(s->r,512,1,(rd(s->u,8,4)<rd(s->r,40,4)));
L_1803d5b90_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b90_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,40,4),4,1));
L_1803d5b90_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b90_7:;
wr(s->u,8,4,(rd(s->u,8,4)-rd(s->r,40,4)));
L_1803d5b90_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5b90_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b90_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5b90_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b90_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803d5b90_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b90_14:;
wr(s->u,16,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803d5b90_15:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803d5b90_16:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803d5b90_17:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803d5b90_18:;
/* 1803d5b96: sub dword ptr [rsi + 0x671c], eax */
L_1803d5b96_0:;
L_1803d5b96_1:;
wr(s->u,0,8,(rd(s->r,48,8)+((U)UINT64_C(0x671c))));
L_1803d5b96_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b96_3:;
wr(s->r,512,1,(rd(s->u,8,4)<rd(s->r,0,4)));
L_1803d5b96_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b96_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,0,4),4,1));
L_1803d5b96_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b96_7:;
wr(s->u,8,4,(rd(s->u,8,4)-rd(s->r,0,4)));
L_1803d5b96_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5b96_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b96_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5b96_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b96_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803d5b96_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5b96_14:;
wr(s->u,16,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803d5b96_15:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803d5b96_16:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803d5b96_17:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803d5b96_18:;
/* 1803d5b9c: xor eax, eax */
L_1803d5b9c_0:;
L_1803d5b9c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5b9c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5b9c_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803d5b9c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5b9c_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5b9c_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5b9c_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5b9c_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803d5b9c_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803d5b9c_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803d5b9c_11:;
/* 1803d5b9e: jmp 0x1803d5ba3 */
L_1803d5b9e_0:;
L_1803d5b9e_1:;
return UINT64_C(0x1803d5ba3);
L_1803d5b9e_2:;
return UINT64_C(0x1803d5ba0);
}
uint64_t b_1803d5ba0(CPU*s){
/* 1803d5ba0: or eax, 0xffffffff */
L_1803d5ba0_0:;
L_1803d5ba0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5ba0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5ba0_3:;
wr(s->r,0,4,(rd(s->r,0,4)|((U)UINT64_C(0xffffffff))));
L_1803d5ba0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5ba0_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5ba0_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5ba0_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5ba0_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803d5ba0_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5ba0_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5ba0_11:;
/* 1803d5ba3: mov rbx, qword ptr [rsp + 0x360] */
L_1803d5ba3_0:;
L_1803d5ba3_1:;
wr(s->u,0,8,(((U)UINT64_C(0x360))+rd(s->r,32,8)));
L_1803d5ba3_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5ba3_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803d5ba3_4:;
/* 1803d5bab: add rsp, 0x320 */
L_1803d5bab_0:;
L_1803d5bab_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x320)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5bab_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x320)),8,0));
L_1803d5bab_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x320))));
L_1803d5bab_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5bab_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5bab_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5bab_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d5bab_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5bab_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5bab_10:;
/* 1803d5bb2: pop r14 */
L_1803d5bb2_0:;
L_1803d5bb2_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5bb2_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5bb2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5bb2_4:;
wr(s->r,176,8,rd(s->u,26,8));
L_1803d5bb2_5:;
/* 1803d5bb4: pop r13 */
L_1803d5bb4_0:;
L_1803d5bb4_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5bb4_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5bb4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5bb4_4:;
wr(s->r,168,8,rd(s->u,26,8));
L_1803d5bb4_5:;
/* 1803d5bb6: pop rdi */
L_1803d5bb6_0:;
L_1803d5bb6_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5bb6_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5bb6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5bb6_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803d5bb6_5:;
/* 1803d5bb7: pop rsi */
L_1803d5bb7_0:;
L_1803d5bb7_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5bb7_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5bb7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5bb7_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803d5bb7_5:;
/* 1803d5bb8: pop rbp */
L_1803d5bb8_0:;
L_1803d5bb8_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5bb8_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5bb8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5bb8_4:;
wr(s->r,40,8,rd(s->u,26,8));
L_1803d5bb8_5:;
/* 1803d5bb9: ret  */
L_1803d5bb9_0:;
L_1803d5bb9_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5bb9_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5bb9_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5bb9_4:;
return UINT64_C(0x1803d5bba);
}
uint64_t b_1803d5ba3(CPU*s){
/* 1803d5ba3: mov rbx, qword ptr [rsp + 0x360] */
L_1803d5ba3_0:;
L_1803d5ba3_1:;
wr(s->u,0,8,(((U)UINT64_C(0x360))+rd(s->r,32,8)));
L_1803d5ba3_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5ba3_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803d5ba3_4:;
/* 1803d5bab: add rsp, 0x320 */
L_1803d5bab_0:;
L_1803d5bab_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x320)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5bab_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x320)),8,0));
L_1803d5bab_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x320))));
L_1803d5bab_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5bab_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5bab_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5bab_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d5bab_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5bab_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5bab_10:;
/* 1803d5bb2: pop r14 */
L_1803d5bb2_0:;
L_1803d5bb2_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5bb2_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5bb2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5bb2_4:;
wr(s->r,176,8,rd(s->u,26,8));
L_1803d5bb2_5:;
/* 1803d5bb4: pop r13 */
L_1803d5bb4_0:;
L_1803d5bb4_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5bb4_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5bb4_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5bb4_4:;
wr(s->r,168,8,rd(s->u,26,8));
L_1803d5bb4_5:;
/* 1803d5bb6: pop rdi */
L_1803d5bb6_0:;
L_1803d5bb6_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5bb6_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5bb6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5bb6_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803d5bb6_5:;
/* 1803d5bb7: pop rsi */
L_1803d5bb7_0:;
L_1803d5bb7_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5bb7_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5bb7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5bb7_4:;
wr(s->r,48,8,rd(s->u,26,8));
L_1803d5bb7_5:;
/* 1803d5bb8: pop rbp */
L_1803d5bb8_0:;
L_1803d5bb8_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5bb8_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5bb8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5bb8_4:;
wr(s->r,40,8,rd(s->u,26,8));
L_1803d5bb8_5:;
/* 1803d5bb9: ret  */
L_1803d5bb9_0:;
L_1803d5bb9_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5bb9_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5bb9_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5bb9_4:;
return UINT64_C(0x1803d5bba);
}
uint64_t b_1803d5bc0(CPU*s){
/* 1803d5bc0: mov eax, dword ptr [rcx + 0x671c] */
L_1803d5bc0_0:;
L_1803d5bc0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x671c))));
L_1803d5bc0_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5bc0_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803d5bc0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5bc0_5:;
/* 1803d5bc6: ret  */
L_1803d5bc6_0:;
L_1803d5bc6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5bc6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5bc6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5bc6_4:;
return UINT64_C(0x1803d5bc7);
}
uint64_t b_1803d5bd0(CPU*s){
/* 1803d5bd0: mov rax, qword ptr [rcx - 8] */
L_1803d5bd0_0:;
L_1803d5bd0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5bd0_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5bd0_3:;
wr(s->r,0,8,rd(s->u,20,8));
L_1803d5bd0_4:;
/* 1803d5bd4: mov dword ptr [rcx + 0x6718], edx */
L_1803d5bd4_0:;
L_1803d5bd4_1:;
wr(s->u,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x6718))));
L_1803d5bd4_2:;
wr(s->u,16,4,rd(s->r,16,4));
L_1803d5bd4_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803d5bd4_4:;
/* 1803d5bda: add rcx, -8 */
L_1803d5bda_0:;
L_1803d5bda_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803d5bda_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0xfffffffffffffff8)),8,0));
L_1803d5bda_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5bda_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5bda_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803d5bda_6:;
wr(s->u,28,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803d5bda_7:;
wr(s->u,36,1,pop(rd(s->u,28,8),8));
L_1803d5bda_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803d5bda_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803d5bda_10:;
/* 1803d5bde: jmp qword ptr [rax + 0x50] */
L_1803d5bde_0:;
L_1803d5bde_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x50))));
L_1803d5bde_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5bde_3:;
return (uint64_t)rd(s->u,20,8);
L_1803d5bde_4:;
return UINT64_C(0x1803d5be2);
}
uint64_t b_1803d5bf0(CPU*s){
/* 1803d5bf0: mov qword ptr [rsp + 8], rbx */
L_1803d5bf0_0:;
L_1803d5bf0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1803d5bf0_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803d5bf0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d5bf0_4:;
/* 1803d5bf5: mov qword ptr [rsp + 0x10], rbp */
L_1803d5bf5_0:;
L_1803d5bf5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803d5bf5_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1803d5bf5_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d5bf5_4:;
/* 1803d5bfa: mov qword ptr [rsp + 0x18], rsi */
L_1803d5bfa_0:;
L_1803d5bfa_1:;
wr(s->u,0,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803d5bfa_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803d5bfa_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803d5bfa_4:;
/* 1803d5bff: push rdi */
L_1803d5bff_0:;
L_1803d5bff_1:;
wr(s->u,32,8,rd(s->r,56,8));
L_1803d5bff_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5bff_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,32,8));
L_1803d5bff_4:;
/* 1803d5c00: sub rsp, 0x30 */
L_1803d5c00_0:;
L_1803d5c00_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803d5c00_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803d5c00_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803d5c00_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5c00_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5c00_6:;
wr(s->u,40,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5c00_7:;
wr(s->u,48,1,pop(rd(s->u,40,8),8));
L_1803d5c00_8:;
wr(s->u,49,1,(rd(s->u,48,1)&((U)UINT64_C(0x1))));
L_1803d5c00_9:;
wr(s->r,514,1,(rd(s->u,49,1)==((U)UINT64_C(0x0))));
L_1803d5c00_10:;
/* 1803d5c04: movaps xmmword ptr [rsp + 0x20], xmm6 */
L_1803d5c04_0:;
L_1803d5c04_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803d5c04_2:;
wr(s->u,16,16,rd(s->r,4992,16));
L_1803d5c04_3:;
mw((uint64_t)rd(s->u,0,8),16,rd(s->u,16,16));
L_1803d5c04_4:;
/* 1803d5c09: mov rbx, rcx */
L_1803d5c09_0:;
L_1803d5c09_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803d5c09_2:;
/* 1803d5c0c: call 0x1803db510 */
L_1803d5c0c_0:;
L_1803d5c0c_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5c0c_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5c11)));
L_1803d5c0c_3:;
return (uint64_t)UINT64_C(0x1803db510);
L_1803d5c0c_4:;
return UINT64_C(0x1803d5c11);
}
uint64_t b_1803d5c11(CPU*s){
/* 1803d5c11: mov esi, dword ptr [rbx + 0x3c] */
L_1803d5c11_0:;
L_1803d5c11_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x3c))));
L_1803d5c11_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c11_3:;
wr(s->r,48,4,rd(s->u,16,4));
L_1803d5c11_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803d5c11_5:;
/* 1803d5c14: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803d5c14_0:;
L_1803d5c14_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803d5c14_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d5c14_3:;
wr(s->r,8,8,rd(s->u,20,8));
L_1803d5c14_4:;
/* 1803d5c1b: movaps xmm6, xmm0 */
L_1803d5c1b_0:;
L_1803d5c1b_1:;
wr(s->r,4992,4,rd(s->r,4608,4));
L_1803d5c1b_2:;
wr(s->r,4996,4,rd(s->r,4612,4));
L_1803d5c1b_3:;
wr(s->r,5000,4,rd(s->r,4616,4));
L_1803d5c1b_4:;
wr(s->r,5004,4,rd(s->r,4620,4));
L_1803d5c1b_5:;
/* 1803d5c1e: sar esi, 1 */
L_1803d5c1e_0:;
L_1803d5c1e_1:;
wr(s->u,34,4,(rd(s->r,48,4)&((U)UINT64_C(0x1))));
L_1803d5c1e_2:;
wr(s->r,512,1,(rd(s->u,34,4)!=((U)UINT64_C(0x0))));
L_1803d5c1e_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5c1e_4:;
wr(s->r,48,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,48,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,48,4),4)>>((U)UINT64_C(0x1)))));
L_1803d5c1e_5:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803d5c1e_6:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5c1e_7:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803d5c1e_8:;
wr(s->u,28,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803d5c1e_9:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803d5c1e_10:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803d5c1e_11:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803d5c1e_12:;
/* 1803d5c20: call 0x1803da8c0 */
L_1803d5c20_0:;
L_1803d5c20_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5c20_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5c25)));
L_1803d5c20_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803d5c20_4:;
return UINT64_C(0x1803d5c25);
}
uint64_t b_1803d5c25(CPU*s){
/* 1803d5c25: cmp eax, esi */
L_1803d5c25_0:;
L_1803d5c25_1:;
wr(s->u,8,4,rd(s->r,48,4));
L_1803d5c25_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,8,4)));
L_1803d5c25_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,8,4),4,1));
L_1803d5c25_4:;
wr(s->u,12,4,(rd(s->r,0,4)-rd(s->u,8,4)));
L_1803d5c25_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5c25_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803d5c25_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803d5c25_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803d5c25_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803d5c25_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803d5c25_11:;
/* 1803d5c27: jle 0x1803d5c37 */
L_1803d5c27_0:;
L_1803d5c27_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5c27_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803d5c27_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803d5c37);}
L_1803d5c27_4:;
return UINT64_C(0x1803d5c29);
}
uint64_t b_1803d5c29(CPU*s){
/* 1803d5c29: mov rcx, qword ptr [rbx + 0x66f0] */
L_1803d5c29_0:;
L_1803d5c29_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x66f0))));
L_1803d5c29_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5c29_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803d5c29_4:;
/* 1803d5c30: call 0x1803da8c0 */
L_1803d5c30_0:;
L_1803d5c30_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5c30_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5c35)));
L_1803d5c30_3:;
return (uint64_t)UINT64_C(0x1803da8c0);
L_1803d5c30_4:;
return UINT64_C(0x1803d5c35);
}
uint64_t b_1803d5c35(CPU*s){
/* 1803d5c35: mov esi, eax */
L_1803d5c35_0:;
L_1803d5c35_1:;
wr(s->r,48,4,rd(s->r,0,4));
L_1803d5c35_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803d5c35_3:;
/* 1803d5c37: mov rcx, rbx */
L_1803d5c37_0:;
L_1803d5c37_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803d5c37_2:;
/* 1803d5c3a: call 0x1803db4a0 */
L_1803d5c3a_0:;
L_1803d5c3a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5c3a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5c3f)));
L_1803d5c3a_3:;
return (uint64_t)UINT64_C(0x1803db4a0);
L_1803d5c3a_4:;
return UINT64_C(0x1803d5c3f);
}
uint64_t b_1803d5c37(CPU*s){
/* 1803d5c37: mov rcx, rbx */
L_1803d5c37_0:;
L_1803d5c37_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803d5c37_2:;
/* 1803d5c3a: call 0x1803db4a0 */
L_1803d5c3a_0:;
L_1803d5c3a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5c3a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5c3f)));
L_1803d5c3a_3:;
return (uint64_t)UINT64_C(0x1803db4a0);
L_1803d5c3a_4:;
return UINT64_C(0x1803d5c3f);
}
uint64_t b_1803d5c3f(CPU*s){
/* 1803d5c3f: mov edi, dword ptr [rbx + 0x6724] */
L_1803d5c3f_0:;
L_1803d5c3f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5c3f_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c3f_3:;
wr(s->r,56,4,rd(s->u,12,4));
L_1803d5c3f_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803d5c3f_5:;
/* 1803d5c45: movd xmm0, eax */
L_1803d5c45_0:;
L_1803d5c45_1:;
wr(s->r,4608,16,rd(s->r,0,4));
L_1803d5c45_2:;
/* 1803d5c49: mov eax, dword ptr [rbx + 0x6728] */
L_1803d5c49_0:;
L_1803d5c49_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6728))));
L_1803d5c49_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c49_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803d5c49_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5c49_5:;
/* 1803d5c4f: neg eax */
L_1803d5c4f_0:;
L_1803d5c4f_1:;
wr(s->r,512,1,(rd(s->r,0,4)!=((U)UINT64_C(0x0))));
L_1803d5c4f_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,4),4,1));
L_1803d5c4f_3:;
wr(s->r,0,4,(-rd(s->r,0,4)));
L_1803d5c4f_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5c4f_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5c4f_6:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5c4f_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803d5c4f_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803d5c4f_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803d5c4f_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5c4f_11:;
/* 1803d5c51: cmp dword ptr [rbx + 0x6734], 0 */
L_1803d5c51_0:;
L_1803d5c51_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6734))));
L_1803d5c51_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c51_3:;
wr(s->u,22,4,rd(s->u,12,4));
L_1803d5c51_4:;
wr(s->r,512,1,(rd(s->u,22,4)<((U)UINT64_C(0x0))));
L_1803d5c51_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,22,4),((U)UINT64_C(0x0)),4,1));
L_1803d5c51_6:;
wr(s->u,26,4,(rd(s->u,22,4)-((U)UINT64_C(0x0))));
L_1803d5c51_7:;
wr(s->r,519,1,(sx(rd(s->u,26,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5c51_8:;
wr(s->r,518,1,(rd(s->u,26,4)==((U)UINT64_C(0x0))));
L_1803d5c51_9:;
wr(s->u,16,4,(rd(s->u,26,4)&((U)UINT64_C(0xff))));
L_1803d5c51_10:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803d5c51_11:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803d5c51_12:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803d5c51_13:;
/* 1803d5c58: mov dword ptr [rbx + 0x6730], eax */
L_1803d5c58_0:;
L_1803d5c58_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6730))));
L_1803d5c58_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803d5c58_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5c58_4:;
/* 1803d5c5e: cvtdq2ps xmm0, xmm0 */
L_1803d5c5e_0:;
L_1803d5c5e_1:;
wr(s->r,4608,4,fb((double)sx(rd(s->r,4608,4),4),4));
L_1803d5c5e_2:;
wr(s->r,4612,4,fb((double)sx(rd(s->r,4612,4),4),4));
L_1803d5c5e_3:;
wr(s->r,4616,4,fb((double)sx(rd(s->r,4616,4),4),4));
L_1803d5c5e_4:;
wr(s->r,4620,4,fb((double)sx(rd(s->r,4620,4),4),4));
L_1803d5c5e_5:;
/* 1803d5c61: divss xmm0, xmm6 */
L_1803d5c61_0:;
L_1803d5c61_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)/fv(rd(s->r,4992,4),4),4));
L_1803d5c61_2:;
/* 1803d5c65: subss xmm0, dword ptr [rip + 0x276fd7] */
L_1803d5c65_0:;
L_1803d5c65_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(mr(UINT64_C(0x18064cc44),4),4),4));
L_1803d5c65_2:;
/* 1803d5c6d: cvttss2si ebp, xmm0 */
L_1803d5c6d_0:;
L_1803d5c6d_1:;
wr(s->r,40,4,ftrunc(fv(rd(s->r,4608,4),4),4));
L_1803d5c6d_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803d5c6d_3:;
/* 1803d5c71: je 0x1803d5c82 */
L_1803d5c71_0:;
L_1803d5c71_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d5c82);}
L_1803d5c71_2:;
return UINT64_C(0x1803d5c73);
}
uint64_t b_1803d5c73(CPU*s){
/* 1803d5c73: mov rax, qword ptr [rbx] */
L_1803d5c73_0:;
L_1803d5c73_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803d5c73_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803d5c73_3:;
/* 1803d5c76: mov rcx, rbx */
L_1803d5c76_0:;
L_1803d5c76_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803d5c76_2:;
/* 1803d5c79: call qword ptr [rax + 0x48] */
L_1803d5c79_0:;
L_1803d5c79_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x48))));
L_1803d5c79_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5c79_3:;
wr(s->u,16,8,rd(s->u,8,8));
L_1803d5c79_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5c79_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5c7c)));
L_1803d5c79_6:;
return (uint64_t)rd(s->u,16,8);
L_1803d5c79_7:;
return UINT64_C(0x1803d5c7c);
}
uint64_t b_1803d5c7c(CPU*s){
/* 1803d5c7c: add dword ptr [rbx + 0x6730], eax */
L_1803d5c7c_0:;
L_1803d5c7c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6730))));
L_1803d5c7c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c7c_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803d5c7c_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c7c_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,0,4),4,0));
L_1803d5c7c_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c7c_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,0,4)));
L_1803d5c7c_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5c7c_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c7c_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5c7c_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c7c_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803d5c7c_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c7c_14:;
wr(s->u,13,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803d5c7c_15:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803d5c7c_16:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803d5c7c_17:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803d5c7c_18:;
/* 1803d5c82: cmp edi, dword ptr [rbx + 0x6720] */
L_1803d5c82_0:;
L_1803d5c82_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6720))));
L_1803d5c82_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c82_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803d5c82_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,19,4)));
L_1803d5c82_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,19,4),4,1));
L_1803d5c82_6:;
wr(s->u,23,4,(rd(s->r,56,4)-rd(s->u,19,4)));
L_1803d5c82_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5c82_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803d5c82_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803d5c82_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803d5c82_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803d5c82_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803d5c82_13:;
/* 1803d5c88: jge 0x1803d5ca0 */
L_1803d5c88_0:;
L_1803d5c88_1:;
wr(s->u,12,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803d5c88_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803d5ca0);}
L_1803d5c88_3:;
return UINT64_C(0x1803d5c8a);
}
uint64_t b_1803d5c82(CPU*s){
/* 1803d5c82: cmp edi, dword ptr [rbx + 0x6720] */
L_1803d5c82_0:;
L_1803d5c82_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6720))));
L_1803d5c82_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c82_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803d5c82_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,19,4)));
L_1803d5c82_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,19,4),4,1));
L_1803d5c82_6:;
wr(s->u,23,4,(rd(s->r,56,4)-rd(s->u,19,4)));
L_1803d5c82_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5c82_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803d5c82_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803d5c82_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803d5c82_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803d5c82_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803d5c82_13:;
/* 1803d5c88: jge 0x1803d5ca0 */
L_1803d5c88_0:;
L_1803d5c88_1:;
wr(s->u,12,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803d5c88_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803d5ca0);}
L_1803d5c88_3:;
return UINT64_C(0x1803d5c8a);
}
uint64_t b_1803d5c8a(CPU*s){
/* 1803d5c8a: nop word ptr [rax + rax] */
L_1803d5c8a_0:;
L_1803d5c8a_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803d5c8a_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803d5c8a_3:;
/* 1803d5c90: add dword ptr [rbx + 0x6730], esi */
L_1803d5c90_0:;
L_1803d5c90_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6730))));
L_1803d5c90_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c90_3:;
wr(s->r,512,1,(((rd(s->u,24,4)+rd(s->r,48,4))&(((U)1<<32)-1))<rd(s->u,24,4)));
L_1803d5c90_4:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c90_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,24,4),rd(s->r,48,4),4,0));
L_1803d5c90_6:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c90_7:;
wr(s->u,24,4,(rd(s->u,24,4)+rd(s->r,48,4)));
L_1803d5c90_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803d5c90_9:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c90_10:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5c90_11:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c90_12:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803d5c90_13:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c90_14:;
wr(s->u,29,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803d5c90_15:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803d5c90_16:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803d5c90_17:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803d5c90_18:;
/* 1803d5c96: add edi, ebp */
L_1803d5c96_0:;
L_1803d5c96_1:;
wr(s->r,512,1,(((rd(s->r,56,4)+rd(s->r,40,4))&(((U)1<<32)-1))<rd(s->r,56,4)));
L_1803d5c96_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->r,40,4),4,0));
L_1803d5c96_3:;
wr(s->r,56,4,(rd(s->r,56,4)+rd(s->r,40,4)));
L_1803d5c96_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803d5c96_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5c96_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803d5c96_7:;
wr(s->u,29,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803d5c96_8:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803d5c96_9:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803d5c96_10:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803d5c96_11:;
/* 1803d5c98: cmp edi, dword ptr [rbx + 0x6720] */
L_1803d5c98_0:;
L_1803d5c98_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6720))));
L_1803d5c98_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c98_3:;
wr(s->u,35,4,rd(s->u,24,4));
L_1803d5c98_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,35,4)));
L_1803d5c98_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,35,4),4,1));
L_1803d5c98_6:;
wr(s->u,39,4,(rd(s->r,56,4)-rd(s->u,35,4)));
L_1803d5c98_7:;
wr(s->r,519,1,(sx(rd(s->u,39,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5c98_8:;
wr(s->r,518,1,(rd(s->u,39,4)==((U)UINT64_C(0x0))));
L_1803d5c98_9:;
wr(s->u,29,4,(rd(s->u,39,4)&((U)UINT64_C(0xff))));
L_1803d5c98_10:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803d5c98_11:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803d5c98_12:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803d5c98_13:;
/* 1803d5c9e: jl 0x1803d5c90 */
L_1803d5c9e_0:;
L_1803d5c9e_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5c9e_2:;
if(rd(s->u,28,1)){goto L_1803d5c90_0;}
L_1803d5c9e_3:;
return UINT64_C(0x1803d5ca0);
}
uint64_t b_1803d5c90(CPU*s){
/* 1803d5c90: add dword ptr [rbx + 0x6730], esi */
L_1803d5c90_0:;
L_1803d5c90_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6730))));
L_1803d5c90_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c90_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,48,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803d5c90_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c90_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,48,4),4,0));
L_1803d5c90_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c90_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,48,4)));
L_1803d5c90_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5c90_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c90_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5c90_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c90_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803d5c90_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c90_14:;
wr(s->u,13,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803d5c90_15:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803d5c90_16:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803d5c90_17:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803d5c90_18:;
/* 1803d5c96: add edi, ebp */
L_1803d5c96_0:;
L_1803d5c96_1:;
wr(s->r,512,1,(((rd(s->r,56,4)+rd(s->r,40,4))&(((U)1<<32)-1))<rd(s->r,56,4)));
L_1803d5c96_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->r,40,4),4,0));
L_1803d5c96_3:;
wr(s->r,56,4,(rd(s->r,56,4)+rd(s->r,40,4)));
L_1803d5c96_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803d5c96_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5c96_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803d5c96_7:;
wr(s->u,13,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803d5c96_8:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803d5c96_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803d5c96_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803d5c96_11:;
/* 1803d5c98: cmp edi, dword ptr [rbx + 0x6720] */
L_1803d5c98_0:;
L_1803d5c98_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6720))));
L_1803d5c98_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5c98_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803d5c98_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,19,4)));
L_1803d5c98_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,19,4),4,1));
L_1803d5c98_6:;
wr(s->u,23,4,(rd(s->r,56,4)-rd(s->u,19,4)));
L_1803d5c98_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5c98_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803d5c98_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803d5c98_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803d5c98_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803d5c98_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803d5c98_13:;
/* 1803d5c9e: jl 0x1803d5c90 */
L_1803d5c9e_0:;
L_1803d5c9e_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5c9e_2:;
if(rd(s->u,12,1)){goto L_1803d5c90_0;}
L_1803d5c9e_3:;
return UINT64_C(0x1803d5ca0);
}
uint64_t b_1803d5ca0(CPU*s){
/* 1803d5ca0: mov eax, dword ptr [rbx + 0x6730] */
L_1803d5ca0_0:;
L_1803d5ca0_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6730))));
L_1803d5ca0_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5ca0_3:;
wr(s->r,0,4,rd(s->u,32,4));
L_1803d5ca0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5ca0_5:;
/* 1803d5ca6: mov rbp, qword ptr [rsp + 0x48] */
L_1803d5ca6_0:;
L_1803d5ca6_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803d5ca6_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d5ca6_3:;
wr(s->r,40,8,rd(s->u,36,8));
L_1803d5ca6_4:;
/* 1803d5cab: mov rsi, qword ptr [rsp + 0x50] */
L_1803d5cab_0:;
L_1803d5cab_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803d5cab_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d5cab_3:;
wr(s->r,48,8,rd(s->u,36,8));
L_1803d5cab_4:;
/* 1803d5cb0: movaps xmm6, xmmword ptr [rsp + 0x20] */
L_1803d5cb0_0:;
L_1803d5cb0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803d5cb0_2:;
wr(s->u,16,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803d5cb0_3:;
wr(s->u,71,16,rd(s->u,16,16));
L_1803d5cb0_4:;
wr(s->r,4992,4,rd(s->u,71,4));
L_1803d5cb0_5:;
wr(s->r,4996,4,rd(s->u,75,4));
L_1803d5cb0_6:;
wr(s->r,5000,4,rd(s->u,79,4));
L_1803d5cb0_7:;
wr(s->r,5004,4,rd(s->u,83,4));
L_1803d5cb0_8:;
/* 1803d5cb5: mov rbx, qword ptr [rsp + 0x40] */
L_1803d5cb5_0:;
L_1803d5cb5_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803d5cb5_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d5cb5_3:;
wr(s->r,24,8,rd(s->u,36,8));
L_1803d5cb5_4:;
/* 1803d5cba: xor ecx, ecx */
L_1803d5cba_0:;
L_1803d5cba_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5cba_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5cba_3:;
wr(s->r,8,4,(rd(s->r,8,4)^rd(s->r,8,4)));
L_1803d5cba_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803d5cba_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5cba_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803d5cba_7:;
wr(s->u,44,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803d5cba_8:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803d5cba_9:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803d5cba_10:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803d5cba_11:;
/* 1803d5cbc: test eax, eax */
L_1803d5cbc_0:;
L_1803d5cbc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5cbc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5cbc_3:;
wr(s->u,67,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803d5cbc_4:;
wr(s->r,519,1,(sx(rd(s->u,67,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5cbc_5:;
wr(s->r,518,1,(rd(s->u,67,4)==((U)UINT64_C(0x0))));
L_1803d5cbc_6:;
wr(s->u,44,4,(rd(s->u,67,4)&((U)UINT64_C(0xff))));
L_1803d5cbc_7:;
wr(s->u,52,1,pop(rd(s->u,44,4),4));
L_1803d5cbc_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803d5cbc_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803d5cbc_10:;
/* 1803d5cbe: cmovs eax, ecx */
L_1803d5cbe_0:;
L_1803d5cbe_1:;
wr(s->u,54,4,rd(s->r,8,4));
L_1803d5cbe_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5cbe_3:;
wr(s->u,58,1,(!rd(s->r,519,1)));
L_1803d5cbe_4:;
if(rd(s->u,58,1)){goto L_1803d5cc1_0;}
L_1803d5cbe_5:;
wr(s->r,0,4,rd(s->u,54,4));
L_1803d5cbe_6:;
/* 1803d5cc1: add rsp, 0x30 */
L_1803d5cc1_0:;
L_1803d5cc1_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5cc1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803d5cc1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803d5cc1_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5cc1_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5cc1_6:;
wr(s->u,44,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5cc1_7:;
wr(s->u,52,1,pop(rd(s->u,44,8),8));
L_1803d5cc1_8:;
wr(s->u,53,1,(rd(s->u,52,1)&((U)UINT64_C(0x1))));
L_1803d5cc1_9:;
wr(s->r,514,1,(rd(s->u,53,1)==((U)UINT64_C(0x0))));
L_1803d5cc1_10:;
/* 1803d5cc5: pop rdi */
L_1803d5cc5_0:;
L_1803d5cc5_1:;
wr(s->u,59,8,((U)UINT64_C(0x0)));
L_1803d5cc5_2:;
wr(s->u,59,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5cc5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5cc5_4:;
wr(s->r,56,8,rd(s->u,59,8));
L_1803d5cc5_5:;
/* 1803d5cc6: ret  */
L_1803d5cc6_0:;
L_1803d5cc6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5cc6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5cc6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5cc6_4:;
return UINT64_C(0x1803d5cc7);
}
uint64_t b_1803d5cc1(CPU*s){
/* 1803d5cc1: add rsp, 0x30 */
L_1803d5cc1_0:;
L_1803d5cc1_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5cc1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803d5cc1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803d5cc1_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5cc1_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5cc1_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5cc1_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5cc1_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5cc1_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5cc1_10:;
/* 1803d5cc5: pop rdi */
L_1803d5cc5_0:;
L_1803d5cc5_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803d5cc5_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5cc5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5cc5_4:;
wr(s->r,56,8,rd(s->u,10,8));
L_1803d5cc5_5:;
/* 1803d5cc6: ret  */
L_1803d5cc6_0:;
L_1803d5cc6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5cc6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5cc6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5cc6_4:;
return UINT64_C(0x1803d5cc7);
}
uint64_t b_1803d5cd0(CPU*s){
/* 1803d5cd0: mov qword ptr [rsp + 0x20], rbx */
L_1803d5cd0_0:;
L_1803d5cd0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803d5cd0_2:;
wr(s->u,16,8,rd(s->r,24,8));
L_1803d5cd0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803d5cd0_4:;
/* 1803d5cd5: push r12 */
L_1803d5cd5_0:;
L_1803d5cd5_1:;
wr(s->u,29,8,rd(s->r,160,8));
L_1803d5cd5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5cd5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,29,8));
L_1803d5cd5_4:;
/* 1803d5cd7: sub rsp, 0x1a0 */
L_1803d5cd7_0:;
L_1803d5cd7_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x1a0))));
L_1803d5cd7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x1a0)),8,1));
L_1803d5cd7_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x1a0))));
L_1803d5cd7_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5cd7_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5cd7_6:;
wr(s->u,37,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5cd7_7:;
wr(s->u,45,1,pop(rd(s->u,37,8),8));
L_1803d5cd7_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803d5cd7_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803d5cd7_10:;
/* 1803d5cde: mov eax, dword ptr [rcx + 0x6720] */
L_1803d5cde_0:;
L_1803d5cde_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x6720))));
L_1803d5cde_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5cde_3:;
wr(s->r,0,4,rd(s->u,24,4));
L_1803d5cde_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5cde_5:;
/* 1803d5ce4: mov r12, rdx */
L_1803d5ce4_0:;
L_1803d5ce4_1:;
wr(s->r,160,8,rd(s->r,16,8));
L_1803d5ce4_2:;
/* 1803d5ce7: mov rbx, rcx */
L_1803d5ce7_0:;
L_1803d5ce7_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803d5ce7_2:;
/* 1803d5cea: cmp dword ptr [rcx + 0x6724], eax */
L_1803d5cea_0:;
L_1803d5cea_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x6724))));
L_1803d5cea_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5cea_3:;
wr(s->u,47,4,rd(s->u,24,4));
L_1803d5cea_4:;
wr(s->r,512,1,(rd(s->u,47,4)<rd(s->r,0,4)));
L_1803d5cea_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,47,4),rd(s->r,0,4),4,1));
L_1803d5cea_6:;
wr(s->u,51,4,(rd(s->u,47,4)-rd(s->r,0,4)));
L_1803d5cea_7:;
wr(s->r,519,1,(sx(rd(s->u,51,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5cea_8:;
wr(s->r,518,1,(rd(s->u,51,4)==((U)UINT64_C(0x0))));
L_1803d5cea_9:;
wr(s->u,37,4,(rd(s->u,51,4)&((U)UINT64_C(0xff))));
L_1803d5cea_10:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803d5cea_11:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803d5cea_12:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803d5cea_13:;
/* 1803d5cf0: jge 0x1803d5d4f */
L_1803d5cf0_0:;
L_1803d5cf0_1:;
wr(s->u,28,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803d5cf0_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803d5d4f);}
L_1803d5cf0_3:;
return UINT64_C(0x1803d5cf2);
}
uint64_t b_1803d5cf2(CPU*s){
/* 1803d5cf2: cmp dword ptr [rbx + 0x30], 0 */
L_1803d5cf2_0:;
L_1803d5cf2_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d5cf2_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5cf2_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803d5cf2_4:;
wr(s->r,512,1,(rd(s->u,20,4)<((U)UINT64_C(0x0))));
L_1803d5cf2_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),((U)UINT64_C(0x0)),4,1));
L_1803d5cf2_6:;
wr(s->u,24,4,(rd(s->u,20,4)-((U)UINT64_C(0x0))));
L_1803d5cf2_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5cf2_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803d5cf2_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803d5cf2_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803d5cf2_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803d5cf2_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803d5cf2_13:;
/* 1803d5cf6: jle 0x1803d5d29 */
L_1803d5cf6_0:;
L_1803d5cf6_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5cf6_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803d5cf6_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803d5d29);}
L_1803d5cf6_4:;
return UINT64_C(0x1803d5cf8);
}
uint64_t b_1803d5cf8(CPU*s){
/* 1803d5cf8: movsxd r10, dword ptr [rbx + 0x6724] */
L_1803d5cf8_0:;
L_1803d5cf8_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5cf8_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803d5cf8_3:;
wr(s->r,144,8,(U)sx(rd(s->u,48,4),4));
L_1803d5cf8_4:;
/* 1803d5cff: mov r9d, dword ptr [rbx + 0x30] */
L_1803d5cff_0:;
L_1803d5cff_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d5cff_2:;
wr(s->u,48,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5cff_3:;
wr(s->r,136,4,rd(s->u,48,4));
L_1803d5cff_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803d5cff_5:;
/* 1803d5d03: lea rdx, [rsp + 0x20] */
L_1803d5d03_0:;
L_1803d5d03_1:;
wr(s->u,32,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803d5d03_2:;
wr(s->r,16,8,rd(s->u,32,8));
L_1803d5d03_3:;
/* 1803d5d08: lea r8, [rbx + 0x6738] */
L_1803d5d08_0:;
L_1803d5d08_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6738))));
L_1803d5d08_2:;
wr(s->r,128,8,rd(s->u,8,8));
L_1803d5d08_3:;
/* 1803d5d0f: nop  */
L_1803d5d0f_0:;
L_1803d5d0f_1:;
/* 1803d5d10: mov rax, qword ptr [r8] */
L_1803d5d10_0:;
L_1803d5d10_1:;
wr(s->u,52,8,mr((uint64_t)rd(s->r,128,8),8));
L_1803d5d10_2:;
wr(s->r,0,8,rd(s->u,52,8));
L_1803d5d10_3:;
/* 1803d5d13: add rdx, 8 */
L_1803d5d13_0:;
L_1803d5d13_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803d5d13_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803d5d13_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803d5d13_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5d13_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803d5d13_6:;
wr(s->u,61,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803d5d13_7:;
wr(s->u,69,1,pop(rd(s->u,61,8),8));
L_1803d5d13_8:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803d5d13_9:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803d5d13_10:;
/* 1803d5d17: add r8, 8 */
L_1803d5d17_0:;
L_1803d5d17_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803d5d17_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803d5d17_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803d5d17_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5d17_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5d17_6:;
wr(s->u,61,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5d17_7:;
wr(s->u,69,1,pop(rd(s->u,61,8),8));
L_1803d5d17_8:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803d5d17_9:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803d5d17_10:;
/* 1803d5d1b: sub r9, 1 */
L_1803d5d1b_0:;
L_1803d5d1b_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803d5d1b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803d5d1b_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803d5d1b_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5d1b_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803d5d1b_6:;
wr(s->u,61,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803d5d1b_7:;
wr(s->u,69,1,pop(rd(s->u,61,8),8));
L_1803d5d1b_8:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803d5d1b_9:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803d5d1b_10:;
/* 1803d5d1f: lea rcx, [rax + r10*4] */
L_1803d5d1f_0:;
L_1803d5d1f_1:;
wr(s->u,16,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803d5d1f_2:;
wr(s->u,24,8,(rd(s->r,0,8)+rd(s->u,16,8)));
L_1803d5d1f_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803d5d1f_4:;
/* 1803d5d23: mov qword ptr [rdx - 8], rcx */
L_1803d5d23_0:;
L_1803d5d23_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5d23_2:;
wr(s->u,40,8,rd(s->r,8,8));
L_1803d5d23_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,40,8));
L_1803d5d23_4:;
/* 1803d5d27: jne 0x1803d5d10 */
L_1803d5d27_0:;
L_1803d5d27_1:;
wr(s->u,60,1,(!rd(s->r,518,1)));
L_1803d5d27_2:;
if(rd(s->u,60,1)){goto L_1803d5d10_0;}
L_1803d5d27_3:;
return UINT64_C(0x1803d5d29);
}
uint64_t b_1803d5d10(CPU*s){
/* 1803d5d10: mov rax, qword ptr [r8] */
L_1803d5d10_0:;
L_1803d5d10_1:;
wr(s->u,32,8,mr((uint64_t)rd(s->r,128,8),8));
L_1803d5d10_2:;
wr(s->r,0,8,rd(s->u,32,8));
L_1803d5d10_3:;
/* 1803d5d13: add rdx, 8 */
L_1803d5d13_0:;
L_1803d5d13_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803d5d13_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803d5d13_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803d5d13_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5d13_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803d5d13_6:;
wr(s->u,41,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803d5d13_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803d5d13_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803d5d13_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803d5d13_10:;
/* 1803d5d17: add r8, 8 */
L_1803d5d17_0:;
L_1803d5d17_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803d5d17_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x8)),8,0));
L_1803d5d17_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x8))));
L_1803d5d17_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5d17_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5d17_6:;
wr(s->u,41,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5d17_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803d5d17_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803d5d17_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803d5d17_10:;
/* 1803d5d1b: sub r9, 1 */
L_1803d5d1b_0:;
L_1803d5d1b_1:;
wr(s->r,512,1,(rd(s->r,136,8)<((U)UINT64_C(0x1))));
L_1803d5d1b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x1)),8,1));
L_1803d5d1b_3:;
wr(s->r,136,8,(rd(s->r,136,8)-((U)UINT64_C(0x1))));
L_1803d5d1b_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5d1b_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803d5d1b_6:;
wr(s->u,41,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803d5d1b_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1803d5d1b_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803d5d1b_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803d5d1b_10:;
/* 1803d5d1f: lea rcx, [rax + r10*4] */
L_1803d5d1f_0:;
L_1803d5d1f_1:;
wr(s->u,8,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803d5d1f_2:;
wr(s->u,16,8,(rd(s->r,0,8)+rd(s->u,8,8)));
L_1803d5d1f_3:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803d5d1f_4:;
/* 1803d5d23: mov qword ptr [rdx - 8], rcx */
L_1803d5d23_0:;
L_1803d5d23_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5d23_2:;
wr(s->u,24,8,rd(s->r,8,8));
L_1803d5d23_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,24,8));
L_1803d5d23_4:;
/* 1803d5d27: jne 0x1803d5d10 */
L_1803d5d27_0:;
L_1803d5d27_1:;
wr(s->u,40,1,(!rd(s->r,518,1)));
L_1803d5d27_2:;
if(rd(s->u,40,1)){goto L_1803d5d10_0;}
L_1803d5d27_3:;
return UINT64_C(0x1803d5d29);
}
uint64_t b_1803d5d29(CPU*s){
/* 1803d5d29: lea rdx, [rsp + 0x20] */
L_1803d5d29_0:;
L_1803d5d29_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803d5d29_2:;
wr(s->r,16,8,rd(s->u,0,8));
L_1803d5d29_3:;
/* 1803d5d2e: mov rcx, rbx */
L_1803d5d2e_0:;
L_1803d5d2e_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803d5d2e_2:;
/* 1803d5d31: call 0x1803dd820 */
L_1803d5d31_0:;
L_1803d5d31_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5d31_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5d36)));
L_1803d5d31_3:;
return (uint64_t)UINT64_C(0x1803dd820);
L_1803d5d31_4:;
return UINT64_C(0x1803d5d36);
}
uint64_t b_1803d5d36(CPU*s){
/* 1803d5d36: cmp eax, -1 */
L_1803d5d36_0:;
L_1803d5d36_1:;
wr(s->u,6,4,rd(s->r,0,4));
L_1803d5d36_2:;
wr(s->r,512,1,(rd(s->u,6,4)<((U)UINT64_C(0xffffffff))));
L_1803d5d36_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,6,4),((U)UINT64_C(0xffffffff)),4,1));
L_1803d5d36_4:;
wr(s->u,10,4,(rd(s->u,6,4)-((U)UINT64_C(0xffffffff))));
L_1803d5d36_5:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5d36_6:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803d5d36_7:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803d5d36_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803d5d36_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803d5d36_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803d5d36_11:;
/* 1803d5d39: je 0x1803d5d4f */
L_1803d5d39_0:;
L_1803d5d39_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d5d4f);}
L_1803d5d39_2:;
return UINT64_C(0x1803d5d3b);
}
uint64_t b_1803d5d3b(CPU*s){
/* 1803d5d3b: add dword ptr [rbx + 0x6724], eax */
L_1803d5d3b_0:;
L_1803d5d3b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5d3b_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5d3b_3:;
wr(s->r,512,1,(((rd(s->u,8,4)+rd(s->r,0,4))&(((U)1<<32)-1))<rd(s->u,8,4)));
L_1803d5d3b_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5d3b_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,0,4),4,0));
L_1803d5d3b_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5d3b_7:;
wr(s->u,8,4,(rd(s->u,8,4)+rd(s->r,0,4)));
L_1803d5d3b_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5d3b_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5d3b_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5d3b_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5d3b_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803d5d3b_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5d3b_14:;
wr(s->u,17,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803d5d3b_15:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803d5d3b_16:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5d3b_17:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5d3b_18:;
/* 1803d5d41: mov eax, dword ptr [rbx + 0x6720] */
L_1803d5d41_0:;
L_1803d5d41_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6720))));
L_1803d5d41_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5d41_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803d5d41_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5d41_5:;
/* 1803d5d47: cmp dword ptr [rbx + 0x6724], eax */
L_1803d5d47_0:;
L_1803d5d47_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5d47_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5d47_3:;
wr(s->u,23,4,rd(s->u,12,4));
L_1803d5d47_4:;
wr(s->r,512,1,(rd(s->u,23,4)<rd(s->r,0,4)));
L_1803d5d47_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,23,4),rd(s->r,0,4),4,1));
L_1803d5d47_6:;
wr(s->u,27,4,(rd(s->u,23,4)-rd(s->r,0,4)));
L_1803d5d47_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5d47_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803d5d47_9:;
wr(s->u,17,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803d5d47_10:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803d5d47_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5d47_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5d47_13:;
/* 1803d5d4d: jl 0x1803d5cf2 */
L_1803d5d4d_0:;
L_1803d5d4d_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5d4d_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803d5cf2);}
L_1803d5d4d_3:;
return UINT64_C(0x1803d5d4f);
}
uint64_t b_1803d5d4f(CPU*s){
/* 1803d5d4f: mov eax, dword ptr [rbx + 0x6724] */
L_1803d5d4f_0:;
L_1803d5d4f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5d4f_2:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5d4f_3:;
wr(s->r,0,4,rd(s->u,28,4));
L_1803d5d4f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5d4f_5:;
/* 1803d5d55: mov qword ptr [rsp + 0x1b8], rsi */
L_1803d5d55_0:;
L_1803d5d55_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1b8))+rd(s->r,32,8)));
L_1803d5d55_2:;
wr(s->u,20,8,rd(s->r,48,8));
L_1803d5d55_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803d5d55_4:;
/* 1803d5d5d: mov qword ptr [rsp + 0x1c0], rdi */
L_1803d5d5d_0:;
L_1803d5d5d_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1c0))+rd(s->r,32,8)));
L_1803d5d5d_2:;
wr(s->u,20,8,rd(s->r,56,8));
L_1803d5d5d_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,20,8));
L_1803d5d5d_4:;
/* 1803d5d65: cmp eax, dword ptr [rbx + 0x6720] */
L_1803d5d65_0:;
L_1803d5d65_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6720))));
L_1803d5d65_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5d65_3:;
wr(s->u,39,4,rd(s->u,16,4));
L_1803d5d65_4:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,39,4)));
L_1803d5d65_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,39,4),4,1));
L_1803d5d65_6:;
wr(s->u,43,4,(rd(s->r,0,4)-rd(s->u,39,4)));
L_1803d5d65_7:;
wr(s->r,519,1,(sx(rd(s->u,43,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5d65_8:;
wr(s->r,518,1,(rd(s->u,43,4)==((U)UINT64_C(0x0))));
L_1803d5d65_9:;
wr(s->u,33,4,(rd(s->u,43,4)&((U)UINT64_C(0xff))));
L_1803d5d65_10:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803d5d65_11:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803d5d65_12:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803d5d65_13:;
/* 1803d5d6b: jl 0x1803d5dda */
L_1803d5d6b_0:;
L_1803d5d6b_1:;
wr(s->u,32,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5d6b_2:;
if(rd(s->u,32,1)){return UINT64_C(0x1803d5dda);}
L_1803d5d6b_3:;
return UINT64_C(0x1803d5d6d);
}
uint64_t b_1803d5d6d(CPU*s){
/* 1803d5d6d: xor edi, edi */
L_1803d5d6d_0:;
L_1803d5d6d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5d6d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5d6d_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803d5d6d_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803d5d6d_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5d6d_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803d5d6d_7:;
wr(s->u,14,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803d5d6d_8:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803d5d6d_9:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803d5d6d_10:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803d5d6d_11:;
/* 1803d5d6f: cmp dword ptr [rbx + 0x30], edi */
L_1803d5d6f_0:;
L_1803d5d6f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d5d6f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5d6f_3:;
wr(s->u,20,4,rd(s->u,8,4));
L_1803d5d6f_4:;
wr(s->r,512,1,(rd(s->u,20,4)<rd(s->r,56,4)));
L_1803d5d6f_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,20,4),rd(s->r,56,4),4,1));
L_1803d5d6f_6:;
wr(s->u,24,4,(rd(s->u,20,4)-rd(s->r,56,4)));
L_1803d5d6f_7:;
wr(s->r,519,1,(sx(rd(s->u,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5d6f_8:;
wr(s->r,518,1,(rd(s->u,24,4)==((U)UINT64_C(0x0))));
L_1803d5d6f_9:;
wr(s->u,14,4,(rd(s->u,24,4)&((U)UINT64_C(0xff))));
L_1803d5d6f_10:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803d5d6f_11:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803d5d6f_12:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803d5d6f_13:;
/* 1803d5d72: jle 0x1803d5dc9 */
L_1803d5d72_0:;
L_1803d5d72_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5d72_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803d5d72_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803d5dc9);}
L_1803d5d72_4:;
return UINT64_C(0x1803d5d74);
}
uint64_t b_1803d5d74(CPU*s){
/* 1803d5d74: lea rsi, [rbx + 0x6738] */
L_1803d5d74_0:;
L_1803d5d74_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x6738))));
L_1803d5d74_2:;
wr(s->r,48,8,rd(s->u,5,8));
L_1803d5d74_3:;
/* 1803d5d7b: nop dword ptr [rax + rax] */
L_1803d5d7b_0:;
L_1803d5d7b_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803d5d7b_2:;
wr(s->u,21,8,(rd(s->r,0,8)+rd(s->u,13,8)));
L_1803d5d7b_3:;
/* 1803d5d80: movsxd r8, dword ptr [rbx + 0x6720] */
L_1803d5d80_0:;
L_1803d5d80_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x6720))));
L_1803d5d80_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5d80_3:;
wr(s->r,128,8,(U)sx(rd(s->u,29,4),4));
L_1803d5d80_4:;
/* 1803d5d87: mov rdx, qword ptr [rsi] */
L_1803d5d87_0:;
L_1803d5d87_1:;
wr(s->u,33,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803d5d87_2:;
wr(s->r,16,8,rd(s->u,33,8));
L_1803d5d87_3:;
/* 1803d5d8a: mov rcx, qword ptr [r12] */
L_1803d5d8a_0:;
L_1803d5d8a_1:;
wr(s->u,33,8,mr((uint64_t)rd(s->r,160,8),8));
L_1803d5d8a_2:;
wr(s->r,8,8,rd(s->u,33,8));
L_1803d5d8a_3:;
/* 1803d5d8e: shl r8, 2 */
L_1803d5d8e_0:;
L_1803d5d8e_1:;
wr(s->u,81,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d5d8e_2:;
wr(s->u,85,8,rd(s->r,128,8));
L_1803d5d8e_3:;
wr(s->r,128,8,((rd(s->u,81,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,81,4))));
L_1803d5d8e_4:;
wr(s->u,64,1,(rd(s->u,81,4)==((U)UINT64_C(0x0))));
L_1803d5d8e_5:;
wr(s->u,65,4,(rd(s->u,81,4)-((U)UINT64_C(0x1))));
L_1803d5d8e_6:;
wr(s->u,69,8,((rd(s->u,65,4)>=64)?0:(rd(s->u,85,8)<<rd(s->u,65,4))));
L_1803d5d8e_7:;
wr(s->u,77,1,(sx(rd(s->u,69,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5d8e_8:;
wr(s->u,0,1,rd(s->u,64,1));
L_1803d5d8e_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d5d8e_10:;
wr(s->u,2,1,(!rd(s->u,64,1)));
L_1803d5d8e_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5d8e_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,77,1)));
L_1803d5d8e_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5d8e_14:;
wr(s->u,78,1,(rd(s->u,81,4)==((U)UINT64_C(0x1))));
L_1803d5d8e_15:;
wr(s->u,79,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5d8e_16:;
wr(s->u,80,1,(rd(s->r,512,1)^rd(s->u,79,1)));
L_1803d5d8e_17:;
wr(s->u,0,1,rd(s->u,78,1));
L_1803d5d8e_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,80,1)));
L_1803d5d8e_19:;
wr(s->u,2,1,(!rd(s->u,78,1)));
L_1803d5d8e_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5d8e_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d5d8e_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5d8e_23:;
wr(s->u,41,1,(rd(s->u,81,4)!=((U)UINT64_C(0x0))));
L_1803d5d8e_24:;
wr(s->u,42,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5d8e_25:;
wr(s->u,43,1,(!rd(s->u,41,1)));
L_1803d5d8e_26:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,519,1)));
L_1803d5d8e_27:;
wr(s->u,45,1,(rd(s->u,41,1)&rd(s->u,42,1)));
L_1803d5d8e_28:;
wr(s->r,519,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803d5d8e_29:;
wr(s->u,46,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5d8e_30:;
wr(s->u,47,1,(!rd(s->u,41,1)));
L_1803d5d8e_31:;
wr(s->u,48,1,(rd(s->u,47,1)&rd(s->r,518,1)));
L_1803d5d8e_32:;
wr(s->u,49,1,(rd(s->u,41,1)&rd(s->u,46,1)));
L_1803d5d8e_33:;
wr(s->r,518,1,(rd(s->u,48,1)|rd(s->u,49,1)));
L_1803d5d8e_34:;
wr(s->u,50,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5d8e_35:;
wr(s->u,58,1,pop(rd(s->u,50,8),8));
L_1803d5d8e_36:;
wr(s->u,59,1,(rd(s->u,58,1)&((U)UINT64_C(0x1))));
L_1803d5d8e_37:;
wr(s->u,60,1,(rd(s->u,59,1)==((U)UINT64_C(0x0))));
L_1803d5d8e_38:;
wr(s->u,61,1,(!rd(s->u,41,1)));
L_1803d5d8e_39:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,514,1)));
L_1803d5d8e_40:;
wr(s->u,63,1,(rd(s->u,41,1)&rd(s->u,60,1)));
L_1803d5d8e_41:;
wr(s->r,514,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803d5d8e_42:;
/* 1803d5d92: call 0x18000d550 */
L_1803d5d92_0:;
L_1803d5d92_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5d92_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5d97)));
L_1803d5d92_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803d5d92_4:;
return UINT64_C(0x1803d5d97);
}
uint64_t b_1803d5d80(CPU*s){
/* 1803d5d80: movsxd r8, dword ptr [rbx + 0x6720] */
L_1803d5d80_0:;
L_1803d5d80_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x6720))));
L_1803d5d80_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5d80_3:;
wr(s->r,128,8,(U)sx(rd(s->u,13,4),4));
L_1803d5d80_4:;
/* 1803d5d87: mov rdx, qword ptr [rsi] */
L_1803d5d87_0:;
L_1803d5d87_1:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803d5d87_2:;
wr(s->r,16,8,rd(s->u,17,8));
L_1803d5d87_3:;
/* 1803d5d8a: mov rcx, qword ptr [r12] */
L_1803d5d8a_0:;
L_1803d5d8a_1:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,160,8),8));
L_1803d5d8a_2:;
wr(s->r,8,8,rd(s->u,17,8));
L_1803d5d8a_3:;
/* 1803d5d8e: shl r8, 2 */
L_1803d5d8e_0:;
L_1803d5d8e_1:;
wr(s->u,65,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d5d8e_2:;
wr(s->u,69,8,rd(s->r,128,8));
L_1803d5d8e_3:;
wr(s->r,128,8,((rd(s->u,65,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,65,4))));
L_1803d5d8e_4:;
wr(s->u,48,1,(rd(s->u,65,4)==((U)UINT64_C(0x0))));
L_1803d5d8e_5:;
wr(s->u,49,4,(rd(s->u,65,4)-((U)UINT64_C(0x1))));
L_1803d5d8e_6:;
wr(s->u,53,8,((rd(s->u,49,4)>=64)?0:(rd(s->u,69,8)<<rd(s->u,49,4))));
L_1803d5d8e_7:;
wr(s->u,61,1,(sx(rd(s->u,53,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5d8e_8:;
wr(s->u,0,1,rd(s->u,48,1));
L_1803d5d8e_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d5d8e_10:;
wr(s->u,2,1,(!rd(s->u,48,1)));
L_1803d5d8e_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5d8e_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,61,1)));
L_1803d5d8e_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5d8e_14:;
wr(s->u,62,1,(rd(s->u,65,4)==((U)UINT64_C(0x1))));
L_1803d5d8e_15:;
wr(s->u,63,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5d8e_16:;
wr(s->u,64,1,(rd(s->r,512,1)^rd(s->u,63,1)));
L_1803d5d8e_17:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803d5d8e_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,64,1)));
L_1803d5d8e_19:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803d5d8e_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5d8e_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d5d8e_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5d8e_23:;
wr(s->u,25,1,(rd(s->u,65,4)!=((U)UINT64_C(0x0))));
L_1803d5d8e_24:;
wr(s->u,26,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5d8e_25:;
wr(s->u,27,1,(!rd(s->u,25,1)));
L_1803d5d8e_26:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,519,1)));
L_1803d5d8e_27:;
wr(s->u,29,1,(rd(s->u,25,1)&rd(s->u,26,1)));
L_1803d5d8e_28:;
wr(s->r,519,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803d5d8e_29:;
wr(s->u,30,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5d8e_30:;
wr(s->u,31,1,(!rd(s->u,25,1)));
L_1803d5d8e_31:;
wr(s->u,32,1,(rd(s->u,31,1)&rd(s->r,518,1)));
L_1803d5d8e_32:;
wr(s->u,33,1,(rd(s->u,25,1)&rd(s->u,30,1)));
L_1803d5d8e_33:;
wr(s->r,518,1,(rd(s->u,32,1)|rd(s->u,33,1)));
L_1803d5d8e_34:;
wr(s->u,34,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5d8e_35:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803d5d8e_36:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803d5d8e_37:;
wr(s->u,44,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803d5d8e_38:;
wr(s->u,45,1,(!rd(s->u,25,1)));
L_1803d5d8e_39:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,514,1)));
L_1803d5d8e_40:;
wr(s->u,47,1,(rd(s->u,25,1)&rd(s->u,44,1)));
L_1803d5d8e_41:;
wr(s->r,514,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803d5d8e_42:;
/* 1803d5d92: call 0x18000d550 */
L_1803d5d92_0:;
L_1803d5d92_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5d92_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5d97)));
L_1803d5d92_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803d5d92_4:;
return UINT64_C(0x1803d5d97);
}
uint64_t b_1803d5d97(CPU*s){
/* 1803d5d97: movsxd r11, dword ptr [rbx + 0x6720] */
L_1803d5d97_0:;
L_1803d5d97_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x6720))));
L_1803d5d97_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5d97_3:;
wr(s->r,152,8,(U)sx(rd(s->u,29,4),4));
L_1803d5d97_4:;
/* 1803d5d9e: mov eax, dword ptr [rbx + 0x6724] */
L_1803d5d9e_0:;
L_1803d5d9e_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5d9e_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5d9e_3:;
wr(s->r,0,4,rd(s->u,29,4));
L_1803d5d9e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5d9e_5:;
/* 1803d5da4: mov rcx, qword ptr [rsi] */
L_1803d5da4_0:;
L_1803d5da4_1:;
wr(s->u,33,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803d5da4_2:;
wr(s->r,8,8,rd(s->u,33,8));
L_1803d5da4_3:;
/* 1803d5da7: sub eax, r11d */
L_1803d5da7_0:;
L_1803d5da7_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,152,4)));
L_1803d5da7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,152,4),4,1));
L_1803d5da7_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,152,4)));
L_1803d5da7_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5da7_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5da7_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5da7_7:;
wr(s->u,41,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5da7_8:;
wr(s->u,45,1,pop(rd(s->u,41,4),4));
L_1803d5da7_9:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803d5da7_10:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803d5da7_11:;
/* 1803d5daa: movsxd r8, eax */
L_1803d5daa_0:;
L_1803d5daa_1:;
wr(s->r,128,8,(U)sx(rd(s->r,0,4),4));
L_1803d5daa_2:;
/* 1803d5dad: lea rdx, [rcx + r11*4] */
L_1803d5dad_0:;
L_1803d5dad_1:;
wr(s->u,13,8,(rd(s->r,152,8)*((U)UINT64_C(0x4))));
L_1803d5dad_2:;
wr(s->u,21,8,(rd(s->r,8,8)+rd(s->u,13,8)));
L_1803d5dad_3:;
wr(s->r,16,8,rd(s->u,21,8));
L_1803d5dad_4:;
/* 1803d5db1: shl r8, 2 */
L_1803d5db1_0:;
L_1803d5db1_1:;
wr(s->u,87,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d5db1_2:;
wr(s->u,91,8,rd(s->r,128,8));
L_1803d5db1_3:;
wr(s->r,128,8,((rd(s->u,87,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,87,4))));
L_1803d5db1_4:;
wr(s->u,70,1,(rd(s->u,87,4)==((U)UINT64_C(0x0))));
L_1803d5db1_5:;
wr(s->u,71,4,(rd(s->u,87,4)-((U)UINT64_C(0x1))));
L_1803d5db1_6:;
wr(s->u,75,8,((rd(s->u,71,4)>=64)?0:(rd(s->u,91,8)<<rd(s->u,71,4))));
L_1803d5db1_7:;
wr(s->u,83,1,(sx(rd(s->u,75,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5db1_8:;
wr(s->u,0,1,rd(s->u,70,1));
L_1803d5db1_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d5db1_10:;
wr(s->u,2,1,(!rd(s->u,70,1)));
L_1803d5db1_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5db1_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,83,1)));
L_1803d5db1_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5db1_14:;
wr(s->u,84,1,(rd(s->u,87,4)==((U)UINT64_C(0x1))));
L_1803d5db1_15:;
wr(s->u,85,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5db1_16:;
wr(s->u,86,1,(rd(s->r,512,1)^rd(s->u,85,1)));
L_1803d5db1_17:;
wr(s->u,0,1,rd(s->u,84,1));
L_1803d5db1_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,86,1)));
L_1803d5db1_19:;
wr(s->u,2,1,(!rd(s->u,84,1)));
L_1803d5db1_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5db1_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d5db1_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5db1_23:;
wr(s->u,47,1,(rd(s->u,87,4)!=((U)UINT64_C(0x0))));
L_1803d5db1_24:;
wr(s->u,48,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5db1_25:;
wr(s->u,49,1,(!rd(s->u,47,1)));
L_1803d5db1_26:;
wr(s->u,50,1,(rd(s->u,49,1)&rd(s->r,519,1)));
L_1803d5db1_27:;
wr(s->u,51,1,(rd(s->u,47,1)&rd(s->u,48,1)));
L_1803d5db1_28:;
wr(s->r,519,1,(rd(s->u,50,1)|rd(s->u,51,1)));
L_1803d5db1_29:;
wr(s->u,52,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5db1_30:;
wr(s->u,53,1,(!rd(s->u,47,1)));
L_1803d5db1_31:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,518,1)));
L_1803d5db1_32:;
wr(s->u,55,1,(rd(s->u,47,1)&rd(s->u,52,1)));
L_1803d5db1_33:;
wr(s->r,518,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1803d5db1_34:;
wr(s->u,56,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5db1_35:;
wr(s->u,64,1,pop(rd(s->u,56,8),8));
L_1803d5db1_36:;
wr(s->u,65,1,(rd(s->u,64,1)&((U)UINT64_C(0x1))));
L_1803d5db1_37:;
wr(s->u,66,1,(rd(s->u,65,1)==((U)UINT64_C(0x0))));
L_1803d5db1_38:;
wr(s->u,67,1,(!rd(s->u,47,1)));
L_1803d5db1_39:;
wr(s->u,68,1,(rd(s->u,67,1)&rd(s->r,514,1)));
L_1803d5db1_40:;
wr(s->u,69,1,(rd(s->u,47,1)&rd(s->u,66,1)));
L_1803d5db1_41:;
wr(s->r,514,1,(rd(s->u,68,1)|rd(s->u,69,1)));
L_1803d5db1_42:;
/* 1803d5db5: call 0x180609ade */
L_1803d5db5_0:;
L_1803d5db5_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5db5_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5dba)));
L_1803d5db5_3:;
return (uint64_t)UINT64_C(0x180609ade);
L_1803d5db5_4:;
return UINT64_C(0x1803d5dba);
}
uint64_t b_1803d5dba(CPU*s){
/* 1803d5dba: inc edi */
L_1803d5dba_0:;
L_1803d5dba_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),((U)UINT64_C(0x1)),4,0));
L_1803d5dba_2:;
wr(s->r,56,4,(rd(s->r,56,4)+((U)UINT64_C(0x1))));
L_1803d5dba_3:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803d5dba_4:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5dba_5:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803d5dba_6:;
wr(s->u,13,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803d5dba_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803d5dba_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5dba_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5dba_10:;
/* 1803d5dbc: add r12, 8 */
L_1803d5dbc_0:;
L_1803d5dbc_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803d5dbc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x8)),8,0));
L_1803d5dbc_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x8))));
L_1803d5dbc_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5dbc_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803d5dbc_6:;
wr(s->u,13,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803d5dbc_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803d5dbc_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5dbc_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5dbc_10:;
/* 1803d5dc0: add rsi, 8 */
L_1803d5dc0_0:;
L_1803d5dc0_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803d5dc0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x8)),8,0));
L_1803d5dc0_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x8))));
L_1803d5dc0_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5dc0_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803d5dc0_6:;
wr(s->u,13,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803d5dc0_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803d5dc0_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5dc0_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5dc0_10:;
/* 1803d5dc4: cmp edi, dword ptr [rbx + 0x30] */
L_1803d5dc4_0:;
L_1803d5dc4_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d5dc4_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5dc4_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803d5dc4_4:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->u,23,4)));
L_1803d5dc4_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->u,23,4),4,1));
L_1803d5dc4_6:;
wr(s->u,27,4,(rd(s->r,56,4)-rd(s->u,23,4)));
L_1803d5dc4_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5dc4_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803d5dc4_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803d5dc4_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803d5dc4_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5dc4_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5dc4_13:;
/* 1803d5dc7: jl 0x1803d5d80 */
L_1803d5dc7_0:;
L_1803d5dc7_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5dc7_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803d5d80);}
L_1803d5dc7_3:;
return UINT64_C(0x1803d5dc9);
}
uint64_t b_1803d5dc9(CPU*s){
/* 1803d5dc9: mov eax, dword ptr [rbx + 0x6720] */
L_1803d5dc9_0:;
L_1803d5dc9_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6720))));
L_1803d5dc9_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5dc9_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803d5dc9_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5dc9_5:;
/* 1803d5dcf: sub dword ptr [rbx + 0x6724], eax */
L_1803d5dcf_0:;
L_1803d5dcf_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5dcf_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5dcf_3:;
wr(s->r,512,1,(rd(s->u,8,4)<rd(s->r,0,4)));
L_1803d5dcf_4:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5dcf_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),rd(s->r,0,4),4,1));
L_1803d5dcf_6:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5dcf_7:;
wr(s->u,8,4,(rd(s->u,8,4)-rd(s->r,0,4)));
L_1803d5dcf_8:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5dcf_9:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5dcf_10:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5dcf_11:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5dcf_12:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803d5dcf_13:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5dcf_14:;
wr(s->u,16,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803d5dcf_15:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803d5dcf_16:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803d5dcf_17:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803d5dcf_18:;
/* 1803d5dd5: jmp 0x1803d5e5d */
L_1803d5dd5_0:;
L_1803d5dd5_1:;
return UINT64_C(0x1803d5e5d);
L_1803d5dd5_2:;
return UINT64_C(0x1803d5dda);
}
uint64_t b_1803d5dda(CPU*s){
/* 1803d5dda: test eax, eax */
L_1803d5dda_0:;
L_1803d5dda_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5dda_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5dda_3:;
wr(s->u,8,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803d5dda_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5dda_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803d5dda_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803d5dda_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803d5dda_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803d5dda_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803d5dda_10:;
/* 1803d5ddc: jle 0x1803d5e5a */
L_1803d5ddc_0:;
L_1803d5ddc_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5ddc_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803d5ddc_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803d5e5a);}
L_1803d5ddc_4:;
return UINT64_C(0x1803d5dde);
}
uint64_t b_1803d5dde(CPU*s){
/* 1803d5dde: xor edi, edi */
L_1803d5dde_0:;
L_1803d5dde_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5dde_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5dde_3:;
wr(s->r,56,4,(rd(s->r,56,4)^rd(s->r,56,4)));
L_1803d5dde_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803d5dde_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5dde_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803d5dde_7:;
wr(s->u,30,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803d5dde_8:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803d5dde_9:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803d5dde_10:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803d5dde_11:;
/* 1803d5de0: mov qword ptr [rsp + 0x1b0], rbp */
L_1803d5de0_0:;
L_1803d5de0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1b0))+rd(s->r,32,8)));
L_1803d5de0_2:;
wr(s->u,16,8,rd(s->r,40,8));
L_1803d5de0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803d5de0_4:;
/* 1803d5de8: cmp dword ptr [rbx + 0x30], edi */
L_1803d5de8_0:;
L_1803d5de8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d5de8_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5de8_3:;
wr(s->u,36,4,rd(s->u,24,4));
L_1803d5de8_4:;
wr(s->r,512,1,(rd(s->u,36,4)<rd(s->r,56,4)));
L_1803d5de8_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,36,4),rd(s->r,56,4),4,1));
L_1803d5de8_6:;
wr(s->u,40,4,(rd(s->u,36,4)-rd(s->r,56,4)));
L_1803d5de8_7:;
wr(s->r,519,1,(sx(rd(s->u,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5de8_8:;
wr(s->r,518,1,(rd(s->u,40,4)==((U)UINT64_C(0x0))));
L_1803d5de8_9:;
wr(s->u,30,4,(rd(s->u,40,4)&((U)UINT64_C(0xff))));
L_1803d5de8_10:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803d5de8_11:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803d5de8_12:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803d5de8_13:;
/* 1803d5deb: mov ebp, edi */
L_1803d5deb_0:;
L_1803d5deb_1:;
wr(s->r,40,4,rd(s->r,56,4));
L_1803d5deb_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803d5deb_3:;
/* 1803d5ded: jle 0x1803d5e44 */
L_1803d5ded_0:;
L_1803d5ded_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5ded_2:;
wr(s->u,29,1,((rd(s->r,518,1)!=0)||(rd(s->u,28,1)!=0)));
L_1803d5ded_3:;
if(rd(s->u,29,1)){return UINT64_C(0x1803d5e44);}
L_1803d5ded_4:;
return UINT64_C(0x1803d5def);
}
uint64_t b_1803d5de0(CPU*s){
/* 1803d5de0: mov qword ptr [rsp + 0x1b0], rbp */
L_1803d5de0_0:;
L_1803d5de0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1b0))+rd(s->r,32,8)));
L_1803d5de0_2:;
wr(s->u,16,8,rd(s->r,40,8));
L_1803d5de0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803d5de0_4:;
/* 1803d5de8: cmp dword ptr [rbx + 0x30], edi */
L_1803d5de8_0:;
L_1803d5de8_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d5de8_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5de8_3:;
wr(s->u,36,4,rd(s->u,24,4));
L_1803d5de8_4:;
wr(s->r,512,1,(rd(s->u,36,4)<rd(s->r,56,4)));
L_1803d5de8_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,36,4),rd(s->r,56,4),4,1));
L_1803d5de8_6:;
wr(s->u,40,4,(rd(s->u,36,4)-rd(s->r,56,4)));
L_1803d5de8_7:;
wr(s->r,519,1,(sx(rd(s->u,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5de8_8:;
wr(s->r,518,1,(rd(s->u,40,4)==((U)UINT64_C(0x0))));
L_1803d5de8_9:;
wr(s->u,30,4,(rd(s->u,40,4)&((U)UINT64_C(0xff))));
L_1803d5de8_10:;
wr(s->u,34,1,pop(rd(s->u,30,4),4));
L_1803d5de8_11:;
wr(s->u,35,1,(rd(s->u,34,1)&((U)UINT64_C(0x1))));
L_1803d5de8_12:;
wr(s->r,514,1,(rd(s->u,35,1)==((U)UINT64_C(0x0))));
L_1803d5de8_13:;
/* 1803d5deb: mov ebp, edi */
L_1803d5deb_0:;
L_1803d5deb_1:;
wr(s->r,40,4,rd(s->r,56,4));
L_1803d5deb_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803d5deb_3:;
/* 1803d5ded: jle 0x1803d5e44 */
L_1803d5ded_0:;
L_1803d5ded_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5ded_2:;
wr(s->u,29,1,((rd(s->r,518,1)!=0)||(rd(s->u,28,1)!=0)));
L_1803d5ded_3:;
if(rd(s->u,29,1)){return UINT64_C(0x1803d5e44);}
L_1803d5ded_4:;
return UINT64_C(0x1803d5def);
}
uint64_t b_1803d5def(CPU*s){
/* 1803d5def: lea rsi, [rbx + 0x6738] */
L_1803d5def_0:;
L_1803d5def_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x6738))));
L_1803d5def_2:;
wr(s->r,48,8,rd(s->u,5,8));
L_1803d5def_3:;
/* 1803d5df6: nop word ptr [rax + rax] */
L_1803d5df6_0:;
L_1803d5df6_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803d5df6_2:;
wr(s->u,21,8,(rd(s->r,0,8)+rd(s->u,13,8)));
L_1803d5df6_3:;
/* 1803d5e00: movsxd r8, dword ptr [rbx + 0x6724] */
L_1803d5e00_0:;
L_1803d5e00_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5e00_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5e00_3:;
wr(s->r,128,8,(U)sx(rd(s->u,29,4),4));
L_1803d5e00_4:;
/* 1803d5e07: mov rdx, qword ptr [rsi] */
L_1803d5e07_0:;
L_1803d5e07_1:;
wr(s->u,33,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803d5e07_2:;
wr(s->r,16,8,rd(s->u,33,8));
L_1803d5e07_3:;
/* 1803d5e0a: mov rcx, qword ptr [r12] */
L_1803d5e0a_0:;
L_1803d5e0a_1:;
wr(s->u,33,8,mr((uint64_t)rd(s->r,160,8),8));
L_1803d5e0a_2:;
wr(s->r,8,8,rd(s->u,33,8));
L_1803d5e0a_3:;
/* 1803d5e0e: shl r8, 2 */
L_1803d5e0e_0:;
L_1803d5e0e_1:;
wr(s->u,81,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d5e0e_2:;
wr(s->u,85,8,rd(s->r,128,8));
L_1803d5e0e_3:;
wr(s->r,128,8,((rd(s->u,81,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,81,4))));
L_1803d5e0e_4:;
wr(s->u,64,1,(rd(s->u,81,4)==((U)UINT64_C(0x0))));
L_1803d5e0e_5:;
wr(s->u,65,4,(rd(s->u,81,4)-((U)UINT64_C(0x1))));
L_1803d5e0e_6:;
wr(s->u,69,8,((rd(s->u,65,4)>=64)?0:(rd(s->u,85,8)<<rd(s->u,65,4))));
L_1803d5e0e_7:;
wr(s->u,77,1,(sx(rd(s->u,69,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e0e_8:;
wr(s->u,0,1,rd(s->u,64,1));
L_1803d5e0e_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d5e0e_10:;
wr(s->u,2,1,(!rd(s->u,64,1)));
L_1803d5e0e_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5e0e_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,77,1)));
L_1803d5e0e_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5e0e_14:;
wr(s->u,78,1,(rd(s->u,81,4)==((U)UINT64_C(0x1))));
L_1803d5e0e_15:;
wr(s->u,79,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e0e_16:;
wr(s->u,80,1,(rd(s->r,512,1)^rd(s->u,79,1)));
L_1803d5e0e_17:;
wr(s->u,0,1,rd(s->u,78,1));
L_1803d5e0e_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,80,1)));
L_1803d5e0e_19:;
wr(s->u,2,1,(!rd(s->u,78,1)));
L_1803d5e0e_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5e0e_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d5e0e_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5e0e_23:;
wr(s->u,41,1,(rd(s->u,81,4)!=((U)UINT64_C(0x0))));
L_1803d5e0e_24:;
wr(s->u,42,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e0e_25:;
wr(s->u,43,1,(!rd(s->u,41,1)));
L_1803d5e0e_26:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,519,1)));
L_1803d5e0e_27:;
wr(s->u,45,1,(rd(s->u,41,1)&rd(s->u,42,1)));
L_1803d5e0e_28:;
wr(s->r,519,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803d5e0e_29:;
wr(s->u,46,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5e0e_30:;
wr(s->u,47,1,(!rd(s->u,41,1)));
L_1803d5e0e_31:;
wr(s->u,48,1,(rd(s->u,47,1)&rd(s->r,518,1)));
L_1803d5e0e_32:;
wr(s->u,49,1,(rd(s->u,41,1)&rd(s->u,46,1)));
L_1803d5e0e_33:;
wr(s->r,518,1,(rd(s->u,48,1)|rd(s->u,49,1)));
L_1803d5e0e_34:;
wr(s->u,50,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5e0e_35:;
wr(s->u,58,1,pop(rd(s->u,50,8),8));
L_1803d5e0e_36:;
wr(s->u,59,1,(rd(s->u,58,1)&((U)UINT64_C(0x1))));
L_1803d5e0e_37:;
wr(s->u,60,1,(rd(s->u,59,1)==((U)UINT64_C(0x0))));
L_1803d5e0e_38:;
wr(s->u,61,1,(!rd(s->u,41,1)));
L_1803d5e0e_39:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,514,1)));
L_1803d5e0e_40:;
wr(s->u,63,1,(rd(s->u,41,1)&rd(s->u,60,1)));
L_1803d5e0e_41:;
wr(s->r,514,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803d5e0e_42:;
/* 1803d5e12: call 0x18000d550 */
L_1803d5e12_0:;
L_1803d5e12_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5e12_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5e17)));
L_1803d5e12_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803d5e12_4:;
return UINT64_C(0x1803d5e17);
}
uint64_t b_1803d5e00(CPU*s){
/* 1803d5e00: movsxd r8, dword ptr [rbx + 0x6724] */
L_1803d5e00_0:;
L_1803d5e00_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5e00_2:;
wr(s->u,13,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5e00_3:;
wr(s->r,128,8,(U)sx(rd(s->u,13,4),4));
L_1803d5e00_4:;
/* 1803d5e07: mov rdx, qword ptr [rsi] */
L_1803d5e07_0:;
L_1803d5e07_1:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803d5e07_2:;
wr(s->r,16,8,rd(s->u,17,8));
L_1803d5e07_3:;
/* 1803d5e0a: mov rcx, qword ptr [r12] */
L_1803d5e0a_0:;
L_1803d5e0a_1:;
wr(s->u,17,8,mr((uint64_t)rd(s->r,160,8),8));
L_1803d5e0a_2:;
wr(s->r,8,8,rd(s->u,17,8));
L_1803d5e0a_3:;
/* 1803d5e0e: shl r8, 2 */
L_1803d5e0e_0:;
L_1803d5e0e_1:;
wr(s->u,65,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d5e0e_2:;
wr(s->u,69,8,rd(s->r,128,8));
L_1803d5e0e_3:;
wr(s->r,128,8,((rd(s->u,65,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,65,4))));
L_1803d5e0e_4:;
wr(s->u,48,1,(rd(s->u,65,4)==((U)UINT64_C(0x0))));
L_1803d5e0e_5:;
wr(s->u,49,4,(rd(s->u,65,4)-((U)UINT64_C(0x1))));
L_1803d5e0e_6:;
wr(s->u,53,8,((rd(s->u,49,4)>=64)?0:(rd(s->u,69,8)<<rd(s->u,49,4))));
L_1803d5e0e_7:;
wr(s->u,61,1,(sx(rd(s->u,53,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e0e_8:;
wr(s->u,0,1,rd(s->u,48,1));
L_1803d5e0e_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d5e0e_10:;
wr(s->u,2,1,(!rd(s->u,48,1)));
L_1803d5e0e_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5e0e_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,61,1)));
L_1803d5e0e_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5e0e_14:;
wr(s->u,62,1,(rd(s->u,65,4)==((U)UINT64_C(0x1))));
L_1803d5e0e_15:;
wr(s->u,63,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e0e_16:;
wr(s->u,64,1,(rd(s->r,512,1)^rd(s->u,63,1)));
L_1803d5e0e_17:;
wr(s->u,0,1,rd(s->u,62,1));
L_1803d5e0e_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,64,1)));
L_1803d5e0e_19:;
wr(s->u,2,1,(!rd(s->u,62,1)));
L_1803d5e0e_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5e0e_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d5e0e_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5e0e_23:;
wr(s->u,25,1,(rd(s->u,65,4)!=((U)UINT64_C(0x0))));
L_1803d5e0e_24:;
wr(s->u,26,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e0e_25:;
wr(s->u,27,1,(!rd(s->u,25,1)));
L_1803d5e0e_26:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,519,1)));
L_1803d5e0e_27:;
wr(s->u,29,1,(rd(s->u,25,1)&rd(s->u,26,1)));
L_1803d5e0e_28:;
wr(s->r,519,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803d5e0e_29:;
wr(s->u,30,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5e0e_30:;
wr(s->u,31,1,(!rd(s->u,25,1)));
L_1803d5e0e_31:;
wr(s->u,32,1,(rd(s->u,31,1)&rd(s->r,518,1)));
L_1803d5e0e_32:;
wr(s->u,33,1,(rd(s->u,25,1)&rd(s->u,30,1)));
L_1803d5e0e_33:;
wr(s->r,518,1,(rd(s->u,32,1)|rd(s->u,33,1)));
L_1803d5e0e_34:;
wr(s->u,34,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5e0e_35:;
wr(s->u,42,1,pop(rd(s->u,34,8),8));
L_1803d5e0e_36:;
wr(s->u,43,1,(rd(s->u,42,1)&((U)UINT64_C(0x1))));
L_1803d5e0e_37:;
wr(s->u,44,1,(rd(s->u,43,1)==((U)UINT64_C(0x0))));
L_1803d5e0e_38:;
wr(s->u,45,1,(!rd(s->u,25,1)));
L_1803d5e0e_39:;
wr(s->u,46,1,(rd(s->u,45,1)&rd(s->r,514,1)));
L_1803d5e0e_40:;
wr(s->u,47,1,(rd(s->u,25,1)&rd(s->u,44,1)));
L_1803d5e0e_41:;
wr(s->r,514,1,(rd(s->u,46,1)|rd(s->u,47,1)));
L_1803d5e0e_42:;
/* 1803d5e12: call 0x18000d550 */
L_1803d5e12_0:;
L_1803d5e12_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5e12_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5e17)));
L_1803d5e12_3:;
return (uint64_t)UINT64_C(0x18000d550);
L_1803d5e12_4:;
return UINT64_C(0x1803d5e17);
}
uint64_t b_1803d5e17(CPU*s){
/* 1803d5e17: mov rcx, qword ptr [rsi] */
L_1803d5e17_0:;
L_1803d5e17_1:;
wr(s->u,33,8,mr((uint64_t)rd(s->r,48,8),8));
L_1803d5e17_2:;
wr(s->r,8,8,rd(s->u,33,8));
L_1803d5e17_3:;
/* 1803d5e1a: movsxd rax, dword ptr [rbx + 0x6720] */
L_1803d5e1a_0:;
L_1803d5e1a_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x6720))));
L_1803d5e1a_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5e1a_3:;
wr(s->r,0,8,(U)sx(rd(s->u,29,4),4));
L_1803d5e1a_4:;
/* 1803d5e21: movsxd r8, dword ptr [rbx + 0x6724] */
L_1803d5e21_0:;
L_1803d5e21_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5e21_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5e21_3:;
wr(s->r,128,8,(U)sx(rd(s->u,29,4),4));
L_1803d5e21_4:;
/* 1803d5e28: lea rdx, [rcx + rax*4] */
L_1803d5e28_0:;
L_1803d5e28_1:;
wr(s->u,13,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803d5e28_2:;
wr(s->u,21,8,(rd(s->r,8,8)+rd(s->u,13,8)));
L_1803d5e28_3:;
wr(s->r,16,8,rd(s->u,21,8));
L_1803d5e28_4:;
/* 1803d5e2c: shl r8, 2 */
L_1803d5e2c_0:;
L_1803d5e2c_1:;
wr(s->u,81,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d5e2c_2:;
wr(s->u,85,8,rd(s->r,128,8));
L_1803d5e2c_3:;
wr(s->r,128,8,((rd(s->u,81,4)>=64)?0:(rd(s->r,128,8)<<rd(s->u,81,4))));
L_1803d5e2c_4:;
wr(s->u,64,1,(rd(s->u,81,4)==((U)UINT64_C(0x0))));
L_1803d5e2c_5:;
wr(s->u,65,4,(rd(s->u,81,4)-((U)UINT64_C(0x1))));
L_1803d5e2c_6:;
wr(s->u,69,8,((rd(s->u,65,4)>=64)?0:(rd(s->u,85,8)<<rd(s->u,65,4))));
L_1803d5e2c_7:;
wr(s->u,77,1,(sx(rd(s->u,69,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e2c_8:;
wr(s->u,0,1,rd(s->u,64,1));
L_1803d5e2c_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d5e2c_10:;
wr(s->u,2,1,(!rd(s->u,64,1)));
L_1803d5e2c_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5e2c_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,77,1)));
L_1803d5e2c_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5e2c_14:;
wr(s->u,78,1,(rd(s->u,81,4)==((U)UINT64_C(0x1))));
L_1803d5e2c_15:;
wr(s->u,79,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e2c_16:;
wr(s->u,80,1,(rd(s->r,512,1)^rd(s->u,79,1)));
L_1803d5e2c_17:;
wr(s->u,0,1,rd(s->u,78,1));
L_1803d5e2c_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,80,1)));
L_1803d5e2c_19:;
wr(s->u,2,1,(!rd(s->u,78,1)));
L_1803d5e2c_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5e2c_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d5e2c_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5e2c_23:;
wr(s->u,41,1,(rd(s->u,81,4)!=((U)UINT64_C(0x0))));
L_1803d5e2c_24:;
wr(s->u,42,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e2c_25:;
wr(s->u,43,1,(!rd(s->u,41,1)));
L_1803d5e2c_26:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,519,1)));
L_1803d5e2c_27:;
wr(s->u,45,1,(rd(s->u,41,1)&rd(s->u,42,1)));
L_1803d5e2c_28:;
wr(s->r,519,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803d5e2c_29:;
wr(s->u,46,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803d5e2c_30:;
wr(s->u,47,1,(!rd(s->u,41,1)));
L_1803d5e2c_31:;
wr(s->u,48,1,(rd(s->u,47,1)&rd(s->r,518,1)));
L_1803d5e2c_32:;
wr(s->u,49,1,(rd(s->u,41,1)&rd(s->u,46,1)));
L_1803d5e2c_33:;
wr(s->r,518,1,(rd(s->u,48,1)|rd(s->u,49,1)));
L_1803d5e2c_34:;
wr(s->u,50,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803d5e2c_35:;
wr(s->u,58,1,pop(rd(s->u,50,8),8));
L_1803d5e2c_36:;
wr(s->u,59,1,(rd(s->u,58,1)&((U)UINT64_C(0x1))));
L_1803d5e2c_37:;
wr(s->u,60,1,(rd(s->u,59,1)==((U)UINT64_C(0x0))));
L_1803d5e2c_38:;
wr(s->u,61,1,(!rd(s->u,41,1)));
L_1803d5e2c_39:;
wr(s->u,62,1,(rd(s->u,61,1)&rd(s->r,514,1)));
L_1803d5e2c_40:;
wr(s->u,63,1,(rd(s->u,41,1)&rd(s->u,60,1)));
L_1803d5e2c_41:;
wr(s->r,514,1,(rd(s->u,62,1)|rd(s->u,63,1)));
L_1803d5e2c_42:;
/* 1803d5e30: call 0x180609ade */
L_1803d5e30_0:;
L_1803d5e30_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5e30_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5e35)));
L_1803d5e30_3:;
return (uint64_t)UINT64_C(0x180609ade);
L_1803d5e30_4:;
return UINT64_C(0x1803d5e35);
}
uint64_t b_1803d5e35(CPU*s){
/* 1803d5e35: inc ebp */
L_1803d5e35_0:;
L_1803d5e35_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),((U)UINT64_C(0x1)),4,0));
L_1803d5e35_2:;
wr(s->r,40,4,(rd(s->r,40,4)+((U)UINT64_C(0x1))));
L_1803d5e35_3:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803d5e35_4:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5e35_5:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803d5e35_6:;
wr(s->u,13,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803d5e35_7:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803d5e35_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5e35_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5e35_10:;
/* 1803d5e37: add r12, 8 */
L_1803d5e37_0:;
L_1803d5e37_1:;
wr(s->r,512,1,(((rd(s->r,160,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,160,8)));
L_1803d5e37_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,8),((U)UINT64_C(0x8)),8,0));
L_1803d5e37_3:;
wr(s->r,160,8,(rd(s->r,160,8)+((U)UINT64_C(0x8))));
L_1803d5e37_4:;
wr(s->r,519,1,(sx(rd(s->r,160,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e37_5:;
wr(s->r,518,1,(rd(s->r,160,8)==((U)UINT64_C(0x0))));
L_1803d5e37_6:;
wr(s->u,13,8,(rd(s->r,160,8)&((U)UINT64_C(0xff))));
L_1803d5e37_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803d5e37_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5e37_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5e37_10:;
/* 1803d5e3b: add rsi, 8 */
L_1803d5e3b_0:;
L_1803d5e3b_1:;
wr(s->r,512,1,(((rd(s->r,48,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,48,8)));
L_1803d5e3b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,8),((U)UINT64_C(0x8)),8,0));
L_1803d5e3b_3:;
wr(s->r,48,8,(rd(s->r,48,8)+((U)UINT64_C(0x8))));
L_1803d5e3b_4:;
wr(s->r,519,1,(sx(rd(s->r,48,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e3b_5:;
wr(s->r,518,1,(rd(s->r,48,8)==((U)UINT64_C(0x0))));
L_1803d5e3b_6:;
wr(s->u,13,8,(rd(s->r,48,8)&((U)UINT64_C(0xff))));
L_1803d5e3b_7:;
wr(s->u,21,1,pop(rd(s->u,13,8),8));
L_1803d5e3b_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5e3b_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5e3b_10:;
/* 1803d5e3f: cmp ebp, dword ptr [rbx + 0x30] */
L_1803d5e3f_0:;
L_1803d5e3f_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d5e3f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5e3f_3:;
wr(s->u,23,4,rd(s->u,8,4));
L_1803d5e3f_4:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,23,4)));
L_1803d5e3f_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,23,4),4,1));
L_1803d5e3f_6:;
wr(s->u,27,4,(rd(s->r,40,4)-rd(s->u,23,4)));
L_1803d5e3f_7:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5e3f_8:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803d5e3f_9:;
wr(s->u,13,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803d5e3f_10:;
wr(s->u,21,1,pop(rd(s->u,13,4),4));
L_1803d5e3f_11:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803d5e3f_12:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803d5e3f_13:;
/* 1803d5e42: jl 0x1803d5e00 */
L_1803d5e42_0:;
L_1803d5e42_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5e42_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803d5e00);}
L_1803d5e42_3:;
return UINT64_C(0x1803d5e44);
}
uint64_t b_1803d5e44(CPU*s){
/* 1803d5e44: mov eax, dword ptr [rbx + 0x6724] */
L_1803d5e44_0:;
L_1803d5e44_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5e44_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5e44_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803d5e44_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5e44_5:;
/* 1803d5e4a: mov rbp, qword ptr [rsp + 0x1b0] */
L_1803d5e4a_0:;
L_1803d5e4a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x1b0))+rd(s->r,32,8)));
L_1803d5e4a_2:;
wr(s->u,24,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803d5e4a_3:;
wr(s->r,40,8,rd(s->u,24,8));
L_1803d5e4a_4:;
/* 1803d5e52: mov dword ptr [rbx + 0x6724], edi */
L_1803d5e52_0:;
L_1803d5e52_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5e52_2:;
wr(s->u,16,4,rd(s->r,56,4));
L_1803d5e52_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803d5e52_4:;
/* 1803d5e58: jmp 0x1803d5e5d */
L_1803d5e58_0:;
L_1803d5e58_1:;
return UINT64_C(0x1803d5e5d);
L_1803d5e58_2:;
return UINT64_C(0x1803d5e5a);
}
uint64_t b_1803d5e5a(CPU*s){
/* 1803d5e5a: or eax, 0xffffffff */
L_1803d5e5a_0:;
L_1803d5e5a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5e5a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5e5a_3:;
wr(s->r,0,4,(rd(s->r,0,4)|((U)UINT64_C(0xffffffff))));
L_1803d5e5a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5e5a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5e5a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5e5a_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5e5a_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803d5e5a_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5e5a_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5e5a_11:;
/* 1803d5e5d: mov rdi, qword ptr [rsp + 0x1c0] */
L_1803d5e5d_0:;
L_1803d5e5d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1c0))+rd(s->r,32,8)));
L_1803d5e5d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5e5d_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803d5e5d_4:;
/* 1803d5e65: mov rsi, qword ptr [rsp + 0x1b8] */
L_1803d5e65_0:;
L_1803d5e65_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1b8))+rd(s->r,32,8)));
L_1803d5e65_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5e65_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803d5e65_4:;
/* 1803d5e6d: mov rbx, qword ptr [rsp + 0x1c8] */
L_1803d5e6d_0:;
L_1803d5e6d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1c8))+rd(s->r,32,8)));
L_1803d5e6d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5e6d_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803d5e6d_4:;
/* 1803d5e75: add rsp, 0x1a0 */
L_1803d5e75_0:;
L_1803d5e75_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x1a0)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5e75_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x1a0)),8,0));
L_1803d5e75_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x1a0))));
L_1803d5e75_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e75_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5e75_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5e75_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d5e75_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5e75_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5e75_10:;
/* 1803d5e7c: pop r12 */
L_1803d5e7c_0:;
L_1803d5e7c_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5e7c_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5e7c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5e7c_4:;
wr(s->r,160,8,rd(s->u,26,8));
L_1803d5e7c_5:;
/* 1803d5e7e: ret  */
L_1803d5e7e_0:;
L_1803d5e7e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5e7e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5e7e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5e7e_4:;
return UINT64_C(0x1803d5e7f);
}
uint64_t b_1803d5e5d(CPU*s){
/* 1803d5e5d: mov rdi, qword ptr [rsp + 0x1c0] */
L_1803d5e5d_0:;
L_1803d5e5d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1c0))+rd(s->r,32,8)));
L_1803d5e5d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5e5d_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803d5e5d_4:;
/* 1803d5e65: mov rsi, qword ptr [rsp + 0x1b8] */
L_1803d5e65_0:;
L_1803d5e65_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1b8))+rd(s->r,32,8)));
L_1803d5e65_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5e65_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803d5e65_4:;
/* 1803d5e6d: mov rbx, qword ptr [rsp + 0x1c8] */
L_1803d5e6d_0:;
L_1803d5e6d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x1c8))+rd(s->r,32,8)));
L_1803d5e6d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5e6d_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803d5e6d_4:;
/* 1803d5e75: add rsp, 0x1a0 */
L_1803d5e75_0:;
L_1803d5e75_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x1a0)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5e75_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x1a0)),8,0));
L_1803d5e75_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x1a0))));
L_1803d5e75_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e75_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5e75_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5e75_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d5e75_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5e75_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5e75_10:;
/* 1803d5e7c: pop r12 */
L_1803d5e7c_0:;
L_1803d5e7c_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5e7c_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5e7c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5e7c_4:;
wr(s->r,160,8,rd(s->u,26,8));
L_1803d5e7c_5:;
/* 1803d5e7e: ret  */
L_1803d5e7e_0:;
L_1803d5e7e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5e7e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5e7e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5e7e_4:;
return UINT64_C(0x1803d5e7f);
}
uint64_t b_1803d5e80(CPU*s){
/* 1803d5e80: push rbx */
L_1803d5e80_0:;
L_1803d5e80_1:;
wr(s->u,0,8,rd(s->r,24,8));
L_1803d5e80_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5e80_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803d5e80_4:;
/* 1803d5e82: sub rsp, 0x20 */
L_1803d5e82_0:;
L_1803d5e82_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803d5e82_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803d5e82_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803d5e82_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5e82_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5e82_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5e82_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803d5e82_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803d5e82_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803d5e82_10:;
/* 1803d5e86: mov rbx, rcx */
L_1803d5e86_0:;
L_1803d5e86_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803d5e86_2:;
/* 1803d5e89: call 0x1803dca50 */
L_1803d5e89_0:;
L_1803d5e89_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5e89_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5e8e)));
L_1803d5e89_3:;
return (uint64_t)UINT64_C(0x1803dca50);
L_1803d5e89_4:;
return UINT64_C(0x1803d5e8e);
}
uint64_t b_1803d5e8e(CPU*s){
/* 1803d5e8e: test eax, eax */
L_1803d5e8e_0:;
L_1803d5e8e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5e8e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5e8e_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803d5e8e_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5e8e_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803d5e8e_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803d5e8e_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803d5e8e_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803d5e8e_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803d5e8e_10:;
/* 1803d5e90: jne 0x1803d5f09 */
L_1803d5e90_0:;
L_1803d5e90_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803d5e90_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803d5f09);}
L_1803d5e90_3:;
return UINT64_C(0x1803d5e92);
}
uint64_t b_1803d5e92(CPU*s){
/* 1803d5e92: cmp dword ptr [rbx + 0x6734], eax */
L_1803d5e92_0:;
L_1803d5e92_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6734))));
L_1803d5e92_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5e92_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1803d5e92_4:;
wr(s->r,512,1,(rd(s->u,18,4)<rd(s->r,0,4)));
L_1803d5e92_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),rd(s->r,0,4),4,1));
L_1803d5e92_6:;
wr(s->u,22,4,(rd(s->u,18,4)-rd(s->r,0,4)));
L_1803d5e92_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5e92_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803d5e92_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803d5e92_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803d5e92_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803d5e92_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803d5e92_13:;
/* 1803d5e98: je 0x1803d5f07 */
L_1803d5e98_0:;
L_1803d5e98_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d5f07);}
L_1803d5e98_2:;
return UINT64_C(0x1803d5e9a);
}
uint64_t b_1803d5e9a(CPU*s){
/* 1803d5e9a: mov rax, qword ptr [rbx] */
L_1803d5e9a_0:;
L_1803d5e9a_1:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803d5e9a_2:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803d5e9a_3:;
/* 1803d5e9d: mov rcx, rbx */
L_1803d5e9d_0:;
L_1803d5e9d_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803d5e9d_2:;
/* 1803d5ea0: mov qword ptr [rsp + 0x30], rdi */
L_1803d5ea0_0:;
L_1803d5ea0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803d5ea0_2:;
wr(s->u,24,8,rd(s->r,56,8));
L_1803d5ea0_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803d5ea0_4:;
/* 1803d5ea5: movsxd rdi, dword ptr [rbx + 0x672c] */
L_1803d5ea5_0:;
L_1803d5ea5_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x672c))));
L_1803d5ea5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803d5ea5_3:;
wr(s->r,56,8,(U)sx(rd(s->u,32,4),4));
L_1803d5ea5_4:;
/* 1803d5eac: call qword ptr [rax + 0x10] */
L_1803d5eac_0:;
L_1803d5eac_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803d5eac_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5eac_3:;
wr(s->u,44,8,rd(s->u,36,8));
L_1803d5eac_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5eac_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5eaf)));
L_1803d5eac_6:;
return (uint64_t)rd(s->u,44,8);
L_1803d5eac_7:;
return UINT64_C(0x1803d5eaf);
}
uint64_t b_1803d5ea0(CPU*s){
/* 1803d5ea0: mov qword ptr [rsp + 0x30], rdi */
L_1803d5ea0_0:;
L_1803d5ea0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803d5ea0_2:;
wr(s->u,24,8,rd(s->r,56,8));
L_1803d5ea0_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803d5ea0_4:;
/* 1803d5ea5: movsxd rdi, dword ptr [rbx + 0x672c] */
L_1803d5ea5_0:;
L_1803d5ea5_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x672c))));
L_1803d5ea5_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803d5ea5_3:;
wr(s->r,56,8,(U)sx(rd(s->u,32,4),4));
L_1803d5ea5_4:;
/* 1803d5eac: call qword ptr [rax + 0x10] */
L_1803d5eac_0:;
L_1803d5eac_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803d5eac_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5eac_3:;
wr(s->u,44,8,rd(s->u,36,8));
L_1803d5eac_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5eac_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5eaf)));
L_1803d5eac_6:;
return (uint64_t)rd(s->u,44,8);
L_1803d5eac_7:;
return UINT64_C(0x1803d5eaf);
}
uint64_t b_1803d5eaf(CPU*s){
/* 1803d5eaf: xor r8d, r8d */
L_1803d5eaf_0:;
L_1803d5eaf_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5eaf_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5eaf_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803d5eaf_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803d5eaf_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5eaf_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803d5eaf_7:;
wr(s->u,26,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803d5eaf_8:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803d5eaf_9:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803d5eaf_10:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803d5eaf_11:;
/* 1803d5eb2: mov dword ptr [rbx + 0x672c], eax */
L_1803d5eb2_0:;
L_1803d5eb2_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x672c))));
L_1803d5eb2_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803d5eb2_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803d5eb2_4:;
/* 1803d5eb8: neg eax */
L_1803d5eb8_0:;
L_1803d5eb8_1:;
wr(s->r,512,1,(rd(s->r,0,4)!=((U)UINT64_C(0x0))));
L_1803d5eb8_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,4),4,1));
L_1803d5eb8_3:;
wr(s->r,0,4,(-rd(s->r,0,4)));
L_1803d5eb8_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5eb8_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5eb8_6:;
wr(s->u,26,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5eb8_7:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803d5eb8_8:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803d5eb8_9:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803d5eb8_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5eb8_11:;
/* 1803d5eba: cmp dword ptr [rbx + 0x30], r8d */
L_1803d5eba_0:;
L_1803d5eba_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d5eba_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5eba_3:;
wr(s->u,32,4,rd(s->u,20,4));
L_1803d5eba_4:;
wr(s->r,512,1,(rd(s->u,32,4)<rd(s->r,128,4)));
L_1803d5eba_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,32,4),rd(s->r,128,4),4,1));
L_1803d5eba_6:;
wr(s->u,36,4,(rd(s->u,32,4)-rd(s->r,128,4)));
L_1803d5eba_7:;
wr(s->r,519,1,(sx(rd(s->u,36,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5eba_8:;
wr(s->r,518,1,(rd(s->u,36,4)==((U)UINT64_C(0x0))));
L_1803d5eba_9:;
wr(s->u,26,4,(rd(s->u,36,4)&((U)UINT64_C(0xff))));
L_1803d5eba_10:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803d5eba_11:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803d5eba_12:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803d5eba_13:;
/* 1803d5ebe: mov dword ptr [rbx + 0x6724], eax */
L_1803d5ebe_0:;
L_1803d5ebe_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5ebe_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803d5ebe_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803d5ebe_4:;
/* 1803d5ec4: jle 0x1803d5f02 */
L_1803d5ec4_0:;
L_1803d5ec4_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5ec4_2:;
wr(s->u,25,1,((rd(s->r,518,1)!=0)||(rd(s->u,24,1)!=0)));
L_1803d5ec4_3:;
if(rd(s->u,25,1)){return UINT64_C(0x1803d5f02);}
L_1803d5ec4_4:;
return UINT64_C(0x1803d5ec6);
}
uint64_t b_1803d5ec6(CPU*s){
/* 1803d5ec6: mov r9, rdi */
L_1803d5ec6_0:;
L_1803d5ec6_1:;
wr(s->r,136,8,rd(s->r,56,8));
L_1803d5ec6_2:;
/* 1803d5ec9: lea rdx, [rbx + 0x6738] */
L_1803d5ec9_0:;
L_1803d5ec9_1:;
wr(s->u,13,8,(rd(s->r,24,8)+((U)UINT64_C(0x6738))));
L_1803d5ec9_2:;
wr(s->r,16,8,rd(s->u,13,8));
L_1803d5ec9_3:;
/* 1803d5ed0: shl r9, 2 */
L_1803d5ed0_0:;
L_1803d5ed0_1:;
wr(s->u,136,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d5ed0_2:;
wr(s->u,140,8,rd(s->r,136,8));
L_1803d5ed0_3:;
wr(s->r,136,8,((rd(s->u,136,4)>=64)?0:(rd(s->r,136,8)<<rd(s->u,136,4))));
L_1803d5ed0_4:;
wr(s->u,111,1,(rd(s->u,136,4)==((U)UINT64_C(0x0))));
L_1803d5ed0_5:;
wr(s->u,112,4,(rd(s->u,136,4)-((U)UINT64_C(0x1))));
L_1803d5ed0_6:;
wr(s->u,116,8,((rd(s->u,112,4)>=64)?0:(rd(s->u,140,8)<<rd(s->u,112,4))));
L_1803d5ed0_7:;
wr(s->u,124,1,(sx(rd(s->u,116,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5ed0_8:;
wr(s->u,0,1,rd(s->u,111,1));
L_1803d5ed0_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d5ed0_10:;
wr(s->u,2,1,(!rd(s->u,111,1)));
L_1803d5ed0_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5ed0_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,124,1)));
L_1803d5ed0_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5ed0_14:;
wr(s->u,125,1,(rd(s->u,136,4)==((U)UINT64_C(0x1))));
L_1803d5ed0_15:;
wr(s->u,126,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5ed0_16:;
wr(s->u,127,1,(rd(s->r,512,1)^rd(s->u,126,1)));
L_1803d5ed0_17:;
wr(s->u,0,1,rd(s->u,125,1));
L_1803d5ed0_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,127,1)));
L_1803d5ed0_19:;
wr(s->u,2,1,(!rd(s->u,125,1)));
L_1803d5ed0_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5ed0_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d5ed0_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5ed0_23:;
wr(s->u,88,1,(rd(s->u,136,4)!=((U)UINT64_C(0x0))));
L_1803d5ed0_24:;
wr(s->u,89,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5ed0_25:;
wr(s->u,90,1,(!rd(s->u,88,1)));
L_1803d5ed0_26:;
wr(s->u,91,1,(rd(s->u,90,1)&rd(s->r,519,1)));
L_1803d5ed0_27:;
wr(s->u,92,1,(rd(s->u,88,1)&rd(s->u,89,1)));
L_1803d5ed0_28:;
wr(s->r,519,1,(rd(s->u,91,1)|rd(s->u,92,1)));
L_1803d5ed0_29:;
wr(s->u,93,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803d5ed0_30:;
wr(s->u,94,1,(!rd(s->u,88,1)));
L_1803d5ed0_31:;
wr(s->u,95,1,(rd(s->u,94,1)&rd(s->r,518,1)));
L_1803d5ed0_32:;
wr(s->u,96,1,(rd(s->u,88,1)&rd(s->u,93,1)));
L_1803d5ed0_33:;
wr(s->r,518,1,(rd(s->u,95,1)|rd(s->u,96,1)));
L_1803d5ed0_34:;
wr(s->u,97,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803d5ed0_35:;
wr(s->u,105,1,pop(rd(s->u,97,8),8));
L_1803d5ed0_36:;
wr(s->u,106,1,(rd(s->u,105,1)&((U)UINT64_C(0x1))));
L_1803d5ed0_37:;
wr(s->u,107,1,(rd(s->u,106,1)==((U)UINT64_C(0x0))));
L_1803d5ed0_38:;
wr(s->u,108,1,(!rd(s->u,88,1)));
L_1803d5ed0_39:;
wr(s->u,109,1,(rd(s->u,108,1)&rd(s->r,514,1)));
L_1803d5ed0_40:;
wr(s->u,110,1,(rd(s->u,88,1)&rd(s->u,107,1)));
L_1803d5ed0_41:;
wr(s->r,514,1,(rd(s->u,109,1)|rd(s->u,110,1)));
L_1803d5ed0_42:;
/* 1803d5ed4: nop word ptr [rax + rax] */
L_1803d5ed4_0:;
L_1803d5ed4_1:;
wr(s->u,37,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803d5ed4_2:;
wr(s->u,45,8,(rd(s->r,0,8)+rd(s->u,37,8)));
L_1803d5ed4_3:;
/* 1803d5ee0: sub qword ptr [rdx], r9 */
L_1803d5ee0_0:;
L_1803d5ee0_1:;
wr(s->u,57,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee0_2:;
wr(s->r,512,1,(rd(s->u,57,8)<rd(s->r,136,8)));
L_1803d5ee0_3:;
wr(s->u,57,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee0_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,57,8),rd(s->r,136,8),8,1));
L_1803d5ee0_5:;
wr(s->u,57,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee0_6:;
wr(s->u,57,8,(rd(s->u,57,8)-rd(s->r,136,8)));
L_1803d5ee0_7:;
mw((uint64_t)rd(s->r,16,8),8,rd(s->u,57,8));
L_1803d5ee0_8:;
wr(s->u,57,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee0_9:;
wr(s->r,519,1,(sx(rd(s->u,57,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5ee0_10:;
wr(s->u,57,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee0_11:;
wr(s->r,518,1,(rd(s->u,57,8)==((U)UINT64_C(0x0))));
L_1803d5ee0_12:;
wr(s->u,57,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee0_13:;
wr(s->u,78,8,(rd(s->u,57,8)&((U)UINT64_C(0xff))));
L_1803d5ee0_14:;
wr(s->u,86,1,pop(rd(s->u,78,8),8));
L_1803d5ee0_15:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803d5ee0_16:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803d5ee0_17:;
/* 1803d5ee3: mov rcx, qword ptr [rdx] */
L_1803d5ee3_0:;
L_1803d5ee3_1:;
wr(s->u,69,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee3_2:;
wr(s->r,8,8,rd(s->u,69,8));
L_1803d5ee3_3:;
/* 1803d5ee6: movsxd rax, dword ptr [rbx + 0x672c] */
L_1803d5ee6_0:;
L_1803d5ee6_1:;
wr(s->u,13,8,(rd(s->r,24,8)+((U)UINT64_C(0x672c))));
L_1803d5ee6_2:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803d5ee6_3:;
wr(s->r,0,8,(U)sx(rd(s->u,65,4),4));
L_1803d5ee6_4:;
/* 1803d5eed: lea rcx, [rcx + rax*4] */
L_1803d5eed_0:;
L_1803d5eed_1:;
wr(s->u,21,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803d5eed_2:;
wr(s->u,29,8,(rd(s->r,8,8)+rd(s->u,21,8)));
L_1803d5eed_3:;
wr(s->r,8,8,rd(s->u,29,8));
L_1803d5eed_4:;
/* 1803d5ef1: inc r8d */
L_1803d5ef1_0:;
L_1803d5ef1_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803d5ef1_2:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803d5ef1_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803d5ef1_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5ef1_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803d5ef1_6:;
wr(s->u,78,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803d5ef1_7:;
wr(s->u,86,1,pop(rd(s->u,78,4),4));
L_1803d5ef1_8:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803d5ef1_9:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803d5ef1_10:;
/* 1803d5ef4: add rdx, 8 */
L_1803d5ef4_0:;
L_1803d5ef4_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803d5ef4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803d5ef4_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803d5ef4_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5ef4_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803d5ef4_6:;
wr(s->u,78,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803d5ef4_7:;
wr(s->u,86,1,pop(rd(s->u,78,8),8));
L_1803d5ef4_8:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803d5ef4_9:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803d5ef4_10:;
/* 1803d5ef8: mov qword ptr [rdx - 8], rcx */
L_1803d5ef8_0:;
L_1803d5ef8_1:;
wr(s->u,5,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5ef8_2:;
wr(s->u,57,8,rd(s->r,8,8));
L_1803d5ef8_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,57,8));
L_1803d5ef8_4:;
/* 1803d5efc: cmp r8d, dword ptr [rbx + 0x30] */
L_1803d5efc_0:;
L_1803d5efc_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d5efc_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5efc_3:;
wr(s->u,128,4,rd(s->u,53,4));
L_1803d5efc_4:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->u,128,4)));
L_1803d5efc_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->u,128,4),4,1));
L_1803d5efc_6:;
wr(s->u,132,4,(rd(s->r,128,4)-rd(s->u,128,4)));
L_1803d5efc_7:;
wr(s->r,519,1,(sx(rd(s->u,132,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5efc_8:;
wr(s->r,518,1,(rd(s->u,132,4)==((U)UINT64_C(0x0))));
L_1803d5efc_9:;
wr(s->u,78,4,(rd(s->u,132,4)&((U)UINT64_C(0xff))));
L_1803d5efc_10:;
wr(s->u,86,1,pop(rd(s->u,78,4),4));
L_1803d5efc_11:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803d5efc_12:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803d5efc_13:;
/* 1803d5f00: jl 0x1803d5ee0 */
L_1803d5f00_0:;
L_1803d5f00_1:;
wr(s->u,77,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5f00_2:;
if(rd(s->u,77,1)){goto L_1803d5ee0_0;}
L_1803d5f00_3:;
return UINT64_C(0x1803d5f02);
}
uint64_t b_1803d5ee0(CPU*s){
/* 1803d5ee0: sub qword ptr [rdx], r9 */
L_1803d5ee0_0:;
L_1803d5ee0_1:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee0_2:;
wr(s->r,512,1,(rd(s->u,36,8)<rd(s->r,136,8)));
L_1803d5ee0_3:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee0_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,36,8),rd(s->r,136,8),8,1));
L_1803d5ee0_5:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee0_6:;
wr(s->u,36,8,(rd(s->u,36,8)-rd(s->r,136,8)));
L_1803d5ee0_7:;
mw((uint64_t)rd(s->r,16,8),8,rd(s->u,36,8));
L_1803d5ee0_8:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee0_9:;
wr(s->r,519,1,(sx(rd(s->u,36,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5ee0_10:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee0_11:;
wr(s->r,518,1,(rd(s->u,36,8)==((U)UINT64_C(0x0))));
L_1803d5ee0_12:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee0_13:;
wr(s->u,57,8,(rd(s->u,36,8)&((U)UINT64_C(0xff))));
L_1803d5ee0_14:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803d5ee0_15:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803d5ee0_16:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803d5ee0_17:;
/* 1803d5ee3: mov rcx, qword ptr [rdx] */
L_1803d5ee3_0:;
L_1803d5ee3_1:;
wr(s->u,48,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5ee3_2:;
wr(s->r,8,8,rd(s->u,48,8));
L_1803d5ee3_3:;
/* 1803d5ee6: movsxd rax, dword ptr [rbx + 0x672c] */
L_1803d5ee6_0:;
L_1803d5ee6_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x672c))));
L_1803d5ee6_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803d5ee6_3:;
wr(s->r,0,8,(U)sx(rd(s->u,44,4),4));
L_1803d5ee6_4:;
/* 1803d5eed: lea rcx, [rcx + rax*4] */
L_1803d5eed_0:;
L_1803d5eed_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803d5eed_2:;
wr(s->u,24,8,(rd(s->r,8,8)+rd(s->u,16,8)));
L_1803d5eed_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803d5eed_4:;
/* 1803d5ef1: inc r8d */
L_1803d5ef1_0:;
L_1803d5ef1_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803d5ef1_2:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803d5ef1_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803d5ef1_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5ef1_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803d5ef1_6:;
wr(s->u,57,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803d5ef1_7:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803d5ef1_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803d5ef1_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803d5ef1_10:;
/* 1803d5ef4: add rdx, 8 */
L_1803d5ef4_0:;
L_1803d5ef4_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803d5ef4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803d5ef4_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803d5ef4_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5ef4_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803d5ef4_6:;
wr(s->u,57,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803d5ef4_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803d5ef4_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803d5ef4_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803d5ef4_10:;
/* 1803d5ef8: mov qword ptr [rdx - 8], rcx */
L_1803d5ef8_0:;
L_1803d5ef8_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5ef8_2:;
wr(s->u,36,8,rd(s->r,8,8));
L_1803d5ef8_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,36,8));
L_1803d5ef8_4:;
/* 1803d5efc: cmp r8d, dword ptr [rbx + 0x30] */
L_1803d5efc_0:;
L_1803d5efc_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d5efc_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5efc_3:;
wr(s->u,67,4,rd(s->u,32,4));
L_1803d5efc_4:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->u,67,4)));
L_1803d5efc_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->u,67,4),4,1));
L_1803d5efc_6:;
wr(s->u,71,4,(rd(s->r,128,4)-rd(s->u,67,4)));
L_1803d5efc_7:;
wr(s->r,519,1,(sx(rd(s->u,71,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5efc_8:;
wr(s->r,518,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803d5efc_9:;
wr(s->u,57,4,(rd(s->u,71,4)&((U)UINT64_C(0xff))));
L_1803d5efc_10:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803d5efc_11:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803d5efc_12:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803d5efc_13:;
/* 1803d5f00: jl 0x1803d5ee0 */
L_1803d5f00_0:;
L_1803d5f00_1:;
wr(s->u,56,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5f00_2:;
if(rd(s->u,56,1)){goto L_1803d5ee0_0;}
L_1803d5f00_3:;
return UINT64_C(0x1803d5f02);
}
uint64_t b_1803d5f02(CPU*s){
/* 1803d5f02: mov rdi, qword ptr [rsp + 0x30] */
L_1803d5f02_0:;
L_1803d5f02_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803d5f02_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5f02_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803d5f02_4:;
/* 1803d5f07: xor eax, eax */
L_1803d5f07_0:;
L_1803d5f07_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5f07_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5f07_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803d5f07_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5f07_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5f07_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5f07_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5f07_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803d5f07_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5f07_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5f07_11:;
/* 1803d5f09: add rsp, 0x20 */
L_1803d5f09_0:;
L_1803d5f09_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5f09_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803d5f09_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803d5f09_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f09_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5f09_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5f09_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d5f09_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5f09_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5f09_10:;
/* 1803d5f0d: pop rbx */
L_1803d5f0d_0:;
L_1803d5f0d_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5f0d_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5f0d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5f0d_4:;
wr(s->r,24,8,rd(s->u,26,8));
L_1803d5f0d_5:;
/* 1803d5f0e: ret  */
L_1803d5f0e_0:;
L_1803d5f0e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5f0e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5f0e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5f0e_4:;
return UINT64_C(0x1803d5f0f);
}
uint64_t b_1803d5f07(CPU*s){
/* 1803d5f07: xor eax, eax */
L_1803d5f07_0:;
L_1803d5f07_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5f07_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5f07_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803d5f07_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5f07_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5f07_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5f07_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5f07_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803d5f07_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5f07_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5f07_11:;
/* 1803d5f09: add rsp, 0x20 */
L_1803d5f09_0:;
L_1803d5f09_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5f09_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803d5f09_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803d5f09_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f09_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5f09_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5f09_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5f09_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5f09_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5f09_10:;
/* 1803d5f0d: pop rbx */
L_1803d5f0d_0:;
L_1803d5f0d_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803d5f0d_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5f0d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5f0d_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803d5f0d_5:;
/* 1803d5f0e: ret  */
L_1803d5f0e_0:;
L_1803d5f0e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5f0e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5f0e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5f0e_4:;
return UINT64_C(0x1803d5f0f);
}
uint64_t b_1803d5f09(CPU*s){
/* 1803d5f09: add rsp, 0x20 */
L_1803d5f09_0:;
L_1803d5f09_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5f09_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803d5f09_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803d5f09_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f09_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5f09_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5f09_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5f09_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5f09_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5f09_10:;
/* 1803d5f0d: pop rbx */
L_1803d5f0d_0:;
L_1803d5f0d_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803d5f0d_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5f0d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5f0d_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803d5f0d_5:;
/* 1803d5f0e: ret  */
L_1803d5f0e_0:;
L_1803d5f0e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5f0e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5f0e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5f0e_4:;
return UINT64_C(0x1803d5f0f);
}
uint64_t b_1803d5f10(CPU*s){
/* 1803d5f10: push rbx */
L_1803d5f10_0:;
L_1803d5f10_1:;
wr(s->u,0,8,rd(s->r,24,8));
L_1803d5f10_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5f10_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803d5f10_4:;
/* 1803d5f12: sub rsp, 0x20 */
L_1803d5f12_0:;
L_1803d5f12_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803d5f12_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803d5f12_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803d5f12_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f12_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5f12_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5f12_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803d5f12_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803d5f12_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803d5f12_10:;
/* 1803d5f16: mov rbx, rcx */
L_1803d5f16_0:;
L_1803d5f16_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803d5f16_2:;
/* 1803d5f19: call 0x1803dcc40 */
L_1803d5f19_0:;
L_1803d5f19_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5f19_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5f1e)));
L_1803d5f19_3:;
return (uint64_t)UINT64_C(0x1803dcc40);
L_1803d5f19_4:;
return UINT64_C(0x1803d5f1e);
}
uint64_t b_1803d5f1e(CPU*s){
/* 1803d5f1e: test eax, eax */
L_1803d5f1e_0:;
L_1803d5f1e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5f1e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5f1e_3:;
wr(s->u,7,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803d5f1e_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5f1e_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803d5f1e_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803d5f1e_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803d5f1e_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803d5f1e_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803d5f1e_10:;
/* 1803d5f20: jne 0x1803d5f99 */
L_1803d5f20_0:;
L_1803d5f20_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803d5f20_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803d5f99);}
L_1803d5f20_3:;
return UINT64_C(0x1803d5f22);
}
uint64_t b_1803d5f22(CPU*s){
/* 1803d5f22: cmp dword ptr [rbx + 0x6734], eax */
L_1803d5f22_0:;
L_1803d5f22_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x6734))));
L_1803d5f22_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5f22_3:;
wr(s->u,18,4,rd(s->u,8,4));
L_1803d5f22_4:;
wr(s->r,512,1,(rd(s->u,18,4)<rd(s->r,0,4)));
L_1803d5f22_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,18,4),rd(s->r,0,4),4,1));
L_1803d5f22_6:;
wr(s->u,22,4,(rd(s->u,18,4)-rd(s->r,0,4)));
L_1803d5f22_7:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5f22_8:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803d5f22_9:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803d5f22_10:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803d5f22_11:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803d5f22_12:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803d5f22_13:;
/* 1803d5f28: je 0x1803d5f97 */
L_1803d5f28_0:;
L_1803d5f28_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803d5f97);}
L_1803d5f28_2:;
return UINT64_C(0x1803d5f2a);
}
uint64_t b_1803d5f2a(CPU*s){
/* 1803d5f2a: mov rax, qword ptr [rbx] */
L_1803d5f2a_0:;
L_1803d5f2a_1:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,24,8),8));
L_1803d5f2a_2:;
wr(s->r,0,8,rd(s->u,36,8));
L_1803d5f2a_3:;
/* 1803d5f2d: mov rcx, rbx */
L_1803d5f2d_0:;
L_1803d5f2d_1:;
wr(s->r,8,8,rd(s->r,24,8));
L_1803d5f2d_2:;
/* 1803d5f30: mov qword ptr [rsp + 0x30], rdi */
L_1803d5f30_0:;
L_1803d5f30_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803d5f30_2:;
wr(s->u,24,8,rd(s->r,56,8));
L_1803d5f30_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803d5f30_4:;
/* 1803d5f35: movsxd rdi, dword ptr [rbx + 0x672c] */
L_1803d5f35_0:;
L_1803d5f35_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x672c))));
L_1803d5f35_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803d5f35_3:;
wr(s->r,56,8,(U)sx(rd(s->u,32,4),4));
L_1803d5f35_4:;
/* 1803d5f3c: call qword ptr [rax + 0x10] */
L_1803d5f3c_0:;
L_1803d5f3c_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803d5f3c_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5f3c_3:;
wr(s->u,44,8,rd(s->u,36,8));
L_1803d5f3c_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5f3c_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5f3f)));
L_1803d5f3c_6:;
return (uint64_t)rd(s->u,44,8);
L_1803d5f3c_7:;
return UINT64_C(0x1803d5f3f);
}
uint64_t b_1803d5f30(CPU*s){
/* 1803d5f30: mov qword ptr [rsp + 0x30], rdi */
L_1803d5f30_0:;
L_1803d5f30_1:;
wr(s->u,16,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803d5f30_2:;
wr(s->u,24,8,rd(s->r,56,8));
L_1803d5f30_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803d5f30_4:;
/* 1803d5f35: movsxd rdi, dword ptr [rbx + 0x672c] */
L_1803d5f35_0:;
L_1803d5f35_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x672c))));
L_1803d5f35_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803d5f35_3:;
wr(s->r,56,8,(U)sx(rd(s->u,32,4),4));
L_1803d5f35_4:;
/* 1803d5f3c: call qword ptr [rax + 0x10] */
L_1803d5f3c_0:;
L_1803d5f3c_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x10))));
L_1803d5f3c_2:;
wr(s->u,36,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5f3c_3:;
wr(s->u,44,8,rd(s->u,36,8));
L_1803d5f3c_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803d5f3c_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803d5f3f)));
L_1803d5f3c_6:;
return (uint64_t)rd(s->u,44,8);
L_1803d5f3c_7:;
return UINT64_C(0x1803d5f3f);
}
uint64_t b_1803d5f3f(CPU*s){
/* 1803d5f3f: xor r8d, r8d */
L_1803d5f3f_0:;
L_1803d5f3f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5f3f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5f3f_3:;
wr(s->r,128,4,(rd(s->r,128,4)^rd(s->r,128,4)));
L_1803d5f3f_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803d5f3f_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5f3f_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803d5f3f_7:;
wr(s->u,26,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803d5f3f_8:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803d5f3f_9:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803d5f3f_10:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803d5f3f_11:;
/* 1803d5f42: mov dword ptr [rbx + 0x672c], eax */
L_1803d5f42_0:;
L_1803d5f42_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x672c))));
L_1803d5f42_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803d5f42_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803d5f42_4:;
/* 1803d5f48: neg eax */
L_1803d5f48_0:;
L_1803d5f48_1:;
wr(s->r,512,1,(rd(s->r,0,4)!=((U)UINT64_C(0x0))));
L_1803d5f48_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,4),4,1));
L_1803d5f48_3:;
wr(s->r,0,4,(-rd(s->r,0,4)));
L_1803d5f48_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5f48_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5f48_6:;
wr(s->u,26,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5f48_7:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803d5f48_8:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803d5f48_9:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803d5f48_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5f48_11:;
/* 1803d5f4a: cmp dword ptr [rbx + 0x30], r8d */
L_1803d5f4a_0:;
L_1803d5f4a_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d5f4a_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5f4a_3:;
wr(s->u,32,4,rd(s->u,20,4));
L_1803d5f4a_4:;
wr(s->r,512,1,(rd(s->u,32,4)<rd(s->r,128,4)));
L_1803d5f4a_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,32,4),rd(s->r,128,4),4,1));
L_1803d5f4a_6:;
wr(s->u,36,4,(rd(s->u,32,4)-rd(s->r,128,4)));
L_1803d5f4a_7:;
wr(s->r,519,1,(sx(rd(s->u,36,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5f4a_8:;
wr(s->r,518,1,(rd(s->u,36,4)==((U)UINT64_C(0x0))));
L_1803d5f4a_9:;
wr(s->u,26,4,(rd(s->u,36,4)&((U)UINT64_C(0xff))));
L_1803d5f4a_10:;
wr(s->u,30,1,pop(rd(s->u,26,4),4));
L_1803d5f4a_11:;
wr(s->u,31,1,(rd(s->u,30,1)&((U)UINT64_C(0x1))));
L_1803d5f4a_12:;
wr(s->r,514,1,(rd(s->u,31,1)==((U)UINT64_C(0x0))));
L_1803d5f4a_13:;
/* 1803d5f4e: mov dword ptr [rbx + 0x6724], eax */
L_1803d5f4e_0:;
L_1803d5f4e_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x6724))));
L_1803d5f4e_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803d5f4e_3:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803d5f4e_4:;
/* 1803d5f54: jle 0x1803d5f92 */
L_1803d5f54_0:;
L_1803d5f54_1:;
wr(s->u,24,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5f54_2:;
wr(s->u,25,1,((rd(s->r,518,1)!=0)||(rd(s->u,24,1)!=0)));
L_1803d5f54_3:;
if(rd(s->u,25,1)){return UINT64_C(0x1803d5f92);}
L_1803d5f54_4:;
return UINT64_C(0x1803d5f56);
}
uint64_t b_1803d5f56(CPU*s){
/* 1803d5f56: mov r9, rdi */
L_1803d5f56_0:;
L_1803d5f56_1:;
wr(s->r,136,8,rd(s->r,56,8));
L_1803d5f56_2:;
/* 1803d5f59: lea rdx, [rbx + 0x6738] */
L_1803d5f59_0:;
L_1803d5f59_1:;
wr(s->u,13,8,(rd(s->r,24,8)+((U)UINT64_C(0x6738))));
L_1803d5f59_2:;
wr(s->r,16,8,rd(s->u,13,8));
L_1803d5f59_3:;
/* 1803d5f60: shl r9, 2 */
L_1803d5f60_0:;
L_1803d5f60_1:;
wr(s->u,136,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803d5f60_2:;
wr(s->u,140,8,rd(s->r,136,8));
L_1803d5f60_3:;
wr(s->r,136,8,((rd(s->u,136,4)>=64)?0:(rd(s->r,136,8)<<rd(s->u,136,4))));
L_1803d5f60_4:;
wr(s->u,111,1,(rd(s->u,136,4)==((U)UINT64_C(0x0))));
L_1803d5f60_5:;
wr(s->u,112,4,(rd(s->u,136,4)-((U)UINT64_C(0x1))));
L_1803d5f60_6:;
wr(s->u,116,8,((rd(s->u,112,4)>=64)?0:(rd(s->u,140,8)<<rd(s->u,112,4))));
L_1803d5f60_7:;
wr(s->u,124,1,(sx(rd(s->u,116,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f60_8:;
wr(s->u,0,1,rd(s->u,111,1));
L_1803d5f60_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803d5f60_10:;
wr(s->u,2,1,(!rd(s->u,111,1)));
L_1803d5f60_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5f60_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,124,1)));
L_1803d5f60_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5f60_14:;
wr(s->u,125,1,(rd(s->u,136,4)==((U)UINT64_C(0x1))));
L_1803d5f60_15:;
wr(s->u,126,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f60_16:;
wr(s->u,127,1,(rd(s->r,512,1)^rd(s->u,126,1)));
L_1803d5f60_17:;
wr(s->u,0,1,rd(s->u,125,1));
L_1803d5f60_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,127,1)));
L_1803d5f60_19:;
wr(s->u,2,1,(!rd(s->u,125,1)));
L_1803d5f60_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803d5f60_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803d5f60_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803d5f60_23:;
wr(s->u,88,1,(rd(s->u,136,4)!=((U)UINT64_C(0x0))));
L_1803d5f60_24:;
wr(s->u,89,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f60_25:;
wr(s->u,90,1,(!rd(s->u,88,1)));
L_1803d5f60_26:;
wr(s->u,91,1,(rd(s->u,90,1)&rd(s->r,519,1)));
L_1803d5f60_27:;
wr(s->u,92,1,(rd(s->u,88,1)&rd(s->u,89,1)));
L_1803d5f60_28:;
wr(s->r,519,1,(rd(s->u,91,1)|rd(s->u,92,1)));
L_1803d5f60_29:;
wr(s->u,93,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803d5f60_30:;
wr(s->u,94,1,(!rd(s->u,88,1)));
L_1803d5f60_31:;
wr(s->u,95,1,(rd(s->u,94,1)&rd(s->r,518,1)));
L_1803d5f60_32:;
wr(s->u,96,1,(rd(s->u,88,1)&rd(s->u,93,1)));
L_1803d5f60_33:;
wr(s->r,518,1,(rd(s->u,95,1)|rd(s->u,96,1)));
L_1803d5f60_34:;
wr(s->u,97,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803d5f60_35:;
wr(s->u,105,1,pop(rd(s->u,97,8),8));
L_1803d5f60_36:;
wr(s->u,106,1,(rd(s->u,105,1)&((U)UINT64_C(0x1))));
L_1803d5f60_37:;
wr(s->u,107,1,(rd(s->u,106,1)==((U)UINT64_C(0x0))));
L_1803d5f60_38:;
wr(s->u,108,1,(!rd(s->u,88,1)));
L_1803d5f60_39:;
wr(s->u,109,1,(rd(s->u,108,1)&rd(s->r,514,1)));
L_1803d5f60_40:;
wr(s->u,110,1,(rd(s->u,88,1)&rd(s->u,107,1)));
L_1803d5f60_41:;
wr(s->r,514,1,(rd(s->u,109,1)|rd(s->u,110,1)));
L_1803d5f60_42:;
/* 1803d5f64: nop word ptr [rax + rax] */
L_1803d5f64_0:;
L_1803d5f64_1:;
wr(s->u,37,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803d5f64_2:;
wr(s->u,45,8,(rd(s->r,0,8)+rd(s->u,37,8)));
L_1803d5f64_3:;
/* 1803d5f70: sub qword ptr [rdx], r9 */
L_1803d5f70_0:;
L_1803d5f70_1:;
wr(s->u,57,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f70_2:;
wr(s->r,512,1,(rd(s->u,57,8)<rd(s->r,136,8)));
L_1803d5f70_3:;
wr(s->u,57,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f70_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,57,8),rd(s->r,136,8),8,1));
L_1803d5f70_5:;
wr(s->u,57,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f70_6:;
wr(s->u,57,8,(rd(s->u,57,8)-rd(s->r,136,8)));
L_1803d5f70_7:;
mw((uint64_t)rd(s->r,16,8),8,rd(s->u,57,8));
L_1803d5f70_8:;
wr(s->u,57,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f70_9:;
wr(s->r,519,1,(sx(rd(s->u,57,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f70_10:;
wr(s->u,57,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f70_11:;
wr(s->r,518,1,(rd(s->u,57,8)==((U)UINT64_C(0x0))));
L_1803d5f70_12:;
wr(s->u,57,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f70_13:;
wr(s->u,78,8,(rd(s->u,57,8)&((U)UINT64_C(0xff))));
L_1803d5f70_14:;
wr(s->u,86,1,pop(rd(s->u,78,8),8));
L_1803d5f70_15:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803d5f70_16:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803d5f70_17:;
/* 1803d5f73: mov rcx, qword ptr [rdx] */
L_1803d5f73_0:;
L_1803d5f73_1:;
wr(s->u,69,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f73_2:;
wr(s->r,8,8,rd(s->u,69,8));
L_1803d5f73_3:;
/* 1803d5f76: movsxd rax, dword ptr [rbx + 0x672c] */
L_1803d5f76_0:;
L_1803d5f76_1:;
wr(s->u,13,8,(rd(s->r,24,8)+((U)UINT64_C(0x672c))));
L_1803d5f76_2:;
wr(s->u,65,4,mr((uint64_t)rd(s->u,13,8),4));
L_1803d5f76_3:;
wr(s->r,0,8,(U)sx(rd(s->u,65,4),4));
L_1803d5f76_4:;
/* 1803d5f7d: lea rcx, [rcx + rax*4] */
L_1803d5f7d_0:;
L_1803d5f7d_1:;
wr(s->u,21,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803d5f7d_2:;
wr(s->u,29,8,(rd(s->r,8,8)+rd(s->u,21,8)));
L_1803d5f7d_3:;
wr(s->r,8,8,rd(s->u,29,8));
L_1803d5f7d_4:;
/* 1803d5f81: inc r8d */
L_1803d5f81_0:;
L_1803d5f81_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803d5f81_2:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803d5f81_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803d5f81_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5f81_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803d5f81_6:;
wr(s->u,78,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803d5f81_7:;
wr(s->u,86,1,pop(rd(s->u,78,4),4));
L_1803d5f81_8:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803d5f81_9:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803d5f81_10:;
/* 1803d5f84: add rdx, 8 */
L_1803d5f84_0:;
L_1803d5f84_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803d5f84_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803d5f84_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803d5f84_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f84_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803d5f84_6:;
wr(s->u,78,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803d5f84_7:;
wr(s->u,86,1,pop(rd(s->u,78,8),8));
L_1803d5f84_8:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803d5f84_9:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803d5f84_10:;
/* 1803d5f88: mov qword ptr [rdx - 8], rcx */
L_1803d5f88_0:;
L_1803d5f88_1:;
wr(s->u,5,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5f88_2:;
wr(s->u,57,8,rd(s->r,8,8));
L_1803d5f88_3:;
mw((uint64_t)rd(s->u,5,8),8,rd(s->u,57,8));
L_1803d5f88_4:;
/* 1803d5f8c: cmp r8d, dword ptr [rbx + 0x30] */
L_1803d5f8c_0:;
L_1803d5f8c_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d5f8c_2:;
wr(s->u,53,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803d5f8c_3:;
wr(s->u,128,4,rd(s->u,53,4));
L_1803d5f8c_4:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->u,128,4)));
L_1803d5f8c_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->u,128,4),4,1));
L_1803d5f8c_6:;
wr(s->u,132,4,(rd(s->r,128,4)-rd(s->u,128,4)));
L_1803d5f8c_7:;
wr(s->r,519,1,(sx(rd(s->u,132,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5f8c_8:;
wr(s->r,518,1,(rd(s->u,132,4)==((U)UINT64_C(0x0))));
L_1803d5f8c_9:;
wr(s->u,78,4,(rd(s->u,132,4)&((U)UINT64_C(0xff))));
L_1803d5f8c_10:;
wr(s->u,86,1,pop(rd(s->u,78,4),4));
L_1803d5f8c_11:;
wr(s->u,87,1,(rd(s->u,86,1)&((U)UINT64_C(0x1))));
L_1803d5f8c_12:;
wr(s->r,514,1,(rd(s->u,87,1)==((U)UINT64_C(0x0))));
L_1803d5f8c_13:;
/* 1803d5f90: jl 0x1803d5f70 */
L_1803d5f90_0:;
L_1803d5f90_1:;
wr(s->u,77,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5f90_2:;
if(rd(s->u,77,1)){goto L_1803d5f70_0;}
L_1803d5f90_3:;
return UINT64_C(0x1803d5f92);
}
uint64_t b_1803d5f70(CPU*s){
/* 1803d5f70: sub qword ptr [rdx], r9 */
L_1803d5f70_0:;
L_1803d5f70_1:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f70_2:;
wr(s->r,512,1,(rd(s->u,36,8)<rd(s->r,136,8)));
L_1803d5f70_3:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f70_4:;
wr(s->r,523,1,signed_overflow(rd(s->u,36,8),rd(s->r,136,8),8,1));
L_1803d5f70_5:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f70_6:;
wr(s->u,36,8,(rd(s->u,36,8)-rd(s->r,136,8)));
L_1803d5f70_7:;
mw((uint64_t)rd(s->r,16,8),8,rd(s->u,36,8));
L_1803d5f70_8:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f70_9:;
wr(s->r,519,1,(sx(rd(s->u,36,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f70_10:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f70_11:;
wr(s->r,518,1,(rd(s->u,36,8)==((U)UINT64_C(0x0))));
L_1803d5f70_12:;
wr(s->u,36,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f70_13:;
wr(s->u,57,8,(rd(s->u,36,8)&((U)UINT64_C(0xff))));
L_1803d5f70_14:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803d5f70_15:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803d5f70_16:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803d5f70_17:;
/* 1803d5f73: mov rcx, qword ptr [rdx] */
L_1803d5f73_0:;
L_1803d5f73_1:;
wr(s->u,48,8,mr((uint64_t)rd(s->r,16,8),8));
L_1803d5f73_2:;
wr(s->r,8,8,rd(s->u,48,8));
L_1803d5f73_3:;
/* 1803d5f76: movsxd rax, dword ptr [rbx + 0x672c] */
L_1803d5f76_0:;
L_1803d5f76_1:;
wr(s->u,8,8,(rd(s->r,24,8)+((U)UINT64_C(0x672c))));
L_1803d5f76_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803d5f76_3:;
wr(s->r,0,8,(U)sx(rd(s->u,44,4),4));
L_1803d5f76_4:;
/* 1803d5f7d: lea rcx, [rcx + rax*4] */
L_1803d5f7d_0:;
L_1803d5f7d_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803d5f7d_2:;
wr(s->u,24,8,(rd(s->r,8,8)+rd(s->u,16,8)));
L_1803d5f7d_3:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803d5f7d_4:;
/* 1803d5f81: inc r8d */
L_1803d5f81_0:;
L_1803d5f81_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x1)),4,0));
L_1803d5f81_2:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x1))));
L_1803d5f81_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803d5f81_4:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5f81_5:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803d5f81_6:;
wr(s->u,57,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803d5f81_7:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803d5f81_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803d5f81_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803d5f81_10:;
/* 1803d5f84: add rdx, 8 */
L_1803d5f84_0:;
L_1803d5f84_1:;
wr(s->r,512,1,(((rd(s->r,16,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,16,8)));
L_1803d5f84_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),((U)UINT64_C(0x8)),8,0));
L_1803d5f84_3:;
wr(s->r,16,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803d5f84_4:;
wr(s->r,519,1,(sx(rd(s->r,16,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f84_5:;
wr(s->r,518,1,(rd(s->r,16,8)==((U)UINT64_C(0x0))));
L_1803d5f84_6:;
wr(s->u,57,8,(rd(s->r,16,8)&((U)UINT64_C(0xff))));
L_1803d5f84_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803d5f84_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803d5f84_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803d5f84_10:;
/* 1803d5f88: mov qword ptr [rdx - 8], rcx */
L_1803d5f88_0:;
L_1803d5f88_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xfffffffffffffff8))));
L_1803d5f88_2:;
wr(s->u,36,8,rd(s->r,8,8));
L_1803d5f88_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,36,8));
L_1803d5f88_4:;
/* 1803d5f8c: cmp r8d, dword ptr [rbx + 0x30] */
L_1803d5f8c_0:;
L_1803d5f8c_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x30))));
L_1803d5f8c_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5f8c_3:;
wr(s->u,67,4,rd(s->u,32,4));
L_1803d5f8c_4:;
wr(s->r,512,1,(rd(s->r,128,4)<rd(s->u,67,4)));
L_1803d5f8c_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),rd(s->u,67,4),4,1));
L_1803d5f8c_6:;
wr(s->u,71,4,(rd(s->r,128,4)-rd(s->u,67,4)));
L_1803d5f8c_7:;
wr(s->r,519,1,(sx(rd(s->u,71,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5f8c_8:;
wr(s->r,518,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803d5f8c_9:;
wr(s->u,57,4,(rd(s->u,71,4)&((U)UINT64_C(0xff))));
L_1803d5f8c_10:;
wr(s->u,65,1,pop(rd(s->u,57,4),4));
L_1803d5f8c_11:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803d5f8c_12:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803d5f8c_13:;
/* 1803d5f90: jl 0x1803d5f70 */
L_1803d5f90_0:;
L_1803d5f90_1:;
wr(s->u,56,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803d5f90_2:;
if(rd(s->u,56,1)){goto L_1803d5f70_0;}
L_1803d5f90_3:;
return UINT64_C(0x1803d5f92);
}
uint64_t b_1803d5f92(CPU*s){
/* 1803d5f92: mov rdi, qword ptr [rsp + 0x30] */
L_1803d5f92_0:;
L_1803d5f92_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803d5f92_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803d5f92_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803d5f92_4:;
/* 1803d5f97: xor eax, eax */
L_1803d5f97_0:;
L_1803d5f97_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5f97_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5f97_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803d5f97_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5f97_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5f97_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5f97_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5f97_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803d5f97_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5f97_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5f97_11:;
/* 1803d5f99: add rsp, 0x20 */
L_1803d5f99_0:;
L_1803d5f99_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5f99_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803d5f99_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803d5f99_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f99_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5f99_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5f99_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803d5f99_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803d5f99_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803d5f99_10:;
/* 1803d5f9d: pop rbx */
L_1803d5f9d_0:;
L_1803d5f9d_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803d5f9d_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5f9d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5f9d_4:;
wr(s->r,24,8,rd(s->u,26,8));
L_1803d5f9d_5:;
/* 1803d5f9e: ret  */
L_1803d5f9e_0:;
L_1803d5f9e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5f9e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5f9e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5f9e_4:;
return UINT64_C(0x1803d5f9f);
}
uint64_t b_1803d5f97(CPU*s){
/* 1803d5f97: xor eax, eax */
L_1803d5f97_0:;
L_1803d5f97_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5f97_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5f97_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803d5f97_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5f97_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5f97_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5f97_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5f97_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803d5f97_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5f97_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5f97_11:;
/* 1803d5f99: add rsp, 0x20 */
L_1803d5f99_0:;
L_1803d5f99_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5f99_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803d5f99_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803d5f99_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f99_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5f99_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5f99_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5f99_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5f99_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5f99_10:;
/* 1803d5f9d: pop rbx */
L_1803d5f9d_0:;
L_1803d5f9d_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803d5f9d_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5f9d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5f9d_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803d5f9d_5:;
/* 1803d5f9e: ret  */
L_1803d5f9e_0:;
L_1803d5f9e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5f9e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5f9e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5f9e_4:;
return UINT64_C(0x1803d5f9f);
}
uint64_t b_1803d5f99(CPU*s){
/* 1803d5f99: add rsp, 0x20 */
L_1803d5f99_0:;
L_1803d5f99_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803d5f99_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803d5f99_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803d5f99_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5f99_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803d5f99_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803d5f99_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5f99_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5f99_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5f99_10:;
/* 1803d5f9d: pop rbx */
L_1803d5f9d_0:;
L_1803d5f9d_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803d5f9d_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5f9d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5f9d_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803d5f9d_5:;
/* 1803d5f9e: ret  */
L_1803d5f9e_0:;
L_1803d5f9e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803d5f9e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803d5f9e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803d5f9e_4:;
return UINT64_C(0x1803d5f9f);
}
uint64_t b_1803d5fa0(CPU*s){
/* 1803d5fa0: mov eax, dword ptr [rcx + 0x672c] */
L_1803d5fa0_0:;
L_1803d5fa0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x672c))));
L_1803d5fa0_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803d5fa0_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803d5fa0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5fa0_5:;
/* 1803d5fa6: mov dword ptr [rcx + 0x6734], 1 */
L_1803d5fa6_0:;
L_1803d5fa6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x6734))));
L_1803d5fa6_2:;
wr(s->u,8,4,((U)UINT64_C(0x1)));
L_1803d5fa6_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5fa6_4:;
/* 1803d5fb0: neg eax */
L_1803d5fb0_0:;
L_1803d5fb0_1:;
wr(s->r,512,1,(rd(s->r,0,4)!=((U)UINT64_C(0x0))));
L_1803d5fb0_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,4),4,1));
L_1803d5fb0_3:;
wr(s->r,0,4,(-rd(s->r,0,4)));
L_1803d5fb0_4:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5fb0_5:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5fb0_6:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5fb0_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803d5fb0_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803d5fb0_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803d5fb0_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5fb0_11:;
/* 1803d5fb2: mov dword ptr [rcx + 0x6724], eax */
L_1803d5fb2_0:;
L_1803d5fb2_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x6724))));
L_1803d5fb2_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803d5fb2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5fb2_4:;
/* 1803d5fb8: xor eax, eax */
L_1803d5fb8_0:;
L_1803d5fb8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803d5fb8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803d5fb8_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803d5fb8_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803d5fb8_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803d5fb8_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803d5fb8_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803d5fb8_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803d5fb8_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803d5fb8_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803d5fb8_11:;
/* 1803d5fba: mov dword ptr [rcx + 0x6728], eax */
L_1803d5fba_0:;
L_1803d5fba_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x6728))));
L_1803d5fba_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803d5fba_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5fba_4:;
/* 1803d5fc0: mov dword ptr [rcx + 0x6730], eax */
L_1803d5fc0_0:;
L_1803d5fc0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x6730))));
L_1803d5fc0_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803d5fc0_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803d5fc0_4:;
/* 1803d5fc6: jmp 0x1803dce40 */
L_1803d5fc6_0:;
L_1803d5fc6_1:;
return UINT64_C(0x1803dce40);
L_1803d5fc6_2:;
return UINT64_C(0x1803d5fcb);
}
uint64_t b_1803d5fd0(CPU*s){
/* 1803d5fd0: sub rcx, 8 */
L_1803d5fd0_0:;
L_1803d5fd0_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x8))));
L_1803d5fd0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,1));
L_1803d5fd0_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x8))));
L_1803d5fd0_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5fd0_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803d5fd0_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803d5fd0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5fd0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5fd0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5fd0_10:;
/* 1803d5fd4: jmp 0x1803d5f10 */
L_1803d5fd4_0:;
L_1803d5fd4_1:;
return UINT64_C(0x1803d5f10);
L_1803d5fd4_2:;
return UINT64_C(0x1803d5fd9);
}
uint64_t b_1803d5fe0(CPU*s){
/* 1803d5fe0: sub rcx, 8 */
L_1803d5fe0_0:;
L_1803d5fe0_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x8))));
L_1803d5fe0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,1));
L_1803d5fe0_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x8))));
L_1803d5fe0_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5fe0_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803d5fe0_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803d5fe0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5fe0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5fe0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5fe0_10:;
/* 1803d5fe4: jmp 0x1803d5cd0 */
L_1803d5fe4_0:;
L_1803d5fe4_1:;
return UINT64_C(0x1803d5cd0);
L_1803d5fe4_2:;
return UINT64_C(0x1803d5fe9);
}
uint64_t b_1803d5ff0(CPU*s){
/* 1803d5ff0: sub rcx, 8 */
L_1803d5ff0_0:;
L_1803d5ff0_1:;
wr(s->r,512,1,(rd(s->r,8,8)<((U)UINT64_C(0x8))));
L_1803d5ff0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x8)),8,1));
L_1803d5ff0_3:;
wr(s->r,8,8,(rd(s->r,8,8)-((U)UINT64_C(0x8))));
L_1803d5ff0_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803d5ff0_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803d5ff0_6:;
wr(s->u,0,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803d5ff0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803d5ff0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803d5ff0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803d5ff0_10:;
/* 1803d5ff4: jmp 0x1803dcfc0 */
L_1803d5ff4_0:;
L_1803d5ff4_1:;
return UINT64_C(0x1803dcfc0);
L_1803d5ff4_2:;
return UINT64_C(0x1803d5ff9);
}
