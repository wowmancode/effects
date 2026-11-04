# Validation

Validation date: 2026-11-04. Original reference: the supplied Vegas Pro 12 `vegas120k.dll`, SHA-256 `db915924aa4c6e5c403d17d7d434d1148b03a2a4cd5c0f9654ae4d620169e044`.

## Complete reconstructed C program

The program passed **23 integration cases** on x86-64 Linux, with FFmpeg/FFprobe:

- Both élastique and A17: −6 and +8 semitones, exact decoded duration, measured pitch region.
- Independent voices sum at unity gain; the output matches the sum of separate runs.
- Two zero-shift voices preserve peaks above full scale, with no attenuation or clipping.
- Stereo, input-path prompt, 44.1 kHz, −24/+24 semitone extremes, very short input.
- élastique formant preservation.
- Video bitstream preservation, audio frame count, literal shell-metacharacter paths.
- Argument validation, existing-output protection and explicit replacement.

The test is `tests/test_cli.py` and uses only the Python standard library plus FFmpeg/FFprobe.

## Whole-pipeline audio comparison

`tests/compare_reference.py` compared the reconstructed C executable with the earlier x86 Linux adaptation that runs the original DSP instructions. Both use the same offline host pipeline. Test input combines harmonics, chirps, decaying drum-like transients, and deterministic noise; duration is 1.25 seconds per case. These are numerical comparisons, not a perceptual listening study or a comparison with a complete Vegas render.

Normalized RMS means `sqrt(sum((candidate-reference)^2) / sum(reference^2))`. Maximum absolute differences use float sample units, where 1 is full scale.

| Case | Rate / channels | Normalized RMS | Max absolute difference |
|---|---|---:|---:|
| élastique −5 | 48 kHz / mono | 2.4272e−6 | 8.9407e−7 |
| élastique +8 | 48 kHz / stereo | 1.3792e−6 | 6.9151e−7 |
| élastique −5, formants | 48 kHz / stereo | 1.6326e−6 | 8.1211e−7 |
| élastique −24 | 44.1 kHz / mono | 1.1329e−6 | 3.8743e−7 |
| élastique +24 | 44.1 kHz / mono | 6.8816e−6 | 2.4214e−6 |
| élastique −6 | 22.05 kHz / 6 channels | 1.4501e−6 | 7.4506e−7 |
| A17 −5 | 48 kHz / stereo | 0, bit-identical | 0 |
| A17 +8 | 48 kHz / stereo | 0, bit-identical | 0 |
| A17 −24 | 44.1 kHz / mono | 0, bit-identical | 0 |
| A17 +24 | 44.1 kHz / mono | 0, bit-identical | 0 |

Raw results are included in `tests/reference-results.json`. The largest normalized RMS difference observed for élastique was approximately **0.000688%**. This does not establish a bound for arbitrary material, long renders or other architectures.

## Handwritten A17 stretch stage

Direct comparisons with the original worker passed **164 cases**, **3,340,888 output frames**, and **19,576 processing calls**, with bit-identical samples and matching buffer counts. Coverage included mono/stereo, 8/22.05/44.1/48/96 kHz, multiple stretch ratios and search fractions, tiny inputs, and irregular chunk sizes.

The bundled standalone golden test checks **24 cases, 656 calls, and 172,914 sample values** exactly, without loading any original executable. Run `make test-a17` on the target machine.

## ARM64

All program sources were cross-compiled with Zig's Clang frontend for `aarch64-linux-musl`, with no runtime emulation. ARM64 hardware was unavailable; **the executable has not been run on ARM64**. The x86-64 C results above must not be presented as measured ARM64 numerical results. Target `libm` and compiler differences may alter rounding.

Both native and cross builds disable floating-point contraction and fast math. Reciprocal and reciprocal-square-root SIMD approximations were reconstructed with full-precision scalar calculations, so élastique does not promise bit-identical output. Unsupported operations or missing translated blocks terminate with a diagnostic instead of executing original instruction bytes.
