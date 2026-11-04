#include "split_pitch_modes.h"
#include "reconstructed_pitch.h"

#include <math.h>
#include <stdlib.h>
#include <string.h>

#define SPLIT_MAX_VOICES 12
#define SPLIT_PI 3.14159265358979323846f

struct SplitPitchState {
    unsigned channels;
    unsigned window;
    unsigned write_index;
    unsigned frames_written;
    size_t voice_count;
    float dry_mix;
    float voice_mix;
    float *history;
    unsigned char *initialized;
    float ratio[SPLIT_MAX_VOICES];
    float level[SPLIT_MAX_VOICES];
    float phase[SPLIT_MAX_VOICES];
    /* Methods 2 and 3: one reconstructed stream per voice, all set to the
       same latency, and a delay line that holds the dry signal back by it. */
    int reconstructed;
    size_t latency;
    ReconPitchStream *streams[SPLIT_MAX_VOICES];
    float *dry_delay;   /* latency frames, ring */
    size_t dry_index;
    float *scratch;
    size_t scratch_frames;
};

static float clampf(float x, float low, float high) {
    return fminf(high, fmaxf(low, x));
}

static float wrap_unit(float x) {
    x -= floorf(x);
    return x < 0.0f ? x + 1.0f : x;
}

static float hann(float phase) {
    return 0.5f - 0.5f * cosf(2.0f * SPLIT_PI * phase);
}

static float read_delayed(const SplitPitchState *s, unsigned channel, float delay) {
    float pos = (float)s->write_index - delay;
    while (pos < 0.0f) pos += (float)s->window;
    while (pos >= (float)s->window) pos -= (float)s->window;
    unsigned center = (unsigned)floorf(pos);
    float fraction = pos - (float)center;
    const float *buffer = s->history + (size_t)channel * s->window;
    float previous = buffer[(center + s->window - 1) % s->window];
    float current = buffer[center];
    float next = buffer[(center + 1) % s->window];
    float following = buffer[(center + 2) % s->window];
    if (delay < 1.0f) return clampf(current * (1.0f - fraction) + next * fraction, -1.0f, 1.0f);
    float first = next - previous;
    float second = 2.0f * previous - 5.0f * current + 4.0f * next - following;
    float third = 3.0f * (current - next) + following - previous;
    return clampf(current + 0.5f * fraction *
                  (first + fraction * (second + fraction * third)), -1.0f, 1.0f);
}

static float shifted_sample(const SplitPitchState *s, unsigned channel, size_t voice) {
    float ratio = s->ratio[voice];
    if (fabsf(ratio - 1.0f) < 0.0001f)
        return read_delayed(s, channel, (s->window - 2.0f) * 0.5f);
    float first = s->phase[voice];
    float second = wrap_unit(first + 0.5f);
    float span = s->window - 2.0f;
    return read_delayed(s, channel, first * span) * hann(first)
         + read_delayed(s, channel, second * span) * hann(second);
}

SplitPitchState *split_pitch_create(unsigned sample_rate, unsigned channels,
                                    SplitPitchMode mode, size_t voice_count,
                                    const float *semitones, const float *levels,
                                    float dry_mix, float voice_mix) {
    if (sample_rate < 8000 || channels == 0 || channels > 8 ||
        voice_count == 0 || voice_count > SPLIT_MAX_VOICES ||
        !semitones || !levels || mode < SPLIT_PITCH_ORIGINAL ||
        mode > SPLIT_PITCH_METHOD_3) return NULL;
    SplitPitchState *s = (SplitPitchState *)calloc(1, sizeof(*s));
    if (!s) return NULL;
    s->channels = channels;
    s->voice_count = voice_count;
    s->dry_mix = clampf(dry_mix, 0.0f, 1.0f);
    s->voice_mix = clampf(voice_mix, 0.0f, 1.0f);
    if (mode == SPLIT_PITCH_METHOD_2 || mode == SPLIT_PITCH_METHOD_3) {
        ReconPitchEngine engine = mode == SPLIT_PITCH_METHOD_2 ? RECON_PITCH_ELASTIQUE_PRO
                                                              : RECON_PITCH_A17_DRUMS;
        s->reconstructed = 1;
        for (size_t v = 0; v < voice_count; ++v) {
            s->level[v] = clampf(levels[v], 0.0f, 1.0f);
            s->streams[v] = recon_pitch_create(engine, sample_rate, channels,
                (double)clampf(semitones[v], -24.0f, 24.0f));
            if (!s->streams[v]) {
                split_pitch_destroy(s);
                return NULL;
            }
            size_t latency = recon_pitch_min_latency(s->streams[v]);
            if (latency > s->latency) s->latency = latency;
        }
        for (size_t v = 0; v < voice_count; ++v) recon_pitch_set_latency(s->streams[v], s->latency);
        s->dry_delay = (float *)calloc((s->latency ? s->latency : 1) * channels, sizeof(float));
        if (!s->dry_delay) {
            split_pitch_destroy(s);
            return NULL;
        }
        return s;
    }
    s->window = (unsigned)clampf(sample_rate * 20.0f / 1000.0f, 128.0f, 4096.0f);
    s->history = (float *)calloc((size_t)channels * s->window, sizeof(float));
    s->initialized = (unsigned char *)calloc(channels, sizeof(unsigned char));
    if (!s->history || !s->initialized) {
        split_pitch_destroy(s);
        return NULL;
    }
    for (size_t v = 0; v < voice_count; ++v) {
        s->ratio[v] = powf(2.0f, clampf(semitones[v], -48.0f, 48.0f) / 12.0f);
        s->level[v] = clampf(levels[v], 0.0f, 1.0f);
    }
    return s;
}

static void reconstructed_process(SplitPitchState *s, const int16_t *input,
                                  int16_t *output, size_t frames) {
    const unsigned ch = s->channels;
    size_t samples = frames * ch;
    if (frames > s->scratch_frames) {
        float *grown = (float *)realloc(s->scratch, 3 * samples * sizeof(float));
        if (!grown) {
            memset(output, 0, samples * sizeof(int16_t));
            return;
        }
        s->scratch = grown;
        s->scratch_frames = frames;
    }
    float *in = s->scratch;
    float *mix = in + samples;
    float *voice = mix + samples;
    for (size_t i = 0; i < samples; ++i) in[i] = input[i] / 32768.0f;
    for (size_t f = 0; f < frames; ++f) {
        for (unsigned c = 0; c < ch; ++c) {
            float delayed = in[f * ch + c];
            if (s->latency) {
                float *slot = s->dry_delay + s->dry_index * ch + c;
                float held = *slot;
                *slot = delayed;
                delayed = held;
            }
            mix[f * ch + c] = delayed * s->dry_mix;
        }
        if (s->latency && ++s->dry_index == s->latency) s->dry_index = 0;
    }
    for (size_t v = 0; v < s->voice_count; ++v) {
        recon_pitch_process(s->streams[v], in, voice, frames); /* silence once failed */
        float gain = s->level[v] * s->voice_mix;
        for (size_t i = 0; i < samples; ++i) mix[i] += voice[i] * gain;
    }
    for (size_t i = 0; i < samples; ++i)
        output[i] = (int16_t)clampf(mix[i] * 32767.0f, -32768.0f, 32767.0f);
}

void split_pitch_process(SplitPitchState *s, const int16_t *input,
                         int16_t *output, size_t frames) {
    if (!s || !input || !output) return;
    if (s->reconstructed) {
        reconstructed_process(s, input, output, frames);
        return;
    }
    for (size_t frame = 0; frame < frames; ++frame) {
        for (unsigned channel = 0; channel < s->channels; ++channel) {
            float normalized = input[frame * s->channels + channel] / 32768.0f;
            float *buffer = s->history + (size_t)channel * s->window;
            if (!s->initialized[channel]) {
                for (unsigned i = 0; i < s->window; ++i) buffer[i] = normalized;
                s->initialized[channel] = 1;
            }
            buffer[s->write_index] = normalized;
        }
        for (unsigned channel = 0; channel < s->channels; ++channel) {
            float wet = 0.0f;
            for (size_t v = 0; v < s->voice_count; ++v)
                wet += shifted_sample(s, channel, v) * s->level[v];
            float dry = read_delayed(s, channel, (s->window - 2.0f) * 0.5f);
            float rendered = (dry * s->dry_mix + wet * s->voice_mix) * 32767.0f;
            output[frame * s->channels + channel] =
                (int16_t)clampf(rendered, -32768.0f, 32767.0f);
        }
        s->write_index = (s->write_index + 1) % s->window;
        if (s->frames_written < s->window) ++s->frames_written;
        for (size_t v = 0; v < s->voice_count; ++v)
            s->phase[v] = wrap_unit(s->phase[v] + (1.0f - s->ratio[v]) / s->window);
    }
}

int split_pitch_supports(SplitPitchMode mode) {
    if (mode == SPLIT_PITCH_ORIGINAL) return 1;
    if (mode == SPLIT_PITCH_METHOD_2 || mode == SPLIT_PITCH_METHOD_3) return recon_pitch_available();
    return 0;
}

size_t split_pitch_latency(const SplitPitchState *s) {
    return s ? s->latency : 0;
}

void split_pitch_destroy(SplitPitchState *s) {
    if (!s) return;
    for (size_t v = 0; v < SPLIT_MAX_VOICES; ++v) recon_pitch_destroy(s->streams[v]);
    free(s->dry_delay);
    free(s->scratch);
    free(s->history);
    free(s->initialized);
    free(s);
}

#ifdef __ANDROID__
#include <jni.h>

JNIEXPORT jlong JNICALL
Java_dev_lec_effectapp_effects_SplitPitchNativeBridge_nativeCreate(
    JNIEnv *env, jobject self, jint sample_rate, jint channels, jint mode,
    jfloatArray semitones, jfloatArray levels, jfloat dry_mix, jfloat voice_mix) {
    (void)self;
    if (!semitones || !levels) return 0;
    jsize count = (*env)->GetArrayLength(env, semitones);
    if (count != (*env)->GetArrayLength(env, levels)) return 0;
    jfloat *pitch = (*env)->GetFloatArrayElements(env, semitones, NULL);
    jfloat *gain = (*env)->GetFloatArrayElements(env, levels, NULL);
    if (!pitch || !gain) {
        if (pitch) (*env)->ReleaseFloatArrayElements(env, semitones, pitch, JNI_ABORT);
        if (gain) (*env)->ReleaseFloatArrayElements(env, levels, gain, JNI_ABORT);
        return 0;
    }
    SplitPitchState *state = split_pitch_create((unsigned)sample_rate,
        (unsigned)channels, (SplitPitchMode)mode, (size_t)count,
        pitch, gain, dry_mix, voice_mix);
    (*env)->ReleaseFloatArrayElements(env, semitones, pitch, JNI_ABORT);
    (*env)->ReleaseFloatArrayElements(env, levels, gain, JNI_ABORT);
    return (jlong)(intptr_t)state;
}

JNIEXPORT void JNICALL
Java_dev_lec_effectapp_effects_SplitPitchNativeBridge_nativeProcess(
    JNIEnv *env, jobject self, jlong handle, jshortArray input,
    jshortArray output, jint frames) {
    (void)self;
    SplitPitchState *state = (SplitPitchState *)(intptr_t)handle;
    if (!state || !input || !output || frames <= 0) return;
    size_t samples = (size_t)frames * state->channels;
    if (samples > (size_t)(*env)->GetArrayLength(env, input) ||
        samples > (size_t)(*env)->GetArrayLength(env, output)) return;
    jshort *src = (*env)->GetShortArrayElements(env, input, NULL);
    jshort *dst = (*env)->GetShortArrayElements(env, output, NULL);
    if (!src || !dst) {
        if (src) (*env)->ReleaseShortArrayElements(env, input, src, JNI_ABORT);
        if (dst) (*env)->ReleaseShortArrayElements(env, output, dst, 0);
        return;
    }
    split_pitch_process(state, src, dst, (size_t)frames);
    (*env)->ReleaseShortArrayElements(env, input, src, JNI_ABORT);
    (*env)->ReleaseShortArrayElements(env, output, dst, 0);
}

JNIEXPORT jboolean JNICALL
Java_dev_lec_effectapp_effects_SplitPitchNativeBridge_nativeSupports(
    JNIEnv *env, jobject self, jint mode) {
    (void)env;
    (void)self;
    return split_pitch_supports((SplitPitchMode)mode) ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT jint JNICALL
Java_dev_lec_effectapp_effects_SplitPitchNativeBridge_nativeLatency(
    JNIEnv *env, jobject self, jlong handle) {
    (void)env;
    (void)self;
    return (jint)split_pitch_latency((const SplitPitchState *)(intptr_t)handle);
}

JNIEXPORT void JNICALL
Java_dev_lec_effectapp_effects_SplitPitchNativeBridge_nativeDestroy(
    JNIEnv *env, jobject self, jlong handle) {
    (void)env;
    (void)self;
    split_pitch_destroy((SplitPitchState *)(intptr_t)handle);
}
#endif
