/* Streaming split-pitch voices built on the reconstructed DSP in elastique/.
 *
 * Method 2 (élastique Pro) drives the reconstructed engine object exactly the
 * way elastique/portable_engine.c does offline (256-frame output blocks, the
 * same alternating stretch that keeps the input position from drifting), but
 * pulls input as it arrives instead of reading ahead in a whole file.
 *
 * Method 3 (A17 Drums, unpitched, minimum echo) is the reconstructed Sony
 * resampler followed by the A17 stretch preset. The resampler is causal and
 * forgets its start-up state within ~100 frames, so it runs on chunks of P
 * input frames (with the previous chunk as warm-up) producing Q frames each,
 * at the fixed ratio P/Q (its last few output frames are edge cases, so each
 * chunk's kept frames are shifted back by a few). The minimum-echo preset never searches, so its grains
 * depend only on the first hop + overlap frames of each analysis window; the
 * grain loop below is a17_process() with the grain started as soon as those
 * frames exist rather than once the whole 100 ms window is buffered. The output
 * samples are the same, with far less latency.
 *
 * Both produce output frame n from input frame n. A fixed delay turns that into
 * a frame-count-preserving stream.
 */
#define _GNU_SOURCE
#include "reconstructed_pitch.h"
#include <stdint.h>

#if !defined(RECON_PITCH_DISABLED) && (UINTPTR_MAX == 0xffffffffffffffffu || defined(__LP64__))

#define LIFT_LIBRARY
#define LIFT_TRAP
#include "elastique/generated/lift_host.c"
#include "elastique/a17.h"

#include <pthread.h>
#include <setjmp.h>

#ifndef MAP_FIXED_NOREPLACE
#define MAP_FIXED_NOREPLACE 0x100000
#endif

#define IMAGE_ADDRESS UINT64_C(0x180000000)
#define PRO_BLOCK 256
#define A17_SCRATCH 65536

static pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
static CPU *context;
static void *image;
static int load_state; /* 0 not tried, 1 loaded, -1 failed */
static jmp_buf *trap;

/* Called by lift_host.c instead of exit() in library builds. */
_Noreturn void lift_library_trap(const char *what, uint64_t pc) {
    fprintf(stderr, "reconstructed DSP stopped: %s at %llx\n", what, (unsigned long long)pc);
    if (trap) longjmp(*trap, 1);
    abort();
}

static int load_locked(void) {
    if (load_state) return load_state > 0 ? 0 : -1;
    load_state = -1;
    size_t size = (size_t)(lift_image_end - lift_image_start);
    void *p = mmap((void *)(uintptr_t)IMAGE_ADDRESS, size, PROT_READ | PROT_WRITE,
                   MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE, -1, 0);
    if (p == MAP_FAILED) return -1;
    if (p != (void *)(uintptr_t)IMAGE_ADDRESS) { munmap(p, size); return -1; }
    memcpy(p, lift_image_start, size);
    context = calloc(1, sizeof(*context));
    if (context) context->stack = calloc(1, 1024 * 1024);
    if (!context || !context->stack) {
        if (context) free(context);
        context = NULL;
        munmap(p, size);
        return -1;
    }
    image = p;
    load_state = 1;
    return 0;
}

int recon_pitch_available(void) {
    pthread_mutex_lock(&lock);
    int ok = load_locked() == 0;
    pthread_mutex_unlock(&lock);
    return ok;
}

/* ---- élastique Pro engine calls (same register setup as portable_engine.c) ---- */

static uint64_t member_address(void *object, unsigned slot) { return (*(uint64_t **)object)[slot]; }
static void begin_member(void *object) { start(context); setarg(context, 0, (uintptr_t)object); }

static int create_pro(void **object, unsigned channels, unsigned rate) {
    start(context);
    setarg(context, 0, (uintptr_t)object); setarg(context, 1, PRO_BLOCK); setarg(context, 2, channels);
    wr(context->r, 4608 + 3 * 64, 4, fb(rate, 4)); setarg(context, 4, 0);
    return (int)lift_run(context, UINT64_C(0x1803d54b0));
}
static int configure_pro(void *object, float *stretch, float pitch) {
    begin_member(object); setarg(context, 1, (uintptr_t)stretch);
    wr(context->r, 4608 + 2 * 64, 4, fb(pitch, 4)); setarg(context, 3, 0);
    return (int)lift_run(context, member_address(object, 5));
}
static int needed_pro(void *object) {
    begin_member(object);
    return (int)lift_run(context, member_address(object, 2));
}
static int process_pro(void *object, float **input, int frames, float **output) {
    begin_member(object);
    setarg(context, 1, (uintptr_t)input); setarg(context, 2, (unsigned)frames); setarg(context, 3, (uintptr_t)output);
    return (int)lift_run(context, member_address(object, 1));
}
static void destroy_pro(void *object) {
    begin_member(object); setarg(context, 1, 1);
    lift_run(context, member_address(object, 0));
}

/* Sony resampler: in_frames interleaved float32 -> out_frames. Both buffers
   need 128 spare frames, as in portable_engine.c. */
static int resample(unsigned channels, unsigned rate, const float *in, size_t in_frames,
                    float *out, size_t out_frames) {
    struct __attribute__((packed)) { uint16_t tag, channels; uint32_t rate, bytes; uint16_t align, bits, extra; }
        format = {3, (uint16_t)channels, rate, rate * channels * 4, (uint16_t)(channels * 4), 32, 0};
    start(context);
    setarg(context, 0, (uintptr_t)&format); setarg(context, 1, (uintptr_t)out);
    setarg(context, 2, out_frames); setarg(context, 3, (uintptr_t)in); setarg(context, 4, in_frames);
    return (int)lift_run(context, UINT64_C(0x180101aa0));
}

/* ---- growable interleaved frame queue ---- */

typedef struct {
    float *data;
    size_t start, length, capacity; /* in frames */
    uint64_t first;                 /* global index of the frame at data[start] */
} Queue;

static int queue_reserve(Queue *q, unsigned channels, size_t extra) {
    if (q->start + q->length + extra <= q->capacity) return 0;
    if (q->start) {
        memmove(q->data, q->data + q->start * channels, q->length * channels * sizeof(float));
        q->start = 0;
        if (q->length + extra <= q->capacity) return 0;
    }
    size_t capacity = q->capacity ? q->capacity : 4096;
    while (capacity < q->length + extra) capacity *= 2;
    float *grown = realloc(q->data, capacity * channels * sizeof(float));
    if (!grown) return -1;
    q->data = grown;
    q->capacity = capacity;
    return 0;
}
static float *queue_at(Queue *q, unsigned channels, uint64_t global) {
    return q->data + (q->start + (size_t)(global - q->first)) * channels;
}
static int queue_push(Queue *q, unsigned channels, const float *frames, size_t count) {
    if (queue_reserve(q, channels, count)) return -1;
    float *end = q->data + (q->start + q->length) * channels;
    if (frames) memcpy(end, frames, count * channels * sizeof(float));
    else memset(end, 0, count * channels * sizeof(float));
    q->length += count;
    return 0;
}
static void queue_drop_before(Queue *q, uint64_t global) {
    if (global <= q->first) return;
    size_t n = (size_t)(global - q->first);
    if (n > q->length) n = q->length;
    q->start += n; q->length -= n; q->first += n;
    if (!q->length) q->start = 0;
}

/* ---- streams ---- */

struct ReconPitchStream {
    ReconPitchEngine engine;
    unsigned rate, channels;
    size_t latency, min_latency;
    int failed;
    uint64_t emitted;   /* output frames returned so far */
    uint64_t underruns;
    Queue input;        /* received input not yet needed */
    Queue produced;     /* voice output, frame n aligned with input frame n */

    /* élastique */
    void *object;
    float pitch, low, high, stretch;
    double drift;
    int pending;        /* input frames the configured block needs, or -1 */
    uint64_t consumed;  /* input frames handed to the engine */
    float **planar_in, *planar_out[64];
    size_t planar_capacity;

    /* A17 */
    a17_state a17;
    size_t chunk_in, chunk_out;   /* P and Q */
    size_t chunk_edge;            /* E: unreliable frames at the end of each call */
    uint64_t next_chunk;          /* next resampler chunk k (needs input up to (k+1)P, internal) */
    Queue pitched;                /* resampled frames, global pitched index */
    uint64_t grain_position;      /* pitched index of the A17 analysis window */
    float *chunk_input, *chunk_output;
};

static void lock_engine(void) { pthread_mutex_lock(&lock); }
static void unlock_engine(void) { pthread_mutex_unlock(&lock); }

/* Runs fn with the trap armed. After a trap the engine object is in an unknown
   state; it is dropped (leaked) rather than destroyed. Call with the lock held. */
static int guarded(int (*fn)(ReconPitchStream *, double), ReconPitchStream *stream, double arg) {
    jmp_buf here;
    ReconPitchStream *volatile s = stream;
    volatile double a = arg;
    volatile int result = -1;
    trap = &here;
    if (!setjmp(here)) result = fn(s, a);
    else s->object = NULL;
    trap = NULL;
    return result;
}

static double clamp_semitones(double semitones) {
    if (!(semitones == semitones)) return 0;
    return semitones < -24 ? -24 : semitones > 24 ? 24 : semitones;
}

static size_t a17_chunk(unsigned rate) {
    return rate <= 48000 ? 1024 : rate <= 96000 ? 2048 : 4096;
}

/* Worst-case frames between input frame n arriving and output frame n being
   produced, simulated from the deterministic chunk and grain schedule. */
static size_t a17_lag(unsigned rate, size_t p, size_t q, size_t edge) {
    a17_state s;
    if (a17_init(&s, 1, rate, (double)p / (double)q, 0)) return 0;
    uint64_t position = 0, total = s.total_advance;
    int hop = s.analysis_hop, grains = 0, worst = 0;
    for (int g = 0; g < 4000; ++g) {
        uint64_t span = (uint64_t)s.synthesis_hop + (uint64_t)s.overlap + 1;
        if (span > (uint64_t)s.length) span = (uint64_t)s.length;
        uint64_t need = position + span;
        /* pitched frame x exists once external input reaches ((x + E) / Q + 1) * P */
        uint64_t arrive = ((need - 1 + edge) / q + 1) * p;
        long long lag = (long long)arrive - (long long)g * s.synthesis_hop;
        if (lag > worst) worst = (int)lag;
        total += (uint64_t)hop; grains++;
        hop = (int)(((double)(grains + 1) * s.exact_hop - (double)total) + .5);
        position += (uint64_t)hop;
    }
    a17_destroy(&s);
    return (size_t)worst;
}

static int pro_init(ReconPitchStream *s, double semitones) {
    s->pitch = (float)exp2(semitones / 12.0);
    s->low = 1;
    s->pending = -1;
    if (create_pro(&s->object, s->channels, s->rate) || !s->object) { s->object = NULL; return -1; }
    if (configure_pro(s->object, &s->low, s->pitch)) return -1;
    s->high = s->low;
    if (s->low != 1) {
        double candidate = 1. / s->low, factor = candidate >= 1 ? fmax(candidate, 1.01) : fmin(candidate, .99);
        for (int i = 0; i < 64; i++) {
            s->high = (float)candidate;
            if (configure_pro(s->object, &s->high, s->pitch)) return -1;
            if (s->high != s->low) break;
            candidate *= factor;
        }
        if (s->high == s->low) return -1;
        if (s->high < s->low) { float t = s->high; s->high = s->low; s->low = t; }
    }
    /* Configure the first block now: the engine asks for all of its look-ahead
       up front, and later blocks never need more than that (measured from -24
       to +24 semitones at 8-192 kHz), so it is the stream's minimum latency. */
    s->stretch = s->high;
    if (configure_pro(s->object, &s->stretch, s->pitch)) return -1;
    int n = needed_pro(s->object);
    if (n < 0 || n > 1048576) return -1;
    s->pending = n;
    s->min_latency = (size_t)n;
    s->planar_in = calloc(s->channels, sizeof(*s->planar_in));
    if (!s->planar_in) return -1;
    for (unsigned c = 0; c < s->channels; c++)
        if (!(s->planar_out[c] = calloc(PRO_BLOCK, sizeof(float)))) return -1;
    return 0;
}

static int pro_produce(ReconPitchStream *s, double unused) {
    (void)unused;
    const unsigned ch = s->channels;
    for (;;) {
        if (s->pending < 0) {
            s->stretch = s->drift > 0 ? s->low : s->high;
            if (configure_pro(s->object, &s->stretch, s->pitch)) return -1;
            int n = needed_pro(s->object);
            if (n < 0 || n > 1048576) return -1;
            s->pending = n;
        }
        size_t n = (size_t)s->pending;
        if (s->input.first + s->input.length < s->consumed + n) return 0;
        if (n > s->planar_capacity) {
            for (unsigned c = 0; c < ch; c++) {
                float *p = realloc(s->planar_in[c], (n + 16) * sizeof(float));
                if (!p) return -1;
                s->planar_in[c] = p;
            }
            s->planar_capacity = n;
        }
        const float *src = n ? queue_at(&s->input, ch, s->consumed) : NULL;
        for (size_t j = 0; j < n; j++)
            for (unsigned c = 0; c < ch; c++) s->planar_in[c][j] = src[j * ch + c];
        if (process_pro(s->object, s->planar_in, (int)n, s->planar_out)) return -1;
        s->consumed += n;
        queue_drop_before(&s->input, s->consumed);
        if (queue_reserve(&s->produced, ch, PRO_BLOCK)) return -1;
        float *dst = s->produced.data + (s->produced.start + s->produced.length) * ch;
        for (size_t j = 0; j < PRO_BLOCK; j++)
            for (unsigned c = 0; c < ch; c++) dst[j * ch + c] = s->planar_out[c][j];
        s->produced.length += PRO_BLOCK;
        s->drift += ((double)s->stretch - 1.) * PRO_BLOCK;
        s->pending = -1;
    }
}

static int pro_destroy(ReconPitchStream *s, double unused) {
    (void)unused;
    destroy_pro(s->object);
    s->object = NULL;
    return 0;
}

/* overlap_add() from a17.c, unchanged. */
static void a17_overlap_add(a17_state *s, unsigned offset) {
    const float *source = s->input + (size_t)offset * s->channels;
    int overlap = s->overlap, hop = s->synthesis_hop;
    if (s->channels == 1) {
        for (int i = 0; i < overlap; i++) {
            if (s->first) s->output[i] = source[i];
            else s->output[i] = source[i] * s->window[i] + s->output[i];
        }
        s->first = 0;
        for (int i = overlap; i < overlap + hop; i++)
            s->output[i] = source[i] * s->window[i] + s->output[i];
    } else {
        for (int i = 0; i < overlap; i++)
            for (int c = 0; c < 2; c++) {
                if (s->first) s->output[i * 2 + c] = source[i * 2 + c] + s->output[i * 2 + c];
                else s->output[i * 2 + c] = source[i * 2 + c] * s->window[i] + s->output[i * 2 + c];
            }
        s->first = 0;
        memcpy(s->output + overlap * 2, source + overlap * 2, (size_t)(s->length / 4 - overlap) * 2 * sizeof(float));
        for (int i = hop; i < hop + overlap; i++)
            for (int c = 0; c < 2; c++) s->output[i * 2 + c] = source[i * 2 + c] * s->window[i] + s->output[i * 2 + c];
    }
}

static int a17_stream_init(ReconPitchStream *s, double semitones) {
    if (s->channels > 2) return -1;
    s->chunk_in = a17_chunk(s->rate);
    s->chunk_out = (size_t)llround((double)s->chunk_in / exp2(semitones / 12.0));
    if (s->chunk_out < 1) s->chunk_out = 1;
    s->chunk_edge = (s->chunk_out + s->chunk_in - 1) / s->chunk_in + 1;
    if (a17_init(&s->a17, s->channels, s->rate, (double)s->chunk_in / (double)s->chunk_out, 0)) return -1;
    s->chunk_input = calloc((2 * s->chunk_in + 128) * s->channels, sizeof(float));
    s->chunk_output = calloc((2 * s->chunk_out + 128) * s->channels, sizeof(float));
    if (!s->chunk_input || !s->chunk_output) return -1;
    /* Internal input index = external + P: the first chunk warms up on silence. */
    if (queue_push(&s->input, s->channels, NULL, s->chunk_in)) return -1;
    s->next_chunk = 1;
    s->min_latency = a17_lag(s->rate, s->chunk_in, s->chunk_out, s->chunk_edge);
    return s->min_latency ? 0 : -1;
}

static int a17_produce(ReconPitchStream *s, double unused) {
    (void)unused;
    const unsigned ch = s->channels;
    const size_t p = s->chunk_in, q = s->chunk_out;
    a17_state *a = &s->a17;
    for (;;) {
        /* Resample every complete chunk. */
        while (s->input.first + s->input.length >= (s->next_chunk + 1) * p) {
            uint64_t from = (s->next_chunk - 1) * p;
            memcpy(s->chunk_input, queue_at(&s->input, ch, from), 2 * p * ch * sizeof(float));
            memset(s->chunk_input + 2 * p * ch, 0, 128 * ch * sizeof(float));
            if (resample(ch, s->rate, s->chunk_input, 2 * p, s->chunk_output, 2 * q)) return -1;
            /* The resampler's last ceil(Q/P) output frames are edge cases (it
               matches a longer call everywhere else), so each chunk keeps local
               frames Q-E .. 2Q-E-1: global pitched frames (k-1)Q-E .. kQ-E-1.
               The first chunk's negative frames are dropped. */
            size_t edge = s->chunk_edge;
            if (s->next_chunk == 1) {
                if (queue_push(&s->pitched, ch, s->chunk_output + q * ch, q - edge)) return -1;
            } else if (queue_push(&s->pitched, ch, s->chunk_output + (q - edge) * ch, q)) return -1;
            s->next_chunk++;
            queue_drop_before(&s->input, (s->next_chunk - 1) * p);
        }
        /* Run every grain whose frames exist (see a17_process). */
        size_t span = (size_t)a->synthesis_hop + (size_t)a->overlap + 1;
        if (span > (size_t)a->length) span = (size_t)a->length;
        if (s->pitched.first + s->pitched.length < s->grain_position + span) return 0;
        memcpy(a->input, queue_at(&s->pitched, ch, s->grain_position), span * ch * sizeof(float));
        a17_overlap_add(a, 0); /* minimum echo: the search always picks offset 0 */
        a->grain_count++;
        a->total_advance += a->analysis_hop;
        a->analysis_hop = (int)(((double)(a->grain_count + 1) * a->exact_hop - (double)a->total_advance) + .5);
        if (queue_push(&s->produced, ch, a->output, (size_t)a->output_count)) return -1;
        memmove(a->output, a->output + (size_t)a->synthesis_hop * ch, (size_t)a->overlap * ch * sizeof(float));
        memset(a->output + (size_t)a->overlap * ch, 0, (size_t)(a->length - a->overlap) * ch * sizeof(float));
        s->grain_position += (uint64_t)a->analysis_hop;
        queue_drop_before(&s->pitched, s->grain_position);
    }
}

ReconPitchStream *recon_pitch_create(ReconPitchEngine engine, unsigned sample_rate,
                                     unsigned channels, double semitones) {
    if ((engine != RECON_PITCH_ELASTIQUE_PRO && engine != RECON_PITCH_A17_DRUMS) ||
        sample_rate < 8000 || sample_rate > 192000 || channels < 1 || channels > 8)
        return NULL;
    if (engine == RECON_PITCH_A17_DRUMS && channels > 2) return NULL;
    ReconPitchStream *s = calloc(1, sizeof(*s));
    if (!s) return NULL;
    s->engine = engine;
    s->rate = sample_rate;
    s->channels = channels;
    semitones = clamp_semitones(semitones);
    lock_engine();
    int ok = load_locked() == 0 &&
        guarded(engine == RECON_PITCH_ELASTIQUE_PRO ? pro_init : a17_stream_init, s, semitones) == 0;
    unlock_engine();
    if (!ok) { recon_pitch_destroy(s); return NULL; }
    s->latency = s->min_latency;
    return s;
}

size_t recon_pitch_min_latency(const ReconPitchStream *s) { return s ? s->min_latency : 0; }

void recon_pitch_set_latency(ReconPitchStream *s, size_t latency) {
    if (!s || s->emitted) return;
    s->latency = latency > s->min_latency ? latency : s->min_latency;
}

int recon_pitch_process(ReconPitchStream *s, const float *input, float *output, size_t frames) {
    if (!s || !output) return -1;
    const unsigned ch = s->channels;
    if (!s->failed && input) {
        if (queue_push(&s->input, ch, input, frames)) s->failed = 1;
        else {
            lock_engine();
            if (guarded(s->engine == RECON_PITCH_ELASTIQUE_PRO ? pro_produce : a17_produce, s, 0)) s->failed = 1;
            unlock_engine();
        }
    }
    for (size_t i = 0; i < frames; i++) {
        float *out = output + i * ch;
        uint64_t t = s->emitted + i;
        if (s->failed || t < s->latency) { memset(out, 0, ch * sizeof(float)); continue; }
        uint64_t source = t - s->latency;
        if (source >= s->produced.first && source < s->produced.first + s->produced.length)
            memcpy(out, queue_at(&s->produced, ch, source), ch * sizeof(float));
        else {
            memset(out, 0, ch * sizeof(float)); /* underrun: stay aligned */
            s->underruns++;
        }
    }
    s->emitted += frames;
    if (s->emitted > s->latency) queue_drop_before(&s->produced, s->emitted - s->latency);
    return s->failed ? -1 : 0;
}

void recon_pitch_destroy(ReconPitchStream *s) {
    if (!s) return;
    if (s->object) {
        lock_engine();
        guarded(pro_destroy, s, 0);
        unlock_engine();
    }
    if (s->planar_in) {
        for (unsigned c = 0; c < s->channels; c++) free(s->planar_in[c]);
        free(s->planar_in);
    }
    for (unsigned c = 0; c < s->channels; c++) free(s->planar_out[c]);
    a17_destroy(&s->a17);
    free(s->chunk_input);
    free(s->chunk_output);
    free(s->input.data);
    free(s->produced.data);
    free(s->pitched.data);
    free(s);
}

#ifdef RECON_PITCH_TESTING
uint64_t recon_pitch_debug_underruns(const ReconPitchStream *s) { return s->underruns; }
#endif

#else /* 32-bit build: the reconstruction needs 64-bit pointers. */

int recon_pitch_available(void) { return 0; }
size_t recon_pitch_min_latency(const ReconPitchStream *stream) { (void)stream; return 0; }
void recon_pitch_set_latency(ReconPitchStream *stream, size_t latency) { (void)stream; (void)latency; }
ReconPitchStream *recon_pitch_create(ReconPitchEngine engine, unsigned sample_rate,
                                     unsigned channels, double semitones) {
    (void)engine; (void)sample_rate; (void)channels; (void)semitones; return NULL;
}
int recon_pitch_process(ReconPitchStream *stream, const float *input, float *output, size_t frames) {
    (void)stream; (void)input; (void)output; (void)frames; return -1;
}
void recon_pitch_destroy(ReconPitchStream *stream) { (void)stream; }

#endif
