#ifndef SPLIT_PITCH_MODES_H
#define SPLIT_PITCH_MODES_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    SPLIT_PITCH_ORIGINAL = 0,
    /* Reconstructed élastique Pro (reconstructed_pitch.c); voices clamp to +/-24 semitones. */
    SPLIT_PITCH_METHOD_2 = 1,
    /* Reconstructed A17 Drums, unpitched (minimum echo); mono/stereo, +/-24 semitones. */
    SPLIT_PITCH_METHOD_3 = 2
} SplitPitchMode;

typedef struct SplitPitchState SplitPitchState;

/* 1 if the mode can be created in this process (Methods 2 and 3 need a 64-bit
   build and their fixed address range). */
int split_pitch_supports(SplitPitchMode mode);

/* PCM16 samples are interleaved by channel. Processing preserves frame count.
   Methods 2 and 3 return the mix delayed by split_pitch_latency() frames (dry
   and voices alike); Original has no reported latency. */
SplitPitchState *split_pitch_create(unsigned sample_rate, unsigned channels,
                                    SplitPitchMode mode, size_t voice_count,
                                    const float *semitones, const float *levels,
                                    float dry_mix, float voice_mix);
void split_pitch_process(SplitPitchState *state, const int16_t *input,
                         int16_t *output, size_t frames);
size_t split_pitch_latency(const SplitPitchState *state);
void split_pitch_destroy(SplitPitchState *state);

#ifdef __cplusplus
}
#endif
#endif
