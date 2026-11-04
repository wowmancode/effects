#ifndef RECONSTRUCTED_PITCH_H
#define RECONSTRUCTED_PITCH_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Streaming wrappers around the reconstructed DSP in elastique/ (split pitch
   Methods 2 and 3). Each stream turns interleaved float frames into the same
   number of pitch-shifted frames, delayed by a fixed latency. A stream's
   smallest workable latency depends on its engine, rate and pitch; voices that
   are mixed together are all set to the largest one (and the dry signal is
   delayed by the same amount) before the first process call.

   The reconstruction needs a 64-bit process and a fixed address range; when
   that is unavailable recon_pitch_available() is 0 and create returns NULL.
   All calls are serialized by one internal lock (the reconstructed code has a
   single register context). */

typedef enum {
    RECON_PITCH_ELASTIQUE_PRO = 1, /* Method 2: élastique Pro, up to 8 channels */
    RECON_PITCH_A17_DRUMS = 2      /* Method 3: A17 Drums, unpitched (minimum echo), mono/stereo */
} ReconPitchEngine;

typedef struct ReconPitchStream ReconPitchStream;

int recon_pitch_available(void);
/* semitones are clamped to -24..+24. */
ReconPitchStream *recon_pitch_create(ReconPitchEngine engine, unsigned sample_rate,
                                     unsigned channels, double semitones);
/* Frames between input frame n arriving and the stream being able to return
   its output frame n. */
size_t recon_pitch_min_latency(const ReconPitchStream *stream);
/* Output frame n is the shifted input frame n - latency. Only before the first
   process call; values below the minimum are raised to it. */
void recon_pitch_set_latency(ReconPitchStream *stream, size_t latency);
/* Returns 0, or -1 once the stream has failed (it then outputs silence). */
int recon_pitch_process(ReconPitchStream *stream, const float *input,
                        float *output, size_t frames);
void recon_pitch_destroy(ReconPitchStream *stream);

#ifdef __cplusplus
}
#endif
#endif
