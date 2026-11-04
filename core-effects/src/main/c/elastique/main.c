#define _GNU_SOURCE
#include "engine.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <strings.h>
#include <math.h>
#include <errno.h>
#include <limits.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/wait.h>

volatile sig_atomic_t interrupted;
static char scratch[64], decoded[128], mixed[128];
static char *pending_output;
static void cleanup(void) {
    if (*decoded) unlink(decoded);
    if (*mixed) unlink(mixed);
    if (pending_output) unlink(pending_output);
    if (*scratch) rmdir(scratch);
}
static void stop(int signal_number) { interrupted = signal_number; }
static void usage(FILE *f) {
    fprintf(f,
        "Usage: elastique SHIFT [SHIFT ...] INPUT [-o OUTPUT.wav|OUTPUT.mkv]\n"
        "       elastique --a17 -6 8 input.mp4\n"
        "\n"
        "Shifts are semitones, including decimals, from -24 to +24.\n"
        "If INPUT is omitted, its path is requested interactively.\n"
        "\n"
        "  --engine elastique|a17  Engine (default: original Elastique Pro)\n"
        "  --a17                  Sony A17 Drums (minimum echo) preset\n"
        "  --formants             Preserve formants (Elastique only)\n"
        "  --audio-only           Extract audio from video, output WAV\n"
        "  -i, --input FILE       Explicit input path\n"
        "  -o, --output FILE      Output; default: INPUT.pitched.wav/.mkv\n"
        "  --force                Replace an existing output\n"
        "  -h, --help             Show this help\n"
        "\n"
        "Voices are summed at full gain; no averaging, normalization or limiter.\n"
        "Output is float32 PCM. Video is copied into MKV without re-encoding.\n"
        "Portable C DSP reconstruction; no runtime x86 instruction execution.\n");
}

/* Pass paths as arguments, never through a shell. */
static int run(char *const args[], char *capture, size_t capacity) {
    int pipes[2] = {-1, -1};
    if (capture && pipe(pipes)) return -1;
    pid_t child = fork();
    if (child < 0) { if (capture) { close(pipes[0]); close(pipes[1]); } return -1; }
    if (!child) {
        signal(SIGINT, SIG_DFL); signal(SIGTERM, SIG_DFL);
        if (capture) { close(pipes[0]); dup2(pipes[1], STDOUT_FILENO); close(pipes[1]); }
        execvp(args[0], args);
        fprintf(stderr, "Cannot run %s: %s\n", args[0], strerror(errno));
        _exit(127);
    }
    if (capture) {
        close(pipes[1]); size_t used = 0; char discard[1024];
        for (;;) {
            char *p = used < capacity - 1 ? capture + used : discard;
            size_t available = used < capacity - 1 ? capacity - 1 - used : sizeof(discard);
            ssize_t n = read(pipes[0], p, available);
            if (n < 0 && errno == EINTR && !interrupted) continue;
            if (n <= 0) break;
            if (p != discard) used += (size_t)n;
        }
        capture[used] = 0; close(pipes[0]);
    }
    int status;
    for (;;) {
        if (interrupted) kill(child, SIGTERM);
        if (waitpid(child, &status, 0) >= 0) break;
        if (errno != EINTR) return -1;
    }
    return WIFEXITED(status) ? WEXITSTATUS(status) : 128 + WTERMSIG(status);
}

struct media_info { unsigned rate, channels; int video; double audio_start, media_start; };
static int probe(char *input, struct media_info *m) {
    char text[4096];
    char *audio[] = {"ffprobe", "-v", "error", "-select_streams", "a:0",
        "-show_entries", "stream=sample_rate,channels,start_time:format=start_time",
        "-of", "default", input, NULL};
    if (run(audio, text, sizeof(text))) return -1;
    int format = 0;
    char *save = NULL;
    for (char *line = strtok_r(text, "\n", &save); line; line = strtok_r(NULL, "\n", &save)) {
        if (!strcmp(line, "[FORMAT]")) format = 1;
        else if (!strncmp(line, "sample_rate=", 12)) m->rate = (unsigned)strtoul(line + 12, NULL, 10);
        else if (!strncmp(line, "channels=", 9)) m->channels = (unsigned)strtoul(line + 9, NULL, 10);
        else if (!strncmp(line, "start_time=", 11)) {
            double v = strtod(line + 11, NULL);
            if (isfinite(v)) { if (format) m->media_start = v; else m->audio_start = v; }
        }
    }
    if (m->rate < 8000 || m->rate > 192000 || !m->channels || m->channels > 48) {
        fprintf(stderr, "Need an audio stream with 1-48 channels and a sample rate of 8000-192000 Hz.\n");
        return -1;
    }
    char *video[] = {"ffprobe", "-v", "error", "-select_streams", "V:0",
        "-show_entries", "stream=index", "-of", "csv=p=0", input, NULL};
    if (run(video, text, sizeof(text))) return -1;
    m->video = text[0] != '\0';
    return 0;
}
static char *absolute_output(const char *name) {
    if (*name == '/') return strdup(name);
    char *cwd = getcwd(NULL, 0), *p = NULL;
    if (cwd) { if (asprintf(&p, "%s/%s", cwd, name) < 0) p = NULL; free(cwd); }
    return p;
}
static char *default_output(const char *input, int video) {
    char *path = strdup(input);
    if (!path) return NULL;
    char *slash = strrchr(path, '/'), *dot = strrchr(path, '.');
    if (dot && (!slash || dot > slash + 1)) *dot = '\0';
    char *result = NULL;
    if (asprintf(&result, "%s.pitched.%s", path, video ? "mkv" : "wav") < 0) result = NULL;
    free(path); return result;
}

int main(int argc, char **argv) {
    double shifts[16]; int voices = 0, a17 = 0, formants = 0, audio_only = 0, force = 0;
    char *input_arg = NULL, *output_arg = NULL, *input = NULL, *output = NULL, *prompt = NULL;
    int result = 1, input_fd = -1, mixed_fd = -1;
    float *samples = MAP_FAILED, *mix = MAP_FAILED;
    size_t bytes = 0;
    for (int i = 1; i < argc; ++i) {
        char *a = argv[i], *end;
        if (!strcmp(a, "--help") || !strcmp(a, "-h")) { usage(stdout); return 0; }
        if (!strcmp(a, "--a17")) { a17 = 1; continue; }
        if (!strcmp(a, "--formants")) { formants = 1; continue; }
        if (!strcmp(a, "--audio-only")) { audio_only = 1; continue; }
        if (!strcmp(a, "--force")) { force = 1; continue; }
        if (!strcmp(a, "-i") || !strcmp(a, "--input")) {
            if (++i == argc || input_arg) goto bad_arguments;
            input_arg = argv[i]; continue;
        }
        if (!strcmp(a, "-o") || !strcmp(a, "--output")) {
            if (++i == argc || output_arg) goto bad_arguments;
            output_arg = argv[i]; continue;
        }
        if (!strcmp(a, "--engine")) {
            if (++i == argc) goto bad_arguments;
            if (!strcmp(argv[i], "a17")) a17 = 1;
            else if (!strcmp(argv[i], "elastique")) a17 = 0;
            else goto bad_arguments;
            continue;
        }
        if (!strcmp(a, "--")) {
            if (++i == argc || input_arg || i != argc - 1) goto bad_arguments;
            input_arg = argv[i]; break;
        }
        errno = 0;
        double value = strtod(a, &end);
        if (end != a && !*end) {
            if (errno || !isfinite(value) || value < -24 || value > 24 || voices == 16) goto bad_arguments;
            shifts[voices++] = value; continue;
        }
        if (*a == '-' || input_arg) goto bad_arguments;
        input_arg = a;
    }
    if (!voices || (a17 && formants)) goto bad_arguments;
    if (!input_arg) {
        size_t capacity = 0;
        fprintf(stderr, "Input audio/video path: ");
        ssize_t n = getline(&prompt, &capacity, stdin);
        if (n <= 0) { free(prompt); return 2; }
        while (n && (prompt[n - 1] == '\n' || prompt[n - 1] == '\r')) prompt[--n] = 0;
        input_arg = prompt;
    }
    input = realpath(input_arg, NULL);
    if (!input) { perror(input_arg); goto done; }
    struct stat original;
    if (stat(input, &original) || !S_ISREG(original.st_mode)) {
        fprintf(stderr, "Input must be a regular local audio or video file.\n"); goto done;
    }
    signal(SIGINT, stop); signal(SIGTERM, stop);
    atexit(cleanup);
    struct media_info media = {0};
    if (probe(input, &media)) goto done;
    output = output_arg ? absolute_output(output_arg) : default_output(input, media.video && !audio_only);
    if (!output) goto done;
    char *extension = strrchr(output, '.');
    int mkv = extension && !strcasecmp(extension, ".mkv");
    if (!mkv && (!extension || strcasecmp(extension, ".wav"))) {
        fprintf(stderr, "Choose .wav or .mkv: both preserve the full-gain float32 mix.\n"); goto done;
    }
    struct stat existing;
    if (!stat(output, &existing)) {
        if (existing.st_dev == original.st_dev && existing.st_ino == original.st_ino) {
            fprintf(stderr, "Output must differ from input.\n"); goto done;
        }
        if (!force) { fprintf(stderr, "Output exists; use --force to replace it: %s\n", output); goto done; }
    }
    if (engine_load()) { fprintf(stderr, "Could not initialize native DSP.\n"); goto done; }
    strcpy(scratch, "/tmp/elastique-XXXXXX");
    if (!mkdtemp(scratch)) { *scratch = 0; perror("mkdtemp"); goto done; }
    snprintf(decoded, sizeof(decoded), "%s/input.f32", scratch);
    snprintf(mixed, sizeof(mixed), "%s/mix.f32", scratch);
    char rate[24], channels[24];
    snprintf(rate, sizeof(rate), "%u", media.rate); snprintf(channels, sizeof(channels), "%u", media.channels);
    char *decode[] = {"ffmpeg", "-nostdin", "-v", "error", "-i", input, "-map", "0:a:0", "-vn",
        "-ar", rate, "-ac", channels, "-c:a", "pcm_f32le", "-f", "f32le", "-y", decoded, NULL};
    fprintf(stderr, "Decoding %s\n", input);
    if (run(decode, NULL, 0) || interrupted) goto done;
    input_fd = open(decoded, O_RDONLY);
    struct stat pcm;
    if (input_fd < 0 || fstat(input_fd, &pcm) || pcm.st_size <= 0 || (uint64_t)pcm.st_size > SIZE_MAX ||
        pcm.st_size % (media.channels * sizeof(float))) {
        fprintf(stderr, "No complete audio samples were decoded.\n"); goto done;
    }
    bytes = (size_t)pcm.st_size;
    size_t frames = bytes / (media.channels * sizeof(float));
    samples = mmap(NULL, bytes, PROT_READ, MAP_PRIVATE, input_fd, 0);
    mixed_fd = open(mixed, O_CREAT | O_EXCL | O_RDWR, 0600);
    if (mixed_fd < 0 || ftruncate(mixed_fd, (off_t)bytes)) { perror("mix storage"); goto done; }
    mix = mmap(NULL, bytes, PROT_READ | PROT_WRITE, MAP_SHARED, mixed_fd, 0);
    if (samples == MAP_FAILED || mix == MAP_FAILED) { perror("map audio"); goto done; }
    fprintf(stderr, "%u Hz, %u channels, %.3f seconds; %s\n", media.rate, media.channels,
            (double)frames / media.rate, a17 ? "original Sony A17" : "original Elastique Pro");
    for (int voice = 0; voice < voices && !interrupted; ++voice) {
        fprintf(stderr, "Voice %d/%d: %+.4g semitones, unity gain\n", voice + 1, voices, shifts[voice]);
        if (shifts[voice] == 0) {
            for (size_t j = 0; j < frames * media.channels; ++j) mix[j] += samples[j];
        } else {
            int err = a17 ? engine_add_a17(samples, mix, frames, media.channels, media.rate, shifts[voice], scratch)
                          : engine_add_pro(samples, mix, frames, media.channels, media.rate, shifts[voice], formants);
            if (err) goto done;
        }
    }
    if (interrupted) goto done;
    double peak = 0;
    for (size_t j = 0; j < frames * media.channels; ++j) {
        if (!isfinite(mix[j])) { fprintf(stderr, "DSP produced a non-finite sample.\n"); goto done; }
        if (fabs(mix[j]) > peak) peak = fabs(mix[j]);
    }
    fprintf(stderr, "Mix peak: %.6g; no attenuation applied.\n", peak);
    if (msync(mix, bytes, MS_SYNC)) { perror("write mix"); goto done; }
    if (asprintf(&pending_output, "%s.tmp-XXXXXX", output) < 0) { pending_output = NULL; goto done; }
    int output_fd = mkstemp(pending_output);
    if (output_fd < 0) { perror(output); goto done; }
    close(output_fd);
    char offset[64];
    snprintf(offset, sizeof(offset), "%.9f", media.audio_start - media.media_start);
    char *video_encode[] = {"ffmpeg", "-nostdin", "-v", "error", "-i", input,
        "-itsoffset", offset, "-f", "f32le", "-ar", rate, "-ac", channels, "-i", mixed,
        "-map", "0:V:0?", "-map", "1:a:0", "-map_metadata", "0", "-c:v", "copy",
        "-c:a", "pcm_f32le", audio_only ? "-vn" : "-dn", "-f", "matroska", "-y", pending_output, NULL};
    char *audio_encode[] = {"ffmpeg", "-nostdin", "-v", "error", "-f", "f32le", "-ar", rate,
        "-ac", channels, "-i", mixed, "-c:a", "pcm_f32le", "-rf64", "auto",
        "-f", "wav", "-y", pending_output, NULL};
    if (run(mkv ? video_encode : audio_encode, NULL, 0) || interrupted) goto done;
    if (force ? rename(pending_output, output) : link(pending_output, output)) { perror(output); goto done; }
    unlink(pending_output); free(pending_output); pending_output = NULL;
    printf("%s\n", output); result = 0;
done:
    if (samples != MAP_FAILED) munmap(samples, bytes);
    if (mix != MAP_FAILED) munmap(mix, bytes);
    if (input_fd >= 0) close(input_fd);
    if (mixed_fd >= 0) close(mixed_fd);
    engine_unload(); free(input); free(output); free(prompt);
    return interrupted ? 128 + interrupted : result;
bad_arguments:
    fprintf(stderr, "Invalid arguments. Shifts must be finite semitones from -24 to +24.\n");
    usage(stderr); return 2;
}
