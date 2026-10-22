# Trusted C plug-in API (version 1)

**Only put in code you trust!** Native code executes with the app UID and its granted Android
permissions, including network and app files. It has no root access. Worker separation and
execution deadlines help recover from mistakes, but do not sandbox malicious code. Importing a
plug-in, preset, or project does not authorize running it; approvals are private, local hashes
of the exact source, kind, and API version. Editing source invalidates that approval.

Paste either signature into the audio or video source editor:

```c
#include <lec_plugin.h>
void lec_audio(float *samples, int frames, int channels, int sample_rate,
               double time, const float controls[8], void *state) {
    for (int i = 0; i < frames * channels; ++i) samples[i] *= controls[0];
}
void lec_video(unsigned char *rgba, int width, int height, int stride,
               double time, const float controls[8], void *state) {
    for (int y = 0; y < height; ++y)
        for (int x = 0; x < width; ++x) rgba[y * stride + x * 4] = 255;
}
```

- Audio: interleaved float PCM, nominal range -1 to 1, clipped when returned to PCM16.
- Video: SDR RGBA8 with preserved alpha unless changed, bottom row first, stride in bytes.
  Readback and upload add CPU/GPU overhead; large video frames can be slow. HDR is unsupported.
- `time` is seconds, `controls[0]` through `[7]` are the eight editor sliders.
- `state` is 64 KiB of aligned, zeroed memory per instance. It persists across buffers/frames.
  Seeks or pipeline rebuilds may reset it. Optional `void lec_destroy(void *state)` can release
  allocations. Aborted/crashed workers are killed without invoking user cleanup.
- Loops, conditionals, pointers, helper functions, and allocation are supported. Minimal headers
  include stddef, stdarg, stdbool, stdint, limits, float, stdlib, string, math and stdio.
  libc/libm/libdl symbols are available; this is not a complete Android NDK header set.
- All compiler and user code executes in the private `:native_plugins` process. Frames use
  shared mapped buffers, not per-pixel Binder calls. An individual request has a deadline;
  a crash or timeout fails processing and the worker can restart on the next attempt.
- Native C cannot run during an online room, including previously approved source. The worker
  is stopped before connecting; incoming native source is rejected by wire validation.

## Rebuilding and size

Initialize `git submodule update --init --recursive`. TinyCC is pinned to
`e23dabed154a8495f3ac1ff3cc9d04fa1c207893`. Build with the standard Gradle commands in the root
README. CMake builds a small shared library from `libtcc.c` and the bridge files here; release
APKs strip native symbols, shrink app code/resources, and include only one ABI. Runtime headers
and helper C sources are copied into assets by `copyNativeCAssets`, avoiding an NDK/sysroot.

TinyCC is LGPL-2.1-or-later (see the submodule COPYING and the bundled asset). The complete
compiler source and bridge/build inputs are public in this repository and its pinned submodule.
To rebuild or modify the LGPL library, initialize the submodule, edit those sources, and run
`gradle :core-effects:externalNativeBuildRelease`; the resulting `liblec_native_c.so` can replace
the matching ABI library in an unpacked APK, which must then be repacked and signed for install.
