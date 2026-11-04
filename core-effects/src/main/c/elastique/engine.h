#ifndef ELASTIQUE_ENGINE_H
#define ELASTIQUE_ENGINE_H
#include <stddef.h>
#include <signal.h>
extern volatile sig_atomic_t interrupted;
int engine_load(void);
/* All arrays contain interleaved float32. Output is ADDED at unity gain. */
int engine_add_pro(const float *input, float *mix, size_t frames,
                   unsigned channels, unsigned rate, double semitones, int formants);
int engine_add_a17(const float *input, float *mix, size_t frames,
                   unsigned channels, unsigned rate, double semitones, const char *scratch);
void engine_unload(void);
#endif
