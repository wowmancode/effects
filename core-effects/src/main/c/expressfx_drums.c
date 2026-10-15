#include "expressfx_drums.h"

#include <math.h>
#include <stdint.h>
#include <stdlib.h>

static size_t min_size(size_t a, size_t b) { return a < b ? a : b; }

static float sample_at(const float *input, size_t frames, unsigned channels,
                       size_t frame, unsigned channel) {
    return frame < frames ? input[frame * channels + channel] : 0.0f;
}

/* The DLL scores (existing + candidate)^2 on every second sample. The first
   candidate exceeding ten times the existing energy wins; otherwise the
   maximum score wins. Stereo requires both channel thresholds to pass. */
static size_t matching_offset(const float *input, size_t frames,
                              unsigned channels, size_t candidate,
                              const float *existing, size_t overlap,
                              size_t search) {
    float energy[2] = {0.0f, 0.0f};
    float best = -1.0f;
    size_t best_offset = 0;
    for (size_t i = 0; i < search; i += 2) {
        for (unsigned ch = 0; ch < channels; ++ch) {
            float x = existing[i * channels + ch];
            energy[ch] += x * x;
        }
    }
    for (size_t offset = 0; offset < search; offset += 2) {
        float score[2] = {0.0f, 0.0f};
        for (size_t i = 0; i < search; i += 2) {
            for (unsigned ch = 0; ch < channels; ++ch) {
                float a = existing[min_size(i, overlap - 1) * channels + ch];
                float b = sample_at(input, frames, channels, candidate + offset + i, ch);
                float sum = a + b;
                score[ch] += sum * sum;
            }
        }
        if (score[0] > 10.0f * energy[0] &&
            (channels == 1 || score[1] > 10.0f * energy[1])) return offset;
        float total = score[0] + (channels == 2 ? score[1] : 0.0f);
        if (total > best) { best = total; best_offset = offset; }
    }
    return best_offset;
}

int expressfx_drums_stretch(const float *input, size_t input_frames,
                            unsigned sample_rate, unsigned channels,
                            double speed, float **output, size_t *output_frames) {
    if (!input || !output || !output_frames || !input_frames ||
        sample_rate < 8000 || sample_rate > 384000 ||
        channels < 1 || channels > 2 || !isfinite(speed) ||
        speed < 0.25 || speed > 4.0) return -1;
    double length = ceil((double)input_frames / speed);
    if (length > (double)(SIZE_MAX / channels / sizeof(float)) - sample_rate) return -1;
    size_t count = (size_t)length;
    float *result = calloc(count * channels, sizeof(float));
    if (!result) return -1;

    /* Drum, unpitched preset: 30 ms block, 3 ms fade, 5 ms search,
       two-sample search step. The DLL emits half a block per iteration. */
    size_t block = sample_rate * 30u / 1000u;
    size_t hop = block / 2u;
    size_t overlap = sample_rate * 3u / 1000u;
    size_t search = sample_rate * 5u / 1000u;
    if (overlap < 2) overlap = 2;
    if (search < 2) search = 2;
    if (search > hop - overlap) search = hop - overlap;
    if (!hop || !search) { free(result); return -1; }

    for (size_t output_pos = 0, block_index = 0; output_pos < count;
         output_pos += hop, ++block_index) {
        size_t nominal_input = (size_t)llround((double)block_index * hop * speed);
        if (nominal_input >= input_frames) nominal_input = input_frames - 1;
        size_t offset = 0;
        if (block_index != 0 && output_pos + search < count) {
            offset = matching_offset(input, input_frames, channels, nominal_input,
                                     result + output_pos * channels,
                                     overlap, search);
        }
        size_t span = min_size(count - output_pos, hop + overlap);
        for (size_t i = 0; i < span; ++i) {
            float weight = 1.0f;
            if (i < overlap) weight = (float)i / (float)overlap;
            else if (i >= hop) weight = (float)(hop + overlap - i) / (float)overlap;
            if (block_index == 0 && i < overlap) weight = 1.0f;
            for (unsigned ch = 0; ch < channels; ++ch) {
                float x = sample_at(input, input_frames, channels,
                                    nominal_input + offset + i, ch);
                result[(output_pos + i) * channels + ch] += x * weight;
            }
        }
    }
    *output = result;
    *output_frames = count;
    return 0;
}

int expressfx_drums_pitch(const float *input, size_t frames,
                          unsigned sample_rate, unsigned channels,
                          double semitones, float **output) {
    if (!input || !output || channels < 1 || channels > 2 ||
        !isfinite(semitones) ||
        semitones < -24.0 || semitones > 24.0 ||
        frames == 0 || frames > SIZE_MAX / channels / sizeof(float)) return -1;
    if (semitones == 0.0) {
        float *copy = malloc(frames * channels * sizeof(float));
        if (!copy) return -1;
        for (size_t i = 0; i < frames * channels; ++i) copy[i] = input[i];
        *output = copy;
        return 0;
    }
    double ratio = exp2(semitones / 12.0);
    float *stretched = NULL;
    size_t stretched_frames = 0;
    if (expressfx_drums_stretch(input, frames, sample_rate, channels,
                                1.0 / ratio, &stretched, &stretched_frames)) return -1;
    float *result = malloc(frames * channels * sizeof(float));
    if (!result) { free(stretched); return -1; }
    for (size_t i = 0; i < frames; ++i) {
        double position = (double)i * ratio;
        size_t first = (size_t)position;
        float fraction = (float)(position - first);
        for (unsigned ch = 0; ch < channels; ++ch) {
            float a = sample_at(stretched, stretched_frames, channels, first, ch);
            float b = sample_at(stretched, stretched_frames, channels, first + 1, ch);
            result[i * channels + ch] = a + fraction * (b - a);
        }
    }
    free(stretched);
    *output = result;
    return 0;
}

/* ------------------------------------------------------------------------
   Streaming form. Pitch = stretch by 1/ratio, then resample by ratio. Output
   frame j reads stretched frame j * ratio, and the stretch block covering it
   starts near input frame j, so with a fixed lookahead every block can be
   rendered from input that has already arrived. Blocks are emitted lazily,
   right before the resampler needs their frames, using exactly the same
   parameters, arithmetic and summation order as the offline functions above.
   ------------------------------------------------------------------------ */

#define DRUMS_STREAM_MAX_CHANNELS 8u

struct ExpressfxDrumsStream {
    unsigned channels;
    int bypass;
    double ratio;
    double speed;
    size_t hop, overlap, search, latency;
    size_t input_mask, stretched_mask;
    float *input_ring;      /* (input_mask + 1) * channels */
    float *stretched_ring;  /* (stretched_mask + 1) * channels */
    uint64_t received;      /* input frames written so far */
    uint64_t next_block;    /* stretch blocks emitted so far */
    uint64_t zeroed_until;  /* stretched frames [0, zeroed_until) are live */
};

static size_t next_power_of_two(size_t x) {
    size_t p = 1;
    while (p < x) p <<= 1;
    return p;
}

static float stream_input(const ExpressfxDrumsStream *s, uint64_t frame,
                          unsigned channel) {
    if (frame >= s->received) return 0.0f;
    return s->input_ring[(size_t)(frame & s->input_mask) * s->channels + channel];
}

static float *stream_stretched(ExpressfxDrumsStream *s, uint64_t frame) {
    return s->stretched_ring + (size_t)(frame & s->stretched_mask) * s->channels;
}

static void stream_zero_until(ExpressfxDrumsStream *s, uint64_t end) {
    for (; s->zeroed_until < end; ++s->zeroed_until) {
        float *frame = stream_stretched(s, s->zeroed_until);
        for (unsigned ch = 0; ch < s->channels; ++ch) frame[ch] = 0.0f;
    }
}

/* matching_offset() over the ring buffers; identical for one or two channels
   and extended to more channels by requiring every channel to pass. */
static size_t stream_matching_offset(ExpressfxDrumsStream *s, uint64_t candidate,
                                     uint64_t output_pos) {
    float energy[DRUMS_STREAM_MAX_CHANNELS] = {0.0f};
    float best = -1.0f;
    size_t best_offset = 0;
    for (size_t i = 0; i < s->search; i += 2) {
        const float *x = stream_stretched(s, output_pos + i);
        for (unsigned ch = 0; ch < s->channels; ++ch) energy[ch] += x[ch] * x[ch];
    }
    for (size_t offset = 0; offset < s->search; offset += 2) {
        float score[DRUMS_STREAM_MAX_CHANNELS] = {0.0f};
        for (size_t i = 0; i < s->search; i += 2) {
            const float *a = stream_stretched(s, output_pos + min_size(i, s->overlap - 1));
            for (unsigned ch = 0; ch < s->channels; ++ch) {
                float sum = a[ch] + stream_input(s, candidate + offset + i, ch);
                score[ch] += sum * sum;
            }
        }
        int passes = 1;
        for (unsigned ch = 0; ch < s->channels; ++ch)
            passes &= score[ch] > 10.0f * energy[ch];
        if (passes) return offset;
        float total = score[0];
        for (unsigned ch = 1; ch < s->channels; ++ch) total += score[ch];
        if (total > best) { best = total; best_offset = offset; }
    }
    return best_offset;
}

static void stream_emit_block(ExpressfxDrumsStream *s) {
    uint64_t block_index = s->next_block++;
    uint64_t output_pos = block_index * s->hop;
    uint64_t nominal_input =
        (uint64_t)llround((double)block_index * s->hop * s->speed);
    size_t span = s->hop + s->overlap;
    stream_zero_until(s, output_pos + (span > s->search ? span : s->search));
    size_t offset = block_index == 0 ? 0 :
        stream_matching_offset(s, nominal_input, output_pos);
    for (size_t i = 0; i < span; ++i) {
        float weight = 1.0f;
        if (i < s->overlap) weight = (float)i / (float)s->overlap;
        else if (i >= s->hop) weight = (float)(span - i) / (float)s->overlap;
        if (block_index == 0 && i < s->overlap) weight = 1.0f;
        float *out = stream_stretched(s, output_pos + i);
        for (unsigned ch = 0; ch < s->channels; ++ch)
            out[ch] += stream_input(s, nominal_input + offset + i, ch) * weight;
    }
}

ExpressfxDrumsStream *expressfx_drums_stream_create(unsigned sample_rate,
                                                    unsigned channels,
                                                    double semitones) {
    if (sample_rate < 8000 || sample_rate > 384000 || channels < 1 ||
        channels > DRUMS_STREAM_MAX_CHANNELS || !isfinite(semitones) ||
        semitones < -24.0 || semitones > 24.0) return NULL;
    ExpressfxDrumsStream *s = calloc(1, sizeof(*s));
    if (!s) return NULL;
    s->channels = channels;
    s->bypass = semitones == 0.0;
    s->ratio = exp2(semitones / 12.0);
    s->speed = 1.0 / s->ratio;
    /* Same preset arithmetic as expressfx_drums_stretch(). */
    size_t block = sample_rate * 30u / 1000u;
    s->hop = block / 2u;
    s->overlap = sample_rate * 3u / 1000u;
    s->search = sample_rate * 5u / 1000u;
    if (s->overlap < 2) s->overlap = 2;
    if (s->search < 2) s->search = 2;
    if (s->search > s->hop - s->overlap) s->search = s->hop - s->overlap;
    /* A block starts at most speed + 0.5 (< 5) frames after the output frame
       that needs it, then reads hop + overlap + 2 * search frames ahead. */
    s->latency = s->hop + s->overlap + 2u * s->search + 8u;
    s->input_mask = next_power_of_two(2u * (s->latency + 4u * s->hop + 16u)) - 1u;
    s->stretched_mask =
        next_power_of_two(4u * (2u * s->hop + s->overlap + s->search + 16u)) - 1u;
    s->input_ring = calloc((s->input_mask + 1u) * channels, sizeof(float));
    s->stretched_ring = calloc((s->stretched_mask + 1u) * channels, sizeof(float));
    if (!s->input_ring || !s->stretched_ring) {
        expressfx_drums_stream_destroy(s);
        return NULL;
    }
    return s;
}

size_t expressfx_drums_stream_latency(const ExpressfxDrumsStream *s) {
    return s ? s->latency : 0;
}

void expressfx_drums_stream_process(ExpressfxDrumsStream *s, const float *input,
                                    float *output, size_t frames) {
    if (!s || !input || !output) return;
    for (size_t n = 0; n < frames; ++n) {
        float *slot = s->input_ring + (size_t)(s->received & s->input_mask) * s->channels;
        for (unsigned ch = 0; ch < s->channels; ++ch) slot[ch] = input[n * s->channels + ch];
        ++s->received;
        float *out = output + n * s->channels;
        if (s->received <= s->latency) {
            for (unsigned ch = 0; ch < s->channels; ++ch) out[ch] = 0.0f;
            continue;
        }
        uint64_t frame = s->received - 1u - s->latency;
        if (s->bypass) {
            for (unsigned ch = 0; ch < s->channels; ++ch)
                out[ch] = stream_input(s, frame, ch);
            continue;
        }
        double position = (double)frame * s->ratio;
        uint64_t first = (uint64_t)position;
        float fraction = (float)(position - first);
        while (s->next_block * s->hop <= first + 1u) stream_emit_block(s);
        const float *a = stream_stretched(s, first);
        const float *b = stream_stretched(s, first + 1u);
        for (unsigned ch = 0; ch < s->channels; ++ch)
            out[ch] = a[ch] + fraction * (b[ch] - a[ch]);
    }
}

void expressfx_drums_stream_destroy(ExpressfxDrumsStream *s) {
    if (!s) return;
    free(s->input_ring);
    free(s->stretched_ring);
    free(s);
}
