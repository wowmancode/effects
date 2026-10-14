# Split-pitch C implementation

`split_pitch_modes.c` is a portable PCM16, streaming C implementation of the three selectable split-pitch profiles. Each call keeps the same number of audio frames. All modes use the same semitone and level values for every voice; changing modes only changes grain length and transient handling.

| Mode | Grain window | Transient reset |
|---|---:|---|
| Original | 20 ms | off |
| Elastique | 60 ms | on |
| a17 drums | 12 ms | on |

The Android app loads this C processor through JNI for Elastique and a17 drums. Original retains the existing Kotlin path; the Kotlin implementation also serves as a fallback if the native library cannot load. The latter two profiles are original approximations. They are not zplane élastique code or a recovered Vegas a17 drum preset: the supplied DLLs do not contain those implementations or a17 clip property values.

Host verification:

```sh
gcc -std=c11 -O2 -Wall -Wextra -Werror \
  -Icore-effects/src/main/c \
  core-effects/src/main/c/split_pitch_modes.c \
  core-effects/src/test/c/split_pitch_modes_test.c \
  -lm -o /tmp/split_pitch_modes_test
/tmp/split_pitch_modes_test
```
