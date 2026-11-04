# Split-pitch C implementation

`split_pitch_modes.c` is the PCM16 streaming split-pitch processor the Android app loads through JNI. Each call keeps the same number of audio frames, and every method uses the same semitone and level values for each voice.

| Method | Implementation |
|---|---|
| Original | 20 ms grain pitch shifter (the app uses the Kotlin version) |
| Method 2 | Reconstructed élastique Pro pitch shifter, through `reconstructed_pitch.c` |
| Method 3 | Reconstructed Sony A17 "Drums, unpitched (minimum echo)" preset: Sony resampler, then the A17 duration-restoring stretch, through `reconstructed_pitch.c` |

Methods 2 and 3 clamp voices to ±24 semitones. Method 3 is mono/stereo only; with more channels the app plays Original.

## The reconstruction

`elastique/` is the ARM64 source reconstruction of the two DSP engines (see [elastique/README.md](elastique/README.md) and [elastique/VALIDATION.md](elastique/VALIDATION.md)). élastique Pro and the Sony resampler are low-level statically translated C (`elastique/generated/`) driven through a compiled-block dispatcher over the original data image, which is embedded read-only and copied at run time to read/write, non-executable memory at `0x180000000`. The A17 stretch is handwritten C (`elastique/a17.c`). No original code is executed and nothing is generated at run time.

It needs 64-bit pointers, so CMake builds it only for `arm64-v8a` and `x86_64`. On 32-bit ABIs `reconstructed_pitch.c` compiles to stubs and the app shows Methods 2 and 3 as unavailable (they play as Original). It is also unavailable if the fixed address range is already taken. Translated paths that are missing or unsupported unwind back to the wrapper (they used to `exit()` the process); the voice then goes silent instead of crashing the app.

The engines have a single register context, so every call is serialized by one lock. Preview and export can run at the same time; they take turns.

## Streaming

The original program renders whole files. `reconstructed_pitch.c` turns both engines into streams whose output frame *n* is the shifted input frame *n − latency*:

- **Method 2** drives the engine exactly as the offline program does (256-frame blocks, alternating stretch values that keep the input position from drifting), pulling input as it arrives. The engine asks for its whole look-ahead with the first block and never needs more afterwards, so that request is the stream's latency: about 120–300 ms depending on the pitch (more at low sample rates). The stream's samples are bit-identical to the offline program's.
- **Method 3**'s resampler is causal and forgets its start-up state within about 100 frames, so it runs on chunks of P = 1024 input frames (2048 at up to 96 kHz, 4096 above) with the previous chunk as warm-up, at the fixed ratio P / round(P / pitch ratio). Its last ceil(Q/P) output frames per call are edge cases, so each chunk keeps its frames shifted back by that many. The minimum-echo preset never searches, so each grain depends only on the first hop + overlap frames of its window: the grain loop is `a17_process()` with each grain started once those frames exist, instead of once the whole 100 ms window is buffered. When the offline program happens to use the same ratio (±12, +24 semitones, …) the stream is bit-identical to it after its first ~150 frames (which the offline resampler starts from an edge case). Latency is about 30–135 ms.

A split-pitch segment sets every voice to the largest voice latency and delays the dry signal by the same amount. `split_pitch_latency()` reports it.

The **export** processor (`SegmentedDspProcessor`) removes that latency: it drops the first *latency* frames of native output, holds the matching input back, and at the end of the stream pushes silence through to release the tail. Exported audio is aligned with its picture. The **live preview** cannot look ahead, so there the voices and dry signal are heard *latency* + 256 frames late.

élastique is expensive: the optimized build renders one voice at roughly 8× real time on a desktop core; a phone core is slower. Many Method 2 voices can stutter in the live preview; export just takes longer.

## Host verification

```sh
C=core-effects/src/main/c
make -C $C/elastique -j2 test-a17 build/image.o \
  $(cd $C/elastique && ls generated/blocks_*.c | sed 's#generated/\(.*\)\.c#build/\1.o#')
gcc -std=c11 -O2 -ffp-contract=off -fno-fast-math -w -I$C -c $C/reconstructed_pitch.c -o /tmp/rp.o
gcc -std=c11 -O2 -ffp-contract=off -I$C -c $C/elastique/a17.c -o /tmp/a17.o
gcc -std=c11 -O2 -ffp-contract=off -Wall -Wextra -Werror -I$C \
  $C/split_pitch_modes.c core-effects/src/test/c/split_pitch_modes_test.c \
  /tmp/rp.o /tmp/a17.o $C/elastique/build/blocks_*.o $C/elastique/build/image.o \
  -lm -lpthread -o /tmp/split_pitch_modes_test && /tmp/split_pitch_modes_test
```

The test checks that each method's single voice is the reconstructed stream quantized to PCM16, that the dry signal is delayed by exactly the reported latency, stereo and six-channel handling, and (with `-DRECON_PITCH_DISABLED`) the 32-bit fallback. `SplitPitchMethodsTest` (instrumented, run on the x86_64 emulator in CI) checks that export output is the same length as its input and aligned with it.
