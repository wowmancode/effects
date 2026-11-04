#ifndef RECONSTRUCTED_A17_H
#define RECONSTRUCTED_A17_H
#include <stddef.h>
#include <stdint.h>
/* Portable reconstruction of the original A17 time-stretch worker's float path.
   This is the duration-restoration stage, not the pitch-changing resampler. */
typedef struct a17_state {
    unsigned channels, rate;
    double ratio, exact_hop;
    int length, synthesis_hop, analysis_hop, initial_hop, overlap;
    int search_step, search_length;
    float threshold, search_fraction;
    float *input, *output, *window;
    int first, ready, input_used, input_fill, output_used, output_pos;
    int output_count, retained_input, flushed, ending;
    int64_t total_advance;
    int grain_count;
} a17_state;

int a17_init(a17_state *s,unsigned channels,unsigned rate,double ratio,float search_fraction);
void a17_destroy(a17_state *s);
int a17_process(a17_state *s,int action,const float *input,int *input_frames,
                float *output,int *output_frames);
#endif
