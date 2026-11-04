#include "lift_runtime.h"
uint64_t b_1802d3bc0(CPU*s){
/* 1802d3bc0: mov qword ptr [rsp + 8], rbx */
L_1802d3bc0_0:;
L_1802d3bc0_1:;
wr(s->u,0,8,(((U)UINT64_C(0x8))+rd(s->r,32,8)));
L_1802d3bc0_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1802d3bc0_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1802d3bc0_4:;
/* 1802d3bc5: mov qword ptr [rsp + 0x10], rbp */
L_1802d3bc5_0:;
L_1802d3bc5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1802d3bc5_2:;
wr(s->u,8,8,rd(s->r,40,8));
L_1802d3bc5_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1802d3bc5_4:;
/* 1802d3bca: mov qword ptr [rsp + 0x18], rsi */
L_1802d3bca_0:;
L_1802d3bca_1:;
wr(s->u,0,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1802d3bca_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1802d3bca_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1802d3bca_4:;
/* 1802d3bcf: mov qword ptr [rsp + 0x20], rdi */
L_1802d3bcf_0:;
L_1802d3bcf_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1802d3bcf_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1802d3bcf_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1802d3bcf_4:;
/* 1802d3bd4: push r12 */
L_1802d3bd4_0:;
L_1802d3bd4_1:;
wr(s->u,21,8,rd(s->r,160,8));
L_1802d3bd4_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1802d3bd4_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,21,8));
L_1802d3bd4_4:;
/* 1802d3bd6: sub rsp, 0x20 */
L_1802d3bd6_0:;
L_1802d3bd6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1802d3bd6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1802d3bd6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1802d3bd6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1802d3bd6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1802d3bd6_6:;
wr(s->u,29,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1802d3bd6_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1802d3bd6_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1802d3bd6_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1802d3bd6_10:;
/* 1802d3bda: mov ebp, dword ptr [rsp + 0x60] */
L_1802d3bda_0:;
L_1802d3bda_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1802d3bda_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1802d3bda_3:;
wr(s->r,40,4,rd(s->u,16,4));
L_1802d3bda_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1802d3bda_5:;
/* 1802d3bde: mov di, r9w */
L_1802d3bde_0:;
L_1802d3bde_1:;
wr(s->r,56,2,rd(s->r,136,2));
L_1802d3bde_2:;
/* 1802d3be2: mov r12d, r8d */
L_1802d3be2_0:;
L_1802d3be2_1:;
wr(s->r,160,4,rd(s->r,128,4));
L_1802d3be2_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1802d3be2_3:;
/* 1802d3be5: movzx esi, dx */
L_1802d3be5_0:;
L_1802d3be5_1:;
wr(s->r,48,4,rd(s->r,16,2));
L_1802d3be5_2:;
wr(s->r,48,8,rd(s->r,48,4));
L_1802d3be5_3:;
/* 1802d3be8: mov rbx, rcx */
L_1802d3be8_0:;
L_1802d3be8_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1802d3be8_2:;
/* 1802d3beb: cmp ebp, 0x20 */
L_1802d3beb_0:;
L_1802d3beb_1:;
wr(s->u,39,4,rd(s->r,40,4));
L_1802d3beb_2:;
wr(s->r,512,1,(rd(s->u,39,4)<((U)UINT64_C(0x20))));
L_1802d3beb_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,39,4),((U)UINT64_C(0x20)),4,1));
L_1802d3beb_4:;
wr(s->u,43,4,(rd(s->u,39,4)-((U)UINT64_C(0x20))));
L_1802d3beb_5:;
wr(s->r,519,1,(sx(rd(s->u,43,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1802d3beb_6:;
wr(s->r,518,1,(rd(s->u,43,4)==((U)UINT64_C(0x0))));
L_1802d3beb_7:;
wr(s->u,29,4,(rd(s->u,43,4)&((U)UINT64_C(0xff))));
L_1802d3beb_8:;
wr(s->u,37,1,pop(rd(s->u,29,4),4));
L_1802d3beb_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1802d3beb_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1802d3beb_11:;
/* 1802d3bee: jbe 0x1802d3bfe */
L_1802d3bee_0:;
L_1802d3bee_1:;
wr(s->u,20,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1802d3bee_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1802d3bfe);}
L_1802d3bee_3:;
return UINT64_C(0x1802d3bf0);
}
uint64_t b_1802d3bf0(CPU*s){
/* 1802d3bf0: mov r8, rbp */
L_1802d3bf0_0:;
L_1802d3bf0_1:;
wr(s->r,128,8,rd(s->r,40,8));
L_1802d3bf0_2:;
/* 1802d3bf3: xor edx, edx */
L_1802d3bf3_0:;
L_1802d3bf3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1802d3bf3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1802d3bf3_3:;
wr(s->r,16,4,(rd(s->r,16,4)^rd(s->r,16,4)));
L_1802d3bf3_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1802d3bf3_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1802d3bf3_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1802d3bf3_7:;
wr(s->u,0,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1802d3bf3_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1802d3bf3_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1802d3bf3_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1802d3bf3_11:;
/* 1802d3bf5: call 0x18000d6a6 */
L_1802d3bf5_0:;
L_1802d3bf5_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1802d3bf5_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1802d3bfa)));
L_1802d3bf5_3:;
return (uint64_t)UINT64_C(0x18000d6a6);
L_1802d3bf5_4:;
return UINT64_C(0x1802d3bfa);
}
uint64_t b_1802d3bfa(CPU*s){
/* 1802d3bfa: mov dword ptr [rbx], ebp */
L_1802d3bfa_0:;
L_1802d3bfa_1:;
wr(s->u,0,4,rd(s->r,40,4));
L_1802d3bfa_2:;
mw((uint64_t)rd(s->r,24,8),4,rd(s->u,0,4));
L_1802d3bfa_3:;
/* 1802d3bfc: jmp 0x1802d3c15 */
L_1802d3bfc_0:;
L_1802d3bfc_1:;
return UINT64_C(0x1802d3c15);
L_1802d3bfc_2:;
return UINT64_C(0x1802d3bfe);
}
uint64_t b_1802d3bfe(CPU*s){
/* 1802d3bfe: xor eax, eax */
L_1802d3bfe_0:;
L_1802d3bfe_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1802d3bfe_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1802d3bfe_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1802d3bfe_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1802d3bfe_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1802d3bfe_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1802d3bfe_7:;
wr(s->u,21,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1802d3bfe_8:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1802d3bfe_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1802d3bfe_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1802d3bfe_11:;
/* 1802d3c00: mov qword ptr [rcx], rax */
L_1802d3c00_0:;
L_1802d3c00_1:;
wr(s->u,12,8,rd(s->r,0,8));
L_1802d3c00_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,12,8));
L_1802d3c00_3:;
/* 1802d3c03: mov qword ptr [rcx + 8], rax */
L_1802d3c03_0:;
L_1802d3c03_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1802d3c03_2:;
wr(s->u,12,8,rd(s->r,0,8));
L_1802d3c03_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1802d3c03_4:;
/* 1802d3c07: mov qword ptr [rcx + 0x10], rax */
L_1802d3c07_0:;
L_1802d3c07_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1802d3c07_2:;
wr(s->u,12,8,rd(s->r,0,8));
L_1802d3c07_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1802d3c07_4:;
/* 1802d3c0b: mov qword ptr [rcx + 0x18], rax */
L_1802d3c0b_0:;
L_1802d3c0b_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x18))));
L_1802d3c0b_2:;
wr(s->u,12,8,rd(s->r,0,8));
L_1802d3c0b_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1802d3c0b_4:;
/* 1802d3c0f: mov dword ptr [rcx], 0x20 */
L_1802d3c0f_0:;
L_1802d3c0f_1:;
wr(s->u,8,4,((U)UINT64_C(0x20)));
L_1802d3c0f_2:;
mw((uint64_t)rd(s->r,8,8),4,rd(s->u,8,4));
L_1802d3c0f_3:;
/* 1802d3c15: mov eax, 1 */
L_1802d3c15_0:;
L_1802d3c15_1:;
wr(s->r,0,8,((U)UINT64_C(0x1)));
L_1802d3c15_2:;
/* 1802d3c1a: cmp ax, si */
L_1802d3c1a_0:;
L_1802d3c1a_1:;
wr(s->u,27,2,rd(s->r,48,2));
L_1802d3c1a_2:;
wr(s->r,512,1,(rd(s->r,0,2)<rd(s->u,27,2)));
L_1802d3c1a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,2),rd(s->u,27,2),2,1));
L_1802d3c1a_4:;
wr(s->u,29,2,(rd(s->r,0,2)-rd(s->u,27,2)));
L_1802d3c1a_5:;
wr(s->r,519,1,(sx(rd(s->u,29,2),2)<sx(((U)UINT64_C(0x0)),2)));
L_1802d3c1a_6:;
wr(s->r,518,1,(rd(s->u,29,2)==((U)UINT64_C(0x0))));
L_1802d3c1a_7:;
wr(s->u,21,2,(rd(s->u,29,2)&((U)UINT64_C(0xff))));
L_1802d3c1a_8:;
wr(s->u,25,1,pop(rd(s->u,21,2),2));
L_1802d3c1a_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1802d3c1a_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1802d3c1a_11:;
/* 1802d3c1d: jne 0x1802d3c2e */
L_1802d3c1d_0:;
L_1802d3c1d_1:;
wr(s->u,20,1,(!rd(s->r,518,1)));
L_1802d3c1d_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1802d3c2e);}
L_1802d3c1d_3:;
return UINT64_C(0x1802d3c1f);
}
uint64_t b_1802d3c15(CPU*s){
/* 1802d3c15: mov eax, 1 */
L_1802d3c15_0:;
L_1802d3c15_1:;
wr(s->r,0,8,((U)UINT64_C(0x1)));
L_1802d3c15_2:;
/* 1802d3c1a: cmp ax, si */
L_1802d3c1a_0:;
L_1802d3c1a_1:;
wr(s->u,5,2,rd(s->r,48,2));
L_1802d3c1a_2:;
wr(s->r,512,1,(rd(s->r,0,2)<rd(s->u,5,2)));
L_1802d3c1a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,2),rd(s->u,5,2),2,1));
L_1802d3c1a_4:;
wr(s->u,7,2,(rd(s->r,0,2)-rd(s->u,5,2)));
L_1802d3c1a_5:;
wr(s->r,519,1,(sx(rd(s->u,7,2),2)<sx(((U)UINT64_C(0x0)),2)));
L_1802d3c1a_6:;
wr(s->r,518,1,(rd(s->u,7,2)==((U)UINT64_C(0x0))));
L_1802d3c1a_7:;
wr(s->u,1,2,(rd(s->u,7,2)&((U)UINT64_C(0xff))));
L_1802d3c1a_8:;
wr(s->u,3,1,pop(rd(s->u,1,2),2));
L_1802d3c1a_9:;
wr(s->u,4,1,(rd(s->u,3,1)&((U)UINT64_C(0x1))));
L_1802d3c1a_10:;
wr(s->r,514,1,(rd(s->u,4,1)==((U)UINT64_C(0x0))));
L_1802d3c1a_11:;
/* 1802d3c1d: jne 0x1802d3c2e */
L_1802d3c1d_0:;
L_1802d3c1d_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1802d3c1d_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1802d3c2e);}
L_1802d3c1d_3:;
return UINT64_C(0x1802d3c1f);
}
uint64_t b_1802d3c1f(CPU*s){
/* 1802d3c1f: mov eax, 0x14 */
L_1802d3c1f_0:;
L_1802d3c1f_1:;
wr(s->r,0,8,((U)UINT64_C(0x14)));
L_1802d3c1f_2:;
/* 1802d3c24: cmp ax, di */
L_1802d3c24_0:;
L_1802d3c24_1:;
wr(s->u,5,2,rd(s->r,56,2));
L_1802d3c24_2:;
wr(s->r,512,1,(rd(s->r,0,2)<rd(s->u,5,2)));
L_1802d3c24_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,2),rd(s->u,5,2),2,1));
L_1802d3c24_4:;
wr(s->u,7,2,(rd(s->r,0,2)-rd(s->u,5,2)));
L_1802d3c24_5:;
wr(s->r,519,1,(sx(rd(s->u,7,2),2)<sx(((U)UINT64_C(0x0)),2)));
L_1802d3c24_6:;
wr(s->r,518,1,(rd(s->u,7,2)==((U)UINT64_C(0x0))));
L_1802d3c24_7:;
wr(s->u,1,2,(rd(s->u,7,2)&((U)UINT64_C(0xff))));
L_1802d3c24_8:;
wr(s->u,3,1,pop(rd(s->u,1,2),2));
L_1802d3c24_9:;
wr(s->u,4,1,(rd(s->u,3,1)&((U)UINT64_C(0x1))));
L_1802d3c24_10:;
wr(s->r,514,1,(rd(s->u,4,1)==((U)UINT64_C(0x0))));
L_1802d3c24_11:;
/* 1802d3c27: jne 0x1802d3c2e */
L_1802d3c27_0:;
L_1802d3c27_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1802d3c27_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1802d3c2e);}
L_1802d3c27_3:;
return UINT64_C(0x1802d3c29);
}
uint64_t b_1802d3c29(CPU*s){
/* 1802d3c29: mov edi, 0x18 */
L_1802d3c29_0:;
L_1802d3c29_1:;
wr(s->r,56,8,((U)UINT64_C(0x18)));
L_1802d3c29_2:;
/* 1802d3c2e: movzx ebp, di */
L_1802d3c2e_0:;
L_1802d3c2e_1:;
wr(s->r,40,4,rd(s->r,56,2));
L_1802d3c2e_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1802d3c2e_3:;
/* 1802d3c31: movzx ecx, si */
L_1802d3c31_0:;
L_1802d3c31_1:;
wr(s->r,8,4,rd(s->r,48,2));
L_1802d3c31_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1802d3c31_3:;
/* 1802d3c34: mov edx, ebp */
L_1802d3c34_0:;
L_1802d3c34_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1802d3c34_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1802d3c34_3:;
/* 1802d3c36: call 0x1801409d0 */
L_1802d3c36_0:;
L_1802d3c36_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1802d3c36_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1802d3c3b)));
L_1802d3c36_3:;
return (uint64_t)UINT64_C(0x1801409d0);
L_1802d3c36_4:;
return UINT64_C(0x1802d3c3b);
}
uint64_t b_1802d3c2e(CPU*s){
/* 1802d3c2e: movzx ebp, di */
L_1802d3c2e_0:;
L_1802d3c2e_1:;
wr(s->r,40,4,rd(s->r,56,2));
L_1802d3c2e_2:;
wr(s->r,40,8,rd(s->r,40,4));
L_1802d3c2e_3:;
/* 1802d3c31: movzx ecx, si */
L_1802d3c31_0:;
L_1802d3c31_1:;
wr(s->r,8,4,rd(s->r,48,2));
L_1802d3c31_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1802d3c31_3:;
/* 1802d3c34: mov edx, ebp */
L_1802d3c34_0:;
L_1802d3c34_1:;
wr(s->r,16,4,rd(s->r,40,4));
L_1802d3c34_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1802d3c34_3:;
/* 1802d3c36: call 0x1801409d0 */
L_1802d3c36_0:;
L_1802d3c36_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1802d3c36_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1802d3c3b)));
L_1802d3c36_3:;
return (uint64_t)UINT64_C(0x1801409d0);
L_1802d3c36_4:;
return UINT64_C(0x1802d3c3b);
}
uint64_t b_1802d3c3b(CPU*s){
/* 1802d3c3b: mov dword ptr [rbx + 4], eax */
L_1802d3c3b_0:;
L_1802d3c3b_1:;
wr(s->u,0,8,(rd(s->r,24,8)+((U)UINT64_C(0x4))));
L_1802d3c3b_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1802d3c3b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1802d3c3b_4:;
/* 1802d3c3e: test eax, eax */
L_1802d3c3e_0:;
L_1802d3c3e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1802d3c3e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1802d3c3e_3:;
wr(s->u,19,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1802d3c3e_4:;
wr(s->r,519,1,(sx(rd(s->u,19,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1802d3c3e_5:;
wr(s->r,518,1,(rd(s->u,19,4)==((U)UINT64_C(0x0))));
L_1802d3c3e_6:;
wr(s->u,13,4,(rd(s->u,19,4)&((U)UINT64_C(0xff))));
L_1802d3c3e_7:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1802d3c3e_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1802d3c3e_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1802d3c3e_10:;
/* 1802d3c40: jne 0x1802d3c4e */
L_1802d3c40_0:;
L_1802d3c40_1:;
wr(s->u,12,1,(!rd(s->r,518,1)));
L_1802d3c40_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1802d3c4e);}
L_1802d3c40_3:;
return UINT64_C(0x1802d3c42);
}
uint64_t b_1802d3c42(CPU*s){
/* 1802d3c42: or dword ptr [rbx + 0x14], 8 */
L_1802d3c42_0:;
L_1802d3c42_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x14))));
L_1802d3c42_2:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1802d3c42_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1802d3c42_4:;
wr(s->u,23,4,mr((uint64_t)rd(s->u,5,8),4));
L_1802d3c42_5:;
wr(s->u,23,4,(rd(s->u,23,4)|((U)UINT64_C(0x8))));
L_1802d3c42_6:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,23,4));
L_1802d3c42_7:;
wr(s->u,23,4,mr((uint64_t)rd(s->u,5,8),4));
L_1802d3c42_8:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1802d3c42_9:;
wr(s->u,23,4,mr((uint64_t)rd(s->u,5,8),4));
L_1802d3c42_10:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1802d3c42_11:;
wr(s->u,23,4,mr((uint64_t)rd(s->u,5,8),4));
L_1802d3c42_12:;
wr(s->u,41,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1802d3c42_13:;
wr(s->u,49,1,pop(rd(s->u,41,4),4));
L_1802d3c42_14:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1802d3c42_15:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1802d3c42_16:;
/* 1802d3c46: mov word ptr [rbx + 0x18], si */
L_1802d3c46_0:;
L_1802d3c46_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x18))));
L_1802d3c46_2:;
wr(s->u,21,2,rd(s->r,48,2));
L_1802d3c46_3:;
mw((uint64_t)rd(s->u,5,8),2,rd(s->u,21,2));
L_1802d3c46_4:;
/* 1802d3c4a: mov word ptr [rbx + 0x1a], di */
L_1802d3c4a_0:;
L_1802d3c4a_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x1a))));
L_1802d3c4a_2:;
wr(s->u,21,2,rd(s->r,56,2));
L_1802d3c4a_3:;
mw((uint64_t)rd(s->u,5,8),2,rd(s->u,21,2));
L_1802d3c4a_4:;
/* 1802d3c4e: movzx ecx, word ptr [rsp + 0x50] */
L_1802d3c4e_0:;
L_1802d3c4e_1:;
wr(s->u,13,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1802d3c4e_2:;
wr(s->u,27,2,mr((uint64_t)rd(s->u,13,8),2));
L_1802d3c4e_3:;
wr(s->r,8,4,rd(s->u,27,2));
L_1802d3c4e_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1802d3c4e_5:;
/* 1802d3c53: mov eax, dword ptr [rsp + 0x58] */
L_1802d3c53_0:;
L_1802d3c53_1:;
wr(s->u,13,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1802d3c53_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,13,8),4));
L_1802d3c53_3:;
wr(s->r,0,4,rd(s->u,29,4));
L_1802d3c53_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1802d3c53_5:;
/* 1802d3c57: mov rsi, qword ptr [rsp + 0x40] */
L_1802d3c57_0:;
L_1802d3c57_1:;
wr(s->u,13,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1802d3c57_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,13,8),8));
L_1802d3c57_3:;
wr(s->r,48,8,rd(s->u,33,8));
L_1802d3c57_4:;
/* 1802d3c5c: mov rdi, qword ptr [rsp + 0x48] */
L_1802d3c5c_0:;
L_1802d3c5c_1:;
wr(s->u,13,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1802d3c5c_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,13,8),8));
L_1802d3c5c_3:;
wr(s->r,56,8,rd(s->u,33,8));
L_1802d3c5c_4:;
/* 1802d3c61: mov dword ptr [rbx + 0x10], eax */
L_1802d3c61_0:;
L_1802d3c61_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1802d3c61_2:;
wr(s->u,23,4,rd(s->r,0,4));
L_1802d3c61_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,23,4));
L_1802d3c61_4:;
/* 1802d3c64: mov eax, ecx */
L_1802d3c64_0:;
L_1802d3c64_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1802d3c64_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1802d3c64_3:;
/* 1802d3c66: imul eax, ebp */
L_1802d3c66_0:;
L_1802d3c66_1:;
wr(s->u,101,8,(U)sx(rd(s->r,0,4),4));
L_1802d3c66_2:;
wr(s->u,109,8,(U)sx(rd(s->r,40,4),4));
L_1802d3c66_3:;
wr(s->u,117,8,(rd(s->u,101,8)*rd(s->u,109,8)));
L_1802d3c66_4:;
wr(s->r,0,4,(rd(s->u,117,8) >> (((U)UINT64_C(0x0))*8)));
L_1802d3c66_5:;
wr(s->u,125,4,(rd(s->u,117,8) >> (((U)UINT64_C(0x4))*8)));
L_1802d3c66_6:;
wr(s->u,70,8,(U)sx(rd(s->r,0,4),4));
L_1802d3c66_7:;
wr(s->r,512,1,(rd(s->u,70,8)!=rd(s->u,117,8)));
L_1802d3c66_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1802d3c66_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1802d3c66_10:;
/* 1802d3c69: mov rbp, qword ptr [rsp + 0x38] */
L_1802d3c69_0:;
L_1802d3c69_1:;
wr(s->u,13,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1802d3c69_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,13,8),8));
L_1802d3c69_3:;
wr(s->r,40,8,rd(s->u,33,8));
L_1802d3c69_4:;
/* 1802d3c6e: cdq  */
L_1802d3c6e_0:;
L_1802d3c6e_1:;
wr(s->u,93,8,(U)sx(rd(s->r,0,4),4));
L_1802d3c6e_2:;
wr(s->r,16,4,(rd(s->u,93,8) >> (((U)UINT64_C(0x4))*8)));
L_1802d3c6e_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1802d3c6e_4:;
/* 1802d3c6f: mov word ptr [rbx + 0xc], cx */
L_1802d3c6f_0:;
L_1802d3c6f_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1802d3c6f_2:;
wr(s->u,21,2,rd(s->r,8,2));
L_1802d3c6f_3:;
mw((uint64_t)rd(s->u,5,8),2,rd(s->u,21,2));
L_1802d3c6f_4:;
/* 1802d3c73: and edx, 7 */
L_1802d3c73_0:;
L_1802d3c73_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1802d3c73_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1802d3c73_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x7))));
L_1802d3c73_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1802d3c73_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1802d3c73_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1802d3c73_7:;
wr(s->u,41,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1802d3c73_8:;
wr(s->u,49,1,pop(rd(s->u,41,4),4));
L_1802d3c73_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1802d3c73_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1802d3c73_11:;
/* 1802d3c76: mov dword ptr [rbx + 8], r12d */
L_1802d3c76_0:;
L_1802d3c76_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1802d3c76_2:;
wr(s->u,23,4,rd(s->r,160,4));
L_1802d3c76_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,23,4));
L_1802d3c76_4:;
/* 1802d3c7a: add eax, edx */
L_1802d3c7a_0:;
L_1802d3c7a_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,16,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1802d3c7a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,16,4),4,0));
L_1802d3c7a_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,16,4)));
L_1802d3c7a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1802d3c7a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1802d3c7a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1802d3c7a_7:;
wr(s->u,41,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1802d3c7a_8:;
wr(s->u,49,1,pop(rd(s->u,41,4),4));
L_1802d3c7a_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1802d3c7a_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1802d3c7a_11:;
/* 1802d3c7c: sar eax, 3 */
L_1802d3c7c_0:;
L_1802d3c7c_1:;
wr(s->u,137,4,(((U)UINT64_C(0x3))&((U)UINT64_C(0x1f))));
L_1802d3c7c_2:;
wr(s->u,141,4,rd(s->r,0,4));
L_1802d3c7c_3:;
wr(s->r,0,4,((rd(s->u,137,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,137,4))));
L_1802d3c7c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1802d3c7c_5:;
wr(s->u,78,1,(rd(s->u,137,4)==((U)UINT64_C(0x0))));
L_1802d3c7c_6:;
wr(s->u,79,4,(rd(s->u,137,4)-((U)UINT64_C(0x1))));
L_1802d3c7c_7:;
wr(s->u,83,4,((rd(s->u,79,4)>=32)?(sx(rd(s->u,141,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,141,4),4)>>rd(s->u,79,4))));
L_1802d3c7c_8:;
wr(s->u,87,4,(rd(s->u,83,4)&((U)UINT64_C(0x1))));
L_1802d3c7c_9:;
wr(s->u,91,1,(rd(s->u,87,4)!=((U)UINT64_C(0x0))));
L_1802d3c7c_10:;
wr(s->u,0,1,rd(s->u,78,1));
L_1802d3c7c_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1802d3c7c_12:;
wr(s->u,2,1,(!rd(s->u,78,1)));
L_1802d3c7c_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1802d3c7c_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,91,1)));
L_1802d3c7c_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1802d3c7c_16:;
wr(s->u,92,1,(rd(s->u,137,4)==((U)UINT64_C(0x1))));
L_1802d3c7c_17:;
wr(s->u,0,1,rd(s->u,92,1));
L_1802d3c7c_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1802d3c7c_19:;
wr(s->u,2,1,(!rd(s->u,92,1)));
L_1802d3c7c_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1802d3c7c_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1802d3c7c_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1802d3c7c_23:;
wr(s->u,51,1,(rd(s->u,137,4)!=((U)UINT64_C(0x0))));
L_1802d3c7c_24:;
wr(s->u,52,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1802d3c7c_25:;
wr(s->u,53,1,(!rd(s->u,51,1)));
L_1802d3c7c_26:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,519,1)));
L_1802d3c7c_27:;
wr(s->u,55,1,(rd(s->u,51,1)&rd(s->u,52,1)));
L_1802d3c7c_28:;
wr(s->r,519,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1802d3c7c_29:;
wr(s->u,56,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1802d3c7c_30:;
wr(s->u,57,1,(!rd(s->u,51,1)));
L_1802d3c7c_31:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,518,1)));
L_1802d3c7c_32:;
wr(s->u,59,1,(rd(s->u,51,1)&rd(s->u,56,1)));
L_1802d3c7c_33:;
wr(s->r,518,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1802d3c7c_34:;
wr(s->u,60,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1802d3c7c_35:;
wr(s->u,64,1,pop(rd(s->u,60,4),4));
L_1802d3c7c_36:;
wr(s->u,65,1,(rd(s->u,64,1)&((U)UINT64_C(0x1))));
L_1802d3c7c_37:;
wr(s->u,66,1,(rd(s->u,65,1)==((U)UINT64_C(0x0))));
L_1802d3c7c_38:;
wr(s->u,67,1,(!rd(s->u,51,1)));
L_1802d3c7c_39:;
wr(s->u,68,1,(rd(s->u,67,1)&rd(s->r,514,1)));
L_1802d3c7c_40:;
wr(s->u,69,1,(rd(s->u,51,1)&rd(s->u,66,1)));
L_1802d3c7c_41:;
wr(s->r,514,1,(rd(s->u,68,1)|rd(s->u,69,1)));
L_1802d3c7c_42:;
/* 1802d3c7f: movzx ecx, ax */
L_1802d3c7f_0:;
L_1802d3c7f_1:;
wr(s->r,8,4,rd(s->r,0,2));
L_1802d3c7f_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1802d3c7f_3:;
/* 1802d3c82: mov word ptr [rbx + 0xe], ax */
L_1802d3c82_0:;
L_1802d3c82_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xe))));
L_1802d3c82_2:;
wr(s->u,21,2,rd(s->r,0,2));
L_1802d3c82_3:;
mw((uint64_t)rd(s->u,5,8),2,rd(s->u,21,2));
L_1802d3c82_4:;
/* 1802d3c86: imul ecx, r12d */
L_1802d3c86_0:;
L_1802d3c86_1:;
wr(s->u,101,8,(U)sx(rd(s->r,8,4),4));
L_1802d3c86_2:;
wr(s->u,109,8,(U)sx(rd(s->r,160,4),4));
L_1802d3c86_3:;
wr(s->u,117,8,(rd(s->u,101,8)*rd(s->u,109,8)));
L_1802d3c86_4:;
wr(s->r,8,4,(rd(s->u,117,8) >> (((U)UINT64_C(0x0))*8)));
L_1802d3c86_5:;
wr(s->u,125,4,(rd(s->u,117,8) >> (((U)UINT64_C(0x4))*8)));
L_1802d3c86_6:;
wr(s->u,70,8,(U)sx(rd(s->r,8,4),4));
L_1802d3c86_7:;
wr(s->r,512,1,(rd(s->u,70,8)!=rd(s->u,117,8)));
L_1802d3c86_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1802d3c86_9:;
wr(s->r,8,8,rd(s->r,8,4));
L_1802d3c86_10:;
/* 1802d3c8a: mov dword ptr [rbx + 0x1c], ecx */
L_1802d3c8a_0:;
L_1802d3c8a_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x1c))));
L_1802d3c8a_2:;
wr(s->u,23,4,rd(s->r,8,4));
L_1802d3c8a_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,23,4));
L_1802d3c8a_4:;
/* 1802d3c8d: mov rbx, qword ptr [rsp + 0x30] */
L_1802d3c8d_0:;
L_1802d3c8d_1:;
wr(s->u,13,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1802d3c8d_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,13,8),8));
L_1802d3c8d_3:;
wr(s->r,24,8,rd(s->u,33,8));
L_1802d3c8d_4:;
/* 1802d3c92: add rsp, 0x20 */
L_1802d3c92_0:;
L_1802d3c92_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1802d3c92_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1802d3c92_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1802d3c92_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1802d3c92_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1802d3c92_6:;
wr(s->u,41,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1802d3c92_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1802d3c92_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1802d3c92_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1802d3c92_10:;
/* 1802d3c96: pop r12 */
L_1802d3c96_0:;
L_1802d3c96_1:;
wr(s->u,129,8,((U)UINT64_C(0x0)));
L_1802d3c96_2:;
wr(s->u,129,8,mr((uint64_t)rd(s->r,32,8),8));
L_1802d3c96_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1802d3c96_4:;
wr(s->r,160,8,rd(s->u,129,8));
L_1802d3c96_5:;
/* 1802d3c98: ret  */
L_1802d3c98_0:;
L_1802d3c98_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1802d3c98_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1802d3c98_3:;
return (uint64_t)rd(s->r,648,8);
L_1802d3c98_4:;
return UINT64_C(0x1802d3c99);
}
uint64_t b_1802d3c4e(CPU*s){
/* 1802d3c4e: movzx ecx, word ptr [rsp + 0x50] */
L_1802d3c4e_0:;
L_1802d3c4e_1:;
wr(s->u,13,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1802d3c4e_2:;
wr(s->u,27,2,mr((uint64_t)rd(s->u,13,8),2));
L_1802d3c4e_3:;
wr(s->r,8,4,rd(s->u,27,2));
L_1802d3c4e_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1802d3c4e_5:;
/* 1802d3c53: mov eax, dword ptr [rsp + 0x58] */
L_1802d3c53_0:;
L_1802d3c53_1:;
wr(s->u,13,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1802d3c53_2:;
wr(s->u,29,4,mr((uint64_t)rd(s->u,13,8),4));
L_1802d3c53_3:;
wr(s->r,0,4,rd(s->u,29,4));
L_1802d3c53_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1802d3c53_5:;
/* 1802d3c57: mov rsi, qword ptr [rsp + 0x40] */
L_1802d3c57_0:;
L_1802d3c57_1:;
wr(s->u,13,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1802d3c57_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,13,8),8));
L_1802d3c57_3:;
wr(s->r,48,8,rd(s->u,33,8));
L_1802d3c57_4:;
/* 1802d3c5c: mov rdi, qword ptr [rsp + 0x48] */
L_1802d3c5c_0:;
L_1802d3c5c_1:;
wr(s->u,13,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1802d3c5c_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,13,8),8));
L_1802d3c5c_3:;
wr(s->r,56,8,rd(s->u,33,8));
L_1802d3c5c_4:;
/* 1802d3c61: mov dword ptr [rbx + 0x10], eax */
L_1802d3c61_0:;
L_1802d3c61_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x10))));
L_1802d3c61_2:;
wr(s->u,23,4,rd(s->r,0,4));
L_1802d3c61_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,23,4));
L_1802d3c61_4:;
/* 1802d3c64: mov eax, ecx */
L_1802d3c64_0:;
L_1802d3c64_1:;
wr(s->r,0,4,rd(s->r,8,4));
L_1802d3c64_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1802d3c64_3:;
/* 1802d3c66: imul eax, ebp */
L_1802d3c66_0:;
L_1802d3c66_1:;
wr(s->u,101,8,(U)sx(rd(s->r,0,4),4));
L_1802d3c66_2:;
wr(s->u,109,8,(U)sx(rd(s->r,40,4),4));
L_1802d3c66_3:;
wr(s->u,117,8,(rd(s->u,101,8)*rd(s->u,109,8)));
L_1802d3c66_4:;
wr(s->r,0,4,(rd(s->u,117,8) >> (((U)UINT64_C(0x0))*8)));
L_1802d3c66_5:;
wr(s->u,125,4,(rd(s->u,117,8) >> (((U)UINT64_C(0x4))*8)));
L_1802d3c66_6:;
wr(s->u,70,8,(U)sx(rd(s->r,0,4),4));
L_1802d3c66_7:;
wr(s->r,512,1,(rd(s->u,70,8)!=rd(s->u,117,8)));
L_1802d3c66_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1802d3c66_9:;
wr(s->r,0,8,rd(s->r,0,4));
L_1802d3c66_10:;
/* 1802d3c69: mov rbp, qword ptr [rsp + 0x38] */
L_1802d3c69_0:;
L_1802d3c69_1:;
wr(s->u,13,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1802d3c69_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,13,8),8));
L_1802d3c69_3:;
wr(s->r,40,8,rd(s->u,33,8));
L_1802d3c69_4:;
/* 1802d3c6e: cdq  */
L_1802d3c6e_0:;
L_1802d3c6e_1:;
wr(s->u,93,8,(U)sx(rd(s->r,0,4),4));
L_1802d3c6e_2:;
wr(s->r,16,4,(rd(s->u,93,8) >> (((U)UINT64_C(0x4))*8)));
L_1802d3c6e_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1802d3c6e_4:;
/* 1802d3c6f: mov word ptr [rbx + 0xc], cx */
L_1802d3c6f_0:;
L_1802d3c6f_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xc))));
L_1802d3c6f_2:;
wr(s->u,21,2,rd(s->r,8,2));
L_1802d3c6f_3:;
mw((uint64_t)rd(s->u,5,8),2,rd(s->u,21,2));
L_1802d3c6f_4:;
/* 1802d3c73: and edx, 7 */
L_1802d3c73_0:;
L_1802d3c73_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1802d3c73_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1802d3c73_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x7))));
L_1802d3c73_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1802d3c73_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1802d3c73_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1802d3c73_7:;
wr(s->u,41,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1802d3c73_8:;
wr(s->u,49,1,pop(rd(s->u,41,4),4));
L_1802d3c73_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1802d3c73_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1802d3c73_11:;
/* 1802d3c76: mov dword ptr [rbx + 8], r12d */
L_1802d3c76_0:;
L_1802d3c76_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x8))));
L_1802d3c76_2:;
wr(s->u,23,4,rd(s->r,160,4));
L_1802d3c76_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,23,4));
L_1802d3c76_4:;
/* 1802d3c7a: add eax, edx */
L_1802d3c7a_0:;
L_1802d3c7a_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+rd(s->r,16,4))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1802d3c7a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,16,4),4,0));
L_1802d3c7a_3:;
wr(s->r,0,4,(rd(s->r,0,4)+rd(s->r,16,4)));
L_1802d3c7a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1802d3c7a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1802d3c7a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1802d3c7a_7:;
wr(s->u,41,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1802d3c7a_8:;
wr(s->u,49,1,pop(rd(s->u,41,4),4));
L_1802d3c7a_9:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1802d3c7a_10:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1802d3c7a_11:;
/* 1802d3c7c: sar eax, 3 */
L_1802d3c7c_0:;
L_1802d3c7c_1:;
wr(s->u,137,4,(((U)UINT64_C(0x3))&((U)UINT64_C(0x1f))));
L_1802d3c7c_2:;
wr(s->u,141,4,rd(s->r,0,4));
L_1802d3c7c_3:;
wr(s->r,0,4,((rd(s->u,137,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,137,4))));
L_1802d3c7c_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1802d3c7c_5:;
wr(s->u,78,1,(rd(s->u,137,4)==((U)UINT64_C(0x0))));
L_1802d3c7c_6:;
wr(s->u,79,4,(rd(s->u,137,4)-((U)UINT64_C(0x1))));
L_1802d3c7c_7:;
wr(s->u,83,4,((rd(s->u,79,4)>=32)?(sx(rd(s->u,141,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,141,4),4)>>rd(s->u,79,4))));
L_1802d3c7c_8:;
wr(s->u,87,4,(rd(s->u,83,4)&((U)UINT64_C(0x1))));
L_1802d3c7c_9:;
wr(s->u,91,1,(rd(s->u,87,4)!=((U)UINT64_C(0x0))));
L_1802d3c7c_10:;
wr(s->u,0,1,rd(s->u,78,1));
L_1802d3c7c_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1802d3c7c_12:;
wr(s->u,2,1,(!rd(s->u,78,1)));
L_1802d3c7c_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1802d3c7c_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,91,1)));
L_1802d3c7c_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1802d3c7c_16:;
wr(s->u,92,1,(rd(s->u,137,4)==((U)UINT64_C(0x1))));
L_1802d3c7c_17:;
wr(s->u,0,1,rd(s->u,92,1));
L_1802d3c7c_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1802d3c7c_19:;
wr(s->u,2,1,(!rd(s->u,92,1)));
L_1802d3c7c_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1802d3c7c_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1802d3c7c_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1802d3c7c_23:;
wr(s->u,51,1,(rd(s->u,137,4)!=((U)UINT64_C(0x0))));
L_1802d3c7c_24:;
wr(s->u,52,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1802d3c7c_25:;
wr(s->u,53,1,(!rd(s->u,51,1)));
L_1802d3c7c_26:;
wr(s->u,54,1,(rd(s->u,53,1)&rd(s->r,519,1)));
L_1802d3c7c_27:;
wr(s->u,55,1,(rd(s->u,51,1)&rd(s->u,52,1)));
L_1802d3c7c_28:;
wr(s->r,519,1,(rd(s->u,54,1)|rd(s->u,55,1)));
L_1802d3c7c_29:;
wr(s->u,56,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1802d3c7c_30:;
wr(s->u,57,1,(!rd(s->u,51,1)));
L_1802d3c7c_31:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,518,1)));
L_1802d3c7c_32:;
wr(s->u,59,1,(rd(s->u,51,1)&rd(s->u,56,1)));
L_1802d3c7c_33:;
wr(s->r,518,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1802d3c7c_34:;
wr(s->u,60,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1802d3c7c_35:;
wr(s->u,64,1,pop(rd(s->u,60,4),4));
L_1802d3c7c_36:;
wr(s->u,65,1,(rd(s->u,64,1)&((U)UINT64_C(0x1))));
L_1802d3c7c_37:;
wr(s->u,66,1,(rd(s->u,65,1)==((U)UINT64_C(0x0))));
L_1802d3c7c_38:;
wr(s->u,67,1,(!rd(s->u,51,1)));
L_1802d3c7c_39:;
wr(s->u,68,1,(rd(s->u,67,1)&rd(s->r,514,1)));
L_1802d3c7c_40:;
wr(s->u,69,1,(rd(s->u,51,1)&rd(s->u,66,1)));
L_1802d3c7c_41:;
wr(s->r,514,1,(rd(s->u,68,1)|rd(s->u,69,1)));
L_1802d3c7c_42:;
/* 1802d3c7f: movzx ecx, ax */
L_1802d3c7f_0:;
L_1802d3c7f_1:;
wr(s->r,8,4,rd(s->r,0,2));
L_1802d3c7f_2:;
wr(s->r,8,8,rd(s->r,8,4));
L_1802d3c7f_3:;
/* 1802d3c82: mov word ptr [rbx + 0xe], ax */
L_1802d3c82_0:;
L_1802d3c82_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0xe))));
L_1802d3c82_2:;
wr(s->u,21,2,rd(s->r,0,2));
L_1802d3c82_3:;
mw((uint64_t)rd(s->u,5,8),2,rd(s->u,21,2));
L_1802d3c82_4:;
/* 1802d3c86: imul ecx, r12d */
L_1802d3c86_0:;
L_1802d3c86_1:;
wr(s->u,101,8,(U)sx(rd(s->r,8,4),4));
L_1802d3c86_2:;
wr(s->u,109,8,(U)sx(rd(s->r,160,4),4));
L_1802d3c86_3:;
wr(s->u,117,8,(rd(s->u,101,8)*rd(s->u,109,8)));
L_1802d3c86_4:;
wr(s->r,8,4,(rd(s->u,117,8) >> (((U)UINT64_C(0x0))*8)));
L_1802d3c86_5:;
wr(s->u,125,4,(rd(s->u,117,8) >> (((U)UINT64_C(0x4))*8)));
L_1802d3c86_6:;
wr(s->u,70,8,(U)sx(rd(s->r,8,4),4));
L_1802d3c86_7:;
wr(s->r,512,1,(rd(s->u,70,8)!=rd(s->u,117,8)));
L_1802d3c86_8:;
wr(s->r,523,1,rd(s->r,512,1));
L_1802d3c86_9:;
wr(s->r,8,8,rd(s->r,8,4));
L_1802d3c86_10:;
/* 1802d3c8a: mov dword ptr [rbx + 0x1c], ecx */
L_1802d3c8a_0:;
L_1802d3c8a_1:;
wr(s->u,5,8,(rd(s->r,24,8)+((U)UINT64_C(0x1c))));
L_1802d3c8a_2:;
wr(s->u,23,4,rd(s->r,8,4));
L_1802d3c8a_3:;
mw((uint64_t)rd(s->u,5,8),4,rd(s->u,23,4));
L_1802d3c8a_4:;
/* 1802d3c8d: mov rbx, qword ptr [rsp + 0x30] */
L_1802d3c8d_0:;
L_1802d3c8d_1:;
wr(s->u,13,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1802d3c8d_2:;
wr(s->u,33,8,mr((uint64_t)rd(s->u,13,8),8));
L_1802d3c8d_3:;
wr(s->r,24,8,rd(s->u,33,8));
L_1802d3c8d_4:;
/* 1802d3c92: add rsp, 0x20 */
L_1802d3c92_0:;
L_1802d3c92_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1802d3c92_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1802d3c92_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1802d3c92_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1802d3c92_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1802d3c92_6:;
wr(s->u,41,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1802d3c92_7:;
wr(s->u,49,1,pop(rd(s->u,41,8),8));
L_1802d3c92_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1802d3c92_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1802d3c92_10:;
/* 1802d3c96: pop r12 */
L_1802d3c96_0:;
L_1802d3c96_1:;
wr(s->u,129,8,((U)UINT64_C(0x0)));
L_1802d3c96_2:;
wr(s->u,129,8,mr((uint64_t)rd(s->r,32,8),8));
L_1802d3c96_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1802d3c96_4:;
wr(s->r,160,8,rd(s->u,129,8));
L_1802d3c96_5:;
/* 1802d3c98: ret  */
L_1802d3c98_0:;
L_1802d3c98_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1802d3c98_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1802d3c98_3:;
return (uint64_t)rd(s->r,648,8);
L_1802d3c98_4:;
return UINT64_C(0x1802d3c99);
}
uint64_t b_1802d3cc0(CPU*s){
/* 1802d3cc0: test byte ptr [rcx + 0x14], 8 */
L_1802d3cc0_0:;
L_1802d3cc0_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x14))));
L_1802d3cc0_2:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1802d3cc0_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1802d3cc0_4:;
wr(s->u,8,1,mr((uint64_t)rd(s->u,0,8),1));
L_1802d3cc0_5:;
wr(s->u,12,1,(rd(s->u,8,1)&((U)UINT64_C(0x8))));
L_1802d3cc0_6:;
wr(s->r,519,1,(sx(rd(s->u,12,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1802d3cc0_7:;
wr(s->r,518,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1802d3cc0_8:;
wr(s->u,9,1,(rd(s->u,12,1)&((U)UINT64_C(0xff))));
L_1802d3cc0_9:;
wr(s->u,10,1,pop(rd(s->u,9,1),1));
L_1802d3cc0_10:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1802d3cc0_11:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1802d3cc0_12:;
/* 1802d3cc4: je 0x1802d3ccb */
L_1802d3cc4_0:;
L_1802d3cc4_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1802d3ccb);}
L_1802d3cc4_2:;
return UINT64_C(0x1802d3cc6);
}
uint64_t b_1802d3cc6(CPU*s){
/* 1802d3cc6: movzx eax, word ptr [rcx + 0x1a] */
L_1802d3cc6_0:;
L_1802d3cc6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x1a))));
L_1802d3cc6_2:;
wr(s->u,8,2,mr((uint64_t)rd(s->u,0,8),2));
L_1802d3cc6_3:;
wr(s->r,0,4,rd(s->u,8,2));
L_1802d3cc6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1802d3cc6_5:;
/* 1802d3cca: ret  */
L_1802d3cca_0:;
L_1802d3cca_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1802d3cca_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1802d3cca_3:;
return (uint64_t)rd(s->r,648,8);
L_1802d3cca_4:;
return UINT64_C(0x1802d3ccb);
}
uint64_t b_1802d3ccb(CPU*s){
/* 1802d3ccb: mov ecx, dword ptr [rcx + 4] */
L_1802d3ccb_0:;
L_1802d3ccb_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1802d3ccb_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1802d3ccb_3:;
wr(s->r,8,4,rd(s->u,8,4));
L_1802d3ccb_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1802d3ccb_5:;
/* 1802d3cce: jmp 0x180140870 */
L_1802d3cce_0:;
L_1802d3cce_1:;
return UINT64_C(0x180140870);
L_1802d3cce_2:;
return UINT64_C(0x1802d3cd3);
}
