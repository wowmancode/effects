# Video FX decompilation handoff

This file is for the next AI working on the user's Vegas Pro video FX to Android GLSL ES 2.0 project. Read it before inventorying or porting effects. **Do not treat effect names or parameter labels as proof of Vegas pixel math.** The user no longer has Vegas Pro or reference renders, and accuracy matters to them.

## User's goal and requested protocol

The user supplied Vegas DLLs/OFX bundles and an `effects.7z` archive. They want **every individual video filter** identified, including multiple filters inside one binary, and each filter ported to its own standalone GLSL ES 1.00 fragment shader for private use in their Android editor. They asked for a complete filter list after analyzing all binaries. Audio FX, transitions, and source-independent generators should be listed separately with skip reasons. Keep audio work (for example split pitch) separate from the video shader inventory.

The original protocol was: inventory first as a numbered table (`#`, effect, source file, `.NET`/native/OFX, parameter count, analysis quality `FULL`/`PARTIAL`/`SCHEMA ONLY`), then port five effects per `NEXT`, with `#N`, `#N-M`, `FIX #N`, `SKIP #N`, and `BATCH SIZE = N` overrides. A batch starts `Done X of Y, this batch: #A-#B`. Each effect needs a parameter table, behavior specification, complete shader, `UNCERTAIN` list, and three-setting visual test plan. The user previously said `NEXT #31-25`, but **the numbering and inventory from that earlier exchange are not available in this checkout**; do not invent a mapping for those numbers. The user also explicitly requested HSL adjust, Height map, Pinch punch, Swirl, Glow, and Lab adjust. Determine which are actually present in source binaries and distinguish faithful ports from approximations.

### Strict target shader contract

- Start with `precision highp float;`; include `void main()` assigning `gl_FragColor`.
- Available inputs only: `sampler2D uTexSampler`, `varying vec2 vTexSamplingCoord`, `float uTime`, `float uWidth`, `float uHeight`, `float uControl1` through `uControl8`. Declare only inputs actually used. Never put any uniform name in a comment. No other uniforms, attributes, textures, version lines, or extensions. Maximum 48,000 characters.
- Sample via `texture2D`; clamp UV before sampling and final color to `[0,1]`. Preserve source alpha unless the effect changes it. Guard dimensions with `max(uWidth, 1.0)` and `max(uHeight, 1.0)`.
- Sliders run from `-2` to `2`. `uControl1` defaults to `1` and is clamped strength: `0` must reproduce the source, `1` must show the effect at Vegas defaults. `uControl2` to `uControl8` default to `0`, corresponding to Vegas parameter defaults. Use `exp2` for scale, `*0.5` for turns, `>0.5` for toggles. For more than seven effect parameters, expose the seven most used and bake the rest at measured Vegas defaults.
- GLSL ES 1.00 only: constant loop bounds, no dynamic array indexing, no bitwise operations, avoid `mat3` constructors (use `dot`). One effect per shader.
- If only parameter schema is known, mark the **whole shader UNCERTAIN**; never imply pixel accuracy. Where the input is missing, truncated, or obfuscated, identify exactly where. The requested target is max error ≤1 per 8-bit channel against a real Vegas render, but this cannot currently be measured because the user deleted the Vegas installation and cannot supply renders.

## Source material and access

The complete archive was uploaded as `sediment://file_00000000ab3881fd9efb24fb2fbb4169` (`effects.7z`, 14,901,559 bytes). It was downloaded to `/workspace/attachments/b5ac0b97-16e2-4168-8346-b1a7b9075c33/effects.7z` in this session. If absent later, use `download_file` with file ID `file_00000000ab3881fd9efb24fb2fbb4169`. **Its contents have not yet been listed or extracted.** This environment did not have `7z`, `bsdtar`, or Python `py7zr` when checked. Install a suitable archive reader or use another available tool, then inventory every nested file. Do not assume that the ten loose binaries below are the complete set.

Loose binaries are currently at these attachment directories (which may be session temporary):

| Directory under `/tmp/codex-remote-attachments/01a1364b-211c-71e7-91ca-fc95da382008/` | Files | Verified format |
| --- | --- | --- |
| `2b042e95-21ab-46f6-ba77-d9abd98f4287/` | `1-colorcorrector.dll`, `2-Filters.ofx`, `3-PluginWrapper.dll`, `4-sfpagepeel.dll`, `5-sftrans1.dll` | All PE32 x86 native-format binaries by `file`; `Filters.ofx` is a PE32 OFX binary. Managed/.NET status has **not** been verified. |
| `6ab53300-70bc-4e98-aae8-0758273bc6c5/` | `1-xpvinyl_x64.dll`, `2-sfxpfx2_x64.dll`, `3-sfxpfx3_x64.dll`, `4-sftrkfx1_x64.dll`, `5-sfxpfx1_x64.dll` | All PE32+ x86-64 binaries by `file`; these were supplied for a separate audio request and must be classified by plugin content. |

The first five files were also uploaded under an earlier attachment directory ending `d22b8a0c-8b0d-4272-a7b5-e29b1f894176/` with the same names, but their hashes have not been compared. Prefer the comprehensive archive once listed. The user mentioned `https://github.com/wowmancode/fx` as another place to run decompilation, but its contents have not been verified in this handoff.

**Do not commit proprietary Vegas binaries, disassembly, or large extracted artifacts to the public `wowmancode/effects` repository.** Keep a local working inventory and commit only original documentation, shaders, and app code as appropriate. The current repository is `/workspace/effects_app`, remote `https://github.com/wowmancode/effects.git`, branch `agent/add-project-prompt`.

## What is verified and what is not

- No complete video FX inventory or source-to-effect mapping is in this repository. No loose Vegas effect shader files are here. Existing Android effects are original implementations, **not verified pixel-accurate Vegas recreations**. Examples are in `core-effects/src/main/java/dev/lec/effectapp/effects/SpatialEffects.kt`, `LightingEffects.kt`, `LabEffects.kt`, and `ColorMappingEffects.kt`.
- The user specifically wants accurate recreations and cannot provide Vegas output references. A decompiler can reveal code, defaults, and parameter schemas, but precision to one 8-bit level remains unproven without a reference oracle. Distinguish fully recovered math from standard-math estimates.
- The existing app's effects use Media3 GL shader programs, not the requested standalone `uTexSampler`/`uControl1..8` host format. Ported Vegas shaders need their own files and explicit contract checks; do not assume the app's built-in shaders match that host interface.
- The last audio request concerned Vegas clip Properties `a17 drums` pitch and élastique-like split pitch modes. The repo already has original, a17, and élastique approximation modes with portable C DSP; these are **approximations**, not recovered proprietary algorithms. Preserve that separation.

## Recommended next steps for the video FX task

1. List and extract `effects.7z` into a **local, untracked** directory. Record each path, file type, architecture, SHA-256, and whether binaries are duplicates or plugin wrappers. Do not infer effect counts from filenames.
2. Enumerate exports, OFX descriptors, resource strings, class metadata, and registration tables before deep decompilation. Search with `rg` and use suitable PE/.NET/OFX tooling. Identify all effects contained in each module, parameters, types, ranges/defaults, and video/audio/transition/generator status. Record evidence locations (binary + symbol/RVA/resource ID).
3. Decompile or disassemble the render path per effect. Trace stage order, color-space conversions, coordinate origin, interpolation, edge handling, alpha, quantization, and version-dependent behavior. Label evidence `FULL`, `PARTIAL`, or `SCHEMA ONLY` at the **effect** level.
4. Publish the **complete numbered inventory** to the user before resuming numbered batches. Include skipped items and reasons. Because previous numbering is unavailable, ask only if the user needs old numbers preserved; otherwise establish one stable list and keep it in a committed inventory document.
5. Write one standalone GLSL ES 1.00 file per requested effect. Run a static rule checker for declarations, forbidden inputs, comment names, compile limits, and a GL ES compile check where possible. Use diagnostic images (gray ramp, color bars, checkerboard) and state clearly that Vegas error measurement is unavailable.

## Current app work at this handoff

The latest separate user request was to add export codec/bitrate controls and make a Gradient Map point open a color picker immediately. There are **uncommitted edits** in `app/src/main/java/dev/lec/effectapp/ExportScreen.kt`, `GradientMapEditor.kt`, `HsvColorPicker.kt`, and `core-pipeline/src/main/java/dev/lec/effectapp/pipeline/ProjectExporter.kt`. They add H.264/H.265 selection, a 1–50 Mb/s requested bitrate slider applied through Media3 `DefaultEncoderFactory`, reported output codec/bitrate, and a color dialog opened by tapping a gradient point or swatch. These edits have not yet passed GitHub Actions. Finish reviewing them, commit, push to `agent/add-project-prompt`, and check CI. This app task does not replace the video FX decompilation task.

The repository currently has no local Gradle or Android SDK installed; GitHub Actions has been the build gate. The last known commit before these edits is `c438e31` (`Fix Android SDK setup package selection`). Use `git status` before making changes; this handoff document itself is also new until committed.
