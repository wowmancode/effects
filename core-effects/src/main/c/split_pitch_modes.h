#ifndef SPLIT_PITCH_MODES_H
#define SPLIT_PITCH_MODES_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    SPLIT_PITCH_ORIGINAL = 0,
    /* expressfx_drums streaming pitch shift; voice semitones clamp to +/-24. */
    SPLIT_PITCH_DRUMS_UNPITCHED = 1
} SplitPitchMode;

typedef struct SplitPitchState SplitPitchState;

/* PCM16 samples are interleaved by channel. Processing preserves frame count. */
SplitPitchState *split_pitch_create(unsigned sample_rate, unsigned channels,
                                    SplitPitchMode mode, size_t voice_count,
                                    const float *semitones, const float *levels,
                                    float dry_mix, float voice_mix);
void split_pitch_process(SplitPitchState *state, const int16_t *input,
                         int16_t *output, size_t frames);
void split_pitch_destroy(SplitPitchState *state);

#ifdef __cplusplus
}
#endif
#endif
