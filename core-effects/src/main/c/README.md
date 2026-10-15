# Split-pitch C implementation

`split_pitch_modes.c` is a portable PCM16, streaming C implementation of the two selectable split-pitch methods. Each call keeps the same number of audio frames. Both methods use the same semitone and level values for every voice.

| Method | Implementation |
|---|---|
| Original | 20 ms grain pitch shifter (the app uses the Kotlin version) |
| Drums unpitched | `expressfx_drums.c`: 30 ms WSOLA stretch blocks emitted half a block at a time, 3 ms fades, 5 ms two-sample-step search, then linear resampling |

`expressfx_drums.c` contains the offline `expressfx_drums_stretch` / `expressfx_drums_pitch` functions and a streaming form, `expressfx_drums_stream_*`, that the harmonizer uses. The stream renders the same samples as the offline pitch function, delayed by a fixed latency (hop + fade + 2 × search + 8 frames, about 28 ms); the dry signal goes through a 0-semitone stream so it stays aligned with the voices. Voice pitches clamp to ±24 semitones, the offline function's range.

The Android app loads this C processor through JNI for Drums unpitched. Original keeps the existing Kotlin path. If the native library cannot load, `DrumsUnpitched.kt` is a line-for-line Kotlin port that renders identical samples (the library is built with `-ffp-contract=off` so the compiler cannot fuse multiply-adds and change rounding).

Host verification:

```sh
for t in split_pitch_modes expressfx_drums; do
  gcc -std=c11 -O2 -Wall -Wextra -Werror \
    -Icore-effects/src/main/c \
    core-effects/src/main/c/split_pitch_modes.c \
    core-effects/src/main/c/expressfx_drums.c \
    core-effects/src/test/c/${t}_test.c \
    -lm -o /tmp/${t}_test && /tmp/${t}_test
done
```

`expressfx_drums_test` checks the stream against the offline function sample for sample.
