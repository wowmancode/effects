#include "expressfx_drums.h"

#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Drum-like test signal: decaying noise bursts on a tone, per channel. */
static float *make_input(size_t frames, unsigned channels, unsigned rate) {
    float *x = malloc(frames * channels * sizeof(float));
    assert(x);
    unsigned seed = 12345u;
    for (size_t i = 0; i < frames; ++i) {
        double t = (double)i / rate;
        double env = exp(-(double)(i % (rate / 4)) / (rate * 0.03));
        for (unsigned ch = 0; ch < channels; ++ch) {
            seed = seed * 1103515245u + 12345u;
            double noise = ((seed >> 9) & 0xffff) / 32768.0 - 1.0;
            x[i * channels + ch] = (float)(0.3 * sin(2.0 * 3.141592653589793 *
                (110.0 + 40.0 * ch) * t) + 0.6 * env * noise);
        }
    }
    return x;
}

/* The stream must equal the offline function sample-for-sample, shifted by
   its latency, everywhere the offline version has not reached the clip end. */
static void check(unsigned rate, unsigned channels, double semitones, size_t chunk) {
    size_t frames = rate * 2u;
    float *input = make_input(frames, channels, rate);
    float *offline = NULL;
    assert(expressfx_drums_pitch(input, frames, rate, channels, semitones, &offline) == 0);
    ExpressfxDrumsStream *s = expressfx_drums_stream_create(rate, channels, semitones);
    assert(s);
    size_t latency = expressfx_drums_stream_latency(s);
    float *streamed = calloc(frames * channels, sizeof(float));
    assert(streamed);
    for (size_t pos = 0; pos < frames; pos += chunk) {
        size_t n = frames - pos < chunk ? frames - pos : chunk;
        expressfx_drums_stream_process(s, input + pos * channels,
                                       streamed + pos * channels, n);
    }
    for (size_t i = 0; i < latency * channels; ++i) assert(streamed[i] == 0.0f);
    size_t checked = frames - latency - rate / 10u;
    size_t mismatches = 0;
    for (size_t i = 0; i < checked * channels; ++i)
        mismatches += memcmp(&offline[i], &streamed[i + latency * channels], sizeof(float)) != 0;
    if (mismatches) {
        fprintf(stderr, "rate %u ch %u st %.2f chunk %zu: %zu mismatches\n",
                rate, channels, semitones, chunk, mismatches);
        abort();
    }
    expressfx_drums_stream_destroy(s);
    free(streamed);
    free(offline);
    free(input);
}

int main(void) {
    const double shifts[] = {-24.0, -12.0, -5.5, -1.0, 0.0, 0.3, 3.0, 7.0, 12.0, 19.0, 24.0};
    const unsigned rates[] = {44100u, 48000u};
    for (size_t r = 0; r < 2; ++r)
        for (unsigned ch = 1; ch <= 2; ++ch)
            for (size_t i = 0; i < sizeof(shifts) / sizeof(shifts[0]); ++i)
                check(rates[r], ch, shifts[i], i % 2 ? 1024u : 333u);
    assert(!expressfx_drums_stream_create(48000, 2, 24.5));
    assert(!expressfx_drums_stream_create(48000, 9, 3.0));
    puts("drums unpitched stream matches offline");
    return 0;
}
