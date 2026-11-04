/* Runtime for statically reconstructed C blocks. It never decodes guest opcodes. */
#define _GNU_SOURCE
#include "lift_runtime.h"
/* LIFT_TRAP (the Android split-pitch library): report failures to the host,
   which unwinds to the caller, instead of exiting the whole app. */
#ifdef LIFT_TRAP
_Noreturn void lift_library_trap(const char *what,uint64_t pc);
#define LIFT_FAIL(what,pc,code) lift_library_trap(what,pc)
#else
#define LIFT_FAIL(what,pc,code) exit(code)
#endif
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
#include "lift_adapters.c"
#include "lift_imports.h"
extern const unsigned char lift_image_start[],lift_image_end[];

_Noreturn void lift_unsupported(const char *operation,uint64_t pc){
    fprintf(stderr,"UNSUPPORTED %s at %llx\n",operation,(unsigned long long)pc);LIFT_FAIL(operation,pc,74);
}
uint64_t lift_cpuid(unsigned leaf){
    static uint32_t result[4];memset(result,0,sizeof(result));
    if(leaf==0){result[0]=1;result[1]=0x756e6547;result[2]=0x49656e69;result[3]=0x6c65746e;}
    else if(leaf==1){result[0]=0x000006f2;result[2]=(1U<<23)|(1U<<25)|(1U<<26);result[3]=1;}
    else if(leaf==0x80000000)result[0]=0x80000000;
    return (uintptr_t)result;
}
static uint64_t arg(CPU*s,unsigned i){
    static const unsigned offsets[]={8,16,128,136};
    return i<4?(uint64_t)rd(s->r,offsets[i],8):(uint64_t)mr((uint64_t)rd(s->r,32,8)+8*(i+1),8);
}
static double fp(CPU*s,unsigned i,unsigned n){return fv(rd(s->r,4608+64*i,n),n);}
static void integer_result(CPU*s,uint64_t v){wr(s->r,0,8,v);}
static void float_result(CPU*s,double v,unsigned n){wr(s->r,4608,n,fb(v,n));}
static uint64_t return_from_host(CPU*s){
    uint64_t sp=(uint64_t)rd(s->r,32,8),pc=(uint64_t)mr(sp,8);wr(s->r,32,8,sp+8);return pc;
}
#define A(n) arg(s,n)
#define P(n) ((void*)(uintptr_t)A(n))
static uint64_t host_import(CPU*s,uint64_t address){
    size_t index=(size_t)(address-UINT64_C(0xf000000000000001));
    if(index>=sizeof(import_names)/sizeof(*import_names))lift_unsupported("invalid import",address);
    const char *name=import_names[index];
    uint64_t result=0;
    if(!strcmp(name,"GlobalAlloc"))result=(uintptr_t)rt_alloc((unsigned)A(0),A(1));
    else if(!strcmp(name,"GlobalLock")||!strcmp(name,"GlobalHandle"))result=A(0);
    else if(!strcmp(name,"GlobalUnlock"))result=1;
    else if(!strcmp(name,"free")||!strcmp(name,"GlobalFree")||!strcmp(name,"LocalFree")||!strcmp(name,"_aligned_free"))rt_free(P(0));
    else if(!strcmp(name,"malloc"))result=(uintptr_t)rt_malloc(A(0));
    else if(!strcmp(name,"calloc"))result=(uintptr_t)rt_calloc(A(0),A(1));
    else if(!strcmp(name,"realloc"))result=(uintptr_t)rt_realloc(P(0),A(1));
    else if(!strcmp(name,"_aligned_malloc"))result=(uintptr_t)rt_align(A(0),A(1));
    else if(!strcmp(name,"memcpy"))result=(uintptr_t)memcpy(P(0),P(1),A(2));
    else if(!strcmp(name,"memmove"))result=(uintptr_t)memmove(P(0),P(1),A(2));
    else if(!strcmp(name,"memset"))result=(uintptr_t)memset(P(0),(int)A(1),A(2));
    else if(!strcmp(name,"srand"))rt_srand((unsigned)A(0));
    else if(!strcmp(name,"rand"))result=(uint64_t)rt_rand();
    else if(!strcmp(name,"timeGetTime"))result=rt_clock_seed();
    else if(!strcmp(name,"GetCurrentThreadId"))result=rt_tid();
    else if(!strcmp(name,"Sleep"))rt_sleep((unsigned)A(0));
    else if(!strcmp(name,"GetSystemInfo"))rt_system_info(P(0));
    else if(!strcmp(name,"__RTDynamicCast"))result=(uintptr_t)rt_dynamic_cast(P(0),(int)A(1),P(2),P(3),(int)A(4));
    else if(!strcmp(name,"InitializeCriticalSection")||!strcmp(name,"EnterCriticalSection")||
            !strcmp(name,"LeaveCriticalSection")||!strcmp(name,"DeleteCriticalSection")||
            !strcmp(name,"ErrorReport_StartTrapBypass")||!strcmp(name,"ErrorReport_EndTrapBypass")){}
#define M1(n) else if(!strcmp(name,#n)){float_result(s,n(fp(s,0,8)),8);return return_from_host(s);} \
              else if(!strcmp(name,#n "f")){float_result(s,n##f((float)fp(s,0,4)),4);return return_from_host(s);}
    M1(sin) M1(cos) M1(tan) M1(atan) M1(asin) M1(acos) M1(sqrt) M1(log) M1(log10)
    M1(exp) M1(floor) M1(ceil) M1(tanh) M1(sinh) M1(cosh)
    else if(!strcmp(name,"pow")){float_result(s,pow(fp(s,0,8),fp(s,1,8)),8);return return_from_host(s);}
    else if(!strcmp(name,"powf")){float_result(s,powf((float)fp(s,0,4),(float)fp(s,1,4)),4);return return_from_host(s);}
    else if(!strcmp(name,"atan2")){float_result(s,atan2(fp(s,0,8),fp(s,1,8)),8);return return_from_host(s);}
    else if(!strcmp(name,"_hypot")){float_result(s,hypot(fp(s,0,8),fp(s,1,8)),8);return return_from_host(s);}
    else lift_unsupported(name,address);
    integer_result(s,result);return return_from_host(s);
}

uint64_t lift_run(CPU*s,uint64_t pc){
    uint64_t iterations=0;
    while(pc){
        if(++iterations>UINT64_C(200000000)){fprintf(stderr,"block execution limit at %llx\n",(unsigned long long)pc);LIFT_FAIL("block execution limit",pc,76);}
        if(pc>=UINT64_C(0xf000000000000001)){pc=host_import(s,pc);continue;}
        if(pc==UINT64_C(0x18000d550)){
            integer_result(s,(uintptr_t)memcpy(P(0),P(1),A(2)));pc=return_from_host(s);continue;
        }
        if(pc==UINT64_C(0x18000d6a6)){
            integer_result(s,(uintptr_t)memset(P(0),(int)A(1),A(2)));pc=return_from_host(s);continue;
        }
        /* Direct-mapped cache in front of the sorted block table. Callers run
           one lift_run at a time (the CLI is single-threaded; the Android
           library holds a lock). */
        static struct {uint64_t address;uint64_t(*function)(CPU*);} cache[1<<15];
        size_t slot=(size_t)((pc^(pc>>15))&((1<<15)-1));
        if(cache[slot].address==pc){pc=cache[slot].function(s);continue;}
        size_t lo=0,hi=block_count;
        while(lo<hi){size_t mid=lo+(hi-lo)/2;if(blocks[mid].address<pc)lo=mid+1;else hi=mid;}
        if(lo>=block_count||blocks[lo].address!=pc){fprintf(stderr,"MISSING %llx\n",(unsigned long long)pc);LIFT_FAIL("missing block",pc,75);}
        cache[slot].address=pc;cache[slot].function=blocks[lo].function;
        pc=blocks[lo].function(s);
    }
    return (uint64_t)rd(s->r,0,8);
}
static void start(CPU*s){
    uint64_t sp=(uintptr_t)s->stack+1024*1024-264;
    wr(s->r,32,8,sp);mw(sp,8,0);
}
static void setarg(CPU*s,unsigned i,uint64_t v){
    static const unsigned offsets[]={8,16,128,136};
    if(i<4)wr(s->r,offsets[i],8,v);else mw((uint64_t)rd(s->r,32,8)+8*(i+1),8,v);
}
#ifndef LIFT_LIBRARY
int main(int argc,char**argv){
    if(argc!=2)return 2;
    size_t size=(size_t)(lift_image_end-lift_image_start);
    void *data=mmap((void*)UINT64_C(0x180000000),size,PROT_READ|PROT_WRITE,
                   MAP_PRIVATE|MAP_ANONYMOUS|MAP_FIXED_NOREPLACE,-1,0);
    if(data==MAP_FAILED){perror("mmap");return 1;}
    memcpy(data,lift_image_start,size);
    CPU*s=calloc(1,sizeof(*s));s->stack=calloc(1,1024*1024);
    void*object=NULL;
    start(s);setarg(s,0,(uintptr_t)&object);setarg(s,1,256);setarg(s,2,1);
    wr(s->r,4608+3*64,4,fb(48000.,4));setarg(s,4,0);
    int e=(int)lift_run(s,UINT64_C(0x1803d54b0));
    fprintf(stderr,"factory %x %p\n",e,object);if(e||!object)return 3;
    uint64_t *vt=*(uint64_t**)object;float stretch=1,pitch=(float)exp2(atof(argv[1])/12.);
    start(s);setarg(s,0,(uintptr_t)object);setarg(s,1,(uintptr_t)&stretch);
    wr(s->r,4608+2*64,4,fb(pitch,4));setarg(s,3,0);
    e=(int)lift_run(s,vt[5]);fprintf(stderr,"config %x stretch %g\n",e,stretch);if(e)return 4;
    FILE*header=fopen("/workspace/scratch/lifted-header.bin","wb");fwrite((char*)object-8,1,256,header);fclose(header);
    void*mc;memcpy(&mc,(char*)object-8+0x66f0,8);
    header=fopen("/workspace/scratch/lifted-mc.bin","wb");fwrite(mc,1,1024,header);fclose(header);
    float*input=calloc(131072,4),*output=calloc(131072,4);float*ip[]={input},*op[]={output};
    long long position=0;
    FILE*f=fopen("/workspace/scratch/lifted-probe.f32","wb");
    for(int block=0;block<40;block++){
        start(s);setarg(s,0,(uintptr_t)object);int count=(int)lift_run(s,vt[2]);
        if(count<0||count>131072)return 5;
        if(block<5)fprintf(stderr,"input %d\n",count);
        for(int j=0;j<count;j++)input[j]=(float)(.2*sin(2*3.14159265358979323846*440*(position+j)/48000.));
        position+=count;
        start(s);setarg(s,0,(uintptr_t)object);setarg(s,1,(uintptr_t)ip);setarg(s,2,(unsigned)count);setarg(s,3,(uintptr_t)op);
        e=(int)lift_run(s,vt[1]);if(e){fprintf(stderr,"process %x\n",e);return 6;}fwrite(output,4,256,f);
    }
    fclose(f);puts("lift test complete");return 0;
}
#endif
