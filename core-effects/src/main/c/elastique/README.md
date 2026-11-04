# Native Linux pitch shifting: ARM64 source reconstruction

This program reconstructs the Vegas Pro 12 **élastique Pro** pitch shifter and **Sony A17: Drums, unpitched (minimum echo)** preset. It accepts audio or video, keeps the decoded audio duration, and mixes up to 16 pitch-shifted voices at full gain.

All DSP calculations compile to native ARM64 C code. QEMU, Wine, an x86 CPU, and Windows DLLs are not required to build or run this package. FFmpeg and FFprobe handle file decoding and encoding.

## Build on ARM64 Linux

Requirements: 64-bit little-endian Linux, GCC or Clang with `__int128` support, GNU Make, FFmpeg and FFprobe. Python 3 is used only for integration tests.

On Debian/Ubuntu ARM64:

```sh
sudo apt install build-essential ffmpeg python3
make -j2
./elastique -5 input.wav
```

The generated DSP source is large; allow several minutes to compile. `-j2` limits compiler memory use on small ARM machines. No source generation or original DLL is needed for the normal build.

To cross-compile from another Linux architecture using an AArch64 GCC toolchain:

```sh
make -j2 CC=aarch64-linux-gnu-gcc BUILD=build-arm64 TARGET=elastique-arm64
```

Or with Zig:

```sh
make -j2 CC='zig cc -target aarch64-linux-musl' \
  BUILD=build-arm64 TARGET=elastique-arm64 LDFLAGS='-static -s'
```

Cross-compilation does not execute the output or require QEMU. To test the resulting executable, run it on ARM64 hardware.

## Use

```sh
# élastique Pro, down five semitones
./elastique -5 input.mp4

# Two independent voices, each at full gain
./elastique -6 8 input.wav -o harmony.wav

# A17 Drums, minimum echo
./elastique --a17 -6 8 input.wav -o drums.wav

# élastique with formant preservation
./elastique --formants -5 input.wav

# Audio-only output from a video
./elastique --audio-only -5 input.mp4 -o processed.wav

# Prompt for the input path
./elastique -6 8
```

Shifts are semitones, including decimals, from **−24 to +24**. élastique is the default; `--engine elastique` and `--engine a17` select it explicitly. A17 supports mono/stereo; the élastique frontend accepts up to 48 channels. Accepted sample rates are 8–192 kHz. See `./elastique --help`.

Output goes **beside the input** by default: `song.wav` produces `song.pitched.wav`, and `movie.mp4` produces `movie.pitched.mkv`. The program prints the full output path when finished. `-o PATH` selects another location. WAV and MKV use float32 PCM; MKV preserves the first video stream without re-encoding. The first audio stream is processed. Existing files require `--force`; the input cannot be overwritten.

Voices are summed as `voice1 + voice2 + ...` with no averaging, normalization, or limiter. Peaks above ±1 are retained in the float output. Playback devices and later integer/compressed conversions may clip those peaks.

## How the reconstruction works

`a17.c` is a handwritten C reconstruction of A17's float32 time-stretch worker. It restores duration after pitch-changing resampling and reproduces the minimum-echo preset, including original rounding and overlap behavior.

élastique Pro and Sony's resampler are **low-level statically translated C** under `generated/`. A source-generation tool lowered the original x86 basic blocks to C calculations. The build compiles those calculations into native code for the selected architecture. The source retains register-like state slots, original address labels, and a compiled-block dispatcher; it is a large mechanical reconstruction, rather than recovered high-level DSP source with meaningful original variable names.

`generated/data_image.bin` retains the original memory layout, constants, tables and RTTI. It also contains unused original instruction bytes. The runtime copies this image into **read/write, non-executable memory** at `0x180000000`. It never calls into that image. A table dispatches to compiled C functions, without decoding x86 instructions, generating machine code at runtime, or executing the DLL entry point. Missing translated paths fail explicitly.

The image is embedded in the executable, so runtime does not need the `.bin` file or the original DLL. All remaining source and build inputs are included here. The process reserves the original data address range without replacing existing mappings. DSP instances run sequentially; the adapter is not a general-purpose, thread-safe DSP library.

## Accuracy and validation

See [VALIDATION.md](VALIDATION.md) for reference comparisons and tested coverage. The complete CLI passed 23 integration cases on x86-64 using the reconstructed C. A17's handwritten stage passed original-worker comparisons with bit-identical samples and buffer counts. The full program was cross-compiled to a static AArch64 Linux executable. **Execution on ARM64 hardware has not been tested here.**

élastique is not claimed to be bit-identical: reciprocal/reciprocal-square-root approximations and platform `libm` can produce small numerical differences. Validation compares against the earlier Linux adaptation of the supplied original DSP, rather than a complete Vegas render. Host framing and imported math may differ from a particular Vegas installation.

To test on the machine where the executable runs:

```sh
make test-a17  # 24 reference-vector cases; no Python or original binary needed
make test     # also runs CLI tests; requires Python 3, ffmpeg, ffprobe
```

For a cross-build, run the built executable and reference-vector test on actual target hardware instead of invoking `make test` on the build host.

## Source provenance and regeneration

The analyzed input was the supplied `vegas120k.dll`, SHA-256:

```text
db915924aa4c6e5c403d17d7d434d1148b03a2a4cd5c0f9654ae4d620169e044
```

The optional source generator requires Python packages `pypcode` and `capstone` and that exact DLL:

```sh
python3 -m pip install -r tools/requirements.txt
python3 tools/static_lift.py /path/to/vegas120k.dll generated
```

The generator reads the DLL as data and verifies its hash. Existing support files in `generated/` remain part of the source. The data layout and translated routines derive from the supplied proprietary program; reconstruction does not grant a new license to the original DSP.

## Changes for effect-app

This package is used by the split-pitch harmonizer's Methods 2 and 3 (see [../README.md](../README.md)). The DSP sources are as supplied, except for three support files (their `MANIFEST.sha256` entries are updated):

- `generated/lift_host.c`: with `LIFT_TRAP` defined (the Android library), unsupported operations, missing blocks and the block limit call `lift_library_trap()` instead of `exit()`, so the app can recover. A direct-mapped cache in front of the block table's binary search.
- `generated/lift_adapters.c`: its `unsupported()` uses the same hook.
- `generated/lift_runtime.h`: the register and memory accessors are forced inline.

The output is unchanged; the cache and inlining make élastique about four times faster (measured with the CLI on x86-64, `-O1`).
