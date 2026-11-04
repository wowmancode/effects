#ifndef LEC_PLUGIN_H
#define LEC_PLUGIN_H
#include <stddef.h>
#include <stdint.h>
#define LEC_PLUGIN_API_VERSION 1
#define LEC_STATE_BYTES 65536
/* Audio is interleaved float PCM. Video is RGBA8, row zero at the bottom. */
/* controls[0..7] are Control 1..8. state is zeroed, per-instance persistent storage. */
void lec_audio(float *samples, int frames, int channels, int sample_rate, double time,
               const float controls[8], void *state);
void lec_video(unsigned char *rgba, int width, int height, int stride, double time,
               const float controls[8], void *state);
/* Optional: release allocations referenced by state when the instance closes. */
void lec_destroy(void *state);
#endif
