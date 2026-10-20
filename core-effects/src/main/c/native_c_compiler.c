#include "native_c_compiler.h"
#include "libtcc.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void (*AudioFn)(float *, int, int, int, double, const float *, void *);
typedef void (*VideoFn)(unsigned char *, int, int, int, double, const float *, void *);
typedef void (*DestroyFn)(void *);
struct LecCProgram { TCCState *compiler; void *entry; DestroyFn destroy; int audio; };
struct LecCInstance { LecCProgram *program; union { max_align_t alignment; unsigned char bytes[65536]; } state; };
typedef struct { char *text; size_t size; } ErrorBuffer;

static void compiler_error(void *opaque, const char *message) {
    ErrorBuffer *error = opaque;
    size_t length = strlen(error->text);
    if (length + 1 < error->size)
        snprintf(error->text + length, error->size - length, "%s%s", length ? "\n" : "", message);
}

static int add_runtime(TCCState *compiler, const char *root, const char *name) {
    char path[4096];
    snprintf(path, sizeof(path), "%s/runtime/%s", root, name);
    return tcc_add_file(compiler, path);
}

static int add_system_libraries(TCCState *compiler) {
#ifdef __ANDROID__
#if INTPTR_MAX == INT64_MAX
    const char *directory = "/system/lib64";
#else
    const char *directory = "/system/lib";
#endif
    const char *names[] = {"libc.so", "libm.so", "libdl.so"};
    char path[256];
    for (size_t i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
        snprintf(path, sizeof(path), "%s/%s", directory, names[i]);
        if (tcc_add_file(compiler, path) < 0) return -1;
    }
#else
    /* Linux host smoke tests use the same compiler and plug-in ABI. */
#if defined(__x86_64__)
    const char *directory = "/lib/x86_64-linux-gnu";
#else
    const char *directory = "/lib/aarch64-linux-gnu";
#endif
    char path[256];
    snprintf(path, sizeof(path), "%s/libc.so.6", directory);
    if (tcc_add_file(compiler, path) < 0) return -1;
    snprintf(path, sizeof(path), "%s/libm.so.6", directory);
    if (tcc_add_file(compiler, path) < 0) return -1;
#endif
    return 0;
}

LecCProgram *lec_c_compile(const char *root, const char *source, int audio, char *message, size_t size) {
    if (!message || size == 0) return NULL;
    message[0] = 0;
    ErrorBuffer error = {message, size};
    LecCProgram *program = calloc(1, sizeof(*program));
    if (!program) { snprintf(message, size, "Not enough memory for the C compiler."); return NULL; }
    program->compiler = tcc_new();
    if (!program->compiler) { free(program); snprintf(message, size, "Could not create the C compiler."); return NULL; }
    TCCState *compiler = program->compiler;
    tcc_set_error_func(compiler, &error, compiler_error);
    tcc_set_lib_path(compiler, root);
    tcc_set_options(compiler, "-nostdlib -std=c11 -Werror=implicit-function-declaration");
    if (tcc_set_output_type(compiler, TCC_OUTPUT_MEMORY) < 0) goto failure;
    if (add_system_libraries(compiler) < 0) goto failure;
    if (add_runtime(compiler, root, "libtcc1.c") < 0) goto failure;
#if defined(__aarch64__)
    if (add_runtime(compiler, root, "lib-arm64.c") < 0) goto failure;
#elif defined(__arm__)
    if (add_runtime(compiler, root, "armeabi.c") < 0 || add_runtime(compiler, root, "armflush.c") < 0) goto failure;
#endif
    const char *prefix = "#include <lec_plugin.h>\n#line 1 \"plugin.c\"\n";
    char *unit = malloc(strlen(prefix) + strlen(source) + 1);
    if (!unit) { snprintf(message, size, "Not enough memory for the C source."); goto failure; }
    strcpy(unit, prefix); strcat(unit, source);
    int result = tcc_compile_string(compiler, unit);
    free(unit);
    if (result < 0 || tcc_relocate(compiler) < 0) goto failure;
    program->audio = audio;
    program->entry = tcc_get_symbol(compiler, audio ? "lec_audio" : "lec_video");
    program->destroy = (DestroyFn)tcc_get_symbol(compiler, "lec_destroy");
    if (!program->entry) {
        snprintf(message, size, "Define %s with the signature from lec_plugin.h.", audio ? "lec_audio" : "lec_video");
        goto failure;
    }
    // The callback's stack buffer must not outlive this compilation.
    tcc_set_error_func(compiler, NULL, NULL);
    return program;
failure:
    if (!message[0]) snprintf(message, size, "C compilation or linking failed.");
    lec_c_delete(program);
    return NULL;
}

void lec_c_delete(LecCProgram *program) {
    if (program) { tcc_delete(program->compiler); free(program); }
}
LecCInstance *lec_c_instance(LecCProgram *program) {
    LecCInstance *instance = calloc(1, sizeof(*instance));
    if (instance) instance->program = program;
    return instance;
}
void lec_c_instance_delete(LecCInstance *instance) {
    if (!instance) return;
    if (instance->program->destroy) instance->program->destroy(instance->state.bytes);
    free(instance);
}
void lec_c_audio(LecCInstance *instance, float *samples, int frames, int channels, int rate, double time, const float controls[8]) {
    ((AudioFn)instance->program->entry)(samples, frames, channels, rate, time, controls, instance->state.bytes);
}
void lec_c_video(LecCInstance *instance, unsigned char *pixels, int width, int height, double time, const float controls[8]) {
    ((VideoFn)instance->program->entry)(pixels, width, height, width * 4, time, controls, instance->state.bytes);
}
