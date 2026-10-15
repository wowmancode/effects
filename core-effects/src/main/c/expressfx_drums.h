#ifndef EXPRESSFX_DRUMS_H
#define EXPRESSFX_DRUMS_H

#include <stddef.h>

/* Caller owns *output and releases it with free(). Interleaved float PCM. */
int expressfx_drums_stretch(const float *input, size_t input_frames,
                            unsigned sample_rate, unsigned channels,
                            double speed, float **output, size_t *output_frames);

/* Pitch shift while retaining the input duration. Semitones may be fractional. */
int expressfx_drums_pitch(const float *input, size_t frames,
                          unsigned sample_rate, unsigned channels,
                          double semitones, float **output);

/* Streaming form of expressfx_drums_pitch for real-time audio processors.
   Each call consumes and emits the same number of frames. Output frame n is
   the pitch-shifted input frame n - latency, sample-for-sample identical to
   the offline function away from the clip end (the offline version sees the
   end of the input and the stream does not). Channels 1-8; semitones -24..24;
   0 semitones is a plain delay of `latency` frames. */
typedef struct ExpressfxDrumsStream ExpressfxDrumsStream;

ExpressfxDrumsStream *expressfx_drums_stream_create(unsigned sample_rate,
                                                    unsigned channels,
                                                    double semitones);
size_t expressfx_drums_stream_latency(const ExpressfxDrumsStream *stream);
void expressfx_drums_stream_process(ExpressfxDrumsStream *stream,
                                    const float *input, float *output,
                                    size_t frames);
void expressfx_drums_stream_destroy(ExpressfxDrumsStream *stream);

#endif
