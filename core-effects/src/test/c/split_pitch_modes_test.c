#include "split_pitch_modes.h"
#include "reconstructed_pitch.h"

#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum { RATE = 48000, FRAMES = 48000 };

static int16_t quantize(float x) {
    return (int16_t)fminf(32767.0f, fmaxf(-32768.0f, x * 32767.0f));
}

/* Runs a mode over input in uneven pieces, as the Android audio pipeline does. */
static SplitPitchState *run(SplitPitchMode mode, unsigned channels, size_t voices,
                            const float *semitones, const float *levels, float dry, float wet,
                            const int16_t *input, int16_t *output) {
    SplitPitchState *state = split_pitch_create(RATE, channels, mode, voices, semitones, levels, dry, wet);
    if (!state) return NULL;
    size_t position = 0, piece = 0;
    while (position < FRAMES) {
        size_t n = 1 + (piece++ * 7919) % 1500;
        if (n > FRAMES - position) n = FRAMES - position;
        split_pitch_process(state, input + position * channels, output + position * channels, n);
        position += n;
    }
    return state;
}

int main(void) {
    int16_t *input = malloc(FRAMES * 2 * sizeof(*input));
    int16_t *output[3], *check = malloc(FRAMES * 2 * sizeof(int16_t));
    float *normalized = malloc(FRAMES * sizeof(float)), *shifted = malloc(FRAMES * sizeof(float));
    assert(input && check && normalized && shifted);
    for (int frame = 0; frame < FRAMES; ++frame) {
        double tone = sin(frame * 2.0 * 3.141592653589793 * 440.0 / RATE);
        input[frame] = (int16_t)(tone * 9000.0 + (frame % 1200 == 0 ? 12000.0 : 0.0));
    }
    const float semitones[] = {7.0f, -5.0f};
    const float levels[] = {1.0f, 0.5f};
    int reconstructed = recon_pitch_available();
    printf("reconstructed DSP %s\n", reconstructed ? "available" : "unavailable");
    assert(split_pitch_supports(SPLIT_PITCH_ORIGINAL));
    assert(split_pitch_supports(SPLIT_PITCH_METHOD_2) == reconstructed);
    assert(split_pitch_supports(SPLIT_PITCH_METHOD_3) == reconstructed);
    assert(!split_pitch_create(RATE, 1, (SplitPitchMode)3, 1, semitones, levels, 0.0f, 1.0f));

    for (int mode = 0; mode < 3; ++mode) {
        output[mode] = malloc(FRAMES * sizeof(int16_t));
        assert(output[mode]);
        SplitPitchState *state = run((SplitPitchMode)mode, 1, 1, semitones, levels, 0.0f, 1.0f,
                                     input, output[mode]);
        assert(mode == 0 || reconstructed ? state != NULL : state == NULL);
        if (state) split_pitch_destroy(state);
    }
    if (!reconstructed) {
        puts("split pitch C profiles passed (Original only)");
        return 0;
    }
    for (int mode = 1; mode < 3; ++mode) {
        /* A single voice is the reconstructed stream, quantized back to PCM16. */
        ReconPitchStream *stream = recon_pitch_create(mode, RATE, 1, 7.0);
        assert(stream);
        for (int frame = 0; frame < FRAMES; ++frame) normalized[frame] = input[frame] / 32768.0f;
        assert(recon_pitch_process(stream, normalized, shifted, FRAMES) == 0);
        recon_pitch_destroy(stream);
        int changed = 0, nonzero = 0;
        for (int frame = 0; frame < FRAMES; ++frame) {
            assert(output[mode][frame] == quantize(shifted[frame]));
            changed |= output[0][frame] != output[mode][frame];
            nonzero |= output[mode][frame] != 0;
        }
        assert(changed && nonzero);

        /* The dry signal is delayed by the latency shared by every voice. */
        SplitPitchState *state = run((SplitPitchMode)mode, 1, 2, semitones, levels, 1.0f, 0.0f, input, check);
        size_t latency = split_pitch_latency(state);
        printf("method %d latency %zu frames\n", mode + 1, latency);
        assert(latency > 0 && latency < (size_t)RATE / 2);
        for (size_t frame = 0; frame < FRAMES; ++frame) {
            int16_t expected = frame < latency ? 0 : quantize(input[frame - latency] / 32768.0f);
            assert(check[frame] == expected);
        }
        split_pitch_destroy(state);

        /* Stereo, both voices. */
        for (int frame = FRAMES - 1; frame >= 0; --frame)
            check[2 * frame] = check[2 * frame + 1] = input[frame];
        int16_t *stereo = malloc(FRAMES * 2 * sizeof(int16_t));
        assert(stereo);
        state = run((SplitPitchMode)mode, 2, 2, semitones, levels, 0.2f, 0.8f, check, stereo);
        assert(state);
        split_pitch_destroy(state);
        free(stereo);
    }
    /* Method 3 is mono/stereo only; the app falls back to Original. */
    assert(!split_pitch_create(RATE, 3, SPLIT_PITCH_METHOD_3, 1, semitones, levels, 0.2f, 0.8f));
    SplitPitchState *six = split_pitch_create(RATE, 6, SPLIT_PITCH_METHOD_2, 1, semitones, levels, 0.2f, 0.8f);
    assert(six);
    split_pitch_destroy(six);

    for (int mode = 0; mode < 3; ++mode) free(output[mode]);
    free(check);
    free(shifted);
    free(normalized);
    free(input);
    puts("split pitch C profiles passed");
    return 0;
}
