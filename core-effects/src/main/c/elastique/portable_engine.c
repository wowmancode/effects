/* ARM64-capable frontend to statically reconstructed C DSP calculations. */
#define LIFT_LIBRARY
#include "generated/lift_host.c"
#include "engine.h"
#include "a17.h"
#include <fcntl.h>
#include <errno.h>

static CPU *context;
static void *constant_image;
static size_t constant_size;
int engine_load(void){
    if(context)return 0;
    constant_size=(size_t)(lift_image_end-lift_image_start);
    constant_image=mmap((void*)UINT64_C(0x180000000),constant_size,PROT_READ|PROT_WRITE,
                        MAP_PRIVATE|MAP_ANONYMOUS|MAP_FIXED_NOREPLACE,-1,0);
    if(constant_image==MAP_FAILED){constant_image=NULL;return -1;}
    if(constant_image!=(void*)UINT64_C(0x180000000)){engine_unload();return -1;}
    memcpy(constant_image,lift_image_start,constant_size);
    context=calloc(1,sizeof(*context));
    if(!context){engine_unload();return -1;}
    context->stack=calloc(1,1024*1024);
    if(!context->stack){engine_unload();return -1;}
    return 0;
}
void engine_unload(void){
    if(context){free(context->stack);free(context);context=NULL;}
    if(constant_image){munmap(constant_image,constant_size);constant_image=NULL;}
}
static void begin_member(void*object){start(context);setarg(context,0,(uintptr_t)object);}
static uint64_t member_address(void*object,unsigned slot){return (*(uint64_t**)object)[slot];}
static int create_pro(void **object,unsigned channels,unsigned rate){
    start(context);setarg(context,0,(uintptr_t)object);setarg(context,1,256);setarg(context,2,channels);
    wr(context->r,4608+3*64,4,fb(rate,4));setarg(context,4,0);
    return (int)lift_run(context,UINT64_C(0x1803d54b0));
}
static int configure_pro(void*object,float*stretch,float pitch){
    begin_member(object);setarg(context,1,(uintptr_t)stretch);
    wr(context->r,4608+2*64,4,fb(pitch,4));setarg(context,3,0);
    return (int)lift_run(context,member_address(object,5));
}
static int needed_pro(void*object){begin_member(object);return (int)lift_run(context,member_address(object,2));}
static int process_pro(void*object,float**input,int frames,float**output){
    begin_member(object);setarg(context,1,(uintptr_t)input);setarg(context,2,(unsigned)frames);setarg(context,3,(uintptr_t)output);
    return (int)lift_run(context,member_address(object,1));
}
static void destroy_pro(void*object){begin_member(object);setarg(context,1,1);lift_run(context,member_address(object,0));}
int engine_add_pro(const float*input,float*mix,size_t frames,unsigned channels,unsigned rate,double semitones,int formants){
    void*object=NULL;float pitch=(float)exp2(semitones/12.),low=1,high;
    float**in=NULL,**out=NULL;size_t capacity=0,position=0;double drift=0;int result=-1;
    if(create_pro(&object,channels,rate)||!object)return -1;
    if(configure_pro(object,&low,pitch))goto done;
    high=low;
    if(low!=1){
        double candidate=1./low,factor=candidate>=1?fmax(candidate,1.01):fmin(candidate,.99);
        for(int i=0;i<64;i++){
            high=(float)candidate;if(configure_pro(object,&high,pitch))goto done;
            if(high!=low)break;candidate*=factor;
        }
        if(high==low)goto done;
        if(high<low){float t=high;high=low;low=t;}
    }
    if(formants){
        begin_member(object);wr(context->r,4608+64,4,fb(pitch,4));
        if(lift_run(context,member_address(object,11)))goto done;
    }
    in=calloc(channels,sizeof(*in));out=calloc(channels,sizeof(*out));if(!in||!out)goto done;
    for(unsigned c=0;c<channels;c++){out[c]=calloc(256,4);if(!out[c])goto done;}
    for(size_t offset=0;offset<frames&&!interrupted;offset+=256){
        float stretch=drift>0?low:high;if(configure_pro(object,&stretch,pitch))goto done;
        int n=needed_pro(object);if(n<0||n>1048576)goto done;
        if((size_t)n>capacity){
            for(unsigned c=0;c<channels;c++){
                float*p=realloc(in[c],((size_t)n+16)*4);if(!p)goto done;in[c]=p;
            }capacity=(size_t)n;
        }
        for(unsigned c=0;c<channels;c++)for(int j=0;j<n;j++)
            in[c][j]=position+(size_t)j<frames?input[(position+(size_t)j)*channels+c]:0;
        position+=(size_t)n;if(process_pro(object,in,n,out))goto done;
        size_t count=frames-offset<256?frames-offset:256;
        for(size_t j=0;j<count;j++)for(unsigned c=0;c<channels;c++)mix[(offset+j)*channels+c]+=out[c][j];
        drift+=((double)stretch-1.)*256.;
    }
    result=interrupted?-1:0;
done:
    if(in){for(unsigned c=0;c<channels;c++)free(in[c]);free(in);}
    if(out){for(unsigned c=0;c<channels;c++)free(out[c]);free(out);}
    destroy_pro(object);return result;
}
static int scratch_fd(const char*directory){
    char path[4096];if(snprintf(path,sizeof(path),"%s/voice-XXXXXX",directory)>=(int)sizeof(path))return -1;
    int fd=mkstemp(path);if(fd>=0)unlink(path);return fd;
}
int engine_add_a17(const float*input,float*mix,size_t frames,unsigned channels,unsigned rate,double semitones,const char*directory){
    if(channels>2){fprintf(stderr,"The reconstructed A17 path currently supports mono and stereo.\n");return -1;}
    double ratio=exp2(semitones/12.),wanted=(double)frames/ratio;
    if(frames>INT_MAX||wanted+rate>INT_MAX)return -1;
    size_t pitched_frames=(size_t)llround(wanted);if(!pitched_frames)pitched_frames=1;
    size_t source_bytes=(frames+128)*channels*4,pitched_bytes=(pitched_frames+128)*channels*4;
    int fd=scratch_fd(directory),pd=scratch_fd(directory),result=-1;
    float*copy=MAP_FAILED,*pitched=MAP_FAILED,*buffer=NULL;a17_state state={0};
    if(fd<0||pd<0||ftruncate(fd,(off_t)source_bytes)||ftruncate(pd,(off_t)pitched_bytes))goto done;
    copy=mmap(NULL,source_bytes,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
    pitched=mmap(NULL,pitched_bytes,PROT_READ|PROT_WRITE,MAP_SHARED,pd,0);
    if(copy==MAP_FAILED||pitched==MAP_FAILED)goto done;
    memcpy(copy,input,frames*channels*4);
    struct __attribute__((packed)){uint16_t tag,channels;uint32_t rate,bytes;uint16_t align,bits,extra;}
        format={3,(uint16_t)channels,rate,rate*channels*4,(uint16_t)(channels*4),32,0};
    start(context);setarg(context,0,(uintptr_t)&format);setarg(context,1,(uintptr_t)pitched);
    setarg(context,2,pitched_frames);setarg(context,3,(uintptr_t)copy);setarg(context,4,frames);
    if(lift_run(context,UINT64_C(0x180101aa0)))goto done;
    if(a17_init(&state,channels,rate,(double)frames/pitched_frames,0))goto done;
    buffer=malloc(65536*channels*4);if(!buffer)goto done;
    size_t position=0,written=0;int first=1;
    while(position<pitched_frames&&!interrupted){
        int ni=(int)(pitched_frames-position<4096?pitched_frames-position:4096),no=65536;
        if(a17_process(&state,first?0:1,pitched+position*channels,&ni,buffer,&no))goto done;
        if(!ni&&!no)goto done;
        size_t count=(size_t)no<frames-written?(size_t)no:frames-written;
        for(size_t i=0;i<count*channels;i++)mix[written*channels+i]+=buffer[i];
        written+=count;position+=(size_t)ni;first=0;
    }
    int ni=0,no=65536;if(interrupted||a17_process(&state,2,pitched,&ni,buffer,&no))goto done;
    size_t count=(size_t)no<frames-written?(size_t)no:frames-written;
    for(size_t i=0;i<count*channels;i++)mix[written*channels+i]+=buffer[i];result=0;
done:
    a17_destroy(&state);free(buffer);
    if(copy!=MAP_FAILED)munmap(copy,source_bytes);if(pitched!=MAP_FAILED)munmap(pitched,pitched_bytes);
    if(fd>=0)close(fd);if(pd>=0)close(pd);return result;
}
