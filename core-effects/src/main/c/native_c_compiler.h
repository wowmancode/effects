#ifndef LEC_NATIVE_C_COMPILER_H
#define LEC_NATIVE_C_COMPILER_H
#include <stddef.h>

typedef struct LecCProgram LecCProgram;
typedef struct LecCInstance LecCInstance;
LecCProgram *lec_c_compile(const char *root, const char *source, int audio, char *error, size_t error_size);
void lec_c_delete(LecCProgram *program);
LecCInstance *lec_c_instance(LecCProgram *program);
void lec_c_instance_delete(LecCInstance *instance);
void lec_c_audio(LecCInstance *instance, float *samples, int frames, int channels, int rate, double time, const float controls[8]);
void lec_c_video(LecCInstance *instance, unsigned char *pixels, int width, int height, double time, const float controls[8]);
#endif
