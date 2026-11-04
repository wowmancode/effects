#include "native_c_compiler.h"
#include <jni.h>
#include <stdint.h>
#include <sys/mman.h>

static void failure(JNIEnv *env, const char *message) {
    (*env)->ThrowNew(env, (*env)->FindClass(env, "java/lang/IllegalArgumentException"), message);
}

JNIEXPORT jlong JNICALL Java_dev_lec_effectapp_effects_NativeCCompiler_compile(JNIEnv *env, jobject self, jstring path, jstring source, jboolean audio) {
    (void)self;
    const char *root = (*env)->GetStringUTFChars(env, path, NULL);
    const char *code = (*env)->GetStringUTFChars(env, source, NULL);
    char error[4096];
    LecCProgram *program = lec_c_compile(root, code, audio, error, sizeof(error));
    (*env)->ReleaseStringUTFChars(env, path, root);
    (*env)->ReleaseStringUTFChars(env, source, code);
    if (!program) failure(env, error);
    return (jlong)(intptr_t)program;
}
JNIEXPORT void JNICALL Java_dev_lec_effectapp_effects_NativeCCompiler_deleteProgram(JNIEnv *env, jobject self, jlong handle) {
    (void)env; (void)self; lec_c_delete((LecCProgram *)(intptr_t)handle);
}
JNIEXPORT jlong JNICALL Java_dev_lec_effectapp_effects_NativeCCompiler_createInstance(JNIEnv *env, jobject self, jlong handle) {
    (void)self;
    LecCInstance *instance = lec_c_instance((LecCProgram *)(intptr_t)handle);
    if (!instance) failure(env, "Not enough memory for the C plug-in state.");
    return (jlong)(intptr_t)instance;
}
JNIEXPORT void JNICALL Java_dev_lec_effectapp_effects_NativeCCompiler_deleteInstance(JNIEnv *env, jobject self, jlong handle) {
    (void)env; (void)self; lec_c_instance_delete((LecCInstance *)(intptr_t)handle);
}
JNIEXPORT jobject JNICALL Java_dev_lec_effectapp_effects_NativeCCompiler_mapBuffer(JNIEnv *env, jobject self, jint fd, jint capacity) {
    (void)self;
    void *memory = mmap(NULL, capacity, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (memory == MAP_FAILED) { failure(env, "Could not map the plug-in buffer."); return NULL; }
    return (*env)->NewDirectByteBuffer(env, memory, capacity);
}
JNIEXPORT void JNICALL Java_dev_lec_effectapp_effects_NativeCCompiler_unmapBuffer(JNIEnv *env, jobject self, jobject buffer) {
    (void)self;
    void *memory = (*env)->GetDirectBufferAddress(env, buffer);
    jlong size = (*env)->GetDirectBufferCapacity(env, buffer);
    if (memory && size > 0) munmap(memory, (size_t)size);
}
JNIEXPORT void JNICALL Java_dev_lec_effectapp_effects_NativeCCompiler_process(JNIEnv *env, jobject self, jlong handle, jobject buffer, jboolean audio, jint first, jint second, jint rate, jdouble time, jfloatArray controls) {
    (void)self;
    LecCInstance *instance = (LecCInstance *)(intptr_t)handle;
    void *memory = (*env)->GetDirectBufferAddress(env, buffer);
    float values[8];
    (*env)->GetFloatArrayRegion(env, controls, 0, 8, values);
    if (audio) lec_c_audio(instance, memory, first, second, rate, time, values);
    else lec_c_video(instance, memory, first, second, time, values);
}
