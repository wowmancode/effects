#include "lift_runtime.h"
uint64_t b_1803fd001(CPU*s){
/* 1803fd001: je 0x1803fd00f */
L_1803fd001_0:;
L_1803fd001_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd00f);}
L_1803fd001_2:;
return UINT64_C(0x1803fd003);
}
uint64_t b_1803fd003(CPU*s){
/* 1803fd003: call 0x18042f124 */
L_1803fd003_0:;
L_1803fd003_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd003_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fd008)));
L_1803fd003_3:;
return (uint64_t)UINT64_C(0x18042f124);
L_1803fd003_4:;
return UINT64_C(0x1803fd008);
}
uint64_t b_1803fd008(CPU*s){
/* 1803fd008: xor eax, eax */
L_1803fd008_0:;
L_1803fd008_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd008_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd008_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd008_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd008_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd008_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd008_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd008_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fd008_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd008_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd008_11:;
/* 1803fd00a: add rsp, 0x28 */
L_1803fd00a_0:;
L_1803fd00a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd00a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd00a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd00a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd00a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd00a_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd00a_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd00a_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd00a_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd00a_10:;
/* 1803fd00e: ret  */
L_1803fd00e_0:;
L_1803fd00e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd00e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd00e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd00e_4:;
return UINT64_C(0x1803fd00f);
}
uint64_t b_1803fd00f(CPU*s){
/* 1803fd00f: mov rcx, rdx */
L_1803fd00f_0:;
L_1803fd00f_1:;
wr(s->r,8,8,rd(s->r,16,8));
L_1803fd00f_2:;
/* 1803fd012: mov edx, r8d */
L_1803fd012_0:;
L_1803fd012_1:;
wr(s->r,16,4,rd(s->r,128,4));
L_1803fd012_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fd012_3:;
/* 1803fd015: call 0x1803fc9ec */
L_1803fd015_0:;
L_1803fd015_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd015_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fd01a)));
L_1803fd015_3:;
return (uint64_t)UINT64_C(0x1803fc9ec);
L_1803fd015_4:;
return UINT64_C(0x1803fd01a);
}
uint64_t b_1803fd01a(CPU*s){
/* 1803fd01a: add rsp, 0x28 */
L_1803fd01a_0:;
L_1803fd01a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd01a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd01a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd01a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd01a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd01a_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd01a_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd01a_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd01a_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd01a_10:;
/* 1803fd01e: ret  */
L_1803fd01e_0:;
L_1803fd01e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd01e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd01e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd01e_4:;
return UINT64_C(0x1803fd01f);
}
uint64_t b_1803fd01f(CPU*s){
/* 1803fd01f: mov eax, 0xfffffffa */
L_1803fd01f_0:;
L_1803fd01f_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fd01f_2:;
/* 1803fd024: add rsp, 0x28 */
L_1803fd024_0:;
L_1803fd024_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd024_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd024_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd024_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd024_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd024_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd024_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd024_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd024_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd024_10:;
/* 1803fd028: ret  */
L_1803fd028_0:;
L_1803fd028_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd028_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd028_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd028_4:;
return UINT64_C(0x1803fd029);
}
uint64_t b_1803fd029(CPU*s){
/* 1803fd029: mov eax, 0xfffffff8 */
L_1803fd029_0:;
L_1803fd029_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fd029_2:;
/* 1803fd02e: add rsp, 0x28 */
L_1803fd02e_0:;
L_1803fd02e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd02e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd02e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd02e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd02e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd02e_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd02e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd02e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd02e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd02e_10:;
/* 1803fd032: ret  */
L_1803fd032_0:;
L_1803fd032_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd032_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd032_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd032_4:;
return UINT64_C(0x1803fd033);
}
uint64_t b_1803fd034(CPU*s){
/* 1803fd034: sub rsp, 0x28 */
L_1803fd034_0:;
L_1803fd034_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fd034_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fd034_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fd034_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd034_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd034_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd034_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd034_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd034_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd034_10:;
/* 1803fd038: mov r9d, r8d */
L_1803fd038_0:;
L_1803fd038_1:;
wr(s->r,136,4,rd(s->r,128,4));
L_1803fd038_2:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fd038_3:;
/* 1803fd03b: test rcx, rcx */
L_1803fd03b_0:;
L_1803fd03b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd03b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd03b_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fd03b_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd03b_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd03b_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd03b_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd03b_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd03b_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd03b_10:;
/* 1803fd03e: je 0x1803fd061 */
L_1803fd03e_0:;
L_1803fd03e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd061);}
L_1803fd03e_2:;
return UINT64_C(0x1803fd040);
}
uint64_t b_1803fd040(CPU*s){
/* 1803fd040: test rdx, rdx */
L_1803fd040_0:;
L_1803fd040_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd040_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd040_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fd040_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd040_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd040_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd040_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd040_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd040_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd040_10:;
/* 1803fd043: je 0x1803fd061 */
L_1803fd043_0:;
L_1803fd043_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd061);}
L_1803fd043_2:;
return UINT64_C(0x1803fd045);
}
uint64_t b_1803fd045(CPU*s){
/* 1803fd045: test r9d, r9d */
L_1803fd045_0:;
L_1803fd045_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd045_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd045_3:;
wr(s->u,9,4,(rd(s->r,136,4)&rd(s->r,136,4)));
L_1803fd045_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd045_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fd045_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fd045_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fd045_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fd045_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fd045_10:;
/* 1803fd048: jg 0x1803fd054 */
L_1803fd048_0:;
L_1803fd048_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fd048_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fd048_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fd048_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fd054);}
L_1803fd048_5:;
return UINT64_C(0x1803fd04a);
}
uint64_t b_1803fd04a(CPU*s){
/* 1803fd04a: mov eax, 0xfffffffa */
L_1803fd04a_0:;
L_1803fd04a_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fd04a_2:;
/* 1803fd04f: add rsp, 0x28 */
L_1803fd04f_0:;
L_1803fd04f_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd04f_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd04f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd04f_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd04f_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd04f_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd04f_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd04f_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd04f_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd04f_10:;
/* 1803fd053: ret  */
L_1803fd053_0:;
L_1803fd053_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd053_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd053_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd053_4:;
return UINT64_C(0x1803fd054);
}
uint64_t b_1803fd054(CPU*s){
/* 1803fd054: mov r8, rdx */
L_1803fd054_0:;
L_1803fd054_1:;
wr(s->r,128,8,rd(s->r,16,8));
L_1803fd054_2:;
/* 1803fd057: call 0x18042f244 */
L_1803fd057_0:;
L_1803fd057_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd057_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fd05c)));
L_1803fd057_3:;
return (uint64_t)UINT64_C(0x18042f244);
L_1803fd057_4:;
return UINT64_C(0x1803fd05c);
}
uint64_t b_1803fd05c(CPU*s){
/* 1803fd05c: add rsp, 0x28 */
L_1803fd05c_0:;
L_1803fd05c_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd05c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd05c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd05c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd05c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd05c_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd05c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd05c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd05c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd05c_10:;
/* 1803fd060: ret  */
L_1803fd060_0:;
L_1803fd060_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd060_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd060_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd060_4:;
return UINT64_C(0x1803fd061);
}
uint64_t b_1803fd061(CPU*s){
/* 1803fd061: mov eax, 0xfffffff8 */
L_1803fd061_0:;
L_1803fd061_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fd061_2:;
/* 1803fd066: add rsp, 0x28 */
L_1803fd066_0:;
L_1803fd066_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd066_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd066_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd066_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd066_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd066_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd066_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd066_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd066_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd066_10:;
/* 1803fd06a: ret  */
L_1803fd06a_0:;
L_1803fd06a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd06a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd06a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd06a_4:;
return UINT64_C(0x1803fd06b);
}
uint64_t b_1803fd06c(CPU*s){
/* 1803fd06c: push r13 */
L_1803fd06c_0:;
L_1803fd06c_1:;
wr(s->u,0,8,rd(s->r,168,8));
L_1803fd06c_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd06c_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,0,8));
L_1803fd06c_4:;
/* 1803fd06e: sub rsp, 0x20 */
L_1803fd06e_0:;
L_1803fd06e_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x20))));
L_1803fd06e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,1));
L_1803fd06e_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x20))));
L_1803fd06e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd06e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd06e_6:;
wr(s->u,8,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd06e_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fd06e_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fd06e_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fd06e_10:;
/* 1803fd072: movsxd r11, r9d */
L_1803fd072_0:;
L_1803fd072_1:;
wr(s->r,152,8,(U)sx(rd(s->r,136,4),4));
L_1803fd072_2:;
/* 1803fd075: test rcx, rcx */
L_1803fd075_0:;
L_1803fd075_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd075_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd075_3:;
wr(s->u,18,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fd075_4:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd075_5:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803fd075_6:;
wr(s->u,8,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803fd075_7:;
wr(s->u,16,1,pop(rd(s->u,8,8),8));
L_1803fd075_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fd075_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fd075_10:;
/* 1803fd078: je 0x1803fd248 */
L_1803fd078_0:;
L_1803fd078_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd248);}
L_1803fd078_2:;
return UINT64_C(0x1803fd07e);
}
uint64_t b_1803fd07e(CPU*s){
/* 1803fd07e: test rdx, rdx */
L_1803fd07e_0:;
L_1803fd07e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd07e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd07e_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fd07e_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd07e_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd07e_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd07e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd07e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd07e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd07e_10:;
/* 1803fd081: je 0x1803fd248 */
L_1803fd081_0:;
L_1803fd081_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd248);}
L_1803fd081_2:;
return UINT64_C(0x1803fd087);
}
uint64_t b_1803fd087(CPU*s){
/* 1803fd087: test r8, r8 */
L_1803fd087_0:;
L_1803fd087_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd087_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd087_3:;
wr(s->u,10,8,(rd(s->r,128,8)&rd(s->r,128,8)));
L_1803fd087_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd087_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd087_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd087_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd087_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd087_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd087_10:;
/* 1803fd08a: je 0x1803fd248 */
L_1803fd08a_0:;
L_1803fd08a_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd248);}
L_1803fd08a_2:;
return UINT64_C(0x1803fd090);
}
uint64_t b_1803fd090(CPU*s){
/* 1803fd090: test r11, r11 */
L_1803fd090_0:;
L_1803fd090_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd090_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd090_3:;
wr(s->u,12,8,(rd(s->r,152,8)&rd(s->r,152,8)));
L_1803fd090_4:;
wr(s->r,519,1,(sx(rd(s->u,12,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd090_5:;
wr(s->r,518,1,(rd(s->u,12,8)==((U)UINT64_C(0x0))));
L_1803fd090_6:;
wr(s->u,2,8,(rd(s->u,12,8)&((U)UINT64_C(0xff))));
L_1803fd090_7:;
wr(s->u,10,1,pop(rd(s->u,2,8),8));
L_1803fd090_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fd090_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fd090_10:;
/* 1803fd093: jle 0x1803fd23c */
L_1803fd093_0:;
L_1803fd093_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fd093_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fd093_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fd23c);}
L_1803fd093_4:;
return UINT64_C(0x1803fd099);
}
uint64_t b_1803fd099(CPU*s){
/* 1803fd099: cmp r8, rcx */
L_1803fd099_0:;
L_1803fd099_1:;
wr(s->u,11,8,rd(s->r,8,8));
L_1803fd099_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,11,8)));
L_1803fd099_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,11,8),8,1));
L_1803fd099_4:;
wr(s->u,19,8,(rd(s->r,128,8)-rd(s->u,11,8)));
L_1803fd099_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd099_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fd099_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fd099_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fd099_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fd099_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fd099_11:;
/* 1803fd09c: jbe 0x1803fd0b0 */
L_1803fd09c_0:;
L_1803fd09c_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fd09c_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fd0b0);}
L_1803fd09c_3:;
return UINT64_C(0x1803fd09e);
}
uint64_t b_1803fd09e(CPU*s){
/* 1803fd09e: mov rax, r11 */
L_1803fd09e_0:;
L_1803fd09e_1:;
wr(s->r,0,8,rd(s->r,152,8));
L_1803fd09e_2:;
/* 1803fd0a1: shl rax, 2 */
L_1803fd0a1_0:;
L_1803fd0a1_1:;
wr(s->u,71,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fd0a1_2:;
wr(s->u,75,8,rd(s->r,0,8));
L_1803fd0a1_3:;
wr(s->r,0,8,((rd(s->u,71,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,71,4))));
L_1803fd0a1_4:;
wr(s->u,38,1,(rd(s->u,71,4)==((U)UINT64_C(0x0))));
L_1803fd0a1_5:;
wr(s->u,39,4,(rd(s->u,71,4)-((U)UINT64_C(0x1))));
L_1803fd0a1_6:;
wr(s->u,43,8,((rd(s->u,39,4)>=64)?0:(rd(s->u,75,8)<<rd(s->u,39,4))));
L_1803fd0a1_7:;
wr(s->u,51,1,(sx(rd(s->u,43,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0a1_8:;
wr(s->u,0,1,rd(s->u,38,1));
L_1803fd0a1_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fd0a1_10:;
wr(s->u,2,1,(!rd(s->u,38,1)));
L_1803fd0a1_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fd0a1_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,51,1)));
L_1803fd0a1_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fd0a1_14:;
wr(s->u,52,1,(rd(s->u,71,4)==((U)UINT64_C(0x1))));
L_1803fd0a1_15:;
wr(s->u,53,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0a1_16:;
wr(s->u,54,1,(rd(s->r,512,1)^rd(s->u,53,1)));
L_1803fd0a1_17:;
wr(s->u,0,1,rd(s->u,52,1));
L_1803fd0a1_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,54,1)));
L_1803fd0a1_19:;
wr(s->u,2,1,(!rd(s->u,52,1)));
L_1803fd0a1_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fd0a1_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fd0a1_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fd0a1_23:;
wr(s->u,15,1,(rd(s->u,71,4)!=((U)UINT64_C(0x0))));
L_1803fd0a1_24:;
wr(s->u,16,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0a1_25:;
wr(s->u,17,1,(!rd(s->u,15,1)));
L_1803fd0a1_26:;
wr(s->u,18,1,(rd(s->u,17,1)&rd(s->r,519,1)));
L_1803fd0a1_27:;
wr(s->u,19,1,(rd(s->u,15,1)&rd(s->u,16,1)));
L_1803fd0a1_28:;
wr(s->r,519,1,(rd(s->u,18,1)|rd(s->u,19,1)));
L_1803fd0a1_29:;
wr(s->u,20,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fd0a1_30:;
wr(s->u,21,1,(!rd(s->u,15,1)));
L_1803fd0a1_31:;
wr(s->u,22,1,(rd(s->u,21,1)&rd(s->r,518,1)));
L_1803fd0a1_32:;
wr(s->u,23,1,(rd(s->u,15,1)&rd(s->u,20,1)));
L_1803fd0a1_33:;
wr(s->r,518,1,(rd(s->u,22,1)|rd(s->u,23,1)));
L_1803fd0a1_34:;
wr(s->u,24,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fd0a1_35:;
wr(s->u,32,1,pop(rd(s->u,24,8),8));
L_1803fd0a1_36:;
wr(s->u,33,1,(rd(s->u,32,1)&((U)UINT64_C(0x1))));
L_1803fd0a1_37:;
wr(s->u,34,1,(rd(s->u,33,1)==((U)UINT64_C(0x0))));
L_1803fd0a1_38:;
wr(s->u,35,1,(!rd(s->u,15,1)));
L_1803fd0a1_39:;
wr(s->u,36,1,(rd(s->u,35,1)&rd(s->r,514,1)));
L_1803fd0a1_40:;
wr(s->u,37,1,(rd(s->u,15,1)&rd(s->u,34,1)));
L_1803fd0a1_41:;
wr(s->r,514,1,(rd(s->u,36,1)|rd(s->u,37,1)));
L_1803fd0a1_42:;
/* 1803fd0a5: mov r9, r8 */
L_1803fd0a5_0:;
L_1803fd0a5_1:;
wr(s->r,136,8,rd(s->r,128,8));
L_1803fd0a5_2:;
/* 1803fd0a8: sub r9, rcx */
L_1803fd0a8_0:;
L_1803fd0a8_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,8,8)));
L_1803fd0a8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,8,8),8,1));
L_1803fd0a8_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,8,8)));
L_1803fd0a8_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0a8_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fd0a8_6:;
wr(s->u,5,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fd0a8_7:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fd0a8_8:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fd0a8_9:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fd0a8_10:;
/* 1803fd0ab: cmp rax, r9 */
L_1803fd0ab_0:;
L_1803fd0ab_1:;
wr(s->u,55,8,rd(s->r,136,8));
L_1803fd0ab_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,55,8)));
L_1803fd0ab_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,55,8),8,1));
L_1803fd0ab_4:;
wr(s->u,63,8,(rd(s->r,0,8)-rd(s->u,55,8)));
L_1803fd0ab_5:;
wr(s->r,519,1,(sx(rd(s->u,63,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0ab_6:;
wr(s->r,518,1,(rd(s->u,63,8)==((U)UINT64_C(0x0))));
L_1803fd0ab_7:;
wr(s->u,5,8,(rd(s->u,63,8)&((U)UINT64_C(0xff))));
L_1803fd0ab_8:;
wr(s->u,13,1,pop(rd(s->u,5,8),8));
L_1803fd0ab_9:;
wr(s->u,14,1,(rd(s->u,13,1)&((U)UINT64_C(0x1))));
L_1803fd0ab_10:;
wr(s->r,514,1,(rd(s->u,14,1)==((U)UINT64_C(0x0))));
L_1803fd0ab_11:;
/* 1803fd0ae: jb 0x1803fd0cf */
L_1803fd0ae_0:;
L_1803fd0ae_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fd0cf);}
L_1803fd0ae_2:;
return UINT64_C(0x1803fd0b0);
}
uint64_t b_1803fd0b0(CPU*s){
/* 1803fd0b0: cmp rcx, r8 */
L_1803fd0b0_0:;
L_1803fd0b0_1:;
wr(s->u,11,8,rd(s->r,128,8));
L_1803fd0b0_2:;
wr(s->r,512,1,(rd(s->r,8,8)<rd(s->u,11,8)));
L_1803fd0b0_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,8,8),rd(s->u,11,8),8,1));
L_1803fd0b0_4:;
wr(s->u,19,8,(rd(s->r,8,8)-rd(s->u,11,8)));
L_1803fd0b0_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0b0_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fd0b0_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fd0b0_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fd0b0_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fd0b0_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fd0b0_11:;
/* 1803fd0b3: jbe 0x1803fd20e */
L_1803fd0b3_0:;
L_1803fd0b3_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fd0b3_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fd20e);}
L_1803fd0b3_3:;
return UINT64_C(0x1803fd0b9);
}
uint64_t b_1803fd0b9(CPU*s){
/* 1803fd0b9: mov rax, r11 */
L_1803fd0b9_0:;
L_1803fd0b9_1:;
wr(s->r,0,8,rd(s->r,152,8));
L_1803fd0b9_2:;
/* 1803fd0bc: shl rax, 2 */
L_1803fd0bc_0:;
L_1803fd0bc_1:;
wr(s->u,72,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x3f))));
L_1803fd0bc_2:;
wr(s->u,76,8,rd(s->r,0,8));
L_1803fd0bc_3:;
wr(s->r,0,8,((rd(s->u,72,4)>=64)?0:(rd(s->r,0,8)<<rd(s->u,72,4))));
L_1803fd0bc_4:;
wr(s->u,39,1,(rd(s->u,72,4)==((U)UINT64_C(0x0))));
L_1803fd0bc_5:;
wr(s->u,40,4,(rd(s->u,72,4)-((U)UINT64_C(0x1))));
L_1803fd0bc_6:;
wr(s->u,44,8,((rd(s->u,40,4)>=64)?0:(rd(s->u,76,8)<<rd(s->u,40,4))));
L_1803fd0bc_7:;
wr(s->u,52,1,(sx(rd(s->u,44,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0bc_8:;
wr(s->u,0,1,rd(s->u,39,1));
L_1803fd0bc_9:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fd0bc_10:;
wr(s->u,2,1,(!rd(s->u,39,1)));
L_1803fd0bc_11:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fd0bc_12:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,52,1)));
L_1803fd0bc_13:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fd0bc_14:;
wr(s->u,53,1,(rd(s->u,72,4)==((U)UINT64_C(0x1))));
L_1803fd0bc_15:;
wr(s->u,54,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0bc_16:;
wr(s->u,55,1,(rd(s->r,512,1)^rd(s->u,54,1)));
L_1803fd0bc_17:;
wr(s->u,0,1,rd(s->u,53,1));
L_1803fd0bc_18:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->u,55,1)));
L_1803fd0bc_19:;
wr(s->u,2,1,(!rd(s->u,53,1)));
L_1803fd0bc_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fd0bc_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fd0bc_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fd0bc_23:;
wr(s->u,16,1,(rd(s->u,72,4)!=((U)UINT64_C(0x0))));
L_1803fd0bc_24:;
wr(s->u,17,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0bc_25:;
wr(s->u,18,1,(!rd(s->u,16,1)));
L_1803fd0bc_26:;
wr(s->u,19,1,(rd(s->u,18,1)&rd(s->r,519,1)));
L_1803fd0bc_27:;
wr(s->u,20,1,(rd(s->u,16,1)&rd(s->u,17,1)));
L_1803fd0bc_28:;
wr(s->r,519,1,(rd(s->u,19,1)|rd(s->u,20,1)));
L_1803fd0bc_29:;
wr(s->u,21,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fd0bc_30:;
wr(s->u,22,1,(!rd(s->u,16,1)));
L_1803fd0bc_31:;
wr(s->u,23,1,(rd(s->u,22,1)&rd(s->r,518,1)));
L_1803fd0bc_32:;
wr(s->u,24,1,(rd(s->u,16,1)&rd(s->u,21,1)));
L_1803fd0bc_33:;
wr(s->r,518,1,(rd(s->u,23,1)|rd(s->u,24,1)));
L_1803fd0bc_34:;
wr(s->u,25,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fd0bc_35:;
wr(s->u,33,1,pop(rd(s->u,25,8),8));
L_1803fd0bc_36:;
wr(s->u,34,1,(rd(s->u,33,1)&((U)UINT64_C(0x1))));
L_1803fd0bc_37:;
wr(s->u,35,1,(rd(s->u,34,1)==((U)UINT64_C(0x0))));
L_1803fd0bc_38:;
wr(s->u,36,1,(!rd(s->u,16,1)));
L_1803fd0bc_39:;
wr(s->u,37,1,(rd(s->u,36,1)&rd(s->r,514,1)));
L_1803fd0bc_40:;
wr(s->u,38,1,(rd(s->u,16,1)&rd(s->u,35,1)));
L_1803fd0bc_41:;
wr(s->r,514,1,(rd(s->u,37,1)|rd(s->u,38,1)));
L_1803fd0bc_42:;
/* 1803fd0c0: mov r9, rcx */
L_1803fd0c0_0:;
L_1803fd0c0_1:;
wr(s->r,136,8,rd(s->r,8,8));
L_1803fd0c0_2:;
/* 1803fd0c3: sub r9, r8 */
L_1803fd0c3_0:;
L_1803fd0c3_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,128,8)));
L_1803fd0c3_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,128,8),8,1));
L_1803fd0c3_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,128,8)));
L_1803fd0c3_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0c3_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fd0c3_6:;
wr(s->u,6,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fd0c3_7:;
wr(s->u,14,1,pop(rd(s->u,6,8),8));
L_1803fd0c3_8:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1803fd0c3_9:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1803fd0c3_10:;
/* 1803fd0c6: cmp rax, r9 */
L_1803fd0c6_0:;
L_1803fd0c6_1:;
wr(s->u,56,8,rd(s->r,136,8));
L_1803fd0c6_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,56,8)));
L_1803fd0c6_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,56,8),8,1));
L_1803fd0c6_4:;
wr(s->u,64,8,(rd(s->r,0,8)-rd(s->u,56,8)));
L_1803fd0c6_5:;
wr(s->r,519,1,(sx(rd(s->u,64,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0c6_6:;
wr(s->r,518,1,(rd(s->u,64,8)==((U)UINT64_C(0x0))));
L_1803fd0c6_7:;
wr(s->u,6,8,(rd(s->u,64,8)&((U)UINT64_C(0xff))));
L_1803fd0c6_8:;
wr(s->u,14,1,pop(rd(s->u,6,8),8));
L_1803fd0c6_9:;
wr(s->u,15,1,(rd(s->u,14,1)&((U)UINT64_C(0x1))));
L_1803fd0c6_10:;
wr(s->r,514,1,(rd(s->u,15,1)==((U)UINT64_C(0x0))));
L_1803fd0c6_11:;
/* 1803fd0c9: jae 0x1803fd20e */
L_1803fd0c9_0:;
L_1803fd0c9_1:;
wr(s->u,5,1,(!rd(s->r,512,1)));
L_1803fd0c9_2:;
if(rd(s->u,5,1)){return UINT64_C(0x1803fd20e);}
L_1803fd0c9_3:;
return UINT64_C(0x1803fd0cf);
}
uint64_t b_1803fd0cf(CPU*s){
/* 1803fd0cf: cmp r8, rdx */
L_1803fd0cf_0:;
L_1803fd0cf_1:;
wr(s->u,11,8,rd(s->r,16,8));
L_1803fd0cf_2:;
wr(s->r,512,1,(rd(s->r,128,8)<rd(s->u,11,8)));
L_1803fd0cf_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),rd(s->u,11,8),8,1));
L_1803fd0cf_4:;
wr(s->u,19,8,(rd(s->r,128,8)-rd(s->u,11,8)));
L_1803fd0cf_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0cf_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fd0cf_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fd0cf_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fd0cf_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fd0cf_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fd0cf_11:;
/* 1803fd0d2: jbe 0x1803fd0df */
L_1803fd0d2_0:;
L_1803fd0d2_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fd0d2_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fd0df);}
L_1803fd0d2_3:;
return UINT64_C(0x1803fd0d4);
}
uint64_t b_1803fd0d4(CPU*s){
/* 1803fd0d4: mov r9, r8 */
L_1803fd0d4_0:;
L_1803fd0d4_1:;
wr(s->r,136,8,rd(s->r,128,8));
L_1803fd0d4_2:;
/* 1803fd0d7: sub r9, rdx */
L_1803fd0d7_0:;
L_1803fd0d7_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,16,8)));
L_1803fd0d7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,16,8),8,1));
L_1803fd0d7_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,16,8)));
L_1803fd0d7_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0d7_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fd0d7_6:;
wr(s->u,0,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fd0d7_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd0d7_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd0d7_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd0d7_10:;
/* 1803fd0da: cmp rax, r9 */
L_1803fd0da_0:;
L_1803fd0da_1:;
wr(s->u,10,8,rd(s->r,136,8));
L_1803fd0da_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,10,8)));
L_1803fd0da_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,10,8),8,1));
L_1803fd0da_4:;
wr(s->u,18,8,(rd(s->r,0,8)-rd(s->u,10,8)));
L_1803fd0da_5:;
wr(s->r,519,1,(sx(rd(s->u,18,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0da_6:;
wr(s->r,518,1,(rd(s->u,18,8)==((U)UINT64_C(0x0))));
L_1803fd0da_7:;
wr(s->u,0,8,(rd(s->u,18,8)&((U)UINT64_C(0xff))));
L_1803fd0da_8:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd0da_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd0da_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd0da_11:;
/* 1803fd0dd: jb 0x1803fd0f7 */
L_1803fd0dd_0:;
L_1803fd0dd_1:;
if(rd(s->r,512,1)){return UINT64_C(0x1803fd0f7);}
L_1803fd0dd_2:;
return UINT64_C(0x1803fd0df);
}
uint64_t b_1803fd0df(CPU*s){
/* 1803fd0df: cmp rdx, r8 */
L_1803fd0df_0:;
L_1803fd0df_1:;
wr(s->u,11,8,rd(s->r,128,8));
L_1803fd0df_2:;
wr(s->r,512,1,(rd(s->r,16,8)<rd(s->u,11,8)));
L_1803fd0df_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,16,8),rd(s->u,11,8),8,1));
L_1803fd0df_4:;
wr(s->u,19,8,(rd(s->r,16,8)-rd(s->u,11,8)));
L_1803fd0df_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0df_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fd0df_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fd0df_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fd0df_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fd0df_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fd0df_11:;
/* 1803fd0e2: jbe 0x1803fd20e */
L_1803fd0e2_0:;
L_1803fd0e2_1:;
wr(s->u,0,1,((rd(s->r,512,1)!=0)||(rd(s->r,518,1)!=0)));
L_1803fd0e2_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fd20e);}
L_1803fd0e2_3:;
return UINT64_C(0x1803fd0e8);
}
uint64_t b_1803fd0e8(CPU*s){
/* 1803fd0e8: mov r9, rdx */
L_1803fd0e8_0:;
L_1803fd0e8_1:;
wr(s->r,136,8,rd(s->r,16,8));
L_1803fd0e8_2:;
/* 1803fd0eb: sub r9, r8 */
L_1803fd0eb_0:;
L_1803fd0eb_1:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->r,128,8)));
L_1803fd0eb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->r,128,8),8,1));
L_1803fd0eb_3:;
wr(s->r,136,8,(rd(s->r,136,8)-rd(s->r,128,8)));
L_1803fd0eb_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0eb_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fd0eb_6:;
wr(s->u,1,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fd0eb_7:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fd0eb_8:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fd0eb_9:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fd0eb_10:;
/* 1803fd0ee: cmp rax, r9 */
L_1803fd0ee_0:;
L_1803fd0ee_1:;
wr(s->u,11,8,rd(s->r,136,8));
L_1803fd0ee_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,11,8)));
L_1803fd0ee_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,11,8),8,1));
L_1803fd0ee_4:;
wr(s->u,19,8,(rd(s->r,0,8)-rd(s->u,11,8)));
L_1803fd0ee_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0ee_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fd0ee_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fd0ee_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fd0ee_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fd0ee_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fd0ee_11:;
/* 1803fd0f1: jae 0x1803fd20e */
L_1803fd0f1_0:;
L_1803fd0f1_1:;
wr(s->u,0,1,(!rd(s->r,512,1)));
L_1803fd0f1_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fd20e);}
L_1803fd0f1_3:;
return UINT64_C(0x1803fd0f7);
}
uint64_t b_1803fd0f7(CPU*s){
/* 1803fd0f7: mov r10, r8 */
L_1803fd0f7_0:;
L_1803fd0f7_1:;
wr(s->r,144,8,rd(s->r,128,8));
L_1803fd0f7_2:;
/* 1803fd0fa: and r10, 0xf */
L_1803fd0fa_0:;
L_1803fd0fa_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd0fa_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd0fa_3:;
wr(s->r,144,8,(rd(s->r,144,8)&((U)UINT64_C(0xf))));
L_1803fd0fa_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd0fa_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803fd0fa_6:;
wr(s->u,0,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803fd0fa_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd0fa_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd0fa_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd0fa_10:;
/* 1803fd0fe: test r10d, r10d */
L_1803fd0fe_0:;
L_1803fd0fe_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd0fe_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd0fe_3:;
wr(s->u,10,4,(rd(s->r,144,4)&rd(s->r,144,4)));
L_1803fd0fe_4:;
wr(s->r,519,1,(sx(rd(s->u,10,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd0fe_5:;
wr(s->r,518,1,(rd(s->u,10,4)==((U)UINT64_C(0x0))));
L_1803fd0fe_6:;
wr(s->u,0,4,(rd(s->u,10,4)&((U)UINT64_C(0xff))));
L_1803fd0fe_7:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fd0fe_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd0fe_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd0fe_10:;
/* 1803fd101: je 0x1803fd11b */
L_1803fd101_0:;
L_1803fd101_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd11b);}
L_1803fd101_2:;
return UINT64_C(0x1803fd103);
}
uint64_t b_1803fd103(CPU*s){
/* 1803fd103: test r10d, 3 */
L_1803fd103_0:;
L_1803fd103_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd103_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd103_3:;
wr(s->u,7,4,(rd(s->r,144,4)&((U)UINT64_C(0x3))));
L_1803fd103_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd103_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803fd103_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803fd103_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fd103_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fd103_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fd103_10:;
/* 1803fd10a: jne 0x1803fd238 */
L_1803fd10a_0:;
L_1803fd10a_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fd10a_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fd238);}
L_1803fd10a_3:;
return UINT64_C(0x1803fd110);
}
uint64_t b_1803fd110(CPU*s){
/* 1803fd110: neg r10d */
L_1803fd110_0:;
L_1803fd110_1:;
wr(s->r,512,1,(rd(s->r,144,4)!=((U)UINT64_C(0x0))));
L_1803fd110_2:;
wr(s->r,523,1,signed_overflow(((U)UINT64_C(0x0)),rd(s->r,144,4),4,1));
L_1803fd110_3:;
wr(s->r,144,4,(-rd(s->r,144,4)));
L_1803fd110_4:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd110_5:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fd110_6:;
wr(s->u,14,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fd110_7:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fd110_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fd110_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fd110_10:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fd110_11:;
/* 1803fd113: add r10d, 0x10 */
L_1803fd113_0:;
L_1803fd113_1:;
wr(s->r,512,1,(((rd(s->r,144,4)+((U)UINT64_C(0x10)))&(((U)1<<32)-1))<rd(s->r,144,4)));
L_1803fd113_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,4),((U)UINT64_C(0x10)),4,0));
L_1803fd113_3:;
wr(s->r,144,4,(rd(s->r,144,4)+((U)UINT64_C(0x10))));
L_1803fd113_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fd113_5:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd113_6:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fd113_7:;
wr(s->u,14,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fd113_8:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fd113_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fd113_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fd113_11:;
/* 1803fd117: shr r10d, 2 */
L_1803fd117_0:;
L_1803fd117_1:;
wr(s->u,75,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fd117_2:;
wr(s->u,79,4,rd(s->r,144,4));
L_1803fd117_3:;
wr(s->r,144,4,((rd(s->u,75,4)>=32)?0:(rd(s->r,144,4)>>rd(s->u,75,4))));
L_1803fd117_4:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fd117_5:;
wr(s->u,43,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803fd117_6:;
wr(s->u,44,4,(rd(s->u,75,4)-((U)UINT64_C(0x1))));
L_1803fd117_7:;
wr(s->u,48,4,((rd(s->u,44,4)>=32)?0:(rd(s->u,79,4)>>rd(s->u,44,4))));
L_1803fd117_8:;
wr(s->u,52,4,(rd(s->u,48,4)&((U)UINT64_C(0x1))));
L_1803fd117_9:;
wr(s->u,56,1,(rd(s->u,52,4)!=((U)UINT64_C(0x0))));
L_1803fd117_10:;
wr(s->u,0,1,rd(s->u,43,1));
L_1803fd117_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fd117_12:;
wr(s->u,2,1,(!rd(s->u,43,1)));
L_1803fd117_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fd117_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,56,1)));
L_1803fd117_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fd117_16:;
wr(s->u,57,1,(rd(s->u,75,4)==((U)UINT64_C(0x1))));
L_1803fd117_17:;
wr(s->u,58,1,(sx(rd(s->u,79,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd117_18:;
wr(s->u,0,1,rd(s->u,57,1));
L_1803fd117_19:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fd117_20:;
wr(s->u,2,1,(!rd(s->u,57,1)));
L_1803fd117_21:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fd117_22:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,58,1)));
L_1803fd117_23:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fd117_24:;
wr(s->u,24,1,(rd(s->u,75,4)!=((U)UINT64_C(0x0))));
L_1803fd117_25:;
wr(s->u,25,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd117_26:;
wr(s->u,26,1,(!rd(s->u,24,1)));
L_1803fd117_27:;
wr(s->u,27,1,(rd(s->u,26,1)&rd(s->r,519,1)));
L_1803fd117_28:;
wr(s->u,28,1,(rd(s->u,24,1)&rd(s->u,25,1)));
L_1803fd117_29:;
wr(s->r,519,1,(rd(s->u,27,1)|rd(s->u,28,1)));
L_1803fd117_30:;
wr(s->u,29,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fd117_31:;
wr(s->u,30,1,(!rd(s->u,24,1)));
L_1803fd117_32:;
wr(s->u,31,1,(rd(s->u,30,1)&rd(s->r,518,1)));
L_1803fd117_33:;
wr(s->u,32,1,(rd(s->u,24,1)&rd(s->u,29,1)));
L_1803fd117_34:;
wr(s->r,518,1,(rd(s->u,31,1)|rd(s->u,32,1)));
L_1803fd117_35:;
wr(s->u,33,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fd117_36:;
wr(s->u,37,1,pop(rd(s->u,33,4),4));
L_1803fd117_37:;
wr(s->u,38,1,(rd(s->u,37,1)&((U)UINT64_C(0x1))));
L_1803fd117_38:;
wr(s->u,39,1,(rd(s->u,38,1)==((U)UINT64_C(0x0))));
L_1803fd117_39:;
wr(s->u,40,1,(!rd(s->u,24,1)));
L_1803fd117_40:;
wr(s->u,41,1,(rd(s->u,40,1)&rd(s->r,514,1)));
L_1803fd117_41:;
wr(s->u,42,1,(rd(s->u,24,1)&rd(s->u,39,1)));
L_1803fd117_42:;
wr(s->r,514,1,(rd(s->u,41,1)|rd(s->u,42,1)));
L_1803fd117_43:;
/* 1803fd11b: movsxd r9, r10d */
L_1803fd11b_0:;
L_1803fd11b_1:;
wr(s->r,136,8,(U)sx(rd(s->r,144,4),4));
L_1803fd11b_2:;
/* 1803fd11e: lea rax, [r9 + 8] */
L_1803fd11e_0:;
L_1803fd11e_1:;
wr(s->u,5,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803fd11e_2:;
wr(s->r,0,8,rd(s->u,5,8));
L_1803fd11e_3:;
/* 1803fd122: cmp r11, rax */
L_1803fd122_0:;
L_1803fd122_1:;
wr(s->u,59,8,rd(s->r,0,8));
L_1803fd122_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,59,8)));
L_1803fd122_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,59,8),8,1));
L_1803fd122_4:;
wr(s->u,67,8,(rd(s->r,152,8)-rd(s->u,59,8)));
L_1803fd122_5:;
wr(s->r,519,1,(sx(rd(s->u,67,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd122_6:;
wr(s->r,518,1,(rd(s->u,67,8)==((U)UINT64_C(0x0))));
L_1803fd122_7:;
wr(s->u,14,8,(rd(s->u,67,8)&((U)UINT64_C(0xff))));
L_1803fd122_8:;
wr(s->u,22,1,pop(rd(s->u,14,8),8));
L_1803fd122_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fd122_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fd122_11:;
/* 1803fd125: jl 0x1803fd238 */
L_1803fd125_0:;
L_1803fd125_1:;
wr(s->u,13,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fd125_2:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fd238);}
L_1803fd125_3:;
return UINT64_C(0x1803fd12b);
}
uint64_t b_1803fd11b(CPU*s){
/* 1803fd11b: movsxd r9, r10d */
L_1803fd11b_0:;
L_1803fd11b_1:;
wr(s->r,136,8,(U)sx(rd(s->r,144,4),4));
L_1803fd11b_2:;
/* 1803fd11e: lea rax, [r9 + 8] */
L_1803fd11e_0:;
L_1803fd11e_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803fd11e_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803fd11e_3:;
/* 1803fd122: cmp r11, rax */
L_1803fd122_0:;
L_1803fd122_1:;
wr(s->u,19,8,rd(s->r,0,8));
L_1803fd122_2:;
wr(s->r,512,1,(rd(s->r,152,8)<rd(s->u,19,8)));
L_1803fd122_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,152,8),rd(s->u,19,8),8,1));
L_1803fd122_4:;
wr(s->u,27,8,(rd(s->r,152,8)-rd(s->u,19,8)));
L_1803fd122_5:;
wr(s->r,519,1,(sx(rd(s->u,27,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd122_6:;
wr(s->r,518,1,(rd(s->u,27,8)==((U)UINT64_C(0x0))));
L_1803fd122_7:;
wr(s->u,9,8,(rd(s->u,27,8)&((U)UINT64_C(0xff))));
L_1803fd122_8:;
wr(s->u,17,1,pop(rd(s->u,9,8),8));
L_1803fd122_9:;
wr(s->u,18,1,(rd(s->u,17,1)&((U)UINT64_C(0x1))));
L_1803fd122_10:;
wr(s->r,514,1,(rd(s->u,18,1)==((U)UINT64_C(0x0))));
L_1803fd122_11:;
/* 1803fd125: jl 0x1803fd238 */
L_1803fd125_0:;
L_1803fd125_1:;
wr(s->u,8,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fd125_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fd238);}
L_1803fd125_3:;
return UINT64_C(0x1803fd12b);
}
uint64_t b_1803fd12b(CPU*s){
/* 1803fd12b: mov r13d, r11d */
L_1803fd12b_0:;
L_1803fd12b_1:;
wr(s->r,168,4,rd(s->r,152,4));
L_1803fd12b_2:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fd12b_3:;
/* 1803fd12e: mov eax, r13d */
L_1803fd12e_0:;
L_1803fd12e_1:;
wr(s->r,0,4,rd(s->r,168,4));
L_1803fd12e_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd12e_3:;
/* 1803fd131: sub eax, r10d */
L_1803fd131_0:;
L_1803fd131_1:;
wr(s->r,512,1,(rd(s->r,0,4)<rd(s->r,144,4)));
L_1803fd131_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,4),rd(s->r,144,4),4,1));
L_1803fd131_3:;
wr(s->r,0,4,(rd(s->r,0,4)-rd(s->r,144,4)));
L_1803fd131_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd131_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd131_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd131_7:;
wr(s->u,2,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd131_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fd131_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fd131_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fd131_11:;
/* 1803fd134: and eax, 7 */
L_1803fd134_0:;
L_1803fd134_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd134_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd134_3:;
wr(s->r,0,4,(rd(s->r,0,4)&((U)UINT64_C(0x7))));
L_1803fd134_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd134_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd134_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd134_7:;
wr(s->u,2,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd134_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fd134_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fd134_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fd134_11:;
/* 1803fd137: sub r13d, eax */
L_1803fd137_0:;
L_1803fd137_1:;
wr(s->r,512,1,(rd(s->r,168,4)<rd(s->r,0,4)));
L_1803fd137_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,4),rd(s->r,0,4),4,1));
L_1803fd137_3:;
wr(s->r,168,4,(rd(s->r,168,4)-rd(s->r,0,4)));
L_1803fd137_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fd137_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd137_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fd137_7:;
wr(s->u,2,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fd137_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fd137_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fd137_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fd137_11:;
/* 1803fd13a: movsxd rax, r13d */
L_1803fd13a_0:;
L_1803fd13a_1:;
wr(s->r,0,8,(U)sx(rd(s->r,168,4),4));
L_1803fd13a_2:;
/* 1803fd13d: xor r13d, r13d */
L_1803fd13d_0:;
L_1803fd13d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd13d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd13d_3:;
wr(s->r,168,4,(rd(s->r,168,4)^rd(s->r,168,4)));
L_1803fd13d_4:;
wr(s->r,168,8,rd(s->r,168,4));
L_1803fd13d_5:;
wr(s->r,519,1,(sx(rd(s->r,168,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd13d_6:;
wr(s->r,518,1,(rd(s->r,168,4)==((U)UINT64_C(0x0))));
L_1803fd13d_7:;
wr(s->u,2,4,(rd(s->r,168,4)&((U)UINT64_C(0xff))));
L_1803fd13d_8:;
wr(s->u,10,1,pop(rd(s->u,2,4),4));
L_1803fd13d_9:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fd13d_10:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fd13d_11:;
/* 1803fd140: test r9, r9 */
L_1803fd140_0:;
L_1803fd140_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd140_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd140_3:;
wr(s->u,12,8,(rd(s->r,136,8)&rd(s->r,136,8)));
L_1803fd140_4:;
wr(s->r,519,1,(sx(rd(s->u,12,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd140_5:;
wr(s->r,518,1,(rd(s->u,12,8)==((U)UINT64_C(0x0))));
L_1803fd140_6:;
wr(s->u,2,8,(rd(s->u,12,8)&((U)UINT64_C(0xff))));
L_1803fd140_7:;
wr(s->u,10,1,pop(rd(s->u,2,8),8));
L_1803fd140_8:;
wr(s->u,11,1,(rd(s->u,10,1)&((U)UINT64_C(0x1))));
L_1803fd140_9:;
wr(s->r,514,1,(rd(s->u,11,1)==((U)UINT64_C(0x0))));
L_1803fd140_10:;
/* 1803fd143: jle 0x1803fd166 */
L_1803fd143_0:;
L_1803fd143_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fd143_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fd143_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fd166);}
L_1803fd143_4:;
return UINT64_C(0x1803fd145);
}
uint64_t b_1803fd145(CPU*s){
/* 1803fd145: movss xmm0, dword ptr [rcx + r13*4] */
L_1803fd145_0:;
L_1803fd145_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x4))));
L_1803fd145_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fd145_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fd145_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fd145_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fd145_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fd145_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fd145_8:;
/* 1803fd14b: mulss xmm0, dword ptr [rdx + r13*4] */
L_1803fd14b_0:;
L_1803fd14b_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x4))));
L_1803fd14b_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fd14b_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fd14b_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803fd14b_5:;
/* 1803fd151: addss xmm0, dword ptr [r8 + r13*4] */
L_1803fd151_0:;
L_1803fd151_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x4))));
L_1803fd151_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fd151_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fd151_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,16,4),4),4));
L_1803fd151_5:;
/* 1803fd157: movss dword ptr [r8 + r13*4], xmm0 */
L_1803fd157_0:;
L_1803fd157_1:;
wr(s->u,0,8,(rd(s->r,168,8)*((U)UINT64_C(0x4))));
L_1803fd157_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fd157_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fd157_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fd157_5:;
/* 1803fd15d: add r13, 1 */
L_1803fd15d_0:;
L_1803fd15d_1:;
wr(s->r,512,1,(((rd(s->r,168,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,168,8)));
L_1803fd15d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,8),((U)UINT64_C(0x1)),8,0));
L_1803fd15d_3:;
wr(s->r,168,8,(rd(s->r,168,8)+((U)UINT64_C(0x1))));
L_1803fd15d_4:;
wr(s->r,519,1,(sx(rd(s->r,168,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd15d_5:;
wr(s->r,518,1,(rd(s->r,168,8)==((U)UINT64_C(0x0))));
L_1803fd15d_6:;
wr(s->u,21,8,(rd(s->r,168,8)&((U)UINT64_C(0xff))));
L_1803fd15d_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fd15d_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fd15d_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fd15d_10:;
/* 1803fd161: cmp r13, r9 */
L_1803fd161_0:;
L_1803fd161_1:;
wr(s->u,31,8,rd(s->r,136,8));
L_1803fd161_2:;
wr(s->r,512,1,(rd(s->r,168,8)<rd(s->u,31,8)));
L_1803fd161_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,168,8),rd(s->u,31,8),8,1));
L_1803fd161_4:;
wr(s->u,39,8,(rd(s->r,168,8)-rd(s->u,31,8)));
L_1803fd161_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd161_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fd161_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fd161_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fd161_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fd161_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fd161_11:;
/* 1803fd164: jl 0x1803fd145 */
L_1803fd164_0:;
L_1803fd164_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fd164_2:;
if(rd(s->u,20,1)){goto L_1803fd145_0;}
L_1803fd164_3:;
return UINT64_C(0x1803fd166);
}
uint64_t b_1803fd166(CPU*s){
/* 1803fd166: movsxd r10, r10d */
L_1803fd166_0:;
L_1803fd166_1:;
wr(s->r,144,8,(U)sx(rd(s->r,144,4),4));
L_1803fd166_2:;
/* 1803fd169: lea r13, [rdx + r10*4] */
L_1803fd169_0:;
L_1803fd169_1:;
wr(s->u,0,8,(rd(s->r,144,8)*((U)UINT64_C(0x4))));
L_1803fd169_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fd169_3:;
wr(s->r,168,8,rd(s->u,8,8));
L_1803fd169_4:;
/* 1803fd16d: test r13, 0xf */
L_1803fd16d_0:;
L_1803fd16d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd16d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd16d_3:;
wr(s->u,26,8,(rd(s->r,168,8)&((U)UINT64_C(0xf))));
L_1803fd16d_4:;
wr(s->r,519,1,(sx(rd(s->u,26,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd16d_5:;
wr(s->r,518,1,(rd(s->u,26,8)==((U)UINT64_C(0x0))));
L_1803fd16d_6:;
wr(s->u,16,8,(rd(s->u,26,8)&((U)UINT64_C(0xff))));
L_1803fd16d_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803fd16d_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fd16d_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fd16d_10:;
/* 1803fd174: je 0x1803fd1b3 */
L_1803fd174_0:;
L_1803fd174_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd1b3);}
L_1803fd174_2:;
return UINT64_C(0x1803fd176);
}
uint64_t b_1803fd176(CPU*s){
/* 1803fd176: movups xmm1, xmmword ptr [rcx + r9*4] */
L_1803fd176_0:;
L_1803fd176_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd176_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fd176_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fd176_4:;
wr(s->u,99,16,rd(s->u,40,16));
L_1803fd176_5:;
wr(s->r,4672,4,rd(s->u,99,4));
L_1803fd176_6:;
wr(s->r,4676,4,rd(s->u,103,4));
L_1803fd176_7:;
wr(s->r,4680,4,rd(s->u,107,4));
L_1803fd176_8:;
wr(s->r,4684,4,rd(s->u,111,4));
L_1803fd176_9:;
/* 1803fd17b: movups xmm0, xmmword ptr [rdx + r9*4] */
L_1803fd17b_0:;
L_1803fd17b_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd17b_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fd17b_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fd17b_4:;
wr(s->u,99,16,rd(s->u,40,16));
L_1803fd17b_5:;
wr(s->r,4608,4,rd(s->u,99,4));
L_1803fd17b_6:;
wr(s->r,4612,4,rd(s->u,103,4));
L_1803fd17b_7:;
wr(s->r,4616,4,rd(s->u,107,4));
L_1803fd17b_8:;
wr(s->r,4620,4,rd(s->u,111,4));
L_1803fd17b_9:;
/* 1803fd180: mulps xmm1, xmm0 */
L_1803fd180_0:;
L_1803fd180_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4608,4),4),4));
L_1803fd180_2:;
wr(s->r,4676,4,fb(fv(rd(s->r,4676,4),4)*fv(rd(s->r,4612,4),4),4));
L_1803fd180_3:;
wr(s->r,4680,4,fb(fv(rd(s->r,4680,4),4)*fv(rd(s->r,4616,4),4),4));
L_1803fd180_4:;
wr(s->r,4684,4,fb(fv(rd(s->r,4684,4),4)*fv(rd(s->r,4620,4),4),4));
L_1803fd180_5:;
/* 1803fd183: addps xmm1, xmmword ptr [r8 + r9*4] */
L_1803fd183_0:;
L_1803fd183_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd183_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fd183_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fd183_4:;
wr(s->u,83,16,rd(s->u,40,16));
L_1803fd183_5:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->u,83,4),4),4));
L_1803fd183_6:;
wr(s->r,4676,4,fb(fv(rd(s->r,4676,4),4)+fv(rd(s->u,87,4),4),4));
L_1803fd183_7:;
wr(s->r,4680,4,fb(fv(rd(s->r,4680,4),4)+fv(rd(s->u,91,4),4),4));
L_1803fd183_8:;
wr(s->r,4684,4,fb(fv(rd(s->r,4684,4),4)+fv(rd(s->u,95,4),4),4));
L_1803fd183_9:;
/* 1803fd188: movaps xmmword ptr [r8 + r9*4], xmm1 */
L_1803fd188_0:;
L_1803fd188_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd188_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fd188_3:;
wr(s->u,40,16,rd(s->r,4672,16));
L_1803fd188_4:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,40,16));
L_1803fd188_5:;
/* 1803fd18d: movups xmm3, xmmword ptr [rcx + r9*4 + 0x10] */
L_1803fd18d_0:;
L_1803fd18d_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,8,8)));
L_1803fd18d_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd18d_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fd18d_4:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,32,8),16));
L_1803fd18d_5:;
wr(s->u,99,16,rd(s->u,40,16));
L_1803fd18d_6:;
wr(s->r,4800,4,rd(s->u,99,4));
L_1803fd18d_7:;
wr(s->r,4804,4,rd(s->u,103,4));
L_1803fd18d_8:;
wr(s->r,4808,4,rd(s->u,107,4));
L_1803fd18d_9:;
wr(s->r,4812,4,rd(s->u,111,4));
L_1803fd18d_10:;
/* 1803fd193: movups xmm2, xmmword ptr [rdx + r9*4 + 0x10] */
L_1803fd193_0:;
L_1803fd193_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,16,8)));
L_1803fd193_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd193_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fd193_4:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,32,8),16));
L_1803fd193_5:;
wr(s->u,99,16,rd(s->u,40,16));
L_1803fd193_6:;
wr(s->r,4736,4,rd(s->u,99,4));
L_1803fd193_7:;
wr(s->r,4740,4,rd(s->u,103,4));
L_1803fd193_8:;
wr(s->r,4744,4,rd(s->u,107,4));
L_1803fd193_9:;
wr(s->r,4748,4,rd(s->u,111,4));
L_1803fd193_10:;
/* 1803fd199: mulps xmm3, xmm2 */
L_1803fd199_0:;
L_1803fd199_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4736,4),4),4));
L_1803fd199_2:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)*fv(rd(s->r,4740,4),4),4));
L_1803fd199_3:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)*fv(rd(s->r,4744,4),4),4));
L_1803fd199_4:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)*fv(rd(s->r,4748,4),4),4));
L_1803fd199_5:;
/* 1803fd19c: addps xmm3, xmmword ptr [r8 + r9*4 + 0x10] */
L_1803fd19c_0:;
L_1803fd19c_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803fd19c_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd19c_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fd19c_4:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,32,8),16));
L_1803fd19c_5:;
wr(s->u,83,16,rd(s->u,40,16));
L_1803fd19c_6:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)+fv(rd(s->u,83,4),4),4));
L_1803fd19c_7:;
wr(s->r,4804,4,fb(fv(rd(s->r,4804,4),4)+fv(rd(s->u,87,4),4),4));
L_1803fd19c_8:;
wr(s->r,4808,4,fb(fv(rd(s->r,4808,4),4)+fv(rd(s->u,91,4),4),4));
L_1803fd19c_9:;
wr(s->r,4812,4,fb(fv(rd(s->r,4812,4),4)+fv(rd(s->u,95,4),4),4));
L_1803fd19c_10:;
/* 1803fd1a2: movaps xmmword ptr [r8 + r9*4 + 0x10], xmm3 */
L_1803fd1a2_0:;
L_1803fd1a2_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803fd1a2_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd1a2_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fd1a2_4:;
wr(s->u,40,16,rd(s->r,4800,16));
L_1803fd1a2_5:;
mw((uint64_t)rd(s->u,32,8),16,rd(s->u,40,16));
L_1803fd1a2_6:;
/* 1803fd1a8: add r9, 8 */
L_1803fd1a8_0:;
L_1803fd1a8_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fd1a8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803fd1a8_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803fd1a8_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd1a8_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fd1a8_6:;
wr(s->u,57,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fd1a8_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803fd1a8_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803fd1a8_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803fd1a8_10:;
/* 1803fd1ac: cmp r9, rax */
L_1803fd1ac_0:;
L_1803fd1ac_1:;
wr(s->u,67,8,rd(s->r,0,8));
L_1803fd1ac_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,67,8)));
L_1803fd1ac_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,67,8),8,1));
L_1803fd1ac_4:;
wr(s->u,75,8,(rd(s->r,136,8)-rd(s->u,67,8)));
L_1803fd1ac_5:;
wr(s->r,519,1,(sx(rd(s->u,75,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd1ac_6:;
wr(s->r,518,1,(rd(s->u,75,8)==((U)UINT64_C(0x0))));
L_1803fd1ac_7:;
wr(s->u,57,8,(rd(s->u,75,8)&((U)UINT64_C(0xff))));
L_1803fd1ac_8:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803fd1ac_9:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803fd1ac_10:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803fd1ac_11:;
/* 1803fd1af: jl 0x1803fd176 */
L_1803fd1af_0:;
L_1803fd1af_1:;
wr(s->u,56,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fd1af_2:;
if(rd(s->u,56,1)){goto L_1803fd176_0;}
L_1803fd1af_3:;
return UINT64_C(0x1803fd1b1);
}
uint64_t b_1803fd1b1(CPU*s){
/* 1803fd1b1: jmp 0x1803fd1e8 */
L_1803fd1b1_0:;
L_1803fd1b1_1:;
return UINT64_C(0x1803fd1e8);
L_1803fd1b1_2:;
return UINT64_C(0x1803fd1b3);
}
uint64_t b_1803fd1b3(CPU*s){
/* 1803fd1b3: movups xmm0, xmmword ptr [rcx + r9*4] */
L_1803fd1b3_0:;
L_1803fd1b3_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd1b3_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fd1b3_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fd1b3_4:;
wr(s->u,99,16,rd(s->u,40,16));
L_1803fd1b3_5:;
wr(s->r,4608,4,rd(s->u,99,4));
L_1803fd1b3_6:;
wr(s->r,4612,4,rd(s->u,103,4));
L_1803fd1b3_7:;
wr(s->r,4616,4,rd(s->u,107,4));
L_1803fd1b3_8:;
wr(s->r,4620,4,rd(s->u,111,4));
L_1803fd1b3_9:;
/* 1803fd1b8: mulps xmm0, xmmword ptr [rdx + r9*4] */
L_1803fd1b8_0:;
L_1803fd1b8_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd1b8_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fd1b8_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fd1b8_4:;
wr(s->u,115,16,rd(s->u,40,16));
L_1803fd1b8_5:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,115,4),4),4));
L_1803fd1b8_6:;
wr(s->r,4612,4,fb(fv(rd(s->r,4612,4),4)*fv(rd(s->u,119,4),4),4));
L_1803fd1b8_7:;
wr(s->r,4616,4,fb(fv(rd(s->r,4616,4),4)*fv(rd(s->u,123,4),4),4));
L_1803fd1b8_8:;
wr(s->r,4620,4,fb(fv(rd(s->r,4620,4),4)*fv(rd(s->u,127,4),4),4));
L_1803fd1b8_9:;
/* 1803fd1bd: addps xmm0, xmmword ptr [r8 + r9*4] */
L_1803fd1bd_0:;
L_1803fd1bd_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd1bd_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fd1bd_3:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,8,8),16));
L_1803fd1bd_4:;
wr(s->u,83,16,rd(s->u,40,16));
L_1803fd1bd_5:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,83,4),4),4));
L_1803fd1bd_6:;
wr(s->r,4612,4,fb(fv(rd(s->r,4612,4),4)+fv(rd(s->u,87,4),4),4));
L_1803fd1bd_7:;
wr(s->r,4616,4,fb(fv(rd(s->r,4616,4),4)+fv(rd(s->u,91,4),4),4));
L_1803fd1bd_8:;
wr(s->r,4620,4,fb(fv(rd(s->r,4620,4),4)+fv(rd(s->u,95,4),4),4));
L_1803fd1bd_9:;
/* 1803fd1c2: movaps xmmword ptr [r8 + r9*4], xmm0 */
L_1803fd1c2_0:;
L_1803fd1c2_1:;
wr(s->u,0,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd1c2_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fd1c2_3:;
wr(s->u,40,16,rd(s->r,4608,16));
L_1803fd1c2_4:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,40,16));
L_1803fd1c2_5:;
/* 1803fd1c7: movups xmm1, xmmword ptr [rcx + r9*4 + 0x10] */
L_1803fd1c7_0:;
L_1803fd1c7_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,8,8)));
L_1803fd1c7_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd1c7_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fd1c7_4:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,32,8),16));
L_1803fd1c7_5:;
wr(s->u,99,16,rd(s->u,40,16));
L_1803fd1c7_6:;
wr(s->r,4672,4,rd(s->u,99,4));
L_1803fd1c7_7:;
wr(s->r,4676,4,rd(s->u,103,4));
L_1803fd1c7_8:;
wr(s->r,4680,4,rd(s->u,107,4));
L_1803fd1c7_9:;
wr(s->r,4684,4,rd(s->u,111,4));
L_1803fd1c7_10:;
/* 1803fd1cd: mulps xmm1, xmmword ptr [rdx + r9*4 + 0x10] */
L_1803fd1cd_0:;
L_1803fd1cd_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,16,8)));
L_1803fd1cd_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd1cd_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fd1cd_4:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,32,8),16));
L_1803fd1cd_5:;
wr(s->u,115,16,rd(s->u,40,16));
L_1803fd1cd_6:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->u,115,4),4),4));
L_1803fd1cd_7:;
wr(s->r,4676,4,fb(fv(rd(s->r,4676,4),4)*fv(rd(s->u,119,4),4),4));
L_1803fd1cd_8:;
wr(s->r,4680,4,fb(fv(rd(s->r,4680,4),4)*fv(rd(s->u,123,4),4),4));
L_1803fd1cd_9:;
wr(s->r,4684,4,fb(fv(rd(s->r,4684,4),4)*fv(rd(s->u,127,4),4),4));
L_1803fd1cd_10:;
/* 1803fd1d3: addps xmm1, xmmword ptr [r8 + r9*4 + 0x10] */
L_1803fd1d3_0:;
L_1803fd1d3_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803fd1d3_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd1d3_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fd1d3_4:;
wr(s->u,40,16,mr((uint64_t)rd(s->u,32,8),16));
L_1803fd1d3_5:;
wr(s->u,83,16,rd(s->u,40,16));
L_1803fd1d3_6:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->u,83,4),4),4));
L_1803fd1d3_7:;
wr(s->r,4676,4,fb(fv(rd(s->r,4676,4),4)+fv(rd(s->u,87,4),4),4));
L_1803fd1d3_8:;
wr(s->r,4680,4,fb(fv(rd(s->r,4680,4),4)+fv(rd(s->u,91,4),4),4));
L_1803fd1d3_9:;
wr(s->r,4684,4,fb(fv(rd(s->r,4684,4),4)+fv(rd(s->u,95,4),4),4));
L_1803fd1d3_10:;
/* 1803fd1d9: movaps xmmword ptr [r8 + r9*4 + 0x10], xmm1 */
L_1803fd1d9_0:;
L_1803fd1d9_1:;
wr(s->u,16,8,(((U)UINT64_C(0x10))+rd(s->r,128,8)));
L_1803fd1d9_2:;
wr(s->u,24,8,(rd(s->r,136,8)*((U)UINT64_C(0x4))));
L_1803fd1d9_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fd1d9_4:;
wr(s->u,40,16,rd(s->r,4672,16));
L_1803fd1d9_5:;
mw((uint64_t)rd(s->u,32,8),16,rd(s->u,40,16));
L_1803fd1d9_6:;
/* 1803fd1df: add r9, 8 */
L_1803fd1df_0:;
L_1803fd1df_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fd1df_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803fd1df_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803fd1df_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd1df_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fd1df_6:;
wr(s->u,57,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fd1df_7:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803fd1df_8:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803fd1df_9:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803fd1df_10:;
/* 1803fd1e3: cmp r9, rax */
L_1803fd1e3_0:;
L_1803fd1e3_1:;
wr(s->u,67,8,rd(s->r,0,8));
L_1803fd1e3_2:;
wr(s->r,512,1,(rd(s->r,136,8)<rd(s->u,67,8)));
L_1803fd1e3_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),rd(s->u,67,8),8,1));
L_1803fd1e3_4:;
wr(s->u,75,8,(rd(s->r,136,8)-rd(s->u,67,8)));
L_1803fd1e3_5:;
wr(s->r,519,1,(sx(rd(s->u,75,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd1e3_6:;
wr(s->r,518,1,(rd(s->u,75,8)==((U)UINT64_C(0x0))));
L_1803fd1e3_7:;
wr(s->u,57,8,(rd(s->u,75,8)&((U)UINT64_C(0xff))));
L_1803fd1e3_8:;
wr(s->u,65,1,pop(rd(s->u,57,8),8));
L_1803fd1e3_9:;
wr(s->u,66,1,(rd(s->u,65,1)&((U)UINT64_C(0x1))));
L_1803fd1e3_10:;
wr(s->r,514,1,(rd(s->u,66,1)==((U)UINT64_C(0x0))));
L_1803fd1e3_11:;
/* 1803fd1e6: jl 0x1803fd1b3 */
L_1803fd1e6_0:;
L_1803fd1e6_1:;
wr(s->u,56,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fd1e6_2:;
if(rd(s->u,56,1)){goto L_1803fd1b3_0;}
L_1803fd1e6_3:;
return UINT64_C(0x1803fd1e8);
}
uint64_t b_1803fd1e8(CPU*s){
/* 1803fd1e8: cmp rax, r11 */
L_1803fd1e8_0:;
L_1803fd1e8_1:;
wr(s->u,11,8,rd(s->r,152,8));
L_1803fd1e8_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,11,8)));
L_1803fd1e8_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,11,8),8,1));
L_1803fd1e8_4:;
wr(s->u,19,8,(rd(s->r,0,8)-rd(s->u,11,8)));
L_1803fd1e8_5:;
wr(s->r,519,1,(sx(rd(s->u,19,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd1e8_6:;
wr(s->r,518,1,(rd(s->u,19,8)==((U)UINT64_C(0x0))));
L_1803fd1e8_7:;
wr(s->u,1,8,(rd(s->u,19,8)&((U)UINT64_C(0xff))));
L_1803fd1e8_8:;
wr(s->u,9,1,pop(rd(s->u,1,8),8));
L_1803fd1e8_9:;
wr(s->u,10,1,(rd(s->u,9,1)&((U)UINT64_C(0x1))));
L_1803fd1e8_10:;
wr(s->r,514,1,(rd(s->u,10,1)==((U)UINT64_C(0x0))));
L_1803fd1e8_11:;
/* 1803fd1eb: jge 0x1803fd22f */
L_1803fd1eb_0:;
L_1803fd1eb_1:;
wr(s->u,0,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fd1eb_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fd22f);}
L_1803fd1eb_3:;
return UINT64_C(0x1803fd1ed);
}
uint64_t b_1803fd1ed(CPU*s){
/* 1803fd1ed: movss xmm0, dword ptr [rcx + rax*4] */
L_1803fd1ed_0:;
L_1803fd1ed_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fd1ed_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fd1ed_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fd1ed_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fd1ed_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fd1ed_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fd1ed_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fd1ed_8:;
/* 1803fd1f2: mulss xmm0, dword ptr [rdx + rax*4] */
L_1803fd1f2_0:;
L_1803fd1f2_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fd1f2_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fd1f2_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fd1f2_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803fd1f2_5:;
/* 1803fd1f7: addss xmm0, dword ptr [r8 + rax*4] */
L_1803fd1f7_0:;
L_1803fd1f7_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fd1f7_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fd1f7_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fd1f7_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,16,4),4),4));
L_1803fd1f7_5:;
/* 1803fd1fd: movss dword ptr [r8 + rax*4], xmm0 */
L_1803fd1fd_0:;
L_1803fd1fd_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fd1fd_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fd1fd_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fd1fd_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fd1fd_5:;
/* 1803fd203: add rax, 1 */
L_1803fd203_0:;
L_1803fd203_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fd203_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fd203_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fd203_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd203_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fd203_6:;
wr(s->u,21,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fd203_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fd203_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fd203_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fd203_10:;
/* 1803fd207: cmp rax, r11 */
L_1803fd207_0:;
L_1803fd207_1:;
wr(s->u,31,8,rd(s->r,152,8));
L_1803fd207_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,31,8)));
L_1803fd207_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,31,8),8,1));
L_1803fd207_4:;
wr(s->u,39,8,(rd(s->r,0,8)-rd(s->u,31,8)));
L_1803fd207_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd207_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fd207_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fd207_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fd207_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fd207_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fd207_11:;
/* 1803fd20a: jl 0x1803fd1ed */
L_1803fd20a_0:;
L_1803fd20a_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fd20a_2:;
if(rd(s->u,20,1)){goto L_1803fd1ed_0;}
L_1803fd20a_3:;
return UINT64_C(0x1803fd20c);
}
uint64_t b_1803fd20c(CPU*s){
/* 1803fd20c: jmp 0x1803fd22f */
L_1803fd20c_0:;
L_1803fd20c_1:;
return UINT64_C(0x1803fd22f);
L_1803fd20c_2:;
return UINT64_C(0x1803fd20e);
}
uint64_t b_1803fd20e(CPU*s){
/* 1803fd20e: xor eax, eax */
L_1803fd20e_0:;
L_1803fd20e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd20e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd20e_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd20e_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd20e_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd20e_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd20e_7:;
wr(s->u,21,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd20e_8:;
wr(s->u,29,1,pop(rd(s->u,21,4),4));
L_1803fd20e_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fd20e_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fd20e_11:;
/* 1803fd210: movss xmm0, dword ptr [rcx + rax*4] */
L_1803fd210_0:;
L_1803fd210_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fd210_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fd210_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fd210_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fd210_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fd210_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fd210_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fd210_8:;
/* 1803fd215: mulss xmm0, dword ptr [rdx + rax*4] */
L_1803fd215_0:;
L_1803fd215_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fd215_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fd215_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fd215_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803fd215_5:;
/* 1803fd21a: addss xmm0, dword ptr [r8 + rax*4] */
L_1803fd21a_0:;
L_1803fd21a_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fd21a_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fd21a_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fd21a_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,16,4),4),4));
L_1803fd21a_5:;
/* 1803fd220: movss dword ptr [r8 + rax*4], xmm0 */
L_1803fd220_0:;
L_1803fd220_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fd220_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fd220_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fd220_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fd220_5:;
/* 1803fd226: add rax, 1 */
L_1803fd226_0:;
L_1803fd226_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fd226_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fd226_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fd226_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd226_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fd226_6:;
wr(s->u,21,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fd226_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fd226_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fd226_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fd226_10:;
/* 1803fd22a: cmp rax, r11 */
L_1803fd22a_0:;
L_1803fd22a_1:;
wr(s->u,31,8,rd(s->r,152,8));
L_1803fd22a_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,31,8)));
L_1803fd22a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,31,8),8,1));
L_1803fd22a_4:;
wr(s->u,39,8,(rd(s->r,0,8)-rd(s->u,31,8)));
L_1803fd22a_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd22a_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fd22a_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fd22a_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fd22a_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fd22a_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fd22a_11:;
/* 1803fd22d: jl 0x1803fd210 */
L_1803fd22d_0:;
L_1803fd22d_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fd22d_2:;
if(rd(s->u,20,1)){goto L_1803fd210_0;}
L_1803fd22d_3:;
return UINT64_C(0x1803fd22f);
}
uint64_t b_1803fd210(CPU*s){
/* 1803fd210: movss xmm0, dword ptr [rcx + rax*4] */
L_1803fd210_0:;
L_1803fd210_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fd210_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fd210_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fd210_4:;
wr(s->r,4608,4,rd(s->u,16,4));
L_1803fd210_5:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fd210_6:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fd210_7:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fd210_8:;
/* 1803fd215: mulss xmm0, dword ptr [rdx + rax*4] */
L_1803fd215_0:;
L_1803fd215_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fd215_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fd215_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fd215_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,16,4),4),4));
L_1803fd215_5:;
/* 1803fd21a: addss xmm0, dword ptr [r8 + rax*4] */
L_1803fd21a_0:;
L_1803fd21a_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fd21a_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fd21a_3:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fd21a_4:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->u,16,4),4),4));
L_1803fd21a_5:;
/* 1803fd220: movss dword ptr [r8 + rax*4], xmm0 */
L_1803fd220_0:;
L_1803fd220_1:;
wr(s->u,0,8,(rd(s->r,0,8)*((U)UINT64_C(0x4))));
L_1803fd220_2:;
wr(s->u,8,8,(rd(s->r,128,8)+rd(s->u,0,8)));
L_1803fd220_3:;
wr(s->u,16,4,rd(s->r,4608,4));
L_1803fd220_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,16,4));
L_1803fd220_5:;
/* 1803fd226: add rax, 1 */
L_1803fd226_0:;
L_1803fd226_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x1)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fd226_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x1)),8,0));
L_1803fd226_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x1))));
L_1803fd226_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd226_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fd226_6:;
wr(s->u,21,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fd226_7:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fd226_8:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fd226_9:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fd226_10:;
/* 1803fd22a: cmp rax, r11 */
L_1803fd22a_0:;
L_1803fd22a_1:;
wr(s->u,31,8,rd(s->r,152,8));
L_1803fd22a_2:;
wr(s->r,512,1,(rd(s->r,0,8)<rd(s->u,31,8)));
L_1803fd22a_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),rd(s->u,31,8),8,1));
L_1803fd22a_4:;
wr(s->u,39,8,(rd(s->r,0,8)-rd(s->u,31,8)));
L_1803fd22a_5:;
wr(s->r,519,1,(sx(rd(s->u,39,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd22a_6:;
wr(s->r,518,1,(rd(s->u,39,8)==((U)UINT64_C(0x0))));
L_1803fd22a_7:;
wr(s->u,21,8,(rd(s->u,39,8)&((U)UINT64_C(0xff))));
L_1803fd22a_8:;
wr(s->u,29,1,pop(rd(s->u,21,8),8));
L_1803fd22a_9:;
wr(s->u,30,1,(rd(s->u,29,1)&((U)UINT64_C(0x1))));
L_1803fd22a_10:;
wr(s->r,514,1,(rd(s->u,30,1)==((U)UINT64_C(0x0))));
L_1803fd22a_11:;
/* 1803fd22d: jl 0x1803fd210 */
L_1803fd22d_0:;
L_1803fd22d_1:;
wr(s->u,20,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fd22d_2:;
if(rd(s->u,20,1)){goto L_1803fd210_0;}
L_1803fd22d_3:;
return UINT64_C(0x1803fd22f);
}
uint64_t b_1803fd22f(CPU*s){
/* 1803fd22f: xor eax, eax */
L_1803fd22f_0:;
L_1803fd22f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd22f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd22f_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd22f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd22f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd22f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd22f_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd22f_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fd22f_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd22f_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd22f_11:;
/* 1803fd231: add rsp, 0x20 */
L_1803fd231_0:;
L_1803fd231_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd231_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fd231_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fd231_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd231_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd231_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd231_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd231_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd231_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd231_10:;
/* 1803fd235: pop r13 */
L_1803fd235_0:;
L_1803fd235_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fd235_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd235_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd235_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fd235_5:;
/* 1803fd237: ret  */
L_1803fd237_0:;
L_1803fd237_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd237_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd237_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd237_4:;
return UINT64_C(0x1803fd238);
}
uint64_t b_1803fd238(CPU*s){
/* 1803fd238: xor eax, eax */
L_1803fd238_0:;
L_1803fd238_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd238_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd238_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd238_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd238_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd238_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd238_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd238_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fd238_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fd238_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fd238_11:;
/* 1803fd23a: jmp 0x1803fd1e8 */
L_1803fd23a_0:;
L_1803fd23a_1:;
return UINT64_C(0x1803fd1e8);
L_1803fd23a_2:;
return UINT64_C(0x1803fd23c);
}
uint64_t b_1803fd23c(CPU*s){
/* 1803fd23c: mov eax, 0xfffffffa */
L_1803fd23c_0:;
L_1803fd23c_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fd23c_2:;
/* 1803fd241: add rsp, 0x20 */
L_1803fd241_0:;
L_1803fd241_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd241_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fd241_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fd241_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd241_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd241_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd241_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd241_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd241_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd241_10:;
/* 1803fd245: pop r13 */
L_1803fd245_0:;
L_1803fd245_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fd245_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd245_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd245_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fd245_5:;
/* 1803fd247: ret  */
L_1803fd247_0:;
L_1803fd247_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd247_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd247_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd247_4:;
return UINT64_C(0x1803fd248);
}
uint64_t b_1803fd248(CPU*s){
/* 1803fd248: mov eax, 0xfffffff8 */
L_1803fd248_0:;
L_1803fd248_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fd248_2:;
/* 1803fd24d: add rsp, 0x20 */
L_1803fd24d_0:;
L_1803fd24d_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd24d_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x20)),8,0));
L_1803fd24d_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x20))));
L_1803fd24d_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd24d_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd24d_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd24d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd24d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd24d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd24d_10:;
/* 1803fd251: pop r13 */
L_1803fd251_0:;
L_1803fd251_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fd251_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd251_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd251_4:;
wr(s->r,168,8,rd(s->u,10,8));
L_1803fd251_5:;
/* 1803fd253: ret  */
L_1803fd253_0:;
L_1803fd253_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd253_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd253_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd253_4:;
return UINT64_C(0x1803fd254);
}
uint64_t b_1803fd254(CPU*s){
/* 1803fd254: sub rsp, 0x28 */
L_1803fd254_0:;
L_1803fd254_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fd254_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fd254_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fd254_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd254_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd254_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd254_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd254_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd254_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd254_10:;
/* 1803fd258: mov r8d, edx */
L_1803fd258_0:;
L_1803fd258_1:;
wr(s->r,128,4,rd(s->r,16,4));
L_1803fd258_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fd258_3:;
/* 1803fd25b: test rcx, rcx */
L_1803fd25b_0:;
L_1803fd25b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd25b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd25b_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fd25b_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd25b_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd25b_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd25b_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd25b_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd25b_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd25b_10:;
/* 1803fd25e: je 0x1803fd27e */
L_1803fd25e_0:;
L_1803fd25e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd27e);}
L_1803fd25e_2:;
return UINT64_C(0x1803fd260);
}
uint64_t b_1803fd260(CPU*s){
/* 1803fd260: test r8d, r8d */
L_1803fd260_0:;
L_1803fd260_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd260_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd260_3:;
wr(s->u,9,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fd260_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd260_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fd260_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fd260_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fd260_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fd260_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fd260_10:;
/* 1803fd263: jg 0x1803fd26f */
L_1803fd263_0:;
L_1803fd263_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fd263_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fd263_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fd263_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fd26f);}
L_1803fd263_5:;
return UINT64_C(0x1803fd265);
}
uint64_t b_1803fd265(CPU*s){
/* 1803fd265: mov eax, 0xfffffffa */
L_1803fd265_0:;
L_1803fd265_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fd265_2:;
/* 1803fd26a: add rsp, 0x28 */
L_1803fd26a_0:;
L_1803fd26a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd26a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd26a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd26a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd26a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd26a_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd26a_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd26a_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd26a_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd26a_10:;
/* 1803fd26e: ret  */
L_1803fd26e_0:;
L_1803fd26e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd26e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd26e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd26e_4:;
return UINT64_C(0x1803fd26f);
}
uint64_t b_1803fd26f(CPU*s){
/* 1803fd26f: mov rdx, rcx */
L_1803fd26f_0:;
L_1803fd26f_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803fd26f_2:;
/* 1803fd272: call 0x18042f290 */
L_1803fd272_0:;
L_1803fd272_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd272_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fd277)));
L_1803fd272_3:;
return (uint64_t)UINT64_C(0x18042f290);
L_1803fd272_4:;
return UINT64_C(0x1803fd277);
}
uint64_t b_1803fd277(CPU*s){
/* 1803fd277: xor eax, eax */
L_1803fd277_0:;
L_1803fd277_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd277_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd277_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd277_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd277_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd277_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd277_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd277_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fd277_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd277_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd277_11:;
/* 1803fd279: add rsp, 0x28 */
L_1803fd279_0:;
L_1803fd279_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd279_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd279_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd279_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd279_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd279_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd279_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd279_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd279_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd279_10:;
/* 1803fd27d: ret  */
L_1803fd27d_0:;
L_1803fd27d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd27d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd27d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd27d_4:;
return UINT64_C(0x1803fd27e);
}
uint64_t b_1803fd27e(CPU*s){
/* 1803fd27e: mov eax, 0xfffffff8 */
L_1803fd27e_0:;
L_1803fd27e_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fd27e_2:;
/* 1803fd283: add rsp, 0x28 */
L_1803fd283_0:;
L_1803fd283_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd283_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd283_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd283_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd283_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd283_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd283_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd283_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd283_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd283_10:;
/* 1803fd287: ret  */
L_1803fd287_0:;
L_1803fd287_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd287_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd287_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd287_4:;
return UINT64_C(0x1803fd288);
}
uint64_t b_1803fd288(CPU*s){
/* 1803fd288: sub rsp, 0x28 */
L_1803fd288_0:;
L_1803fd288_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fd288_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fd288_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fd288_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd288_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd288_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd288_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd288_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd288_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd288_10:;
/* 1803fd28c: mov r8d, edx */
L_1803fd28c_0:;
L_1803fd28c_1:;
wr(s->r,128,4,rd(s->r,16,4));
L_1803fd28c_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fd28c_3:;
/* 1803fd28f: test rcx, rcx */
L_1803fd28f_0:;
L_1803fd28f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd28f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd28f_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fd28f_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd28f_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd28f_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd28f_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd28f_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd28f_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd28f_10:;
/* 1803fd292: je 0x1803fd2b2 */
L_1803fd292_0:;
L_1803fd292_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd2b2);}
L_1803fd292_2:;
return UINT64_C(0x1803fd294);
}
uint64_t b_1803fd294(CPU*s){
/* 1803fd294: test r8d, r8d */
L_1803fd294_0:;
L_1803fd294_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd294_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd294_3:;
wr(s->u,9,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fd294_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd294_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fd294_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fd294_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fd294_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fd294_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fd294_10:;
/* 1803fd297: jg 0x1803fd2a3 */
L_1803fd297_0:;
L_1803fd297_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fd297_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fd297_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fd297_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fd2a3);}
L_1803fd297_5:;
return UINT64_C(0x1803fd299);
}
uint64_t b_1803fd299(CPU*s){
/* 1803fd299: mov eax, 0xfffffffa */
L_1803fd299_0:;
L_1803fd299_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fd299_2:;
/* 1803fd29e: add rsp, 0x28 */
L_1803fd29e_0:;
L_1803fd29e_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd29e_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd29e_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd29e_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd29e_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd29e_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd29e_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd29e_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd29e_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd29e_10:;
/* 1803fd2a2: ret  */
L_1803fd2a2_0:;
L_1803fd2a2_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd2a2_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd2a2_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd2a2_4:;
return UINT64_C(0x1803fd2a3);
}
uint64_t b_1803fd2a3(CPU*s){
/* 1803fd2a3: mov rdx, rcx */
L_1803fd2a3_0:;
L_1803fd2a3_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803fd2a3_2:;
/* 1803fd2a6: call 0x18042fb40 */
L_1803fd2a6_0:;
L_1803fd2a6_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd2a6_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fd2ab)));
L_1803fd2a6_3:;
return (uint64_t)UINT64_C(0x18042fb40);
L_1803fd2a6_4:;
return UINT64_C(0x1803fd2ab);
}
uint64_t b_1803fd2ab(CPU*s){
/* 1803fd2ab: xor eax, eax */
L_1803fd2ab_0:;
L_1803fd2ab_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd2ab_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd2ab_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd2ab_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd2ab_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd2ab_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd2ab_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd2ab_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fd2ab_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd2ab_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd2ab_11:;
/* 1803fd2ad: add rsp, 0x28 */
L_1803fd2ad_0:;
L_1803fd2ad_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd2ad_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd2ad_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd2ad_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd2ad_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd2ad_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd2ad_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd2ad_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd2ad_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd2ad_10:;
/* 1803fd2b1: ret  */
L_1803fd2b1_0:;
L_1803fd2b1_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd2b1_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd2b1_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd2b1_4:;
return UINT64_C(0x1803fd2b2);
}
uint64_t b_1803fd2b2(CPU*s){
/* 1803fd2b2: mov eax, 0xfffffff8 */
L_1803fd2b2_0:;
L_1803fd2b2_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fd2b2_2:;
/* 1803fd2b7: add rsp, 0x28 */
L_1803fd2b7_0:;
L_1803fd2b7_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd2b7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd2b7_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd2b7_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd2b7_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd2b7_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd2b7_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd2b7_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd2b7_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd2b7_10:;
/* 1803fd2bb: ret  */
L_1803fd2bb_0:;
L_1803fd2bb_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd2bb_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd2bb_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd2bb_4:;
return UINT64_C(0x1803fd2bc);
}
uint64_t b_1803fd2bc(CPU*s){
/* 1803fd2bc: sub rsp, 0x848 */
L_1803fd2bc_0:;
L_1803fd2bc_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x848))));
L_1803fd2bc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x848)),8,1));
L_1803fd2bc_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x848))));
L_1803fd2bc_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd2bc_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd2bc_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd2bc_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd2bc_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd2bc_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd2bc_10:;
/* 1803fd2c3: test rcx, rcx */
L_1803fd2c3_0:;
L_1803fd2c3_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd2c3_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd2c3_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fd2c3_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd2c3_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd2c3_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd2c3_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd2c3_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd2c3_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd2c3_10:;
/* 1803fd2c6: je 0x1803fd39b */
L_1803fd2c6_0:;
L_1803fd2c6_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd39b);}
L_1803fd2c6_2:;
return UINT64_C(0x1803fd2cc);
}
uint64_t b_1803fd2cc(CPU*s){
/* 1803fd2cc: test edx, edx */
L_1803fd2cc_0:;
L_1803fd2cc_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd2cc_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd2cc_3:;
wr(s->u,9,4,(rd(s->r,16,4)&rd(s->r,16,4)));
L_1803fd2cc_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd2cc_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fd2cc_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fd2cc_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fd2cc_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fd2cc_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fd2cc_10:;
/* 1803fd2ce: jg 0x1803fd2dd */
L_1803fd2ce_0:;
L_1803fd2ce_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fd2ce_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fd2ce_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fd2ce_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fd2dd);}
L_1803fd2ce_5:;
return UINT64_C(0x1803fd2d0);
}
uint64_t b_1803fd2d0(CPU*s){
/* 1803fd2d0: mov eax, 0xfffffffa */
L_1803fd2d0_0:;
L_1803fd2d0_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fd2d0_2:;
/* 1803fd2d5: add rsp, 0x848 */
L_1803fd2d5_0:;
L_1803fd2d5_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x848)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd2d5_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x848)),8,0));
L_1803fd2d5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x848))));
L_1803fd2d5_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd2d5_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd2d5_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd2d5_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd2d5_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd2d5_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd2d5_10:;
/* 1803fd2dc: ret  */
L_1803fd2dc_0:;
L_1803fd2dc_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd2dc_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd2dc_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd2dc_4:;
return UINT64_C(0x1803fd2dd);
}
uint64_t b_1803fd2dd(CPU*s){
/* 1803fd2dd: mov qword ptr [rsp + 0x838], rbx */
L_1803fd2dd_0:;
L_1803fd2dd_1:;
wr(s->u,0,8,(((U)UINT64_C(0x838))+rd(s->r,32,8)));
L_1803fd2dd_2:;
wr(s->u,8,8,rd(s->r,24,8));
L_1803fd2dd_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fd2dd_4:;
/* 1803fd2e5: mov qword ptr [rsp + 0x830], rsi */
L_1803fd2e5_0:;
L_1803fd2e5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x830))+rd(s->r,32,8)));
L_1803fd2e5_2:;
wr(s->u,8,8,rd(s->r,48,8));
L_1803fd2e5_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fd2e5_4:;
/* 1803fd2ed: mov rsi, rcx */
L_1803fd2ed_0:;
L_1803fd2ed_1:;
wr(s->r,48,8,rd(s->r,8,8));
L_1803fd2ed_2:;
/* 1803fd2f0: xor eax, eax */
L_1803fd2f0_0:;
L_1803fd2f0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd2f0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd2f0_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd2f0_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd2f0_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd2f0_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd2f0_7:;
wr(s->u,18,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd2f0_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803fd2f0_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fd2f0_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fd2f0_11:;
/* 1803fd2f2: mov ebx, eax */
L_1803fd2f2_0:;
L_1803fd2f2_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803fd2f2_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fd2f2_3:;
/* 1803fd2f4: mov qword ptr [rsp + 0x828], rdi */
L_1803fd2f4_0:;
L_1803fd2f4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x828))+rd(s->r,32,8)));
L_1803fd2f4_2:;
wr(s->u,8,8,rd(s->r,56,8));
L_1803fd2f4_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fd2f4_4:;
/* 1803fd2fc: mov qword ptr [rsp + 0x820], r12 */
L_1803fd2fc_0:;
L_1803fd2fc_1:;
wr(s->u,0,8,(((U)UINT64_C(0x820))+rd(s->r,32,8)));
L_1803fd2fc_2:;
wr(s->u,8,8,rd(s->r,160,8));
L_1803fd2fc_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fd2fc_4:;
/* 1803fd304: mov edi, edx */
L_1803fd304_0:;
L_1803fd304_1:;
wr(s->r,56,4,rd(s->r,16,4));
L_1803fd304_2:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fd304_3:;
/* 1803fd306: cmp edi, 0x100 */
L_1803fd306_0:;
L_1803fd306_1:;
wr(s->u,29,4,rd(s->r,56,4));
L_1803fd306_2:;
wr(s->r,512,1,(rd(s->u,29,4)<((U)UINT64_C(0x100))));
L_1803fd306_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,29,4),((U)UINT64_C(0x100)),4,1));
L_1803fd306_4:;
wr(s->u,33,4,(rd(s->u,29,4)-((U)UINT64_C(0x100))));
L_1803fd306_5:;
wr(s->r,519,1,(sx(rd(s->u,33,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd306_6:;
wr(s->r,518,1,(rd(s->u,33,4)==((U)UINT64_C(0x0))));
L_1803fd306_7:;
wr(s->u,18,4,(rd(s->u,33,4)&((U)UINT64_C(0xff))));
L_1803fd306_8:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803fd306_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fd306_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fd306_11:;
/* 1803fd30c: mov r12d, 0x100 */
L_1803fd30c_0:;
L_1803fd30c_1:;
wr(s->r,160,8,((U)UINT64_C(0x100)));
L_1803fd30c_2:;
/* 1803fd312: cmovl r12d, edi */
L_1803fd312_0:;
L_1803fd312_1:;
wr(s->u,17,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fd312_2:;
wr(s->u,24,4,rd(s->r,56,4));
L_1803fd312_3:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fd312_4:;
wr(s->u,28,1,(!rd(s->u,17,1)));
L_1803fd312_5:;
if(rd(s->u,28,1)){goto L_1803fd316_0;}
L_1803fd312_6:;
wr(s->r,160,4,rd(s->u,24,4));
L_1803fd312_7:;
/* 1803fd316: test ebx, ebx */
L_1803fd316_0:;
L_1803fd316_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd316_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd316_3:;
wr(s->u,37,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803fd316_4:;
wr(s->r,519,1,(sx(rd(s->u,37,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd316_5:;
wr(s->r,518,1,(rd(s->u,37,4)==((U)UINT64_C(0x0))));
L_1803fd316_6:;
wr(s->u,18,4,(rd(s->u,37,4)&((U)UINT64_C(0xff))));
L_1803fd316_7:;
wr(s->u,22,1,pop(rd(s->u,18,4),4));
L_1803fd316_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fd316_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fd316_10:;
/* 1803fd318: jne 0x1803fd32e */
L_1803fd318_0:;
L_1803fd318_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1803fd318_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fd32e);}
L_1803fd318_3:;
return UINT64_C(0x1803fd31a);
}
uint64_t b_1803fd306(CPU*s){
/* 1803fd306: cmp edi, 0x100 */
L_1803fd306_0:;
L_1803fd306_1:;
wr(s->u,13,4,rd(s->r,56,4));
L_1803fd306_2:;
wr(s->r,512,1,(rd(s->u,13,4)<((U)UINT64_C(0x100))));
L_1803fd306_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,13,4),((U)UINT64_C(0x100)),4,1));
L_1803fd306_4:;
wr(s->u,17,4,(rd(s->u,13,4)-((U)UINT64_C(0x100))));
L_1803fd306_5:;
wr(s->r,519,1,(sx(rd(s->u,17,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd306_6:;
wr(s->r,518,1,(rd(s->u,17,4)==((U)UINT64_C(0x0))));
L_1803fd306_7:;
wr(s->u,2,4,(rd(s->u,17,4)&((U)UINT64_C(0xff))));
L_1803fd306_8:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fd306_9:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fd306_10:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fd306_11:;
/* 1803fd30c: mov r12d, 0x100 */
L_1803fd30c_0:;
L_1803fd30c_1:;
wr(s->r,160,8,((U)UINT64_C(0x100)));
L_1803fd30c_2:;
/* 1803fd312: cmovl r12d, edi */
L_1803fd312_0:;
L_1803fd312_1:;
wr(s->u,1,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fd312_2:;
wr(s->u,8,4,rd(s->r,56,4));
L_1803fd312_3:;
wr(s->r,160,8,rd(s->r,160,4));
L_1803fd312_4:;
wr(s->u,12,1,(!rd(s->u,1,1)));
L_1803fd312_5:;
if(rd(s->u,12,1)){goto L_1803fd316_0;}
L_1803fd312_6:;
wr(s->r,160,4,rd(s->u,8,4));
L_1803fd312_7:;
/* 1803fd316: test ebx, ebx */
L_1803fd316_0:;
L_1803fd316_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd316_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd316_3:;
wr(s->u,21,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803fd316_4:;
wr(s->r,519,1,(sx(rd(s->u,21,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd316_5:;
wr(s->r,518,1,(rd(s->u,21,4)==((U)UINT64_C(0x0))));
L_1803fd316_6:;
wr(s->u,2,4,(rd(s->u,21,4)&((U)UINT64_C(0xff))));
L_1803fd316_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fd316_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fd316_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fd316_10:;
/* 1803fd318: jne 0x1803fd32e */
L_1803fd318_0:;
L_1803fd318_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fd318_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fd32e);}
L_1803fd318_3:;
return UINT64_C(0x1803fd31a);
}
uint64_t b_1803fd316(CPU*s){
/* 1803fd316: test ebx, ebx */
L_1803fd316_0:;
L_1803fd316_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd316_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd316_3:;
wr(s->u,7,4,(rd(s->r,24,4)&rd(s->r,24,4)));
L_1803fd316_4:;
wr(s->r,519,1,(sx(rd(s->u,7,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd316_5:;
wr(s->r,518,1,(rd(s->u,7,4)==((U)UINT64_C(0x0))));
L_1803fd316_6:;
wr(s->u,1,4,(rd(s->u,7,4)&((U)UINT64_C(0xff))));
L_1803fd316_7:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fd316_8:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fd316_9:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fd316_10:;
/* 1803fd318: jne 0x1803fd32e */
L_1803fd318_0:;
L_1803fd318_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fd318_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fd32e);}
L_1803fd318_3:;
return UINT64_C(0x1803fd31a);
}
uint64_t b_1803fd31a(CPU*s){
/* 1803fd31a: lea r8, [rsp + 0x20] */
L_1803fd31a_0:;
L_1803fd31a_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fd31a_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1803fd31a_3:;
/* 1803fd31f: mov rcx, rsi */
L_1803fd31f_0:;
L_1803fd31f_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803fd31f_2:;
/* 1803fd322: mov edx, r12d */
L_1803fd322_0:;
L_1803fd322_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803fd322_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fd322_3:;
/* 1803fd325: call 0x180430437 */
L_1803fd325_0:;
L_1803fd325_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd325_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fd32a)));
L_1803fd325_3:;
return (uint64_t)UINT64_C(0x180430437);
L_1803fd325_4:;
return UINT64_C(0x1803fd32a);
}
uint64_t b_1803fd32a(CPU*s){
/* 1803fd32a: mov ebx, eax */
L_1803fd32a_0:;
L_1803fd32a_1:;
wr(s->r,24,4,rd(s->r,0,4));
L_1803fd32a_2:;
wr(s->r,24,8,rd(s->r,24,4));
L_1803fd32a_3:;
/* 1803fd32c: jmp 0x1803fd33e */
L_1803fd32c_0:;
L_1803fd32c_1:;
return UINT64_C(0x1803fd33e);
L_1803fd32c_2:;
return UINT64_C(0x1803fd32e);
}
uint64_t b_1803fd32e(CPU*s){
/* 1803fd32e: lea r8, [rsp + 0x20] */
L_1803fd32e_0:;
L_1803fd32e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fd32e_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1803fd32e_3:;
/* 1803fd333: mov rcx, rsi */
L_1803fd333_0:;
L_1803fd333_1:;
wr(s->r,8,8,rd(s->r,48,8));
L_1803fd333_2:;
/* 1803fd336: mov edx, r12d */
L_1803fd336_0:;
L_1803fd336_1:;
wr(s->r,16,4,rd(s->r,160,4));
L_1803fd336_2:;
wr(s->r,16,8,rd(s->r,16,4));
L_1803fd336_3:;
/* 1803fd339: call 0x180430437 */
L_1803fd339_0:;
L_1803fd339_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd339_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fd33e)));
L_1803fd339_3:;
return (uint64_t)UINT64_C(0x180430437);
L_1803fd339_4:;
return UINT64_C(0x1803fd33e);
}
uint64_t b_1803fd33e(CPU*s){
/* 1803fd33e: movsxd r8, r12d */
L_1803fd33e_0:;
L_1803fd33e_1:;
wr(s->r,128,8,(U)sx(rd(s->r,160,4),4));
L_1803fd33e_2:;
/* 1803fd341: lea rsi, [rsi + r8*4] */
L_1803fd341_0:;
L_1803fd341_1:;
wr(s->u,0,8,(rd(s->r,128,8)*((U)UINT64_C(0x4))));
L_1803fd341_2:;
wr(s->u,8,8,(rd(s->r,48,8)+rd(s->u,0,8)));
L_1803fd341_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803fd341_4:;
/* 1803fd345: sub edi, r12d */
L_1803fd345_0:;
L_1803fd345_1:;
wr(s->r,512,1,(rd(s->r,56,4)<rd(s->r,160,4)));
L_1803fd345_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,56,4),rd(s->r,160,4),4,1));
L_1803fd345_3:;
wr(s->r,56,4,(rd(s->r,56,4)-rd(s->r,160,4)));
L_1803fd345_4:;
wr(s->r,56,8,rd(s->r,56,4));
L_1803fd345_5:;
wr(s->r,519,1,(sx(rd(s->r,56,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd345_6:;
wr(s->r,518,1,(rd(s->r,56,4)==((U)UINT64_C(0x0))));
L_1803fd345_7:;
wr(s->u,19,4,(rd(s->r,56,4)&((U)UINT64_C(0xff))));
L_1803fd345_8:;
wr(s->u,23,1,pop(rd(s->u,19,4),4));
L_1803fd345_9:;
wr(s->u,24,1,(rd(s->u,23,1)&((U)UINT64_C(0x1))));
L_1803fd345_10:;
wr(s->r,514,1,(rd(s->u,24,1)==((U)UINT64_C(0x0))));
L_1803fd345_11:;
/* 1803fd348: test edi, edi */
L_1803fd348_0:;
L_1803fd348_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd348_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd348_3:;
wr(s->u,25,4,(rd(s->r,56,4)&rd(s->r,56,4)));
L_1803fd348_4:;
wr(s->r,519,1,(sx(rd(s->u,25,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd348_5:;
wr(s->r,518,1,(rd(s->u,25,4)==((U)UINT64_C(0x0))));
L_1803fd348_6:;
wr(s->u,19,4,(rd(s->u,25,4)&((U)UINT64_C(0xff))));
L_1803fd348_7:;
wr(s->u,23,1,pop(rd(s->u,19,4),4));
L_1803fd348_8:;
wr(s->u,24,1,(rd(s->u,23,1)&((U)UINT64_C(0x1))));
L_1803fd348_9:;
wr(s->r,514,1,(rd(s->u,24,1)==((U)UINT64_C(0x0))));
L_1803fd348_10:;
/* 1803fd34a: jg 0x1803fd306 */
L_1803fd34a_0:;
L_1803fd34a_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1803fd34a_2:;
wr(s->u,17,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fd34a_3:;
wr(s->u,18,1,((rd(s->u,16,1)!=0)&&(rd(s->u,17,1)!=0)));
L_1803fd34a_4:;
if(rd(s->u,18,1)){return UINT64_C(0x1803fd306);}
L_1803fd34a_5:;
return UINT64_C(0x1803fd34c);
}
uint64_t b_1803fd34c(CPU*s){
/* 1803fd34c: mov rsi, qword ptr [rsp + 0x830] */
L_1803fd34c_0:;
L_1803fd34c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x830))+rd(s->r,32,8)));
L_1803fd34c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fd34c_3:;
wr(s->r,48,8,rd(s->u,8,8));
L_1803fd34c_4:;
/* 1803fd354: mov rdi, qword ptr [rsp + 0x828] */
L_1803fd354_0:;
L_1803fd354_1:;
wr(s->u,0,8,(((U)UINT64_C(0x828))+rd(s->r,32,8)));
L_1803fd354_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fd354_3:;
wr(s->r,56,8,rd(s->u,8,8));
L_1803fd354_4:;
/* 1803fd35c: mov r12, qword ptr [rsp + 0x820] */
L_1803fd35c_0:;
L_1803fd35c_1:;
wr(s->u,0,8,(((U)UINT64_C(0x820))+rd(s->r,32,8)));
L_1803fd35c_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fd35c_3:;
wr(s->r,160,8,rd(s->u,8,8));
L_1803fd35c_4:;
/* 1803fd364: mov eax, ebx */
L_1803fd364_0:;
L_1803fd364_1:;
wr(s->r,0,4,rd(s->r,24,4));
L_1803fd364_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd364_3:;
/* 1803fd366: test eax, eax */
L_1803fd366_0:;
L_1803fd366_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd366_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd366_3:;
wr(s->u,23,4,(rd(s->r,0,4)&rd(s->r,0,4)));
L_1803fd366_4:;
wr(s->r,519,1,(sx(rd(s->u,23,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd366_5:;
wr(s->r,518,1,(rd(s->u,23,4)==((U)UINT64_C(0x0))));
L_1803fd366_6:;
wr(s->u,17,4,(rd(s->u,23,4)&((U)UINT64_C(0xff))));
L_1803fd366_7:;
wr(s->u,21,1,pop(rd(s->u,17,4),4));
L_1803fd366_8:;
wr(s->u,22,1,(rd(s->u,21,1)&((U)UINT64_C(0x1))));
L_1803fd366_9:;
wr(s->r,514,1,(rd(s->u,22,1)==((U)UINT64_C(0x0))));
L_1803fd366_10:;
/* 1803fd368: mov rbx, qword ptr [rsp + 0x838] */
L_1803fd368_0:;
L_1803fd368_1:;
wr(s->u,0,8,(((U)UINT64_C(0x838))+rd(s->r,32,8)));
L_1803fd368_2:;
wr(s->u,8,8,mr((uint64_t)rd(s->u,0,8),8));
L_1803fd368_3:;
wr(s->r,24,8,rd(s->u,8,8));
L_1803fd368_4:;
/* 1803fd370: jne 0x1803fd37c */
L_1803fd370_0:;
L_1803fd370_1:;
wr(s->u,16,1,(!rd(s->r,518,1)));
L_1803fd370_2:;
if(rd(s->u,16,1)){return UINT64_C(0x1803fd37c);}
L_1803fd370_3:;
return UINT64_C(0x1803fd372);
}
uint64_t b_1803fd372(CPU*s){
/* 1803fd372: xor eax, eax */
L_1803fd372_0:;
L_1803fd372_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd372_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd372_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd372_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd372_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd372_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd372_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd372_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fd372_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd372_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd372_11:;
/* 1803fd374: add rsp, 0x848 */
L_1803fd374_0:;
L_1803fd374_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x848)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd374_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x848)),8,0));
L_1803fd374_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x848))));
L_1803fd374_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd374_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd374_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd374_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd374_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd374_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd374_10:;
/* 1803fd37b: ret  */
L_1803fd37b_0:;
L_1803fd37b_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd37b_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd37b_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd37b_4:;
return UINT64_C(0x1803fd37c);
}
uint64_t b_1803fd37c(CPU*s){
/* 1803fd37c: cmp eax, 2 */
L_1803fd37c_0:;
L_1803fd37c_1:;
wr(s->u,7,4,rd(s->r,0,4));
L_1803fd37c_2:;
wr(s->r,512,1,(rd(s->u,7,4)<((U)UINT64_C(0x2))));
L_1803fd37c_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,7,4),((U)UINT64_C(0x2)),4,1));
L_1803fd37c_4:;
wr(s->u,11,4,(rd(s->u,7,4)-((U)UINT64_C(0x2))));
L_1803fd37c_5:;
wr(s->r,519,1,(sx(rd(s->u,11,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd37c_6:;
wr(s->r,518,1,(rd(s->u,11,4)==((U)UINT64_C(0x0))));
L_1803fd37c_7:;
wr(s->u,1,4,(rd(s->u,11,4)&((U)UINT64_C(0xff))));
L_1803fd37c_8:;
wr(s->u,5,1,pop(rd(s->u,1,4),4));
L_1803fd37c_9:;
wr(s->u,6,1,(rd(s->u,5,1)&((U)UINT64_C(0x1))));
L_1803fd37c_10:;
wr(s->r,514,1,(rd(s->u,6,1)==((U)UINT64_C(0x0))));
L_1803fd37c_11:;
/* 1803fd37f: jne 0x1803fd38e */
L_1803fd37f_0:;
L_1803fd37f_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fd37f_2:;
if(rd(s->u,0,1)){return UINT64_C(0x1803fd38e);}
L_1803fd37f_3:;
return UINT64_C(0x1803fd381);
}
uint64_t b_1803fd381(CPU*s){
/* 1803fd381: mov eax, 7 */
L_1803fd381_0:;
L_1803fd381_1:;
wr(s->r,0,8,((U)UINT64_C(0x7)));
L_1803fd381_2:;
/* 1803fd386: add rsp, 0x848 */
L_1803fd386_0:;
L_1803fd386_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x848)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd386_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x848)),8,0));
L_1803fd386_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x848))));
L_1803fd386_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd386_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd386_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd386_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd386_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd386_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd386_10:;
/* 1803fd38d: ret  */
L_1803fd38d_0:;
L_1803fd38d_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd38d_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd38d_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd38d_4:;
return UINT64_C(0x1803fd38e);
}
uint64_t b_1803fd38e(CPU*s){
/* 1803fd38e: mov eax, 8 */
L_1803fd38e_0:;
L_1803fd38e_1:;
wr(s->r,0,8,((U)UINT64_C(0x8)));
L_1803fd38e_2:;
/* 1803fd393: add rsp, 0x848 */
L_1803fd393_0:;
L_1803fd393_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x848)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd393_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x848)),8,0));
L_1803fd393_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x848))));
L_1803fd393_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd393_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd393_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd393_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd393_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd393_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd393_10:;
/* 1803fd39a: ret  */
L_1803fd39a_0:;
L_1803fd39a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd39a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd39a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd39a_4:;
return UINT64_C(0x1803fd39b);
}
uint64_t b_1803fd39b(CPU*s){
/* 1803fd39b: mov eax, 0xfffffff8 */
L_1803fd39b_0:;
L_1803fd39b_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fd39b_2:;
/* 1803fd3a0: add rsp, 0x848 */
L_1803fd3a0_0:;
L_1803fd3a0_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x848)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd3a0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x848)),8,0));
L_1803fd3a0_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x848))));
L_1803fd3a0_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd3a0_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd3a0_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd3a0_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd3a0_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd3a0_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd3a0_10:;
/* 1803fd3a7: ret  */
L_1803fd3a7_0:;
L_1803fd3a7_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd3a7_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd3a7_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd3a7_4:;
return UINT64_C(0x1803fd3a8);
}
uint64_t b_1803fd3a8(CPU*s){
/* 1803fd3a8: sub rsp, 0x38 */
L_1803fd3a8_0:;
L_1803fd3a8_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x38))));
L_1803fd3a8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,1));
L_1803fd3a8_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x38))));
L_1803fd3a8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd3a8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd3a8_6:;
wr(s->u,12,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd3a8_7:;
wr(s->u,20,1,pop(rd(s->u,12,8),8));
L_1803fd3a8_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803fd3a8_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803fd3a8_10:;
/* 1803fd3ac: mov r8d, edx */
L_1803fd3ac_0:;
L_1803fd3ac_1:;
wr(s->r,128,4,rd(s->r,16,4));
L_1803fd3ac_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fd3ac_3:;
/* 1803fd3af: movss dword ptr [rsp + 0x50], xmm2 */
L_1803fd3af_0:;
L_1803fd3af_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803fd3af_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803fd3af_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fd3af_4:;
/* 1803fd3b5: movss dword ptr [rsp + 0x58], xmm3 */
L_1803fd3b5_0:;
L_1803fd3b5_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803fd3b5_2:;
wr(s->u,8,4,rd(s->r,4800,4));
L_1803fd3b5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fd3b5_4:;
/* 1803fd3bb: test rcx, rcx */
L_1803fd3bb_0:;
L_1803fd3bb_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd3bb_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd3bb_3:;
wr(s->u,22,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fd3bb_4:;
wr(s->r,519,1,(sx(rd(s->u,22,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd3bb_5:;
wr(s->r,518,1,(rd(s->u,22,8)==((U)UINT64_C(0x0))));
L_1803fd3bb_6:;
wr(s->u,12,8,(rd(s->u,22,8)&((U)UINT64_C(0xff))));
L_1803fd3bb_7:;
wr(s->u,20,1,pop(rd(s->u,12,8),8));
L_1803fd3bb_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803fd3bb_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803fd3bb_10:;
/* 1803fd3be: je 0x1803fd3ed */
L_1803fd3be_0:;
L_1803fd3be_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd3ed);}
L_1803fd3be_2:;
return UINT64_C(0x1803fd3c0);
}
uint64_t b_1803fd3c0(CPU*s){
/* 1803fd3c0: test r8d, r8d */
L_1803fd3c0_0:;
L_1803fd3c0_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd3c0_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd3c0_3:;
wr(s->u,9,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fd3c0_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd3c0_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fd3c0_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fd3c0_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fd3c0_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fd3c0_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fd3c0_10:;
/* 1803fd3c3: jg 0x1803fd3cf */
L_1803fd3c3_0:;
L_1803fd3c3_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fd3c3_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fd3c3_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fd3c3_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fd3cf);}
L_1803fd3c3_5:;
return UINT64_C(0x1803fd3c5);
}
uint64_t b_1803fd3c5(CPU*s){
/* 1803fd3c5: mov eax, 0xfffffffa */
L_1803fd3c5_0:;
L_1803fd3c5_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fd3c5_2:;
/* 1803fd3ca: add rsp, 0x38 */
L_1803fd3ca_0:;
L_1803fd3ca_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd3ca_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fd3ca_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fd3ca_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd3ca_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd3ca_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd3ca_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd3ca_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd3ca_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd3ca_10:;
/* 1803fd3ce: ret  */
L_1803fd3ce_0:;
L_1803fd3ce_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd3ce_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd3ce_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd3ce_4:;
return UINT64_C(0x1803fd3cf);
}
uint64_t b_1803fd3cf(CPU*s){
/* 1803fd3cf: lea rax, [rsp + 0x58] */
L_1803fd3cf_0:;
L_1803fd3cf_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803fd3cf_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803fd3cf_3:;
/* 1803fd3d4: mov qword ptr [rsp + 0x20], rax */
L_1803fd3d4_0:;
L_1803fd3d4_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fd3d4_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803fd3d4_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fd3d4_4:;
/* 1803fd3d9: lea r9, [rsp + 0x50] */
L_1803fd3d9_0:;
L_1803fd3d9_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803fd3d9_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1803fd3d9_3:;
/* 1803fd3de: mov rdx, rcx */
L_1803fd3de_0:;
L_1803fd3de_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803fd3de_2:;
/* 1803fd3e1: call 0x1804332f0 */
L_1803fd3e1_0:;
L_1803fd3e1_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd3e1_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fd3e6)));
L_1803fd3e1_3:;
return (uint64_t)UINT64_C(0x1804332f0);
L_1803fd3e1_4:;
return UINT64_C(0x1803fd3e6);
}
uint64_t b_1803fd3e6(CPU*s){
/* 1803fd3e6: xor eax, eax */
L_1803fd3e6_0:;
L_1803fd3e6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd3e6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd3e6_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd3e6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd3e6_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd3e6_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd3e6_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd3e6_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fd3e6_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd3e6_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd3e6_11:;
/* 1803fd3e8: add rsp, 0x38 */
L_1803fd3e8_0:;
L_1803fd3e8_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd3e8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fd3e8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fd3e8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd3e8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd3e8_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd3e8_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd3e8_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd3e8_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd3e8_10:;
/* 1803fd3ec: ret  */
L_1803fd3ec_0:;
L_1803fd3ec_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd3ec_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd3ec_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd3ec_4:;
return UINT64_C(0x1803fd3ed);
}
uint64_t b_1803fd3ed(CPU*s){
/* 1803fd3ed: mov eax, 0xfffffff8 */
L_1803fd3ed_0:;
L_1803fd3ed_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fd3ed_2:;
/* 1803fd3f2: add rsp, 0x38 */
L_1803fd3f2_0:;
L_1803fd3f2_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd3f2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fd3f2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fd3f2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd3f2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd3f2_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd3f2_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd3f2_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd3f2_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd3f2_10:;
/* 1803fd3f6: ret  */
L_1803fd3f6_0:;
L_1803fd3f6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd3f6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd3f6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd3f6_4:;
return UINT64_C(0x1803fd3f7);
}
uint64_t b_1803fd3f8(CPU*s){
/* 1803fd3f8: sub rsp, 0x38 */
L_1803fd3f8_0:;
L_1803fd3f8_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x38))));
L_1803fd3f8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,1));
L_1803fd3f8_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x38))));
L_1803fd3f8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd3f8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd3f8_6:;
wr(s->u,12,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd3f8_7:;
wr(s->u,20,1,pop(rd(s->u,12,8),8));
L_1803fd3f8_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803fd3f8_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803fd3f8_10:;
/* 1803fd3fc: mov r8d, edx */
L_1803fd3fc_0:;
L_1803fd3fc_1:;
wr(s->r,128,4,rd(s->r,16,4));
L_1803fd3fc_2:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fd3fc_3:;
/* 1803fd3ff: movss dword ptr [rsp + 0x50], xmm2 */
L_1803fd3ff_0:;
L_1803fd3ff_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803fd3ff_2:;
wr(s->u,8,4,rd(s->r,4736,4));
L_1803fd3ff_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fd3ff_4:;
/* 1803fd405: movss dword ptr [rsp + 0x58], xmm3 */
L_1803fd405_0:;
L_1803fd405_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803fd405_2:;
wr(s->u,8,4,rd(s->r,4800,4));
L_1803fd405_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fd405_4:;
/* 1803fd40b: test rcx, rcx */
L_1803fd40b_0:;
L_1803fd40b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd40b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd40b_3:;
wr(s->u,22,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fd40b_4:;
wr(s->r,519,1,(sx(rd(s->u,22,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd40b_5:;
wr(s->r,518,1,(rd(s->u,22,8)==((U)UINT64_C(0x0))));
L_1803fd40b_6:;
wr(s->u,12,8,(rd(s->u,22,8)&((U)UINT64_C(0xff))));
L_1803fd40b_7:;
wr(s->u,20,1,pop(rd(s->u,12,8),8));
L_1803fd40b_8:;
wr(s->u,21,1,(rd(s->u,20,1)&((U)UINT64_C(0x1))));
L_1803fd40b_9:;
wr(s->r,514,1,(rd(s->u,21,1)==((U)UINT64_C(0x0))));
L_1803fd40b_10:;
/* 1803fd40e: je 0x1803fd43d */
L_1803fd40e_0:;
L_1803fd40e_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd43d);}
L_1803fd40e_2:;
return UINT64_C(0x1803fd410);
}
uint64_t b_1803fd410(CPU*s){
/* 1803fd410: test r8d, r8d */
L_1803fd410_0:;
L_1803fd410_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd410_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd410_3:;
wr(s->u,9,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fd410_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd410_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fd410_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fd410_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fd410_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fd410_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fd410_10:;
/* 1803fd413: jg 0x1803fd41f */
L_1803fd413_0:;
L_1803fd413_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fd413_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fd413_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fd413_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fd41f);}
L_1803fd413_5:;
return UINT64_C(0x1803fd415);
}
uint64_t b_1803fd415(CPU*s){
/* 1803fd415: mov eax, 0xfffffffa */
L_1803fd415_0:;
L_1803fd415_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fd415_2:;
/* 1803fd41a: add rsp, 0x38 */
L_1803fd41a_0:;
L_1803fd41a_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd41a_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fd41a_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fd41a_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd41a_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd41a_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd41a_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd41a_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd41a_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd41a_10:;
/* 1803fd41e: ret  */
L_1803fd41e_0:;
L_1803fd41e_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd41e_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd41e_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd41e_4:;
return UINT64_C(0x1803fd41f);
}
uint64_t b_1803fd41f(CPU*s){
/* 1803fd41f: lea rax, [rsp + 0x58] */
L_1803fd41f_0:;
L_1803fd41f_1:;
wr(s->u,0,8,(((U)UINT64_C(0x58))+rd(s->r,32,8)));
L_1803fd41f_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803fd41f_3:;
/* 1803fd424: mov qword ptr [rsp + 0x20], rax */
L_1803fd424_0:;
L_1803fd424_1:;
wr(s->u,0,8,(((U)UINT64_C(0x20))+rd(s->r,32,8)));
L_1803fd424_2:;
wr(s->u,8,8,rd(s->r,0,8));
L_1803fd424_3:;
mw((uint64_t)rd(s->u,0,8),8,rd(s->u,8,8));
L_1803fd424_4:;
/* 1803fd429: lea r9, [rsp + 0x50] */
L_1803fd429_0:;
L_1803fd429_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803fd429_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1803fd429_3:;
/* 1803fd42e: mov rdx, rcx */
L_1803fd42e_0:;
L_1803fd42e_1:;
wr(s->r,16,8,rd(s->r,8,8));
L_1803fd42e_2:;
/* 1803fd431: call 0x1804334e0 */
L_1803fd431_0:;
L_1803fd431_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd431_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fd436)));
L_1803fd431_3:;
return (uint64_t)UINT64_C(0x1804334e0);
L_1803fd431_4:;
return UINT64_C(0x1803fd436);
}
uint64_t b_1803fd436(CPU*s){
/* 1803fd436: xor eax, eax */
L_1803fd436_0:;
L_1803fd436_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd436_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd436_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd436_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd436_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd436_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd436_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd436_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fd436_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd436_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd436_11:;
/* 1803fd438: add rsp, 0x38 */
L_1803fd438_0:;
L_1803fd438_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd438_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fd438_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fd438_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd438_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd438_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd438_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd438_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd438_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd438_10:;
/* 1803fd43c: ret  */
L_1803fd43c_0:;
L_1803fd43c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd43c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd43c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd43c_4:;
return UINT64_C(0x1803fd43d);
}
uint64_t b_1803fd43d(CPU*s){
/* 1803fd43d: mov eax, 0xfffffff8 */
L_1803fd43d_0:;
L_1803fd43d_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fd43d_2:;
/* 1803fd442: add rsp, 0x38 */
L_1803fd442_0:;
L_1803fd442_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x38)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd442_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x38)),8,0));
L_1803fd442_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x38))));
L_1803fd442_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd442_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd442_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd442_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd442_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd442_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd442_10:;
/* 1803fd446: ret  */
L_1803fd446_0:;
L_1803fd446_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd446_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd446_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd446_4:;
return UINT64_C(0x1803fd447);
}
uint64_t b_1803fd448(CPU*s){
/* 1803fd448: sub rsp, 0x28 */
L_1803fd448_0:;
L_1803fd448_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fd448_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fd448_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fd448_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd448_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd448_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd448_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd448_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd448_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd448_10:;
/* 1803fd44c: test rcx, rcx */
L_1803fd44c_0:;
L_1803fd44c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd44c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd44c_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fd44c_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd44c_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd44c_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd44c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd44c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd44c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd44c_10:;
/* 1803fd44f: je 0x1803fd476 */
L_1803fd44f_0:;
L_1803fd44f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd476);}
L_1803fd44f_2:;
return UINT64_C(0x1803fd451);
}
uint64_t b_1803fd451(CPU*s){
/* 1803fd451: test rdx, rdx */
L_1803fd451_0:;
L_1803fd451_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd451_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd451_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fd451_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd451_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd451_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd451_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd451_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd451_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd451_10:;
/* 1803fd454: je 0x1803fd476 */
L_1803fd454_0:;
L_1803fd454_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd476);}
L_1803fd454_2:;
return UINT64_C(0x1803fd456);
}
uint64_t b_1803fd456(CPU*s){
/* 1803fd456: test r9, r9 */
L_1803fd456_0:;
L_1803fd456_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd456_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd456_3:;
wr(s->u,10,8,(rd(s->r,136,8)&rd(s->r,136,8)));
L_1803fd456_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd456_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd456_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd456_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd456_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd456_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd456_10:;
/* 1803fd459: je 0x1803fd476 */
L_1803fd459_0:;
L_1803fd459_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd476);}
L_1803fd459_2:;
return UINT64_C(0x1803fd45b);
}
uint64_t b_1803fd45b(CPU*s){
/* 1803fd45b: test r8d, r8d */
L_1803fd45b_0:;
L_1803fd45b_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd45b_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd45b_3:;
wr(s->u,9,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fd45b_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd45b_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fd45b_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fd45b_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fd45b_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fd45b_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fd45b_10:;
/* 1803fd45e: jg 0x1803fd46a */
L_1803fd45e_0:;
L_1803fd45e_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fd45e_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fd45e_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fd45e_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fd46a);}
L_1803fd45e_5:;
return UINT64_C(0x1803fd460);
}
uint64_t b_1803fd460(CPU*s){
/* 1803fd460: mov eax, 0xfffffffa */
L_1803fd460_0:;
L_1803fd460_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fd460_2:;
/* 1803fd465: add rsp, 0x28 */
L_1803fd465_0:;
L_1803fd465_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd465_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd465_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd465_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd465_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd465_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd465_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd465_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd465_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd465_10:;
/* 1803fd469: ret  */
L_1803fd469_0:;
L_1803fd469_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd469_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd469_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd469_4:;
return UINT64_C(0x1803fd46a);
}
uint64_t b_1803fd46a(CPU*s){
/* 1803fd46a: call 0x180439f30 */
L_1803fd46a_0:;
L_1803fd46a_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd46a_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fd46f)));
L_1803fd46a_3:;
return (uint64_t)UINT64_C(0x180439f30);
L_1803fd46a_4:;
return UINT64_C(0x1803fd46f);
}
uint64_t b_1803fd46f(CPU*s){
/* 1803fd46f: xor eax, eax */
L_1803fd46f_0:;
L_1803fd46f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd46f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd46f_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd46f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd46f_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd46f_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd46f_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd46f_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fd46f_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd46f_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd46f_11:;
/* 1803fd471: add rsp, 0x28 */
L_1803fd471_0:;
L_1803fd471_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd471_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd471_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd471_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd471_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd471_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd471_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd471_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd471_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd471_10:;
/* 1803fd475: ret  */
L_1803fd475_0:;
L_1803fd475_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd475_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd475_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd475_4:;
return UINT64_C(0x1803fd476);
}
uint64_t b_1803fd476(CPU*s){
/* 1803fd476: mov eax, 0xfffffff8 */
L_1803fd476_0:;
L_1803fd476_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fd476_2:;
/* 1803fd47b: add rsp, 0x28 */
L_1803fd47b_0:;
L_1803fd47b_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd47b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd47b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd47b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd47b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd47b_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd47b_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd47b_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd47b_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd47b_10:;
/* 1803fd47f: ret  */
L_1803fd47f_0:;
L_1803fd47f_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd47f_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd47f_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd47f_4:;
return UINT64_C(0x1803fd480);
}
uint64_t b_1803fd480(CPU*s){
/* 1803fd480: sub rsp, 0x28 */
L_1803fd480_0:;
L_1803fd480_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fd480_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fd480_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fd480_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd480_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd480_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd480_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd480_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd480_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd480_10:;
/* 1803fd484: test rcx, rcx */
L_1803fd484_0:;
L_1803fd484_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd484_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd484_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fd484_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd484_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd484_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd484_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd484_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd484_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd484_10:;
/* 1803fd487: je 0x1803fd4ed */
L_1803fd487_0:;
L_1803fd487_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd4ed);}
L_1803fd487_2:;
return UINT64_C(0x1803fd489);
}
uint64_t b_1803fd489(CPU*s){
/* 1803fd489: test rdx, rdx */
L_1803fd489_0:;
L_1803fd489_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd489_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd489_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fd489_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd489_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd489_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd489_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd489_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd489_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd489_10:;
/* 1803fd48c: je 0x1803fd4ed */
L_1803fd48c_0:;
L_1803fd48c_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd4ed);}
L_1803fd48c_2:;
return UINT64_C(0x1803fd48e);
}
uint64_t b_1803fd48e(CPU*s){
/* 1803fd48e: test r8d, r8d */
L_1803fd48e_0:;
L_1803fd48e_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd48e_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd48e_3:;
wr(s->u,8,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fd48e_4:;
wr(s->r,519,1,(sx(rd(s->u,8,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd48e_5:;
wr(s->r,518,1,(rd(s->u,8,4)==((U)UINT64_C(0x0))));
L_1803fd48e_6:;
wr(s->u,2,4,(rd(s->u,8,4)&((U)UINT64_C(0xff))));
L_1803fd48e_7:;
wr(s->u,6,1,pop(rd(s->u,2,4),4));
L_1803fd48e_8:;
wr(s->u,7,1,(rd(s->u,6,1)&((U)UINT64_C(0x1))));
L_1803fd48e_9:;
wr(s->r,514,1,(rd(s->u,7,1)==((U)UINT64_C(0x0))));
L_1803fd48e_10:;
/* 1803fd491: jle 0x1803fd4f7 */
L_1803fd491_0:;
L_1803fd491_1:;
wr(s->u,0,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fd491_2:;
wr(s->u,1,1,((rd(s->r,518,1)!=0)||(rd(s->u,0,1)!=0)));
L_1803fd491_3:;
if(rd(s->u,1,1)){return UINT64_C(0x1803fd4f7);}
L_1803fd491_4:;
return UINT64_C(0x1803fd493);
}
uint64_t b_1803fd493(CPU*s){
/* 1803fd493: movss xmm0, dword ptr [rdx] */
L_1803fd493_0:;
L_1803fd493_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,16,8),4));
L_1803fd493_2:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803fd493_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fd493_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fd493_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fd493_6:;
/* 1803fd497: mulss xmm0, dword ptr [rcx] */
L_1803fd497_0:;
L_1803fd497_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803fd497_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803fd497_3:;
/* 1803fd49b: movss dword ptr [rdx], xmm0 */
L_1803fd49b_0:;
L_1803fd49b_1:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803fd49b_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,8,4));
L_1803fd49b_3:;
/* 1803fd49f: lea rax, [rcx + 4] */
L_1803fd49f_0:;
L_1803fd49f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803fd49f_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803fd49f_3:;
/* 1803fd4a3: lea r9, [rdx + 4] */
L_1803fd4a3_0:;
L_1803fd4a3_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803fd4a3_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1803fd4a3_3:;
/* 1803fd4a7: test r8d, 1 */
L_1803fd4a7_0:;
L_1803fd4a7_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd4a7_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd4a7_3:;
wr(s->u,18,4,(rd(s->r,128,4)&((U)UINT64_C(0x1))));
L_1803fd4a7_4:;
wr(s->r,519,1,(sx(rd(s->u,18,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd4a7_5:;
wr(s->r,518,1,(rd(s->u,18,4)==((U)UINT64_C(0x0))));
L_1803fd4a7_6:;
wr(s->u,12,4,(rd(s->u,18,4)&((U)UINT64_C(0xff))));
L_1803fd4a7_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fd4a7_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fd4a7_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fd4a7_10:;
/* 1803fd4ae: je 0x1803fd4b9 */
L_1803fd4ae_0:;
L_1803fd4ae_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd4b9);}
L_1803fd4ae_2:;
return UINT64_C(0x1803fd4b0);
}
uint64_t b_1803fd4b0(CPU*s){
/* 1803fd4b0: add r8d, -1 */
L_1803fd4b0_0:;
L_1803fd4b0_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0xffffffff)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803fd4b0_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0xffffffff)),4,0));
L_1803fd4b0_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0xffffffff))));
L_1803fd4b0_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fd4b0_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd4b0_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fd4b0_7:;
wr(s->u,0,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fd4b0_8:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fd4b0_9:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fd4b0_10:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fd4b0_11:;
/* 1803fd4b4: sar r8d, 1 */
L_1803fd4b4_0:;
L_1803fd4b4_1:;
wr(s->u,6,4,(rd(s->r,128,4)&((U)UINT64_C(0x1))));
L_1803fd4b4_2:;
wr(s->r,512,1,(rd(s->u,6,4)!=((U)UINT64_C(0x0))));
L_1803fd4b4_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd4b4_4:;
wr(s->r,128,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,128,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,128,4),4)>>((U)UINT64_C(0x1)))));
L_1803fd4b4_5:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fd4b4_6:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd4b4_7:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fd4b4_8:;
wr(s->u,0,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fd4b4_9:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fd4b4_10:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fd4b4_11:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fd4b4_12:;
/* 1803fd4b7: jmp 0x1803fd4d6 */
L_1803fd4b7_0:;
L_1803fd4b7_1:;
return UINT64_C(0x1803fd4d6);
L_1803fd4b7_2:;
return UINT64_C(0x1803fd4b9);
}
uint64_t b_1803fd4b9(CPU*s){
/* 1803fd4b9: movss xmm0, dword ptr [r9] */
L_1803fd4b9_0:;
L_1803fd4b9_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,136,8),4));
L_1803fd4b9_2:;
wr(s->r,4608,4,rd(s->u,8,4));
L_1803fd4b9_3:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fd4b9_4:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fd4b9_5:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fd4b9_6:;
/* 1803fd4be: mulss xmm0, dword ptr [rax] */
L_1803fd4be_0:;
L_1803fd4be_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,0,8),4));
L_1803fd4be_2:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->u,8,4),4),4));
L_1803fd4be_3:;
/* 1803fd4c2: movss dword ptr [r9], xmm0 */
L_1803fd4c2_0:;
L_1803fd4c2_1:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803fd4c2_2:;
mw((uint64_t)rd(s->r,136,8),4,rd(s->u,8,4));
L_1803fd4c2_3:;
/* 1803fd4c7: add r8d, -2 */
L_1803fd4c7_0:;
L_1803fd4c7_1:;
wr(s->r,512,1,(((rd(s->r,128,4)+((U)UINT64_C(0xfffffffe)))&(((U)1<<32)-1))<rd(s->r,128,4)));
L_1803fd4c7_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,4),((U)UINT64_C(0xfffffffe)),4,0));
L_1803fd4c7_3:;
wr(s->r,128,4,(rd(s->r,128,4)+((U)UINT64_C(0xfffffffe))));
L_1803fd4c7_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fd4c7_5:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd4c7_6:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fd4c7_7:;
wr(s->u,12,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fd4c7_8:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fd4c7_9:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fd4c7_10:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fd4c7_11:;
/* 1803fd4cb: sar r8d, 1 */
L_1803fd4cb_0:;
L_1803fd4cb_1:;
wr(s->u,18,4,(rd(s->r,128,4)&((U)UINT64_C(0x1))));
L_1803fd4cb_2:;
wr(s->r,512,1,(rd(s->u,18,4)!=((U)UINT64_C(0x0))));
L_1803fd4cb_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd4cb_4:;
wr(s->r,128,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,128,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,128,4),4)>>((U)UINT64_C(0x1)))));
L_1803fd4cb_5:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fd4cb_6:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd4cb_7:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fd4cb_8:;
wr(s->u,12,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fd4cb_9:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fd4cb_10:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fd4cb_11:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fd4cb_12:;
/* 1803fd4ce: lea rax, [rcx + 8] */
L_1803fd4ce_0:;
L_1803fd4ce_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803fd4ce_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803fd4ce_3:;
/* 1803fd4d2: lea r9, [rdx + 8] */
L_1803fd4d2_0:;
L_1803fd4d2_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803fd4d2_2:;
wr(s->r,136,8,rd(s->u,0,8));
L_1803fd4d2_3:;
/* 1803fd4d6: test r8d, r8d */
L_1803fd4d6_0:;
L_1803fd4d6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd4d6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd4d6_3:;
wr(s->u,22,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fd4d6_4:;
wr(s->r,519,1,(sx(rd(s->u,22,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd4d6_5:;
wr(s->r,518,1,(rd(s->u,22,4)==((U)UINT64_C(0x0))));
L_1803fd4d6_6:;
wr(s->u,12,4,(rd(s->u,22,4)&((U)UINT64_C(0xff))));
L_1803fd4d6_7:;
wr(s->u,16,1,pop(rd(s->u,12,4),4));
L_1803fd4d6_8:;
wr(s->u,17,1,(rd(s->u,16,1)&((U)UINT64_C(0x1))));
L_1803fd4d6_9:;
wr(s->r,514,1,(rd(s->u,17,1)==((U)UINT64_C(0x0))));
L_1803fd4d6_10:;
/* 1803fd4d9: je 0x1803fd4e6 */
L_1803fd4d9_0:;
L_1803fd4d9_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd4e6);}
L_1803fd4d9_2:;
return UINT64_C(0x1803fd4db);
}
uint64_t b_1803fd4d6(CPU*s){
/* 1803fd4d6: test r8d, r8d */
L_1803fd4d6_0:;
L_1803fd4d6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd4d6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd4d6_3:;
wr(s->u,6,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fd4d6_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd4d6_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803fd4d6_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803fd4d6_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fd4d6_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fd4d6_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fd4d6_10:;
/* 1803fd4d9: je 0x1803fd4e6 */
L_1803fd4d9_0:;
L_1803fd4d9_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd4e6);}
L_1803fd4d9_2:;
return UINT64_C(0x1803fd4db);
}
uint64_t b_1803fd4db(CPU*s){
/* 1803fd4db: mov rcx, rax */
L_1803fd4db_0:;
L_1803fd4db_1:;
wr(s->r,8,8,rd(s->r,0,8));
L_1803fd4db_2:;
/* 1803fd4de: mov rdx, r9 */
L_1803fd4de_0:;
L_1803fd4de_1:;
wr(s->r,16,8,rd(s->r,136,8));
L_1803fd4de_2:;
/* 1803fd4e1: call 0x18043bb80 */
L_1803fd4e1_0:;
L_1803fd4e1_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd4e1_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fd4e6)));
L_1803fd4e1_3:;
return (uint64_t)UINT64_C(0x18043bb80);
L_1803fd4e1_4:;
return UINT64_C(0x1803fd4e6);
}
uint64_t b_1803fd4e6(CPU*s){
/* 1803fd4e6: xor eax, eax */
L_1803fd4e6_0:;
L_1803fd4e6_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd4e6_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd4e6_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd4e6_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd4e6_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd4e6_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd4e6_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd4e6_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fd4e6_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd4e6_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd4e6_11:;
/* 1803fd4e8: add rsp, 0x28 */
L_1803fd4e8_0:;
L_1803fd4e8_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd4e8_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd4e8_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd4e8_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd4e8_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd4e8_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd4e8_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd4e8_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd4e8_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd4e8_10:;
/* 1803fd4ec: ret  */
L_1803fd4ec_0:;
L_1803fd4ec_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd4ec_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd4ec_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd4ec_4:;
return UINT64_C(0x1803fd4ed);
}
uint64_t b_1803fd4ed(CPU*s){
/* 1803fd4ed: mov eax, 0xfffffff8 */
L_1803fd4ed_0:;
L_1803fd4ed_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fd4ed_2:;
/* 1803fd4f2: add rsp, 0x28 */
L_1803fd4f2_0:;
L_1803fd4f2_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd4f2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd4f2_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd4f2_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd4f2_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd4f2_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd4f2_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd4f2_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd4f2_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd4f2_10:;
/* 1803fd4f6: ret  */
L_1803fd4f6_0:;
L_1803fd4f6_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd4f6_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd4f6_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd4f6_4:;
return UINT64_C(0x1803fd4f7);
}
uint64_t b_1803fd4f7(CPU*s){
/* 1803fd4f7: mov eax, 0xfffffffa */
L_1803fd4f7_0:;
L_1803fd4f7_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fd4f7_2:;
/* 1803fd4fc: add rsp, 0x28 */
L_1803fd4fc_0:;
L_1803fd4fc_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd4fc_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd4fc_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd4fc_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd4fc_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd4fc_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd4fc_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd4fc_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd4fc_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd4fc_10:;
/* 1803fd500: ret  */
L_1803fd500_0:;
L_1803fd500_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd500_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd500_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd500_4:;
return UINT64_C(0x1803fd501);
}
uint64_t b_1803fd504(CPU*s){
/* 1803fd504: sub rsp, 0x28 */
L_1803fd504_0:;
L_1803fd504_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fd504_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fd504_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fd504_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd504_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd504_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd504_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd504_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd504_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd504_10:;
/* 1803fd508: test rcx, rcx */
L_1803fd508_0:;
L_1803fd508_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd508_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd508_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fd508_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd508_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd508_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd508_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd508_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd508_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd508_10:;
/* 1803fd50b: je 0x1803fd52d */
L_1803fd50b_0:;
L_1803fd50b_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd52d);}
L_1803fd50b_2:;
return UINT64_C(0x1803fd50d);
}
uint64_t b_1803fd50d(CPU*s){
/* 1803fd50d: test rdx, rdx */
L_1803fd50d_0:;
L_1803fd50d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd50d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd50d_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fd50d_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd50d_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd50d_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd50d_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd50d_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd50d_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd50d_10:;
/* 1803fd510: je 0x1803fd52d */
L_1803fd510_0:;
L_1803fd510_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd52d);}
L_1803fd510_2:;
return UINT64_C(0x1803fd512);
}
uint64_t b_1803fd512(CPU*s){
/* 1803fd512: test r8d, r8d */
L_1803fd512_0:;
L_1803fd512_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd512_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd512_3:;
wr(s->u,9,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fd512_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd512_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fd512_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fd512_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fd512_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fd512_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fd512_10:;
/* 1803fd515: jg 0x1803fd521 */
L_1803fd515_0:;
L_1803fd515_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fd515_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fd515_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fd515_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fd521);}
L_1803fd515_5:;
return UINT64_C(0x1803fd517);
}
uint64_t b_1803fd517(CPU*s){
/* 1803fd517: mov eax, 0xfffffffa */
L_1803fd517_0:;
L_1803fd517_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fd517_2:;
/* 1803fd51c: add rsp, 0x28 */
L_1803fd51c_0:;
L_1803fd51c_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd51c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd51c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd51c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd51c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd51c_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd51c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd51c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd51c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd51c_10:;
/* 1803fd520: ret  */
L_1803fd520_0:;
L_1803fd520_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd520_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd520_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd520_4:;
return UINT64_C(0x1803fd521);
}
uint64_t b_1803fd521(CPU*s){
/* 1803fd521: call 0x18043c786 */
L_1803fd521_0:;
L_1803fd521_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd521_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fd526)));
L_1803fd521_3:;
return (uint64_t)UINT64_C(0x18043c786);
L_1803fd521_4:;
return UINT64_C(0x1803fd526);
}
uint64_t b_1803fd526(CPU*s){
/* 1803fd526: xor eax, eax */
L_1803fd526_0:;
L_1803fd526_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd526_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd526_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd526_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd526_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd526_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd526_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd526_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fd526_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd526_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd526_11:;
/* 1803fd528: add rsp, 0x28 */
L_1803fd528_0:;
L_1803fd528_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd528_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd528_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd528_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd528_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd528_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd528_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd528_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd528_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd528_10:;
/* 1803fd52c: ret  */
L_1803fd52c_0:;
L_1803fd52c_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd52c_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd52c_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd52c_4:;
return UINT64_C(0x1803fd52d);
}
uint64_t b_1803fd52d(CPU*s){
/* 1803fd52d: mov eax, 0xfffffff8 */
L_1803fd52d_0:;
L_1803fd52d_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fd52d_2:;
/* 1803fd532: add rsp, 0x28 */
L_1803fd532_0:;
L_1803fd532_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd532_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd532_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd532_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd532_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd532_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd532_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd532_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd532_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd532_10:;
/* 1803fd536: ret  */
L_1803fd536_0:;
L_1803fd536_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd536_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd536_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd536_4:;
return UINT64_C(0x1803fd537);
}
uint64_t b_1803fd538(CPU*s){
/* 1803fd538: sub rsp, 0x28 */
L_1803fd538_0:;
L_1803fd538_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fd538_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fd538_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fd538_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd538_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd538_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd538_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd538_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd538_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd538_10:;
/* 1803fd53c: test rcx, rcx */
L_1803fd53c_0:;
L_1803fd53c_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd53c_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd53c_3:;
wr(s->u,10,8,(rd(s->r,8,8)&rd(s->r,8,8)));
L_1803fd53c_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd53c_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd53c_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd53c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd53c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd53c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd53c_10:;
/* 1803fd53f: je 0x1803fd561 */
L_1803fd53f_0:;
L_1803fd53f_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd561);}
L_1803fd53f_2:;
return UINT64_C(0x1803fd541);
}
uint64_t b_1803fd541(CPU*s){
/* 1803fd541: test rdx, rdx */
L_1803fd541_0:;
L_1803fd541_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd541_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd541_3:;
wr(s->u,10,8,(rd(s->r,16,8)&rd(s->r,16,8)));
L_1803fd541_4:;
wr(s->r,519,1,(sx(rd(s->u,10,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd541_5:;
wr(s->r,518,1,(rd(s->u,10,8)==((U)UINT64_C(0x0))));
L_1803fd541_6:;
wr(s->u,0,8,(rd(s->u,10,8)&((U)UINT64_C(0xff))));
L_1803fd541_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd541_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd541_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd541_10:;
/* 1803fd544: je 0x1803fd561 */
L_1803fd544_0:;
L_1803fd544_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803fd561);}
L_1803fd544_2:;
return UINT64_C(0x1803fd546);
}
uint64_t b_1803fd546(CPU*s){
/* 1803fd546: test r8d, r8d */
L_1803fd546_0:;
L_1803fd546_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd546_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd546_3:;
wr(s->u,9,4,(rd(s->r,128,4)&rd(s->r,128,4)));
L_1803fd546_4:;
wr(s->r,519,1,(sx(rd(s->u,9,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd546_5:;
wr(s->r,518,1,(rd(s->u,9,4)==((U)UINT64_C(0x0))));
L_1803fd546_6:;
wr(s->u,3,4,(rd(s->u,9,4)&((U)UINT64_C(0xff))));
L_1803fd546_7:;
wr(s->u,7,1,pop(rd(s->u,3,4),4));
L_1803fd546_8:;
wr(s->u,8,1,(rd(s->u,7,1)&((U)UINT64_C(0x1))));
L_1803fd546_9:;
wr(s->r,514,1,(rd(s->u,8,1)==((U)UINT64_C(0x0))));
L_1803fd546_10:;
/* 1803fd549: jg 0x1803fd555 */
L_1803fd549_0:;
L_1803fd549_1:;
wr(s->u,0,1,(!rd(s->r,518,1)));
L_1803fd549_2:;
wr(s->u,1,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fd549_3:;
wr(s->u,2,1,((rd(s->u,0,1)!=0)&&(rd(s->u,1,1)!=0)));
L_1803fd549_4:;
if(rd(s->u,2,1)){return UINT64_C(0x1803fd555);}
L_1803fd549_5:;
return UINT64_C(0x1803fd54b);
}
uint64_t b_1803fd54b(CPU*s){
/* 1803fd54b: mov eax, 0xfffffffa */
L_1803fd54b_0:;
L_1803fd54b_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffffa)));
L_1803fd54b_2:;
/* 1803fd550: add rsp, 0x28 */
L_1803fd550_0:;
L_1803fd550_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd550_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd550_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd550_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd550_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd550_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd550_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd550_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd550_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd550_10:;
/* 1803fd554: ret  */
L_1803fd554_0:;
L_1803fd554_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd554_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd554_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd554_4:;
return UINT64_C(0x1803fd555);
}
uint64_t b_1803fd555(CPU*s){
/* 1803fd555: call 0x18043cfc0 */
L_1803fd555_0:;
L_1803fd555_1:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fd555_2:;
mw((uint64_t)rd(s->r,32,8),8,((U)UINT64_C(0x1803fd55a)));
L_1803fd555_3:;
return (uint64_t)UINT64_C(0x18043cfc0);
L_1803fd555_4:;
return UINT64_C(0x1803fd55a);
}
uint64_t b_1803fd55a(CPU*s){
/* 1803fd55a: xor eax, eax */
L_1803fd55a_0:;
L_1803fd55a_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fd55a_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fd55a_3:;
wr(s->r,0,4,(rd(s->r,0,4)^rd(s->r,0,4)));
L_1803fd55a_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fd55a_5:;
wr(s->r,519,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fd55a_6:;
wr(s->r,518,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fd55a_7:;
wr(s->u,0,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fd55a_8:;
wr(s->u,8,1,pop(rd(s->u,0,4),4));
L_1803fd55a_9:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd55a_10:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd55a_11:;
/* 1803fd55c: add rsp, 0x28 */
L_1803fd55c_0:;
L_1803fd55c_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd55c_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd55c_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd55c_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd55c_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd55c_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd55c_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd55c_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd55c_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd55c_10:;
/* 1803fd560: ret  */
L_1803fd560_0:;
L_1803fd560_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd560_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd560_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd560_4:;
return UINT64_C(0x1803fd561);
}
uint64_t b_1803fd561(CPU*s){
/* 1803fd561: mov eax, 0xfffffff8 */
L_1803fd561_0:;
L_1803fd561_1:;
wr(s->r,0,8,((U)UINT64_C(0xfffffff8)));
L_1803fd561_2:;
/* 1803fd566: add rsp, 0x28 */
L_1803fd566_0:;
L_1803fd566_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fd566_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fd566_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fd566_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fd566_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fd566_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fd566_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fd566_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fd566_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fd566_10:;
/* 1803fd56a: ret  */
L_1803fd56a_0:;
L_1803fd56a_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fd56a_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fd56a_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fd56a_4:;
return UINT64_C(0x1803fd56b);
}
uint64_t b_1803fdc44(CPU*s){
/* 1803fdc44: push r15 */
L_1803fdc44_0:;
L_1803fdc44_1:;
wr(s->u,9,8,rd(s->r,184,8));
L_1803fdc44_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fdc44_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,9,8));
L_1803fdc44_4:;
/* 1803fdc46: push r14 */
L_1803fdc46_0:;
L_1803fdc46_1:;
wr(s->u,9,8,rd(s->r,176,8));
L_1803fdc46_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fdc46_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,9,8));
L_1803fdc46_4:;
/* 1803fdc48: sub rsp, 0x28 */
L_1803fdc48_0:;
L_1803fdc48_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x28))));
L_1803fdc48_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,1));
L_1803fdc48_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x28))));
L_1803fdc48_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fdc48_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fdc48_6:;
wr(s->u,17,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fdc48_7:;
wr(s->u,25,1,pop(rd(s->u,17,8),8));
L_1803fdc48_8:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fdc48_9:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fdc48_10:;
/* 1803fdc4c: lea rax, [r9 + 4] */
L_1803fdc4c_0:;
L_1803fdc4c_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803fdc4c_2:;
wr(s->r,0,8,rd(s->u,0,8));
L_1803fdc4c_3:;
/* 1803fdc50: cmp r8d, 8 */
L_1803fdc50_0:;
L_1803fdc50_1:;
wr(s->u,27,4,rd(s->r,128,4));
L_1803fdc50_2:;
wr(s->r,512,1,(rd(s->u,27,4)<((U)UINT64_C(0x8))));
L_1803fdc50_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,27,4),((U)UINT64_C(0x8)),4,1));
L_1803fdc50_4:;
wr(s->u,31,4,(rd(s->u,27,4)-((U)UINT64_C(0x8))));
L_1803fdc50_5:;
wr(s->r,519,1,(sx(rd(s->u,31,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdc50_6:;
wr(s->r,518,1,(rd(s->u,31,4)==((U)UINT64_C(0x0))));
L_1803fdc50_7:;
wr(s->u,17,4,(rd(s->u,31,4)&((U)UINT64_C(0xff))));
L_1803fdc50_8:;
wr(s->u,25,1,pop(rd(s->u,17,4),4));
L_1803fdc50_9:;
wr(s->u,26,1,(rd(s->u,25,1)&((U)UINT64_C(0x1))));
L_1803fdc50_10:;
wr(s->r,514,1,(rd(s->u,26,1)==((U)UINT64_C(0x0))));
L_1803fdc50_11:;
/* 1803fdc54: jge 0x1803fdca4 */
L_1803fdc54_0:;
L_1803fdc54_1:;
wr(s->u,8,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fdc54_2:;
if(rd(s->u,8,1)){return UINT64_C(0x1803fdca4);}
L_1803fdc54_3:;
return UINT64_C(0x1803fdc56);
}
uint64_t b_1803fdc56(CPU*s){
/* 1803fdc56: mov eax, dword ptr [rcx] */
L_1803fdc56_0:;
L_1803fdc56_1:;
wr(s->u,36,4,mr((uint64_t)rd(s->r,8,8),4));
L_1803fdc56_2:;
wr(s->r,0,4,rd(s->u,36,4));
L_1803fdc56_3:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fdc56_4:;
/* 1803fdc58: mov dword ptr [rdx], eax */
L_1803fdc58_0:;
L_1803fdc58_1:;
wr(s->u,32,4,rd(s->r,0,4));
L_1803fdc58_2:;
mw((uint64_t)rd(s->r,16,8),4,rd(s->u,32,4));
L_1803fdc58_3:;
/* 1803fdc5a: mov r9d, dword ptr [rcx + 4] */
L_1803fdc5a_0:;
L_1803fdc5a_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x4))));
L_1803fdc5a_2:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdc5a_3:;
wr(s->r,136,4,rd(s->u,36,4));
L_1803fdc5a_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fdc5a_5:;
/* 1803fdc5e: mov dword ptr [rdx + 4], r9d */
L_1803fdc5e_0:;
L_1803fdc5e_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x4))));
L_1803fdc5e_2:;
wr(s->u,32,4,rd(s->r,136,4));
L_1803fdc5e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fdc5e_4:;
/* 1803fdc62: movsxd r14, r8d */
L_1803fdc62_0:;
L_1803fdc62_1:;
wr(s->r,176,8,(U)sx(rd(s->r,128,4),4));
L_1803fdc62_2:;
/* 1803fdc65: mov r10d, dword ptr [rcx + r14*8 - 8] */
L_1803fdc65_0:;
L_1803fdc65_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,8,8)));
L_1803fdc65_2:;
wr(s->u,16,8,(rd(s->r,176,8)*((U)UINT64_C(0x8))));
L_1803fdc65_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803fdc65_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803fdc65_5:;
wr(s->r,144,4,rd(s->u,36,4));
L_1803fdc65_6:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fdc65_7:;
/* 1803fdc6a: mov dword ptr [rdx + r14*8 - 8], r10d */
L_1803fdc6a_0:;
L_1803fdc6a_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffff8))+rd(s->r,16,8)));
L_1803fdc6a_2:;
wr(s->u,16,8,(rd(s->r,176,8)*((U)UINT64_C(0x8))));
L_1803fdc6a_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803fdc6a_4:;
wr(s->u,32,4,rd(s->r,144,4));
L_1803fdc6a_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803fdc6a_6:;
/* 1803fdc6f: mov r11d, dword ptr [rcx + r14*8 - 4] */
L_1803fdc6f_0:;
L_1803fdc6f_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,8,8)));
L_1803fdc6f_2:;
wr(s->u,16,8,(rd(s->r,176,8)*((U)UINT64_C(0x8))));
L_1803fdc6f_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803fdc6f_4:;
wr(s->u,36,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803fdc6f_5:;
wr(s->r,152,4,rd(s->u,36,4));
L_1803fdc6f_6:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fdc6f_7:;
/* 1803fdc74: mov dword ptr [rdx + r14*8 - 4], r11d */
L_1803fdc74_0:;
L_1803fdc74_1:;
wr(s->u,8,8,(((U)UINT64_C(0xfffffffffffffffc))+rd(s->r,16,8)));
L_1803fdc74_2:;
wr(s->u,16,8,(rd(s->r,176,8)*((U)UINT64_C(0x8))));
L_1803fdc74_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803fdc74_4:;
wr(s->u,32,4,rd(s->r,152,4));
L_1803fdc74_5:;
mw((uint64_t)rd(s->u,24,8),4,rd(s->u,32,4));
L_1803fdc74_6:;
/* 1803fdc79: cmp r8d, 2 */
L_1803fdc79_0:;
L_1803fdc79_1:;
wr(s->u,48,4,rd(s->r,128,4));
L_1803fdc79_2:;
wr(s->r,512,1,(rd(s->u,48,4)<((U)UINT64_C(0x2))));
L_1803fdc79_3:;
wr(s->r,523,1,signed_overflow(rd(s->u,48,4),((U)UINT64_C(0x2)),4,1));
L_1803fdc79_4:;
wr(s->u,52,4,(rd(s->u,48,4)-((U)UINT64_C(0x2))));
L_1803fdc79_5:;
wr(s->r,519,1,(sx(rd(s->u,52,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdc79_6:;
wr(s->r,518,1,(rd(s->u,52,4)==((U)UINT64_C(0x0))));
L_1803fdc79_7:;
wr(s->u,42,4,(rd(s->u,52,4)&((U)UINT64_C(0xff))));
L_1803fdc79_8:;
wr(s->u,46,1,pop(rd(s->u,42,4),4));
L_1803fdc79_9:;
wr(s->u,47,1,(rd(s->u,46,1)&((U)UINT64_C(0x1))));
L_1803fdc79_10:;
wr(s->r,514,1,(rd(s->u,47,1)==((U)UINT64_C(0x0))));
L_1803fdc79_11:;
/* 1803fdc7d: jle 0x1803fdc9b */
L_1803fdc7d_0:;
L_1803fdc7d_1:;
wr(s->u,40,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fdc7d_2:;
wr(s->u,41,1,((rd(s->r,518,1)!=0)||(rd(s->u,40,1)!=0)));
L_1803fdc7d_3:;
if(rd(s->u,41,1)){return UINT64_C(0x1803fdc9b);}
L_1803fdc7d_4:;
return UINT64_C(0x1803fdc7f);
}
uint64_t b_1803fdc7f(CPU*s){
/* 1803fdc7f: mov eax, dword ptr [rcx + 8] */
L_1803fdc7f_0:;
L_1803fdc7f_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x8))));
L_1803fdc7f_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdc7f_3:;
wr(s->r,0,4,rd(s->u,12,4));
L_1803fdc7f_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fdc7f_5:;
/* 1803fdc82: mov dword ptr [rdx + 0x10], eax */
L_1803fdc82_0:;
L_1803fdc82_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x10))));
L_1803fdc82_2:;
wr(s->u,8,4,rd(s->r,0,4));
L_1803fdc82_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdc82_4:;
/* 1803fdc85: mov r8d, dword ptr [rcx + 0xc] */
L_1803fdc85_0:;
L_1803fdc85_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0xc))));
L_1803fdc85_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdc85_3:;
wr(s->r,128,4,rd(s->u,12,4));
L_1803fdc85_4:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdc85_5:;
/* 1803fdc89: mov dword ptr [rdx + 0x14], r8d */
L_1803fdc89_0:;
L_1803fdc89_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x14))));
L_1803fdc89_2:;
wr(s->u,8,4,rd(s->r,128,4));
L_1803fdc89_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdc89_4:;
/* 1803fdc8d: mov r9d, dword ptr [rcx + 0x10] */
L_1803fdc8d_0:;
L_1803fdc8d_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x10))));
L_1803fdc8d_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdc8d_3:;
wr(s->r,136,4,rd(s->u,12,4));
L_1803fdc8d_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fdc8d_5:;
/* 1803fdc91: mov dword ptr [rdx + 8], r9d */
L_1803fdc91_0:;
L_1803fdc91_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0x8))));
L_1803fdc91_2:;
wr(s->u,8,4,rd(s->r,136,4));
L_1803fdc91_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdc91_4:;
/* 1803fdc95: mov ecx, dword ptr [rcx + 0x14] */
L_1803fdc95_0:;
L_1803fdc95_1:;
wr(s->u,0,8,(rd(s->r,8,8)+((U)UINT64_C(0x14))));
L_1803fdc95_2:;
wr(s->u,12,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdc95_3:;
wr(s->r,8,4,rd(s->u,12,4));
L_1803fdc95_4:;
wr(s->r,8,8,rd(s->r,8,4));
L_1803fdc95_5:;
/* 1803fdc98: mov dword ptr [rdx + 0xc], ecx */
L_1803fdc98_0:;
L_1803fdc98_1:;
wr(s->u,0,8,(rd(s->r,16,8)+((U)UINT64_C(0xc))));
L_1803fdc98_2:;
wr(s->u,8,4,rd(s->r,8,4));
L_1803fdc98_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdc98_4:;
/* 1803fdc9b: add rsp, 0x28 */
L_1803fdc9b_0:;
L_1803fdc9b_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fdc9b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fdc9b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fdc9b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fdc9b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fdc9b_6:;
wr(s->u,16,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fdc9b_7:;
wr(s->u,24,1,pop(rd(s->u,16,8),8));
L_1803fdc9b_8:;
wr(s->u,25,1,(rd(s->u,24,1)&((U)UINT64_C(0x1))));
L_1803fdc9b_9:;
wr(s->r,514,1,(rd(s->u,25,1)==((U)UINT64_C(0x0))));
L_1803fdc9b_10:;
/* 1803fdc9f: pop r14 */
L_1803fdc9f_0:;
L_1803fdc9f_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803fdc9f_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fdc9f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fdc9f_4:;
wr(s->r,176,8,rd(s->u,26,8));
L_1803fdc9f_5:;
/* 1803fdca1: pop r15 */
L_1803fdca1_0:;
L_1803fdca1_1:;
wr(s->u,26,8,((U)UINT64_C(0x0)));
L_1803fdca1_2:;
wr(s->u,26,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fdca1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fdca1_4:;
wr(s->r,184,8,rd(s->u,26,8));
L_1803fdca1_5:;
/* 1803fdca3: ret  */
L_1803fdca3_0:;
L_1803fdca3_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fdca3_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fdca3_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fdca3_4:;
return UINT64_C(0x1803fdca4);
}
uint64_t b_1803fdc9b(CPU*s){
/* 1803fdc9b: add rsp, 0x28 */
L_1803fdc9b_0:;
L_1803fdc9b_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fdc9b_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fdc9b_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fdc9b_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fdc9b_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fdc9b_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fdc9b_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fdc9b_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fdc9b_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fdc9b_10:;
/* 1803fdc9f: pop r14 */
L_1803fdc9f_0:;
L_1803fdc9f_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fdc9f_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fdc9f_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fdc9f_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fdc9f_5:;
/* 1803fdca1: pop r15 */
L_1803fdca1_0:;
L_1803fdca1_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fdca1_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fdca1_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fdca1_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fdca1_5:;
/* 1803fdca3: ret  */
L_1803fdca3_0:;
L_1803fdca3_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fdca3_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fdca3_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fdca3_4:;
return UINT64_C(0x1803fdca4);
}
uint64_t b_1803fdca4(CPU*s){
/* 1803fdca4: sar r8d, 1 */
L_1803fdca4_0:;
L_1803fdca4_1:;
wr(s->u,40,4,(rd(s->r,128,4)&((U)UINT64_C(0x1))));
L_1803fdca4_2:;
wr(s->r,512,1,(rd(s->u,40,4)!=((U)UINT64_C(0x0))));
L_1803fdca4_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fdca4_4:;
wr(s->r,128,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,128,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,128,4),4)>>((U)UINT64_C(0x1)))));
L_1803fdca4_5:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdca4_6:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdca4_7:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fdca4_8:;
wr(s->u,30,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fdca4_9:;
wr(s->u,38,1,pop(rd(s->u,30,4),4));
L_1803fdca4_10:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803fdca4_11:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803fdca4_12:;
/* 1803fdca7: movsxd r14, r8d */
L_1803fdca7_0:;
L_1803fdca7_1:;
wr(s->r,176,8,(U)sx(rd(s->r,128,4),4));
L_1803fdca7_2:;
/* 1803fdcaa: mov r8d, dword ptr [r9] */
L_1803fdcaa_0:;
L_1803fdcaa_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,136,8),4));
L_1803fdcaa_2:;
wr(s->r,128,4,rd(s->u,24,4));
L_1803fdcaa_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdcaa_4:;
/* 1803fdcad: lea r15, [rdx + r14*8] */
L_1803fdcad_0:;
L_1803fdcad_1:;
wr(s->u,8,8,(rd(s->r,176,8)*((U)UINT64_C(0x8))));
L_1803fdcad_2:;
wr(s->u,16,8,(rd(s->r,16,8)+rd(s->u,8,8)));
L_1803fdcad_3:;
wr(s->r,184,8,rd(s->u,16,8));
L_1803fdcad_4:;
/* 1803fdcb1: lea r14, [rcx + r14*8] */
L_1803fdcb1_0:;
L_1803fdcb1_1:;
wr(s->u,8,8,(rd(s->r,176,8)*((U)UINT64_C(0x8))));
L_1803fdcb1_2:;
wr(s->u,16,8,(rd(s->r,8,8)+rd(s->u,8,8)));
L_1803fdcb1_3:;
wr(s->r,176,8,rd(s->u,16,8));
L_1803fdcb1_4:;
/* 1803fdcb5: sar r8d, 1 */
L_1803fdcb5_0:;
L_1803fdcb5_1:;
wr(s->u,40,4,(rd(s->r,128,4)&((U)UINT64_C(0x1))));
L_1803fdcb5_2:;
wr(s->r,512,1,(rd(s->u,40,4)!=((U)UINT64_C(0x0))));
L_1803fdcb5_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fdcb5_4:;
wr(s->r,128,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,128,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,128,4),4)>>((U)UINT64_C(0x1)))));
L_1803fdcb5_5:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdcb5_6:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdcb5_7:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fdcb5_8:;
wr(s->u,30,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fdcb5_9:;
wr(s->u,38,1,pop(rd(s->u,30,4),4));
L_1803fdcb5_10:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803fdcb5_11:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803fdcb5_12:;
/* 1803fdcb8: movsxd r11, r8d */
L_1803fdcb8_0:;
L_1803fdcb8_1:;
wr(s->r,152,8,(U)sx(rd(s->r,128,4),4));
L_1803fdcb8_2:;
/* 1803fdcbb: lea r8, [r9 + 4] */
L_1803fdcbb_0:;
L_1803fdcbb_1:;
wr(s->u,0,8,(rd(s->r,136,8)+((U)UINT64_C(0x4))));
L_1803fdcbb_2:;
wr(s->r,128,8,rd(s->u,0,8));
L_1803fdcbb_3:;
/* 1803fdcbf: mov r10d, dword ptr [r8] */
L_1803fdcbf_0:;
L_1803fdcbf_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,128,8),4));
L_1803fdcbf_2:;
wr(s->r,144,4,rd(s->u,24,4));
L_1803fdcbf_3:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fdcbf_4:;
/* 1803fdcc2: sar r10d, 1 */
L_1803fdcc2_0:;
L_1803fdcc2_1:;
wr(s->u,40,4,(rd(s->r,144,4)&((U)UINT64_C(0x1))));
L_1803fdcc2_2:;
wr(s->r,512,1,(rd(s->u,40,4)!=((U)UINT64_C(0x0))));
L_1803fdcc2_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fdcc2_4:;
wr(s->r,144,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,144,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,144,4),4)>>((U)UINT64_C(0x1)))));
L_1803fdcc2_5:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fdcc2_6:;
wr(s->r,519,1,(sx(rd(s->r,144,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdcc2_7:;
wr(s->r,518,1,(rd(s->r,144,4)==((U)UINT64_C(0x0))));
L_1803fdcc2_8:;
wr(s->u,30,4,(rd(s->r,144,4)&((U)UINT64_C(0xff))));
L_1803fdcc2_9:;
wr(s->u,38,1,pop(rd(s->u,30,4),4));
L_1803fdcc2_10:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803fdcc2_11:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803fdcc2_12:;
/* 1803fdcc5: movsxd r10, r10d */
L_1803fdcc5_0:;
L_1803fdcc5_1:;
wr(s->r,144,8,(U)sx(rd(s->r,144,4),4));
L_1803fdcc5_2:;
/* 1803fdcc8: test r11, r11 */
L_1803fdcc8_0:;
L_1803fdcc8_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fdcc8_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fdcc8_3:;
wr(s->u,44,8,(rd(s->r,152,8)&rd(s->r,152,8)));
L_1803fdcc8_4:;
wr(s->r,519,1,(sx(rd(s->u,44,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fdcc8_5:;
wr(s->r,518,1,(rd(s->u,44,8)==((U)UINT64_C(0x0))));
L_1803fdcc8_6:;
wr(s->u,30,8,(rd(s->u,44,8)&((U)UINT64_C(0xff))));
L_1803fdcc8_7:;
wr(s->u,38,1,pop(rd(s->u,30,8),8));
L_1803fdcc8_8:;
wr(s->u,39,1,(rd(s->u,38,1)&((U)UINT64_C(0x1))));
L_1803fdcc8_9:;
wr(s->r,514,1,(rd(s->u,39,1)==((U)UINT64_C(0x0))));
L_1803fdcc8_10:;
/* 1803fdccb: jle 0x1803fdd95 */
L_1803fdccb_0:;
L_1803fdccb_1:;
wr(s->u,28,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fdccb_2:;
wr(s->u,29,1,((rd(s->r,518,1)!=0)||(rd(s->u,28,1)!=0)));
L_1803fdccb_3:;
if(rd(s->u,29,1)){return UINT64_C(0x1803fdd95);}
L_1803fdccb_4:;
return UINT64_C(0x1803fdcd1);
}
uint64_t b_1803fdcd1(CPU*s){
/* 1803fdcd1: mov r8d, dword ptr [rcx + r11*8] */
L_1803fdcd1_0:;
L_1803fdcd1_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdcd1_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fdcd1_3:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fdcd1_4:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdcd1_5:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdcd1_6:;
/* 1803fdcd5: mov dword ptr [rdx + r10*8], r8d */
L_1803fdcd5_0:;
L_1803fdcd5_1:;
wr(s->u,0,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdcd5_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fdcd5_3:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdcd5_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803fdcd5_5:;
/* 1803fdcd9: mov r8d, dword ptr [rcx + r11*8 + 4] */
L_1803fdcd9_0:;
L_1803fdcd9_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,8,8)));
L_1803fdcd9_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdcd9_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdcd9_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fdcd9_5:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdcd9_6:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdcd9_7:;
/* 1803fdcde: add rax, 8 */
L_1803fdcde_0:;
L_1803fdcde_1:;
wr(s->r,512,1,(((rd(s->r,0,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,0,8)));
L_1803fdcde_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,0,8),((U)UINT64_C(0x8)),8,0));
L_1803fdcde_3:;
wr(s->r,0,8,(rd(s->r,0,8)+((U)UINT64_C(0x8))));
L_1803fdcde_4:;
wr(s->r,519,1,(sx(rd(s->r,0,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fdcde_5:;
wr(s->r,518,1,(rd(s->r,0,8)==((U)UINT64_C(0x0))));
L_1803fdcde_6:;
wr(s->u,48,8,(rd(s->r,0,8)&((U)UINT64_C(0xff))));
L_1803fdcde_7:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_1803fdcde_8:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803fdcde_9:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803fdcde_10:;
/* 1803fdce2: add r9, 8 */
L_1803fdce2_0:;
L_1803fdce2_1:;
wr(s->r,512,1,(((rd(s->r,136,8)+((U)UINT64_C(0x8)))&(((U)1<<64)-1))<rd(s->r,136,8)));
L_1803fdce2_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,136,8),((U)UINT64_C(0x8)),8,0));
L_1803fdce2_3:;
wr(s->r,136,8,(rd(s->r,136,8)+((U)UINT64_C(0x8))));
L_1803fdce2_4:;
wr(s->r,519,1,(sx(rd(s->r,136,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fdce2_5:;
wr(s->r,518,1,(rd(s->r,136,8)==((U)UINT64_C(0x0))));
L_1803fdce2_6:;
wr(s->u,48,8,(rd(s->r,136,8)&((U)UINT64_C(0xff))));
L_1803fdce2_7:;
wr(s->u,56,1,pop(rd(s->u,48,8),8));
L_1803fdce2_8:;
wr(s->u,57,1,(rd(s->u,56,1)&((U)UINT64_C(0x1))));
L_1803fdce2_9:;
wr(s->r,514,1,(rd(s->u,57,1)==((U)UINT64_C(0x0))));
L_1803fdce2_10:;
/* 1803fdce6: mov dword ptr [rdx + r10*8 + 4], r8d */
L_1803fdce6_0:;
L_1803fdce6_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,16,8)));
L_1803fdce6_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdce6_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdce6_4:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdce6_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdce6_6:;
/* 1803fdceb: mov r8d, dword ptr [r14 + r11*8] */
L_1803fdceb_0:;
L_1803fdceb_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdceb_2:;
wr(s->u,8,8,(rd(s->r,176,8)+rd(s->u,0,8)));
L_1803fdceb_3:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fdceb_4:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdceb_5:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdceb_6:;
/* 1803fdcef: mov dword ptr [rdx + r10*8 + 8], r8d */
L_1803fdcef_0:;
L_1803fdcef_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,16,8)));
L_1803fdcef_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdcef_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdcef_4:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdcef_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdcef_6:;
/* 1803fdcf4: mov r8d, dword ptr [r14 + r11*8 + 4] */
L_1803fdcf4_0:;
L_1803fdcf4_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,176,8)));
L_1803fdcf4_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdcf4_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdcf4_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fdcf4_5:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdcf4_6:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdcf4_7:;
/* 1803fdcf9: mov dword ptr [rdx + r10*8 + 0xc], r8d */
L_1803fdcf9_0:;
L_1803fdcf9_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,16,8)));
L_1803fdcf9_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdcf9_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdcf9_4:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdcf9_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdcf9_6:;
/* 1803fdcfe: mov r8d, dword ptr [rcx + r10*8] */
L_1803fdcfe_0:;
L_1803fdcfe_1:;
wr(s->u,0,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdcfe_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fdcfe_3:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fdcfe_4:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdcfe_5:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdcfe_6:;
/* 1803fdd02: mov dword ptr [rdx + r11*8], r8d */
L_1803fdd02_0:;
L_1803fdd02_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd02_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fdd02_3:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdd02_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803fdd02_5:;
/* 1803fdd06: mov r8d, dword ptr [rcx + r10*8 + 4] */
L_1803fdd06_0:;
L_1803fdd06_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,8,8)));
L_1803fdd06_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdd06_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd06_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fdd06_5:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdd06_6:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdd06_7:;
/* 1803fdd0b: mov dword ptr [rdx + r11*8 + 4], r8d */
L_1803fdd0b_0:;
L_1803fdd0b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,16,8)));
L_1803fdd0b_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd0b_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd0b_4:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdd0b_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdd0b_6:;
/* 1803fdd10: mov r8d, dword ptr [r14 + r10*8] */
L_1803fdd10_0:;
L_1803fdd10_1:;
wr(s->u,0,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdd10_2:;
wr(s->u,8,8,(rd(s->r,176,8)+rd(s->u,0,8)));
L_1803fdd10_3:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fdd10_4:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdd10_5:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdd10_6:;
/* 1803fdd14: mov dword ptr [rdx + r11*8 + 8], r8d */
L_1803fdd14_0:;
L_1803fdd14_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,16,8)));
L_1803fdd14_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd14_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd14_4:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdd14_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdd14_6:;
/* 1803fdd19: mov r8d, dword ptr [r14 + r10*8 + 4] */
L_1803fdd19_0:;
L_1803fdd19_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,176,8)));
L_1803fdd19_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdd19_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd19_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fdd19_5:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdd19_6:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdd19_7:;
/* 1803fdd1e: mov dword ptr [rdx + r11*8 + 0xc], r8d */
L_1803fdd1e_0:;
L_1803fdd1e_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,16,8)));
L_1803fdd1e_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd1e_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd1e_4:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdd1e_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdd1e_6:;
/* 1803fdd23: mov r8d, dword ptr [rcx + r11*8 + 8] */
L_1803fdd23_0:;
L_1803fdd23_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,8,8)));
L_1803fdd23_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd23_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd23_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fdd23_5:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdd23_6:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdd23_7:;
/* 1803fdd28: mov dword ptr [r15 + r10*8], r8d */
L_1803fdd28_0:;
L_1803fdd28_1:;
wr(s->u,0,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdd28_2:;
wr(s->u,8,8,(rd(s->r,184,8)+rd(s->u,0,8)));
L_1803fdd28_3:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdd28_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803fdd28_5:;
/* 1803fdd2c: mov r8d, dword ptr [rcx + r11*8 + 0xc] */
L_1803fdd2c_0:;
L_1803fdd2c_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,8,8)));
L_1803fdd2c_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd2c_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd2c_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fdd2c_5:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdd2c_6:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdd2c_7:;
/* 1803fdd31: mov dword ptr [r15 + r10*8 + 4], r8d */
L_1803fdd31_0:;
L_1803fdd31_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,184,8)));
L_1803fdd31_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdd31_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd31_4:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdd31_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdd31_6:;
/* 1803fdd36: mov r8d, dword ptr [r14 + r11*8 + 8] */
L_1803fdd36_0:;
L_1803fdd36_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,176,8)));
L_1803fdd36_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd36_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd36_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fdd36_5:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdd36_6:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdd36_7:;
/* 1803fdd3b: mov dword ptr [r15 + r10*8 + 8], r8d */
L_1803fdd3b_0:;
L_1803fdd3b_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,184,8)));
L_1803fdd3b_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdd3b_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd3b_4:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdd3b_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdd3b_6:;
/* 1803fdd40: mov r8d, dword ptr [r14 + r11*8 + 0xc] */
L_1803fdd40_0:;
L_1803fdd40_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,176,8)));
L_1803fdd40_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd40_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd40_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fdd40_5:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdd40_6:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdd40_7:;
/* 1803fdd45: mov dword ptr [r15 + r10*8 + 0xc], r8d */
L_1803fdd45_0:;
L_1803fdd45_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,184,8)));
L_1803fdd45_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdd45_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd45_4:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdd45_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdd45_6:;
/* 1803fdd4a: mov r8d, dword ptr [rcx + r10*8 + 8] */
L_1803fdd4a_0:;
L_1803fdd4a_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,8,8)));
L_1803fdd4a_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdd4a_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd4a_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fdd4a_5:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdd4a_6:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdd4a_7:;
/* 1803fdd4f: mov dword ptr [r15 + r11*8], r8d */
L_1803fdd4f_0:;
L_1803fdd4f_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd4f_2:;
wr(s->u,8,8,(rd(s->r,184,8)+rd(s->u,0,8)));
L_1803fdd4f_3:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdd4f_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803fdd4f_5:;
/* 1803fdd53: mov r8d, dword ptr [rcx + r10*8 + 0xc] */
L_1803fdd53_0:;
L_1803fdd53_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,8,8)));
L_1803fdd53_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdd53_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd53_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fdd53_5:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdd53_6:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdd53_7:;
/* 1803fdd58: mov dword ptr [r15 + r11*8 + 4], r8d */
L_1803fdd58_0:;
L_1803fdd58_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,184,8)));
L_1803fdd58_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd58_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd58_4:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdd58_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdd58_6:;
/* 1803fdd5d: mov r8d, dword ptr [r14 + r10*8 + 8] */
L_1803fdd5d_0:;
L_1803fdd5d_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,176,8)));
L_1803fdd5d_2:;
wr(s->u,24,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdd5d_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd5d_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fdd5d_5:;
wr(s->r,128,4,rd(s->u,44,4));
L_1803fdd5d_6:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdd5d_7:;
/* 1803fdd62: mov dword ptr [r15 + r11*8 + 8], r8d */
L_1803fdd62_0:;
L_1803fdd62_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,184,8)));
L_1803fdd62_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd62_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd62_4:;
wr(s->u,40,4,rd(s->r,128,4));
L_1803fdd62_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdd62_6:;
return UINT64_C(0x1803fdd67);
}
uint64_t b_1803fdd67(CPU*s){
/* 1803fdd67: mov r10d, dword ptr [r14 + r10*8 + 0xc] */
L_1803fdd67_0:;
L_1803fdd67_1:;
wr(s->u,0,8,(((U)UINT64_C(0xc))+rd(s->r,176,8)));
L_1803fdd67_2:;
wr(s->u,8,8,(rd(s->r,144,8)*((U)UINT64_C(0x8))));
L_1803fdd67_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fdd67_4:;
wr(s->u,28,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fdd67_5:;
wr(s->r,144,4,rd(s->u,28,4));
L_1803fdd67_6:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fdd67_7:;
/* 1803fdd6c: mov dword ptr [r15 + r11*8 + 0xc], r10d */
L_1803fdd6c_0:;
L_1803fdd6c_1:;
wr(s->u,0,8,(((U)UINT64_C(0xc))+rd(s->r,184,8)));
L_1803fdd6c_2:;
wr(s->u,8,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd6c_3:;
wr(s->u,16,8,(rd(s->u,0,8)+rd(s->u,8,8)));
L_1803fdd6c_4:;
wr(s->u,24,4,rd(s->r,144,4));
L_1803fdd6c_5:;
mw((uint64_t)rd(s->u,16,8),4,rd(s->u,24,4));
L_1803fdd6c_6:;
/* 1803fdd71: mov r11d, dword ptr [r9] */
L_1803fdd71_0:;
L_1803fdd71_1:;
wr(s->u,28,4,mr((uint64_t)rd(s->r,136,8),4));
L_1803fdd71_2:;
wr(s->r,152,4,rd(s->u,28,4));
L_1803fdd71_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fdd71_4:;
/* 1803fdd74: mov r8d, dword ptr [rax] */
L_1803fdd74_0:;
L_1803fdd74_1:;
wr(s->u,28,4,mr((uint64_t)rd(s->r,0,8),4));
L_1803fdd74_2:;
wr(s->r,128,4,rd(s->u,28,4));
L_1803fdd74_3:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdd74_4:;
/* 1803fdd77: sar r11d, 1 */
L_1803fdd77_0:;
L_1803fdd77_1:;
wr(s->u,45,4,(rd(s->r,152,4)&((U)UINT64_C(0x1))));
L_1803fdd77_2:;
wr(s->r,512,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803fdd77_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fdd77_4:;
wr(s->r,152,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,152,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,152,4),4)>>((U)UINT64_C(0x1)))));
L_1803fdd77_5:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fdd77_6:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdd77_7:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fdd77_8:;
wr(s->u,35,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fdd77_9:;
wr(s->u,43,1,pop(rd(s->u,35,4),4));
L_1803fdd77_10:;
wr(s->u,44,1,(rd(s->u,43,1)&((U)UINT64_C(0x1))));
L_1803fdd77_11:;
wr(s->r,514,1,(rd(s->u,44,1)==((U)UINT64_C(0x0))));
L_1803fdd77_12:;
/* 1803fdd7a: movsxd r11, r11d */
L_1803fdd7a_0:;
L_1803fdd7a_1:;
wr(s->r,152,8,(U)sx(rd(s->r,152,4),4));
L_1803fdd7a_2:;
/* 1803fdd7d: sar r8d, 1 */
L_1803fdd7d_0:;
L_1803fdd7d_1:;
wr(s->u,45,4,(rd(s->r,128,4)&((U)UINT64_C(0x1))));
L_1803fdd7d_2:;
wr(s->r,512,1,(rd(s->u,45,4)!=((U)UINT64_C(0x0))));
L_1803fdd7d_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fdd7d_4:;
wr(s->r,128,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,128,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,128,4),4)>>((U)UINT64_C(0x1)))));
L_1803fdd7d_5:;
wr(s->r,128,8,rd(s->r,128,4));
L_1803fdd7d_6:;
wr(s->r,519,1,(sx(rd(s->r,128,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdd7d_7:;
wr(s->r,518,1,(rd(s->r,128,4)==((U)UINT64_C(0x0))));
L_1803fdd7d_8:;
wr(s->u,35,4,(rd(s->r,128,4)&((U)UINT64_C(0xff))));
L_1803fdd7d_9:;
wr(s->u,43,1,pop(rd(s->u,35,4),4));
L_1803fdd7d_10:;
wr(s->u,44,1,(rd(s->u,43,1)&((U)UINT64_C(0x1))));
L_1803fdd7d_11:;
wr(s->r,514,1,(rd(s->u,44,1)==((U)UINT64_C(0x0))));
L_1803fdd7d_12:;
/* 1803fdd80: movsxd r10, r8d */
L_1803fdd80_0:;
L_1803fdd80_1:;
wr(s->r,144,8,(U)sx(rd(s->r,128,4),4));
L_1803fdd80_2:;
/* 1803fdd83: test r11, r11 */
L_1803fdd83_0:;
L_1803fdd83_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fdd83_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fdd83_3:;
wr(s->u,49,8,(rd(s->r,152,8)&rd(s->r,152,8)));
L_1803fdd83_4:;
wr(s->r,519,1,(sx(rd(s->u,49,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fdd83_5:;
wr(s->r,518,1,(rd(s->u,49,8)==((U)UINT64_C(0x0))));
L_1803fdd83_6:;
wr(s->u,35,8,(rd(s->u,49,8)&((U)UINT64_C(0xff))));
L_1803fdd83_7:;
wr(s->u,43,1,pop(rd(s->u,35,8),8));
L_1803fdd83_8:;
wr(s->u,44,1,(rd(s->u,43,1)&((U)UINT64_C(0x1))));
L_1803fdd83_9:;
wr(s->r,514,1,(rd(s->u,44,1)==((U)UINT64_C(0x0))));
L_1803fdd83_10:;
/* 1803fdd86: jg 0x1803fdcd1 */
L_1803fdd86_0:;
L_1803fdd86_1:;
wr(s->u,32,1,(!rd(s->r,518,1)));
L_1803fdd86_2:;
wr(s->u,33,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fdd86_3:;
wr(s->u,34,1,((rd(s->u,32,1)!=0)&&(rd(s->u,33,1)!=0)));
L_1803fdd86_4:;
if(rd(s->u,34,1)){return UINT64_C(0x1803fdcd1);}
L_1803fdd86_5:;
return UINT64_C(0x1803fdd8c);
}
uint64_t b_1803fdd8c(CPU*s){
/* 1803fdd8c: mov r8, rax */
L_1803fdd8c_0:;
L_1803fdd8c_1:;
wr(s->r,128,8,rd(s->r,0,8));
L_1803fdd8c_2:;
/* 1803fdd8f: jmp 0x1803fdd95 */
L_1803fdd8f_0:;
L_1803fdd8f_1:;
return UINT64_C(0x1803fdd95);
L_1803fdd8f_2:;
return UINT64_C(0x1803fdd91);
}
uint64_t b_1803fdd91(CPU*s){
/* 1803fdd91: add r8, 4 */
L_1803fdd91_0:;
L_1803fdd91_1:;
wr(s->r,512,1,(((rd(s->r,128,8)+((U)UINT64_C(0x4)))&(((U)1<<64)-1))<rd(s->r,128,8)));
L_1803fdd91_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,128,8),((U)UINT64_C(0x4)),8,0));
L_1803fdd91_3:;
wr(s->r,128,8,(rd(s->r,128,8)+((U)UINT64_C(0x4))));
L_1803fdd91_4:;
wr(s->r,519,1,(sx(rd(s->r,128,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fdd91_5:;
wr(s->r,518,1,(rd(s->r,128,8)==((U)UINT64_C(0x0))));
L_1803fdd91_6:;
wr(s->u,51,8,(rd(s->r,128,8)&((U)UINT64_C(0xff))));
L_1803fdd91_7:;
wr(s->u,59,1,pop(rd(s->u,51,8),8));
L_1803fdd91_8:;
wr(s->u,60,1,(rd(s->u,59,1)&((U)UINT64_C(0x1))));
L_1803fdd91_9:;
wr(s->r,514,1,(rd(s->u,60,1)==((U)UINT64_C(0x0))));
L_1803fdd91_10:;
/* 1803fdd95: mov eax, dword ptr [rcx + r11*8] */
L_1803fdd95_0:;
L_1803fdd95_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd95_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fdd95_3:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fdd95_4:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803fdd95_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fdd95_6:;
/* 1803fdd99: mov dword ptr [rdx + r11*8], eax */
L_1803fdd99_0:;
L_1803fdd99_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd99_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fdd99_3:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803fdd99_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803fdd99_5:;
/* 1803fdd9d: mov r9d, dword ptr [rcx + r11*8 + 4] */
L_1803fdd9d_0:;
L_1803fdd9d_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,8,8)));
L_1803fdd9d_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd9d_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd9d_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fdd9d_5:;
wr(s->r,136,4,rd(s->u,44,4));
L_1803fdd9d_6:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fdd9d_7:;
/* 1803fdda2: mov dword ptr [rdx + r11*8 + 4], r9d */
L_1803fdda2_0:;
L_1803fdda2_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,16,8)));
L_1803fdda2_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdda2_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdda2_4:;
wr(s->u,40,4,rd(s->r,136,4));
L_1803fdda2_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdda2_6:;
/* 1803fdda7: mov r10d, dword ptr [r14 + r11*8] */
L_1803fdda7_0:;
L_1803fdda7_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdda7_2:;
wr(s->u,8,8,(rd(s->r,176,8)+rd(s->u,0,8)));
L_1803fdda7_3:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fdda7_4:;
wr(s->r,144,4,rd(s->u,44,4));
L_1803fdda7_5:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fdda7_6:;
/* 1803fddab: mov dword ptr [rdx + r11*8 + 8], r10d */
L_1803fddab_0:;
L_1803fddab_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,16,8)));
L_1803fddab_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddab_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddab_4:;
wr(s->u,40,4,rd(s->r,144,4));
L_1803fddab_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fddab_6:;
/* 1803fddb0: mov eax, dword ptr [r14 + r11*8 + 4] */
L_1803fddb0_0:;
L_1803fddb0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,176,8)));
L_1803fddb0_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddb0_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddb0_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fddb0_5:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803fddb0_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fddb0_7:;
/* 1803fddb5: mov dword ptr [rdx + r11*8 + 0xc], eax */
L_1803fddb5_0:;
L_1803fddb5_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,16,8)));
L_1803fddb5_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddb5_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddb5_4:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803fddb5_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fddb5_6:;
/* 1803fddba: mov eax, dword ptr [rcx + r11*8 + 8] */
L_1803fddba_0:;
L_1803fddba_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,8,8)));
L_1803fddba_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddba_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddba_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fddba_5:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803fddba_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fddba_7:;
/* 1803fddbf: mov dword ptr [r15 + r11*8], eax */
L_1803fddbf_0:;
L_1803fddbf_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddbf_2:;
wr(s->u,8,8,(rd(s->r,184,8)+rd(s->u,0,8)));
L_1803fddbf_3:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803fddbf_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803fddbf_5:;
/* 1803fddc3: mov eax, dword ptr [rcx + r11*8 + 0xc] */
L_1803fddc3_0:;
L_1803fddc3_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,8,8)));
L_1803fddc3_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddc3_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddc3_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fddc3_5:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803fddc3_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fddc3_7:;
/* 1803fddc8: mov dword ptr [r15 + r11*8 + 4], eax */
L_1803fddc8_0:;
L_1803fddc8_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,184,8)));
L_1803fddc8_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddc8_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddc8_4:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803fddc8_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fddc8_6:;
/* 1803fddcd: mov eax, dword ptr [r14 + r11*8 + 8] */
L_1803fddcd_0:;
L_1803fddcd_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,176,8)));
L_1803fddcd_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddcd_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddcd_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fddcd_5:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803fddcd_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fddcd_7:;
/* 1803fddd2: mov dword ptr [r15 + r11*8 + 8], eax */
L_1803fddd2_0:;
L_1803fddd2_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,184,8)));
L_1803fddd2_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddd2_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddd2_4:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803fddd2_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fddd2_6:;
/* 1803fddd7: mov eax, dword ptr [r14 + r11*8 + 0xc] */
L_1803fddd7_0:;
L_1803fddd7_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,176,8)));
L_1803fddd7_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddd7_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddd7_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fddd7_5:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803fddd7_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fddd7_7:;
/* 1803fdddc: mov dword ptr [r15 + r11*8 + 0xc], eax */
L_1803fdddc_0:;
L_1803fdddc_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,184,8)));
L_1803fdddc_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdddc_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdddc_4:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803fdddc_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdddc_6:;
/* 1803fdde1: mov r11d, dword ptr [r8] */
L_1803fdde1_0:;
L_1803fdde1_1:;
wr(s->u,44,4,mr((uint64_t)rd(s->r,128,8),4));
L_1803fdde1_2:;
wr(s->r,152,4,rd(s->u,44,4));
L_1803fdde1_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fdde1_4:;
/* 1803fdde4: sar r11d, 1 */
L_1803fdde4_0:;
L_1803fdde4_1:;
wr(s->u,61,4,(rd(s->r,152,4)&((U)UINT64_C(0x1))));
L_1803fdde4_2:;
wr(s->r,512,1,(rd(s->u,61,4)!=((U)UINT64_C(0x0))));
L_1803fdde4_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fdde4_4:;
wr(s->r,152,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,152,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,152,4),4)>>((U)UINT64_C(0x1)))));
L_1803fdde4_5:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fdde4_6:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdde4_7:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fdde4_8:;
wr(s->u,51,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fdde4_9:;
wr(s->u,59,1,pop(rd(s->u,51,4),4));
L_1803fdde4_10:;
wr(s->u,60,1,(rd(s->u,59,1)&((U)UINT64_C(0x1))));
L_1803fdde4_11:;
wr(s->r,514,1,(rd(s->u,60,1)==((U)UINT64_C(0x0))));
L_1803fdde4_12:;
/* 1803fdde7: movsxd r11, r11d */
L_1803fdde7_0:;
L_1803fdde7_1:;
wr(s->r,152,8,(U)sx(rd(s->r,152,4),4));
L_1803fdde7_2:;
/* 1803fddea: test r11, r11 */
L_1803fddea_0:;
L_1803fddea_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fddea_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fddea_3:;
wr(s->u,65,8,(rd(s->r,152,8)&rd(s->r,152,8)));
L_1803fddea_4:;
wr(s->r,519,1,(sx(rd(s->u,65,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fddea_5:;
wr(s->r,518,1,(rd(s->u,65,8)==((U)UINT64_C(0x0))));
L_1803fddea_6:;
wr(s->u,51,8,(rd(s->u,65,8)&((U)UINT64_C(0xff))));
L_1803fddea_7:;
wr(s->u,59,1,pop(rd(s->u,51,8),8));
L_1803fddea_8:;
wr(s->u,60,1,(rd(s->u,59,1)&((U)UINT64_C(0x1))));
L_1803fddea_9:;
wr(s->r,514,1,(rd(s->u,60,1)==((U)UINT64_C(0x0))));
L_1803fddea_10:;
/* 1803fdded: jg 0x1803fdd91 */
L_1803fdded_0:;
L_1803fdded_1:;
wr(s->u,48,1,(!rd(s->r,518,1)));
L_1803fdded_2:;
wr(s->u,49,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fdded_3:;
wr(s->u,50,1,((rd(s->u,48,1)!=0)&&(rd(s->u,49,1)!=0)));
L_1803fdded_4:;
if(rd(s->u,50,1)){goto L_1803fdd91_0;}
L_1803fdded_5:;
return UINT64_C(0x1803fddef);
}
uint64_t b_1803fdd95(CPU*s){
/* 1803fdd95: mov eax, dword ptr [rcx + r11*8] */
L_1803fdd95_0:;
L_1803fdd95_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd95_2:;
wr(s->u,8,8,(rd(s->r,8,8)+rd(s->u,0,8)));
L_1803fdd95_3:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fdd95_4:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803fdd95_5:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fdd95_6:;
/* 1803fdd99: mov dword ptr [rdx + r11*8], eax */
L_1803fdd99_0:;
L_1803fdd99_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd99_2:;
wr(s->u,8,8,(rd(s->r,16,8)+rd(s->u,0,8)));
L_1803fdd99_3:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803fdd99_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803fdd99_5:;
/* 1803fdd9d: mov r9d, dword ptr [rcx + r11*8 + 4] */
L_1803fdd9d_0:;
L_1803fdd9d_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,8,8)));
L_1803fdd9d_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdd9d_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdd9d_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fdd9d_5:;
wr(s->r,136,4,rd(s->u,44,4));
L_1803fdd9d_6:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fdd9d_7:;
/* 1803fdda2: mov dword ptr [rdx + r11*8 + 4], r9d */
L_1803fdda2_0:;
L_1803fdda2_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,16,8)));
L_1803fdda2_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdda2_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdda2_4:;
wr(s->u,40,4,rd(s->r,136,4));
L_1803fdda2_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdda2_6:;
/* 1803fdda7: mov r10d, dword ptr [r14 + r11*8] */
L_1803fdda7_0:;
L_1803fdda7_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdda7_2:;
wr(s->u,8,8,(rd(s->r,176,8)+rd(s->u,0,8)));
L_1803fdda7_3:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,8,8),4));
L_1803fdda7_4:;
wr(s->r,144,4,rd(s->u,44,4));
L_1803fdda7_5:;
wr(s->r,144,8,rd(s->r,144,4));
L_1803fdda7_6:;
/* 1803fddab: mov dword ptr [rdx + r11*8 + 8], r10d */
L_1803fddab_0:;
L_1803fddab_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,16,8)));
L_1803fddab_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddab_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddab_4:;
wr(s->u,40,4,rd(s->r,144,4));
L_1803fddab_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fddab_6:;
/* 1803fddb0: mov eax, dword ptr [r14 + r11*8 + 4] */
L_1803fddb0_0:;
L_1803fddb0_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,176,8)));
L_1803fddb0_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddb0_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddb0_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fddb0_5:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803fddb0_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fddb0_7:;
/* 1803fddb5: mov dword ptr [rdx + r11*8 + 0xc], eax */
L_1803fddb5_0:;
L_1803fddb5_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,16,8)));
L_1803fddb5_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddb5_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddb5_4:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803fddb5_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fddb5_6:;
/* 1803fddba: mov eax, dword ptr [rcx + r11*8 + 8] */
L_1803fddba_0:;
L_1803fddba_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,8,8)));
L_1803fddba_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddba_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddba_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fddba_5:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803fddba_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fddba_7:;
/* 1803fddbf: mov dword ptr [r15 + r11*8], eax */
L_1803fddbf_0:;
L_1803fddbf_1:;
wr(s->u,0,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddbf_2:;
wr(s->u,8,8,(rd(s->r,184,8)+rd(s->u,0,8)));
L_1803fddbf_3:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803fddbf_4:;
mw((uint64_t)rd(s->u,8,8),4,rd(s->u,40,4));
L_1803fddbf_5:;
/* 1803fddc3: mov eax, dword ptr [rcx + r11*8 + 0xc] */
L_1803fddc3_0:;
L_1803fddc3_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,8,8)));
L_1803fddc3_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddc3_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddc3_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fddc3_5:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803fddc3_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fddc3_7:;
/* 1803fddc8: mov dword ptr [r15 + r11*8 + 4], eax */
L_1803fddc8_0:;
L_1803fddc8_1:;
wr(s->u,16,8,(((U)UINT64_C(0x4))+rd(s->r,184,8)));
L_1803fddc8_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddc8_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddc8_4:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803fddc8_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fddc8_6:;
/* 1803fddcd: mov eax, dword ptr [r14 + r11*8 + 8] */
L_1803fddcd_0:;
L_1803fddcd_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,176,8)));
L_1803fddcd_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddcd_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddcd_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fddcd_5:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803fddcd_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fddcd_7:;
/* 1803fddd2: mov dword ptr [r15 + r11*8 + 8], eax */
L_1803fddd2_0:;
L_1803fddd2_1:;
wr(s->u,16,8,(((U)UINT64_C(0x8))+rd(s->r,184,8)));
L_1803fddd2_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddd2_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddd2_4:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803fddd2_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fddd2_6:;
/* 1803fddd7: mov eax, dword ptr [r14 + r11*8 + 0xc] */
L_1803fddd7_0:;
L_1803fddd7_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,176,8)));
L_1803fddd7_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fddd7_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fddd7_4:;
wr(s->u,44,4,mr((uint64_t)rd(s->u,32,8),4));
L_1803fddd7_5:;
wr(s->r,0,4,rd(s->u,44,4));
L_1803fddd7_6:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fddd7_7:;
/* 1803fdddc: mov dword ptr [r15 + r11*8 + 0xc], eax */
L_1803fdddc_0:;
L_1803fdddc_1:;
wr(s->u,16,8,(((U)UINT64_C(0xc))+rd(s->r,184,8)));
L_1803fdddc_2:;
wr(s->u,24,8,(rd(s->r,152,8)*((U)UINT64_C(0x8))));
L_1803fdddc_3:;
wr(s->u,32,8,(rd(s->u,16,8)+rd(s->u,24,8)));
L_1803fdddc_4:;
wr(s->u,40,4,rd(s->r,0,4));
L_1803fdddc_5:;
mw((uint64_t)rd(s->u,32,8),4,rd(s->u,40,4));
L_1803fdddc_6:;
/* 1803fdde1: mov r11d, dword ptr [r8] */
L_1803fdde1_0:;
L_1803fdde1_1:;
wr(s->u,44,4,mr((uint64_t)rd(s->r,128,8),4));
L_1803fdde1_2:;
wr(s->r,152,4,rd(s->u,44,4));
L_1803fdde1_3:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fdde1_4:;
/* 1803fdde4: sar r11d, 1 */
L_1803fdde4_0:;
L_1803fdde4_1:;
wr(s->u,61,4,(rd(s->r,152,4)&((U)UINT64_C(0x1))));
L_1803fdde4_2:;
wr(s->r,512,1,(rd(s->u,61,4)!=((U)UINT64_C(0x0))));
L_1803fdde4_3:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fdde4_4:;
wr(s->r,152,4,((((U)UINT64_C(0x1))>=32)?(sx(rd(s->r,152,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,152,4),4)>>((U)UINT64_C(0x1)))));
L_1803fdde4_5:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fdde4_6:;
wr(s->r,519,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdde4_7:;
wr(s->r,518,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fdde4_8:;
wr(s->u,51,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fdde4_9:;
wr(s->u,59,1,pop(rd(s->u,51,4),4));
L_1803fdde4_10:;
wr(s->u,60,1,(rd(s->u,59,1)&((U)UINT64_C(0x1))));
L_1803fdde4_11:;
wr(s->r,514,1,(rd(s->u,60,1)==((U)UINT64_C(0x0))));
L_1803fdde4_12:;
/* 1803fdde7: movsxd r11, r11d */
L_1803fdde7_0:;
L_1803fdde7_1:;
wr(s->r,152,8,(U)sx(rd(s->r,152,4),4));
L_1803fdde7_2:;
/* 1803fddea: test r11, r11 */
L_1803fddea_0:;
L_1803fddea_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fddea_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fddea_3:;
wr(s->u,65,8,(rd(s->r,152,8)&rd(s->r,152,8)));
L_1803fddea_4:;
wr(s->r,519,1,(sx(rd(s->u,65,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fddea_5:;
wr(s->r,518,1,(rd(s->u,65,8)==((U)UINT64_C(0x0))));
L_1803fddea_6:;
wr(s->u,51,8,(rd(s->u,65,8)&((U)UINT64_C(0xff))));
L_1803fddea_7:;
wr(s->u,59,1,pop(rd(s->u,51,8),8));
L_1803fddea_8:;
wr(s->u,60,1,(rd(s->u,59,1)&((U)UINT64_C(0x1))));
L_1803fddea_9:;
wr(s->r,514,1,(rd(s->u,60,1)==((U)UINT64_C(0x0))));
L_1803fddea_10:;
/* 1803fdded: jg 0x1803fdd91 */
L_1803fdded_0:;
L_1803fdded_1:;
wr(s->u,48,1,(!rd(s->r,518,1)));
L_1803fdded_2:;
wr(s->u,49,1,(rd(s->r,523,1)==rd(s->r,519,1)));
L_1803fdded_3:;
wr(s->u,50,1,((rd(s->u,48,1)!=0)&&(rd(s->u,49,1)!=0)));
L_1803fdded_4:;
if(rd(s->u,50,1)){return UINT64_C(0x1803fdd91);}
L_1803fdded_5:;
return UINT64_C(0x1803fddef);
}
uint64_t b_1803fddef(CPU*s){
/* 1803fddef: add rsp, 0x28 */
L_1803fddef_0:;
L_1803fddef_1:;
wr(s->r,512,1,(((rd(s->r,32,8)+((U)UINT64_C(0x28)))&(((U)1<<64)-1))<rd(s->r,32,8)));
L_1803fddef_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x28)),8,0));
L_1803fddef_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x28))));
L_1803fddef_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fddef_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fddef_6:;
wr(s->u,0,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fddef_7:;
wr(s->u,8,1,pop(rd(s->u,0,8),8));
L_1803fddef_8:;
wr(s->u,9,1,(rd(s->u,8,1)&((U)UINT64_C(0x1))));
L_1803fddef_9:;
wr(s->r,514,1,(rd(s->u,9,1)==((U)UINT64_C(0x0))));
L_1803fddef_10:;
/* 1803fddf3: pop r14 */
L_1803fddf3_0:;
L_1803fddf3_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fddf3_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fddf3_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fddf3_4:;
wr(s->r,176,8,rd(s->u,10,8));
L_1803fddf3_5:;
/* 1803fddf5: pop r15 */
L_1803fddf5_0:;
L_1803fddf5_1:;
wr(s->u,10,8,((U)UINT64_C(0x0)));
L_1803fddf5_2:;
wr(s->u,10,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fddf5_3:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fddf5_4:;
wr(s->r,184,8,rd(s->u,10,8));
L_1803fddf5_5:;
/* 1803fddf7: ret  */
L_1803fddf7_0:;
L_1803fddf7_1:;
wr(s->r,648,8,mr((uint64_t)rd(s->r,32,8),8));
L_1803fddf7_2:;
wr(s->r,32,8,(rd(s->r,32,8)+((U)UINT64_C(0x8))));
L_1803fddf7_3:;
return (uint64_t)rd(s->r,648,8);
L_1803fddf7_4:;
return UINT64_C(0x1803fddf8);
}
uint64_t b_1803fddf8(CPU*s){
/* 1803fddf8: push r15 */
L_1803fddf8_0:;
L_1803fddf8_1:;
wr(s->u,23,8,rd(s->r,184,8));
L_1803fddf8_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fddf8_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,23,8));
L_1803fddf8_4:;
/* 1803fddfa: push rbp */
L_1803fddfa_0:;
L_1803fddfa_1:;
wr(s->u,23,8,rd(s->r,40,8));
L_1803fddfa_2:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x8))));
L_1803fddfa_3:;
mw((uint64_t)rd(s->r,32,8),8,rd(s->u,23,8));
L_1803fddfa_4:;
/* 1803fddfb: sub rsp, 0x78 */
L_1803fddfb_0:;
L_1803fddfb_1:;
wr(s->r,512,1,(rd(s->r,32,8)<((U)UINT64_C(0x78))));
L_1803fddfb_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,32,8),((U)UINT64_C(0x78)),8,1));
L_1803fddfb_3:;
wr(s->r,32,8,(rd(s->r,32,8)-((U)UINT64_C(0x78))));
L_1803fddfb_4:;
wr(s->r,519,1,(sx(rd(s->r,32,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fddfb_5:;
wr(s->r,518,1,(rd(s->r,32,8)==((U)UINT64_C(0x0))));
L_1803fddfb_6:;
wr(s->u,31,8,(rd(s->r,32,8)&((U)UINT64_C(0xff))));
L_1803fddfb_7:;
wr(s->u,39,1,pop(rd(s->u,31,8),8));
L_1803fddfb_8:;
wr(s->u,40,1,(rd(s->u,39,1)&((U)UINT64_C(0x1))));
L_1803fddfb_9:;
wr(s->r,514,1,(rd(s->u,40,1)==((U)UINT64_C(0x0))));
L_1803fddfb_10:;
/* 1803fddff: lea r9d, [rdx + rdx*2] */
L_1803fddff_0:;
L_1803fddff_1:;
wr(s->u,5,8,(rd(s->r,16,8)*((U)UINT64_C(0x2))));
L_1803fddff_2:;
wr(s->u,13,8,(rd(s->r,16,8)+rd(s->u,5,8)));
L_1803fddff_3:;
wr(s->r,136,4,(rd(s->u,13,8) >> (((U)UINT64_C(0x0))*8)));
L_1803fddff_4:;
wr(s->r,136,8,rd(s->r,136,4));
L_1803fddff_5:;
/* 1803fde03: mov eax, r9d */
L_1803fde03_0:;
L_1803fde03_1:;
wr(s->r,0,4,rd(s->r,136,4));
L_1803fde03_2:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fde03_3:;
/* 1803fde06: sar eax, 2 */
L_1803fde06_0:;
L_1803fde06_1:;
wr(s->u,75,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fde06_2:;
wr(s->u,79,4,rd(s->r,0,4));
L_1803fde06_3:;
wr(s->r,0,4,((rd(s->u,75,4)>=32)?(sx(rd(s->r,0,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,0,4),4)>>rd(s->u,75,4))));
L_1803fde06_4:;
wr(s->r,0,8,rd(s->r,0,4));
L_1803fde06_5:;
wr(s->u,60,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803fde06_6:;
wr(s->u,61,4,(rd(s->u,75,4)-((U)UINT64_C(0x1))));
L_1803fde06_7:;
wr(s->u,65,4,((rd(s->u,61,4)>=32)?(sx(rd(s->u,79,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,79,4),4)>>rd(s->u,61,4))));
L_1803fde06_8:;
wr(s->u,69,4,(rd(s->u,65,4)&((U)UINT64_C(0x1))));
L_1803fde06_9:;
wr(s->u,73,1,(rd(s->u,69,4)!=((U)UINT64_C(0x0))));
L_1803fde06_10:;
wr(s->u,0,1,rd(s->u,60,1));
L_1803fde06_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fde06_12:;
wr(s->u,2,1,(!rd(s->u,60,1)));
L_1803fde06_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fde06_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,73,1)));
L_1803fde06_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fde06_16:;
wr(s->u,74,1,(rd(s->u,75,4)==((U)UINT64_C(0x1))));
L_1803fde06_17:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803fde06_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fde06_19:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803fde06_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fde06_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fde06_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fde06_23:;
wr(s->u,41,1,(rd(s->u,75,4)!=((U)UINT64_C(0x0))));
L_1803fde06_24:;
wr(s->u,42,1,(sx(rd(s->r,0,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fde06_25:;
wr(s->u,43,1,(!rd(s->u,41,1)));
L_1803fde06_26:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,519,1)));
L_1803fde06_27:;
wr(s->u,45,1,(rd(s->u,41,1)&rd(s->u,42,1)));
L_1803fde06_28:;
wr(s->r,519,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803fde06_29:;
wr(s->u,46,1,(rd(s->r,0,4)==((U)UINT64_C(0x0))));
L_1803fde06_30:;
wr(s->u,47,1,(!rd(s->u,41,1)));
L_1803fde06_31:;
wr(s->u,48,1,(rd(s->u,47,1)&rd(s->r,518,1)));
L_1803fde06_32:;
wr(s->u,49,1,(rd(s->u,41,1)&rd(s->u,46,1)));
L_1803fde06_33:;
wr(s->r,518,1,(rd(s->u,48,1)|rd(s->u,49,1)));
L_1803fde06_34:;
wr(s->u,50,4,(rd(s->r,0,4)&((U)UINT64_C(0xff))));
L_1803fde06_35:;
wr(s->u,54,1,pop(rd(s->u,50,4),4));
L_1803fde06_36:;
wr(s->u,55,1,(rd(s->u,54,1)&((U)UINT64_C(0x1))));
L_1803fde06_37:;
wr(s->u,56,1,(rd(s->u,55,1)==((U)UINT64_C(0x0))));
L_1803fde06_38:;
wr(s->u,57,1,(!rd(s->u,41,1)));
L_1803fde06_39:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,514,1)));
L_1803fde06_40:;
wr(s->u,59,1,(rd(s->u,41,1)&rd(s->u,56,1)));
L_1803fde06_41:;
wr(s->r,514,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803fde06_42:;
/* 1803fde09: mov r11d, edx */
L_1803fde09_0:;
L_1803fde09_1:;
wr(s->r,152,4,rd(s->r,16,4));
L_1803fde09_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fde09_3:;
/* 1803fde0c: sar r11d, 2 */
L_1803fde0c_0:;
L_1803fde0c_1:;
wr(s->u,75,4,(((U)UINT64_C(0x2))&((U)UINT64_C(0x1f))));
L_1803fde0c_2:;
wr(s->u,79,4,rd(s->r,152,4));
L_1803fde0c_3:;
wr(s->r,152,4,((rd(s->u,75,4)>=32)?(sx(rd(s->r,152,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,152,4),4)>>rd(s->u,75,4))));
L_1803fde0c_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fde0c_5:;
wr(s->u,60,1,(rd(s->u,75,4)==((U)UINT64_C(0x0))));
L_1803fde0c_6:;
wr(s->u,61,4,(rd(s->u,75,4)-((U)UINT64_C(0x1))));
L_1803fde0c_7:;
wr(s->u,65,4,((rd(s->u,61,4)>=32)?(sx(rd(s->u,79,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,79,4),4)>>rd(s->u,61,4))));
L_1803fde0c_8:;
wr(s->u,69,4,(rd(s->u,65,4)&((U)UINT64_C(0x1))));
L_1803fde0c_9:;
wr(s->u,73,1,(rd(s->u,69,4)!=((U)UINT64_C(0x0))));
L_1803fde0c_10:;
wr(s->u,0,1,rd(s->u,60,1));
L_1803fde0c_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fde0c_12:;
wr(s->u,2,1,(!rd(s->u,60,1)));
L_1803fde0c_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fde0c_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,73,1)));
L_1803fde0c_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fde0c_16:;
wr(s->u,74,1,(rd(s->u,75,4)==((U)UINT64_C(0x1))));
L_1803fde0c_17:;
wr(s->u,0,1,rd(s->u,74,1));
L_1803fde0c_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fde0c_19:;
wr(s->u,2,1,(!rd(s->u,74,1)));
L_1803fde0c_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fde0c_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fde0c_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fde0c_23:;
wr(s->u,41,1,(rd(s->u,75,4)!=((U)UINT64_C(0x0))));
L_1803fde0c_24:;
wr(s->u,42,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fde0c_25:;
wr(s->u,43,1,(!rd(s->u,41,1)));
L_1803fde0c_26:;
wr(s->u,44,1,(rd(s->u,43,1)&rd(s->r,519,1)));
L_1803fde0c_27:;
wr(s->u,45,1,(rd(s->u,41,1)&rd(s->u,42,1)));
L_1803fde0c_28:;
wr(s->r,519,1,(rd(s->u,44,1)|rd(s->u,45,1)));
L_1803fde0c_29:;
wr(s->u,46,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fde0c_30:;
wr(s->u,47,1,(!rd(s->u,41,1)));
L_1803fde0c_31:;
wr(s->u,48,1,(rd(s->u,47,1)&rd(s->r,518,1)));
L_1803fde0c_32:;
wr(s->u,49,1,(rd(s->u,41,1)&rd(s->u,46,1)));
L_1803fde0c_33:;
wr(s->r,518,1,(rd(s->u,48,1)|rd(s->u,49,1)));
L_1803fde0c_34:;
wr(s->u,50,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fde0c_35:;
wr(s->u,54,1,pop(rd(s->u,50,4),4));
L_1803fde0c_36:;
wr(s->u,55,1,(rd(s->u,54,1)&((U)UINT64_C(0x1))));
L_1803fde0c_37:;
wr(s->u,56,1,(rd(s->u,55,1)==((U)UINT64_C(0x0))));
L_1803fde0c_38:;
wr(s->u,57,1,(!rd(s->u,41,1)));
L_1803fde0c_39:;
wr(s->u,58,1,(rd(s->u,57,1)&rd(s->r,514,1)));
L_1803fde0c_40:;
wr(s->u,59,1,(rd(s->u,41,1)&rd(s->u,56,1)));
L_1803fde0c_41:;
wr(s->r,514,1,(rd(s->u,58,1)|rd(s->u,59,1)));
L_1803fde0c_42:;
/* 1803fde10: mov r10, rcx */
L_1803fde10_0:;
L_1803fde10_1:;
wr(s->r,144,8,rd(s->r,8,8));
L_1803fde10_2:;
/* 1803fde13: mov ebp, 1 */
L_1803fde13_0:;
L_1803fde13_1:;
wr(s->r,40,8,((U)UINT64_C(0x1)));
L_1803fde13_2:;
/* 1803fde18: test r11d, r11d */
L_1803fde18_0:;
L_1803fde18_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fde18_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fde18_3:;
wr(s->u,83,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803fde18_4:;
wr(s->r,519,1,(sx(rd(s->u,83,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fde18_5:;
wr(s->r,518,1,(rd(s->u,83,4)==((U)UINT64_C(0x0))));
L_1803fde18_6:;
wr(s->u,31,4,(rd(s->u,83,4)&((U)UINT64_C(0xff))));
L_1803fde18_7:;
wr(s->u,39,1,pop(rd(s->u,31,4),4));
L_1803fde18_8:;
wr(s->u,40,1,(rd(s->u,39,1)&((U)UINT64_C(0x1))));
L_1803fde18_9:;
wr(s->r,514,1,(rd(s->u,40,1)==((U)UINT64_C(0x0))));
L_1803fde18_10:;
/* 1803fde1b: jle 0x1803fdf1f */
L_1803fde1b_0:;
L_1803fde1b_1:;
wr(s->u,21,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fde1b_2:;
wr(s->u,22,1,((rd(s->r,518,1)!=0)||(rd(s->u,21,1)!=0)));
L_1803fde1b_3:;
if(rd(s->u,22,1)){return UINT64_C(0x1803fdf1f);}
L_1803fde1b_4:;
return UINT64_C(0x1803fde21);
}
uint64_t b_1803fde21(CPU*s){
/* 1803fde21: movaps xmmword ptr [rsp + 0x60], xmm6 */
L_1803fde21_0:;
L_1803fde21_1:;
wr(s->u,8,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803fde21_2:;
wr(s->u,20,16,rd(s->r,4992,16));
L_1803fde21_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803fde21_4:;
/* 1803fde26: movaps xmmword ptr [rsp + 0x50], xmm7 */
L_1803fde26_0:;
L_1803fde26_1:;
wr(s->u,8,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803fde26_2:;
wr(s->u,20,16,rd(s->r,5056,16));
L_1803fde26_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803fde26_4:;
/* 1803fde2b: movaps xmmword ptr [rsp + 0x40], xmm8 */
L_1803fde2b_0:;
L_1803fde2b_1:;
wr(s->u,8,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fde2b_2:;
wr(s->u,20,16,rd(s->r,5120,16));
L_1803fde2b_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803fde2b_4:;
/* 1803fde31: movaps xmmword ptr [rsp + 0x30], xmm9 */
L_1803fde31_0:;
L_1803fde31_1:;
wr(s->u,8,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fde31_2:;
wr(s->u,20,16,rd(s->r,5184,16));
L_1803fde31_3:;
mw((uint64_t)rd(s->u,8,8),16,rd(s->u,20,16));
L_1803fde31_4:;
/* 1803fde37: movss xmm5, dword ptr [r10] */
L_1803fde37_0:;
L_1803fde37_1:;
wr(s->u,16,4,mr((uint64_t)rd(s->r,144,8),4));
L_1803fde37_2:;
wr(s->r,4928,4,rd(s->u,16,4));
L_1803fde37_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fde37_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fde37_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fde37_6:;
/* 1803fde3c: movss xmm8, dword ptr [r10 + 8] */
L_1803fde3c_0:;
L_1803fde3c_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803fde3c_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde3c_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fde3c_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fde3c_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fde3c_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fde3c_7:;
/* 1803fde42: movaps xmm6, xmm8 */
L_1803fde42_0:;
L_1803fde42_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803fde42_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803fde42_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803fde42_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803fde42_5:;
/* 1803fde46: movss xmm7, dword ptr [r10 + 4] */
L_1803fde46_0:;
L_1803fde46_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803fde46_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde46_3:;
wr(s->r,5056,4,rd(s->u,16,4));
L_1803fde46_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fde46_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fde46_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fde46_7:;
/* 1803fde4c: movaps xmm4, xmm7 */
L_1803fde4c_0:;
L_1803fde4c_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803fde4c_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803fde4c_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803fde4c_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803fde4c_5:;
/* 1803fde4f: movss xmm9, dword ptr [r10 + 0xc] */
L_1803fde4f_0:;
L_1803fde4f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803fde4f_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde4f_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803fde4f_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fde4f_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fde4f_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fde4f_7:;
/* 1803fde55: movss xmm3, dword ptr [r10 + 0x10] */
L_1803fde55_0:;
L_1803fde55_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x10))));
L_1803fde55_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde55_3:;
wr(s->r,4800,4,rd(s->u,16,4));
L_1803fde55_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fde55_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fde55_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fde55_7:;
/* 1803fde5b: movaps xmm0, xmm3 */
L_1803fde5b_0:;
L_1803fde5b_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fde5b_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fde5b_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fde5b_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fde5b_5:;
/* 1803fde5e: movss xmm2, dword ptr [r10 + 0x14] */
L_1803fde5e_0:;
L_1803fde5e_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x14))));
L_1803fde5e_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde5e_3:;
wr(s->r,4736,4,rd(s->u,16,4));
L_1803fde5e_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fde5e_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fde5e_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fde5e_7:;
/* 1803fde64: movaps xmm1, xmm2 */
L_1803fde64_0:;
L_1803fde64_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803fde64_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803fde64_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803fde64_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803fde64_5:;
/* 1803fde67: addss xmm6, xmm5 */
L_1803fde67_0:;
L_1803fde67_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fde67_2:;
/* 1803fde6b: addss xmm4, xmm9 */
L_1803fde6b_0:;
L_1803fde6b_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fde6b_2:;
/* 1803fde70: subss xmm5, xmm8 */
L_1803fde70_0:;
L_1803fde70_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803fde70_2:;
/* 1803fde75: movss xmm8, dword ptr [r10 + 0x18] */
L_1803fde75_0:;
L_1803fde75_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x18))));
L_1803fde75_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde75_3:;
wr(s->r,5120,4,rd(s->u,16,4));
L_1803fde75_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fde75_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fde75_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fde75_7:;
/* 1803fde7b: subss xmm7, xmm9 */
L_1803fde7b_0:;
L_1803fde7b_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fde7b_2:;
/* 1803fde80: movss xmm9, dword ptr [r10 + 0x1c] */
L_1803fde80_0:;
L_1803fde80_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x1c))));
L_1803fde80_2:;
wr(s->u,16,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde80_3:;
wr(s->r,5184,4,rd(s->u,16,4));
L_1803fde80_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fde80_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fde80_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fde80_7:;
/* 1803fde86: addss xmm0, xmm8 */
L_1803fde86_0:;
L_1803fde86_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fde86_2:;
/* 1803fde8b: addss xmm1, xmm9 */
L_1803fde8b_0:;
L_1803fde8b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fde8b_2:;
/* 1803fde90: subss xmm3, xmm8 */
L_1803fde90_0:;
L_1803fde90_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803fde90_2:;
/* 1803fde95: movaps xmm8, xmm6 */
L_1803fde95_0:;
L_1803fde95_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803fde95_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803fde95_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803fde95_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803fde95_5:;
/* 1803fde99: subss xmm2, xmm9 */
L_1803fde99_0:;
L_1803fde99_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fde99_2:;
/* 1803fde9e: subss xmm6, xmm0 */
L_1803fde9e_0:;
L_1803fde9e_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fde9e_2:;
/* 1803fdea2: movss dword ptr [r10 + 0x10], xmm6 */
L_1803fdea2_0:;
L_1803fdea2_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x10))));
L_1803fdea2_2:;
wr(s->u,16,4,rd(s->r,4992,4));
L_1803fdea2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,16,4));
L_1803fdea2_4:;
/* 1803fdea8: addss xmm8, xmm0 */
L_1803fdea8_0:;
L_1803fdea8_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fdea8_2:;
/* 1803fdead: movss dword ptr [r10], xmm8 */
L_1803fdead_0:;
L_1803fdead_1:;
wr(s->u,16,4,rd(s->r,5120,4));
L_1803fdead_2:;
mw((uint64_t)rd(s->r,144,8),4,rd(s->u,16,4));
L_1803fdead_3:;
/* 1803fdeb2: movaps xmm8, xmm4 */
L_1803fdeb2_0:;
L_1803fdeb2_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803fdeb2_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803fdeb2_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803fdeb2_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803fdeb2_5:;
/* 1803fdeb6: movaps xmm0, xmm5 */
L_1803fdeb6_0:;
L_1803fdeb6_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fdeb6_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fdeb6_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fdeb6_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fdeb6_5:;
/* 1803fdeb9: subss xmm4, xmm1 */
L_1803fdeb9_0:;
L_1803fdeb9_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fdeb9_2:;
return UINT64_C(0x1803fdebd);
}
uint64_t b_1803fde37(CPU*s){
/* 1803fde37: movss xmm5, dword ptr [r10] */
L_1803fde37_0:;
L_1803fde37_1:;
wr(s->u,8,4,mr((uint64_t)rd(s->r,144,8),4));
L_1803fde37_2:;
wr(s->r,4928,4,rd(s->u,8,4));
L_1803fde37_3:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fde37_4:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fde37_5:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fde37_6:;
/* 1803fde3c: movss xmm8, dword ptr [r10 + 8] */
L_1803fde3c_0:;
L_1803fde3c_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803fde3c_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde3c_3:;
wr(s->r,5120,4,rd(s->u,8,4));
L_1803fde3c_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fde3c_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fde3c_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fde3c_7:;
/* 1803fde42: movaps xmm6, xmm8 */
L_1803fde42_0:;
L_1803fde42_1:;
wr(s->r,4992,4,rd(s->r,5120,4));
L_1803fde42_2:;
wr(s->r,4996,4,rd(s->r,5124,4));
L_1803fde42_3:;
wr(s->r,5000,4,rd(s->r,5128,4));
L_1803fde42_4:;
wr(s->r,5004,4,rd(s->r,5132,4));
L_1803fde42_5:;
/* 1803fde46: movss xmm7, dword ptr [r10 + 4] */
L_1803fde46_0:;
L_1803fde46_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803fde46_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde46_3:;
wr(s->r,5056,4,rd(s->u,8,4));
L_1803fde46_4:;
wr(s->r,5060,4,((U)UINT64_C(0x0)));
L_1803fde46_5:;
wr(s->r,5064,4,((U)UINT64_C(0x0)));
L_1803fde46_6:;
wr(s->r,5068,4,((U)UINT64_C(0x0)));
L_1803fde46_7:;
/* 1803fde4c: movaps xmm4, xmm7 */
L_1803fde4c_0:;
L_1803fde4c_1:;
wr(s->r,4864,4,rd(s->r,5056,4));
L_1803fde4c_2:;
wr(s->r,4868,4,rd(s->r,5060,4));
L_1803fde4c_3:;
wr(s->r,4872,4,rd(s->r,5064,4));
L_1803fde4c_4:;
wr(s->r,4876,4,rd(s->r,5068,4));
L_1803fde4c_5:;
/* 1803fde4f: movss xmm9, dword ptr [r10 + 0xc] */
L_1803fde4f_0:;
L_1803fde4f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803fde4f_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde4f_3:;
wr(s->r,5184,4,rd(s->u,8,4));
L_1803fde4f_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fde4f_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fde4f_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fde4f_7:;
/* 1803fde55: movss xmm3, dword ptr [r10 + 0x10] */
L_1803fde55_0:;
L_1803fde55_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x10))));
L_1803fde55_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde55_3:;
wr(s->r,4800,4,rd(s->u,8,4));
L_1803fde55_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fde55_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fde55_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fde55_7:;
/* 1803fde5b: movaps xmm0, xmm3 */
L_1803fde5b_0:;
L_1803fde5b_1:;
wr(s->r,4608,4,rd(s->r,4800,4));
L_1803fde5b_2:;
wr(s->r,4612,4,rd(s->r,4804,4));
L_1803fde5b_3:;
wr(s->r,4616,4,rd(s->r,4808,4));
L_1803fde5b_4:;
wr(s->r,4620,4,rd(s->r,4812,4));
L_1803fde5b_5:;
/* 1803fde5e: movss xmm2, dword ptr [r10 + 0x14] */
L_1803fde5e_0:;
L_1803fde5e_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x14))));
L_1803fde5e_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde5e_3:;
wr(s->r,4736,4,rd(s->u,8,4));
L_1803fde5e_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fde5e_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fde5e_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fde5e_7:;
/* 1803fde64: movaps xmm1, xmm2 */
L_1803fde64_0:;
L_1803fde64_1:;
wr(s->r,4672,4,rd(s->r,4736,4));
L_1803fde64_2:;
wr(s->r,4676,4,rd(s->r,4740,4));
L_1803fde64_3:;
wr(s->r,4680,4,rd(s->r,4744,4));
L_1803fde64_4:;
wr(s->r,4684,4,rd(s->r,4748,4));
L_1803fde64_5:;
/* 1803fde67: addss xmm6, xmm5 */
L_1803fde67_0:;
L_1803fde67_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)+fv(rd(s->r,4928,4),4),4));
L_1803fde67_2:;
/* 1803fde6b: addss xmm4, xmm9 */
L_1803fde6b_0:;
L_1803fde6b_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fde6b_2:;
/* 1803fde70: subss xmm5, xmm8 */
L_1803fde70_0:;
L_1803fde70_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803fde70_2:;
/* 1803fde75: movss xmm8, dword ptr [r10 + 0x18] */
L_1803fde75_0:;
L_1803fde75_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x18))));
L_1803fde75_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde75_3:;
wr(s->r,5120,4,rd(s->u,8,4));
L_1803fde75_4:;
wr(s->r,5124,4,((U)UINT64_C(0x0)));
L_1803fde75_5:;
wr(s->r,5128,4,((U)UINT64_C(0x0)));
L_1803fde75_6:;
wr(s->r,5132,4,((U)UINT64_C(0x0)));
L_1803fde75_7:;
/* 1803fde7b: subss xmm7, xmm9 */
L_1803fde7b_0:;
L_1803fde7b_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fde7b_2:;
/* 1803fde80: movss xmm9, dword ptr [r10 + 0x1c] */
L_1803fde80_0:;
L_1803fde80_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x1c))));
L_1803fde80_2:;
wr(s->u,8,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fde80_3:;
wr(s->r,5184,4,rd(s->u,8,4));
L_1803fde80_4:;
wr(s->r,5188,4,((U)UINT64_C(0x0)));
L_1803fde80_5:;
wr(s->r,5192,4,((U)UINT64_C(0x0)));
L_1803fde80_6:;
wr(s->r,5196,4,((U)UINT64_C(0x0)));
L_1803fde80_7:;
/* 1803fde86: addss xmm0, xmm8 */
L_1803fde86_0:;
L_1803fde86_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,5120,4),4),4));
L_1803fde86_2:;
/* 1803fde8b: addss xmm1, xmm9 */
L_1803fde8b_0:;
L_1803fde8b_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,5184,4),4),4));
L_1803fde8b_2:;
/* 1803fde90: subss xmm3, xmm8 */
L_1803fde90_0:;
L_1803fde90_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,5120,4),4),4));
L_1803fde90_2:;
/* 1803fde95: movaps xmm8, xmm6 */
L_1803fde95_0:;
L_1803fde95_1:;
wr(s->r,5120,4,rd(s->r,4992,4));
L_1803fde95_2:;
wr(s->r,5124,4,rd(s->r,4996,4));
L_1803fde95_3:;
wr(s->r,5128,4,rd(s->r,5000,4));
L_1803fde95_4:;
wr(s->r,5132,4,rd(s->r,5004,4));
L_1803fde95_5:;
/* 1803fde99: subss xmm2, xmm9 */
L_1803fde99_0:;
L_1803fde99_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,5184,4),4),4));
L_1803fde99_2:;
/* 1803fde9e: subss xmm6, xmm0 */
L_1803fde9e_0:;
L_1803fde9e_1:;
wr(s->r,4992,4,fb(fv(rd(s->r,4992,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fde9e_2:;
/* 1803fdea2: movss dword ptr [r10 + 0x10], xmm6 */
L_1803fdea2_0:;
L_1803fdea2_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x10))));
L_1803fdea2_2:;
wr(s->u,8,4,rd(s->r,4992,4));
L_1803fdea2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdea2_4:;
/* 1803fdea8: addss xmm8, xmm0 */
L_1803fdea8_0:;
L_1803fdea8_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fdea8_2:;
/* 1803fdead: movss dword ptr [r10], xmm8 */
L_1803fdead_0:;
L_1803fdead_1:;
wr(s->u,8,4,rd(s->r,5120,4));
L_1803fdead_2:;
mw((uint64_t)rd(s->r,144,8),4,rd(s->u,8,4));
L_1803fdead_3:;
/* 1803fdeb2: movaps xmm8, xmm4 */
L_1803fdeb2_0:;
L_1803fdeb2_1:;
wr(s->r,5120,4,rd(s->r,4864,4));
L_1803fdeb2_2:;
wr(s->r,5124,4,rd(s->r,4868,4));
L_1803fdeb2_3:;
wr(s->r,5128,4,rd(s->r,4872,4));
L_1803fdeb2_4:;
wr(s->r,5132,4,rd(s->r,4876,4));
L_1803fdeb2_5:;
/* 1803fdeb6: movaps xmm0, xmm5 */
L_1803fdeb6_0:;
L_1803fdeb6_1:;
wr(s->r,4608,4,rd(s->r,4928,4));
L_1803fdeb6_2:;
wr(s->r,4612,4,rd(s->r,4932,4));
L_1803fdeb6_3:;
wr(s->r,4616,4,rd(s->r,4936,4));
L_1803fdeb6_4:;
wr(s->r,4620,4,rd(s->r,4940,4));
L_1803fdeb6_5:;
/* 1803fdeb9: subss xmm4, xmm1 */
L_1803fdeb9_0:;
L_1803fdeb9_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fdeb9_2:;
/* 1803fdebd: movss dword ptr [r10 + 0x14], xmm4 */
L_1803fdebd_0:;
L_1803fdebd_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x14))));
L_1803fdebd_2:;
wr(s->u,8,4,rd(s->r,4864,4));
L_1803fdebd_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdebd_4:;
/* 1803fdec3: addss xmm8, xmm1 */
L_1803fdec3_0:;
L_1803fdec3_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fdec3_2:;
/* 1803fdec8: movss dword ptr [r10 + 4], xmm8 */
L_1803fdec8_0:;
L_1803fdec8_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803fdec8_2:;
wr(s->u,8,4,rd(s->r,5120,4));
L_1803fdec8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdec8_4:;
/* 1803fdece: addss xmm0, xmm2 */
L_1803fdece_0:;
L_1803fdece_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fdece_2:;
return UINT64_C(0x1803fded2);
}
uint64_t b_1803fdebd(CPU*s){
/* 1803fdebd: movss dword ptr [r10 + 0x14], xmm4 */
L_1803fdebd_0:;
L_1803fdebd_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x14))));
L_1803fdebd_2:;
wr(s->u,8,4,rd(s->r,4864,4));
L_1803fdebd_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdebd_4:;
/* 1803fdec3: addss xmm8, xmm1 */
L_1803fdec3_0:;
L_1803fdec3_1:;
wr(s->r,5120,4,fb(fv(rd(s->r,5120,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fdec3_2:;
/* 1803fdec8: movss dword ptr [r10 + 4], xmm8 */
L_1803fdec8_0:;
L_1803fdec8_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803fdec8_2:;
wr(s->u,8,4,rd(s->r,5120,4));
L_1803fdec8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdec8_4:;
/* 1803fdece: addss xmm0, xmm2 */
L_1803fdece_0:;
L_1803fdece_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fdece_2:;
/* 1803fded2: movss dword ptr [r10 + 8], xmm0 */
L_1803fded2_0:;
L_1803fded2_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803fded2_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803fded2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fded2_4:;
/* 1803fded8: movaps xmm0, xmm7 */
L_1803fded8_0:;
L_1803fded8_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fded8_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fded8_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fded8_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fded8_5:;
/* 1803fdedb: subss xmm5, xmm2 */
L_1803fdedb_0:;
L_1803fdedb_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fdedb_2:;
/* 1803fdedf: movss dword ptr [r10 + 0x18], xmm5 */
L_1803fdedf_0:;
L_1803fdedf_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x18))));
L_1803fdedf_2:;
wr(s->u,8,4,rd(s->r,4928,4));
L_1803fdedf_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdedf_4:;
/* 1803fdee5: subss xmm0, xmm3 */
L_1803fdee5_0:;
L_1803fdee5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fdee5_2:;
/* 1803fdee9: movss dword ptr [r10 + 0xc], xmm0 */
L_1803fdee9_0:;
L_1803fdee9_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803fdee9_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803fdee9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdee9_4:;
/* 1803fdeef: addss xmm7, xmm3 */
L_1803fdeef_0:;
L_1803fdeef_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fdeef_2:;
/* 1803fdef3: movss dword ptr [r10 + 0x1c], xmm7 */
L_1803fdef3_0:;
L_1803fdef3_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x1c))));
L_1803fdef3_2:;
wr(s->u,8,4,rd(s->r,5056,4));
L_1803fdef3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdef3_4:;
/* 1803fdef9: add r10, 0x20 */
L_1803fdef9_0:;
L_1803fdef9_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803fdef9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x20)),8,0));
L_1803fdef9_3:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0x20))));
L_1803fdef9_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fdef9_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803fdef9_6:;
wr(s->u,14,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803fdef9_7:;
wr(s->u,22,1,pop(rd(s->u,14,8),8));
L_1803fdef9_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fdef9_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fdef9_10:;
/* 1803fdefd: add ebp, 1 */
L_1803fdefd_0:;
L_1803fdefd_1:;
wr(s->r,512,1,(((rd(s->r,40,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,40,4)));
L_1803fdefd_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),((U)UINT64_C(0x1)),4,0));
L_1803fdefd_3:;
wr(s->r,40,4,(rd(s->r,40,4)+((U)UINT64_C(0x1))));
L_1803fdefd_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fdefd_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdefd_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fdefd_7:;
wr(s->u,14,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fdefd_8:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fdefd_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fdefd_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fdefd_11:;
/* 1803fdf00: cmp ebp, r11d */
L_1803fdf00_0:;
L_1803fdf00_1:;
wr(s->u,24,4,rd(s->r,152,4));
L_1803fdf00_2:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,24,4)));
L_1803fdf00_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,24,4),4,1));
L_1803fdf00_4:;
wr(s->u,28,4,(rd(s->r,40,4)-rd(s->u,24,4)));
L_1803fdf00_5:;
wr(s->r,519,1,(sx(rd(s->u,28,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdf00_6:;
wr(s->r,518,1,(rd(s->u,28,4)==((U)UINT64_C(0x0))));
L_1803fdf00_7:;
wr(s->u,14,4,(rd(s->u,28,4)&((U)UINT64_C(0xff))));
L_1803fdf00_8:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fdf00_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fdf00_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fdf00_11:;
/* 1803fdf03: jle 0x1803fde37 */
L_1803fdf03_0:;
L_1803fdf03_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fdf03_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803fdf03_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fde37);}
L_1803fdf03_4:;
return UINT64_C(0x1803fdf09);
}
uint64_t b_1803fded2(CPU*s){
/* 1803fded2: movss dword ptr [r10 + 8], xmm0 */
L_1803fded2_0:;
L_1803fded2_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803fded2_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803fded2_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fded2_4:;
/* 1803fded8: movaps xmm0, xmm7 */
L_1803fded8_0:;
L_1803fded8_1:;
wr(s->r,4608,4,rd(s->r,5056,4));
L_1803fded8_2:;
wr(s->r,4612,4,rd(s->r,5060,4));
L_1803fded8_3:;
wr(s->r,4616,4,rd(s->r,5064,4));
L_1803fded8_4:;
wr(s->r,4620,4,rd(s->r,5068,4));
L_1803fded8_5:;
/* 1803fdedb: subss xmm5, xmm2 */
L_1803fdedb_0:;
L_1803fdedb_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fdedb_2:;
/* 1803fdedf: movss dword ptr [r10 + 0x18], xmm5 */
L_1803fdedf_0:;
L_1803fdedf_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x18))));
L_1803fdedf_2:;
wr(s->u,8,4,rd(s->r,4928,4));
L_1803fdedf_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdedf_4:;
/* 1803fdee5: subss xmm0, xmm3 */
L_1803fdee5_0:;
L_1803fdee5_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fdee5_2:;
/* 1803fdee9: movss dword ptr [r10 + 0xc], xmm0 */
L_1803fdee9_0:;
L_1803fdee9_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803fdee9_2:;
wr(s->u,8,4,rd(s->r,4608,4));
L_1803fdee9_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdee9_4:;
/* 1803fdeef: addss xmm7, xmm3 */
L_1803fdeef_0:;
L_1803fdeef_1:;
wr(s->r,5056,4,fb(fv(rd(s->r,5056,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fdeef_2:;
/* 1803fdef3: movss dword ptr [r10 + 0x1c], xmm7 */
L_1803fdef3_0:;
L_1803fdef3_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x1c))));
L_1803fdef3_2:;
wr(s->u,8,4,rd(s->r,5056,4));
L_1803fdef3_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,8,4));
L_1803fdef3_4:;
/* 1803fdef9: add r10, 0x20 */
L_1803fdef9_0:;
L_1803fdef9_1:;
wr(s->r,512,1,(((rd(s->r,144,8)+((U)UINT64_C(0x20)))&(((U)1<<64)-1))<rd(s->r,144,8)));
L_1803fdef9_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,144,8),((U)UINT64_C(0x20)),8,0));
L_1803fdef9_3:;
wr(s->r,144,8,(rd(s->r,144,8)+((U)UINT64_C(0x20))));
L_1803fdef9_4:;
wr(s->r,519,1,(sx(rd(s->r,144,8),8)<sx(((U)UINT64_C(0x0)),8)));
L_1803fdef9_5:;
wr(s->r,518,1,(rd(s->r,144,8)==((U)UINT64_C(0x0))));
L_1803fdef9_6:;
wr(s->u,14,8,(rd(s->r,144,8)&((U)UINT64_C(0xff))));
L_1803fdef9_7:;
wr(s->u,22,1,pop(rd(s->u,14,8),8));
L_1803fdef9_8:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fdef9_9:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fdef9_10:;
/* 1803fdefd: add ebp, 1 */
L_1803fdefd_0:;
L_1803fdefd_1:;
wr(s->r,512,1,(((rd(s->r,40,4)+((U)UINT64_C(0x1)))&(((U)1<<32)-1))<rd(s->r,40,4)));
L_1803fdefd_2:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),((U)UINT64_C(0x1)),4,0));
L_1803fdefd_3:;
wr(s->r,40,4,(rd(s->r,40,4)+((U)UINT64_C(0x1))));
L_1803fdefd_4:;
wr(s->r,40,8,rd(s->r,40,4));
L_1803fdefd_5:;
wr(s->r,519,1,(sx(rd(s->r,40,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdefd_6:;
wr(s->r,518,1,(rd(s->r,40,4)==((U)UINT64_C(0x0))));
L_1803fdefd_7:;
wr(s->u,14,4,(rd(s->r,40,4)&((U)UINT64_C(0xff))));
L_1803fdefd_8:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fdefd_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fdefd_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fdefd_11:;
/* 1803fdf00: cmp ebp, r11d */
L_1803fdf00_0:;
L_1803fdf00_1:;
wr(s->u,24,4,rd(s->r,152,4));
L_1803fdf00_2:;
wr(s->r,512,1,(rd(s->r,40,4)<rd(s->u,24,4)));
L_1803fdf00_3:;
wr(s->r,523,1,signed_overflow(rd(s->r,40,4),rd(s->u,24,4),4,1));
L_1803fdf00_4:;
wr(s->u,28,4,(rd(s->r,40,4)-rd(s->u,24,4)));
L_1803fdf00_5:;
wr(s->r,519,1,(sx(rd(s->u,28,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdf00_6:;
wr(s->r,518,1,(rd(s->u,28,4)==((U)UINT64_C(0x0))));
L_1803fdf00_7:;
wr(s->u,14,4,(rd(s->u,28,4)&((U)UINT64_C(0xff))));
L_1803fdf00_8:;
wr(s->u,22,1,pop(rd(s->u,14,4),4));
L_1803fdf00_9:;
wr(s->u,23,1,(rd(s->u,22,1)&((U)UINT64_C(0x1))));
L_1803fdf00_10:;
wr(s->r,514,1,(rd(s->u,23,1)==((U)UINT64_C(0x0))));
L_1803fdf00_11:;
/* 1803fdf03: jle 0x1803fde37 */
L_1803fdf03_0:;
L_1803fdf03_1:;
wr(s->u,12,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fdf03_2:;
wr(s->u,13,1,((rd(s->r,518,1)!=0)||(rd(s->u,12,1)!=0)));
L_1803fdf03_3:;
if(rd(s->u,13,1)){return UINT64_C(0x1803fde37);}
L_1803fdf03_4:;
return UINT64_C(0x1803fdf09);
}
uint64_t b_1803fdf09(CPU*s){
/* 1803fdf09: movaps xmm6, xmmword ptr [rsp + 0x60] */
L_1803fdf09_0:;
L_1803fdf09_1:;
wr(s->u,0,8,(((U)UINT64_C(0x60))+rd(s->r,32,8)));
L_1803fdf09_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fdf09_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803fdf09_4:;
wr(s->r,4992,4,rd(s->u,34,4));
L_1803fdf09_5:;
wr(s->r,4996,4,rd(s->u,38,4));
L_1803fdf09_6:;
wr(s->r,5000,4,rd(s->u,42,4));
L_1803fdf09_7:;
wr(s->r,5004,4,rd(s->u,46,4));
L_1803fdf09_8:;
/* 1803fdf0e: movaps xmm7, xmmword ptr [rsp + 0x50] */
L_1803fdf0e_0:;
L_1803fdf0e_1:;
wr(s->u,0,8,(((U)UINT64_C(0x50))+rd(s->r,32,8)));
L_1803fdf0e_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fdf0e_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803fdf0e_4:;
wr(s->r,5056,4,rd(s->u,34,4));
L_1803fdf0e_5:;
wr(s->r,5060,4,rd(s->u,38,4));
L_1803fdf0e_6:;
wr(s->r,5064,4,rd(s->u,42,4));
L_1803fdf0e_7:;
wr(s->r,5068,4,rd(s->u,46,4));
L_1803fdf0e_8:;
/* 1803fdf13: movaps xmm8, xmmword ptr [rsp + 0x40] */
L_1803fdf13_0:;
L_1803fdf13_1:;
wr(s->u,0,8,(((U)UINT64_C(0x40))+rd(s->r,32,8)));
L_1803fdf13_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fdf13_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803fdf13_4:;
wr(s->r,5120,4,rd(s->u,34,4));
L_1803fdf13_5:;
wr(s->r,5124,4,rd(s->u,38,4));
L_1803fdf13_6:;
wr(s->r,5128,4,rd(s->u,42,4));
L_1803fdf13_7:;
wr(s->r,5132,4,rd(s->u,46,4));
L_1803fdf13_8:;
/* 1803fdf19: movaps xmm9, xmmword ptr [rsp + 0x30] */
L_1803fdf19_0:;
L_1803fdf19_1:;
wr(s->u,0,8,(((U)UINT64_C(0x30))+rd(s->r,32,8)));
L_1803fdf19_2:;
wr(s->u,8,16,mr((uint64_t)rd(s->u,0,8),16));
L_1803fdf19_3:;
wr(s->u,34,16,rd(s->u,8,16));
L_1803fdf19_4:;
wr(s->r,5184,4,rd(s->u,34,4));
L_1803fdf19_5:;
wr(s->r,5188,4,rd(s->u,38,4));
L_1803fdf19_6:;
wr(s->r,5192,4,rd(s->u,42,4));
L_1803fdf19_7:;
wr(s->r,5196,4,rd(s->u,46,4));
L_1803fdf19_8:;
/* 1803fdf1f: test edx, 0xaaaaaaaa */
L_1803fdf1f_0:;
L_1803fdf1f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fdf1f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fdf1f_3:;
wr(s->u,30,4,(rd(s->r,16,4)&((U)UINT64_C(0xaaaaaaaa))));
L_1803fdf1f_4:;
wr(s->r,519,1,(sx(rd(s->u,30,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdf1f_5:;
wr(s->r,518,1,(rd(s->u,30,4)==((U)UINT64_C(0x0))));
L_1803fdf1f_6:;
wr(s->u,24,4,(rd(s->u,30,4)&((U)UINT64_C(0xff))));
L_1803fdf1f_7:;
wr(s->u,28,1,pop(rd(s->u,24,4),4));
L_1803fdf1f_8:;
wr(s->u,29,1,(rd(s->u,28,1)&((U)UINT64_C(0x1))));
L_1803fdf1f_9:;
wr(s->r,514,1,(rd(s->u,29,1)==((U)UINT64_C(0x0))));
L_1803fdf1f_10:;
/* 1803fdf25: je 0x1803ff388 */
L_1803fdf25_0:;
L_1803fdf25_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ff388);}
L_1803fdf25_2:;
return UINT64_C(0x1803fdf2b);
}
uint64_t b_1803fdf1f(CPU*s){
/* 1803fdf1f: test edx, 0xaaaaaaaa */
L_1803fdf1f_0:;
L_1803fdf1f_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fdf1f_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fdf1f_3:;
wr(s->u,6,4,(rd(s->r,16,4)&((U)UINT64_C(0xaaaaaaaa))));
L_1803fdf1f_4:;
wr(s->r,519,1,(sx(rd(s->u,6,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdf1f_5:;
wr(s->r,518,1,(rd(s->u,6,4)==((U)UINT64_C(0x0))));
L_1803fdf1f_6:;
wr(s->u,0,4,(rd(s->u,6,4)&((U)UINT64_C(0xff))));
L_1803fdf1f_7:;
wr(s->u,4,1,pop(rd(s->u,0,4),4));
L_1803fdf1f_8:;
wr(s->u,5,1,(rd(s->u,4,1)&((U)UINT64_C(0x1))));
L_1803fdf1f_9:;
wr(s->r,514,1,(rd(s->u,5,1)==((U)UINT64_C(0x0))));
L_1803fdf1f_10:;
/* 1803fdf25: je 0x1803ff388 */
L_1803fdf25_0:;
L_1803fdf25_1:;
if(rd(s->r,518,1)){return UINT64_C(0x1803ff388);}
L_1803fdf25_2:;
return UINT64_C(0x1803fdf2b);
}
uint64_t b_1803fdf2b(CPU*s){
/* 1803fdf2b: mov r11d, edx */
L_1803fdf2b_0:;
L_1803fdf2b_1:;
wr(s->r,152,4,rd(s->r,16,4));
L_1803fdf2b_2:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fdf2b_3:;
/* 1803fdf2e: sar r11d, 3 */
L_1803fdf2e_0:;
L_1803fdf2e_1:;
wr(s->u,47,4,(((U)UINT64_C(0x3))&((U)UINT64_C(0x1f))));
L_1803fdf2e_2:;
wr(s->u,51,4,rd(s->r,152,4));
L_1803fdf2e_3:;
wr(s->r,152,4,((rd(s->u,47,4)>=32)?(sx(rd(s->r,152,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->r,152,4),4)>>rd(s->u,47,4))));
L_1803fdf2e_4:;
wr(s->r,152,8,rd(s->r,152,4));
L_1803fdf2e_5:;
wr(s->u,32,1,(rd(s->u,47,4)==((U)UINT64_C(0x0))));
L_1803fdf2e_6:;
wr(s->u,33,4,(rd(s->u,47,4)-((U)UINT64_C(0x1))));
L_1803fdf2e_7:;
wr(s->u,37,4,((rd(s->u,33,4)>=32)?(sx(rd(s->u,51,4),4)<0?(((U)1<<32)-1):0):(U)(sx(rd(s->u,51,4),4)>>rd(s->u,33,4))));
L_1803fdf2e_8:;
wr(s->u,41,4,(rd(s->u,37,4)&((U)UINT64_C(0x1))));
L_1803fdf2e_9:;
wr(s->u,45,1,(rd(s->u,41,4)!=((U)UINT64_C(0x0))));
L_1803fdf2e_10:;
wr(s->u,0,1,rd(s->u,32,1));
L_1803fdf2e_11:;
wr(s->u,1,1,(rd(s->u,0,1)*rd(s->r,512,1)));
L_1803fdf2e_12:;
wr(s->u,2,1,(!rd(s->u,32,1)));
L_1803fdf2e_13:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fdf2e_14:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->u,45,1)));
L_1803fdf2e_15:;
wr(s->r,512,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fdf2e_16:;
wr(s->u,46,1,(rd(s->u,47,4)==((U)UINT64_C(0x1))));
L_1803fdf2e_17:;
wr(s->u,0,1,rd(s->u,46,1));
L_1803fdf2e_18:;
wr(s->u,1,1,(rd(s->u,0,1)*((U)UINT64_C(0x0))));
L_1803fdf2e_19:;
wr(s->u,2,1,(!rd(s->u,46,1)));
L_1803fdf2e_20:;
wr(s->u,3,1,rd(s->u,2,1));
L_1803fdf2e_21:;
wr(s->u,4,1,(rd(s->u,3,1)*rd(s->r,523,1)));
L_1803fdf2e_22:;
wr(s->r,523,1,(rd(s->u,1,1)|rd(s->u,4,1)));
L_1803fdf2e_23:;
wr(s->u,13,1,(rd(s->u,47,4)!=((U)UINT64_C(0x0))));
L_1803fdf2e_24:;
wr(s->u,14,1,(sx(rd(s->r,152,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdf2e_25:;
wr(s->u,15,1,(!rd(s->u,13,1)));
L_1803fdf2e_26:;
wr(s->u,16,1,(rd(s->u,15,1)&rd(s->r,519,1)));
L_1803fdf2e_27:;
wr(s->u,17,1,(rd(s->u,13,1)&rd(s->u,14,1)));
L_1803fdf2e_28:;
wr(s->r,519,1,(rd(s->u,16,1)|rd(s->u,17,1)));
L_1803fdf2e_29:;
wr(s->u,18,1,(rd(s->r,152,4)==((U)UINT64_C(0x0))));
L_1803fdf2e_30:;
wr(s->u,19,1,(!rd(s->u,13,1)));
L_1803fdf2e_31:;
wr(s->u,20,1,(rd(s->u,19,1)&rd(s->r,518,1)));
L_1803fdf2e_32:;
wr(s->u,21,1,(rd(s->u,13,1)&rd(s->u,18,1)));
L_1803fdf2e_33:;
wr(s->r,518,1,(rd(s->u,20,1)|rd(s->u,21,1)));
L_1803fdf2e_34:;
wr(s->u,22,4,(rd(s->r,152,4)&((U)UINT64_C(0xff))));
L_1803fdf2e_35:;
wr(s->u,26,1,pop(rd(s->u,22,4),4));
L_1803fdf2e_36:;
wr(s->u,27,1,(rd(s->u,26,1)&((U)UINT64_C(0x1))));
L_1803fdf2e_37:;
wr(s->u,28,1,(rd(s->u,27,1)==((U)UINT64_C(0x0))));
L_1803fdf2e_38:;
wr(s->u,29,1,(!rd(s->u,13,1)));
L_1803fdf2e_39:;
wr(s->u,30,1,(rd(s->u,29,1)&rd(s->r,514,1)));
L_1803fdf2e_40:;
wr(s->u,31,1,(rd(s->u,13,1)&rd(s->u,28,1)));
L_1803fdf2e_41:;
wr(s->r,514,1,(rd(s->u,30,1)|rd(s->u,31,1)));
L_1803fdf2e_42:;
/* 1803fdf32: mov r10, rcx */
L_1803fdf32_0:;
L_1803fdf32_1:;
wr(s->r,144,8,rd(s->r,8,8));
L_1803fdf32_2:;
/* 1803fdf35: movsxd rbp, eax */
L_1803fdf35_0:;
L_1803fdf35_1:;
wr(s->r,40,8,(U)sx(rd(s->r,0,4),4));
L_1803fdf35_2:;
/* 1803fdf38: mov eax, 1 */
L_1803fdf38_0:;
L_1803fdf38_1:;
wr(s->r,0,8,((U)UINT64_C(0x1)));
L_1803fdf38_2:;
/* 1803fdf3d: test r11d, r11d */
L_1803fdf3d_0:;
L_1803fdf3d_1:;
wr(s->r,512,1,((U)UINT64_C(0x0)));
L_1803fdf3d_2:;
wr(s->r,523,1,((U)UINT64_C(0x0)));
L_1803fdf3d_3:;
wr(s->u,55,4,(rd(s->r,152,4)&rd(s->r,152,4)));
L_1803fdf3d_4:;
wr(s->r,519,1,(sx(rd(s->u,55,4),4)<sx(((U)UINT64_C(0x0)),4)));
L_1803fdf3d_5:;
wr(s->r,518,1,(rd(s->u,55,4)==((U)UINT64_C(0x0))));
L_1803fdf3d_6:;
wr(s->u,7,4,(rd(s->u,55,4)&((U)UINT64_C(0xff))));
L_1803fdf3d_7:;
wr(s->u,11,1,pop(rd(s->u,7,4),4));
L_1803fdf3d_8:;
wr(s->u,12,1,(rd(s->u,11,1)&((U)UINT64_C(0x1))));
L_1803fdf3d_9:;
wr(s->r,514,1,(rd(s->u,12,1)==((U)UINT64_C(0x0))));
L_1803fdf3d_10:;
/* 1803fdf40: jle 0x1803fe09f */
L_1803fdf40_0:;
L_1803fdf40_1:;
wr(s->u,5,1,(rd(s->r,523,1)!=rd(s->r,519,1)));
L_1803fdf40_2:;
wr(s->u,6,1,((rd(s->r,518,1)!=0)||(rd(s->u,5,1)!=0)));
L_1803fdf40_3:;
if(rd(s->u,6,1)){return UINT64_C(0x1803fe09f);}
L_1803fdf40_4:;
return UINT64_C(0x1803fdf46);
}
uint64_t b_1803fdf46(CPU*s){
/* 1803fdf46: movss xmm2, dword ptr [r10] */
L_1803fdf46_0:;
L_1803fdf46_1:;
wr(s->u,24,4,mr((uint64_t)rd(s->r,144,8),4));
L_1803fdf46_2:;
wr(s->r,4736,4,rd(s->u,24,4));
L_1803fdf46_3:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fdf46_4:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fdf46_5:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fdf46_6:;
/* 1803fdf4b: movss xmm4, dword ptr [r10 + 0x20] */
L_1803fdf4b_0:;
L_1803fdf4b_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x20))));
L_1803fdf4b_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdf4b_3:;
wr(s->r,4864,4,rd(s->u,24,4));
L_1803fdf4b_4:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803fdf4b_5:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803fdf4b_6:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803fdf4b_7:;
/* 1803fdf51: movaps xmm0, xmm4 */
L_1803fdf51_0:;
L_1803fdf51_1:;
wr(s->r,4608,4,rd(s->r,4864,4));
L_1803fdf51_2:;
wr(s->r,4612,4,rd(s->r,4868,4));
L_1803fdf51_3:;
wr(s->r,4616,4,rd(s->r,4872,4));
L_1803fdf51_4:;
wr(s->r,4620,4,rd(s->r,4876,4));
L_1803fdf51_5:;
/* 1803fdf54: movss xmm5, dword ptr [r10 + 0x24] */
L_1803fdf54_0:;
L_1803fdf54_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x24))));
L_1803fdf54_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdf54_3:;
wr(s->r,4928,4,rd(s->u,24,4));
L_1803fdf54_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fdf54_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fdf54_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fdf54_7:;
/* 1803fdf5a: movaps xmm1, xmm5 */
L_1803fdf5a_0:;
L_1803fdf5a_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fdf5a_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fdf5a_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fdf5a_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fdf5a_5:;
/* 1803fdf5d: movss xmm3, dword ptr [r10 + 4] */
L_1803fdf5d_0:;
L_1803fdf5d_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803fdf5d_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdf5d_3:;
wr(s->r,4800,4,rd(s->u,24,4));
L_1803fdf5d_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fdf5d_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fdf5d_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fdf5d_7:;
/* 1803fdf63: addss xmm0, xmm2 */
L_1803fdf63_0:;
L_1803fdf63_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fdf63_2:;
/* 1803fdf67: movss dword ptr [r10], xmm0 */
L_1803fdf67_0:;
L_1803fdf67_1:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803fdf67_2:;
mw((uint64_t)rd(s->r,144,8),4,rd(s->u,24,4));
L_1803fdf67_3:;
/* 1803fdf6c: movss xmm0, dword ptr [r10 + 0x28] */
L_1803fdf6c_0:;
L_1803fdf6c_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x28))));
L_1803fdf6c_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdf6c_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803fdf6c_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fdf6c_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fdf6c_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fdf6c_7:;
/* 1803fdf72: addss xmm1, xmm3 */
L_1803fdf72_0:;
L_1803fdf72_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fdf72_2:;
/* 1803fdf76: movss dword ptr [r10 + 4], xmm1 */
L_1803fdf76_0:;
L_1803fdf76_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x4))));
L_1803fdf76_2:;
wr(s->u,24,4,rd(s->r,4672,4));
L_1803fdf76_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803fdf76_4:;
/* 1803fdf7c: subss xmm2, xmm4 */
L_1803fdf7c_0:;
L_1803fdf7c_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)-fv(rd(s->r,4864,4),4),4));
L_1803fdf7c_2:;
/* 1803fdf80: movss xmm4, dword ptr [r10 + 8] */
L_1803fdf80_0:;
L_1803fdf80_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803fdf80_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdf80_3:;
wr(s->r,4864,4,rd(s->u,24,4));
L_1803fdf80_4:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803fdf80_5:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803fdf80_6:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803fdf80_7:;
/* 1803fdf86: movss dword ptr [r10 + 0x20], xmm2 */
L_1803fdf86_0:;
L_1803fdf86_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x20))));
L_1803fdf86_2:;
wr(s->u,24,4,rd(s->r,4736,4));
L_1803fdf86_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803fdf86_4:;
/* 1803fdf8c: movaps xmm2, xmm0 */
L_1803fdf8c_0:;
L_1803fdf8c_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803fdf8c_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803fdf8c_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803fdf8c_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803fdf8c_5:;
/* 1803fdf8f: subss xmm3, xmm5 */
L_1803fdf8f_0:;
L_1803fdf8f_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fdf8f_2:;
/* 1803fdf93: movss xmm5, dword ptr [r10 + 0xc] */
L_1803fdf93_0:;
L_1803fdf93_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803fdf93_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdf93_3:;
wr(s->r,4928,4,rd(s->u,24,4));
L_1803fdf93_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fdf93_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fdf93_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fdf93_7:;
/* 1803fdf99: movss dword ptr [r10 + 0x24], xmm3 */
L_1803fdf99_0:;
L_1803fdf99_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x24))));
L_1803fdf99_2:;
wr(s->u,24,4,rd(s->r,4800,4));
L_1803fdf99_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803fdf99_4:;
/* 1803fdf9f: movss xmm3, dword ptr [r10 + 0x2c] */
L_1803fdf9f_0:;
L_1803fdf9f_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x2c))));
L_1803fdf9f_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdf9f_3:;
wr(s->r,4800,4,rd(s->u,24,4));
L_1803fdf9f_4:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fdf9f_5:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fdf9f_6:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fdf9f_7:;
/* 1803fdfa5: movss xmm1, dword ptr [r8 + rbp*4] */
L_1803fdfa5_0:;
L_1803fdfa5_1:;
wr(s->u,8,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803fdfa5_2:;
wr(s->u,16,8,(rd(s->r,128,8)+rd(s->u,8,8)));
L_1803fdfa5_3:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,16,8),4));
L_1803fdfa5_4:;
wr(s->r,4672,4,rd(s->u,24,4));
L_1803fdfa5_5:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fdfa5_6:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fdfa5_7:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fdfa5_8:;
/* 1803fdfab: addss xmm2, xmm3 */
L_1803fdfab_0:;
L_1803fdfab_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fdfab_2:;
/* 1803fdfaf: mulss xmm2, xmm1 */
L_1803fdfaf_0:;
L_1803fdfaf_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fdfaf_2:;
/* 1803fdfb3: subss xmm3, xmm0 */
L_1803fdfb3_0:;
L_1803fdfb3_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fdfb3_2:;
/* 1803fdfb7: mulss xmm3, xmm1 */
L_1803fdfb7_0:;
L_1803fdfb7_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)*fv(rd(s->r,4672,4),4),4));
L_1803fdfb7_2:;
/* 1803fdfbb: movaps xmm0, xmm4 */
L_1803fdfbb_0:;
L_1803fdfbb_1:;
wr(s->r,4608,4,rd(s->r,4864,4));
L_1803fdfbb_2:;
wr(s->r,4612,4,rd(s->r,4868,4));
L_1803fdfbb_3:;
wr(s->r,4616,4,rd(s->r,4872,4));
L_1803fdfbb_4:;
wr(s->r,4620,4,rd(s->r,4876,4));
L_1803fdfbb_5:;
/* 1803fdfbe: movaps xmm1, xmm5 */
L_1803fdfbe_0:;
L_1803fdfbe_1:;
wr(s->r,4672,4,rd(s->r,4928,4));
L_1803fdfbe_2:;
wr(s->r,4676,4,rd(s->r,4932,4));
L_1803fdfbe_3:;
wr(s->r,4680,4,rd(s->r,4936,4));
L_1803fdfbe_4:;
wr(s->r,4684,4,rd(s->r,4940,4));
L_1803fdfbe_5:;
/* 1803fdfc1: subss xmm4, xmm2 */
L_1803fdfc1_0:;
L_1803fdfc1_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4736,4),4),4));
L_1803fdfc1_2:;
/* 1803fdfc5: movss dword ptr [r10 + 0x28], xmm4 */
L_1803fdfc5_0:;
L_1803fdfc5_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x28))));
L_1803fdfc5_2:;
wr(s->u,24,4,rd(s->r,4864,4));
L_1803fdfc5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803fdfc5_4:;
/* 1803fdfcb: movss xmm4, dword ptr [r10 + 0x10] */
L_1803fdfcb_0:;
L_1803fdfcb_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x10))));
L_1803fdfcb_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdfcb_3:;
wr(s->r,4864,4,rd(s->u,24,4));
L_1803fdfcb_4:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803fdfcb_5:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803fdfcb_6:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803fdfcb_7:;
/* 1803fdfd1: addss xmm0, xmm2 */
L_1803fdfd1_0:;
L_1803fdfd1_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fdfd1_2:;
/* 1803fdfd5: movss dword ptr [r10 + 8], xmm0 */
L_1803fdfd5_0:;
L_1803fdfd5_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x8))));
L_1803fdfd5_2:;
wr(s->u,24,4,rd(s->r,4608,4));
L_1803fdfd5_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,24,4));
L_1803fdfd5_4:;
/* 1803fdfdb: movss xmm0, dword ptr [r10 + 0x34] */
L_1803fdfdb_0:;
L_1803fdfdb_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x34))));
L_1803fdfdb_2:;
wr(s->u,24,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdfdb_3:;
wr(s->r,4608,4,rd(s->u,24,4));
L_1803fdfdb_4:;
wr(s->r,4612,4,((U)UINT64_C(0x0)));
L_1803fdfdb_5:;
wr(s->r,4616,4,((U)UINT64_C(0x0)));
L_1803fdfdb_6:;
wr(s->r,4620,4,((U)UINT64_C(0x0)));
L_1803fdfdb_7:;
return UINT64_C(0x1803fdfe1);
}
uint64_t b_1803fdfe1(CPU*s){
/* 1803fdfe1: movaps xmm2, xmm0 */
L_1803fdfe1_0:;
L_1803fdfe1_1:;
wr(s->r,4736,4,rd(s->r,4608,4));
L_1803fdfe1_2:;
wr(s->r,4740,4,rd(s->r,4612,4));
L_1803fdfe1_3:;
wr(s->r,4744,4,rd(s->r,4616,4));
L_1803fdfe1_4:;
wr(s->r,4748,4,rd(s->r,4620,4));
L_1803fdfe1_5:;
/* 1803fdfe4: addss xmm1, xmm3 */
L_1803fdfe4_0:;
L_1803fdfe4_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4800,4),4),4));
L_1803fdfe4_2:;
/* 1803fdfe8: movss dword ptr [r10 + 0xc], xmm1 */
L_1803fdfe8_0:;
L_1803fdfe8_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0xc))));
L_1803fdfe8_2:;
wr(s->u,32,4,rd(s->r,4672,4));
L_1803fdfe8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fdfe8_4:;
/* 1803fdfee: movss xmm1, dword ptr [r10 + 0x14] */
L_1803fdfee_0:;
L_1803fdfee_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x14))));
L_1803fdfee_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fdfee_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fdfee_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fdfee_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fdfee_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fdfee_7:;
/* 1803fdff4: subss xmm5, xmm3 */
L_1803fdff4_0:;
L_1803fdff4_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)-fv(rd(s->r,4800,4),4),4));
L_1803fdff4_2:;
/* 1803fdff8: movss dword ptr [r10 + 0x2c], xmm5 */
L_1803fdff8_0:;
L_1803fdff8_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x2c))));
L_1803fdff8_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803fdff8_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fdff8_4:;
/* 1803fdffe: movaps xmm3, xmm1 */
L_1803fdffe_0:;
L_1803fdffe_1:;
wr(s->r,4800,4,rd(s->r,4672,4));
L_1803fdffe_2:;
wr(s->r,4804,4,rd(s->r,4676,4));
L_1803fdffe_3:;
wr(s->r,4808,4,rd(s->r,4680,4));
L_1803fdffe_4:;
wr(s->r,4812,4,rd(s->r,4684,4));
L_1803fdffe_5:;
/* 1803fe001: movss xmm5, dword ptr [r10 + 0x30] */
L_1803fe001_0:;
L_1803fe001_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x30))));
L_1803fe001_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe001_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fe001_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe001_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe001_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe001_7:;
/* 1803fe007: addss xmm2, xmm4 */
L_1803fe007_0:;
L_1803fe007_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4864,4),4),4));
L_1803fe007_2:;
/* 1803fe00b: movss dword ptr [r10 + 0x10], xmm2 */
L_1803fe00b_0:;
L_1803fe00b_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x10))));
L_1803fe00b_2:;
wr(s->u,32,4,rd(s->r,4736,4));
L_1803fe00b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe00b_4:;
/* 1803fe011: movss xmm2, dword ptr [r10 + 0x38] */
L_1803fe011_0:;
L_1803fe011_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x38))));
L_1803fe011_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe011_3:;
wr(s->r,4736,4,rd(s->u,32,4));
L_1803fe011_4:;
wr(s->r,4740,4,((U)UINT64_C(0x0)));
L_1803fe011_5:;
wr(s->r,4744,4,((U)UINT64_C(0x0)));
L_1803fe011_6:;
wr(s->r,4748,4,((U)UINT64_C(0x0)));
L_1803fe011_7:;
/* 1803fe017: subss xmm3, xmm5 */
L_1803fe017_0:;
L_1803fe017_1:;
wr(s->r,4800,4,fb(fv(rd(s->r,4800,4),4)-fv(rd(s->r,4928,4),4),4));
L_1803fe017_2:;
/* 1803fe01b: movss dword ptr [r10 + 0x14], xmm3 */
L_1803fe01b_0:;
L_1803fe01b_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x14))));
L_1803fe01b_2:;
wr(s->u,32,4,rd(s->r,4800,4));
L_1803fe01b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe01b_4:;
/* 1803fe021: subss xmm4, xmm0 */
L_1803fe021_0:;
L_1803fe021_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe021_2:;
/* 1803fe025: movss dword ptr [r10 + 0x30], xmm4 */
L_1803fe025_0:;
L_1803fe025_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x30))));
L_1803fe025_2:;
wr(s->u,32,4,rd(s->r,4864,4));
L_1803fe025_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe025_4:;
/* 1803fe02b: movaps xmm0, xmm2 */
L_1803fe02b_0:;
L_1803fe02b_1:;
wr(s->r,4608,4,rd(s->r,4736,4));
L_1803fe02b_2:;
wr(s->r,4612,4,rd(s->r,4740,4));
L_1803fe02b_3:;
wr(s->r,4616,4,rd(s->r,4744,4));
L_1803fe02b_4:;
wr(s->r,4620,4,rd(s->r,4748,4));
L_1803fe02b_5:;
/* 1803fe02e: movss xmm4, dword ptr [r10 + 0x18] */
L_1803fe02e_0:;
L_1803fe02e_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x18))));
L_1803fe02e_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe02e_3:;
wr(s->r,4864,4,rd(s->u,32,4));
L_1803fe02e_4:;
wr(s->r,4868,4,((U)UINT64_C(0x0)));
L_1803fe02e_5:;
wr(s->r,4872,4,((U)UINT64_C(0x0)));
L_1803fe02e_6:;
wr(s->r,4876,4,((U)UINT64_C(0x0)));
L_1803fe02e_7:;
/* 1803fe034: addss xmm5, xmm1 */
L_1803fe034_0:;
L_1803fe034_1:;
wr(s->r,4928,4,fb(fv(rd(s->r,4928,4),4)+fv(rd(s->r,4672,4),4),4));
L_1803fe034_2:;
/* 1803fe038: movss xmm1, dword ptr [r10 + 0x3c] */
L_1803fe038_0:;
L_1803fe038_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x3c))));
L_1803fe038_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe038_3:;
wr(s->r,4672,4,rd(s->u,32,4));
L_1803fe038_4:;
wr(s->r,4676,4,((U)UINT64_C(0x0)));
L_1803fe038_5:;
wr(s->r,4680,4,((U)UINT64_C(0x0)));
L_1803fe038_6:;
wr(s->r,4684,4,((U)UINT64_C(0x0)));
L_1803fe038_7:;
/* 1803fe03e: movss dword ptr [r10 + 0x34], xmm5 */
L_1803fe03e_0:;
L_1803fe03e_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x34))));
L_1803fe03e_2:;
wr(s->u,32,4,rd(s->r,4928,4));
L_1803fe03e_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe03e_4:;
/* 1803fe044: movss xmm5, dword ptr [r10 + 0x1c] */
L_1803fe044_0:;
L_1803fe044_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x1c))));
L_1803fe044_2:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,0,8),4));
L_1803fe044_3:;
wr(s->r,4928,4,rd(s->u,32,4));
L_1803fe044_4:;
wr(s->r,4932,4,((U)UINT64_C(0x0)));
L_1803fe044_5:;
wr(s->r,4936,4,((U)UINT64_C(0x0)));
L_1803fe044_6:;
wr(s->r,4940,4,((U)UINT64_C(0x0)));
L_1803fe044_7:;
/* 1803fe04a: movss xmm3, dword ptr [r8 + rbp*4 + 4] */
L_1803fe04a_0:;
L_1803fe04a_1:;
wr(s->u,8,8,(((U)UINT64_C(0x4))+rd(s->r,128,8)));
L_1803fe04a_2:;
wr(s->u,16,8,(rd(s->r,40,8)*((U)UINT64_C(0x4))));
L_1803fe04a_3:;
wr(s->u,24,8,(rd(s->u,8,8)+rd(s->u,16,8)));
L_1803fe04a_4:;
wr(s->u,32,4,mr((uint64_t)rd(s->u,24,8),4));
L_1803fe04a_5:;
wr(s->r,4800,4,rd(s->u,32,4));
L_1803fe04a_6:;
wr(s->r,4804,4,((U)UINT64_C(0x0)));
L_1803fe04a_7:;
wr(s->r,4808,4,((U)UINT64_C(0x0)));
L_1803fe04a_8:;
wr(s->r,4812,4,((U)UINT64_C(0x0)));
L_1803fe04a_9:;
/* 1803fe051: subss xmm0, xmm1 */
L_1803fe051_0:;
L_1803fe051_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)-fv(rd(s->r,4672,4),4),4));
L_1803fe051_2:;
/* 1803fe055: mulss xmm0, xmm3 */
L_1803fe055_0:;
L_1803fe055_1:;
wr(s->r,4608,4,fb(fv(rd(s->r,4608,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe055_2:;
/* 1803fe059: addss xmm1, xmm2 */
L_1803fe059_0:;
L_1803fe059_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)+fv(rd(s->r,4736,4),4),4));
L_1803fe059_2:;
/* 1803fe05d: mulss xmm1, xmm3 */
L_1803fe05d_0:;
L_1803fe05d_1:;
wr(s->r,4672,4,fb(fv(rd(s->r,4672,4),4)*fv(rd(s->r,4800,4),4),4));
L_1803fe05d_2:;
/* 1803fe061: movaps xmm2, xmm4 */
L_1803fe061_0:;
L_1803fe061_1:;
wr(s->r,4736,4,rd(s->r,4864,4));
L_1803fe061_2:;
wr(s->r,4740,4,rd(s->r,4868,4));
L_1803fe061_3:;
wr(s->r,4744,4,rd(s->r,4872,4));
L_1803fe061_4:;
wr(s->r,4748,4,rd(s->r,4876,4));
L_1803fe061_5:;
/* 1803fe064: movaps xmm3, xmm5 */
L_1803fe064_0:;
L_1803fe064_1:;
wr(s->r,4800,4,rd(s->r,4928,4));
L_1803fe064_2:;
wr(s->r,4804,4,rd(s->r,4932,4));
L_1803fe064_3:;
wr(s->r,4808,4,rd(s->r,4936,4));
L_1803fe064_4:;
wr(s->r,4812,4,rd(s->r,4940,4));
L_1803fe064_5:;
/* 1803fe067: subss xmm4, xmm0 */
L_1803fe067_0:;
L_1803fe067_1:;
wr(s->r,4864,4,fb(fv(rd(s->r,4864,4),4)-fv(rd(s->r,4608,4),4),4));
L_1803fe067_2:;
/* 1803fe06b: movss dword ptr [r10 + 0x38], xmm4 */
L_1803fe06b_0:;
L_1803fe06b_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x38))));
L_1803fe06b_2:;
wr(s->u,32,4,rd(s->r,4864,4));
L_1803fe06b_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe06b_4:;
/* 1803fe071: addss xmm2, xmm0 */
L_1803fe071_0:;
L_1803fe071_1:;
wr(s->r,4736,4,fb(fv(rd(s->r,4736,4),4)+fv(rd(s->r,4608,4),4),4));
L_1803fe071_2:;
/* 1803fe075: movss dword ptr [r10 + 0x18], xmm2 */
L_1803fe075_0:;
L_1803fe075_1:;
wr(s->u,0,8,(rd(s->r,144,8)+((U)UINT64_C(0x18))));
L_1803fe075_2:;
wr(s->u,32,4,rd(s->r,4736,4));
L_1803fe075_3:;
mw((uint64_t)rd(s->u,0,8),4,rd(s->u,32,4));
L_1803fe075_4:;
return UINT64_C(0x1803fe07b);
}
