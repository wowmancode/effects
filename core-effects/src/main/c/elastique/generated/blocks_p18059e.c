#include "lift_runtime.h"
uint64_t b_18059ef70(CPU*s){
/* 18059ef70: push rbp */
L_18059ef70_0:;
L_18059ef70_1:;
wr(s->u,17,8,rd(s->r,40,8));
L_18059ef70_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18059ef70_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,17,8));
L_18059ef70_4:;
/* 18059ef72: push rsi */
L_18059ef72_0:;
L_18059ef72_1:;
wr(s->u,17,8,rd(s->r,48,8));
L_18059ef72_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18059ef72_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,17,8));
L_18059ef72_4:;
/* 18059ef73: sub rsp, 0x48 */
L_18059ef73_0:;
L_18059ef73_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x48))));
L_18059ef73_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,1));
L_18059ef73_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x48))));
L_18059ef73_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18059ef73_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_18059ef73_6:;
wr(s->u,25,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_18059ef73_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_18059ef73_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_18059ef73_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_18059ef73_10:;
/* 18059ef77: mov rax, qword ptr [rip + 0x3afe5a] */
L_18059ef77_0:;
L_18059ef77_1:;
wr(s->r,0,8,mr(UINT64_C(0x18094edd8),8));
L_18059ef77_2:;
/* 18059ef7e: xor rax, rsp */
L_18059ef7e_0:;
L_18059ef7e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_18059ef7e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18059ef7e_3:;
wr(s->r,0,8,(rd(s->r,0,8)^rd(s->r,32,8)));
L_18059ef7e_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18059ef7e_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_18059ef7e_6:;
wr(s->u,25,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_18059ef7e_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_18059ef7e_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_18059ef7e_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_18059ef7e_10:;
/* 18059ef81: mov qword ptr [rsp + 0x30], rax */
L_18059ef81_0:;
L_18059ef81_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_18059ef81_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_18059ef81_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_18059ef81_4:;
/* 18059ef86: mov rsi, rdx */
L_18059ef86_0:;
L_18059ef86_1:;
wr(s->r,48,8,rd(s->r,16,8));
L_18059ef86_2:;
/* 18059ef89: mov rbp, rcx */
L_18059ef89_0:;
L_18059ef89_1:;
wr(s->r,40,8,rd(s->r,8,8));
L_18059ef89_2:;
/* 18059ef8c: test rdx, rdx */
L_18059ef8c_0:;
L_18059ef8c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_18059ef8c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18059ef8c_3:;
wr(s->u,35,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_18059ef8c_4:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18059ef8c_5:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_18059ef8c_6:;
wr(s->u,25,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_18059ef8c_7:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_18059ef8c_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_18059ef8c_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_18059ef8c_10:;
/* 18059ef8f: jne 0x18059ef9b */
L_18059ef8f_0:;
L_18059ef8f_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_18059ef8f_2:;
if(rd(s->u,16,1)){return UINT64_C(0x18059ef9b);}
L_18059ef8f_3:;
return UINT64_C(0x18059ef91);
}
uint64_t b_18059ef91(CPU*s){
/* 18059ef91: mov eax, 0x80070057 */
L_18059ef91_0:;
L_18059ef91_1:;
wr(s->r,0,8,((U)UINT64_C(0x80070057)));
L_18059ef91_2:;
/* 18059ef96: jmp 0x18059f04c */
L_18059ef96_0:;
L_18059ef96_1:;
return UINT64_C(0x18059f04c);
L_18059ef96_2:;
return UINT64_C(0x18059ef9b);
}
uint64_t b_18059ef9b(CPU*s){
/* 18059ef9b: mov qword ptr [rsp + 0x60], rbx */
L_18059ef9b_0:;
L_18059ef9b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_18059ef9b_2:;
wr(s->u,24,8,rd(s->r,24,8));
L_18059ef9b_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_18059ef9b_4:;
/* 18059efa0: mov qword ptr [rsp + 0x70], rdi */
L_18059efa0_0:;
L_18059efa0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_18059efa0_2:;
wr(s->u,24,8,rd(s->r,56,8));
L_18059efa0_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_18059efa0_4:;
/* 18059efa5: mov qword ptr [rsp + 0x40], r12 */
L_18059efa5_0:;
L_18059efa5_1:;
wr(s->u,16,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_18059efa5_2:;
wr(s->u,24,8,rd(s->r,160,8));
L_18059efa5_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_18059efa5_4:;
/* 18059efaa: lea r12, [rip + 0x3c94f7] */
L_18059efaa_0:;
L_18059efaa_1:;
wr(s->r,160,8,((U)UINT64_C(0x1809684a8)));
L_18059efaa_2:;
/* 18059efb1: xor ebx, ebx */
L_18059efb1_0:;
L_18059efb1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_18059efb1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18059efb1_3:;
wr(s->r,24,4,(rd(s->r,24,4)^rd(s->r,24,4)));
L_18059efb1_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_18059efb1_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_18059efb1_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_18059efb1_7:;
wr(s->u,40,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_18059efb1_8:;
wr(s->u,44,1,pop(rd(s->u,40,4),4));
L_18059efb1_9:;
wr(s->u,45,1,(rd(s->u,44,1)&((U)UINT64_C(0x1))));
L_18059efb1_10:;
wr(s->r,514,1,(rd(s->u,45,1)==((U)UINT64_C(0x0))));
L_18059efb1_11:;
/* 18059efb3: call qword ptr [rbx + r12] */
L_18059efb3_0:;
L_18059efb3_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_18059efb3_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_18059efb3_3:;
wr(s->u,32,8,mr((uint64_t)rd(s->u,8,8),8));
L_18059efb3_4:;
wr(s->u,46,8,rd(s->u,32,8));
L_18059efb3_5:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18059efb3_6:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18059efb7)));
L_18059efb3_7:;
return (uint64_t)rd(s->u,46,8);
L_18059efb3_8:;
return UINT64_C(0x18059efb7);
}
uint64_t b_18059efb3(CPU*s){
/* 18059efb3: call qword ptr [rbx + r12] */
L_18059efb3_0:;
L_18059efb3_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_18059efb3_2:;
wr(s->u,8,8,(rd(s->r,24,8)+rd(s->u,0,8)));
L_18059efb3_3:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_18059efb3_4:;
wr(s->u,24,8,rd(s->u,16,8));
L_18059efb3_5:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18059efb3_6:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18059efb7)));
L_18059efb3_7:;
return (uint64_t)rd(s->u,24,8);
L_18059efb3_8:;
return UINT64_C(0x18059efb7);
}
uint64_t b_18059efb7(CPU*s){
/* 18059efb7: mov rdi, rax */
L_18059efb7_0:;
L_18059efb7_1:;
wr(s->r,56,8,rd(s->r,0,8));
L_18059efb7_2:;
/* 18059efba: test rax, rax */
L_18059efba_0:;
L_18059efba_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_18059efba_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18059efba_3:;
wr(s->u,10,8,(rd(s->r,0,8)&rd(s->r,0,8)));
L_18059efba_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18059efba_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_18059efba_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_18059efba_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_18059efba_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_18059efba_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_18059efba_10:;
/* 18059efbd: je 0x18059f01e */
L_18059efbd_0:;
L_18059efbd_1:;
if(rd(s->r,518,1)){return UINT64_C(0x18059f01e);}
L_18059efbd_2:;
return UINT64_C(0x18059efbf);
}
uint64_t b_18059efbf(CPU*s){
/* 18059efbf: mov r8, qword ptr [rax] */
L_18059efbf_0:;
L_18059efbf_1:;
wr(s->u,16,8,mr((uint64_t)rd(s->r,0,8),8));
L_18059efbf_2:;
wr(s->r,128,8,rd(s->u,16,8));
L_18059efbf_3:;
/* 18059efc2: lea rdx, [rsp + 0x20] */
L_18059efc2_0:;
L_18059efc2_1:;
wr(s->u,8,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_18059efc2_2:;
wr(s->r,16,8,rd(s->u,8,8));
L_18059efc2_3:;
/* 18059efc7: mov rcx, rax */
L_18059efc7_0:;
L_18059efc7_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_18059efc7_2:;
/* 18059efca: call qword ptr [r8 + 0x20] */
L_18059efca_0:;
L_18059efca_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x20))));
L_18059efca_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,0,8),8));
L_18059efca_3:;
wr(s->u,24,8,rd(s->u,16,8));
L_18059efca_4:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18059efca_5:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18059efce)));
L_18059efca_6:;
return (uint64_t)rd(s->u,24,8);
L_18059efca_7:;
return UINT64_C(0x18059efce);
}
uint64_t b_18059efce(CPU*s){
/* 18059efce: lea r11, [rsp + 0x20] */
L_18059efce_0:;
L_18059efce_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_18059efce_2:;
wr(s->r,152,8,rd(s->u,0,8));
L_18059efce_3:;
/* 18059efd3: mov rcx, qword ptr [r11] */
L_18059efd3_0:;
L_18059efd3_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,152,8),8));
L_18059efd3_2:;
wr(s->r,8,8,rd(s->u,8,8));
L_18059efd3_3:;
/* 18059efd6: cmp rcx, qword ptr [rbp] */
L_18059efd6_0:;
L_18059efd6_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,40,8),8));
L_18059efd6_2:;
wr(s->u,27,8,rd(s->u,8,8));
L_18059efd6_3:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,27,8)));
L_18059efd6_4:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,27,8),8,1));
L_18059efd6_5:;
wr(s->u,35,8,(rd(s->r,8,8)-rd(s->u,27,8)));
L_18059efd6_6:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18059efd6_7:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_18059efd6_8:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_18059efd6_9:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_18059efd6_10:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_18059efd6_11:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_18059efd6_12:;
/* 18059efda: jne 0x18059efea */
L_18059efda_0:;
L_18059efda_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_18059efda_2:;
if(rd(s->u,16,1)){return UINT64_C(0x18059efea);}
L_18059efda_3:;
return UINT64_C(0x18059efdc);
}
uint64_t b_18059efdc(CPU*s){
/* 18059efdc: mov rcx, qword ptr [r11 + 8] */
L_18059efdc_0:;
L_18059efdc_1:;
wr(s->u,0,8,(rd(s->r,152,8)+((U)UINT64_C(0x8))));
L_18059efdc_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_18059efdc_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_18059efdc_4:;
/* 18059efe0: cmp rcx, qword ptr [rbp + 8] */
L_18059efe0_0:;
L_18059efe0_1:;
wr(s->u,0,8,(rd(s->r,40,8)+((U)UINT64_C(0x8))));
L_18059efe0_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_18059efe0_3:;
wr(s->u,27,8,rd(s->u,8,8));
L_18059efe0_4:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,27,8)));
L_18059efe0_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,27,8),8,1));
L_18059efe0_6:;
wr(s->u,35,8,(rd(s->r,8,8)-rd(s->u,27,8)));
L_18059efe0_7:;
wr(s->r,519,1,(sx(rd(s->u,35,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_18059efe0_8:;
wr(s->r,518,1,(rd(s->u,35,8)==((U)UINT64_C(0x0))));
L_18059efe0_9:;
wr(s->u,17,8,(rd(s->u,35,8)&((U)UINT64_C(0xff))));
L_18059efe0_10:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_18059efe0_11:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_18059efe0_12:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_18059efe0_13:;
/* 18059efe4: jne 0x18059efea */
L_18059efe4_0:;
L_18059efe4_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_18059efe4_2:;
if(rd(s->u,16,1)){return UINT64_C(0x18059efea);}
L_18059efe4_3:;
return UINT64_C(0x18059efe6);
}
uint64_t b_18059efe6(CPU*s){
/* 18059efe6: xor eax, eax */
L_18059efe6_0:;
L_18059efe6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_18059efe6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18059efe6_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_18059efe6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_18059efe6_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_18059efe6_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_18059efe6_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_18059efe6_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_18059efe6_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_18059efe6_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_18059efe6_11:;
/* 18059efe8: jmp 0x18059efef */
L_18059efe8_0:;
L_18059efe8_1:;
return UINT64_C(0x18059efef);
L_18059efe8_2:;
return UINT64_C(0x18059efea);
}
uint64_t b_18059efea(CPU*s){
/* 18059efea: sbb eax, eax */
L_18059efea_0:;
L_18059efea_1:;
wr(s->u,0,4,rd(s->r,512,1));
L_18059efea_2:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,0,4)));
L_18059efea_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,0,4),4,1));
L_18059efea_4:;
wr(s->u,4,4,(rd(s->r,0,4)-rd(s->r,0,4)));
L_18059efea_5:;
wr(s->u,8,1,(rd(s->u,4,4)<rd(s->u,0,4)));
L_18059efea_6:;
wr(s->r,512,1,((rd(s->r,512,1)!=0)||(rd(s->u,8,1)!=0)));
L_18059efea_7:;
wr(s->u,9,1,signed_overflow(rd(s->u,4,4),rd(s->u,0,4),4,1));
L_18059efea_8:;
wr(s->r,523,1,((rd(s->r,523,1)!=0)!=(rd(s->u,9,1)!=0)));
L_18059efea_9:;
wr(s->r,0,4,(rd(s->u,4,4)-rd(s->u,0,4)));
L_18059efea_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_18059efea_11:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_18059efea_12:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_18059efea_13:;
wr(s->u,10,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_18059efea_14:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_18059efea_15:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_18059efea_16:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_18059efea_17:;
/* 18059efec: sbb eax, -1 */
L_18059efec_0:;
L_18059efec_1:;
wr(s->u,0,4,rd(s->r,512,1));
L_18059efec_2:;
wr(s->r,512,1,(rd(s->r,0,4)<((U)UINT64_C(0xffffffff))));
L_18059efec_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xffffffff)),4,1));
L_18059efec_4:;
wr(s->u,4,4,(rd(s->r,0,4)-((U)UINT64_C(0xffffffff))));
L_18059efec_5:;
wr(s->u,8,1,(rd(s->u,4,4)<rd(s->u,0,4)));
L_18059efec_6:;
wr(s->r,512,1,((rd(s->r,512,1)!=0)||(rd(s->u,8,1)!=0)));
L_18059efec_7:;
wr(s->u,9,1,signed_overflow(rd(s->u,4,4),rd(s->u,0,4),4,1));
L_18059efec_8:;
wr(s->r,523,1,((rd(s->r,523,1)!=0)!=(rd(s->u,9,1)!=0)));
L_18059efec_9:;
wr(s->r,0,4,(rd(s->u,4,4)-rd(s->u,0,4)));
L_18059efec_10:;
wr(s->r,0,8,rd(s->r,0,4));
L_18059efec_11:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_18059efec_12:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_18059efec_13:;
wr(s->u,10,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_18059efec_14:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_18059efec_15:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_18059efec_16:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_18059efec_17:;
/* 18059efef: test eax, eax */
L_18059efef_0:;
L_18059efef_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_18059efef_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18059efef_3:;
wr(s->u,16,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_18059efef_4:;
wr(s->r,519,1,(sx(rd(s->u,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_18059efef_5:;
wr(s->r,518,1,(rd(s->u,16,4)==((U)UINT64_C(0x0))));
L_18059efef_6:;
wr(s->u,10,4,(rd(s->u,16,4)&((U)UINT64_C(0xff))));
L_18059efef_7:;
wr(s->u,14,1,pop(rd(s->u,10,4),4));
L_18059efef_8:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_18059efef_9:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_18059efef_10:;
/* 18059eff1: je 0x18059f02f */
L_18059eff1_0:;
L_18059eff1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x18059f02f);}
L_18059eff1_2:;
return UINT64_C(0x18059eff3);
}
uint64_t b_18059efef(CPU*s){
/* 18059efef: test eax, eax */
L_18059efef_0:;
L_18059efef_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_18059efef_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_18059efef_3:;
wr(s->u,6,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_18059efef_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_18059efef_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_18059efef_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_18059efef_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_18059efef_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_18059efef_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_18059efef_10:;
/* 18059eff1: je 0x18059f02f */
L_18059eff1_0:;
L_18059eff1_1:;
if(rd(s->r,518,1)){return UINT64_C(0x18059f02f);}
L_18059eff1_2:;
return UINT64_C(0x18059eff3);
}
uint64_t b_18059eff3(CPU*s){
/* 18059eff3: mov rcx, rdi */
L_18059eff3_0:;
L_18059eff3_1:;
wr(s->r,8,8,rd(s->r,56,8));
L_18059eff3_2:;
/* 18059eff6: call qword ptr [rip + 0xa94fc] */
L_18059eff6_0:;
L_18059eff6_1:;
wr(s->u,0,8,mr(UINT64_C(0x1806484f8),8));
L_18059eff6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18059eff6_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18059effc)));
L_18059eff6_4:;
return (uint64_t)rd(s->u,0,8);
L_18059eff6_5:;
return UINT64_C(0x18059effc);
}
uint64_t b_18059effc(CPU*s){
/* 18059effc: mov rcx, rax */
L_18059effc_0:;
L_18059effc_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_18059effc_2:;
/* 18059efff: call qword ptr [rip + 0xa94fb] */
L_18059efff_0:;
L_18059efff_1:;
wr(s->u,0,8,mr(UINT64_C(0x180648500),8));
L_18059efff_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_18059efff_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x18059f005)));
L_18059efff_4:;
return (uint64_t)rd(s->u,0,8);
L_18059efff_5:;
return UINT64_C(0x18059f005);
}
