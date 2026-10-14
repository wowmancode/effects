#include "split_pitch_modes.h"

#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    enum { FRAMES = 8000 };
    int16_t *input = (int16_t *)malloc(FRAMES * sizeof(*input));
    int16_t *output[3];
    assert(input);
    for (int frame = 0; frame < FRAMES; ++frame) {
        double tone = sin(frame * 2.0 * 3.141592653589793 * 440.0 / 48000.0);
        input[frame] = (int16_t)(tone * 9000.0 + (frame % 1200 == 0 ? 12000.0 : 0.0));
    }
    const float semitones[] = {7.0f};
    const float levels[] = {1.0f};
    for (int mode = 0; mode < 3; ++mode) {
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
    int changed_elastique = 0;
    int changed_drums = 0;
    for (int frame = 0; frame < FRAMES; ++frame) {
        changed_elastique |= output[0][frame] != output[1][frame];
        changed_drums |= output[0][frame] != output[2][frame];
    }
    assert(changed_elastique && changed_drums);
    for (int mode = 0; mode < 3; ++mode) free(output[mode]);
    free(input);
    puts("split pitch C profiles passed");
    return 0;
}
