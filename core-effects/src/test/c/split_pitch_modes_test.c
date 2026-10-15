#include "split_pitch_modes.h"
#include "expressfx_drums.h"

#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    enum { FRAMES = 8000 };
    int16_t *input = (int16_t *)malloc(FRAMES * sizeof(*input));
    int16_t *output[2];
    assert(input);
    for (int frame = 0; frame < FRAMES; ++frame) {
        double tone = sin(frame * 2.0 * 3.141592653589793 * 440.0 / 48000.0);
        input[frame] = (int16_t)(tone * 9000.0 + (frame % 1200 == 0 ? 12000.0 : 0.0));
    }
    const float semitones[] = {7.0f};
    const float levels[] = {1.0f};
    for (int mode = 0; mode < 2; ++mode) {
        output[mode] = (int16_t *)malloc(FRAMES * sizeof(int16_t));
        assert(output[mode]);
        SplitPitchState *state = split_pitch_create(48000, 1, (SplitPitchMode)mode,
                                                    1, semitones, levels, 0.0f, 1.0f);
        assert(state);
        split_pitch_process(state, input, output[mode], FRAMES / 2);
        split_pitch_process(state, input + FRAMES / 2, output[mode] + FRAMES / 2,
                            FRAMES / 2);
        split_pitch_destroy(state);
    }
    assert(!split_pitch_create(48000, 1, (SplitPitchMode)2, 1, semitones, levels,
                               0.0f, 1.0f));

    /* Drums unpitched with only the pitched voice is the expressfx_drums
       stream, quantized back to PCM16. */
    float *normalized = (float *)malloc(FRAMES * sizeof(float));
    float *shifted = (float *)malloc(FRAMES * sizeof(float));
    assert(normalized && shifted);
    for (int frame = 0; frame < FRAMES; ++frame) normalized[frame] = input[frame] / 32768.0f;
    ExpressfxDrumsStream *stream = expressfx_drums_stream_create(48000, 1, 7.0);
    assert(stream);
    expressfx_drums_stream_process(stream, normalized, shifted, FRAMES);
    expressfx_drums_stream_destroy(stream);
    int changed = 0;
    for (int frame = 0; frame < FRAMES; ++frame) {
        float expected = fminf(32767.0f, fmaxf(-32768.0f, shifted[frame] * 32767.0f));
        assert(output[1][frame] == (int16_t)expected);
        changed |= output[0][frame] != output[1][frame];
    }
    assert(changed);
    for (int mode = 0; mode < 2; ++mode) free(output[mode]);
    free(shifted);
    free(normalized);
    free(input);
    puts("split pitch C profiles passed");
    return 0;
}
