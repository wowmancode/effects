#include "lift_runtime.h"
uint64_t b_1803e100f(CPU*s){
/* 1803e100f: mov dword ptr [rcx + 0x8a18], edx */
L_1803e100f_0:;
L_1803e100f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8a18))));
L_1803e100f_2:;
wr(s->u,16,4,rd(s->r,16,4));
L_1803e100f_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803e100f_4:;
/* 1803e1015: mov rbx, qword ptr [rsp + 0x48] */
L_1803e1015_0:;
L_1803e1015_1:;
wr(s->u,8,8,(((U)UINT64_C(0x48))+rd(s->r,32,8)));
L_1803e1015_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803e1015_3:;
wr(s->r,24,8,rd(s->u,20,8));
L_1803e1015_4:;
/* 1803e101a: add rsp, 0x20 */
L_1803e101a_0:;
L_1803e101a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e101a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803e101a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803e101a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e101a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e101a_6:;
wr(s->u,28,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e101a_7:;
wr(s->u,36,1,pop(rd(s->u,28,8),8));
L_1803e101a_8:;
wr(s->u,37,1,(rd(s->u,36,1)&((U)UINT64_C(0x1))));
L_1803e101a_9:;
wr(s->r,514,1,(rd(s->u,37,1)==((U)UINT64_C(0x0))));
L_1803e101a_10:;
/* 1803e101e: pop rdi */
L_1803e101e_0:;
L_1803e101e_1:;
wr(s->u,38,8,((U)UINT64_C(0x0)));
L_1803e101e_2:;
wr(s->u,38,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e101e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e101e_4:;
wr(s->r,56,8,rd(s->u,38,8));
L_1803e101e_5:;
/* 1803e101f: ret  */
L_1803e101f_0:;
L_1803e101f_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e101f_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e101f_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e101f_4:;
return UINT64_C(0x1803e1020);
}
uint64_t b_1803e10a0(CPU*s){
/* 1803e10a0: mov eax, dword ptr [rip + 0x582a7a] */
L_1803e10a0_0:;
L_1803e10a0_1:;
wr(s->r,0,4,mr(UINT64_C(0x180963b20),4));
L_1803e10a0_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e10a0_3:;
/* 1803e10a6: ret  */
L_1803e10a6_0:;
L_1803e10a6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e10a6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e10a6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e10a6_4:;
return UINT64_C(0x1803e10a7);
}
uint64_t b_1803e1120(CPU*s){
/* 1803e1120: sub rsp, 0x18 */
L_1803e1120_0:;
L_1803e1120_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x18))));
L_1803e1120_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x18)),8,1));
L_1803e1120_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x18))));
L_1803e1120_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1120_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1120_6:;
wr(s->u,1,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1120_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803e1120_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803e1120_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803e1120_10:;
/* 1803e1124: cmp dword ptr [rip + 0x63d0ed], 0 */
L_1803e1124_0:;
L_1803e1124_1:;
wr(s->u,11,4,mr(UINT64_C(0x180a1e218),4));
L_1803e1124_2:;
wr(s->r,512,1,(rd(s->u,11,4)<((U)UINT64_C(0x0))));
L_1803e1124_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,11,4),((U)UINT64_C(0x0)),4,1));
L_1803e1124_4:;
wr(s->u,15,4,(rd(s->u,11,4)-((U)UINT64_C(0x0))));
L_1803e1124_5:;
wr(s->r,519,1,(sx(rd(s->u,15,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1124_6:;
wr(s->r,518,1,(rd(s->u,15,4)==((U)UINT64_C(0x0))));
L_1803e1124_7:;
wr(s->u,1,4,(rd(s->u,15,4)&((U)UINT64_C(0xff))));
L_1803e1124_8:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803e1124_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803e1124_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803e1124_11:;
/* 1803e112b: jne 0x1803e188e */
L_1803e112b_0:;
L_1803e112b_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803e112b_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803e188e);}
L_1803e112b_3:;
return UINT64_C(0x1803e1131);
}
uint64_t b_1803e1131(CPU*s){
/* 1803e1131: mov qword ptr [rsp + 0x10], rbx */
L_1803e1131_0:;
L_1803e1131_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803e1131_2:;
wr(s->u,12,8,rd(s->r,24,8));
L_1803e1131_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,12,8));
L_1803e1131_4:;
/* 1803e1136: mov eax, 1 */
L_1803e1136_0:;
L_1803e1136_1:;
wr(s->r,0,8,((U)UINT64_C(0x1)));
L_1803e1136_2:;
/* 1803e113b: mov dword ptr [rip + 0x63d0d3], 1 */
L_1803e113b_0:;
L_1803e113b_1:;
mw(UINT64_C(0x180a1e218),4,((U)UINT64_C(0x1)));
L_1803e113b_2:;
/* 1803e1145: cpuid  */
L_1803e1145_0:;
L_1803e1145_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803e1145_2:;
wr(s->u,42,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803e1145_3:;
if(rd(s->u,42,1)){goto L_1803e1145_36;}
L_1803e1145_4:;
wr(s->u,43,1,(rd(s->r,0,4)==((U)UINT64_C(0x1))));
L_1803e1145_5:;
if(rd(s->u,43,1)){goto L_1803e1145_38;}
L_1803e1145_6:;
wr(s->u,44,1,(rd(s->r,0,4)==((U)UINT64_C(0x2))));
L_1803e1145_7:;
if(rd(s->u,44,1)){goto L_1803e1145_40;}
L_1803e1145_8:;
wr(s->u,45,1,(rd(s->r,0,4)==((U)UINT64_C(0x3))));
L_1803e1145_9:;
if(rd(s->u,45,1)){goto L_1803e1145_42;}
L_1803e1145_10:;
wr(s->u,46,1,(rd(s->r,0,4)==((U)UINT64_C(0x4))));
L_1803e1145_11:;
if(rd(s->u,46,1)){goto L_1803e1145_44;}
L_1803e1145_12:;
wr(s->u,47,1,(rd(s->r,0,4)==((U)UINT64_C(0x5))));
L_1803e1145_13:;
if(rd(s->u,47,1)){goto L_1803e1145_46;}
L_1803e1145_14:;
wr(s->u,48,1,(rd(s->r,0,4)==((U)UINT64_C(0x6))));
L_1803e1145_15:;
if(rd(s->u,48,1)){goto L_1803e1145_48;}
L_1803e1145_16:;
wr(s->u,49,1,(rd(s->r,0,4)==((U)UINT64_C(0x7))));
L_1803e1145_17:;
if(rd(s->u,49,1)){goto L_1803e1145_50;}
L_1803e1145_18:;
wr(s->u,50,1,(rd(s->r,0,4)==((U)UINT64_C(0x9))));
L_1803e1145_19:;
if(rd(s->u,50,1)){goto L_1803e1145_52;}
L_1803e1145_20:;
wr(s->u,51,1,(rd(s->r,0,4)==((U)UINT64_C(0xa))));
L_1803e1145_21:;
if(rd(s->u,51,1)){goto L_1803e1145_54;}
L_1803e1145_22:;
wr(s->u,52,1,(rd(s->r,0,4)==((U)UINT64_C(0xb))));
L_1803e1145_23:;
if(rd(s->u,52,1)){goto L_1803e1145_56;}
L_1803e1145_24:;
wr(s->u,53,1,(rd(s->r,0,4)==((U)UINT64_C(0xd))));
L_1803e1145_25:;
if(rd(s->u,53,1)){goto L_1803e1145_58;}
L_1803e1145_26:;
wr(s->u,54,1,(rd(s->r,0,4)==((U)UINT64_C(0xf))));
L_1803e1145_27:;
if(rd(s->u,54,1)){goto L_1803e1145_60;}
L_1803e1145_28:;
wr(s->u,55,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000002))));
L_1803e1145_29:;
if(rd(s->u,55,1)){goto L_1803e1145_62;}
L_1803e1145_30:;
wr(s->u,56,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000003))));
L_1803e1145_31:;
if(rd(s->u,56,1)){goto L_1803e1145_64;}
L_1803e1145_32:;
wr(s->u,57,1,(rd(s->r,0,4)==((U)UINT64_C(0x80000004))));
L_1803e1145_33:;
if(rd(s->u,57,1)){goto L_1803e1145_66;}
L_1803e1145_34:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_35:;
goto L_1803e1145_68;
L_1803e1145_36:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_37:;
goto L_1803e1145_68;
L_1803e1145_38:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_39:;
goto L_1803e1145_68;
L_1803e1145_40:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_41:;
goto L_1803e1145_68;
L_1803e1145_42:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_43:;
goto L_1803e1145_68;
L_1803e1145_44:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_45:;
goto L_1803e1145_68;
L_1803e1145_46:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_47:;
goto L_1803e1145_68;
L_1803e1145_48:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_49:;
goto L_1803e1145_68;
L_1803e1145_50:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_51:;
goto L_1803e1145_68;
L_1803e1145_52:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_53:;
goto L_1803e1145_68;
L_1803e1145_54:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_55:;
goto L_1803e1145_68;
L_1803e1145_56:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_57:;
goto L_1803e1145_68;
L_1803e1145_58:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_59:;
goto L_1803e1145_68;
L_1803e1145_60:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_61:;
goto L_1803e1145_68;
L_1803e1145_62:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_63:;
goto L_1803e1145_68;
L_1803e1145_64:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_65:;
goto L_1803e1145_68;
L_1803e1145_66:;
wr(s->u,34,8,lift_cpuid((unsigned)rd(s->r,0,4)));
L_1803e1145_67:;
goto L_1803e1145_68;
L_1803e1145_68:;
wr(s->u,58,4,mr((uint64_t)rd(s->u,34,8),4));
L_1803e1145_69:;
wr(s->r,0,8,rd(s->u,58,4));
L_1803e1145_70:;
wr(s->u,62,8,(rd(s->u,34,8)+((U)UINT64_C(0x4))));
L_1803e1145_71:;
wr(s->u,70,4,mr((uint64_t)rd(s->u,62,8),4));
L_1803e1145_72:;
wr(s->r,24,8,rd(s->u,70,4));
L_1803e1145_73:;
wr(s->u,74,8,(rd(s->u,34,8)+((U)UINT64_C(0x8))));
L_1803e1145_74:;
wr(s->u,82,4,mr((uint64_t)rd(s->u,74,8),4));
L_1803e1145_75:;
wr(s->r,16,8,rd(s->u,82,4));
L_1803e1145_76:;
wr(s->u,86,8,(rd(s->u,34,8)+((U)UINT64_C(0xc))));
L_1803e1145_77:;
wr(s->u,94,4,mr((uint64_t)rd(s->u,86,8),4));
L_1803e1145_78:;
wr(s->r,8,8,rd(s->u,94,4));
L_1803e1145_79:;
/* 1803e1147: and ecx, 1 */
L_1803e1147_0:;
L_1803e1147_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1147_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1147_3:;
wr(s->r,8,4,(rd(s->r,8,4)&((U)UINT64_C(0x1))));
L_1803e1147_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803e1147_5:;
wr(s->r,519,1,(sx(rd(s->r,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1147_6:;
wr(s->r,518,1,(rd(s->r,8,4)==((U)UINT64_C(0x0))));
L_1803e1147_7:;
wr(s->u,28,4,(rd(s->r,8,4)&((U)UINT64_C(0xff))));
L_1803e1147_8:;
wr(s->u,32,1,pop(rd(s->u,28,4),4));
L_1803e1147_9:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803e1147_10:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803e1147_11:;
/* 1803e114a: mov dword ptr [rsp + 4], ebx */
L_1803e114a_0:;
L_1803e114a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x4))+rd(s->r,32,8)));
L_1803e114a_2:;
wr(s->u,8,4,rd(s->r,24,4));
L_1803e114a_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803e114a_4:;
/* 1803e114e: mov rbx, qword ptr [rsp + 0x10] */
L_1803e114e_0:;
L_1803e114e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803e114e_2:;
wr(s->u,20,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803e114e_3:;
wr(s->r,24,8,rd(s->u,20,8));
L_1803e114e_4:;
/* 1803e1153: mov dword ptr [rsp], eax */
L_1803e1153_0:;
L_1803e1153_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803e1153_2:;
mw((uint64_t)rd(s->r,32,8),4,rd(s->u,8,4));
L_1803e1153_3:;
/* 1803e1156: test cl, cl */
L_1803e1156_0:;
L_1803e1156_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1156_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1156_3:;
wr(s->u,98,1,(rd(s->r,8,1)&rd(s->r,8,1)));
L_1803e1156_4:;
wr(s->r,519,1,(sx(rd(s->u,98,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803e1156_5:;
wr(s->r,518,1,(rd(s->u,98,1)==((U)UINT64_C(0x0))));
L_1803e1156_6:;
wr(s->u,28,1,(rd(s->u,98,1)&((U)UINT64_C(0xff))));
L_1803e1156_7:;
wr(s->u,32,1,pop(rd(s->u,28,1),1));
L_1803e1156_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803e1156_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803e1156_10:;
/* 1803e1158: je 0x1803e1161 */
L_1803e1158_0:;
L_1803e1158_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803e1161);}
L_1803e1158_2:;
return UINT64_C(0x1803e115a);
}
uint64_t b_1803e115a(CPU*s){
/* 1803e115a: mov edx, 4 */
L_1803e115a_0:;
L_1803e115a_1:;
wr(s->r,16,8,((U)UINT64_C(0x4)));
L_1803e115a_2:;
/* 1803e115f: jmp 0x1803e1174 */
L_1803e115f_0:;
L_1803e115f_1:;
return UINT64_C(0x1803e1174);
L_1803e115f_2:;
return UINT64_C(0x1803e1161);
}
uint64_t b_1803e1161(CPU*s){
/* 1803e1161: bt edx, 0x1a */
L_1803e1161_0:;
L_1803e1161_1:;
wr(s->u,1,4,(((U)UINT64_C(0x1a))&((U)UINT64_C(0x1f))));
L_1803e1161_2:;
wr(s->u,5,4,((rd(s->u,1,4)>=32)?0:(rd(s->r,16,4)>>rd(s->u,1,4))));
L_1803e1161_3:;
wr(s->u,9,4,(rd(s->u,5,4)&((U)UINT64_C(0x1))));
L_1803e1161_4:;
wr(s->r,512,1,(rd(s->u,9,4)!=((U)UINT64_C(0x0))));
L_1803e1161_5:;
/* 1803e1165: jae 0x1803e116e */
L_1803e1165_0:;
L_1803e1165_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803e1165_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803e116e);}
L_1803e1165_3:;
return UINT64_C(0x1803e1167);
}
uint64_t b_1803e1167(CPU*s){
/* 1803e1167: mov edx, 2 */
L_1803e1167_0:;
L_1803e1167_1:;
wr(s->r,16,8,((U)UINT64_C(0x2)));
L_1803e1167_2:;
/* 1803e116c: jmp 0x1803e1174 */
L_1803e116c_0:;
L_1803e116c_1:;
return UINT64_C(0x1803e1174);
L_1803e116c_2:;
return UINT64_C(0x1803e116e);
}
uint64_t b_1803e116e(CPU*s){
/* 1803e116e: shr edx, 0x19 */
L_1803e116e_0:;
L_1803e116e_1:;
wr(s->u,46,4,(((U)UINT64_C(0x19))&((U)UINT64_C(0x1f))));
L_1803e116e_2:;
wr(s->u,50,4,rd(s->r,16,4));
L_1803e116e_3:;
wr(s->r,16,4,((rd(s->u,46,4)>=32)?0:(rd(s->r,16,4)>>rd(s->u,46,4))));
L_1803e116e_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e116e_5:;
wr(s->u,30,1,(rd(s->u,46,4)==((U)UINT64_C(0x0))));
L_1803e116e_6:;
wr(s->u,31,4,(rd(s->u,46,4)-((U)UINT64_C(0x1))));
L_1803e116e_7:;
wr(s->u,35,4,((rd(s->u,31,4)>=32)?0:(rd(s->u,50,4)>>rd(s->u,31,4))));
L_1803e116e_8:;
wr(s->u,39,4,(rd(s->u,35,4)&((U)UINT64_C(0x1))));
L_1803e116e_9:;
wr(s->u,43,1,(rd(s->u,39,4)!=((U)UINT64_C(0x0))));
L_1803e116e_10:;
wr(s->u,0,1,rd(s->u,30,1));
L_1803e116e_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803e116e_12:;
wr(s->u,2,1,(!rd(s->u,30,1)));
L_1803e116e_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803e116e_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,43,1)));
L_1803e116e_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803e116e_16:;
wr(s->u,44,1,(rd(s->u,46,4)==((U)UINT64_C(0x1))));
L_1803e116e_17:;
wr(s->u,45,1,(sx(rd(s->u,50,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e116e_18:;
wr(s->u,0,1,rd(s->u,44,1));
L_1803e116e_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803e116e_20:;
wr(s->u,2,1,(!rd(s->u,44,1)));
L_1803e116e_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803e116e_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,45,1)));
L_1803e116e_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803e116e_24:;
wr(s->u,11,1,(rd(s->u,46,4)!=((U)UINT64_C(0x0))));
L_1803e116e_25:;
wr(s->u,12,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e116e_26:;
wr(s->u,13,1,(!rd(s->u,11,1)));
L_1803e116e_27:;
wr(s->u,14,1,(rd(s->u,13,1)&rd(s->r,519,1)));
L_1803e116e_28:;
wr(s->u,15,1,(rd(s->u,11,1)&rd(s->u,12,1)));
L_1803e116e_29:;
wr(s->r,519,1,(rd(s->u,14,1)|rd(s->u,15,1)));
L_1803e116e_30:;
wr(s->u,16,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803e116e_31:;
wr(s->u,17,1,(!rd(s->u,11,1)));
L_1803e116e_32:;
wr(s->u,18,1,(rd(s->u,17,1)&rd(s->r,518,1)));
L_1803e116e_33:;
wr(s->u,19,1,(rd(s->u,11,1)&rd(s->u,16,1)));
L_1803e116e_34:;
wr(s->r,518,1,(rd(s->u,18,1)|rd(s->u,19,1)));
L_1803e116e_35:;
wr(s->u,20,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803e116e_36:;
wr(s->u,24,1,pop(rd(s->u,20,4),4));
L_1803e116e_37:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803e116e_38:;
wr(s->u,26,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803e116e_39:;
wr(s->u,27,1,(!rd(s->u,11,1)));
L_1803e116e_40:;
wr(s->u,28,1,(rd(s->u,27,1)&rd(s->r,514,1)));
L_1803e116e_41:;
wr(s->u,29,1,(rd(s->u,11,1)&rd(s->u,26,1)));
L_1803e116e_42:;
wr(s->r,514,1,(rd(s->u,28,1)|rd(s->u,29,1)));
L_1803e116e_43:;
/* 1803e1171: and edx, 1 */
L_1803e1171_0:;
L_1803e1171_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1171_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1171_3:;
wr(s->r,16,4,(rd(s->r,16,4)&((U)UINT64_C(0x1))));
L_1803e1171_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1171_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1171_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803e1171_7:;
wr(s->u,5,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803e1171_8:;
wr(s->u,9,1,pop(rd(s->u,5,4),4));
L_1803e1171_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803e1171_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803e1171_11:;
/* 1803e1174: test dl, 4 */
L_1803e1174_0:;
L_1803e1174_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1174_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1174_3:;
wr(s->u,54,1,(rd(s->r,16,1)&((U)UINT64_C(0x4))));
L_1803e1174_4:;
wr(s->r,519,1,(sx(rd(s->u,54,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803e1174_5:;
wr(s->r,518,1,(rd(s->u,54,1)==((U)UINT64_C(0x0))));
L_1803e1174_6:;
wr(s->u,5,1,(rd(s->u,54,1)&((U)UINT64_C(0xff))));
L_1803e1174_7:;
wr(s->u,9,1,pop(rd(s->u,5,1),1));
L_1803e1174_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803e1174_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803e1174_10:;
/* 1803e1177: je 0x1803e133e */
L_1803e1177_0:;
L_1803e1177_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803e133e);}
L_1803e1177_2:;
return UINT64_C(0x1803e117d);
}
uint64_t b_1803e1174(CPU*s){
/* 1803e1174: test dl, 4 */
L_1803e1174_0:;
L_1803e1174_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1174_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1174_3:;
wr(s->u,3,1,(rd(s->r,16,1)&((U)UINT64_C(0x4))));
L_1803e1174_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803e1174_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803e1174_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_1803e1174_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_1803e1174_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_1803e1174_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_1803e1174_10:;
/* 1803e1177: je 0x1803e133e */
L_1803e1177_0:;
L_1803e1177_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803e133e);}
L_1803e1177_2:;
return UINT64_C(0x1803e117d);
}
uint64_t b_1803e117d(CPU*s){
/* 1803e117d: lea rax, [rip + 0x9f9c] */
L_1803e117d_0:;
L_1803e117d_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb120)));
L_1803e117d_2:;
/* 1803e1184: mov dword ptr [rip + 0x582992], 4 */
L_1803e1184_0:;
L_1803e1184_1:;
mw(UINT64_C(0x180963b20),4,((U)UINT64_C(0x4)));
L_1803e1184_2:;
/* 1803e118e: mov qword ptr [rip + 0x63d07b], rax */
L_1803e118e_0:;
L_1803e118e_1:;
mw(UINT64_C(0x180a1e210),8,rd(s->r,0,8));
L_1803e118e_2:;
/* 1803e1195: lea rax, [rip + 0x9f94] */
L_1803e1195_0:;
L_1803e1195_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb130)));
L_1803e1195_2:;
/* 1803e119c: mov qword ptr [rip + 0x63cfbd], rax */
L_1803e119c_0:;
L_1803e119c_1:;
mw(UINT64_C(0x180a1e160),8,rd(s->r,0,8));
L_1803e119c_2:;
/* 1803e11a3: lea rax, [rip + 0x9fb6] */
L_1803e11a3_0:;
L_1803e11a3_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb160)));
L_1803e11a3_2:;
/* 1803e11aa: mov qword ptr [rip + 0x63cff7], rax */
L_1803e11aa_0:;
L_1803e11aa_1:;
mw(UINT64_C(0x180a1e1a8),8,rd(s->r,0,8));
L_1803e11aa_2:;
/* 1803e11b1: lea rax, [rip + 0x9fb8] */
L_1803e11b1_0:;
L_1803e11b1_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb170)));
L_1803e11b1_2:;
/* 1803e11b8: mov qword ptr [rip + 0x63d031], rax */
L_1803e11b8_0:;
L_1803e11b8_1:;
mw(UINT64_C(0x180a1e1f0),8,rd(s->r,0,8));
L_1803e11b8_2:;
/* 1803e11bf: lea rax, [rip + 0x9fca] */
L_1803e11bf_0:;
L_1803e11bf_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb190)));
L_1803e11bf_2:;
/* 1803e11c6: mov qword ptr [rip + 0x63cfbb], rax */
L_1803e11c6_0:;
L_1803e11c6_1:;
mw(UINT64_C(0x180a1e188),8,rd(s->r,0,8));
L_1803e11c6_2:;
/* 1803e11cd: lea rax, [rip + 0x9fdc] */
L_1803e11cd_0:;
L_1803e11cd_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb1b0)));
L_1803e11cd_2:;
/* 1803e11d4: mov qword ptr [rip + 0x63d00d], rax */
L_1803e11d4_0:;
L_1803e11d4_1:;
mw(UINT64_C(0x180a1e1e8),8,rd(s->r,0,8));
L_1803e11d4_2:;
/* 1803e11db: lea rax, [rip + 0x9fde] */
L_1803e11db_0:;
L_1803e11db_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb1c0)));
L_1803e11db_2:;
/* 1803e11e2: mov qword ptr [rip + 0x63cfdf], rax */
L_1803e11e2_0:;
L_1803e11e2_1:;
mw(UINT64_C(0x180a1e1c8),8,rd(s->r,0,8));
L_1803e11e2_2:;
/* 1803e11e9: lea rax, [rip + 0x9fe0] */
L_1803e11e9_0:;
L_1803e11e9_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb1d0)));
L_1803e11e9_2:;
/* 1803e11f0: mov qword ptr [rip + 0x63cf49], rax */
L_1803e11f0_0:;
L_1803e11f0_1:;
mw(UINT64_C(0x180a1e140),8,rd(s->r,0,8));
L_1803e11f0_2:;
/* 1803e11f7: lea rax, [rip + 0x9fe2] */
L_1803e11f7_0:;
L_1803e11f7_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb1e0)));
L_1803e11f7_2:;
/* 1803e11fe: mov qword ptr [rip + 0x63cf9b], rax */
L_1803e11fe_0:;
L_1803e11fe_1:;
mw(UINT64_C(0x180a1e1a0),8,rd(s->r,0,8));
L_1803e11fe_2:;
/* 1803e1205: lea rax, [rip + 0x9fe4] */
L_1803e1205_0:;
L_1803e1205_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb1f0)));
L_1803e1205_2:;
/* 1803e120c: mov qword ptr [rip + 0x63cf1d], rax */
L_1803e120c_0:;
L_1803e120c_1:;
mw(UINT64_C(0x180a1e130),8,rd(s->r,0,8));
L_1803e120c_2:;
/* 1803e1213: lea rax, [rip + 0x9fe6] */
L_1803e1213_0:;
L_1803e1213_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb200)));
L_1803e1213_2:;
/* 1803e121a: mov qword ptr [rip + 0x63cfb7], rax */
L_1803e121a_0:;
L_1803e121a_1:;
mw(UINT64_C(0x180a1e1d8),8,rd(s->r,0,8));
L_1803e121a_2:;
/* 1803e1221: lea rax, [rip + 0x9fe8] */
L_1803e1221_0:;
L_1803e1221_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb210)));
L_1803e1221_2:;
/* 1803e1228: mov qword ptr [rip + 0x63cfb1], rax */
L_1803e1228_0:;
L_1803e1228_1:;
mw(UINT64_C(0x180a1e1e0),8,rd(s->r,0,8));
L_1803e1228_2:;
/* 1803e122f: lea rax, [rip + 0x9fea] */
L_1803e122f_0:;
L_1803e122f_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb220)));
L_1803e122f_2:;
/* 1803e1236: mov qword ptr [rip + 0x63cf93], rax */
L_1803e1236_0:;
L_1803e1236_1:;
mw(UINT64_C(0x180a1e1d0),8,rd(s->r,0,8));
L_1803e1236_2:;
/* 1803e123d: lea rax, [rip + 0x9fec] */
L_1803e123d_0:;
L_1803e123d_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb230)));
L_1803e123d_2:;
/* 1803e1244: mov qword ptr [rip + 0x63ceed], rax */
L_1803e1244_0:;
L_1803e1244_1:;
mw(UINT64_C(0x180a1e138),8,rd(s->r,0,8));
L_1803e1244_2:;
/* 1803e124b: lea rax, [rip + 0x9ffe] */
L_1803e124b_0:;
L_1803e124b_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb250)));
L_1803e124b_2:;
/* 1803e1252: mov qword ptr [rip + 0x63cf9f], rax */
L_1803e1252_0:;
L_1803e1252_1:;
mw(UINT64_C(0x180a1e1f8),8,rd(s->r,0,8));
L_1803e1252_2:;
/* 1803e1259: lea rax, [rip + 0xa000] */
L_1803e1259_0:;
L_1803e1259_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb260)));
L_1803e1259_2:;
return UINT64_C(0x1803e1260);
}
uint64_t b_1803e1260(CPU*s){
/* 1803e1260: mov qword ptr [rip + 0x63cec1], rax */
L_1803e1260_0:;
L_1803e1260_1:;
mw(UINT64_C(0x180a1e128),8,rd(s->r,0,8));
L_1803e1260_2:;
/* 1803e1267: lea rax, [rip + 0xa002] */
L_1803e1267_0:;
L_1803e1267_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb270)));
L_1803e1267_2:;
/* 1803e126e: mov qword ptr [rip + 0x63cefb], rax */
L_1803e126e_0:;
L_1803e126e_1:;
mw(UINT64_C(0x180a1e170),8,rd(s->r,0,8));
L_1803e126e_2:;
/* 1803e1275: lea rax, [rip + 0xa034] */
L_1803e1275_0:;
L_1803e1275_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb2b0)));
L_1803e1275_2:;
/* 1803e127c: mov qword ptr [rip + 0x63cf15], rax */
L_1803e127c_0:;
L_1803e127c_1:;
mw(UINT64_C(0x180a1e198),8,rd(s->r,0,8));
L_1803e127c_2:;
/* 1803e1283: lea rax, [rip + 0xa036] */
L_1803e1283_0:;
L_1803e1283_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb2c0)));
L_1803e1283_2:;
/* 1803e128a: mov qword ptr [rip + 0x63cf77], rax */
L_1803e128a_0:;
L_1803e128a_1:;
mw(UINT64_C(0x180a1e208),8,rd(s->r,0,8));
L_1803e128a_2:;
/* 1803e1291: lea rax, [rip + 0xa038] */
L_1803e1291_0:;
L_1803e1291_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb2d0)));
L_1803e1291_2:;
/* 1803e1298: mov qword ptr [rip + 0x63cef1], rax */
L_1803e1298_0:;
L_1803e1298_1:;
mw(UINT64_C(0x180a1e190),8,rd(s->r,0,8));
L_1803e1298_2:;
/* 1803e129f: lea rax, [rip + 0xa03a] */
L_1803e129f_0:;
L_1803e129f_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb2e0)));
L_1803e129f_2:;
/* 1803e12a6: mov qword ptr [rip + 0x63cebb], rax */
L_1803e12a6_0:;
L_1803e12a6_1:;
mw(UINT64_C(0x180a1e168),8,rd(s->r,0,8));
L_1803e12a6_2:;
/* 1803e12ad: lea rax, [rip + 0xa17c] */
L_1803e12ad_0:;
L_1803e12ad_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb430)));
L_1803e12ad_2:;
/* 1803e12b4: mov qword ptr [rip + 0x63cebd], rax */
L_1803e12b4_0:;
L_1803e12b4_1:;
mw(UINT64_C(0x180a1e178),8,rd(s->r,0,8));
L_1803e12b4_2:;
/* 1803e12bb: lea rax, [rip + 0xa2be] */
L_1803e12bb_0:;
L_1803e12bb_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb580)));
L_1803e12bb_2:;
/* 1803e12c2: mov qword ptr [rip + 0x63cf37], rax */
L_1803e12c2_0:;
L_1803e12c2_1:;
mw(UINT64_C(0x180a1e200),8,rd(s->r,0,8));
L_1803e12c2_2:;
/* 1803e12c9: lea rax, [rip + 0xa2c0] */
L_1803e12c9_0:;
L_1803e12c9_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb590)));
L_1803e12c9_2:;
/* 1803e12d0: mov qword ptr [rip + 0x63ce81], rax */
L_1803e12d0_0:;
L_1803e12d0_1:;
mw(UINT64_C(0x180a1e158),8,rd(s->r,0,8));
L_1803e12d0_2:;
/* 1803e12d7: lea rax, [rip + 0xa2d2] */
L_1803e12d7_0:;
L_1803e12d7_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb5b0)));
L_1803e12d7_2:;
/* 1803e12de: mov qword ptr [rip + 0x63ce3b], rax */
L_1803e12de_0:;
L_1803e12de_1:;
mw(UINT64_C(0x180a1e120),8,rd(s->r,0,8));
L_1803e12de_2:;
/* 1803e12e5: lea rax, [rip + 0xa2d4] */
L_1803e12e5_0:;
L_1803e12e5_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb5c0)));
L_1803e12e5_2:;
/* 1803e12ec: mov qword ptr [rip + 0x63cec5], rax */
L_1803e12ec_0:;
L_1803e12ec_1:;
mw(UINT64_C(0x180a1e1b8),8,rd(s->r,0,8));
L_1803e12ec_2:;
/* 1803e12f3: lea rax, [rip + 0xa316] */
L_1803e12f3_0:;
L_1803e12f3_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb610)));
L_1803e12f3_2:;
/* 1803e12fa: mov qword ptr [rip + 0x63ce4f], rax */
L_1803e12fa_0:;
L_1803e12fa_1:;
mw(UINT64_C(0x180a1e150),8,rd(s->r,0,8));
L_1803e12fa_2:;
/* 1803e1301: lea rax, [rip + 0xa3e8] */
L_1803e1301_0:;
L_1803e1301_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb6f0)));
L_1803e1301_2:;
/* 1803e1308: mov qword ptr [rip + 0x63ce71], rax */
L_1803e1308_0:;
L_1803e1308_1:;
mw(UINT64_C(0x180a1e180),8,rd(s->r,0,8));
L_1803e1308_2:;
/* 1803e130f: lea rax, [rip + 0xa48a] */
L_1803e130f_0:;
L_1803e130f_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eb7a0)));
L_1803e130f_2:;
/* 1803e1316: mov qword ptr [rip + 0x63ce2b], rax */
L_1803e1316_0:;
L_1803e1316_1:;
mw(UINT64_C(0x180a1e148),8,rd(s->r,0,8));
L_1803e1316_2:;
/* 1803e131d: lea rax, [rip + 0x9bac] */
L_1803e131d_0:;
L_1803e131d_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eaed0)));
L_1803e131d_2:;
/* 1803e1324: mov qword ptr [rip + 0x63ce95], rax */
L_1803e1324_0:;
L_1803e1324_1:;
mw(UINT64_C(0x180a1e1c0),8,rd(s->r,0,8));
L_1803e1324_2:;
/* 1803e132b: lea rax, [rip + 0x99de] */
L_1803e132b_0:;
L_1803e132b_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ead10)));
L_1803e132b_2:;
/* 1803e1332: mov qword ptr [rip + 0x63ce77], rax */
L_1803e1332_0:;
L_1803e1332_1:;
mw(UINT64_C(0x180a1e1b0),8,rd(s->r,0,8));
L_1803e1332_2:;
/* 1803e1339: add rsp, 0x18 */
L_1803e1339_0:;
L_1803e1339_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x18)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e1339_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x18)),8,0));
L_1803e1339_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x18))));
L_1803e1339_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1339_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1339_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1339_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803e1339_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803e1339_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803e1339_10:;
return UINT64_C(0x1803e133d);
}
uint64_t b_1803e133d(CPU*s){
/* 1803e133d: ret  */
L_1803e133d_0:;
L_1803e133d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e133d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e133d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e133d_4:;
return UINT64_C(0x1803e133e);
}
uint64_t b_1803e133e(CPU*s){
/* 1803e133e: test dl, 2 */
L_1803e133e_0:;
L_1803e133e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e133e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e133e_3:;
wr(s->u,3,1,(rd(s->r,16,1)&((U)UINT64_C(0x2))));
L_1803e133e_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803e133e_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803e133e_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_1803e133e_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_1803e133e_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_1803e133e_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_1803e133e_10:;
/* 1803e1341: je 0x1803e1508 */
L_1803e1341_0:;
L_1803e1341_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803e1508);}
L_1803e1341_2:;
return UINT64_C(0x1803e1347);
}
uint64_t b_1803e1347(CPU*s){
/* 1803e1347: lea rax, [rip + 0x90f2] */
L_1803e1347_0:;
L_1803e1347_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea440)));
L_1803e1347_2:;
/* 1803e134e: mov dword ptr [rip + 0x5827c8], 3 */
L_1803e134e_0:;
L_1803e134e_1:;
mw(UINT64_C(0x180963b20),4,((U)UINT64_C(0x3)));
L_1803e134e_2:;
/* 1803e1358: mov qword ptr [rip + 0x63ceb1], rax */
L_1803e1358_0:;
L_1803e1358_1:;
mw(UINT64_C(0x180a1e210),8,rd(s->r,0,8));
L_1803e1358_2:;
/* 1803e135f: lea rax, [rip + 0x90ea] */
L_1803e135f_0:;
L_1803e135f_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea450)));
L_1803e135f_2:;
/* 1803e1366: mov qword ptr [rip + 0x63cdf3], rax */
L_1803e1366_0:;
L_1803e1366_1:;
mw(UINT64_C(0x180a1e160),8,rd(s->r,0,8));
L_1803e1366_2:;
/* 1803e136d: lea rax, [rip + 0x910c] */
L_1803e136d_0:;
L_1803e136d_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea480)));
L_1803e136d_2:;
/* 1803e1374: mov qword ptr [rip + 0x63ce2d], rax */
L_1803e1374_0:;
L_1803e1374_1:;
mw(UINT64_C(0x180a1e1a8),8,rd(s->r,0,8));
L_1803e1374_2:;
/* 1803e137b: lea rax, [rip + 0x910e] */
L_1803e137b_0:;
L_1803e137b_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea490)));
L_1803e137b_2:;
/* 1803e1382: mov qword ptr [rip + 0x63ce67], rax */
L_1803e1382_0:;
L_1803e1382_1:;
mw(UINT64_C(0x180a1e1f0),8,rd(s->r,0,8));
L_1803e1382_2:;
/* 1803e1389: lea rax, [rip + 0x9120] */
L_1803e1389_0:;
L_1803e1389_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea4b0)));
L_1803e1389_2:;
/* 1803e1390: mov qword ptr [rip + 0x63cdf1], rax */
L_1803e1390_0:;
L_1803e1390_1:;
mw(UINT64_C(0x180a1e188),8,rd(s->r,0,8));
L_1803e1390_2:;
/* 1803e1397: lea rax, [rip + 0x9132] */
L_1803e1397_0:;
L_1803e1397_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea4d0)));
L_1803e1397_2:;
/* 1803e139e: mov qword ptr [rip + 0x63ce43], rax */
L_1803e139e_0:;
L_1803e139e_1:;
mw(UINT64_C(0x180a1e1e8),8,rd(s->r,0,8));
L_1803e139e_2:;
/* 1803e13a5: lea rax, [rip + 0x9134] */
L_1803e13a5_0:;
L_1803e13a5_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea4e0)));
L_1803e13a5_2:;
/* 1803e13ac: mov qword ptr [rip + 0x63ce15], rax */
L_1803e13ac_0:;
L_1803e13ac_1:;
mw(UINT64_C(0x180a1e1c8),8,rd(s->r,0,8));
L_1803e13ac_2:;
/* 1803e13b3: lea rax, [rip + 0x9136] */
L_1803e13b3_0:;
L_1803e13b3_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea4f0)));
L_1803e13b3_2:;
/* 1803e13ba: mov qword ptr [rip + 0x63cd7f], rax */
L_1803e13ba_0:;
L_1803e13ba_1:;
mw(UINT64_C(0x180a1e140),8,rd(s->r,0,8));
L_1803e13ba_2:;
/* 1803e13c1: lea rax, [rip + 0x9138] */
L_1803e13c1_0:;
L_1803e13c1_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea500)));
L_1803e13c1_2:;
/* 1803e13c8: mov qword ptr [rip + 0x63cdd1], rax */
L_1803e13c8_0:;
L_1803e13c8_1:;
mw(UINT64_C(0x180a1e1a0),8,rd(s->r,0,8));
L_1803e13c8_2:;
/* 1803e13cf: lea rax, [rip + 0x913a] */
L_1803e13cf_0:;
L_1803e13cf_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea510)));
L_1803e13cf_2:;
/* 1803e13d6: mov qword ptr [rip + 0x63cd53], rax */
L_1803e13d6_0:;
L_1803e13d6_1:;
mw(UINT64_C(0x180a1e130),8,rd(s->r,0,8));
L_1803e13d6_2:;
/* 1803e13dd: lea rax, [rip + 0x913c] */
L_1803e13dd_0:;
L_1803e13dd_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea520)));
L_1803e13dd_2:;
/* 1803e13e4: mov qword ptr [rip + 0x63cded], rax */
L_1803e13e4_0:;
L_1803e13e4_1:;
mw(UINT64_C(0x180a1e1d8),8,rd(s->r,0,8));
L_1803e13e4_2:;
/* 1803e13eb: lea rax, [rip + 0x913e] */
L_1803e13eb_0:;
L_1803e13eb_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea530)));
L_1803e13eb_2:;
/* 1803e13f2: mov qword ptr [rip + 0x63cde7], rax */
L_1803e13f2_0:;
L_1803e13f2_1:;
mw(UINT64_C(0x180a1e1e0),8,rd(s->r,0,8));
L_1803e13f2_2:;
/* 1803e13f9: lea rax, [rip + 0x9140] */
L_1803e13f9_0:;
L_1803e13f9_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea540)));
L_1803e13f9_2:;
/* 1803e1400: mov qword ptr [rip + 0x63cdc9], rax */
L_1803e1400_0:;
L_1803e1400_1:;
mw(UINT64_C(0x180a1e1d0),8,rd(s->r,0,8));
L_1803e1400_2:;
/* 1803e1407: lea rax, [rip + 0x9142] */
L_1803e1407_0:;
L_1803e1407_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea550)));
L_1803e1407_2:;
/* 1803e140e: mov qword ptr [rip + 0x63cd23], rax */
L_1803e140e_0:;
L_1803e140e_1:;
mw(UINT64_C(0x180a1e138),8,rd(s->r,0,8));
L_1803e140e_2:;
/* 1803e1415: lea rax, [rip + 0x9154] */
L_1803e1415_0:;
L_1803e1415_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea570)));
L_1803e1415_2:;
/* 1803e141c: mov qword ptr [rip + 0x63cdd5], rax */
L_1803e141c_0:;
L_1803e141c_1:;
mw(UINT64_C(0x180a1e1f8),8,rd(s->r,0,8));
L_1803e141c_2:;
/* 1803e1423: lea rax, [rip + 0x9156] */
L_1803e1423_0:;
L_1803e1423_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea580)));
L_1803e1423_2:;
return UINT64_C(0x1803e142a);
}
uint64_t b_1803e142a(CPU*s){
/* 1803e142a: mov qword ptr [rip + 0x63ccf7], rax */
L_1803e142a_0:;
L_1803e142a_1:;
mw(UINT64_C(0x180a1e128),8,rd(s->r,0,8));
L_1803e142a_2:;
/* 1803e1431: lea rax, [rip + 0x9158] */
L_1803e1431_0:;
L_1803e1431_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea590)));
L_1803e1431_2:;
/* 1803e1438: mov qword ptr [rip + 0x63cd31], rax */
L_1803e1438_0:;
L_1803e1438_1:;
mw(UINT64_C(0x180a1e170),8,rd(s->r,0,8));
L_1803e1438_2:;
/* 1803e143f: lea rax, [rip + 0x918a] */
L_1803e143f_0:;
L_1803e143f_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea5d0)));
L_1803e143f_2:;
/* 1803e1446: mov qword ptr [rip + 0x63cd4b], rax */
L_1803e1446_0:;
L_1803e1446_1:;
mw(UINT64_C(0x180a1e198),8,rd(s->r,0,8));
L_1803e1446_2:;
/* 1803e144d: lea rax, [rip + 0x918c] */
L_1803e144d_0:;
L_1803e144d_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea5e0)));
L_1803e144d_2:;
/* 1803e1454: mov qword ptr [rip + 0x63cdad], rax */
L_1803e1454_0:;
L_1803e1454_1:;
mw(UINT64_C(0x180a1e208),8,rd(s->r,0,8));
L_1803e1454_2:;
/* 1803e145b: lea rax, [rip + 0x918e] */
L_1803e145b_0:;
L_1803e145b_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea5f0)));
L_1803e145b_2:;
/* 1803e1462: mov qword ptr [rip + 0x63cd27], rax */
L_1803e1462_0:;
L_1803e1462_1:;
mw(UINT64_C(0x180a1e190),8,rd(s->r,0,8));
L_1803e1462_2:;
/* 1803e1469: lea rax, [rip + 0x9190] */
L_1803e1469_0:;
L_1803e1469_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea600)));
L_1803e1469_2:;
/* 1803e1470: mov qword ptr [rip + 0x63ccf1], rax */
L_1803e1470_0:;
L_1803e1470_1:;
mw(UINT64_C(0x180a1e168),8,rd(s->r,0,8));
L_1803e1470_2:;
/* 1803e1477: lea rax, [rip + 0x92d2] */
L_1803e1477_0:;
L_1803e1477_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea750)));
L_1803e1477_2:;
/* 1803e147e: mov qword ptr [rip + 0x63ccf3], rax */
L_1803e147e_0:;
L_1803e147e_1:;
mw(UINT64_C(0x180a1e178),8,rd(s->r,0,8));
L_1803e147e_2:;
/* 1803e1485: lea rax, [rip + 0x9414] */
L_1803e1485_0:;
L_1803e1485_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea8a0)));
L_1803e1485_2:;
/* 1803e148c: mov qword ptr [rip + 0x63cd6d], rax */
L_1803e148c_0:;
L_1803e148c_1:;
mw(UINT64_C(0x180a1e200),8,rd(s->r,0,8));
L_1803e148c_2:;
/* 1803e1493: lea rax, [rip + 0x9416] */
L_1803e1493_0:;
L_1803e1493_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea8b0)));
L_1803e1493_2:;
/* 1803e149a: mov qword ptr [rip + 0x63ccb7], rax */
L_1803e149a_0:;
L_1803e149a_1:;
mw(UINT64_C(0x180a1e158),8,rd(s->r,0,8));
L_1803e149a_2:;
/* 1803e14a1: lea rax, [rip + 0x9428] */
L_1803e14a1_0:;
L_1803e14a1_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea8d0)));
L_1803e14a1_2:;
/* 1803e14a8: mov qword ptr [rip + 0x63cc71], rax */
L_1803e14a8_0:;
L_1803e14a8_1:;
mw(UINT64_C(0x180a1e120),8,rd(s->r,0,8));
L_1803e14a8_2:;
/* 1803e14af: lea rax, [rip + 0x942a] */
L_1803e14af_0:;
L_1803e14af_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea8e0)));
L_1803e14af_2:;
/* 1803e14b6: mov qword ptr [rip + 0x63ccfb], rax */
L_1803e14b6_0:;
L_1803e14b6_1:;
mw(UINT64_C(0x180a1e1b8),8,rd(s->r,0,8));
L_1803e14b6_2:;
/* 1803e14bd: lea rax, [rip + 0x946c] */
L_1803e14bd_0:;
L_1803e14bd_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea930)));
L_1803e14bd_2:;
/* 1803e14c4: mov qword ptr [rip + 0x63cc85], rax */
L_1803e14c4_0:;
L_1803e14c4_1:;
mw(UINT64_C(0x180a1e150),8,rd(s->r,0,8));
L_1803e14c4_2:;
/* 1803e14cb: lea rax, [rip + 0x953e] */
L_1803e14cb_0:;
L_1803e14cb_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eaa10)));
L_1803e14cb_2:;
/* 1803e14d2: mov qword ptr [rip + 0x63cca7], rax */
L_1803e14d2_0:;
L_1803e14d2_1:;
mw(UINT64_C(0x180a1e180),8,rd(s->r,0,8));
L_1803e14d2_2:;
/* 1803e14d9: lea rax, [rip + 0x95e0] */
L_1803e14d9_0:;
L_1803e14d9_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803eaac0)));
L_1803e14d9_2:;
/* 1803e14e0: mov qword ptr [rip + 0x63cc61], rax */
L_1803e14e0_0:;
L_1803e14e0_1:;
mw(UINT64_C(0x180a1e148),8,rd(s->r,0,8));
L_1803e14e0_2:;
/* 1803e14e7: lea rax, [rip + 0x8d02] */
L_1803e14e7_0:;
L_1803e14e7_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea1f0)));
L_1803e14e7_2:;
/* 1803e14ee: mov qword ptr [rip + 0x63cccb], rax */
L_1803e14ee_0:;
L_1803e14ee_1:;
mw(UINT64_C(0x180a1e1c0),8,rd(s->r,0,8));
L_1803e14ee_2:;
/* 1803e14f5: lea rax, [rip + 0x8b34] */
L_1803e14f5_0:;
L_1803e14f5_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803ea030)));
L_1803e14f5_2:;
/* 1803e14fc: mov qword ptr [rip + 0x63ccad], rax */
L_1803e14fc_0:;
L_1803e14fc_1:;
mw(UINT64_C(0x180a1e1b0),8,rd(s->r,0,8));
L_1803e14fc_2:;
/* 1803e1503: add rsp, 0x18 */
L_1803e1503_0:;
L_1803e1503_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x18)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e1503_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x18)),8,0));
L_1803e1503_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x18))));
L_1803e1503_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1503_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1503_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1503_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803e1503_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803e1503_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803e1503_10:;
return UINT64_C(0x1803e1507);
}
uint64_t b_1803e1507(CPU*s){
/* 1803e1507: ret  */
L_1803e1507_0:;
L_1803e1507_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1507_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1507_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e1507_4:;
return UINT64_C(0x1803e1508);
}
uint64_t b_1803e1508(CPU*s){
/* 1803e1508: test dl, 1 */
L_1803e1508_0:;
L_1803e1508_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1508_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1508_3:;
wr(s->u,3,1,(rd(s->r,16,1)&((U)UINT64_C(0x1))));
L_1803e1508_4:;
wr(s->r,519,1,(sx(rd(s->u,3,1),1)<sx(((U)UINT64_C(0x0)),1)));
L_1803e1508_5:;
wr(s->r,518,1,(rd(s->u,3,1)==((U)UINT64_C(0x0))));
L_1803e1508_6:;
wr(s->u,0,1,(rd(s->u,3,1)&((U)UINT64_C(0xff))));
L_1803e1508_7:;
wr(s->u,1,1,pop(rd(s->u,0,1),1));
L_1803e1508_8:;
wr(s->u,2,1,(rd(s->u,1,1)&((U)UINT64_C(0x1))));
L_1803e1508_9:;
wr(s->r,514,1,(rd(s->u,2,1)==((U)UINT64_C(0x0))));
L_1803e1508_10:;
/* 1803e150b: je 0x1803e16d2 */
L_1803e150b_0:;
L_1803e150b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803e16d2);}
L_1803e150b_2:;
return UINT64_C(0x1803e1511);
}
uint64_t b_1803e1511(CPU*s){
/* 1803e1511: lea rax, [rip + 0x8248] */
L_1803e1511_0:;
L_1803e1511_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9760)));
L_1803e1511_2:;
/* 1803e1518: mov dword ptr [rip + 0x5825fe], 2 */
L_1803e1518_0:;
L_1803e1518_1:;
mw(UINT64_C(0x180963b20),4,((U)UINT64_C(0x2)));
L_1803e1518_2:;
/* 1803e1522: mov qword ptr [rip + 0x63cce7], rax */
L_1803e1522_0:;
L_1803e1522_1:;
mw(UINT64_C(0x180a1e210),8,rd(s->r,0,8));
L_1803e1522_2:;
/* 1803e1529: lea rax, [rip + 0x8240] */
L_1803e1529_0:;
L_1803e1529_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9770)));
L_1803e1529_2:;
/* 1803e1530: mov qword ptr [rip + 0x63cc29], rax */
L_1803e1530_0:;
L_1803e1530_1:;
mw(UINT64_C(0x180a1e160),8,rd(s->r,0,8));
L_1803e1530_2:;
/* 1803e1537: lea rax, [rip + 0x8262] */
L_1803e1537_0:;
L_1803e1537_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e97a0)));
L_1803e1537_2:;
/* 1803e153e: mov qword ptr [rip + 0x63cc63], rax */
L_1803e153e_0:;
L_1803e153e_1:;
mw(UINT64_C(0x180a1e1a8),8,rd(s->r,0,8));
L_1803e153e_2:;
/* 1803e1545: lea rax, [rip + 0x8264] */
L_1803e1545_0:;
L_1803e1545_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e97b0)));
L_1803e1545_2:;
/* 1803e154c: mov qword ptr [rip + 0x63cc9d], rax */
L_1803e154c_0:;
L_1803e154c_1:;
mw(UINT64_C(0x180a1e1f0),8,rd(s->r,0,8));
L_1803e154c_2:;
/* 1803e1553: lea rax, [rip + 0x8276] */
L_1803e1553_0:;
L_1803e1553_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e97d0)));
L_1803e1553_2:;
/* 1803e155a: mov qword ptr [rip + 0x63cc27], rax */
L_1803e155a_0:;
L_1803e155a_1:;
mw(UINT64_C(0x180a1e188),8,rd(s->r,0,8));
L_1803e155a_2:;
/* 1803e1561: lea rax, [rip + 0x8288] */
L_1803e1561_0:;
L_1803e1561_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e97f0)));
L_1803e1561_2:;
/* 1803e1568: mov qword ptr [rip + 0x63cc79], rax */
L_1803e1568_0:;
L_1803e1568_1:;
mw(UINT64_C(0x180a1e1e8),8,rd(s->r,0,8));
L_1803e1568_2:;
/* 1803e156f: lea rax, [rip + 0x828a] */
L_1803e156f_0:;
L_1803e156f_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9800)));
L_1803e156f_2:;
/* 1803e1576: mov qword ptr [rip + 0x63cc4b], rax */
L_1803e1576_0:;
L_1803e1576_1:;
mw(UINT64_C(0x180a1e1c8),8,rd(s->r,0,8));
L_1803e1576_2:;
/* 1803e157d: lea rax, [rip + 0x828c] */
L_1803e157d_0:;
L_1803e157d_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9810)));
L_1803e157d_2:;
/* 1803e1584: mov qword ptr [rip + 0x63cbb5], rax */
L_1803e1584_0:;
L_1803e1584_1:;
mw(UINT64_C(0x180a1e140),8,rd(s->r,0,8));
L_1803e1584_2:;
/* 1803e158b: lea rax, [rip + 0x828e] */
L_1803e158b_0:;
L_1803e158b_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9820)));
L_1803e158b_2:;
/* 1803e1592: mov qword ptr [rip + 0x63cc07], rax */
L_1803e1592_0:;
L_1803e1592_1:;
mw(UINT64_C(0x180a1e1a0),8,rd(s->r,0,8));
L_1803e1592_2:;
/* 1803e1599: lea rax, [rip + 0x8290] */
L_1803e1599_0:;
L_1803e1599_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9830)));
L_1803e1599_2:;
/* 1803e15a0: mov qword ptr [rip + 0x63cb89], rax */
L_1803e15a0_0:;
L_1803e15a0_1:;
mw(UINT64_C(0x180a1e130),8,rd(s->r,0,8));
L_1803e15a0_2:;
/* 1803e15a7: lea rax, [rip + 0x8292] */
L_1803e15a7_0:;
L_1803e15a7_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9840)));
L_1803e15a7_2:;
/* 1803e15ae: mov qword ptr [rip + 0x63cc23], rax */
L_1803e15ae_0:;
L_1803e15ae_1:;
mw(UINT64_C(0x180a1e1d8),8,rd(s->r,0,8));
L_1803e15ae_2:;
/* 1803e15b5: lea rax, [rip + 0x8294] */
L_1803e15b5_0:;
L_1803e15b5_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9850)));
L_1803e15b5_2:;
/* 1803e15bc: mov qword ptr [rip + 0x63cc1d], rax */
L_1803e15bc_0:;
L_1803e15bc_1:;
mw(UINT64_C(0x180a1e1e0),8,rd(s->r,0,8));
L_1803e15bc_2:;
/* 1803e15c3: lea rax, [rip + 0x8296] */
L_1803e15c3_0:;
L_1803e15c3_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9860)));
L_1803e15c3_2:;
/* 1803e15ca: mov qword ptr [rip + 0x63cbff], rax */
L_1803e15ca_0:;
L_1803e15ca_1:;
mw(UINT64_C(0x180a1e1d0),8,rd(s->r,0,8));
L_1803e15ca_2:;
/* 1803e15d1: lea rax, [rip + 0x8298] */
L_1803e15d1_0:;
L_1803e15d1_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9870)));
L_1803e15d1_2:;
/* 1803e15d8: mov qword ptr [rip + 0x63cb59], rax */
L_1803e15d8_0:;
L_1803e15d8_1:;
mw(UINT64_C(0x180a1e138),8,rd(s->r,0,8));
L_1803e15d8_2:;
/* 1803e15df: lea rax, [rip + 0x82aa] */
L_1803e15df_0:;
L_1803e15df_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9890)));
L_1803e15df_2:;
/* 1803e15e6: mov qword ptr [rip + 0x63cc0b], rax */
L_1803e15e6_0:;
L_1803e15e6_1:;
mw(UINT64_C(0x180a1e1f8),8,rd(s->r,0,8));
L_1803e15e6_2:;
/* 1803e15ed: lea rax, [rip + 0x82ac] */
L_1803e15ed_0:;
L_1803e15ed_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e98a0)));
L_1803e15ed_2:;
return UINT64_C(0x1803e15f4);
}
uint64_t b_1803e15f4(CPU*s){
/* 1803e15f4: mov qword ptr [rip + 0x63cb2d], rax */
L_1803e15f4_0:;
L_1803e15f4_1:;
mw(UINT64_C(0x180a1e128),8,rd(s->r,0,8));
L_1803e15f4_2:;
/* 1803e15fb: lea rax, [rip + 0x82ae] */
L_1803e15fb_0:;
L_1803e15fb_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e98b0)));
L_1803e15fb_2:;
/* 1803e1602: mov qword ptr [rip + 0x63cb67], rax */
L_1803e1602_0:;
L_1803e1602_1:;
mw(UINT64_C(0x180a1e170),8,rd(s->r,0,8));
L_1803e1602_2:;
/* 1803e1609: lea rax, [rip + 0x82e0] */
L_1803e1609_0:;
L_1803e1609_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e98f0)));
L_1803e1609_2:;
/* 1803e1610: mov qword ptr [rip + 0x63cb81], rax */
L_1803e1610_0:;
L_1803e1610_1:;
mw(UINT64_C(0x180a1e198),8,rd(s->r,0,8));
L_1803e1610_2:;
/* 1803e1617: lea rax, [rip + 0x82e2] */
L_1803e1617_0:;
L_1803e1617_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9900)));
L_1803e1617_2:;
/* 1803e161e: mov qword ptr [rip + 0x63cbe3], rax */
L_1803e161e_0:;
L_1803e161e_1:;
mw(UINT64_C(0x180a1e208),8,rd(s->r,0,8));
L_1803e161e_2:;
/* 1803e1625: lea rax, [rip + 0x82e4] */
L_1803e1625_0:;
L_1803e1625_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9910)));
L_1803e1625_2:;
/* 1803e162c: mov qword ptr [rip + 0x63cb5d], rax */
L_1803e162c_0:;
L_1803e162c_1:;
mw(UINT64_C(0x180a1e190),8,rd(s->r,0,8));
L_1803e162c_2:;
/* 1803e1633: lea rax, [rip + 0x82e6] */
L_1803e1633_0:;
L_1803e1633_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9920)));
L_1803e1633_2:;
/* 1803e163a: mov qword ptr [rip + 0x63cb27], rax */
L_1803e163a_0:;
L_1803e163a_1:;
mw(UINT64_C(0x180a1e168),8,rd(s->r,0,8));
L_1803e163a_2:;
/* 1803e1641: lea rax, [rip + 0x8428] */
L_1803e1641_0:;
L_1803e1641_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9a70)));
L_1803e1641_2:;
/* 1803e1648: mov qword ptr [rip + 0x63cb29], rax */
L_1803e1648_0:;
L_1803e1648_1:;
mw(UINT64_C(0x180a1e178),8,rd(s->r,0,8));
L_1803e1648_2:;
/* 1803e164f: lea rax, [rip + 0x856a] */
L_1803e164f_0:;
L_1803e164f_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9bc0)));
L_1803e164f_2:;
/* 1803e1656: mov qword ptr [rip + 0x63cba3], rax */
L_1803e1656_0:;
L_1803e1656_1:;
mw(UINT64_C(0x180a1e200),8,rd(s->r,0,8));
L_1803e1656_2:;
/* 1803e165d: lea rax, [rip + 0x856c] */
L_1803e165d_0:;
L_1803e165d_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9bd0)));
L_1803e165d_2:;
/* 1803e1664: mov qword ptr [rip + 0x63caed], rax */
L_1803e1664_0:;
L_1803e1664_1:;
mw(UINT64_C(0x180a1e158),8,rd(s->r,0,8));
L_1803e1664_2:;
/* 1803e166b: lea rax, [rip + 0x857e] */
L_1803e166b_0:;
L_1803e166b_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9bf0)));
L_1803e166b_2:;
/* 1803e1672: mov qword ptr [rip + 0x63caa7], rax */
L_1803e1672_0:;
L_1803e1672_1:;
mw(UINT64_C(0x180a1e120),8,rd(s->r,0,8));
L_1803e1672_2:;
/* 1803e1679: lea rax, [rip + 0x8580] */
L_1803e1679_0:;
L_1803e1679_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9c00)));
L_1803e1679_2:;
/* 1803e1680: mov qword ptr [rip + 0x63cb31], rax */
L_1803e1680_0:;
L_1803e1680_1:;
mw(UINT64_C(0x180a1e1b8),8,rd(s->r,0,8));
L_1803e1680_2:;
/* 1803e1687: lea rax, [rip + 0x85c2] */
L_1803e1687_0:;
L_1803e1687_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9c50)));
L_1803e1687_2:;
/* 1803e168e: mov qword ptr [rip + 0x63cabb], rax */
L_1803e168e_0:;
L_1803e168e_1:;
mw(UINT64_C(0x180a1e150),8,rd(s->r,0,8));
L_1803e168e_2:;
/* 1803e1695: lea rax, [rip + 0x8694] */
L_1803e1695_0:;
L_1803e1695_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9d30)));
L_1803e1695_2:;
/* 1803e169c: mov qword ptr [rip + 0x63cadd], rax */
L_1803e169c_0:;
L_1803e169c_1:;
mw(UINT64_C(0x180a1e180),8,rd(s->r,0,8));
L_1803e169c_2:;
/* 1803e16a3: lea rax, [rip + 0x8736] */
L_1803e16a3_0:;
L_1803e16a3_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9de0)));
L_1803e16a3_2:;
/* 1803e16aa: mov qword ptr [rip + 0x63ca97], rax */
L_1803e16aa_0:;
L_1803e16aa_1:;
mw(UINT64_C(0x180a1e148),8,rd(s->r,0,8));
L_1803e16aa_2:;
/* 1803e16b1: lea rax, [rip + 0x7e58] */
L_1803e16b1_0:;
L_1803e16b1_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9510)));
L_1803e16b1_2:;
/* 1803e16b8: mov qword ptr [rip + 0x63cb01], rax */
L_1803e16b8_0:;
L_1803e16b8_1:;
mw(UINT64_C(0x180a1e1c0),8,rd(s->r,0,8));
L_1803e16b8_2:;
/* 1803e16bf: lea rax, [rip + 0x7c8a] */
L_1803e16bf_0:;
L_1803e16bf_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9350)));
L_1803e16bf_2:;
/* 1803e16c6: mov qword ptr [rip + 0x63cae3], rax */
L_1803e16c6_0:;
L_1803e16c6_1:;
mw(UINT64_C(0x180a1e1b0),8,rd(s->r,0,8));
L_1803e16c6_2:;
/* 1803e16cd: add rsp, 0x18 */
L_1803e16cd_0:;
L_1803e16cd_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x18)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e16cd_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x18)),8,0));
L_1803e16cd_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x18))));
L_1803e16cd_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e16cd_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e16cd_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e16cd_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803e16cd_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803e16cd_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803e16cd_10:;
return UINT64_C(0x1803e16d1);
}
uint64_t b_1803e16d1(CPU*s){
/* 1803e16d1: ret  */
L_1803e16d1_0:;
L_1803e16d1_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e16d1_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e16d1_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e16d1_4:;
return UINT64_C(0x1803e16d2);
}
uint64_t b_1803e16d2(CPU*s){
/* 1803e16d2: lea rax, [rip + 0x7437] */
L_1803e16d2_0:;
L_1803e16d2_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8b10)));
L_1803e16d2_2:;
/* 1803e16d9: mov dword ptr [rip + 0x58243d], 1 */
L_1803e16d9_0:;
L_1803e16d9_1:;
mw(UINT64_C(0x180963b20),4,((U)UINT64_C(0x1)));
L_1803e16d9_2:;
/* 1803e16e3: mov qword ptr [rip + 0x63cb26], rax */
L_1803e16e3_0:;
L_1803e16e3_1:;
mw(UINT64_C(0x180a1e210),8,rd(s->r,0,8));
L_1803e16e3_2:;
/* 1803e16ea: lea rax, [rip + 0x742f] */
L_1803e16ea_0:;
L_1803e16ea_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8b20)));
L_1803e16ea_2:;
/* 1803e16f1: mov qword ptr [rip + 0x63ca68], rax */
L_1803e16f1_0:;
L_1803e16f1_1:;
mw(UINT64_C(0x180a1e160),8,rd(s->r,0,8));
L_1803e16f1_2:;
/* 1803e16f8: lea rax, [rip + 0x7451] */
L_1803e16f8_0:;
L_1803e16f8_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8b50)));
L_1803e16f8_2:;
/* 1803e16ff: mov qword ptr [rip + 0x63caa2], rax */
L_1803e16ff_0:;
L_1803e16ff_1:;
mw(UINT64_C(0x180a1e1a8),8,rd(s->r,0,8));
L_1803e16ff_2:;
/* 1803e1706: lea rax, [rip + 0x7453] */
L_1803e1706_0:;
L_1803e1706_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8b60)));
L_1803e1706_2:;
/* 1803e170d: mov qword ptr [rip + 0x63cadc], rax */
L_1803e170d_0:;
L_1803e170d_1:;
mw(UINT64_C(0x180a1e1f0),8,rd(s->r,0,8));
L_1803e170d_2:;
/* 1803e1714: lea rax, [rip + 0x7465] */
L_1803e1714_0:;
L_1803e1714_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8b80)));
L_1803e1714_2:;
/* 1803e171b: mov qword ptr [rip + 0x63ca66], rax */
L_1803e171b_0:;
L_1803e171b_1:;
mw(UINT64_C(0x180a1e188),8,rd(s->r,0,8));
L_1803e171b_2:;
/* 1803e1722: lea rax, [rip + 0x7477] */
L_1803e1722_0:;
L_1803e1722_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8ba0)));
L_1803e1722_2:;
/* 1803e1729: mov qword ptr [rip + 0x63cab8], rax */
L_1803e1729_0:;
L_1803e1729_1:;
mw(UINT64_C(0x180a1e1e8),8,rd(s->r,0,8));
L_1803e1729_2:;
/* 1803e1730: lea rax, [rip + 0x7479] */
L_1803e1730_0:;
L_1803e1730_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8bb0)));
L_1803e1730_2:;
/* 1803e1737: mov qword ptr [rip + 0x63ca8a], rax */
L_1803e1737_0:;
L_1803e1737_1:;
mw(UINT64_C(0x180a1e1c8),8,rd(s->r,0,8));
L_1803e1737_2:;
/* 1803e173e: lea rax, [rip + 0x747b] */
L_1803e173e_0:;
L_1803e173e_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8bc0)));
L_1803e173e_2:;
/* 1803e1745: mov qword ptr [rip + 0x63c9f4], rax */
L_1803e1745_0:;
L_1803e1745_1:;
mw(UINT64_C(0x180a1e140),8,rd(s->r,0,8));
L_1803e1745_2:;
/* 1803e174c: lea rax, [rip + 0x747d] */
L_1803e174c_0:;
L_1803e174c_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8bd0)));
L_1803e174c_2:;
/* 1803e1753: mov qword ptr [rip + 0x63ca46], rax */
L_1803e1753_0:;
L_1803e1753_1:;
mw(UINT64_C(0x180a1e1a0),8,rd(s->r,0,8));
L_1803e1753_2:;
/* 1803e175a: lea rax, [rip + 0x747f] */
L_1803e175a_0:;
L_1803e175a_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8be0)));
L_1803e175a_2:;
/* 1803e1761: mov qword ptr [rip + 0x63c9c8], rax */
L_1803e1761_0:;
L_1803e1761_1:;
mw(UINT64_C(0x180a1e130),8,rd(s->r,0,8));
L_1803e1761_2:;
/* 1803e1768: lea rax, [rip + 0x7481] */
L_1803e1768_0:;
L_1803e1768_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8bf0)));
L_1803e1768_2:;
/* 1803e176f: mov qword ptr [rip + 0x63ca62], rax */
L_1803e176f_0:;
L_1803e176f_1:;
mw(UINT64_C(0x180a1e1d8),8,rd(s->r,0,8));
L_1803e176f_2:;
/* 1803e1776: lea rax, [rip + 0x7483] */
L_1803e1776_0:;
L_1803e1776_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8c00)));
L_1803e1776_2:;
/* 1803e177d: mov qword ptr [rip + 0x63ca5c], rax */
L_1803e177d_0:;
L_1803e177d_1:;
mw(UINT64_C(0x180a1e1e0),8,rd(s->r,0,8));
L_1803e177d_2:;
/* 1803e1784: lea rax, [rip + 0x7485] */
L_1803e1784_0:;
L_1803e1784_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8c10)));
L_1803e1784_2:;
/* 1803e178b: mov qword ptr [rip + 0x63ca3e], rax */
L_1803e178b_0:;
L_1803e178b_1:;
mw(UINT64_C(0x180a1e1d0),8,rd(s->r,0,8));
L_1803e178b_2:;
/* 1803e1792: lea rax, [rip + 0x7487] */
L_1803e1792_0:;
L_1803e1792_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8c20)));
L_1803e1792_2:;
/* 1803e1799: mov qword ptr [rip + 0x63c998], rax */
L_1803e1799_0:;
L_1803e1799_1:;
mw(UINT64_C(0x180a1e138),8,rd(s->r,0,8));
L_1803e1799_2:;
/* 1803e17a0: lea rax, [rip + 0x7499] */
L_1803e17a0_0:;
L_1803e17a0_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8c40)));
L_1803e17a0_2:;
/* 1803e17a7: mov qword ptr [rip + 0x63ca4a], rax */
L_1803e17a7_0:;
L_1803e17a7_1:;
mw(UINT64_C(0x180a1e1f8),8,rd(s->r,0,8));
L_1803e17a7_2:;
/* 1803e17ae: lea rax, [rip + 0x749b] */
L_1803e17ae_0:;
L_1803e17ae_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8c50)));
L_1803e17ae_2:;
return UINT64_C(0x1803e17b5);
}
uint64_t b_1803e17b5(CPU*s){
/* 1803e17b5: mov qword ptr [rip + 0x63c96c], rax */
L_1803e17b5_0:;
L_1803e17b5_1:;
mw(UINT64_C(0x180a1e128),8,rd(s->r,0,8));
L_1803e17b5_2:;
/* 1803e17bc: lea rax, [rip + 0x749d] */
L_1803e17bc_0:;
L_1803e17bc_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8c60)));
L_1803e17bc_2:;
/* 1803e17c3: mov qword ptr [rip + 0x63c9a6], rax */
L_1803e17c3_0:;
L_1803e17c3_1:;
mw(UINT64_C(0x180a1e170),8,rd(s->r,0,8));
L_1803e17c3_2:;
/* 1803e17ca: lea rax, [rip + 0x74cf] */
L_1803e17ca_0:;
L_1803e17ca_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8ca0)));
L_1803e17ca_2:;
/* 1803e17d1: mov qword ptr [rip + 0x63c9c0], rax */
L_1803e17d1_0:;
L_1803e17d1_1:;
mw(UINT64_C(0x180a1e198),8,rd(s->r,0,8));
L_1803e17d1_2:;
/* 1803e17d8: lea rax, [rip + 0x74d1] */
L_1803e17d8_0:;
L_1803e17d8_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8cb0)));
L_1803e17d8_2:;
/* 1803e17df: mov qword ptr [rip + 0x63ca22], rax */
L_1803e17df_0:;
L_1803e17df_1:;
mw(UINT64_C(0x180a1e208),8,rd(s->r,0,8));
L_1803e17df_2:;
/* 1803e17e6: lea rax, [rip + 0x74d3] */
L_1803e17e6_0:;
L_1803e17e6_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8cc0)));
L_1803e17e6_2:;
/* 1803e17ed: mov qword ptr [rip + 0x63c99c], rax */
L_1803e17ed_0:;
L_1803e17ed_1:;
mw(UINT64_C(0x180a1e190),8,rd(s->r,0,8));
L_1803e17ed_2:;
/* 1803e17f4: lea rax, [rip + 0x74d5] */
L_1803e17f4_0:;
L_1803e17f4_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8cd0)));
L_1803e17f4_2:;
/* 1803e17fb: mov qword ptr [rip + 0x63c966], rax */
L_1803e17fb_0:;
L_1803e17fb_1:;
mw(UINT64_C(0x180a1e168),8,rd(s->r,0,8));
L_1803e17fb_2:;
/* 1803e1802: lea rax, [rip + 0x7617] */
L_1803e1802_0:;
L_1803e1802_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8e20)));
L_1803e1802_2:;
/* 1803e1809: mov qword ptr [rip + 0x63c968], rax */
L_1803e1809_0:;
L_1803e1809_1:;
mw(UINT64_C(0x180a1e178),8,rd(s->r,0,8));
L_1803e1809_2:;
/* 1803e1810: lea rax, [rip + 0x7759] */
L_1803e1810_0:;
L_1803e1810_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8f70)));
L_1803e1810_2:;
/* 1803e1817: mov qword ptr [rip + 0x63c9e2], rax */
L_1803e1817_0:;
L_1803e1817_1:;
mw(UINT64_C(0x180a1e200),8,rd(s->r,0,8));
L_1803e1817_2:;
/* 1803e181e: lea rax, [rip + 0x775b] */
L_1803e181e_0:;
L_1803e181e_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8f80)));
L_1803e181e_2:;
/* 1803e1825: mov qword ptr [rip + 0x63c92c], rax */
L_1803e1825_0:;
L_1803e1825_1:;
mw(UINT64_C(0x180a1e158),8,rd(s->r,0,8));
L_1803e1825_2:;
/* 1803e182c: lea rax, [rip + 0x776d] */
L_1803e182c_0:;
L_1803e182c_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8fa0)));
L_1803e182c_2:;
/* 1803e1833: mov qword ptr [rip + 0x63c8e6], rax */
L_1803e1833_0:;
L_1803e1833_1:;
mw(UINT64_C(0x180a1e120),8,rd(s->r,0,8));
L_1803e1833_2:;
/* 1803e183a: lea rax, [rip + 0x776f] */
L_1803e183a_0:;
L_1803e183a_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8fb0)));
L_1803e183a_2:;
/* 1803e1841: mov qword ptr [rip + 0x63c970], rax */
L_1803e1841_0:;
L_1803e1841_1:;
mw(UINT64_C(0x180a1e1b8),8,rd(s->r,0,8));
L_1803e1841_2:;
/* 1803e1848: lea rax, [rip + 0x77b1] */
L_1803e1848_0:;
L_1803e1848_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9000)));
L_1803e1848_2:;
/* 1803e184f: mov qword ptr [rip + 0x63c8fa], rax */
L_1803e184f_0:;
L_1803e184f_1:;
mw(UINT64_C(0x180a1e150),8,rd(s->r,0,8));
L_1803e184f_2:;
/* 1803e1856: lea rax, [rip + 0x7873] */
L_1803e1856_0:;
L_1803e1856_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e90d0)));
L_1803e1856_2:;
/* 1803e185d: mov qword ptr [rip + 0x63c91c], rax */
L_1803e185d_0:;
L_1803e185d_1:;
mw(UINT64_C(0x180a1e180),8,rd(s->r,0,8));
L_1803e185d_2:;
/* 1803e1864: lea rax, [rip + 0x78b5] */
L_1803e1864_0:;
L_1803e1864_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e9120)));
L_1803e1864_2:;
/* 1803e186b: mov qword ptr [rip + 0x63c8d6], rax */
L_1803e186b_0:;
L_1803e186b_1:;
mw(UINT64_C(0x180a1e148),8,rd(s->r,0,8));
L_1803e186b_2:;
/* 1803e1872: lea rax, [rip + 0x7047] */
L_1803e1872_0:;
L_1803e1872_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e88c0)));
L_1803e1872_2:;
/* 1803e1879: mov qword ptr [rip + 0x63c940], rax */
L_1803e1879_0:;
L_1803e1879_1:;
mw(UINT64_C(0x180a1e1c0),8,rd(s->r,0,8));
L_1803e1879_2:;
/* 1803e1880: lea rax, [rip + 0x6e79] */
L_1803e1880_0:;
L_1803e1880_1:;
wr(s->r,0,8,((U)UINT64_C(0x1803e8700)));
L_1803e1880_2:;
/* 1803e1887: mov qword ptr [rip + 0x63c922], rax */
L_1803e1887_0:;
L_1803e1887_1:;
mw(UINT64_C(0x180a1e1b0),8,rd(s->r,0,8));
L_1803e1887_2:;
/* 1803e188e: add rsp, 0x18 */
L_1803e188e_0:;
L_1803e188e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x18)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e188e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x18)),8,0));
L_1803e188e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x18))));
L_1803e188e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e188e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e188e_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e188e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803e188e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803e188e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803e188e_10:;
return UINT64_C(0x1803e1892);
}
uint64_t b_1803e188e(CPU*s){
/* 1803e188e: add rsp, 0x18 */
L_1803e188e_0:;
L_1803e188e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x18)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e188e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x18)),8,0));
L_1803e188e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x18))));
L_1803e188e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e188e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e188e_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e188e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803e188e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803e188e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803e188e_10:;
/* 1803e1892: ret  */
L_1803e1892_0:;
L_1803e1892_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1892_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1892_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e1892_4:;
return UINT64_C(0x1803e1893);
}
uint64_t b_1803e1892(CPU*s){
/* 1803e1892: ret  */
L_1803e1892_0:;
L_1803e1892_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1892_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1892_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e1892_4:;
return UINT64_C(0x1803e1893);
}
uint64_t b_1803e18b0(CPU*s){
/* 1803e18b0: push rbx */
L_1803e18b0_0:;
L_1803e18b0_1:;
wr(s->u,10,8,rd(s->r,24,8));
L_1803e18b0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e18b0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,10,8));
L_1803e18b0_4:;
/* 1803e18b2: sub rsp, 0x40 */
L_1803e18b2_0:;
L_1803e18b2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x40))));
L_1803e18b2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,1));
L_1803e18b2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x40))));
L_1803e18b2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e18b2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e18b2_6:;
wr(s->u,18,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e18b2_7:;
wr(s->u,26,1,pop(rd(s->u,18,8),8));
L_1803e18b2_8:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803e18b2_9:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803e18b2_10:;
/* 1803e18b6: lea eax, [rdx - 1] */
L_1803e18b6_0:;
L_1803e18b6_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803e18b6_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e18b6_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e18b6_4:;
/* 1803e18b9: mov rbx, rcx */
L_1803e18b9_0:;
L_1803e18b9_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803e18b9_2:;
/* 1803e18bc: cmp eax, 0x77 */
L_1803e18bc_0:;
L_1803e18bc_1:;
wr(s->u,28,4,rd(s->r,0,4));
L_1803e18bc_2:;
wr(s->r,512,1,(rd(s->u,28,4)<((U)UINT64_C(0x77))));
L_1803e18bc_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,28,4),((U)UINT64_C(0x77)),4,1));
L_1803e18bc_4:;
wr(s->u,32,4,(rd(s->u,28,4)-((U)UINT64_C(0x77))));
L_1803e18bc_5:;
wr(s->r,519,1,(sx(rd(s->u,32,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e18bc_6:;
wr(s->r,518,1,(rd(s->u,32,4)==((U)UINT64_C(0x0))));
L_1803e18bc_7:;
wr(s->u,18,4,(rd(s->u,32,4)&((U)UINT64_C(0xff))));
L_1803e18bc_8:;
wr(s->u,26,1,pop(rd(s->u,18,4),4));
L_1803e18bc_9:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803e18bc_10:;
wr(s->r,514,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803e18bc_11:;
/* 1803e18bf: ja 0x1803e1902 */
L_1803e18bf_0:;
L_1803e18bf_1:;
wr(s->u,8,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803e18bf_2:;
wr(s->u,9,1,(!rd(s->u,8,1)));
L_1803e18bf_3:;
if(rd(s->u,9,1)){return UINT64_C(0x1803e1902);}
L_1803e18bf_4:;
return UINT64_C(0x1803e18c1);
}
uint64_t b_1803e18c1(CPU*s){
/* 1803e18c1: mov eax, dword ptr [rsp + 0x78] */
L_1803e18c1_0:;
L_1803e18c1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803e18c1_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803e18c1_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803e18c1_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e18c1_5:;
/* 1803e18c5: lea rcx, [rsp + 0x30] */
L_1803e18c5_0:;
L_1803e18c5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803e18c5_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803e18c5_3:;
/* 1803e18ca: mov dword ptr [rsp + 0x28], eax */
L_1803e18ca_0:;
L_1803e18ca_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803e18ca_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803e18ca_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803e18ca_4:;
/* 1803e18ce: mov dword ptr [rsp + 0x20], r9d */
L_1803e18ce_0:;
L_1803e18ce_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803e18ce_2:;
wr(s->u,8,4,rd(s->r,136,4));
L_1803e18ce_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803e18ce_4:;
/* 1803e18d3: mov r9d, r8d */
L_1803e18d3_0:;
L_1803e18d3_1:;
wr(s->r,136,4,rd(s->r,128,4));
L_1803e18d3_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803e18d3_3:;
/* 1803e18d6: mov r8d, edx */
L_1803e18d6_0:;
L_1803e18d6_1:;
wr(s->r,128,4,rd(s->r,16,4));
L_1803e18d6_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803e18d6_3:;
/* 1803e18d9: mov edx, dword ptr [rsp + 0x70] */
L_1803e18d9_0:;
L_1803e18d9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803e18d9_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803e18d9_3:;
wr(s->r,16,4,rd(s->u,12,4));
L_1803e18d9_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e18d9_5:;
/* 1803e18dd: call 0x1803eb850 */
L_1803e18dd_0:;
L_1803e18dd_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e18dd_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e18e2)));
L_1803e18dd_3:;
return (uint64_t)UINT64_C(0x1803eb850);
L_1803e18dd_4:;
return UINT64_C(0x1803e18e2);
}
uint64_t b_1803e18e2(CPU*s){
/* 1803e18e2: mov r11, qword ptr [rsp + 0x30] */
L_1803e18e2_0:;
L_1803e18e2_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803e18e2_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803e18e2_3:;
wr(s->r,152,8,rd(s->u,8,8));
L_1803e18e2_4:;
/* 1803e18e7: test r11, r11 */
L_1803e18e7_0:;
L_1803e18e7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e18e7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e18e7_3:;
wr(s->u,27,8,(rd(s->r,152,8)&rd(s->r,152,8)));
L_1803e18e7_4:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e18e7_5:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803e18e7_6:;
wr(s->u,17,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803e18e7_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803e18e7_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803e18e7_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803e18e7_10:;
/* 1803e18ea: jne 0x1803e18f7 */
L_1803e18ea_0:;
L_1803e18ea_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1803e18ea_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803e18f7);}
L_1803e18ea_3:;
return UINT64_C(0x1803e18ec);
}
uint64_t b_1803e18ec(CPU*s){
/* 1803e18ec: mov eax, 0xf4241 */
L_1803e18ec_0:;
L_1803e18ec_1:;
wr(s->r,0,8,((U)UINT64_C(0xf4241)));
L_1803e18ec_2:;
/* 1803e18f1: add rsp, 0x40 */
L_1803e18f1_0:;
L_1803e18f1_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e18f1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803e18f1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803e18f1_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e18f1_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e18f1_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e18f1_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803e18f1_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803e18f1_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803e18f1_10:;
/* 1803e18f5: pop rbx */
L_1803e18f5_0:;
L_1803e18f5_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803e18f5_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e18f5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e18f5_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803e18f5_5:;
/* 1803e18f6: ret  */
L_1803e18f6_0:;
L_1803e18f6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e18f6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e18f6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e18f6_4:;
return UINT64_C(0x1803e18f7);
}
uint64_t b_1803e18f7(CPU*s){
/* 1803e18f7: mov qword ptr [rbx], r11 */
L_1803e18f7_0:;
L_1803e18f7_1:;
wr(s->u,0,8,rd(s->r,152,8));
L_1803e18f7_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803e18f7_3:;
/* 1803e18fa: xor eax, eax */
L_1803e18fa_0:;
L_1803e18fa_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e18fa_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e18fa_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803e18fa_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e18fa_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e18fa_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803e18fa_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803e18fa_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803e18fa_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803e18fa_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803e18fa_11:;
/* 1803e18fc: add rsp, 0x40 */
L_1803e18fc_0:;
L_1803e18fc_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e18fc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803e18fc_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803e18fc_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e18fc_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e18fc_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e18fc_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803e18fc_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803e18fc_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803e18fc_10:;
/* 1803e1900: pop rbx */
L_1803e1900_0:;
L_1803e1900_1:;
wr(s->u,18,8,((U)UINT64_C(0x0)));
L_1803e1900_2:;
wr(s->u,18,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1900_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1900_4:;
wr(s->r,24,8,rd(s->u,18,8));
L_1803e1900_5:;
/* 1803e1901: ret  */
L_1803e1901_0:;
L_1803e1901_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1901_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1901_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e1901_4:;
return UINT64_C(0x1803e1902);
}
uint64_t b_1803e1902(CPU*s){
/* 1803e1902: mov eax, 0x4c4b43 */
L_1803e1902_0:;
L_1803e1902_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803e1902_2:;
/* 1803e1907: add rsp, 0x40 */
L_1803e1907_0:;
L_1803e1907_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x40)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e1907_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x40)),8,0));
L_1803e1907_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x40))));
L_1803e1907_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1907_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1907_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1907_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803e1907_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803e1907_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803e1907_10:;
/* 1803e190b: pop rbx */
L_1803e190b_0:;
L_1803e190b_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803e190b_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e190b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e190b_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803e190b_5:;
/* 1803e190c: ret  */
L_1803e190c_0:;
L_1803e190c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e190c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e190c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e190c_4:;
return UINT64_C(0x1803e190d);
}
uint64_t b_1803e1910(CPU*s){
/* 1803e1910: sub rsp, 0x48 */
L_1803e1910_0:;
L_1803e1910_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x48))));
L_1803e1910_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,1));
L_1803e1910_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x48))));
L_1803e1910_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1910_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1910_6:;
wr(s->u,32,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1910_7:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803e1910_8:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803e1910_9:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803e1910_10:;
/* 1803e1914: mov eax, dword ptr [rsp + 0x80] */
L_1803e1914_0:;
L_1803e1914_1:;
wr(s->u,8,8,(((U)UINT64_C(0x80))+rd(s->r,32,8)));
L_1803e1914_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803e1914_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803e1914_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1914_5:;
/* 1803e191b: movss xmm0, dword ptr [rsp + 0x70] */
L_1803e191b_0:;
L_1803e191b_1:;
wr(s->u,0,8,(((U)UINT64_C(0x70))+rd(s->r,32,8)));
L_1803e191b_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803e191b_3:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803e191b_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803e191b_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803e191b_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803e191b_7:;
/* 1803e1921: mov r9, qword ptr [rcx] */
L_1803e1921_0:;
L_1803e1921_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803e1921_2:;
wr(s->r,136,8,rd(s->u,24,8));
L_1803e1921_3:;
/* 1803e1924: mov dword ptr [rsp + 0x30], eax */
L_1803e1924_0:;
L_1803e1924_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803e1924_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803e1924_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803e1924_4:;
/* 1803e1928: mov eax, dword ptr [rsp + 0x78] */
L_1803e1928_0:;
L_1803e1928_1:;
wr(s->u,0,8,(((U)UINT64_C(0x78))+rd(s->r,32,8)));
L_1803e1928_2:;
wr(s->u,20,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803e1928_3:;
wr(s->r,0,4,rd(s->u,20,4));
L_1803e1928_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1928_5:;
/* 1803e192c: mov dword ptr [rsp + 0x28], eax */
L_1803e192c_0:;
L_1803e192c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803e192c_2:;
wr(s->u,16,4,rd(s->r,0,4));
L_1803e192c_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803e192c_4:;
/* 1803e1930: movss dword ptr [rsp + 0x20], xmm0 */
L_1803e1930_0:;
L_1803e1930_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803e1930_2:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803e1930_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803e1930_4:;
/* 1803e1936: call qword ptr [r9] */
L_1803e1936_0:;
L_1803e1936_1:;
wr(s->u,24,8,mr((uint64_t)rd(s->r,136,8),8));
L_1803e1936_2:;
wr(s->u,42,8,rd(s->u,24,8));
L_1803e1936_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1936_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1939)));
L_1803e1936_5:;
return (uint64_t)rd(s->u,42,8);
L_1803e1936_6:;
return UINT64_C(0x1803e1939);
}
uint64_t b_1803e1939(CPU*s){
/* 1803e1939: add rsp, 0x48 */
L_1803e1939_0:;
L_1803e1939_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x48)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e1939_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x48)),8,0));
L_1803e1939_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x48))));
L_1803e1939_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1939_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1939_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1939_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803e1939_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803e1939_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803e1939_10:;
/* 1803e193d: ret  */
L_1803e193d_0:;
L_1803e193d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e193d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e193d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e193d_4:;
return UINT64_C(0x1803e193e);
}
uint64_t b_1803e1b20(CPU*s){
/* 1803e1b20: push rbx */
L_1803e1b20_0:;
L_1803e1b20_1:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803e1b20_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1b20_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,8,8));
L_1803e1b20_4:;
/* 1803e1b22: sub rsp, 0x20 */
L_1803e1b22_0:;
L_1803e1b22_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803e1b22_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803e1b22_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803e1b22_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1b22_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1b22_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1b22_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803e1b22_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803e1b22_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803e1b22_10:;
/* 1803e1b26: mov rbx, rcx */
L_1803e1b26_0:;
L_1803e1b26_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803e1b26_2:;
/* 1803e1b29: mov rcx, qword ptr [rcx] */
L_1803e1b29_0:;
L_1803e1b29_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803e1b29_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803e1b29_3:;
/* 1803e1b2c: test rcx, rcx */
L_1803e1b2c_0:;
L_1803e1b2c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1b2c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1b2c_3:;
wr(s->u,26,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803e1b2c_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1b2c_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803e1b2c_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803e1b2c_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803e1b2c_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803e1b2c_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803e1b2c_10:;
/* 1803e1b2f: je 0x1803e1b3d */
L_1803e1b2f_0:;
L_1803e1b2f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803e1b3d);}
L_1803e1b2f_2:;
return UINT64_C(0x1803e1b31);
}
uint64_t b_1803e1b31(CPU*s){
/* 1803e1b31: call 0x1803eb920 */
L_1803e1b31_0:;
L_1803e1b31_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1b31_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1b36)));
L_1803e1b31_3:;
return (uint64_t)UINT64_C(0x1803eb920);
L_1803e1b31_4:;
return UINT64_C(0x1803e1b36);
}
uint64_t b_1803e1b36(CPU*s){
/* 1803e1b36: mov qword ptr [rbx], 0 */
L_1803e1b36_0:;
L_1803e1b36_1:;
wr(s->u,0,8,((U)UINT64_C(0x0)));
L_1803e1b36_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803e1b36_3:;
/* 1803e1b3d: xor eax, eax */
L_1803e1b3d_0:;
L_1803e1b3d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1b3d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1b3d_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803e1b3d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1b3d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1b3d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803e1b3d_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803e1b3d_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803e1b3d_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803e1b3d_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803e1b3d_11:;
/* 1803e1b3f: add rsp, 0x20 */
L_1803e1b3f_0:;
L_1803e1b3f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e1b3f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803e1b3f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803e1b3f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1b3f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1b3f_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1b3f_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803e1b3f_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803e1b3f_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803e1b3f_10:;
/* 1803e1b43: pop rbx */
L_1803e1b43_0:;
L_1803e1b43_1:;
wr(s->u,18,8,((U)UINT64_C(0x0)));
L_1803e1b43_2:;
wr(s->u,18,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1b43_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1b43_4:;
wr(s->r,24,8,rd(s->u,18,8));
L_1803e1b43_5:;
/* 1803e1b44: ret  */
L_1803e1b44_0:;
L_1803e1b44_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1b44_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1b44_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e1b44_4:;
return UINT64_C(0x1803e1b45);
}
uint64_t b_1803e1b3d(CPU*s){
/* 1803e1b3d: xor eax, eax */
L_1803e1b3d_0:;
L_1803e1b3d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1b3d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1b3d_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803e1b3d_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1b3d_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1b3d_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803e1b3d_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803e1b3d_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803e1b3d_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803e1b3d_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803e1b3d_11:;
/* 1803e1b3f: add rsp, 0x20 */
L_1803e1b3f_0:;
L_1803e1b3f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e1b3f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803e1b3f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803e1b3f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1b3f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1b3f_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1b3f_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803e1b3f_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803e1b3f_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803e1b3f_10:;
/* 1803e1b43: pop rbx */
L_1803e1b43_0:;
L_1803e1b43_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803e1b43_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1b43_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1b43_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803e1b43_5:;
/* 1803e1b44: ret  */
L_1803e1b44_0:;
L_1803e1b44_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1b44_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1b44_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e1b44_4:;
return UINT64_C(0x1803e1b45);
}
uint64_t b_1803e1b50(CPU*s){
/* 1803e1b50: jmp 0x1803ebc00 */
L_1803e1b50_0:;
L_1803e1b50_1:;
return UINT64_C(0x1803ebc00);
L_1803e1b50_2:;
return UINT64_C(0x1803e1b55);
}
uint64_t b_1803e1b70(CPU*s){
/* 1803e1b70: mov rax, qword ptr [rcx] */
L_1803e1b70_0:;
L_1803e1b70_1:;
wr(s->u,8,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803e1b70_2:;
wr(s->r,0,8,rd(s->u,8,8));
L_1803e1b70_3:;
/* 1803e1b73: jmp qword ptr [rax + 8] */
L_1803e1b73_0:;
L_1803e1b73_1:;
wr(s->u,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803e1b73_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803e1b73_3:;
return (uint64_t)rd(s->u,8,8);
L_1803e1b73_4:;
return UINT64_C(0x1803e1b77);
}
uint64_t b_1803e1bd0(CPU*s){
/* 1803e1bd0: mov qword ptr [rsp + 0x10], rsi */
L_1803e1bd0_0:;
L_1803e1bd0_1:;
wr(s->u,8,8,(((U)UINT64_C(0x10))+rd(s->r,32,8)));
L_1803e1bd0_2:;
wr(s->u,16,8,rd(s->r,48,8));
L_1803e1bd0_3:;
mw((uint64_t)rd(s->u,8,8),8,rd(s->u,16,8));
L_1803e1bd0_4:;
/* 1803e1bd5: push rdi */
L_1803e1bd5_0:;
L_1803e1bd5_1:;
wr(s->u,30,8,rd(s->r,56,8));
L_1803e1bd5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1bd5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,30,8));
L_1803e1bd5_4:;
/* 1803e1bd6: sub rsp, 0x20 */
L_1803e1bd6_0:;
L_1803e1bd6_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803e1bd6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803e1bd6_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803e1bd6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1bd6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1bd6_6:;
wr(s->u,38,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1bd6_7:;
wr(s->u,46,1,pop(rd(s->u,38,8),8));
L_1803e1bd6_8:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803e1bd6_9:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803e1bd6_10:;
/* 1803e1bda: lea rax, [rip + 0x42adbf] */
L_1803e1bda_0:;
L_1803e1bda_1:;
wr(s->r,0,8,((U)UINT64_C(0x18080c9a0)));
L_1803e1bda_2:;
/* 1803e1be1: xor esi, esi */
L_1803e1be1_0:;
L_1803e1be1_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1be1_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1be1_3:;
wr(s->r,48,4,(rd(s->r,48,4)^rd(s->r,48,4)));
L_1803e1be1_4:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803e1be1_5:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1be1_6:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803e1be1_7:;
wr(s->u,38,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803e1be1_8:;
wr(s->u,46,1,pop(rd(s->u,38,4),4));
L_1803e1be1_9:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803e1be1_10:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803e1be1_11:;
/* 1803e1be3: mov rdi, rcx */
L_1803e1be3_0:;
L_1803e1be3_1:;
wr(s->r,56,8,rd(s->r,8,8));
L_1803e1be3_2:;
/* 1803e1be6: cmp dword ptr [rcx + 0xd4], esi */
L_1803e1be6_0:;
L_1803e1be6_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xd4))));
L_1803e1be6_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803e1be6_3:;
wr(s->u,48,4,rd(s->u,24,4));
L_1803e1be6_4:;
wr(s->r,512,1,(rd(s->u,48,4)<rd(s->r,48,4)));
L_1803e1be6_5:;
wr(s->r,523,1,signed_overflow(rd(s->u,48,4),rd(s->r,48,4),4,1));
L_1803e1be6_6:;
wr(s->u,52,4,(rd(s->u,48,4)-rd(s->r,48,4)));
L_1803e1be6_7:;
wr(s->r,519,1,(sx(rd(s->u,52,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1be6_8:;
wr(s->r,518,1,(rd(s->u,52,4)==((U)UINT64_C(0x0))));
L_1803e1be6_9:;
wr(s->u,38,4,(rd(s->u,52,4)&((U)UINT64_C(0xff))));
L_1803e1be6_10:;
wr(s->u,46,1,pop(rd(s->u,38,4),4));
L_1803e1be6_11:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803e1be6_12:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803e1be6_13:;
/* 1803e1bec: mov qword ptr [rcx], rax */
L_1803e1bec_0:;
L_1803e1bec_1:;
wr(s->u,16,8,rd(s->r,0,8));
L_1803e1bec_2:;
mw((uint64_t)rd(s->r,8,8),8,rd(s->u,16,8));
L_1803e1bec_3:;
/* 1803e1bef: jle 0x1803e1c3c */
L_1803e1bef_0:;
L_1803e1bef_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803e1bef_2:;
wr(s->u,29,1,((rd(s->r,518,1)!=0)||(rd(s->u,28,1)!=0)));
L_1803e1bef_3:;
if(rd(s->u,29,1)){return UINT64_C(0x1803e1c3c);}
L_1803e1bef_4:;
return UINT64_C(0x1803e1bf1);
}
uint64_t b_1803e1bf1(CPU*s){
/* 1803e1bf1: mov qword ptr [rsp + 0x30], rbx */
L_1803e1bf1_0:;
L_1803e1bf1_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803e1bf1_2:;
wr(s->u,48,8,rd(s->r,24,8));
L_1803e1bf1_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,48,8));
L_1803e1bf1_4:;
/* 1803e1bf6: nop word ptr [rax + rax] */
L_1803e1bf6_0:;
L_1803e1bf6_1:;
wr(s->u,32,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803e1bf6_2:;
wr(s->u,40,8,(rd(s->r,0,8)+rd(s->u,32,8)));
L_1803e1bf6_3:;
/* 1803e1c00: movsxd rbx, esi */
L_1803e1c00_0:;
L_1803e1c00_1:;
wr(s->r,24,8,(U)sx(rd(s->r,48,4),4));
L_1803e1c00_2:;
/* 1803e1c03: lea rcx, [rdi + rbx*8 + 0x108] */
L_1803e1c03_0:;
L_1803e1c03_1:;
wr(s->u,8,8,(((U)UINT64_C(0x108))+rd(s->r,56,8)));
L_1803e1c03_2:;
wr(s->u,16,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803e1c03_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803e1c03_4:;
wr(s->r,8,8,rd(s->u,24,8));
L_1803e1c03_5:;
/* 1803e1c0b: call qword ptr [rip + 0x63c54f] */
L_1803e1c0b_0:;
L_1803e1c0b_1:;
wr(s->u,56,8,mr(UINT64_C(0x180a1e160),8));
L_1803e1c0b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1c0b_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1c11)));
L_1803e1c0b_4:;
return (uint64_t)rd(s->u,56,8);
L_1803e1c0b_5:;
return UINT64_C(0x1803e1c11);
}
uint64_t b_1803e1c00(CPU*s){
/* 1803e1c00: movsxd rbx, esi */
L_1803e1c00_0:;
L_1803e1c00_1:;
wr(s->r,24,8,(U)sx(rd(s->r,48,4),4));
L_1803e1c00_2:;
/* 1803e1c03: lea rcx, [rdi + rbx*8 + 0x108] */
L_1803e1c03_0:;
L_1803e1c03_1:;
wr(s->u,0,8,(((U)UINT64_C(0x108))+rd(s->r,56,8)));
L_1803e1c03_2:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803e1c03_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803e1c03_4:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803e1c03_5:;
/* 1803e1c0b: call qword ptr [rip + 0x63c54f] */
L_1803e1c0b_0:;
L_1803e1c0b_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e160),8));
L_1803e1c0b_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1c0b_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1c11)));
L_1803e1c0b_4:;
return (uint64_t)rd(s->u,24,8);
L_1803e1c0b_5:;
return UINT64_C(0x1803e1c11);
}
uint64_t b_1803e1c11(CPU*s){
/* 1803e1c11: lea rcx, [rdi + rbx*8 + 0x288] */
L_1803e1c11_0:;
L_1803e1c11_1:;
wr(s->u,0,8,(((U)UINT64_C(0x288))+rd(s->r,56,8)));
L_1803e1c11_2:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803e1c11_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803e1c11_4:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803e1c11_5:;
/* 1803e1c19: call qword ptr [rip + 0x63c541] */
L_1803e1c19_0:;
L_1803e1c19_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e160),8));
L_1803e1c19_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1c19_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1c1f)));
L_1803e1c19_4:;
return (uint64_t)rd(s->u,24,8);
L_1803e1c19_5:;
return UINT64_C(0x1803e1c1f);
}
uint64_t b_1803e1c1f(CPU*s){
/* 1803e1c1f: lea rcx, [rdi + rbx*8 + 0x408] */
L_1803e1c1f_0:;
L_1803e1c1f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x408))+rd(s->r,56,8)));
L_1803e1c1f_2:;
wr(s->u,8,8,(rd(s->r,24,8)*((U)UINT64_C(0x8))));
L_1803e1c1f_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803e1c1f_4:;
wr(s->r,8,8,rd(s->u,16,8));
L_1803e1c1f_5:;
/* 1803e1c27: call qword ptr [rip + 0x63c533] */
L_1803e1c27_0:;
L_1803e1c27_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e160),8));
L_1803e1c27_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1c27_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1c2d)));
L_1803e1c27_4:;
return (uint64_t)rd(s->u,24,8);
L_1803e1c27_5:;
return UINT64_C(0x1803e1c2d);
}
uint64_t b_1803e1c2d(CPU*s){
/* 1803e1c2d: inc esi */
L_1803e1c2d_0:;
L_1803e1c2d_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),((U)UINT64_C(0x1)),4,0));
L_1803e1c2d_2:;
wr(s->r,48,4,(rd(s->r,48,4)+((U)UINT64_C(0x1))));
L_1803e1c2d_3:;
wr(s->r,48,8,rd(s->r,48,4));
L_1803e1c2d_4:;
wr(s->r,519,1,(sx(rd(s->r,48,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1c2d_5:;
wr(s->r,518,1,(rd(s->r,48,4)==((U)UINT64_C(0x0))));
L_1803e1c2d_6:;
wr(s->u,13,4,(rd(s->r,48,4)&((U)UINT64_C(0xff))));
L_1803e1c2d_7:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803e1c2d_8:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803e1c2d_9:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803e1c2d_10:;
/* 1803e1c2f: cmp esi, dword ptr [rdi + 0xd4] */
L_1803e1c2f_0:;
L_1803e1c2f_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0xd4))));
L_1803e1c2f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803e1c2f_3:;
wr(s->u,19,4,rd(s->u,8,4));
L_1803e1c2f_4:;
wr(s->r,512,1,(rd(s->r,48,4)<rd(s->u,19,4)));
L_1803e1c2f_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,48,4),rd(s->u,19,4),4,1));
L_1803e1c2f_6:;
wr(s->u,23,4,(rd(s->r,48,4)-rd(s->u,19,4)));
L_1803e1c2f_7:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1c2f_8:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803e1c2f_9:;
wr(s->u,13,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803e1c2f_10:;
wr(s->u,17,1,pop(rd(s->u,13,4),4));
L_1803e1c2f_11:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803e1c2f_12:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803e1c2f_13:;
/* 1803e1c35: jl 0x1803e1c00 */
L_1803e1c35_0:;
L_1803e1c35_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803e1c35_2:;
if(rd(s->u,12,1)){return UINT64_C(0x1803e1c00);}
L_1803e1c35_3:;
return UINT64_C(0x1803e1c37);
}
uint64_t b_1803e1c37(CPU*s){
/* 1803e1c37: mov rbx, qword ptr [rsp + 0x30] */
L_1803e1c37_0:;
L_1803e1c37_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803e1c37_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803e1c37_3:;
wr(s->r,24,8,rd(s->u,16,8));
L_1803e1c37_4:;
/* 1803e1c3c: lea rcx, [rdi + 0x588] */
L_1803e1c3c_0:;
L_1803e1c3c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x588))));
L_1803e1c3c_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803e1c3c_3:;
/* 1803e1c43: call qword ptr [rip + 0x63c517] */
L_1803e1c43_0:;
L_1803e1c43_1:;
wr(s->u,24,8,mr(UINT64_C(0x180a1e160),8));
L_1803e1c43_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1c43_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1c49)));
L_1803e1c43_4:;
return (uint64_t)rd(s->u,24,8);
L_1803e1c43_5:;
return UINT64_C(0x1803e1c49);
}
uint64_t b_1803e1c3c(CPU*s){
/* 1803e1c3c: lea rcx, [rdi + 0x588] */
L_1803e1c3c_0:;
L_1803e1c3c_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x588))));
L_1803e1c3c_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803e1c3c_3:;
/* 1803e1c43: call qword ptr [rip + 0x63c517] */
L_1803e1c43_0:;
L_1803e1c43_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803e1c43_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1c43_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1c49)));
L_1803e1c43_4:;
return (uint64_t)rd(s->u,8,8);
L_1803e1c43_5:;
return UINT64_C(0x1803e1c49);
}
uint64_t b_1803e1c49(CPU*s){
/* 1803e1c49: lea rcx, [rdi + 0x5b0] */
L_1803e1c49_0:;
L_1803e1c49_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x5b0))));
L_1803e1c49_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803e1c49_3:;
/* 1803e1c50: call qword ptr [rip + 0x63c50a] */
L_1803e1c50_0:;
L_1803e1c50_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803e1c50_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1c50_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1c56)));
L_1803e1c50_4:;
return (uint64_t)rd(s->u,8,8);
L_1803e1c50_5:;
return UINT64_C(0x1803e1c56);
}
uint64_t b_1803e1c56(CPU*s){
/* 1803e1c56: lea rcx, [rdi + 0x590] */
L_1803e1c56_0:;
L_1803e1c56_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x590))));
L_1803e1c56_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803e1c56_3:;
/* 1803e1c5d: call qword ptr [rip + 0x63c4fd] */
L_1803e1c5d_0:;
L_1803e1c5d_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803e1c5d_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1c5d_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1c63)));
L_1803e1c5d_4:;
return (uint64_t)rd(s->u,8,8);
L_1803e1c5d_5:;
return UINT64_C(0x1803e1c63);
}
uint64_t b_1803e1c63(CPU*s){
/* 1803e1c63: lea rcx, [rdi + 0x598] */
L_1803e1c63_0:;
L_1803e1c63_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x598))));
L_1803e1c63_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803e1c63_3:;
/* 1803e1c6a: call qword ptr [rip + 0x63c4f0] */
L_1803e1c6a_0:;
L_1803e1c6a_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e160),8));
L_1803e1c6a_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1c6a_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1c70)));
L_1803e1c6a_4:;
return (uint64_t)rd(s->u,8,8);
L_1803e1c6a_5:;
return UINT64_C(0x1803e1c70);
}
uint64_t b_1803e1c70(CPU*s){
/* 1803e1c70: lea rcx, [rdi + 0x5b8] */
L_1803e1c70_0:;
L_1803e1c70_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x5b8))));
L_1803e1c70_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803e1c70_3:;
/* 1803e1c77: call qword ptr [rip + 0x63c533] */
L_1803e1c77_0:;
L_1803e1c77_1:;
wr(s->u,8,8,mr(UINT64_C(0x180a1e1b0),8));
L_1803e1c77_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1c77_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1c7d)));
L_1803e1c77_4:;
return (uint64_t)rd(s->u,8,8);
L_1803e1c77_5:;
return UINT64_C(0x1803e1c7d);
}
uint64_t b_1803e1c7d(CPU*s){
/* 1803e1c7d: lea rcx, [rdi + 0x5c0] */
L_1803e1c7d_0:;
L_1803e1c7d_1:;
wr(s->u,0,8,(rd(s->r,56,8)+((U)UINT64_C(0x5c0))));
L_1803e1c7d_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803e1c7d_3:;
/* 1803e1c84: mov rsi, qword ptr [rsp + 0x38] */
L_1803e1c84_0:;
L_1803e1c84_1:;
wr(s->u,8,8,(((U)UINT64_C(0x38))+rd(s->r,32,8)));
L_1803e1c84_2:;
wr(s->u,16,8,mr((uint64_t)rd(s->u,8,8),8));
L_1803e1c84_3:;
wr(s->r,48,8,rd(s->u,16,8));
L_1803e1c84_4:;
/* 1803e1c89: add rsp, 0x20 */
L_1803e1c89_0:;
L_1803e1c89_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e1c89_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803e1c89_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803e1c89_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1c89_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1c89_6:;
wr(s->u,24,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1c89_7:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803e1c89_8:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803e1c89_9:;
wr(s->r,514,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803e1c89_10:;
/* 1803e1c8d: pop rdi */
L_1803e1c8d_0:;
L_1803e1c8d_1:;
wr(s->u,34,8,((U)UINT64_C(0x0)));
L_1803e1c8d_2:;
wr(s->u,34,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1c8d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1c8d_4:;
wr(s->r,56,8,rd(s->u,34,8));
L_1803e1c8d_5:;
/* 1803e1c8e: jmp 0x1803ec0e0 */
L_1803e1c8e_0:;
L_1803e1c8e_1:;
return UINT64_C(0x1803ec0e0);
L_1803e1c8e_2:;
return UINT64_C(0x1803e1c93);
}
uint64_t b_1803e1ca0(CPU*s){
/* 1803e1ca0: push rbx */
L_1803e1ca0_0:;
L_1803e1ca0_1:;
wr(s->u,9,8,rd(s->r,24,8));
L_1803e1ca0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1ca0_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,9,8));
L_1803e1ca0_4:;
/* 1803e1ca2: sub rsp, 0x20 */
L_1803e1ca2_0:;
L_1803e1ca2_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803e1ca2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803e1ca2_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803e1ca2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1ca2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1ca2_6:;
wr(s->u,17,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1ca2_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803e1ca2_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803e1ca2_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803e1ca2_10:;
/* 1803e1ca6: mov rbx, rcx */
L_1803e1ca6_0:;
L_1803e1ca6_1:;
wr(s->r,24,8,rd(s->r,8,8));
L_1803e1ca6_2:;
/* 1803e1ca9: mov rcx, qword ptr [rcx] */
L_1803e1ca9_0:;
L_1803e1ca9_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803e1ca9_2:;
wr(s->r,8,8,rd(s->u,0,8));
L_1803e1ca9_3:;
/* 1803e1cac: test rcx, rcx */
L_1803e1cac_0:;
L_1803e1cac_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1cac_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1cac_3:;
wr(s->u,27,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803e1cac_4:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1cac_5:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803e1cac_6:;
wr(s->u,17,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803e1cac_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803e1cac_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803e1cac_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803e1cac_10:;
/* 1803e1caf: jne 0x1803e1cbc */
L_1803e1caf_0:;
L_1803e1caf_1:;
wr(s->u,8,1,(!rd(s->r,518,1)));
L_1803e1caf_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803e1cbc);}
L_1803e1caf_3:;
return UINT64_C(0x1803e1cb1);
}
uint64_t b_1803e1cb1(CPU*s){
/* 1803e1cb1: mov eax, 0x4c4b43 */
L_1803e1cb1_0:;
L_1803e1cb1_1:;
wr(s->r,0,8,((U)UINT64_C(0x4c4b43)));
L_1803e1cb1_2:;
/* 1803e1cb6: add rsp, 0x20 */
L_1803e1cb6_0:;
L_1803e1cb6_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e1cb6_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803e1cb6_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803e1cb6_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1cb6_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1cb6_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1cb6_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803e1cb6_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803e1cb6_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803e1cb6_10:;
/* 1803e1cba: pop rbx */
L_1803e1cba_0:;
L_1803e1cba_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803e1cba_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1cba_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1cba_4:;
wr(s->r,24,8,rd(s->u,10,8));
L_1803e1cba_5:;
/* 1803e1cbb: ret  */
L_1803e1cbb_0:;
L_1803e1cbb_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1cbb_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1cbb_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e1cbb_4:;
return UINT64_C(0x1803e1cbc);
}
uint64_t b_1803e1cbc(CPU*s){
/* 1803e1cbc: mov rax, qword ptr [rcx] */
L_1803e1cbc_0:;
L_1803e1cbc_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,8,8),8));
L_1803e1cbc_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803e1cbc_3:;
/* 1803e1cbf: mov edx, 1 */
L_1803e1cbf_0:;
L_1803e1cbf_1:;
wr(s->r,16,8,((U)UINT64_C(0x1)));
L_1803e1cbf_2:;
/* 1803e1cc4: call qword ptr [rax] */
L_1803e1cc4_0:;
L_1803e1cc4_1:;
wr(s->u,0,8,mr((uint64_t)rd(s->r,0,8),8));
L_1803e1cc4_2:;
wr(s->u,8,8,rd(s->u,0,8));
L_1803e1cc4_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1cc4_4:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1cc6)));
L_1803e1cc4_5:;
return (uint64_t)rd(s->u,8,8);
L_1803e1cc4_6:;
return UINT64_C(0x1803e1cc6);
}
uint64_t b_1803e1cc6(CPU*s){
/* 1803e1cc6: mov qword ptr [rbx], 0 */
L_1803e1cc6_0:;
L_1803e1cc6_1:;
wr(s->u,0,8,((U)UINT64_C(0x0)));
L_1803e1cc6_2:;
mw((uint64_t)rd(s->r,24,8),8,rd(s->u,0,8));
L_1803e1cc6_3:;
/* 1803e1ccd: xor eax, eax */
L_1803e1ccd_0:;
L_1803e1ccd_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1ccd_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1ccd_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803e1ccd_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1ccd_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1ccd_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803e1ccd_7:;
wr(s->u,8,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803e1ccd_8:;
wr(s->u,16,1,pop(rd(s->u,8,4),4));
L_1803e1ccd_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803e1ccd_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803e1ccd_11:;
/* 1803e1ccf: add rsp, 0x20 */
L_1803e1ccf_0:;
L_1803e1ccf_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e1ccf_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803e1ccf_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803e1ccf_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1ccf_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1ccf_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1ccf_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803e1ccf_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803e1ccf_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803e1ccf_10:;
/* 1803e1cd3: pop rbx */
L_1803e1cd3_0:;
L_1803e1cd3_1:;
wr(s->u,18,8,((U)UINT64_C(0x0)));
L_1803e1cd3_2:;
wr(s->u,18,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1cd3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1cd3_4:;
wr(s->r,24,8,rd(s->u,18,8));
L_1803e1cd3_5:;
/* 1803e1cd4: ret  */
L_1803e1cd4_0:;
L_1803e1cd4_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1cd4_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1cd4_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e1cd4_4:;
return UINT64_C(0x1803e1cd5);
}
uint64_t b_1803e1ce0(CPU*s){
/* 1803e1ce0: mov dword ptr [rsp + 0x18], r8d */
L_1803e1ce0_0:;
L_1803e1ce0_1:;
wr(s->u,13,8,(((U)UINT64_C(0x18))+rd(s->r,32,8)));
L_1803e1ce0_2:;
wr(s->u,21,4,rd(s->r,128,4));
L_1803e1ce0_3:;
mw((uint64_t)rd(s->u,13,8),4,rd(s->u,21,4));
L_1803e1ce0_4:;
/* 1803e1ce5: push rdi */
L_1803e1ce5_0:;
L_1803e1ce5_1:;
wr(s->u,34,8,rd(s->r,56,8));
L_1803e1ce5_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1ce5_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,34,8));
L_1803e1ce5_4:;
/* 1803e1ce6: push r12 */
L_1803e1ce6_0:;
L_1803e1ce6_1:;
wr(s->u,34,8,rd(s->r,160,8));
L_1803e1ce6_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1ce6_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,34,8));
L_1803e1ce6_4:;
/* 1803e1ce8: push r15 */
L_1803e1ce8_0:;
L_1803e1ce8_1:;
wr(s->u,34,8,rd(s->r,184,8));
L_1803e1ce8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1ce8_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,34,8));
L_1803e1ce8_4:;
/* 1803e1cea: sub rsp, 0x30 */
L_1803e1cea_0:;
L_1803e1cea_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x30))));
L_1803e1cea_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,1));
L_1803e1cea_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x30))));
L_1803e1cea_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1cea_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1cea_6:;
wr(s->u,42,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1cea_7:;
wr(s->u,50,1,pop(rd(s->u,42,8),8));
L_1803e1cea_8:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803e1cea_9:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803e1cea_10:;
/* 1803e1cee: mov eax, 0x10 */
L_1803e1cee_0:;
L_1803e1cee_1:;
wr(s->r,0,8,((U)UINT64_C(0x10)));
L_1803e1cee_2:;
/* 1803e1cf3: mov rdi, rdx */
L_1803e1cf3_0:;
L_1803e1cf3_1:;
wr(s->r,56,8,rd(s->r,16,8));
L_1803e1cf3_2:;
/* 1803e1cf6: movsxd rdx, dword ptr [rcx + 0xf0] */
L_1803e1cf6_0:;
L_1803e1cf6_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0xf0))));
L_1803e1cf6_2:;
wr(s->u,25,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803e1cf6_3:;
wr(s->r,16,8,(U)sx(rd(s->u,25,4),4));
L_1803e1cf6_4:;
/* 1803e1cfd: mov r12d, edx */
L_1803e1cfd_0:;
L_1803e1cfd_1:;
wr(s->r,160,4,rd(s->r,16,4));
L_1803e1cfd_2:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803e1cfd_3:;
/* 1803e1d00: movsxd r15, r9d */
L_1803e1d00_0:;
L_1803e1d00_1:;
wr(s->r,184,8,(U)sx(rd(s->r,136,4),4));
L_1803e1d00_2:;
/* 1803e1d03: sar r12d, 6 */
L_1803e1d03_0:;
L_1803e1d03_1:;
wr(s->u,99,4,(((U)UINT64_C(0x6))&((U)UINT64_C(0x1f))));
L_1803e1d03_2:;
wr(s->u,103,4,rd(s->r,160,4));
L_1803e1d03_3:;
wr(s->r,160,4,((rd(s->u,99,4)>=32)?(sx(rd(s->r,160,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,160,4),4)>>rd(s->u,99,4))));
L_1803e1d03_4:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803e1d03_5:;
wr(s->u,71,1,(rd(s->u,99,4)==((U)UINT64_C(0x0))));
L_1803e1d03_6:;
wr(s->u,72,4,(rd(s->u,99,4)-((U)UINT64_C(0x1))));
L_1803e1d03_7:;
wr(s->u,76,4,((rd(s->u,72,4)>=32)?(sx(rd(s->u,103,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,103,4),4)>>rd(s->u,72,4))));
L_1803e1d03_8:;
wr(s->u,80,4,(rd(s->u,76,4)&((U)UINT64_C(0x1))));
L_1803e1d03_9:;
wr(s->u,84,1,(rd(s->u,80,4)!=((U)UINT64_C(0x0))));
L_1803e1d03_10:;
wr(s->u,0,1,rd(s->u,71,1));
L_1803e1d03_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803e1d03_12:;
wr(s->u,2,1,(!rd(s->u,71,1)));
L_1803e1d03_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803e1d03_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,84,1)));
L_1803e1d03_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803e1d03_16:;
wr(s->u,85,1,(rd(s->u,99,4)==((U)UINT64_C(0x1))));
L_1803e1d03_17:;
wr(s->u,0,1,rd(s->u,85,1));
L_1803e1d03_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803e1d03_19:;
wr(s->u,2,1,(!rd(s->u,85,1)));
L_1803e1d03_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803e1d03_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803e1d03_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803e1d03_23:;
wr(s->u,52,1,(rd(s->u,99,4)!=((U)UINT64_C(0x0))));
L_1803e1d03_24:;
wr(s->u,53,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1d03_25:;
wr(s->u,54,1,(!rd(s->u,52,1)));
L_1803e1d03_26:;
wr(s->u,55,1,(rd(s->u,54,1)&rd(s->r,519,1)));
L_1803e1d03_27:;
wr(s->u,56,1,(rd(s->u,52,1)&rd(s->u,53,1)));
L_1803e1d03_28:;
wr(s->r,519,1,(rd(s->u,55,1)|rd(s->u,56,1)));
L_1803e1d03_29:;
wr(s->u,57,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803e1d03_30:;
wr(s->u,58,1,(!rd(s->u,52,1)));
L_1803e1d03_31:;
wr(s->u,59,1,(rd(s->u,58,1)&rd(s->r,518,1)));
L_1803e1d03_32:;
wr(s->u,60,1,(rd(s->u,52,1)&rd(s->u,57,1)));
L_1803e1d03_33:;
wr(s->r,518,1,(rd(s->u,59,1)|rd(s->u,60,1)));
L_1803e1d03_34:;
wr(s->u,61,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803e1d03_35:;
wr(s->u,65,1,pop(rd(s->u,61,4),4));
L_1803e1d03_36:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803e1d03_37:;
wr(s->u,67,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803e1d03_38:;
wr(s->u,68,1,(!rd(s->u,52,1)));
L_1803e1d03_39:;
wr(s->u,69,1,(rd(s->u,68,1)&rd(s->r,514,1)));
L_1803e1d03_40:;
wr(s->u,70,1,(rd(s->u,52,1)&rd(s->u,67,1)));
L_1803e1d03_41:;
wr(s->r,514,1,(rd(s->u,69,1)|rd(s->u,70,1)));
L_1803e1d03_42:;
/* 1803e1d07: cmp r12d, eax */
L_1803e1d07_0:;
L_1803e1d07_1:;
wr(s->u,91,4,rd(s->r,0,4));
L_1803e1d07_2:;
wr(s->r,512,1,(rd(s->r,160,4)<rd(s->u,91,4)));
L_1803e1d07_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,160,4),rd(s->u,91,4),4,1));
L_1803e1d07_4:;
wr(s->u,95,4,(rd(s->r,160,4)-rd(s->u,91,4)));
L_1803e1d07_5:;
wr(s->r,519,1,(sx(rd(s->u,95,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1d07_6:;
wr(s->r,518,1,(rd(s->u,95,4)==((U)UINT64_C(0x0))));
L_1803e1d07_7:;
wr(s->u,42,4,(rd(s->u,95,4)&((U)UINT64_C(0xff))));
L_1803e1d07_8:;
wr(s->u,50,1,pop(rd(s->u,42,4),4));
L_1803e1d07_9:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803e1d07_10:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803e1d07_11:;
/* 1803e1d0a: cmovg r12d, eax */
L_1803e1d0a_0:;
L_1803e1d0a_1:;
wr(s->u,31,1,(!rd(s->r,518,1)));
L_1803e1d0a_2:;
wr(s->u,32,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803e1d0a_3:;
wr(s->u,33,1,((rd(s->u,31,1)!=0)&&(rd(s->u,32,1)!=0)));
L_1803e1d0a_4:;
wr(s->u,86,4,rd(s->r,0,4));
L_1803e1d0a_5:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803e1d0a_6:;
wr(s->u,90,1,(!rd(s->u,33,1)));
L_1803e1d0a_7:;
if(rd(s->u,90,1)){goto L_1803e1d0e_0;}
L_1803e1d0a_8:;
wr(s->r,160,4,rd(s->u,86,4));
L_1803e1d0a_9:;
/* 1803e1d0e: mov eax, dword ptr [rcx + 0x104] */
L_1803e1d0e_0:;
L_1803e1d0e_1:;
wr(s->u,5,8,(rd(s->r,8,8)+((U)UINT64_C(0x104))));
L_1803e1d0e_2:;
wr(s->u,25,4,mr((uint64_t)rd(s->u,5,8),4));
L_1803e1d0e_3:;
wr(s->r,0,4,rd(s->u,25,4));
L_1803e1d0e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1d0e_5:;
/* 1803e1d14: test eax, eax */
L_1803e1d14_0:;
L_1803e1d14_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1d14_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1d14_3:;
wr(s->u,107,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803e1d14_4:;
wr(s->r,519,1,(sx(rd(s->u,107,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1d14_5:;
wr(s->r,518,1,(rd(s->u,107,4)==((U)UINT64_C(0x0))));
L_1803e1d14_6:;
wr(s->u,42,4,(rd(s->u,107,4)&((U)UINT64_C(0xff))));
L_1803e1d14_7:;
wr(s->u,50,1,pop(rd(s->u,42,4),4));
L_1803e1d14_8:;
wr(s->u,51,1,(rd(s->u,50,1)&((U)UINT64_C(0x1))));
L_1803e1d14_9:;
wr(s->r,514,1,(rd(s->u,51,1)==((U)UINT64_C(0x0))));
L_1803e1d14_10:;
/* 1803e1d16: jle 0x1803e2051 */
L_1803e1d16_0:;
L_1803e1d16_1:;
wr(s->u,29,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803e1d16_2:;
wr(s->u,30,1,((rd(s->r,518,1)!=0)||(rd(s->u,29,1)!=0)));
L_1803e1d16_3:;
if(rd(s->u,30,1)){return UINT64_C(0x1803e2051);}
L_1803e1d16_4:;
return UINT64_C(0x1803e1d1c);
}
uint64_t b_1803e1d0e(CPU*s){
/* 1803e1d0e: mov eax, dword ptr [rcx + 0x104] */
L_1803e1d0e_0:;
L_1803e1d0e_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x104))));
L_1803e1d0e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803e1d0e_3:;
wr(s->r,0,4,rd(s->u,8,4));
L_1803e1d0e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1d0e_5:;
/* 1803e1d14: test eax, eax */
L_1803e1d14_0:;
L_1803e1d14_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1d14_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1d14_3:;
wr(s->u,20,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803e1d14_4:;
wr(s->r,519,1,(sx(rd(s->u,20,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1d14_5:;
wr(s->r,518,1,(rd(s->u,20,4)==((U)UINT64_C(0x0))));
L_1803e1d14_6:;
wr(s->u,14,4,(rd(s->u,20,4)&((U)UINT64_C(0xff))));
L_1803e1d14_7:;
wr(s->u,18,1,pop(rd(s->u,14,4),4));
L_1803e1d14_8:;
wr(s->u,19,1,(rd(s->u,18,1)&((U)UINT64_C(0x1))));
L_1803e1d14_9:;
wr(s->r,514,1,(rd(s->u,19,1)==((U)UINT64_C(0x0))));
L_1803e1d14_10:;
/* 1803e1d16: jle 0x1803e2051 */
L_1803e1d16_0:;
L_1803e1d16_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803e1d16_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803e1d16_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803e2051);}
L_1803e1d16_4:;
return UINT64_C(0x1803e1d1c);
}
uint64_t b_1803e1d1c(CPU*s){
/* 1803e1d1c: cmp eax, 4 */
L_1803e1d1c_0:;
L_1803e1d1c_1:;
wr(s->u,24,4,rd(s->r,0,4));
L_1803e1d1c_2:;
wr(s->r,512,1,(rd(s->u,24,4)<((U)UINT64_C(0x4))));
L_1803e1d1c_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,24,4),((U)UINT64_C(0x4)),4,1));
L_1803e1d1c_4:;
wr(s->u,28,4,(rd(s->u,24,4)-((U)UINT64_C(0x4))));
L_1803e1d1c_5:;
wr(s->r,519,1,(sx(rd(s->u,28,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1d1c_6:;
wr(s->r,518,1,(rd(s->u,28,4)==((U)UINT64_C(0x0))));
L_1803e1d1c_7:;
wr(s->u,18,4,(rd(s->u,28,4)&((U)UINT64_C(0xff))));
L_1803e1d1c_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803e1d1c_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803e1d1c_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803e1d1c_11:;
/* 1803e1d1f: mov qword ptr [rsp + 0x50], rbx */
L_1803e1d1f_0:;
L_1803e1d1f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803e1d1f_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803e1d1f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803e1d1f_4:;
/* 1803e1d24: mov qword ptr [rsp + 0x68], rsi */
L_1803e1d24_0:;
L_1803e1d24_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803e1d24_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803e1d24_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803e1d24_4:;
/* 1803e1d29: mov qword ptr [rsp + 0x28], r13 */
L_1803e1d29_0:;
L_1803e1d29_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803e1d29_2:;
wr(s->u,8,8,rd(s->r,168,8));
L_1803e1d29_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803e1d29_4:;
/* 1803e1d2e: mov qword ptr [rsp + 0x20], r14 */
L_1803e1d2e_0:;
L_1803e1d2e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803e1d2e_2:;
wr(s->u,8,8,rd(s->r,176,8));
L_1803e1d2e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803e1d2e_4:;
/* 1803e1d33: mov r14, r15 */
L_1803e1d33_0:;
L_1803e1d33_1:;
wr(s->r,176,8,rd(s->r,184,8));
L_1803e1d33_2:;
/* 1803e1d36: movsxd r13, r8d */
L_1803e1d36_0:;
L_1803e1d36_1:;
wr(s->r,168,8,(U)sx(rd(s->r,128,4),4));
L_1803e1d36_2:;
/* 1803e1d39: jle 0x1803e1fa1 */
L_1803e1d39_0:;
L_1803e1d39_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803e1d39_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803e1d39_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803e1fa1);}
L_1803e1d39_4:;
return UINT64_C(0x1803e1d3f);
}
uint64_t b_1803e1d1f(CPU*s){
/* 1803e1d1f: mov qword ptr [rsp + 0x50], rbx */
L_1803e1d1f_0:;
L_1803e1d1f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803e1d1f_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803e1d1f_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803e1d1f_4:;
/* 1803e1d24: mov qword ptr [rsp + 0x68], rsi */
L_1803e1d24_0:;
L_1803e1d24_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803e1d24_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803e1d24_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803e1d24_4:;
/* 1803e1d29: mov qword ptr [rsp + 0x28], r13 */
L_1803e1d29_0:;
L_1803e1d29_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803e1d29_2:;
wr(s->u,8,8,rd(s->r,168,8));
L_1803e1d29_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803e1d29_4:;
/* 1803e1d2e: mov qword ptr [rsp + 0x20], r14 */
L_1803e1d2e_0:;
L_1803e1d2e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803e1d2e_2:;
wr(s->u,8,8,rd(s->r,176,8));
L_1803e1d2e_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803e1d2e_4:;
/* 1803e1d33: mov r14, r15 */
L_1803e1d33_0:;
L_1803e1d33_1:;
wr(s->r,176,8,rd(s->r,184,8));
L_1803e1d33_2:;
/* 1803e1d36: movsxd r13, r8d */
L_1803e1d36_0:;
L_1803e1d36_1:;
wr(s->r,168,8,(U)sx(rd(s->r,128,4),4));
L_1803e1d36_2:;
/* 1803e1d39: jle 0x1803e1fa1 */
L_1803e1d39_0:;
L_1803e1d39_1:;
wr(s->u,16,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803e1d39_2:;
wr(s->u,17,1,((rd(s->r,518,1)!=0)||(rd(s->u,16,1)!=0)));
L_1803e1d39_3:;
if(rd(s->u,17,1)){return UINT64_C(0x1803e1fa1);}
L_1803e1d39_4:;
return UINT64_C(0x1803e1d3f);
}
uint64_t b_1803e1d3f(CPU*s){
/* 1803e1d3f: add eax, -6 */
L_1803e1d3f_0:;
L_1803e1d3f_1:;
wr(s->r,512,1,(((rd(s->r,0,4)+((U)UINT64_C(0xfffffffa)))&(((U)1<<32)-1))<rd(s->r,0,4)));
L_1803e1d3f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),((U)UINT64_C(0xfffffffa)),4,0));
L_1803e1d3f_3:;
wr(s->r,0,4,(rd(s->r,0,4)+((U)UINT64_C(0xfffffffa))));
L_1803e1d3f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1d3f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1d3f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803e1d3f_7:;
wr(s->u,2,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803e1d3f_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803e1d3f_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803e1d3f_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803e1d3f_11:;
/* 1803e1d42: cmp eax, 2 */
L_1803e1d42_0:;
L_1803e1d42_1:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803e1d42_2:;
wr(s->r,512,1,(rd(s->u,8,4)<((U)UINT64_C(0x2))));
L_1803e1d42_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,8,4),((U)UINT64_C(0x2)),4,1));
L_1803e1d42_4:;
wr(s->u,12,4,(rd(s->u,8,4)-((U)UINT64_C(0x2))));
L_1803e1d42_5:;
wr(s->r,519,1,(sx(rd(s->u,12,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1d42_6:;
wr(s->r,518,1,(rd(s->u,12,4)==((U)UINT64_C(0x0))));
L_1803e1d42_7:;
wr(s->u,2,4,(rd(s->u,12,4)&((U)UINT64_C(0xff))));
L_1803e1d42_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803e1d42_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803e1d42_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803e1d42_11:;
/* 1803e1d45: ja 0x1803e204a */
L_1803e1d45_0:;
L_1803e1d45_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803e1d45_2:;
wr(s->u,1,1,(!rd(s->u,0,1)));
L_1803e1d45_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803e204a);}
L_1803e1d45_4:;
return UINT64_C(0x1803e1d4b);
}
uint64_t b_1803e1d4b(CPU*s){
/* 1803e1d4b: mov rax, rdx */
L_1803e1d4b_0:;
L_1803e1d4b_1:;
wr(s->r,0,8,rd(s->r,16,8));
L_1803e1d4b_2:;
/* 1803e1d4e: sar r12d, 1 */
L_1803e1d4e_0:;
L_1803e1d4e_1:;
wr(s->u,55,4,(rd(s->r,160,4)&((U)UINT64_C(0x1))));
L_1803e1d4e_2:;
wr(s->r,512,1,(rd(s->u,55,4)!=((U)UINT64_C(0x0))));
L_1803e1d4e_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1d4e_4:;
wr(s->r,160,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,160,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,160,4),4)>>((U)UINT64_C(0x1)))));
L_1803e1d4e_5:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803e1d4e_6:;
wr(s->r,519,1,(sx(rd(s->r,160,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1d4e_7:;
wr(s->r,518,1,(rd(s->r,160,4)==((U)UINT64_C(0x0))));
L_1803e1d4e_8:;
wr(s->u,32,4,(rd(s->r,160,4)&((U)UINT64_C(0xff))));
L_1803e1d4e_9:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803e1d4e_10:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803e1d4e_11:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803e1d4e_12:;
/* 1803e1d51: mov ebx, r15d */
L_1803e1d51_0:;
L_1803e1d51_1:;
wr(s->r,24,4,rd(s->r,184,4));
L_1803e1d51_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803e1d51_3:;
/* 1803e1d54: sar rax, 1 */
L_1803e1d54_0:;
L_1803e1d54_1:;
wr(s->u,59,8,(rd(s->r,0,8)&((U)UINT64_C(0x1))));
L_1803e1d54_2:;
wr(s->r,512,1,(rd(s->u,59,8)!=((U)UINT64_C(0x0))));
L_1803e1d54_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1d54_4:;
wr(s->r,0,8,((((U)UINT64_C(0x1))>=64)?(sx(rd(s->r,0,8),8)<0?(((U)1<<64)-1):0):(U)(sx(rd(s->r,0,8),8)>>((U)UINT64_C(0x1)))));
L_1803e1d54_5:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1d54_6:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803e1d54_7:;
wr(s->u,32,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803e1d54_8:;
wr(s->u,40,1,pop(rd(s->u,32,8),8));
L_1803e1d54_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803e1d54_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803e1d54_11:;
/* 1803e1d57: sub ebx, r12d */
L_1803e1d57_0:;
L_1803e1d57_1:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->r,160,4)));
L_1803e1d57_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->r,160,4),4,1));
L_1803e1d57_3:;
wr(s->r,24,4,(rd(s->r,24,4)-rd(s->r,160,4)));
L_1803e1d57_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803e1d57_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1d57_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803e1d57_7:;
wr(s->u,32,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803e1d57_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803e1d57_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803e1d57_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803e1d57_11:;
/* 1803e1d5a: mov esi, 0 */
L_1803e1d5a_0:;
L_1803e1d5a_1:;
wr(s->r,48,8,((U)UINT64_C(0x0)));
L_1803e1d5a_2:;
/* 1803e1d5f: sub ebx, r8d */
L_1803e1d5f_0:;
L_1803e1d5f_1:;
wr(s->r,512,1,(rd(s->r,24,4)<rd(s->r,128,4)));
L_1803e1d5f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,4),rd(s->r,128,4),4,1));
L_1803e1d5f_3:;
wr(s->r,24,4,(rd(s->r,24,4)-rd(s->r,128,4)));
L_1803e1d5f_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803e1d5f_5:;
wr(s->r,519,1,(sx(rd(s->r,24,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1d5f_6:;
wr(s->r,518,1,(rd(s->r,24,4)==((U)UINT64_C(0x0))));
L_1803e1d5f_7:;
wr(s->u,32,4,(rd(s->r,24,4)&((U)UINT64_C(0xff))));
L_1803e1d5f_8:;
wr(s->u,40,1,pop(rd(s->u,32,4),4));
L_1803e1d5f_9:;
wr(s->u,41,1,(rd(s->u,40,1)&((U)UINT64_C(0x1))));
L_1803e1d5f_10:;
wr(s->r,514,1,(rd(s->u,41,1)==((U)UINT64_C(0x0))));
L_1803e1d5f_11:;
/* 1803e1d62: lea rcx, [rdi + r13*4] */
L_1803e1d62_0:;
L_1803e1d62_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x4))));
L_1803e1d62_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1d62_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803e1d62_4:;
/* 1803e1d66: mov qword ptr [rsp + 0x58], rbp */
L_1803e1d66_0:;
L_1803e1d66_1:;
wr(s->u,16,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803e1d66_2:;
wr(s->u,24,8,rd(s->r,40,8));
L_1803e1d66_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803e1d66_4:;
/* 1803e1d6b: mov edx, ebx */
L_1803e1d6b_0:;
L_1803e1d6b_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803e1d6b_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1d6b_3:;
/* 1803e1d6d: lea rbp, [rdi + rax*4] */
L_1803e1d6d_0:;
L_1803e1d6d_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1d6d_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1d6d_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803e1d6d_4:;
/* 1803e1d71: cmovs edx, esi */
L_1803e1d71_0:;
L_1803e1d71_1:;
wr(s->u,50,4,rd(s->r,48,4));
L_1803e1d71_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1d71_3:;
wr(s->u,54,1,(!rd(s->r,519,1)));
L_1803e1d71_4:;
if(rd(s->u,54,1)){goto L_1803e1d74_0;}
L_1803e1d71_5:;
wr(s->r,16,4,rd(s->u,50,4));
L_1803e1d71_6:;
/* 1803e1d74: call qword ptr [rip + 0x63c42e] */
L_1803e1d74_0:;
L_1803e1d74_1:;
wr(s->u,42,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803e1d74_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1d74_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1d7a)));
L_1803e1d74_4:;
return (uint64_t)rd(s->u,42,8);
L_1803e1d74_5:;
return UINT64_C(0x1803e1d7a);
}
uint64_t b_1803e1d66(CPU*s){
/* 1803e1d66: mov qword ptr [rsp + 0x58], rbp */
L_1803e1d66_0:;
L_1803e1d66_1:;
wr(s->u,16,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803e1d66_2:;
wr(s->u,24,8,rd(s->r,40,8));
L_1803e1d66_3:;
mw((uint64_t)rd(s->u,16,8),8,rd(s->u,24,8));
L_1803e1d66_4:;
/* 1803e1d6b: mov edx, ebx */
L_1803e1d6b_0:;
L_1803e1d6b_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803e1d6b_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1d6b_3:;
/* 1803e1d6d: lea rbp, [rdi + rax*4] */
L_1803e1d6d_0:;
L_1803e1d6d_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1d6d_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1d6d_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803e1d6d_4:;
/* 1803e1d71: cmovs edx, esi */
L_1803e1d71_0:;
L_1803e1d71_1:;
wr(s->u,40,4,rd(s->r,48,4));
L_1803e1d71_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1d71_3:;
wr(s->u,44,1,(!rd(s->r,519,1)));
L_1803e1d71_4:;
if(rd(s->u,44,1)){goto L_1803e1d74_0;}
L_1803e1d71_5:;
wr(s->r,16,4,rd(s->u,40,4));
L_1803e1d71_6:;
/* 1803e1d74: call qword ptr [rip + 0x63c42e] */
L_1803e1d74_0:;
L_1803e1d74_1:;
wr(s->u,32,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803e1d74_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1d74_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1d7a)));
L_1803e1d74_4:;
return (uint64_t)rd(s->u,32,8);
L_1803e1d74_5:;
return UINT64_C(0x1803e1d7a);
}
uint64_t b_1803e1d74(CPU*s){
/* 1803e1d74: call qword ptr [rip + 0x63c42e] */
L_1803e1d74_0:;
L_1803e1d74_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803e1d74_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1d74_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1d7a)));
L_1803e1d74_4:;
return (uint64_t)rd(s->u,0,8);
L_1803e1d74_5:;
return UINT64_C(0x1803e1d7a);
}
uint64_t b_1803e1d7a(CPU*s){
/* 1803e1d7a: test ebx, ebx */
L_1803e1d7a_0:;
L_1803e1d7a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1d7a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1d7a_3:;
wr(s->u,35,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803e1d7a_4:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1d7a_5:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803e1d7a_6:;
wr(s->u,16,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803e1d7a_7:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803e1d7a_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803e1d7a_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803e1d7a_10:;
/* 1803e1d7c: lea rcx, [rbp + r13*4] */
L_1803e1d7c_0:;
L_1803e1d7c_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x4))));
L_1803e1d7c_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803e1d7c_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803e1d7c_4:;
/* 1803e1d81: cmovs ebx, esi */
L_1803e1d81_0:;
L_1803e1d81_1:;
wr(s->u,30,4,rd(s->r,48,4));
L_1803e1d81_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803e1d81_3:;
wr(s->u,34,1,(!rd(s->r,519,1)));
L_1803e1d81_4:;
if(rd(s->u,34,1)){goto L_1803e1d84_0;}
L_1803e1d81_5:;
wr(s->r,24,4,rd(s->u,30,4));
L_1803e1d81_6:;
/* 1803e1d84: mov edx, ebx */
L_1803e1d84_0:;
L_1803e1d84_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803e1d84_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1d84_3:;
/* 1803e1d86: call qword ptr [rip + 0x63c41c] */
L_1803e1d86_0:;
L_1803e1d86_1:;
wr(s->u,22,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803e1d86_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1d86_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1d8c)));
L_1803e1d86_4:;
return (uint64_t)rd(s->u,22,8);
L_1803e1d86_5:;
return UINT64_C(0x1803e1d8c);
}
uint64_t b_1803e1d84(CPU*s){
/* 1803e1d84: mov edx, ebx */
L_1803e1d84_0:;
L_1803e1d84_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803e1d84_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1d84_3:;
/* 1803e1d86: call qword ptr [rip + 0x63c41c] */
L_1803e1d86_0:;
L_1803e1d86_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803e1d86_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1d86_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1d8c)));
L_1803e1d86_4:;
return (uint64_t)rd(s->u,0,8);
L_1803e1d86_5:;
return UINT64_C(0x1803e1d8c);
}
uint64_t b_1803e1d8c(CPU*s){
/* 1803e1d8c: mov r11d, r12d */
L_1803e1d8c_0:;
L_1803e1d8c_1:;
wr(s->r,152,4,rd(s->r,160,4));
L_1803e1d8c_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803e1d8c_3:;
/* 1803e1d8f: neg r11d */
L_1803e1d8f_0:;
L_1803e1d8f_1:;
wr(s->r,512,1,(rd(s->r,152,4)!=((U)UINT64_C(0x0))));
L_1803e1d8f_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,152,4),4,1));
L_1803e1d8f_3:;
wr(s->r,152,4,(-rd(s->r,152,4)));
L_1803e1d8f_4:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1d8f_5:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803e1d8f_6:;
wr(s->u,1,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803e1d8f_7:;
wr(s->u,9,1,pop(rd(s->u,1,4),4));
L_1803e1d8f_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803e1d8f_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803e1d8f_10:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803e1d8f_11:;
/* 1803e1d92: movsxd r10, r11d */
L_1803e1d92_0:;
L_1803e1d92_1:;
wr(s->r,144,8,(U)sx(rd(s->r,152,4),4));
L_1803e1d92_2:;
/* 1803e1d95: mov rax, r10 */
L_1803e1d95_0:;
L_1803e1d95_1:;
wr(s->r,0,8,rd(s->r,144,8));
L_1803e1d95_2:;
/* 1803e1d98: neg rax */
L_1803e1d98_0:;
L_1803e1d98_1:;
wr(s->r,512,1,(rd(s->r,0,8)!=((U)UINT64_C(0x0))));
L_1803e1d98_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,0,8),8,1));
L_1803e1d98_3:;
wr(s->r,0,8,(-rd(s->r,0,8)));
L_1803e1d98_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1d98_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803e1d98_6:;
wr(s->u,1,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803e1d98_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803e1d98_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803e1d98_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803e1d98_10:;
/* 1803e1d9b: cmp rax, 4 */
L_1803e1d9b_0:;
L_1803e1d9b_1:;
wr(s->u,11,8,rd(s->r,0,8));
L_1803e1d9b_2:;
wr(s->r,512,1,(rd(s->u,11,8)<((U)UINT64_C(0x4))));
L_1803e1d9b_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,11,8),((U)UINT64_C(0x4)),8,1));
L_1803e1d9b_4:;
wr(s->u,19,8,(rd(s->u,11,8)-((U)UINT64_C(0x4))));
L_1803e1d9b_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1d9b_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803e1d9b_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803e1d9b_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803e1d9b_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803e1d9b_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803e1d9b_11:;
/* 1803e1d9f: jl 0x1803e1f11 */
L_1803e1d9f_0:;
L_1803e1d9f_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803e1d9f_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803e1f11);}
L_1803e1d9f_3:;
return UINT64_C(0x1803e1da5);
}
uint64_t b_1803e1da5(CPU*s){
/* 1803e1da5: mov rax, r10 */
L_1803e1da5_0:;
L_1803e1da5_1:;
wr(s->r,0,8,rd(s->r,144,8));
L_1803e1da5_2:;
/* 1803e1da8: mov rbx, 0xfffffffffffffffc */
L_1803e1da8_0:;
L_1803e1da8_1:;
wr(s->r,24,8,((U)UINT64_C(0xfffffffffffffffc)));
L_1803e1da8_2:;
/* 1803e1daf: movd xmm3, r12d */
L_1803e1daf_0:;
L_1803e1daf_1:;
wr(s->r,4800,16,rd(s->r,160,4));
L_1803e1daf_2:;
/* 1803e1db4: sub rax, r13 */
L_1803e1db4_0:;
L_1803e1db4_1:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->r,168,8)));
L_1803e1db4_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->r,168,8),8,1));
L_1803e1db4_3:;
wr(s->r,0,8,(rd(s->r,0,8)-rd(s->r,168,8)));
L_1803e1db4_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1db4_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803e1db4_6:;
wr(s->u,82,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803e1db4_7:;
wr(s->u,90,1,pop(rd(s->u,82,8),8));
L_1803e1db4_8:;
wr(s->u,91,1,(rd(s->u,90,1)&((U)UINT64_C(0x1))));
L_1803e1db4_9:;
wr(s->r,514,1,(rd(s->u,91,1)==((U)UINT64_C(0x0))));
L_1803e1db4_10:;
/* 1803e1db7: sub rbx, r10 */
L_1803e1db7_0:;
L_1803e1db7_1:;
wr(s->r,512,1,(rd(s->r,24,8)<rd(s->r,144,8)));
L_1803e1db7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),rd(s->r,144,8),8,1));
L_1803e1db7_3:;
wr(s->r,24,8,(rd(s->r,24,8)-rd(s->r,144,8)));
L_1803e1db7_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1db7_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803e1db7_6:;
wr(s->u,82,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803e1db7_7:;
wr(s->u,90,1,pop(rd(s->u,82,8),8));
L_1803e1db7_8:;
wr(s->u,91,1,(rd(s->u,90,1)&((U)UINT64_C(0x1))));
L_1803e1db7_9:;
wr(s->r,514,1,(rd(s->u,91,1)==((U)UINT64_C(0x0))));
L_1803e1db7_10:;
/* 1803e1dba: lea r9d, [r11 + r12 + 1] */
L_1803e1dba_0:;
L_1803e1dba_1:;
wr(s->u,37,8,(((U)UINT64_C(0x1))+rd(s->r,152,8)));
L_1803e1dba_2:;
wr(s->u,45,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803e1dba_3:;
wr(s->u,53,8,(rd(s->u,37,8)+rd(s->u,45,8)));
L_1803e1dba_4:;
wr(s->r,136,4,(rd(s->u,53,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1dba_5:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803e1dba_6:;
/* 1803e1dbf: lea rcx, [rax + r15 + 2] */
L_1803e1dbf_0:;
L_1803e1dbf_1:;
wr(s->u,37,8,(((U)UINT64_C(0x2))+rd(s->r,0,8)));
L_1803e1dbf_2:;
wr(s->u,45,8,(rd(s->r,184,8)*((U)UINT64_C(0x1))));
L_1803e1dbf_3:;
wr(s->u,53,8,(rd(s->u,37,8)+rd(s->u,45,8)));
L_1803e1dbf_4:;
wr(s->r,8,8,rd(s->u,53,8));
L_1803e1dbf_5:;
/* 1803e1dc4: mov eax, r11d */
L_1803e1dc4_0:;
L_1803e1dc4_1:;
wr(s->r,0,4,rd(s->r,152,4));
L_1803e1dc4_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1dc4_3:;
/* 1803e1dc7: shr rbx, 2 */
L_1803e1dc7_0:;
L_1803e1dc7_1:;
wr(s->u,139,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803e1dc7_2:;
wr(s->u,143,8,rd(s->r,24,8));
L_1803e1dc7_3:;
wr(s->r,24,8,((rd(s->u,139,4)>=64)?0:(rd(s->r,24,8)>>rd(s->u,139,4))));
L_1803e1dc7_4:;
wr(s->u,115,1,(rd(s->u,139,4)==((U)UINT64_C(0x0))));
L_1803e1dc7_5:;
wr(s->u,116,4,(rd(s->u,139,4)-((U)UINT64_C(0x1))));
L_1803e1dc7_6:;
wr(s->u,120,8,((rd(s->u,116,4)>=64)?0:(rd(s->u,143,8)>>rd(s->u,116,4))));
L_1803e1dc7_7:;
wr(s->u,128,8,(rd(s->u,120,8)&((U)UINT64_C(0x1))));
L_1803e1dc7_8:;
wr(s->u,136,1,(rd(s->u,128,8)!=((U)UINT64_C(0x0))));
L_1803e1dc7_9:;
wr(s->u,0,1,rd(s->u,115,1));
L_1803e1dc7_10:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803e1dc7_11:;
wr(s->u,2,1,(!rd(s->u,115,1)));
L_1803e1dc7_12:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803e1dc7_13:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,136,1)));
L_1803e1dc7_14:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803e1dc7_15:;
wr(s->u,137,1,(rd(s->u,139,4)==((U)UINT64_C(0x1))));
L_1803e1dc7_16:;
wr(s->u,138,1,(sx(rd(s->u,143,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1dc7_17:;
wr(s->u,0,1,rd(s->u,137,1));
L_1803e1dc7_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803e1dc7_19:;
wr(s->u,2,1,(!rd(s->u,137,1)));
L_1803e1dc7_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803e1dc7_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,138,1)));
L_1803e1dc7_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803e1dc7_23:;
wr(s->u,92,1,(rd(s->u,139,4)!=((U)UINT64_C(0x0))));
L_1803e1dc7_24:;
wr(s->u,93,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1dc7_25:;
wr(s->u,94,1,(!rd(s->u,92,1)));
L_1803e1dc7_26:;
wr(s->u,95,1,(rd(s->u,94,1)&rd(s->r,519,1)));
L_1803e1dc7_27:;
wr(s->u,96,1,(rd(s->u,92,1)&rd(s->u,93,1)));
L_1803e1dc7_28:;
wr(s->r,519,1,(rd(s->u,95,1)|rd(s->u,96,1)));
L_1803e1dc7_29:;
wr(s->u,97,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803e1dc7_30:;
wr(s->u,98,1,(!rd(s->u,92,1)));
L_1803e1dc7_31:;
wr(s->u,99,1,(rd(s->u,98,1)&rd(s->r,518,1)));
L_1803e1dc7_32:;
wr(s->u,100,1,(rd(s->u,92,1)&rd(s->u,97,1)));
L_1803e1dc7_33:;
wr(s->r,518,1,(rd(s->u,99,1)|rd(s->u,100,1)));
L_1803e1dc7_34:;
wr(s->u,101,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803e1dc7_35:;
wr(s->u,109,1,pop(rd(s->u,101,8),8));
L_1803e1dc7_36:;
wr(s->u,110,1,(rd(s->u,109,1)&((U)UINT64_C(0x1))));
L_1803e1dc7_37:;
wr(s->u,111,1,(rd(s->u,110,1)==((U)UINT64_C(0x0))));
L_1803e1dc7_38:;
wr(s->u,112,1,(!rd(s->u,92,1)));
L_1803e1dc7_39:;
wr(s->u,113,1,(rd(s->u,112,1)&rd(s->r,514,1)));
L_1803e1dc7_40:;
wr(s->u,114,1,(rd(s->u,92,1)&rd(s->u,111,1)));
L_1803e1dc7_41:;
wr(s->r,514,1,(rd(s->u,113,1)|rd(s->u,114,1)));
L_1803e1dc7_42:;
/* 1803e1dcb: cvtdq2ps xmm3, xmm3 */
L_1803e1dcb_0:;
L_1803e1dcb_1:;
wr(s->r,4800,4,fb((double)sx(rd(s->r,4800,4),4),4));
L_1803e1dcb_2:;
wr(s->r,4804,4,fb((double)sx(rd(s->r,4804,4),4),4));
L_1803e1dcb_3:;
wr(s->r,4808,4,fb((double)sx(rd(s->r,4808,4),4),4));
L_1803e1dcb_4:;
wr(s->r,4812,4,fb((double)sx(rd(s->r,4812,4),4),4));
L_1803e1dcb_5:;
/* 1803e1dce: sub eax, dword ptr [rsp + 0x60] */
L_1803e1dce_0:;
L_1803e1dce_1:;
wr(s->u,29,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803e1dce_2:;
wr(s->u,77,4,mr((uint64_t)rd(s->u,29,8),4));
L_1803e1dce_3:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->u,77,4)));
L_1803e1dce_4:;
wr(s->u,77,4,mr((uint64_t)rd(s->u,29,8),4));
L_1803e1dce_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->u,77,4),4,1));
L_1803e1dce_6:;
wr(s->u,77,4,mr((uint64_t)rd(s->u,29,8),4));
L_1803e1dce_7:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->u,77,4)));
L_1803e1dce_8:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1dce_9:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1dce_10:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803e1dce_11:;
wr(s->u,82,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803e1dce_12:;
wr(s->u,90,1,pop(rd(s->u,82,4),4));
L_1803e1dce_13:;
wr(s->u,91,1,(rd(s->u,90,1)&((U)UINT64_C(0x1))));
L_1803e1dce_14:;
wr(s->r,514,1,(rd(s->u,91,1)==((U)UINT64_C(0x0))));
L_1803e1dce_15:;
/* 1803e1dd2: inc rbx */
L_1803e1dd2_0:;
L_1803e1dd2_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x1)),8,0));
L_1803e1dd2_2:;
wr(s->r,24,8,(rd(s->r,24,8)+((U)UINT64_C(0x1))));
L_1803e1dd2_3:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1dd2_4:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803e1dd2_5:;
wr(s->u,82,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803e1dd2_6:;
wr(s->u,90,1,pop(rd(s->u,82,8),8));
L_1803e1dd2_7:;
wr(s->u,91,1,(rd(s->u,90,1)&((U)UINT64_C(0x1))));
L_1803e1dd2_8:;
wr(s->r,514,1,(rd(s->u,91,1)==((U)UINT64_C(0x0))));
L_1803e1dd2_9:;
/* 1803e1dd5: lea r8d, [rax + r15 + 2] */
L_1803e1dd5_0:;
L_1803e1dd5_1:;
wr(s->u,37,8,(((U)UINT64_C(0x2))+rd(s->r,0,8)));
L_1803e1dd5_2:;
wr(s->u,45,8,(rd(s->r,184,8)*((U)UINT64_C(0x1))));
L_1803e1dd5_3:;
wr(s->u,53,8,(rd(s->u,37,8)+rd(s->u,45,8)));
L_1803e1dd5_4:;
wr(s->r,128,4,(rd(s->u,53,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1dd5_5:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803e1dd5_6:;
/* 1803e1dda: lea r11d, [r11 + rbx*4] */
L_1803e1dda_0:;
L_1803e1dda_1:;
wr(s->u,13,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803e1dda_2:;
wr(s->u,21,8,(rd(s->r,152,8)+rd(s->u,13,8)));
L_1803e1dda_3:;
wr(s->r,152,4,(rd(s->u,21,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1dda_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803e1dda_5:;
/* 1803e1dde: lea r10, [r10 + rbx*4] */
L_1803e1dde_0:;
L_1803e1dde_1:;
wr(s->u,13,8,(rd(s->r,24,8)*((U)UINT64_C(0x4))));
L_1803e1dde_2:;
wr(s->u,21,8,(rd(s->r,144,8)+rd(s->u,13,8)));
L_1803e1dde_3:;
wr(s->r,144,8,rd(s->u,21,8));
L_1803e1dde_4:;
/* 1803e1de2: nop word ptr [rax + rax] */
L_1803e1de2_0:;
L_1803e1de2_1:;
wr(s->u,61,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803e1de2_2:;
wr(s->u,69,8,(rd(s->r,0,8)+rd(s->u,61,8)));
L_1803e1de2_3:;
/* 1803e1df0: lea eax, [r9 - 1] */
L_1803e1df0_0:;
L_1803e1df0_1:;
wr(s->u,5,8,(rd(s->r,136,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803e1df0_2:;
wr(s->r,0,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1df0_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1df0_4:;
/* 1803e1df4: lea edx, [r8 - 2] */
L_1803e1df4_0:;
L_1803e1df4_1:;
wr(s->u,5,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffffe))));
L_1803e1df4_2:;
wr(s->r,16,4,(rd(s->u,5,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1df4_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1df4_4:;
/* 1803e1df8: movd xmm1, eax */
L_1803e1df8_0:;
L_1803e1df8_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803e1df8_2:;
/* 1803e1dfc: cvtdq2ps xmm1, xmm1 */
L_1803e1dfc_0:;
L_1803e1dfc_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803e1dfc_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803e1dfc_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803e1dfc_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803e1dfc_5:;
/* 1803e1dff: divss xmm1, xmm3 */
L_1803e1dff_0:;
L_1803e1dff_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803e1dff_2:;
/* 1803e1e03: test edx, edx */
L_1803e1e03_0:;
L_1803e1e03_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1e03_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1e03_3:;
wr(s->u,151,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1e03_4:;
wr(s->r,519,1,(sx(rd(s->u,151,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1e03_5:;
wr(s->r,518,1,(rd(s->u,151,4)==((U)UINT64_C(0x0))));
L_1803e1e03_6:;
wr(s->u,82,4,(rd(s->u,151,4)&((U)UINT64_C(0xff))));
L_1803e1e03_7:;
wr(s->u,90,1,pop(rd(s->u,82,4),4));
L_1803e1e03_8:;
wr(s->u,91,1,(rd(s->u,90,1)&((U)UINT64_C(0x1))));
L_1803e1e03_9:;
wr(s->r,514,1,(rd(s->u,91,1)==((U)UINT64_C(0x0))));
L_1803e1e03_10:;
/* 1803e1e05: jns 0x1803e1e0c */
L_1803e1e05_0:;
L_1803e1e05_1:;
wr(s->u,81,1,(!rd(s->r,519,1)));
L_1803e1e05_2:;
if(rd(s->u,81,1)){return UINT64_C(0x1803e1e0c);}
L_1803e1e05_3:;
return UINT64_C(0x1803e1e07);
}
uint64_t b_1803e1df0(CPU*s){
/* 1803e1df0: lea eax, [r9 - 1] */
L_1803e1df0_0:;
L_1803e1df0_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803e1df0_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1df0_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1df0_4:;
/* 1803e1df4: lea edx, [r8 - 2] */
L_1803e1df4_0:;
L_1803e1df4_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xfffffffffffffffe))));
L_1803e1df4_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1df4_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1df4_4:;
/* 1803e1df8: movd xmm1, eax */
L_1803e1df8_0:;
L_1803e1df8_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803e1df8_2:;
/* 1803e1dfc: cvtdq2ps xmm1, xmm1 */
L_1803e1dfc_0:;
L_1803e1dfc_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803e1dfc_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803e1dfc_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803e1dfc_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803e1dfc_5:;
/* 1803e1dff: divss xmm1, xmm3 */
L_1803e1dff_0:;
L_1803e1dff_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803e1dff_2:;
/* 1803e1e03: test edx, edx */
L_1803e1e03_0:;
L_1803e1e03_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1e03_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1e03_3:;
wr(s->u,15,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1e03_4:;
wr(s->r,519,1,(sx(rd(s->u,15,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1e03_5:;
wr(s->r,518,1,(rd(s->u,15,4)==((U)UINT64_C(0x0))));
L_1803e1e03_6:;
wr(s->u,9,4,(rd(s->u,15,4)&((U)UINT64_C(0xff))));
L_1803e1e03_7:;
wr(s->u,13,1,pop(rd(s->u,9,4),4));
L_1803e1e03_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803e1e03_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803e1e03_10:;
/* 1803e1e05: jns 0x1803e1e0c */
L_1803e1e05_0:;
L_1803e1e05_1:;
wr(s->u,8,1,(!rd(s->r,519,1)));
L_1803e1e05_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803e1e0c);}
L_1803e1e05_3:;
return UINT64_C(0x1803e1e07);
}
uint64_t b_1803e1e07(CPU*s){
/* 1803e1e07: mov rax, rsi */
L_1803e1e07_0:;
L_1803e1e07_1:;
wr(s->r,0,8,rd(s->r,48,8));
L_1803e1e07_2:;
/* 1803e1e0a: jmp 0x1803e1e10 */
L_1803e1e0a_0:;
L_1803e1e0a_1:;
return UINT64_C(0x1803e1e10);
L_1803e1e0a_2:;
return UINT64_C(0x1803e1e0c);
}
uint64_t b_1803e1e0c(CPU*s){
/* 1803e1e0c: lea rax, [rcx - 2] */
L_1803e1e0c_0:;
L_1803e1e0c_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffe))));
L_1803e1e0c_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803e1e0c_3:;
/* 1803e1e10: movaps xmm0, xmm1 */
L_1803e1e10_0:;
L_1803e1e10_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803e1e10_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803e1e10_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803e1e10_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803e1e10_5:;
/* 1803e1e13: mulss xmm0, dword ptr [rdi + rax*4] */
L_1803e1e13_0:;
L_1803e1e13_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e13_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803e1e13_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803e1e13_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,24,4),4),4));
L_1803e1e13_5:;
/* 1803e1e18: movss dword ptr [rdi + rax*4], xmm0 */
L_1803e1e18_0:;
L_1803e1e18_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e18_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803e1e18_3:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803e1e18_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803e1e18_5:;
/* 1803e1e1d: test edx, edx */
L_1803e1e1d_0:;
L_1803e1e1d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1e1d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1e1d_3:;
wr(s->u,35,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1e1d_4:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1e1d_5:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803e1e1d_6:;
wr(s->u,29,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803e1e1d_7:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803e1e1d_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803e1e1d_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803e1e1d_10:;
/* 1803e1e1f: jns 0x1803e1e26 */
L_1803e1e1f_0:;
L_1803e1e1f_1:;
wr(s->u,28,1,(!rd(s->r,519,1)));
L_1803e1e1f_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803e1e26);}
L_1803e1e1f_3:;
return UINT64_C(0x1803e1e21);
}
uint64_t b_1803e1e10(CPU*s){
/* 1803e1e10: movaps xmm0, xmm1 */
L_1803e1e10_0:;
L_1803e1e10_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803e1e10_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803e1e10_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803e1e10_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803e1e10_5:;
/* 1803e1e13: mulss xmm0, dword ptr [rdi + rax*4] */
L_1803e1e13_0:;
L_1803e1e13_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e13_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1e13_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803e1e13_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803e1e13_5:;
/* 1803e1e18: movss dword ptr [rdi + rax*4], xmm0 */
L_1803e1e18_0:;
L_1803e1e18_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e18_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1e18_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803e1e18_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803e1e18_5:;
/* 1803e1e1d: test edx, edx */
L_1803e1e1d_0:;
L_1803e1e1d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1e1d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1e1d_3:;
wr(s->u,27,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1e1d_4:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1e1d_5:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803e1e1d_6:;
wr(s->u,21,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803e1e1d_7:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803e1e1d_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803e1e1d_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803e1e1d_10:;
/* 1803e1e1f: jns 0x1803e1e26 */
L_1803e1e1f_0:;
L_1803e1e1f_1:;
wr(s->u,20,1,(!rd(s->r,519,1)));
L_1803e1e1f_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803e1e26);}
L_1803e1e1f_3:;
return UINT64_C(0x1803e1e21);
}
uint64_t b_1803e1e21(CPU*s){
/* 1803e1e21: mov rax, rsi */
L_1803e1e21_0:;
L_1803e1e21_1:;
wr(s->r,0,8,rd(s->r,48,8));
L_1803e1e21_2:;
/* 1803e1e24: jmp 0x1803e1e2a */
L_1803e1e24_0:;
L_1803e1e24_1:;
return UINT64_C(0x1803e1e2a);
L_1803e1e24_2:;
return UINT64_C(0x1803e1e26);
}
uint64_t b_1803e1e26(CPU*s){
/* 1803e1e26: lea rax, [rcx - 2] */
L_1803e1e26_0:;
L_1803e1e26_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xfffffffffffffffe))));
L_1803e1e26_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803e1e26_3:;
/* 1803e1e2a: mulss xmm1, dword ptr [rbp + rax*4] */
L_1803e1e2a_0:;
L_1803e1e2a_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e2a_2:;
wr(s->u,16,8,(rd(s->r,40,8)+rd(s->u,8,8)));
L_1803e1e2a_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803e1e2a_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,24,4),4),4));
L_1803e1e2a_5:;
/* 1803e1e30: movd xmm2, r9d */
L_1803e1e30_0:;
L_1803e1e30_1:;
wr(s->r,4736,16,rd(s->r,136,4));
L_1803e1e30_2:;
/* 1803e1e35: lea edx, [r8 - 1] */
L_1803e1e35_0:;
L_1803e1e35_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803e1e35_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1e35_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1e35_4:;
/* 1803e1e39: movss dword ptr [rbp + rax*4], xmm1 */
L_1803e1e39_0:;
L_1803e1e39_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e39_2:;
wr(s->u,16,8,(rd(s->r,40,8)+rd(s->u,8,8)));
L_1803e1e39_3:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803e1e39_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803e1e39_5:;
/* 1803e1e3f: cvtdq2ps xmm2, xmm2 */
L_1803e1e3f_0:;
L_1803e1e3f_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803e1e3f_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803e1e3f_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803e1e3f_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803e1e3f_5:;
/* 1803e1e42: divss xmm2, xmm3 */
L_1803e1e42_0:;
L_1803e1e42_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803e1e42_2:;
/* 1803e1e46: test edx, edx */
L_1803e1e46_0:;
L_1803e1e46_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1e46_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1e46_3:;
wr(s->u,35,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1e46_4:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1e46_5:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803e1e46_6:;
wr(s->u,29,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803e1e46_7:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803e1e46_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803e1e46_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803e1e46_10:;
/* 1803e1e48: jns 0x1803e1e4f */
L_1803e1e48_0:;
L_1803e1e48_1:;
wr(s->u,28,1,(!rd(s->r,519,1)));
L_1803e1e48_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803e1e4f);}
L_1803e1e48_3:;
return UINT64_C(0x1803e1e4a);
}
uint64_t b_1803e1e2a(CPU*s){
/* 1803e1e2a: mulss xmm1, dword ptr [rbp + rax*4] */
L_1803e1e2a_0:;
L_1803e1e2a_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e2a_2:;
wr(s->u,16,8,(rd(s->r,40,8)+rd(s->u,8,8)));
L_1803e1e2a_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803e1e2a_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,24,4),4),4));
L_1803e1e2a_5:;
/* 1803e1e30: movd xmm2, r9d */
L_1803e1e30_0:;
L_1803e1e30_1:;
wr(s->r,4736,16,rd(s->r,136,4));
L_1803e1e30_2:;
/* 1803e1e35: lea edx, [r8 - 1] */
L_1803e1e35_0:;
L_1803e1e35_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803e1e35_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1e35_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1e35_4:;
/* 1803e1e39: movss dword ptr [rbp + rax*4], xmm1 */
L_1803e1e39_0:;
L_1803e1e39_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e39_2:;
wr(s->u,16,8,(rd(s->r,40,8)+rd(s->u,8,8)));
L_1803e1e39_3:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803e1e39_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803e1e39_5:;
/* 1803e1e3f: cvtdq2ps xmm2, xmm2 */
L_1803e1e3f_0:;
L_1803e1e3f_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803e1e3f_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803e1e3f_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803e1e3f_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803e1e3f_5:;
/* 1803e1e42: divss xmm2, xmm3 */
L_1803e1e42_0:;
L_1803e1e42_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803e1e42_2:;
/* 1803e1e46: test edx, edx */
L_1803e1e46_0:;
L_1803e1e46_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1e46_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1e46_3:;
wr(s->u,35,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1e46_4:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1e46_5:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803e1e46_6:;
wr(s->u,29,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803e1e46_7:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803e1e46_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803e1e46_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803e1e46_10:;
/* 1803e1e48: jns 0x1803e1e4f */
L_1803e1e48_0:;
L_1803e1e48_1:;
wr(s->u,28,1,(!rd(s->r,519,1)));
L_1803e1e48_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803e1e4f);}
L_1803e1e48_3:;
return UINT64_C(0x1803e1e4a);
}
uint64_t b_1803e1e4a(CPU*s){
/* 1803e1e4a: mov rax, rsi */
L_1803e1e4a_0:;
L_1803e1e4a_1:;
wr(s->r,0,8,rd(s->r,48,8));
L_1803e1e4a_2:;
/* 1803e1e4d: jmp 0x1803e1e53 */
L_1803e1e4d_0:;
L_1803e1e4d_1:;
return UINT64_C(0x1803e1e53);
L_1803e1e4d_2:;
return UINT64_C(0x1803e1e4f);
}
uint64_t b_1803e1e4f(CPU*s){
/* 1803e1e4f: lea rax, [rcx - 1] */
L_1803e1e4f_0:;
L_1803e1e4f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803e1e4f_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803e1e4f_3:;
/* 1803e1e53: movaps xmm0, xmm2 */
L_1803e1e53_0:;
L_1803e1e53_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803e1e53_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803e1e53_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803e1e53_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803e1e53_5:;
/* 1803e1e56: mulss xmm0, dword ptr [rdi + rax*4] */
L_1803e1e56_0:;
L_1803e1e56_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e56_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803e1e56_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803e1e56_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,24,4),4),4));
L_1803e1e56_5:;
/* 1803e1e5b: movss dword ptr [rdi + rax*4], xmm0 */
L_1803e1e5b_0:;
L_1803e1e5b_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e5b_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803e1e5b_3:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803e1e5b_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803e1e5b_5:;
/* 1803e1e60: test edx, edx */
L_1803e1e60_0:;
L_1803e1e60_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1e60_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1e60_3:;
wr(s->u,35,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1e60_4:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1e60_5:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803e1e60_6:;
wr(s->u,29,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803e1e60_7:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803e1e60_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803e1e60_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803e1e60_10:;
/* 1803e1e62: jns 0x1803e1e69 */
L_1803e1e62_0:;
L_1803e1e62_1:;
wr(s->u,28,1,(!rd(s->r,519,1)));
L_1803e1e62_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803e1e69);}
L_1803e1e62_3:;
return UINT64_C(0x1803e1e64);
}
uint64_t b_1803e1e53(CPU*s){
/* 1803e1e53: movaps xmm0, xmm2 */
L_1803e1e53_0:;
L_1803e1e53_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803e1e53_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803e1e53_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803e1e53_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803e1e53_5:;
/* 1803e1e56: mulss xmm0, dword ptr [rdi + rax*4] */
L_1803e1e56_0:;
L_1803e1e56_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e56_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1e56_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803e1e56_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803e1e56_5:;
/* 1803e1e5b: movss dword ptr [rdi + rax*4], xmm0 */
L_1803e1e5b_0:;
L_1803e1e5b_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e5b_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1e5b_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803e1e5b_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803e1e5b_5:;
/* 1803e1e60: test edx, edx */
L_1803e1e60_0:;
L_1803e1e60_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1e60_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1e60_3:;
wr(s->u,27,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1e60_4:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1e60_5:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803e1e60_6:;
wr(s->u,21,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803e1e60_7:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803e1e60_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803e1e60_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803e1e60_10:;
/* 1803e1e62: jns 0x1803e1e69 */
L_1803e1e62_0:;
L_1803e1e62_1:;
wr(s->u,20,1,(!rd(s->r,519,1)));
L_1803e1e62_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803e1e69);}
L_1803e1e62_3:;
return UINT64_C(0x1803e1e64);
}
uint64_t b_1803e1e64(CPU*s){
/* 1803e1e64: mov rax, rsi */
L_1803e1e64_0:;
L_1803e1e64_1:;
wr(s->r,0,8,rd(s->r,48,8));
L_1803e1e64_2:;
/* 1803e1e67: jmp 0x1803e1e6d */
L_1803e1e67_0:;
L_1803e1e67_1:;
return UINT64_C(0x1803e1e6d);
L_1803e1e67_2:;
return UINT64_C(0x1803e1e69);
}
uint64_t b_1803e1e69(CPU*s){
/* 1803e1e69: lea rax, [rcx - 1] */
L_1803e1e69_0:;
L_1803e1e69_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803e1e69_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803e1e69_3:;
/* 1803e1e6d: mulss xmm2, dword ptr [rbp + rax*4] */
L_1803e1e6d_0:;
L_1803e1e6d_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e6d_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803e1e6d_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803e1e6d_4:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,40,4),4),4));
L_1803e1e6d_5:;
/* 1803e1e73: test r8d, r8d */
L_1803e1e73_0:;
L_1803e1e73_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1e73_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1e73_3:;
wr(s->u,60,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803e1e73_4:;
wr(s->r,519,1,(sx(rd(s->u,60,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1e73_5:;
wr(s->r,518,1,(rd(s->u,60,4)==((U)UINT64_C(0x0))));
L_1803e1e73_6:;
wr(s->u,45,4,(rd(s->u,60,4)&((U)UINT64_C(0xff))));
L_1803e1e73_7:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803e1e73_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803e1e73_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803e1e73_10:;
/* 1803e1e76: lea edx, [r8 + 1] */
L_1803e1e76_0:;
L_1803e1e76_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x1))));
L_1803e1e76_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1e76_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1e76_4:;
/* 1803e1e7a: movss dword ptr [rbp + rax*4], xmm2 */
L_1803e1e7a_0:;
L_1803e1e7a_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e7a_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803e1e7a_3:;
wr(s->u,40,4,rd(s->r,4736,4));
L_1803e1e7a_4:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803e1e7a_5:;
/* 1803e1e80: lea eax, [r9 + 1] */
L_1803e1e80_0:;
L_1803e1e80_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x1))));
L_1803e1e80_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1e80_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1e80_4:;
/* 1803e1e84: movd xmm1, eax */
L_1803e1e84_0:;
L_1803e1e84_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803e1e84_2:;
/* 1803e1e88: mov rax, rcx */
L_1803e1e88_0:;
L_1803e1e88_1:;
wr(s->r,0,8,rd(s->r,8,8));
L_1803e1e88_2:;
/* 1803e1e8b: cmovs rax, rsi */
L_1803e1e8b_0:;
L_1803e1e8b_1:;
wr(s->u,51,8,rd(s->r,48,8));
L_1803e1e8b_2:;
wr(s->u,59,1,(!rd(s->r,519,1)));
L_1803e1e8b_3:;
if(rd(s->u,59,1)){goto L_1803e1e8f_0;}
L_1803e1e8b_4:;
wr(s->r,0,8,rd(s->u,51,8));
L_1803e1e8b_5:;
/* 1803e1e8f: test r8d, r8d */
L_1803e1e8f_0:;
L_1803e1e8f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1e8f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1e8f_3:;
wr(s->u,60,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803e1e8f_4:;
wr(s->r,519,1,(sx(rd(s->u,60,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1e8f_5:;
wr(s->r,518,1,(rd(s->u,60,4)==((U)UINT64_C(0x0))));
L_1803e1e8f_6:;
wr(s->u,45,4,(rd(s->u,60,4)&((U)UINT64_C(0xff))));
L_1803e1e8f_7:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803e1e8f_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803e1e8f_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803e1e8f_10:;
/* 1803e1e92: cvtdq2ps xmm1, xmm1 */
L_1803e1e92_0:;
L_1803e1e92_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803e1e92_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803e1e92_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803e1e92_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803e1e92_5:;
/* 1803e1e95: divss xmm1, xmm3 */
L_1803e1e95_0:;
L_1803e1e95_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803e1e95_2:;
/* 1803e1e99: movaps xmm0, xmm1 */
L_1803e1e99_0:;
L_1803e1e99_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803e1e99_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803e1e99_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803e1e99_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803e1e99_5:;
/* 1803e1e9c: mulss xmm0, dword ptr [rdi + rax*4] */
L_1803e1e9c_0:;
L_1803e1e9c_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e9c_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803e1e9c_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803e1e9c_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,40,4),4),4));
L_1803e1e9c_5:;
/* 1803e1ea1: movss dword ptr [rdi + rax*4], xmm0 */
L_1803e1ea1_0:;
L_1803e1ea1_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1ea1_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803e1ea1_3:;
wr(s->u,40,4,rd(s->r,4608,4));
L_1803e1ea1_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,40,4));
L_1803e1ea1_5:;
/* 1803e1ea6: mov rax, rcx */
L_1803e1ea6_0:;
L_1803e1ea6_1:;
wr(s->r,0,8,rd(s->r,8,8));
L_1803e1ea6_2:;
/* 1803e1ea9: cmovs rax, rsi */
L_1803e1ea9_0:;
L_1803e1ea9_1:;
wr(s->u,51,8,rd(s->r,48,8));
L_1803e1ea9_2:;
wr(s->u,59,1,(!rd(s->r,519,1)));
L_1803e1ea9_3:;
if(rd(s->u,59,1)){goto L_1803e1ead_0;}
L_1803e1ea9_4:;
wr(s->r,0,8,rd(s->u,51,8));
L_1803e1ea9_5:;
/* 1803e1ead: mulss xmm1, dword ptr [rbp + rax*4] */
L_1803e1ead_0:;
L_1803e1ead_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1ead_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803e1ead_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803e1ead_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,40,4),4),4));
L_1803e1ead_5:;
/* 1803e1eb3: movss dword ptr [rbp + rax*4], xmm1 */
L_1803e1eb3_0:;
L_1803e1eb3_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1eb3_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803e1eb3_3:;
wr(s->u,40,4,rd(s->r,4672,4));
L_1803e1eb3_4:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803e1eb3_5:;
/* 1803e1eb9: lea eax, [r9 + 2] */
L_1803e1eb9_0:;
L_1803e1eb9_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x2))));
L_1803e1eb9_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1eb9_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1eb9_4:;
/* 1803e1ebd: movd xmm2, eax */
L_1803e1ebd_0:;
L_1803e1ebd_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803e1ebd_2:;
/* 1803e1ec1: cvtdq2ps xmm2, xmm2 */
L_1803e1ec1_0:;
L_1803e1ec1_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803e1ec1_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803e1ec1_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803e1ec1_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803e1ec1_5:;
/* 1803e1ec4: divss xmm2, xmm3 */
L_1803e1ec4_0:;
L_1803e1ec4_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803e1ec4_2:;
/* 1803e1ec8: test edx, edx */
L_1803e1ec8_0:;
L_1803e1ec8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1ec8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1ec8_3:;
wr(s->u,60,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1ec8_4:;
wr(s->r,519,1,(sx(rd(s->u,60,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1ec8_5:;
wr(s->r,518,1,(rd(s->u,60,4)==((U)UINT64_C(0x0))));
L_1803e1ec8_6:;
wr(s->u,45,4,(rd(s->u,60,4)&((U)UINT64_C(0xff))));
L_1803e1ec8_7:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803e1ec8_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803e1ec8_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803e1ec8_10:;
/* 1803e1eca: jns 0x1803e1ed1 */
L_1803e1eca_0:;
L_1803e1eca_1:;
wr(s->u,44,1,(!rd(s->r,519,1)));
L_1803e1eca_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803e1ed1);}
L_1803e1eca_3:;
return UINT64_C(0x1803e1ecc);
}
uint64_t b_1803e1e6d(CPU*s){
/* 1803e1e6d: mulss xmm2, dword ptr [rbp + rax*4] */
L_1803e1e6d_0:;
L_1803e1e6d_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e6d_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803e1e6d_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803e1e6d_4:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,40,4),4),4));
L_1803e1e6d_5:;
/* 1803e1e73: test r8d, r8d */
L_1803e1e73_0:;
L_1803e1e73_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1e73_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1e73_3:;
wr(s->u,60,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803e1e73_4:;
wr(s->r,519,1,(sx(rd(s->u,60,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1e73_5:;
wr(s->r,518,1,(rd(s->u,60,4)==((U)UINT64_C(0x0))));
L_1803e1e73_6:;
wr(s->u,45,4,(rd(s->u,60,4)&((U)UINT64_C(0xff))));
L_1803e1e73_7:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803e1e73_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803e1e73_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803e1e73_10:;
/* 1803e1e76: lea edx, [r8 + 1] */
L_1803e1e76_0:;
L_1803e1e76_1:;
wr(s->u,0,8,(rd(s->r,128,8)+((U)UINT64_C(0x1))));
L_1803e1e76_2:;
wr(s->r,16,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1e76_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1e76_4:;
/* 1803e1e7a: movss dword ptr [rbp + rax*4], xmm2 */
L_1803e1e7a_0:;
L_1803e1e7a_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e7a_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803e1e7a_3:;
wr(s->u,40,4,rd(s->r,4736,4));
L_1803e1e7a_4:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803e1e7a_5:;
/* 1803e1e80: lea eax, [r9 + 1] */
L_1803e1e80_0:;
L_1803e1e80_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x1))));
L_1803e1e80_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1e80_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1e80_4:;
/* 1803e1e84: movd xmm1, eax */
L_1803e1e84_0:;
L_1803e1e84_1:;
wr(s->r,4672,16,rd(s->r,0,4));
L_1803e1e84_2:;
/* 1803e1e88: mov rax, rcx */
L_1803e1e88_0:;
L_1803e1e88_1:;
wr(s->r,0,8,rd(s->r,8,8));
L_1803e1e88_2:;
/* 1803e1e8b: cmovs rax, rsi */
L_1803e1e8b_0:;
L_1803e1e8b_1:;
wr(s->u,51,8,rd(s->r,48,8));
L_1803e1e8b_2:;
wr(s->u,59,1,(!rd(s->r,519,1)));
L_1803e1e8b_3:;
if(rd(s->u,59,1)){goto L_1803e1e8f_0;}
L_1803e1e8b_4:;
wr(s->r,0,8,rd(s->u,51,8));
L_1803e1e8b_5:;
/* 1803e1e8f: test r8d, r8d */
L_1803e1e8f_0:;
L_1803e1e8f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1e8f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1e8f_3:;
wr(s->u,60,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803e1e8f_4:;
wr(s->r,519,1,(sx(rd(s->u,60,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1e8f_5:;
wr(s->r,518,1,(rd(s->u,60,4)==((U)UINT64_C(0x0))));
L_1803e1e8f_6:;
wr(s->u,45,4,(rd(s->u,60,4)&((U)UINT64_C(0xff))));
L_1803e1e8f_7:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803e1e8f_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803e1e8f_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803e1e8f_10:;
/* 1803e1e92: cvtdq2ps xmm1, xmm1 */
L_1803e1e92_0:;
L_1803e1e92_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803e1e92_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803e1e92_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803e1e92_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803e1e92_5:;
/* 1803e1e95: divss xmm1, xmm3 */
L_1803e1e95_0:;
L_1803e1e95_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803e1e95_2:;
/* 1803e1e99: movaps xmm0, xmm1 */
L_1803e1e99_0:;
L_1803e1e99_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803e1e99_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803e1e99_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803e1e99_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803e1e99_5:;
/* 1803e1e9c: mulss xmm0, dword ptr [rdi + rax*4] */
L_1803e1e9c_0:;
L_1803e1e9c_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e9c_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803e1e9c_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803e1e9c_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,40,4),4),4));
L_1803e1e9c_5:;
/* 1803e1ea1: movss dword ptr [rdi + rax*4], xmm0 */
L_1803e1ea1_0:;
L_1803e1ea1_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1ea1_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803e1ea1_3:;
wr(s->u,40,4,rd(s->r,4608,4));
L_1803e1ea1_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,40,4));
L_1803e1ea1_5:;
/* 1803e1ea6: mov rax, rcx */
L_1803e1ea6_0:;
L_1803e1ea6_1:;
wr(s->r,0,8,rd(s->r,8,8));
L_1803e1ea6_2:;
/* 1803e1ea9: cmovs rax, rsi */
L_1803e1ea9_0:;
L_1803e1ea9_1:;
wr(s->u,51,8,rd(s->r,48,8));
L_1803e1ea9_2:;
wr(s->u,59,1,(!rd(s->r,519,1)));
L_1803e1ea9_3:;
if(rd(s->u,59,1)){goto L_1803e1ead_0;}
L_1803e1ea9_4:;
wr(s->r,0,8,rd(s->u,51,8));
L_1803e1ea9_5:;
/* 1803e1ead: mulss xmm1, dword ptr [rbp + rax*4] */
L_1803e1ead_0:;
L_1803e1ead_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1ead_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803e1ead_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803e1ead_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,40,4),4),4));
L_1803e1ead_5:;
/* 1803e1eb3: movss dword ptr [rbp + rax*4], xmm1 */
L_1803e1eb3_0:;
L_1803e1eb3_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1eb3_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803e1eb3_3:;
wr(s->u,40,4,rd(s->r,4672,4));
L_1803e1eb3_4:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803e1eb3_5:;
/* 1803e1eb9: lea eax, [r9 + 2] */
L_1803e1eb9_0:;
L_1803e1eb9_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x2))));
L_1803e1eb9_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1eb9_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1eb9_4:;
/* 1803e1ebd: movd xmm2, eax */
L_1803e1ebd_0:;
L_1803e1ebd_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803e1ebd_2:;
/* 1803e1ec1: cvtdq2ps xmm2, xmm2 */
L_1803e1ec1_0:;
L_1803e1ec1_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803e1ec1_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803e1ec1_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803e1ec1_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803e1ec1_5:;
/* 1803e1ec4: divss xmm2, xmm3 */
L_1803e1ec4_0:;
L_1803e1ec4_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803e1ec4_2:;
/* 1803e1ec8: test edx, edx */
L_1803e1ec8_0:;
L_1803e1ec8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1ec8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1ec8_3:;
wr(s->u,60,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1ec8_4:;
wr(s->r,519,1,(sx(rd(s->u,60,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1ec8_5:;
wr(s->r,518,1,(rd(s->u,60,4)==((U)UINT64_C(0x0))));
L_1803e1ec8_6:;
wr(s->u,45,4,(rd(s->u,60,4)&((U)UINT64_C(0xff))));
L_1803e1ec8_7:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803e1ec8_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803e1ec8_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803e1ec8_10:;
/* 1803e1eca: jns 0x1803e1ed1 */
L_1803e1eca_0:;
L_1803e1eca_1:;
wr(s->u,44,1,(!rd(s->r,519,1)));
L_1803e1eca_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803e1ed1);}
L_1803e1eca_3:;
return UINT64_C(0x1803e1ecc);
}
uint64_t b_1803e1e8f(CPU*s){
/* 1803e1e8f: test r8d, r8d */
L_1803e1e8f_0:;
L_1803e1e8f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1e8f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1e8f_3:;
wr(s->u,60,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803e1e8f_4:;
wr(s->r,519,1,(sx(rd(s->u,60,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1e8f_5:;
wr(s->r,518,1,(rd(s->u,60,4)==((U)UINT64_C(0x0))));
L_1803e1e8f_6:;
wr(s->u,45,4,(rd(s->u,60,4)&((U)UINT64_C(0xff))));
L_1803e1e8f_7:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803e1e8f_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803e1e8f_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803e1e8f_10:;
/* 1803e1e92: cvtdq2ps xmm1, xmm1 */
L_1803e1e92_0:;
L_1803e1e92_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803e1e92_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803e1e92_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803e1e92_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803e1e92_5:;
/* 1803e1e95: divss xmm1, xmm3 */
L_1803e1e95_0:;
L_1803e1e95_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803e1e95_2:;
/* 1803e1e99: movaps xmm0, xmm1 */
L_1803e1e99_0:;
L_1803e1e99_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803e1e99_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803e1e99_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803e1e99_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803e1e99_5:;
/* 1803e1e9c: mulss xmm0, dword ptr [rdi + rax*4] */
L_1803e1e9c_0:;
L_1803e1e9c_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1e9c_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803e1e9c_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803e1e9c_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,40,4),4),4));
L_1803e1e9c_5:;
/* 1803e1ea1: movss dword ptr [rdi + rax*4], xmm0 */
L_1803e1ea1_0:;
L_1803e1ea1_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1ea1_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803e1ea1_3:;
wr(s->u,40,4,rd(s->r,4608,4));
L_1803e1ea1_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,40,4));
L_1803e1ea1_5:;
/* 1803e1ea6: mov rax, rcx */
L_1803e1ea6_0:;
L_1803e1ea6_1:;
wr(s->r,0,8,rd(s->r,8,8));
L_1803e1ea6_2:;
/* 1803e1ea9: cmovs rax, rsi */
L_1803e1ea9_0:;
L_1803e1ea9_1:;
wr(s->u,51,8,rd(s->r,48,8));
L_1803e1ea9_2:;
wr(s->u,59,1,(!rd(s->r,519,1)));
L_1803e1ea9_3:;
if(rd(s->u,59,1)){goto L_1803e1ead_0;}
L_1803e1ea9_4:;
wr(s->r,0,8,rd(s->u,51,8));
L_1803e1ea9_5:;
/* 1803e1ead: mulss xmm1, dword ptr [rbp + rax*4] */
L_1803e1ead_0:;
L_1803e1ead_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1ead_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803e1ead_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803e1ead_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,40,4),4),4));
L_1803e1ead_5:;
/* 1803e1eb3: movss dword ptr [rbp + rax*4], xmm1 */
L_1803e1eb3_0:;
L_1803e1eb3_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1eb3_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803e1eb3_3:;
wr(s->u,40,4,rd(s->r,4672,4));
L_1803e1eb3_4:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803e1eb3_5:;
/* 1803e1eb9: lea eax, [r9 + 2] */
L_1803e1eb9_0:;
L_1803e1eb9_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x2))));
L_1803e1eb9_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1eb9_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1eb9_4:;
/* 1803e1ebd: movd xmm2, eax */
L_1803e1ebd_0:;
L_1803e1ebd_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803e1ebd_2:;
/* 1803e1ec1: cvtdq2ps xmm2, xmm2 */
L_1803e1ec1_0:;
L_1803e1ec1_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803e1ec1_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803e1ec1_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803e1ec1_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803e1ec1_5:;
/* 1803e1ec4: divss xmm2, xmm3 */
L_1803e1ec4_0:;
L_1803e1ec4_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803e1ec4_2:;
/* 1803e1ec8: test edx, edx */
L_1803e1ec8_0:;
L_1803e1ec8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1ec8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1ec8_3:;
wr(s->u,60,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1ec8_4:;
wr(s->r,519,1,(sx(rd(s->u,60,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1ec8_5:;
wr(s->r,518,1,(rd(s->u,60,4)==((U)UINT64_C(0x0))));
L_1803e1ec8_6:;
wr(s->u,45,4,(rd(s->u,60,4)&((U)UINT64_C(0xff))));
L_1803e1ec8_7:;
wr(s->u,49,1,pop(rd(s->u,45,4),4));
L_1803e1ec8_8:;
wr(s->u,50,1,(rd(s->u,49,1)&((U)UINT64_C(0x1))));
L_1803e1ec8_9:;
wr(s->r,514,1,(rd(s->u,50,1)==((U)UINT64_C(0x0))));
L_1803e1ec8_10:;
/* 1803e1eca: jns 0x1803e1ed1 */
L_1803e1eca_0:;
L_1803e1eca_1:;
wr(s->u,44,1,(!rd(s->r,519,1)));
L_1803e1eca_2:;
if(rd(s->u,44,1)){return UINT64_C(0x1803e1ed1);}
L_1803e1eca_3:;
return UINT64_C(0x1803e1ecc);
}
uint64_t b_1803e1ead(CPU*s){
/* 1803e1ead: mulss xmm1, dword ptr [rbp + rax*4] */
L_1803e1ead_0:;
L_1803e1ead_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1ead_2:;
wr(s->u,16,8,(rd(s->r,40,8)+rd(s->u,8,8)));
L_1803e1ead_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803e1ead_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,24,4),4),4));
L_1803e1ead_5:;
/* 1803e1eb3: movss dword ptr [rbp + rax*4], xmm1 */
L_1803e1eb3_0:;
L_1803e1eb3_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1eb3_2:;
wr(s->u,16,8,(rd(s->r,40,8)+rd(s->u,8,8)));
L_1803e1eb3_3:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803e1eb3_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803e1eb3_5:;
/* 1803e1eb9: lea eax, [r9 + 2] */
L_1803e1eb9_0:;
L_1803e1eb9_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x2))));
L_1803e1eb9_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1eb9_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1eb9_4:;
/* 1803e1ebd: movd xmm2, eax */
L_1803e1ebd_0:;
L_1803e1ebd_1:;
wr(s->r,4736,16,rd(s->r,0,4));
L_1803e1ebd_2:;
/* 1803e1ec1: cvtdq2ps xmm2, xmm2 */
L_1803e1ec1_0:;
L_1803e1ec1_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803e1ec1_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803e1ec1_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803e1ec1_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803e1ec1_5:;
/* 1803e1ec4: divss xmm2, xmm3 */
L_1803e1ec4_0:;
L_1803e1ec4_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)/fv(rd(s->r,4800,4),4),4));
L_1803e1ec4_2:;
/* 1803e1ec8: test edx, edx */
L_1803e1ec8_0:;
L_1803e1ec8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1ec8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1ec8_3:;
wr(s->u,35,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1ec8_4:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1ec8_5:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803e1ec8_6:;
wr(s->u,29,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803e1ec8_7:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803e1ec8_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803e1ec8_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803e1ec8_10:;
/* 1803e1eca: jns 0x1803e1ed1 */
L_1803e1eca_0:;
L_1803e1eca_1:;
wr(s->u,28,1,(!rd(s->r,519,1)));
L_1803e1eca_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803e1ed1);}
L_1803e1eca_3:;
return UINT64_C(0x1803e1ecc);
}
uint64_t b_1803e1ecc(CPU*s){
/* 1803e1ecc: mov rax, rsi */
L_1803e1ecc_0:;
L_1803e1ecc_1:;
wr(s->r,0,8,rd(s->r,48,8));
L_1803e1ecc_2:;
/* 1803e1ecf: jmp 0x1803e1ed5 */
L_1803e1ecf_0:;
L_1803e1ecf_1:;
return UINT64_C(0x1803e1ed5);
L_1803e1ecf_2:;
return UINT64_C(0x1803e1ed1);
}
uint64_t b_1803e1ed1(CPU*s){
/* 1803e1ed1: lea rax, [rcx + 1] */
L_1803e1ed1_0:;
L_1803e1ed1_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803e1ed1_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803e1ed1_3:;
/* 1803e1ed5: movaps xmm0, xmm2 */
L_1803e1ed5_0:;
L_1803e1ed5_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803e1ed5_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803e1ed5_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803e1ed5_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803e1ed5_5:;
/* 1803e1ed8: mulss xmm0, dword ptr [rdi + rax*4] */
L_1803e1ed8_0:;
L_1803e1ed8_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1ed8_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803e1ed8_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803e1ed8_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,24,4),4),4));
L_1803e1ed8_5:;
/* 1803e1edd: movss dword ptr [rdi + rax*4], xmm0 */
L_1803e1edd_0:;
L_1803e1edd_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1edd_2:;
wr(s->u,16,8,(rd(s->r,56,8)+rd(s->u,8,8)));
L_1803e1edd_3:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803e1edd_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803e1edd_5:;
/* 1803e1ee2: test edx, edx */
L_1803e1ee2_0:;
L_1803e1ee2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1ee2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1ee2_3:;
wr(s->u,35,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1ee2_4:;
wr(s->r,519,1,(sx(rd(s->u,35,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1ee2_5:;
wr(s->r,518,1,(rd(s->u,35,4)==((U)UINT64_C(0x0))));
L_1803e1ee2_6:;
wr(s->u,29,4,(rd(s->u,35,4)&((U)UINT64_C(0xff))));
L_1803e1ee2_7:;
wr(s->u,33,1,pop(rd(s->u,29,4),4));
L_1803e1ee2_8:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803e1ee2_9:;
wr(s->r,514,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803e1ee2_10:;
/* 1803e1ee4: jns 0x1803e1eeb */
L_1803e1ee4_0:;
L_1803e1ee4_1:;
wr(s->u,28,1,(!rd(s->r,519,1)));
L_1803e1ee4_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803e1eeb);}
L_1803e1ee4_3:;
return UINT64_C(0x1803e1ee6);
}
uint64_t b_1803e1ed5(CPU*s){
/* 1803e1ed5: movaps xmm0, xmm2 */
L_1803e1ed5_0:;
L_1803e1ed5_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803e1ed5_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803e1ed5_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803e1ed5_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803e1ed5_5:;
/* 1803e1ed8: mulss xmm0, dword ptr [rdi + rax*4] */
L_1803e1ed8_0:;
L_1803e1ed8_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1ed8_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1ed8_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803e1ed8_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803e1ed8_5:;
/* 1803e1edd: movss dword ptr [rdi + rax*4], xmm0 */
L_1803e1edd_0:;
L_1803e1edd_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1edd_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1edd_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803e1edd_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803e1edd_5:;
/* 1803e1ee2: test edx, edx */
L_1803e1ee2_0:;
L_1803e1ee2_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1ee2_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1ee2_3:;
wr(s->u,27,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803e1ee2_4:;
wr(s->r,519,1,(sx(rd(s->u,27,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1ee2_5:;
wr(s->r,518,1,(rd(s->u,27,4)==((U)UINT64_C(0x0))));
L_1803e1ee2_6:;
wr(s->u,21,4,(rd(s->u,27,4)&((U)UINT64_C(0xff))));
L_1803e1ee2_7:;
wr(s->u,25,1,pop(rd(s->u,21,4),4));
L_1803e1ee2_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803e1ee2_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803e1ee2_10:;
/* 1803e1ee4: jns 0x1803e1eeb */
L_1803e1ee4_0:;
L_1803e1ee4_1:;
wr(s->u,20,1,(!rd(s->r,519,1)));
L_1803e1ee4_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803e1eeb);}
L_1803e1ee4_3:;
return UINT64_C(0x1803e1ee6);
}
uint64_t b_1803e1ee6(CPU*s){
/* 1803e1ee6: mov rax, rsi */
L_1803e1ee6_0:;
L_1803e1ee6_1:;
wr(s->r,0,8,rd(s->r,48,8));
L_1803e1ee6_2:;
/* 1803e1ee9: jmp 0x1803e1eef */
L_1803e1ee9_0:;
L_1803e1ee9_1:;
return UINT64_C(0x1803e1eef);
L_1803e1ee9_2:;
return UINT64_C(0x1803e1eeb);
}
uint64_t b_1803e1eeb(CPU*s){
/* 1803e1eeb: lea rax, [rcx + 1] */
L_1803e1eeb_0:;
L_1803e1eeb_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803e1eeb_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803e1eeb_3:;
/* 1803e1eef: mulss xmm2, dword ptr [rbp + rax*4] */
L_1803e1eef_0:;
L_1803e1eef_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1eef_2:;
wr(s->u,16,8,(rd(s->r,40,8)+rd(s->u,8,8)));
L_1803e1eef_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803e1eef_4:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,24,4),4),4));
L_1803e1eef_5:;
/* 1803e1ef5: add r9d, 4 */
L_1803e1ef5_0:;
L_1803e1ef5_1:;
wr(s->r,512,1,(((rd(s->r,136,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,136,4)));
L_1803e1ef5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x4)),4,0));
L_1803e1ef5_3:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x4))));
L_1803e1ef5_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803e1ef5_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1ef5_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803e1ef5_7:;
wr(s->u,29,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803e1ef5_8:;
wr(s->u,37,1,pop(rd(s->u,29,4),4));
L_1803e1ef5_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803e1ef5_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803e1ef5_11:;
/* 1803e1ef9: add r8d, 4 */
L_1803e1ef9_0:;
L_1803e1ef9_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803e1ef9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x4)),4,0));
L_1803e1ef9_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x4))));
L_1803e1ef9_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803e1ef9_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1ef9_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803e1ef9_7:;
wr(s->u,29,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803e1ef9_8:;
wr(s->u,37,1,pop(rd(s->u,29,4),4));
L_1803e1ef9_9:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803e1ef9_10:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803e1ef9_11:;
/* 1803e1efd: add rcx, 4 */
L_1803e1efd_0:;
L_1803e1efd_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803e1efd_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,0));
L_1803e1efd_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803e1efd_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1efd_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803e1efd_6:;
wr(s->u,29,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803e1efd_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803e1efd_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803e1efd_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803e1efd_10:;
/* 1803e1f01: sub rbx, 1 */
L_1803e1f01_0:;
L_1803e1f01_1:;
wr(s->r,512,1,(rd(s->r,24,8)<((U)UINT64_C(0x1))));
L_1803e1f01_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x1)),8,1));
L_1803e1f01_3:;
wr(s->r,24,8,(rd(s->r,24,8)-((U)UINT64_C(0x1))));
L_1803e1f01_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f01_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803e1f01_6:;
wr(s->u,29,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803e1f01_7:;
wr(s->u,37,1,pop(rd(s->u,29,8),8));
L_1803e1f01_8:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803e1f01_9:;
wr(s->r,514,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803e1f01_10:;
/* 1803e1f05: movss dword ptr [rbp + rax*4], xmm2 */
L_1803e1f05_0:;
L_1803e1f05_1:;
wr(s->u,8,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f05_2:;
wr(s->u,16,8,(rd(s->r,40,8)+rd(s->u,8,8)));
L_1803e1f05_3:;
wr(s->u,24,4,rd(s->r,4736,4));
L_1803e1f05_4:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803e1f05_5:;
/* 1803e1f0b: jne 0x1803e1df0 */
L_1803e1f0b_0:;
L_1803e1f0b_1:;
wr(s->u,28,1,(!rd(s->r,518,1)));
L_1803e1f0b_2:;
if(rd(s->u,28,1)){return UINT64_C(0x1803e1df0);}
L_1803e1f0b_3:;
return UINT64_C(0x1803e1f11);
}
uint64_t b_1803e1eef(CPU*s){
/* 1803e1eef: mulss xmm2, dword ptr [rbp + rax*4] */
L_1803e1eef_0:;
L_1803e1eef_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1eef_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803e1eef_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803e1eef_4:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->u,16,4),4),4));
L_1803e1eef_5:;
/* 1803e1ef5: add r9d, 4 */
L_1803e1ef5_0:;
L_1803e1ef5_1:;
wr(s->r,512,1,(((rd(s->r,136,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,136,4)));
L_1803e1ef5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,4),((U)UINT64_C(0x4)),4,0));
L_1803e1ef5_3:;
wr(s->r,136,4,(rd(s->r,136,4)+((U)UINT64_C(0x4))));
L_1803e1ef5_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803e1ef5_5:;
wr(s->r,519,1,(sx(rd(s->r,136,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1ef5_6:;
wr(s->r,518,1,(rd(s->r,136,4)==((U)UINT64_C(0x0))));
L_1803e1ef5_7:;
wr(s->u,21,4,(rd(s->r,136,4)&((U)UINT64_C(0xff))));
L_1803e1ef5_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803e1ef5_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803e1ef5_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803e1ef5_11:;
/* 1803e1ef9: add r8d, 4 */
L_1803e1ef9_0:;
L_1803e1ef9_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0x4)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803e1ef9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0x4)),4,0));
L_1803e1ef9_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0x4))));
L_1803e1ef9_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803e1ef9_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1ef9_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803e1ef9_7:;
wr(s->u,21,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803e1ef9_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803e1ef9_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803e1ef9_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803e1ef9_11:;
/* 1803e1efd: add rcx, 4 */
L_1803e1efd_0:;
L_1803e1efd_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803e1efd_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x4)),8,0));
L_1803e1efd_3:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803e1efd_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1efd_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803e1efd_6:;
wr(s->u,21,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803e1efd_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803e1efd_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803e1efd_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803e1efd_10:;
/* 1803e1f01: sub rbx, 1 */
L_1803e1f01_0:;
L_1803e1f01_1:;
wr(s->r,512,1,(rd(s->r,24,8)<((U)UINT64_C(0x1))));
L_1803e1f01_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,24,8),((U)UINT64_C(0x1)),8,1));
L_1803e1f01_3:;
wr(s->r,24,8,(rd(s->r,24,8)-((U)UINT64_C(0x1))));
L_1803e1f01_4:;
wr(s->r,519,1,(sx(rd(s->r,24,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f01_5:;
wr(s->r,518,1,(rd(s->r,24,8)==((U)UINT64_C(0x0))));
L_1803e1f01_6:;
wr(s->u,21,8,(rd(s->r,24,8)&((U)UINT64_C(0xff))));
L_1803e1f01_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803e1f01_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803e1f01_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803e1f01_10:;
/* 1803e1f05: movss dword ptr [rbp + rax*4], xmm2 */
L_1803e1f05_0:;
L_1803e1f05_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f05_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803e1f05_3:;
wr(s->u,16,4,rd(s->r,4736,4));
L_1803e1f05_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803e1f05_5:;
/* 1803e1f0b: jne 0x1803e1df0 */
L_1803e1f0b_0:;
L_1803e1f0b_1:;
wr(s->u,20,1,(!rd(s->r,518,1)));
L_1803e1f0b_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803e1df0);}
L_1803e1f0b_3:;
return UINT64_C(0x1803e1f11);
}
uint64_t b_1803e1f11(CPU*s){
/* 1803e1f11: test r10, r10 */
L_1803e1f11_0:;
L_1803e1f11_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1f11_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1f11_3:;
wr(s->u,11,8,(rd(s->r,144,8)&rd(s->r,144,8)));
L_1803e1f11_4:;
wr(s->r,519,1,(sx(rd(s->u,11,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f11_5:;
wr(s->r,518,1,(rd(s->u,11,8)==((U)UINT64_C(0x0))));
L_1803e1f11_6:;
wr(s->u,1,8,(rd(s->u,11,8)&((U)UINT64_C(0xff))));
L_1803e1f11_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803e1f11_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803e1f11_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803e1f11_10:;
/* 1803e1f14: jns 0x1803e1f7c */
L_1803e1f14_0:;
L_1803e1f14_1:;
wr(s->u,0,1,(!rd(s->r,519,1)));
L_1803e1f14_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803e1f7c);}
L_1803e1f14_3:;
return UINT64_C(0x1803e1f16);
}
uint64_t b_1803e1f16(CPU*s){
/* 1803e1f16: lea edx, [r11 + r12] */
L_1803e1f16_0:;
L_1803e1f16_1:;
wr(s->u,0,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803e1f16_2:;
wr(s->u,8,8,(rd(s->r,152,8)+rd(s->u,0,8)));
L_1803e1f16_3:;
wr(s->r,16,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1f16_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1f16_5:;
/* 1803e1f1a: sub r11d, dword ptr [rsp + 0x60] */
L_1803e1f1a_0:;
L_1803e1f1a_1:;
wr(s->u,16,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803e1f1a_2:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803e1f1a_3:;
wr(s->r,512,1,(rd(s->r,152,4)<rd(s->u,44,4)));
L_1803e1f1a_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803e1f1a_5:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),rd(s->u,44,4),4,1));
L_1803e1f1a_6:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803e1f1a_7:;
wr(s->r,152,4,(rd(s->r,152,4)-rd(s->u,44,4)));
L_1803e1f1a_8:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803e1f1a_9:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f1a_10:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803e1f1a_11:;
wr(s->u,49,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803e1f1a_12:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803e1f1a_13:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803e1f1a_14:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803e1f1a_15:;
/* 1803e1f1f: mov rcx, r10 */
L_1803e1f1f_0:;
L_1803e1f1f_1:;
wr(s->r,8,8,rd(s->r,144,8));
L_1803e1f1f_2:;
/* 1803e1f22: movd xmm2, r12d */
L_1803e1f22_0:;
L_1803e1f22_1:;
wr(s->r,4736,16,rd(s->r,160,4));
L_1803e1f22_2:;
/* 1803e1f27: sub rcx, r13 */
L_1803e1f27_0:;
L_1803e1f27_1:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->r,168,8)));
L_1803e1f27_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,168,8),8,1));
L_1803e1f27_3:;
wr(s->r,8,8,(rd(s->r,8,8)-rd(s->r,168,8)));
L_1803e1f27_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f27_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803e1f27_6:;
wr(s->u,49,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803e1f27_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803e1f27_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803e1f27_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803e1f27_10:;
/* 1803e1f2a: add r11d, r15d */
L_1803e1f2a_0:;
L_1803e1f2a_1:;
wr(s->r,512,1,(((rd(s->r,152,4)+rd(s->r,184,4))&(((U)1<<32)-1))<rd(s->r,152,4)));
L_1803e1f2a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),rd(s->r,184,4),4,0));
L_1803e1f2a_3:;
wr(s->r,152,4,(rd(s->r,152,4)+rd(s->r,184,4)));
L_1803e1f2a_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803e1f2a_5:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f2a_6:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803e1f2a_7:;
wr(s->u,49,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803e1f2a_8:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803e1f2a_9:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803e1f2a_10:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803e1f2a_11:;
/* 1803e1f2d: add rcx, r15 */
L_1803e1f2d_0:;
L_1803e1f2d_1:;
wr(s->r,512,1,(((rd(s->r,8,8)+rd(s->r,184,8))&(((U)1<<64)-1))<rd(s->r,8,8)));
L_1803e1f2d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->r,184,8),8,0));
L_1803e1f2d_3:;
wr(s->r,8,8,(rd(s->r,8,8)+rd(s->r,184,8)));
L_1803e1f2d_4:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f2d_5:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803e1f2d_6:;
wr(s->u,49,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803e1f2d_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803e1f2d_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803e1f2d_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803e1f2d_10:;
/* 1803e1f30: neg r10 */
L_1803e1f30_0:;
L_1803e1f30_1:;
wr(s->r,512,1,(rd(s->r,144,8)!=((U)UINT64_C(0x0))));
L_1803e1f30_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,144,8),8,1));
L_1803e1f30_3:;
wr(s->r,144,8,(-rd(s->r,144,8)));
L_1803e1f30_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f30_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803e1f30_6:;
wr(s->u,49,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803e1f30_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803e1f30_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803e1f30_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803e1f30_10:;
/* 1803e1f33: cvtdq2ps xmm2, xmm2 */
L_1803e1f33_0:;
L_1803e1f33_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803e1f33_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803e1f33_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803e1f33_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803e1f33_5:;
/* 1803e1f36: movd xmm1, edx */
L_1803e1f36_0:;
L_1803e1f36_1:;
wr(s->r,4672,16,rd(s->r,16,4));
L_1803e1f36_2:;
/* 1803e1f3a: test r11d, r11d */
L_1803e1f3a_0:;
L_1803e1f3a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1f3a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1f3a_3:;
wr(s->u,68,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803e1f3a_4:;
wr(s->r,519,1,(sx(rd(s->u,68,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f3a_5:;
wr(s->r,518,1,(rd(s->u,68,4)==((U)UINT64_C(0x0))));
L_1803e1f3a_6:;
wr(s->u,49,4,(rd(s->u,68,4)&((U)UINT64_C(0xff))));
L_1803e1f3a_7:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803e1f3a_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803e1f3a_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803e1f3a_10:;
/* 1803e1f3d: mov rax, rcx */
L_1803e1f3d_0:;
L_1803e1f3d_1:;
wr(s->r,0,8,rd(s->r,8,8));
L_1803e1f3d_2:;
/* 1803e1f40: cmovs rax, rsi */
L_1803e1f40_0:;
L_1803e1f40_1:;
wr(s->u,59,8,rd(s->r,48,8));
L_1803e1f40_2:;
wr(s->u,67,1,(!rd(s->r,519,1)));
L_1803e1f40_3:;
if(rd(s->u,67,1)){goto L_1803e1f44_0;}
L_1803e1f40_4:;
wr(s->r,0,8,rd(s->u,59,8));
L_1803e1f40_5:;
/* 1803e1f44: test r11d, r11d */
L_1803e1f44_0:;
L_1803e1f44_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1f44_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1f44_3:;
wr(s->u,68,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803e1f44_4:;
wr(s->r,519,1,(sx(rd(s->u,68,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f44_5:;
wr(s->r,518,1,(rd(s->u,68,4)==((U)UINT64_C(0x0))));
L_1803e1f44_6:;
wr(s->u,49,4,(rd(s->u,68,4)&((U)UINT64_C(0xff))));
L_1803e1f44_7:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803e1f44_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803e1f44_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803e1f44_10:;
/* 1803e1f47: cvtdq2ps xmm1, xmm1 */
L_1803e1f47_0:;
L_1803e1f47_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803e1f47_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803e1f47_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803e1f47_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803e1f47_5:;
/* 1803e1f4a: divss xmm1, xmm2 */
L_1803e1f4a_0:;
L_1803e1f4a_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803e1f4a_2:;
/* 1803e1f4e: movaps xmm0, xmm1 */
L_1803e1f4e_0:;
L_1803e1f4e_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803e1f4e_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803e1f4e_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803e1f4e_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803e1f4e_5:;
/* 1803e1f51: mulss xmm0, dword ptr [rdi + rax*4] */
L_1803e1f51_0:;
L_1803e1f51_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f51_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1f51_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803e1f51_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,40,4),4),4));
L_1803e1f51_5:;
/* 1803e1f56: movss dword ptr [rdi + rax*4], xmm0 */
L_1803e1f56_0:;
L_1803e1f56_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f56_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1f56_3:;
wr(s->u,40,4,rd(s->r,4608,4));
L_1803e1f56_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803e1f56_5:;
/* 1803e1f5b: mov rax, rcx */
L_1803e1f5b_0:;
L_1803e1f5b_1:;
wr(s->r,0,8,rd(s->r,8,8));
L_1803e1f5b_2:;
/* 1803e1f5e: cmovs rax, rsi */
L_1803e1f5e_0:;
L_1803e1f5e_1:;
wr(s->u,59,8,rd(s->r,48,8));
L_1803e1f5e_2:;
wr(s->u,67,1,(!rd(s->r,519,1)));
L_1803e1f5e_3:;
if(rd(s->u,67,1)){goto L_1803e1f62_0;}
L_1803e1f5e_4:;
wr(s->r,0,8,rd(s->u,59,8));
L_1803e1f5e_5:;
/* 1803e1f62: inc edx */
L_1803e1f62_0:;
L_1803e1f62_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803e1f62_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803e1f62_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1f62_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f62_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803e1f62_6:;
wr(s->u,49,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803e1f62_7:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803e1f62_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803e1f62_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803e1f62_10:;
/* 1803e1f64: inc r11d */
L_1803e1f64_0:;
L_1803e1f64_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803e1f64_2:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803e1f64_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803e1f64_4:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f64_5:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803e1f64_6:;
wr(s->u,49,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803e1f64_7:;
wr(s->u,57,1,pop(rd(s->u,49,4),4));
L_1803e1f64_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803e1f64_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803e1f64_10:;
/* 1803e1f67: inc rcx */
L_1803e1f67_0:;
L_1803e1f67_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,0));
L_1803e1f67_2:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803e1f67_3:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f67_4:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803e1f67_5:;
wr(s->u,49,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803e1f67_6:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803e1f67_7:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803e1f67_8:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803e1f67_9:;
/* 1803e1f6a: sub r10, 1 */
L_1803e1f6a_0:;
L_1803e1f6a_1:;
wr(s->r,512,1,(rd(s->r,144,8)<((U)UINT64_C(0x1))));
L_1803e1f6a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x1)),8,1));
L_1803e1f6a_3:;
wr(s->r,144,8,(rd(s->r,144,8)-((U)UINT64_C(0x1))));
L_1803e1f6a_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f6a_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803e1f6a_6:;
wr(s->u,49,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803e1f6a_7:;
wr(s->u,57,1,pop(rd(s->u,49,8),8));
L_1803e1f6a_8:;
wr(s->u,58,1,(rd(s->u,57,1)&((U)UINT64_C(0x1))));
L_1803e1f6a_9:;
wr(s->r,514,1,(rd(s->u,58,1)==((U)UINT64_C(0x0))));
L_1803e1f6a_10:;
/* 1803e1f6e: mulss xmm1, dword ptr [rbp + rax*4] */
L_1803e1f6e_0:;
L_1803e1f6e_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f6e_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803e1f6e_3:;
wr(s->u,40,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803e1f6e_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,40,4),4),4));
L_1803e1f6e_5:;
/* 1803e1f74: movss dword ptr [rbp + rax*4], xmm1 */
L_1803e1f74_0:;
L_1803e1f74_1:;
wr(s->u,24,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f74_2:;
wr(s->u,32,8,(rd(s->r,40,8)+rd(s->u,24,8)));
L_1803e1f74_3:;
wr(s->u,40,4,rd(s->r,4672,4));
L_1803e1f74_4:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803e1f74_5:;
/* 1803e1f7a: jne 0x1803e1f36 */
L_1803e1f7a_0:;
L_1803e1f7a_1:;
wr(s->u,48,1,(!rd(s->r,518,1)));
L_1803e1f7a_2:;
if(rd(s->u,48,1)){goto L_1803e1f36_0;}
L_1803e1f7a_3:;
return UINT64_C(0x1803e1f7c);
}
uint64_t b_1803e1f36(CPU*s){
/* 1803e1f36: movd xmm1, edx */
L_1803e1f36_0:;
L_1803e1f36_1:;
wr(s->r,4672,16,rd(s->r,16,4));
L_1803e1f36_2:;
/* 1803e1f3a: test r11d, r11d */
L_1803e1f3a_0:;
L_1803e1f3a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1f3a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1f3a_3:;
wr(s->u,56,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803e1f3a_4:;
wr(s->r,519,1,(sx(rd(s->u,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f3a_5:;
wr(s->r,518,1,(rd(s->u,56,4)==((U)UINT64_C(0x0))));
L_1803e1f3a_6:;
wr(s->u,37,4,(rd(s->u,56,4)&((U)UINT64_C(0xff))));
L_1803e1f3a_7:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803e1f3a_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803e1f3a_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803e1f3a_10:;
/* 1803e1f3d: mov rax, rcx */
L_1803e1f3d_0:;
L_1803e1f3d_1:;
wr(s->r,0,8,rd(s->r,8,8));
L_1803e1f3d_2:;
/* 1803e1f40: cmovs rax, rsi */
L_1803e1f40_0:;
L_1803e1f40_1:;
wr(s->u,47,8,rd(s->r,48,8));
L_1803e1f40_2:;
wr(s->u,55,1,(!rd(s->r,519,1)));
L_1803e1f40_3:;
if(rd(s->u,55,1)){goto L_1803e1f44_0;}
L_1803e1f40_4:;
wr(s->r,0,8,rd(s->u,47,8));
L_1803e1f40_5:;
/* 1803e1f44: test r11d, r11d */
L_1803e1f44_0:;
L_1803e1f44_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1f44_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1f44_3:;
wr(s->u,56,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803e1f44_4:;
wr(s->r,519,1,(sx(rd(s->u,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f44_5:;
wr(s->r,518,1,(rd(s->u,56,4)==((U)UINT64_C(0x0))));
L_1803e1f44_6:;
wr(s->u,37,4,(rd(s->u,56,4)&((U)UINT64_C(0xff))));
L_1803e1f44_7:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803e1f44_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803e1f44_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803e1f44_10:;
/* 1803e1f47: cvtdq2ps xmm1, xmm1 */
L_1803e1f47_0:;
L_1803e1f47_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803e1f47_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803e1f47_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803e1f47_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803e1f47_5:;
/* 1803e1f4a: divss xmm1, xmm2 */
L_1803e1f4a_0:;
L_1803e1f4a_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803e1f4a_2:;
/* 1803e1f4e: movaps xmm0, xmm1 */
L_1803e1f4e_0:;
L_1803e1f4e_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803e1f4e_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803e1f4e_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803e1f4e_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803e1f4e_5:;
/* 1803e1f51: mulss xmm0, dword ptr [rdi + rax*4] */
L_1803e1f51_0:;
L_1803e1f51_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f51_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1f51_3:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803e1f51_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803e1f51_5:;
/* 1803e1f56: movss dword ptr [rdi + rax*4], xmm0 */
L_1803e1f56_0:;
L_1803e1f56_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f56_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1f56_3:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803e1f56_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803e1f56_5:;
/* 1803e1f5b: mov rax, rcx */
L_1803e1f5b_0:;
L_1803e1f5b_1:;
wr(s->r,0,8,rd(s->r,8,8));
L_1803e1f5b_2:;
/* 1803e1f5e: cmovs rax, rsi */
L_1803e1f5e_0:;
L_1803e1f5e_1:;
wr(s->u,47,8,rd(s->r,48,8));
L_1803e1f5e_2:;
wr(s->u,55,1,(!rd(s->r,519,1)));
L_1803e1f5e_3:;
if(rd(s->u,55,1)){goto L_1803e1f62_0;}
L_1803e1f5e_4:;
wr(s->r,0,8,rd(s->u,47,8));
L_1803e1f5e_5:;
/* 1803e1f62: inc edx */
L_1803e1f62_0:;
L_1803e1f62_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803e1f62_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803e1f62_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1f62_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f62_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803e1f62_6:;
wr(s->u,37,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803e1f62_7:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803e1f62_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803e1f62_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803e1f62_10:;
/* 1803e1f64: inc r11d */
L_1803e1f64_0:;
L_1803e1f64_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803e1f64_2:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803e1f64_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803e1f64_4:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f64_5:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803e1f64_6:;
wr(s->u,37,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803e1f64_7:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803e1f64_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803e1f64_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803e1f64_10:;
/* 1803e1f67: inc rcx */
L_1803e1f67_0:;
L_1803e1f67_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,0));
L_1803e1f67_2:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803e1f67_3:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f67_4:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803e1f67_5:;
wr(s->u,37,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803e1f67_6:;
wr(s->u,45,1,pop(rd(s->u,37,8),8));
L_1803e1f67_7:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803e1f67_8:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803e1f67_9:;
/* 1803e1f6a: sub r10, 1 */
L_1803e1f6a_0:;
L_1803e1f6a_1:;
wr(s->r,512,1,(rd(s->r,144,8)<((U)UINT64_C(0x1))));
L_1803e1f6a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x1)),8,1));
L_1803e1f6a_3:;
wr(s->r,144,8,(rd(s->r,144,8)-((U)UINT64_C(0x1))));
L_1803e1f6a_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f6a_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803e1f6a_6:;
wr(s->u,37,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803e1f6a_7:;
wr(s->u,45,1,pop(rd(s->u,37,8),8));
L_1803e1f6a_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803e1f6a_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803e1f6a_10:;
/* 1803e1f6e: mulss xmm1, dword ptr [rbp + rax*4] */
L_1803e1f6e_0:;
L_1803e1f6e_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f6e_2:;
wr(s->u,24,8,(rd(s->r,40,8)+rd(s->u,16,8)));
L_1803e1f6e_3:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803e1f6e_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,32,4),4),4));
L_1803e1f6e_5:;
/* 1803e1f74: movss dword ptr [rbp + rax*4], xmm1 */
L_1803e1f74_0:;
L_1803e1f74_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f74_2:;
wr(s->u,24,8,(rd(s->r,40,8)+rd(s->u,16,8)));
L_1803e1f74_3:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803e1f74_4:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803e1f74_5:;
/* 1803e1f7a: jne 0x1803e1f36 */
L_1803e1f7a_0:;
L_1803e1f7a_1:;
wr(s->u,36,1,(!rd(s->r,518,1)));
L_1803e1f7a_2:;
if(rd(s->u,36,1)){goto L_1803e1f36_0;}
L_1803e1f7a_3:;
return UINT64_C(0x1803e1f7c);
}
uint64_t b_1803e1f44(CPU*s){
/* 1803e1f44: test r11d, r11d */
L_1803e1f44_0:;
L_1803e1f44_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1f44_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1f44_3:;
wr(s->u,56,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803e1f44_4:;
wr(s->r,519,1,(sx(rd(s->u,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f44_5:;
wr(s->r,518,1,(rd(s->u,56,4)==((U)UINT64_C(0x0))));
L_1803e1f44_6:;
wr(s->u,37,4,(rd(s->u,56,4)&((U)UINT64_C(0xff))));
L_1803e1f44_7:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803e1f44_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803e1f44_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803e1f44_10:;
/* 1803e1f47: cvtdq2ps xmm1, xmm1 */
L_1803e1f47_0:;
L_1803e1f47_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803e1f47_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803e1f47_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803e1f47_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803e1f47_5:;
/* 1803e1f4a: divss xmm1, xmm2 */
L_1803e1f4a_0:;
L_1803e1f4a_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803e1f4a_2:;
/* 1803e1f4e: movaps xmm0, xmm1 */
L_1803e1f4e_0:;
L_1803e1f4e_1:;
wr(s->r,4608,4,rd(s->r,4672,4));
L_1803e1f4e_2:;
wr(s->r,4612,4,rd(s->r,4676,4));
L_1803e1f4e_3:;
wr(s->r,4616,4,rd(s->r,4680,4));
L_1803e1f4e_4:;
wr(s->r,4620,4,rd(s->r,4684,4));
L_1803e1f4e_5:;
/* 1803e1f51: mulss xmm0, dword ptr [rdi + rax*4] */
L_1803e1f51_0:;
L_1803e1f51_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f51_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1f51_3:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803e1f51_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,32,4),4),4));
L_1803e1f51_5:;
/* 1803e1f56: movss dword ptr [rdi + rax*4], xmm0 */
L_1803e1f56_0:;
L_1803e1f56_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f56_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1f56_3:;
wr(s->u,32,4,rd(s->r,4608,4));
L_1803e1f56_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,32,4));
L_1803e1f56_5:;
/* 1803e1f5b: mov rax, rcx */
L_1803e1f5b_0:;
L_1803e1f5b_1:;
wr(s->r,0,8,rd(s->r,8,8));
L_1803e1f5b_2:;
/* 1803e1f5e: cmovs rax, rsi */
L_1803e1f5e_0:;
L_1803e1f5e_1:;
wr(s->u,47,8,rd(s->r,48,8));
L_1803e1f5e_2:;
wr(s->u,55,1,(!rd(s->r,519,1)));
L_1803e1f5e_3:;
if(rd(s->u,55,1)){goto L_1803e1f62_0;}
L_1803e1f5e_4:;
wr(s->r,0,8,rd(s->u,47,8));
L_1803e1f5e_5:;
/* 1803e1f62: inc edx */
L_1803e1f62_0:;
L_1803e1f62_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803e1f62_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803e1f62_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1f62_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f62_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803e1f62_6:;
wr(s->u,37,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803e1f62_7:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803e1f62_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803e1f62_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803e1f62_10:;
/* 1803e1f64: inc r11d */
L_1803e1f64_0:;
L_1803e1f64_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803e1f64_2:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803e1f64_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803e1f64_4:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f64_5:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803e1f64_6:;
wr(s->u,37,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803e1f64_7:;
wr(s->u,45,1,pop(rd(s->u,37,4),4));
L_1803e1f64_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803e1f64_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803e1f64_10:;
/* 1803e1f67: inc rcx */
L_1803e1f67_0:;
L_1803e1f67_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,0));
L_1803e1f67_2:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803e1f67_3:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f67_4:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803e1f67_5:;
wr(s->u,37,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803e1f67_6:;
wr(s->u,45,1,pop(rd(s->u,37,8),8));
L_1803e1f67_7:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803e1f67_8:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803e1f67_9:;
/* 1803e1f6a: sub r10, 1 */
L_1803e1f6a_0:;
L_1803e1f6a_1:;
wr(s->r,512,1,(rd(s->r,144,8)<((U)UINT64_C(0x1))));
L_1803e1f6a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x1)),8,1));
L_1803e1f6a_3:;
wr(s->r,144,8,(rd(s->r,144,8)-((U)UINT64_C(0x1))));
L_1803e1f6a_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f6a_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803e1f6a_6:;
wr(s->u,37,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803e1f6a_7:;
wr(s->u,45,1,pop(rd(s->u,37,8),8));
L_1803e1f6a_8:;
wr(s->u,46,1,(rd(s->u,45,1)&((U)UINT64_C(0x1))));
L_1803e1f6a_9:;
wr(s->r,514,1,(rd(s->u,46,1)==((U)UINT64_C(0x0))));
L_1803e1f6a_10:;
/* 1803e1f6e: mulss xmm1, dword ptr [rbp + rax*4] */
L_1803e1f6e_0:;
L_1803e1f6e_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f6e_2:;
wr(s->u,24,8,(rd(s->r,40,8)+rd(s->u,16,8)));
L_1803e1f6e_3:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803e1f6e_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,32,4),4),4));
L_1803e1f6e_5:;
/* 1803e1f74: movss dword ptr [rbp + rax*4], xmm1 */
L_1803e1f74_0:;
L_1803e1f74_1:;
wr(s->u,16,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f74_2:;
wr(s->u,24,8,(rd(s->r,40,8)+rd(s->u,16,8)));
L_1803e1f74_3:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803e1f74_4:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803e1f74_5:;
/* 1803e1f7a: jne 0x1803e1f36 */
L_1803e1f7a_0:;
L_1803e1f7a_1:;
wr(s->u,36,1,(!rd(s->r,518,1)));
L_1803e1f7a_2:;
if(rd(s->u,36,1)){return UINT64_C(0x1803e1f36);}
L_1803e1f7a_3:;
return UINT64_C(0x1803e1f7c);
}
uint64_t b_1803e1f62(CPU*s){
/* 1803e1f62: inc edx */
L_1803e1f62_0:;
L_1803e1f62_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),((U)UINT64_C(0x1)),4,0));
L_1803e1f62_2:;
wr(s->r,16,4,(rd(s->r,16,4)+((U)UINT64_C(0x1))));
L_1803e1f62_3:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1f62_4:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f62_5:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803e1f62_6:;
wr(s->u,21,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803e1f62_7:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803e1f62_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803e1f62_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803e1f62_10:;
/* 1803e1f64: inc r11d */
L_1803e1f64_0:;
L_1803e1f64_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,4),((U)UINT64_C(0x1)),4,0));
L_1803e1f64_2:;
wr(s->r,152,4,(rd(s->r,152,4)+((U)UINT64_C(0x1))));
L_1803e1f64_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803e1f64_4:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f64_5:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803e1f64_6:;
wr(s->u,21,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803e1f64_7:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803e1f64_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803e1f64_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803e1f64_10:;
/* 1803e1f67: inc rcx */
L_1803e1f67_0:;
L_1803e1f67_1:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),((U)UINT64_C(0x1)),8,0));
L_1803e1f67_2:;
wr(s->r,8,8,(rd(s->r,8,8)+((U)UINT64_C(0x1))));
L_1803e1f67_3:;
wr(s->r,519,1,(sx(rd(s->r,8,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f67_4:;
wr(s->r,518,1,(rd(s->r,8,8)==((U)UINT64_C(0x0))));
L_1803e1f67_5:;
wr(s->u,21,8,(rd(s->r,8,8)&((U)UINT64_C(0xff))));
L_1803e1f67_6:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803e1f67_7:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803e1f67_8:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803e1f67_9:;
/* 1803e1f6a: sub r10, 1 */
L_1803e1f6a_0:;
L_1803e1f6a_1:;
wr(s->r,512,1,(rd(s->r,144,8)<((U)UINT64_C(0x1))));
L_1803e1f6a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x1)),8,1));
L_1803e1f6a_3:;
wr(s->r,144,8,(rd(s->r,144,8)-((U)UINT64_C(0x1))));
L_1803e1f6a_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f6a_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803e1f6a_6:;
wr(s->u,21,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803e1f6a_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803e1f6a_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803e1f6a_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803e1f6a_10:;
/* 1803e1f6e: mulss xmm1, dword ptr [rbp + rax*4] */
L_1803e1f6e_0:;
L_1803e1f6e_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f6e_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803e1f6e_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803e1f6e_4:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,16,4),4),4));
L_1803e1f6e_5:;
/* 1803e1f74: movss dword ptr [rbp + rax*4], xmm1 */
L_1803e1f74_0:;
L_1803e1f74_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803e1f74_2:;
wr(s->u,8,8,(rd(s->r,40,8)+rd(s->u,0,8)));
L_1803e1f74_3:;
wr(s->u,16,4,rd(s->r,4672,4));
L_1803e1f74_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803e1f74_5:;
/* 1803e1f7a: jne 0x1803e1f36 */
L_1803e1f7a_0:;
L_1803e1f7a_1:;
wr(s->u,20,1,(!rd(s->r,518,1)));
L_1803e1f7a_2:;
if(rd(s->u,20,1)){return UINT64_C(0x1803e1f36);}
L_1803e1f7a_3:;
return UINT64_C(0x1803e1f7c);
}
uint64_t b_1803e1f7c(CPU*s){
/* 1803e1f7c: mov rbp, qword ptr [rsp + 0x58] */
L_1803e1f7c_0:;
L_1803e1f7c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803e1f7c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803e1f7c_3:;
wr(s->r,40,8,rd(s->u,8,8));
L_1803e1f7c_4:;
/* 1803e1f81: xor eax, eax */
L_1803e1f81_0:;
L_1803e1f81_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1f81_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1f81_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803e1f81_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1f81_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1f81_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803e1f81_7:;
wr(s->u,16,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803e1f81_8:;
wr(s->u,24,1,pop(rd(s->u,16,4),4));
L_1803e1f81_9:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803e1f81_10:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803e1f81_11:;
/* 1803e1f83: mov rsi, qword ptr [rsp + 0x68] */
L_1803e1f83_0:;
L_1803e1f83_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803e1f83_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803e1f83_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803e1f83_4:;
/* 1803e1f88: mov r13, qword ptr [rsp + 0x28] */
L_1803e1f88_0:;
L_1803e1f88_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803e1f88_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803e1f88_3:;
wr(s->r,168,8,rd(s->u,8,8));
L_1803e1f88_4:;
/* 1803e1f8d: mov rbx, qword ptr [rsp + 0x50] */
L_1803e1f8d_0:;
L_1803e1f8d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803e1f8d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803e1f8d_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803e1f8d_4:;
/* 1803e1f92: mov r14, qword ptr [rsp + 0x20] */
L_1803e1f92_0:;
L_1803e1f92_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803e1f92_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803e1f92_3:;
wr(s->r,176,8,rd(s->u,8,8));
L_1803e1f92_4:;
/* 1803e1f97: add rsp, 0x30 */
L_1803e1f97_0:;
L_1803e1f97_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e1f97_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803e1f97_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803e1f97_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f97_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1f97_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1f97_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803e1f97_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803e1f97_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803e1f97_10:;
/* 1803e1f9b: pop r15 */
L_1803e1f9b_0:;
L_1803e1f9b_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803e1f9b_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1f9b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1f9b_4:;
wr(s->r,184,8,rd(s->u,26,8));
L_1803e1f9b_5:;
/* 1803e1f9d: pop r12 */
L_1803e1f9d_0:;
L_1803e1f9d_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803e1f9d_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1f9d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1f9d_4:;
wr(s->r,160,8,rd(s->u,26,8));
L_1803e1f9d_5:;
/* 1803e1f9f: pop rdi */
L_1803e1f9f_0:;
L_1803e1f9f_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803e1f9f_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1f9f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1f9f_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803e1f9f_5:;
/* 1803e1fa0: ret  */
L_1803e1fa0_0:;
L_1803e1fa0_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1fa0_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1fa0_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e1fa0_4:;
return UINT64_C(0x1803e1fa1);
}
uint64_t b_1803e1f83(CPU*s){
/* 1803e1f83: mov rsi, qword ptr [rsp + 0x68] */
L_1803e1f83_0:;
L_1803e1f83_1:;
wr(s->u,0,8,(((U)UINT64_C(0x68))+rd(s->r,32,8)));
L_1803e1f83_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803e1f83_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803e1f83_4:;
/* 1803e1f88: mov r13, qword ptr [rsp + 0x28] */
L_1803e1f88_0:;
L_1803e1f88_1:;
wr(s->u,0,8,(((U)UINT64_C(0x28))+rd(s->r,32,8)));
L_1803e1f88_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803e1f88_3:;
wr(s->r,168,8,rd(s->u,8,8));
L_1803e1f88_4:;
/* 1803e1f8d: mov rbx, qword ptr [rsp + 0x50] */
L_1803e1f8d_0:;
L_1803e1f8d_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803e1f8d_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803e1f8d_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803e1f8d_4:;
/* 1803e1f92: mov r14, qword ptr [rsp + 0x20] */
L_1803e1f92_0:;
L_1803e1f92_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803e1f92_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803e1f92_3:;
wr(s->r,176,8,rd(s->u,8,8));
L_1803e1f92_4:;
/* 1803e1f97: add rsp, 0x30 */
L_1803e1f97_0:;
L_1803e1f97_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x30)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803e1f97_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x30)),8,0));
L_1803e1f97_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x30))));
L_1803e1f97_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803e1f97_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803e1f97_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803e1f97_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803e1f97_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803e1f97_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803e1f97_10:;
/* 1803e1f9b: pop r15 */
L_1803e1f9b_0:;
L_1803e1f9b_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803e1f9b_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1f9b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1f9b_4:;
wr(s->r,184,8,rd(s->u,26,8));
L_1803e1f9b_5:;
/* 1803e1f9d: pop r12 */
L_1803e1f9d_0:;
L_1803e1f9d_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803e1f9d_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1f9d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1f9d_4:;
wr(s->r,160,8,rd(s->u,26,8));
L_1803e1f9d_5:;
/* 1803e1f9f: pop rdi */
L_1803e1f9f_0:;
L_1803e1f9f_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803e1f9f_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1f9f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1f9f_4:;
wr(s->r,56,8,rd(s->u,26,8));
L_1803e1f9f_5:;
/* 1803e1fa0: ret  */
L_1803e1fa0_0:;
L_1803e1fa0_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803e1fa0_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803e1fa0_3:;
return (uint64_t)rd(s->r,648,8);
L_1803e1fa0_4:;
return UINT64_C(0x1803e1fa1);
}
uint64_t b_1803e1fa1(CPU*s){
/* 1803e1fa1: sub r15d, r8d */
L_1803e1fa1_0:;
L_1803e1fa1_1:;
wr(s->r,512,1,(rd(s->r,184,4)<rd(s->r,128,4)));
L_1803e1fa1_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,184,4),rd(s->r,128,4),4,1));
L_1803e1fa1_3:;
wr(s->r,184,4,(rd(s->r,184,4)-rd(s->r,128,4)));
L_1803e1fa1_4:;
wr(s->r,184,8,rd(s->r,184,4));
L_1803e1fa1_5:;
wr(s->r,519,1,(sx(rd(s->r,184,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1fa1_6:;
wr(s->r,518,1,(rd(s->r,184,4)==((U)UINT64_C(0x0))));
L_1803e1fa1_7:;
wr(s->u,16,4,(rd(s->r,184,4)&((U)UINT64_C(0xff))));
L_1803e1fa1_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803e1fa1_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803e1fa1_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803e1fa1_11:;
/* 1803e1fa4: lea eax, [r8 + r8] */
L_1803e1fa4_0:;
L_1803e1fa4_1:;
wr(s->u,0,8,(rd(s->r,128,8)*((U)UINT64_C(0x1))));
L_1803e1fa4_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803e1fa4_3:;
wr(s->r,0,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1fa4_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1fa4_5:;
/* 1803e1fa8: mov esi, 0 */
L_1803e1fa8_0:;
L_1803e1fa8_1:;
wr(s->r,48,8,((U)UINT64_C(0x0)));
L_1803e1fa8_2:;
/* 1803e1fad: movsxd rcx, eax */
L_1803e1fad_0:;
L_1803e1fad_1:;
wr(s->r,8,8,(U)sx(rd(s->r,0,4),4));
L_1803e1fad_2:;
/* 1803e1fb0: lea ebx, [r15 + r15] */
L_1803e1fb0_0:;
L_1803e1fb0_1:;
wr(s->u,0,8,(rd(s->r,184,8)*((U)UINT64_C(0x1))));
L_1803e1fb0_2:;
wr(s->u,8,8,(rd(s->r,184,8)+rd(s->u,0,8)));
L_1803e1fb0_3:;
wr(s->r,24,4,(rd(s->u,8,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1fb0_4:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803e1fb0_5:;
/* 1803e1fb4: mov edx, ebx */
L_1803e1fb4_0:;
L_1803e1fb4_1:;
wr(s->r,16,4,rd(s->r,24,4));
L_1803e1fb4_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1fb4_3:;
/* 1803e1fb6: lea rcx, [rdi + rcx*4] */
L_1803e1fb6_0:;
L_1803e1fb6_1:;
wr(s->u,0,8,(rd(s->r,8,8)*((U)UINT64_C(0x4))));
L_1803e1fb6_2:;
wr(s->u,8,8,(rd(s->r,56,8)+rd(s->u,0,8)));
L_1803e1fb6_3:;
wr(s->r,8,8,rd(s->u,8,8));
L_1803e1fb6_4:;
/* 1803e1fba: sub edx, r12d */
L_1803e1fba_0:;
L_1803e1fba_1:;
wr(s->r,512,1,(rd(s->r,16,4)<rd(s->r,160,4)));
L_1803e1fba_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,4),rd(s->r,160,4),4,1));
L_1803e1fba_3:;
wr(s->r,16,4,(rd(s->r,16,4)-rd(s->r,160,4)));
L_1803e1fba_4:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1fba_5:;
wr(s->r,519,1,(sx(rd(s->r,16,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1fba_6:;
wr(s->r,518,1,(rd(s->r,16,4)==((U)UINT64_C(0x0))));
L_1803e1fba_7:;
wr(s->u,16,4,(rd(s->r,16,4)&((U)UINT64_C(0xff))));
L_1803e1fba_8:;
wr(s->u,20,1,pop(rd(s->u,16,4),4));
L_1803e1fba_9:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803e1fba_10:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803e1fba_11:;
/* 1803e1fbd: cmovs edx, esi */
L_1803e1fbd_0:;
L_1803e1fbd_1:;
wr(s->u,30,4,rd(s->r,48,4));
L_1803e1fbd_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1fbd_3:;
wr(s->u,34,1,(!rd(s->r,519,1)));
L_1803e1fbd_4:;
if(rd(s->u,34,1)){goto L_1803e1fc0_0;}
L_1803e1fbd_5:;
wr(s->r,16,4,rd(s->u,30,4));
L_1803e1fbd_6:;
/* 1803e1fc0: call qword ptr [rip + 0x63c1e2] */
L_1803e1fc0_0:;
L_1803e1fc0_1:;
wr(s->u,22,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803e1fc0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1fc0_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1fc6)));
L_1803e1fc0_4:;
return (uint64_t)rd(s->u,22,8);
L_1803e1fc0_5:;
return UINT64_C(0x1803e1fc6);
}
uint64_t b_1803e1fc0(CPU*s){
/* 1803e1fc0: call qword ptr [rip + 0x63c1e2] */
L_1803e1fc0_0:;
L_1803e1fc0_1:;
wr(s->u,0,8,mr(UINT64_C(0x180a1e1a8),8));
L_1803e1fc0_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803e1fc0_3:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803e1fc6)));
L_1803e1fc0_4:;
return (uint64_t)rd(s->u,0,8);
L_1803e1fc0_5:;
return UINT64_C(0x1803e1fc6);
}
uint64_t b_1803e1fc6(CPU*s){
/* 1803e1fc6: mov r11d, r12d */
L_1803e1fc6_0:;
L_1803e1fc6_1:;
wr(s->r,152,4,rd(s->r,160,4));
L_1803e1fc6_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803e1fc6_3:;
/* 1803e1fc9: neg r11d */
L_1803e1fc9_0:;
L_1803e1fc9_1:;
wr(s->r,512,1,(rd(s->r,152,4)!=((U)UINT64_C(0x0))));
L_1803e1fc9_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,152,4),4,1));
L_1803e1fc9_3:;
wr(s->r,152,4,(-rd(s->r,152,4)));
L_1803e1fc9_4:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1fc9_5:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803e1fc9_6:;
wr(s->u,1,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803e1fc9_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803e1fc9_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803e1fc9_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803e1fc9_10:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803e1fc9_11:;
/* 1803e1fcc: movsxd rcx, r11d */
L_1803e1fcc_0:;
L_1803e1fcc_1:;
wr(s->r,8,8,(U)sx(rd(s->r,152,4),4));
L_1803e1fcc_2:;
/* 1803e1fcf: jns 0x1803e204a */
L_1803e1fcf_0:;
L_1803e1fcf_1:;
wr(s->u,0,1,(!rd(s->r,519,1)));
L_1803e1fcf_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803e204a);}
L_1803e1fcf_3:;
return UINT64_C(0x1803e1fd1);
}
uint64_t b_1803e1fd1(CPU*s){
/* 1803e1fd1: movd xmm2, r12d */
L_1803e1fd1_0:;
L_1803e1fd1_1:;
wr(s->r,4736,16,rd(s->r,160,4));
L_1803e1fd1_2:;
/* 1803e1fd6: lea edx, [rbx + r11 + 1] */
L_1803e1fd6_0:;
L_1803e1fd6_1:;
wr(s->u,24,8,(((U)UINT64_C(0x1))+rd(s->r,24,8)));
L_1803e1fd6_2:;
wr(s->u,32,8,(rd(s->r,152,8)*((U)UINT64_C(0x1))));
L_1803e1fd6_3:;
wr(s->u,40,8,(rd(s->u,24,8)+rd(s->u,32,8)));
L_1803e1fd6_4:;
wr(s->r,16,4,(rd(s->u,40,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1fd6_5:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803e1fd6_6:;
/* 1803e1fdb: lea r8d, [r11 + r12] */
L_1803e1fdb_0:;
L_1803e1fdb_1:;
wr(s->u,8,8,(rd(s->r,160,8)*((U)UINT64_C(0x1))));
L_1803e1fdb_2:;
wr(s->u,16,8,(rd(s->r,152,8)+rd(s->u,8,8)));
L_1803e1fdb_3:;
wr(s->r,128,4,(rd(s->u,16,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1fdb_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803e1fdb_5:;
/* 1803e1fdf: cvtdq2ps xmm2, xmm2 */
L_1803e1fdf_0:;
L_1803e1fdf_1:;
wr(s->r,4736,4,fb((double)sx(rd(s->r,4736,4),4),4));
L_1803e1fdf_2:;
wr(s->r,4740,4,fb((double)sx(rd(s->r,4740,4),4),4));
L_1803e1fdf_3:;
wr(s->r,4744,4,fb((double)sx(rd(s->r,4744,4),4),4));
L_1803e1fdf_4:;
wr(s->r,4748,4,fb((double)sx(rd(s->r,4748,4),4),4));
L_1803e1fdf_5:;
/* 1803e1fe2: nop word ptr [rax + rax] */
L_1803e1fe2_0:;
L_1803e1fe2_1:;
wr(s->u,48,8,(rd(s->r,0,8)*((U)UINT64_C(0x1))));
L_1803e1fe2_2:;
wr(s->u,56,8,(rd(s->r,0,8)+rd(s->u,48,8)));
L_1803e1fe2_3:;
/* 1803e1ff0: movd xmm1, r8d */
L_1803e1ff0_0:;
L_1803e1ff0_1:;
wr(s->r,4672,16,rd(s->r,128,4));
L_1803e1ff0_2:;
/* 1803e1ff5: lea eax, [rdx - 1] */
L_1803e1ff5_0:;
L_1803e1ff5_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803e1ff5_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1ff5_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1ff5_4:;
/* 1803e1ff8: cvtdq2ps xmm1, xmm1 */
L_1803e1ff8_0:;
L_1803e1ff8_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803e1ff8_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803e1ff8_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803e1ff8_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803e1ff8_5:;
/* 1803e1ffb: divss xmm1, xmm2 */
L_1803e1ffb_0:;
L_1803e1ffb_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803e1ffb_2:;
/* 1803e1fff: test eax, eax */
L_1803e1fff_0:;
L_1803e1fff_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1fff_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1fff_3:;
wr(s->u,71,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803e1fff_4:;
wr(s->r,519,1,(sx(rd(s->u,71,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1fff_5:;
wr(s->r,518,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803e1fff_6:;
wr(s->u,65,4,(rd(s->u,71,4)&((U)UINT64_C(0xff))));
L_1803e1fff_7:;
wr(s->u,69,1,pop(rd(s->u,65,4),4));
L_1803e1fff_8:;
wr(s->u,70,1,(rd(s->u,69,1)&((U)UINT64_C(0x1))));
L_1803e1fff_9:;
wr(s->r,514,1,(rd(s->u,70,1)==((U)UINT64_C(0x0))));
L_1803e1fff_10:;
/* 1803e2001: jns 0x1803e2008 */
L_1803e2001_0:;
L_1803e2001_1:;
wr(s->u,64,1,(!rd(s->r,519,1)));
L_1803e2001_2:;
if(rd(s->u,64,1)){return UINT64_C(0x1803e2008);}
L_1803e2001_3:;
return UINT64_C(0x1803e2003);
}
uint64_t b_1803e1ff0(CPU*s){
/* 1803e1ff0: movd xmm1, r8d */
L_1803e1ff0_0:;
L_1803e1ff0_1:;
wr(s->r,4672,16,rd(s->r,128,4));
L_1803e1ff0_2:;
/* 1803e1ff5: lea eax, [rdx - 1] */
L_1803e1ff5_0:;
L_1803e1ff5_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xffffffffffffffff))));
L_1803e1ff5_2:;
wr(s->r,0,4,(rd(s->u,0,8) >> (((U)UINT64_C(0x0))*8)));
L_1803e1ff5_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803e1ff5_4:;
/* 1803e1ff8: cvtdq2ps xmm1, xmm1 */
L_1803e1ff8_0:;
L_1803e1ff8_1:;
wr(s->r,4672,4,fb((double)sx(rd(s->r,4672,4),4),4));
L_1803e1ff8_2:;
wr(s->r,4676,4,fb((double)sx(rd(s->r,4676,4),4),4));
L_1803e1ff8_3:;
wr(s->r,4680,4,fb((double)sx(rd(s->r,4680,4),4),4));
L_1803e1ff8_4:;
wr(s->r,4684,4,fb((double)sx(rd(s->r,4684,4),4),4));
L_1803e1ff8_5:;
/* 1803e1ffb: divss xmm1, xmm2 */
L_1803e1ffb_0:;
L_1803e1ffb_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)/fv(rd(s->r,4736,4),4),4));
L_1803e1ffb_2:;
/* 1803e1fff: test eax, eax */
L_1803e1fff_0:;
L_1803e1fff_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803e1fff_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803e1fff_3:;
wr(s->u,15,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803e1fff_4:;
wr(s->r,519,1,(sx(rd(s->u,15,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803e1fff_5:;
wr(s->r,518,1,(rd(s->u,15,4)==((U)UINT64_C(0x0))));
L_1803e1fff_6:;
wr(s->u,9,4,(rd(s->u,15,4)&((U)UINT64_C(0xff))));
L_1803e1fff_7:;
wr(s->u,13,1,pop(rd(s->u,9,4),4));
L_1803e1fff_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803e1fff_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803e1fff_10:;
/* 1803e2001: jns 0x1803e2008 */
L_1803e2001_0:;
L_1803e2001_1:;
wr(s->u,8,1,(!rd(s->r,519,1)));
L_1803e2001_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803e2008);}
L_1803e2001_3:;
return UINT64_C(0x1803e2003);
}
