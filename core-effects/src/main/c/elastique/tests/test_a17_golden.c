#include "../a17.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
static int read_bytes(FILE*f,void*p,size_t n){return fread(p,1,n,f)==n?0:-1;}
static uint32_t u32(FILE*f){unsigned char b[4];if(read_bytes(f,b,4))exit(2);return (uint32_t)b[0]|((uint32_t)b[1]<<8)|((uint32_t)b[2]<<16)|((uint32_t)b[3]<<24);}
int main(int argc,char**argv){
    if(argc!=2){fprintf(stderr,"usage: test-a17 tests/a17-golden.bin\n");return 2;}
    FILE*f=fopen(argv[1],"rb");if(!f){perror(argv[1]);return 2;}
    char magic[8];if(read_bytes(f,magic,8)||memcmp(magic,"ARMC_A17",8))return 2;
    unsigned cases=u32(f);size_t calls=0,samples=0;
    for(unsigned c=0;c<cases;c++){
        unsigned rate=u32(f),channels=u32(f);float fraction;double ratio;
        if(read_bytes(f,&fraction,4)||read_bytes(f,&ratio,8))return 2;
        unsigned records=u32(f);a17_state s;
        if(a17_init(&s,channels,rate,ratio,fraction))return 3;
        for(unsigned r=0;r<records;r++){
            int action=(int)u32(f),ni=(int)u32(f),no=(int)u32(f),want_result=(int)u32(f);
            int want_in=(int)u32(f),want_out=(int)u32(f);
            float*in=calloc((size_t)(ni?ni:1)*channels,4),*out=calloc((size_t)no*channels,4);
            float*expected=calloc((size_t)(want_out?want_out:1)*channels,4);
            if(!in||!out||!expected||read_bytes(f,in,(size_t)ni*channels*4)||read_bytes(f,expected,(size_t)want_out*channels*4))return 2;
            int result=a17_process(&s,action,in,&ni,out,&no);
            if(result!=want_result||ni!=want_in||no!=want_out||memcmp(out,expected,(size_t)want_out*channels*4)){
                fprintf(stderr,"Mismatch case %u, call %u, %u Hz, %u ch, ratio %.17g\n",c,r,rate,channels,ratio);
                return 1;
            }
            calls++;samples+=(size_t)no*channels;free(in);free(out);free(expected);
        }
        a17_destroy(&s);
    }
    fclose(f);printf("PASS %u reference cases, %zu calls, %zu sample values exactly equal.\n",cases,calls,samples);return 0;
}
