#include "native_c_compiler.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    assert(argc == 2);
    char error[4096];
    const char *audio =
        "#include <math.h>\n#include <stdlib.h>\n"
        "static float gain(float x, float g) { return x*g; }\n"
        "void lec_audio(float *samples, int frames, int channels, int sample_rate, double time, const float c[8], void *state) {\n"
        " int *calls = state; (*calls)++;\n"
        " float *scratch = malloc(sizeof(float)*frames*channels);\n"
        " for(int i=0;i<frames*channels;i++) scratch[i] = gain(samples[i],c[0]) + sin(time);\n"
        " for(int i=0;i<frames*channels;i++) samples[i] = scratch[i];\n"
        " free(scratch);\n}\n";
    LecCProgram *program = lec_c_compile(argv[1], audio, 1, error, sizeof(error));
    if (!program) { fprintf(stderr, "%s\n", error); return 1; }
    LecCInstance *instance = lec_c_instance(program);
    assert(instance);
    float samples[] = {0.5f,-0.5f,0.25f,-0.25f};
    float controls[] = {0.5f,0,0,0,0,0,0,0};
    lec_c_audio(instance, samples, 2, 2, 48000, 0, controls);
    assert(fabsf(samples[0]-.25f) < .00001f && fabsf(samples[3]+.125f) < .00001f);
    lec_c_instance_delete(instance);
    lec_c_delete(program);

    const char *video =
        "void lec_video(unsigned char *p, int width, int height, int stride, double time, const float c[8], void *state) {"
        "for(int y=0;y<height;y++) for(int x=0;x<width;x++) {unsigned char *v = p+y*stride+x*4; v[0]=255-v[0]; v[1]=255-v[1]; v[2]=255-v[2];}}";
    program = lec_c_compile(argv[1], video, 0, error, sizeof(error));
    if (!program) { fprintf(stderr, "%s\n", error); return 1; }
    instance = lec_c_instance(program);
    unsigned char pixels[] = {10,20,30,255,100,110,120,200};
    lec_c_video(instance, pixels, 2, 1, 0, controls);
    assert(pixels[0]==245 && pixels[2]==225 && pixels[3]==255 && pixels[4]==155 && pixels[7]==200);
    lec_c_instance_delete(instance);
    lec_c_delete(program);

    assert(!lec_c_compile(argv[1], "void lec_audio( {", 1, error, sizeof(error)));
    assert(error[0]);
    assert(!lec_c_compile(argv[1], "int unrelated(void) { return 1; }", 0, error, sizeof(error)));
    assert(strstr(error, "lec_video"));
    puts("Native C audio/video compilation, loops, pointers, allocation, math, and errors passed.");
    return 0;
}
