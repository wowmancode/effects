# HANDOFF: open layered desktop-editor projects (.veg) in effect-app

Status: **implemented, not yet compiled on CI.** All code below is in the working tree of branch
`agent/veg-import-handoff` (uncommitted). The pure-Kotlin reader and importer compile locally with
`kotlinc` and pass `core-model/src/test/.../veg/VegImporterTest.kt` (6 tests). On the test project
they give 85 clips over 13.09 s with lanes for every layer. Android code (effect, pipeline, app) has
only been reviewed by eye: push and read CI next.

Files added: `core-model/.../model/veg/{VegReader,VegImporter,LayerShaders}.kt`,
`core-effects/.../FramePlacementEffect.kt`, `app/.../ProjectOpener.kt`, and the test.
Files changed: `ProjectModels.kt` (Clip.speed; Overlay sourceStartMs/speed/audioOnly/lane/fillFrame;
`relinkSource`), `ProjectCompositionFactory.kt` (lanes, speed, sound-only, fill frame),
`ProjectExporter.kt` (speed-aware trimming), `EditorViewModel.kt` (loadProject, relinkMedia,
missingMedia/openNotes), `EditorScreen.kt` (open any file, Find media dialog, preview speed),
`PreviewOverlays.kt` (players per lane, in-point/speed, placed images, sound-only), registry and
CHANGELOG.

Original status: research done, no app code written yet. Nothing committed or pushed.

## Goal (from the owner)

- effect-app itself should open `.veg` project files (Vegas Pro) and play or export them.
- No MacroDroid macro and no separate converter. Everything goes into the app.
- **Do not mention Vegas or VEG anywhere in the UI.** The app should just accept the file.
  Internal code names can say `veg`.
- Add whatever the app is missing to hold such a project: layers, audio-only media,
  overlay in-points, and speed.

## Inputs we have (in the session uploads, not in the repo)

- `Veg_Replace(second zone)…vegas pro 10 18.veg` (499 KB): the test project, a Japanese
  Vegas Pro 10 project. It is a "veg replace" template: 640×360, 25 fps, 165 BPM,
  13.1 s long, 9 audio tracks, 18 video tracks and about 500 events.
- `veg2ffmpeg.py`: the owner's earlier Python port. It imports `vegfx.py`, which holds the
  real parser and **is missing**. We asked the owner for it; if it turns up, compare its
  offsets with the ones below. The useful semantics it confirms:
  - The source in-point is `stored_offset * rate`.
  - The first track in the file is in front.
  - A clip on a track is cut off where the next clip on that track starts.
  - A Pan/Crop window is fitted into the frame keeping its shape, then Track Motion
    scales and moves it.
  - In Track Motion the frame is 2·aspect wide and 2 high, Y points up, and the default
    w is the aspect and h is 1.
  - Compositing code 1 is a guess at Add and code 2 at Subtract. Code 0 (normal) is the
    only certain one. A compositing plug-in on a generator layer means "hide" that layer.
- `Vegas_FX_to_effect-app_preset.mdr`: a MacroDroid macro. Its `conv_code` local variable
  holds a large JS table of GLSL recreations of Vegas FX with control mappings: border,
  convolution, deform, glow, HSL, LAB, light rays, mirror, pinch/punch, radial blur,
  spherize, starburst, swirl, unsharp, TV simulator and wave. It has been extracted to
  `/tmp/claude-0/-home-claude/da827ed4-3783-51e6-b3d5-6c845e39c01d/scratchpad/mdr/conv_code.js`.
  Reuse those shaders for the `plugin_video` segments.
- `tved.c`: the owner's ffmpeg text editor. Not a .veg reader and not needed.
- `effect-project.json`: a sample effect-app project showing the JSON shape.

Python probe scripts for the format are in `/home/claude/work/`:
`walk.py` (chunk tree), `ev.py` (events), `pc.py` (Pan/Crop), `hx.py` (hexdump).
Run them from that folder.

## The .veg format (decoded from the test file)

All integers are little-endian. **Time is in 100 ns ticks** (divide by 1e7 to get seconds).
The file uses Sony Wave64-style chunks: a 16-byte GUID, then a u64 size that includes the
24-byte header, then the payload. Chunks are padded to 8 bytes. The two GUIDs
`66666972-912e-11cf-a5d6-28db04c10000` ("riff") and `7473696c-912f-11cf-a5d6-28db04c10000`
("list") are containers: a 16-byte type GUID follows the header, then child chunks.

### Top level (RIFF type `46c429ef-904a-11d2-8722-00c04f8edb8a`)

- `b28f2d5a-…`: the project header. Sample rate is a u32 at +12 (44100); the bpm is a
  double at +24 (165). Paths follow. Near +544 are W/H u32s (640, 360) and the fps
  double (25.0). Confirm these offsets on a second file.
- `LIST b28f2d5b-…`: the media pool. Each `b28f2d5d-…` child is one media entry:
  - u32 at +60 is the **media id**.
  - A UTF-16 null-terminated path at +96.
  - A generator's path looks like `META:\Video Generator\{CLSID} (n)[preset]`.
  - Generator data is a **plug-in record** (format below), found by searching for the
    generator CLSID bytes.
- `LIST 4d6c0747-…`: the tracks. Each `LIST 4d6c0748-…` is one track, in file order with
  the **first one in front**. Its children:
  - `4d6c0749-…` is the track header. u32 at +12 is the kind (2 = audio, 3 = video) and
    u32 at +28 is the track id.
  - `LIST 4d6c0749-…` holds the events. Each `LIST 4d6c074a-…` is one event (below).
  - Audio tracks have `LIST f79298f4` (track FX: EQ, compressor, gate, reverb), which we
    ignore, and `LIST 84701b5d`.
  - Video tracks have `LIST 69d46c28` (compositing): byte +120 is the mode code
    (0, 1 or 2). +124 is 4 normally, 1 on some tracks, or 0xFFFFFFFF followed by a
    16-byte compositing plug-in GUID.
  - Video tracks have `LIST d24df987` (Track Motion), whose child is `cd6915d8-…`:
    - Header: u32 36, u32 flags, u32 ?, then the aspect double at +20 and u32 keyframe
      count n at +36.
    - n records start at +40, each with its size as a u32 (220).
    - In a record: time is an i64 at +4, and doubles at +48 = x, +56 = y, +80 = w,
      +88 = h. A negative w or h means flipped.

### Event: `LIST 4d6c074a-…`

- `168d206a-…` is the event header:
  - u32 at +8: 2 = audio, 3 = video.
  - i64 at +16: start. i64 at +24: length.
  - **double at +40: playback rate.**
  - u32 at +4: flags (meaning unknown).
- `168d206d-…` is the take:
  - i64 at +16: stored offset. Real source position = offset × rate.
  - u32 at +36: **media id**.
  - UTF-16 take name at +42.
- `LIST b66a95ce-…` is the audio event FX:
  - Plug-in CLSID at +102. **Pitch Shift** is `ed1b4100-93be-11d0-aebc-00a0c9053912`.
  - **Pitch ratio as a double at +206**; semitones = 12·log2(ratio). The test file goes
    as low as −35 st and up to +12.
  - The name is localized ("ピッチ シフト"), so match on the CLSID.
  - Graphic EQ is `8b7226ee-4584-11d1-b4cb-00a0c9270a10` (ignore).
- `LIST 1af0e4e4-…` is the video event FX chain. Each `1af0e4e6-…` child is one plug-in
  record starting at data +24.
- `884bacff-74eb-…` is Pan/Crop. It is a classic RIFF with 4-character tags:
  `LIST EPCP → EPCS, KFRS, LIST POSL → POSK…, LIST MSKL (masks, ignore)`.
  - The last two u32s of EPCS are the coordinate frame (848×480 for video,
    640×360 for generators).
  - In each POSK: time is an i64 at +0, then from +20: doubles
    `w, h, cx, cy, rot(rad), …` in coordinate-frame pixels, Y down.
- `LIST fc2b3bce` (video) and `LIST d54ad82a` (audio) look like fades. They are constant
  in this file, so they are not decoded.

### Plug-in record (shared by FX and generators)

The record is a 56-byte header followed by the name and parameters:

- u32 56.
- 16-byte CLSID (call its position c).
- u32 paramBytes at c+16.
- u32 nameLen at c+48.
- UTF-16 preset name at c+52.
- `paramBytes/8` doubles (FX) or floats (generators).
- Then keyframes: a 28-byte header, then the same parameter block again.

Known CLSIDs:

| CLSID | What it is | Parameters |
| --- | --- | --- |
| `e87674d5-e8f2-11d1-9aa9-00a0c99b12c5` | Black and White | [amount] |
| `b892d510-9487-4022-b261-738123b55e47` | TV Simulator | [detailZoom 1..4, aperture, interlace, lineSync, vertSync, scanPhase, phosphor, static] |
| `d9dd0dfc-274f-45a7-b874-3d2bcfa61fe9` | Solid Color generator | RGBA floats |
| `2ccda29d-fbd5-4e5d-aa1b-b82ea7fbed51` | Noise Texture generator | |
| `0fe8789d-0c47-442a-afb0-0daf97669317` | Text generator | RTF in the media chunk (`{\rtf1…\fs56 Thekantapapa.VEG\par}`) |

The TV Simulator order matches `vegas_tv_simulator.glsl` in the macro. For the shader,
use `c4 = 1 − lineSync` and `c5 = 1 − vertSync`, and map detail zoom 1..4 to
`c1 = 1 + (z − 1)/3`.

### What the test project does

- 0.09–1.45 s: an intro of three stacked copies of the video with a Pan/Crop zoom and a −5° rotation.
- 1.45–7.27 s: two layered chopped tracks with speeds of 1.25 and 2.5.
- 6.9–7.27 s: scrolling text and a black solid.
- 7.27–13.09 s: a **4-column split screen**: four tracks of strips at Track Motion
  x = ±1.333 and ±0.444, played at rates 0.33–0.89. Black letterbox bars, Add-mode colour
  strips with TV Simulator, and Noise layers with compositing plug-ins sit on top.
- Audio: Second ZONE.mp3 runs 0–7 s. Then "Video you have---" audio is chopped on four
  tracks with Pitch Shift per event (the melody), and a synth .wav runs on four tracks
  with Pitch Shift.

## What effect-app can and can't do today (branch `agent/add-project-prompt`)

- The model is `EditProject.clips` (one sequential row) and per-clip `overlays`
  (image or video, uniform scale, offset, alpha, keyframes, effects).
- Overlays **always start at source 0**. `Overlay.sourceOffsetMs` is `@Transient` and
  only used for export trimming.
- There is **no speed** on clips or overlays, and **no audio-only media**.
- **Export makes one Media3 sequence per overlay** (`videoOverlayTracks` in
  `ProjectCompositionFactory`), so hundreds of overlays would need hundreds of decoders.
  Media3's `DefaultVideoCompositor` draws the **first input on top** and only does alpha
  blending (no Add or Subtract).
- Preview: `PreviewOverlays.kt` makes one ExoPlayer per overlay, keyed by `overlay.id`.
  The main player is a playlist of clipped `MediaSource`s with position math that assumes
  speed 1 (`EditorScreen.kt`: the polling loop near line 409, the `localTimeMs` lambda near
  line 612, `seekPreview`, `seekGlobal`).
- `replaceClipMedia` → `Clip.withReplacedMedia` **resets trims**.
  `canReadMedia` treats an unknown scheme as missing.
- The app has no storage permission, so media must be picked through SAF.
- **There is no local Android build** (Google Maven and Gradle are blocked). The repo is
  attached with push access, so verify by pushing a *new* branch and reading CI with
  `gh run list` / `gh run view --log-failed`. CI runs `assembleDebug lint test`.
  `kotlinc` 2.1.21 is unpacked at `/home/claude/tools/kotlinc` for compiling pure-Kotlin
  parser code locally (there is no kotlinx-serialization runtime, so strip the
  annotations in a temp copy). The Media3 1.10.1 source is in `/home/claude/tools/media3`.
- Media3 1.10.1 confirmed:
  - `EditedMediaItem.Builder.setSpeed(SpeedProvider)` exists.
  - `addGap` works anywhere in a sequence.
  - The overlay display size is (overlay px / background px) × `setScale(x, y)`.

## Agreed design (not yet implemented)

1. **Model (`core-model/ProjectModels.kt`)**
   - Add `Clip.speed = 1f`. Keep `trimEndMs − trimStartMs` as the *timeline* duration;
     the source read is `trimStartMs + t·speed`. This keeps integer timeline ms exact with
     no drift. Add a `sourceEndMs` helper.
   - Add to `Overlay`:
     - `sourceStartMs = 0` (persisted in-point).
     - `speed = 1f`.
     - `audioOnly = false`.
     - `lane = -1` (≥ 0 pools into one export sequence; lane 0 is the top).
     - `fillFrame = false` (stretch to the output frame; placement is done by an effect).
   - Add `EditProject.relinkSource(oldUri, newUri, name, durationMs)`, which keeps trims
     across clips and overlays, and a `missingSources()` helper.
2. **Reader (`core-model/.../veg/VegReader.kt`)**: binary → plain data (media, tracks,
   events, FX records, Pan/Crop keys, Track Motion keys, compositing, generators).
   Unit-test it with a synthetic byte builder, and do not commit the .veg.
3. **Importer (`veg/VegImporter.kt`)**: plain data → `EditProject`, plus generated-image
   specs and a short report.
   - Apply the cut-off rule.
   - The base row is the bottom-most *video-file* event at each instant. Fill gaps with
     the first video plus a solid-black `plugin_video`, and mute base audio with
     `volume` at −60 dB.
   - Every other video event becomes an overlay split at base clip boundaries, with
     `lane` = its track's z-order and `fillFrame = true`. Its first effect is a new
     **`frame_place`** effect with keyframes from Pan/Crop and Track Motion.
   - Audio events become `audioOnly` overlays in lanes, with a `pitch_change` segment
     (semitones are not clamped by the DSP).
   - Solid, text and noise generators become `generated:<id>` image overlays. The app
     renders PNGs at import into `filesDir` and rewrites the URIs to `file://`. Noise
     gets a GLSL noise `plugin_video`. Generator layers with a non-normal composite are
     left out and reported.
   - Black and White → `hsl_adjust` desaturate or the macro's HSL shader.
     TV Simulator → the macro's `vegas_tv_simulator.glsl`.
   - Missing media gets `sourceUri = "missing:<encoded original path>"` and
     `displayName` = the file name.
4. **Effect (`core-effects`)**: a `FramePlacementEffect` ("Crop & place", a GL shader).
   Params are a source rect (normalized, Y down), a destination rect in frame-normalized
   coordinates, rotation, frame aspect and flips. Alpha is 0 outside, Y is up in GL. The
   geometry: window k = min(W/w, H/h), then Track Motion scales by |w|/aspect and |h|,
   with centre `(W/2 + x·H/2, H/2 − y·H/2)`.
5. **Pipeline**
   - Pool overlays per `lane` into one sequence each, with gaps and items sorted by
     start. `getOverlaySettings(inputId, t)` finds the active item. Lanes come first,
     ordered by `lane`, then legacy overlays, then the base.
   - Use `setSpeed` on clips and overlays, and clipping from
     `sourceStartMs(+sourceOffsetMs)`.
   - `audioOnly` overlays get audio sequences only.
   - `fillFrame` sets scale to bg/overlay per axis.
   - Make `ProjectExporter.takeForExport` / `shiftedBy` speed-aware.
6. **App**
   - "Load" accepts `*/*` and sniffs the magic bytes `72 69 66 66 2e 91 cf 11` to choose
     import or JSON.
   - After import, show a "Locate media" dialog listing missing files, one picker each,
     which calls `relinkSource`.
   - `replaceClipMedia` on a missing clip relinks instead of resetting.
   - Preview:
     - Set per-item `PlaybackParameters(speed)` on item transition, and divide positions
       by speed.
     - Key overlay players by `lane` + source so they survive clip changes, and use
       `sourceStartMs`/`speed` in the drift loop.
     - Add an audio-only overlay player.
     - Size `fillFrame` overlays to the video rect.
   - No UI text may mention Vegas or VEG.
7. Add a CHANGELOG entry ("Open layered projects…"), with no Vegas wording.

## Known gaps to report to the owner

- No Add or Subtract compositing (Media3 compositor limitation).
- Track FX (reverb and so on), event fades and volume or pan envelopes are not decoded.
- Noise is approximated.
- Text is plain centred white text with an outline.
- Unknown FX CLSIDs are skipped and counted.
- Preview of dense projects (90 ms clips) will be rough; export is the priority.
  `CompositionPlayer` (Media3 1.10) could give exact preview later.
