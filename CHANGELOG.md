# Changelog

All notable changes to effect-app will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project follows [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [0.7.0] - Unreleased

### Changed

- IHTX exports keep sound and picture together. Each pass's audio encoder put a little silence
  in front of the sound, so every pass (and every joined segment) pushed the sound later. Later
  passes now read the sound from after that silence, and the final join copies the pictures
  through and cuts each pass's picture and sound to the export length, encoding the sound once.
  The silence is measured against the export length, so very short exports (e.g. 0.4 s × 10)
  don't lose a frame of sound per pass.
- Export runs on its own thread, so a slow or stuck export can no longer freeze the app;
  Cancel returns immediately. Animated Crop & place follows its keyframes during export instead
  of cutting clips and layers into short slices, and layer pieces split only at clip cuts are
  joined back up, so layered projects export with far fewer decoder restarts.
- Reverse video and reverse audio are now truly reversed. Each reversed clip is
  rendered once (cached) — video through an all-keyframe intermediate remuxed back
  to front, audio decoded and written back to front — so the preview plays it
  smoothly and the export is frame-accurate, instead of stitching one-frame slices.
  If a device can't produce the intermediate, the old slicing is used as a fallback.
- Overlays are drawn over the preview player in their export positions. Video
  overlays now play (and loop) in sync with the preview, with their video effects,
  and any overlay can be dragged on the preview to move it (sets the keyframe at
  the playhead when the overlay is animated).
- Gradient map: tap a color point to edit just that point; the settings list for
  every point is gone.
- Export has a "Start at (seconds)" setting, default 1, so the export can begin
  part-way into the project.
- Split pitch: the Elastique and a17 drums pitch methods are replaced by a single
  Drums unpitched method (expressfx_drums stretch-and-resample). Original is
  unchanged. Projects saved with either retired method open as Drums unpitched.
  Voice pitches are limited to ±24 semitones in this method; it adds about 28 ms
  of latency to the dry and pitched voices alike.

### Added

- Anti-desync export switch. After the export, the picture and sound track lengths are
  measured; if they differ by more than 15 ms, the picture is re-timed to exactly the sound's
  length (sound copied untouched), like `setpts=audio/video*PTS`. The finished screen shows the
  speed used and both lengths; if the extra pass fails, the unsynced export is kept.
- IHTX exports list the native C plug-ins (from the project, queued presets and overlays) that
  aren't approved on this phone yet, with an "Allow all plug-ins" checkbox. Ticking it asks for
  confirmation with the trust warning, then compiles and approves each one. Start export stays
  off until they're all approved, instead of failing partway in.
- Multi-effect IHTX preset picker has a search box (matches preset names and the effects
  inside them, every word in any order) and sort modes: saved order, newest, name A–Z/Z–A,
  most and fewest effects. Each preset lists its effects and how often it's queued, and
  "Add all shown" queues every match at once.
- Export encoding settings: resolution cap (4K to 360p), video bitrate (Mbps, with quick
  picks), variable or constant bitrate mode, keyframe interval (KEY_I_FRAME_INTERVAL; 0 for
  all keyframes), max B-frames (Android 10+), AAC audio bitrate and encoder speed (maximum or
  real time). Anything left on Auto falls back to Very fast's values or the encoder's default.
- Load opens layered projects from other editors as well as effect-app projects. Each layer
  becomes an overlay that keeps its in-point, speed, crop window and position; sounds become
  sound-only overlays, with pitch shifts. Solid colours, text and noise layers are drawn as
  images. A "Find media" list asks for each file the project uses, once: every cut of that
  file is relinked with its timing kept. Layers that need blend modes, fades and track-wide
  effects aren't carried over yet, and the app says so after opening.
- Overlays can start part-way into their video or sound, play at another speed, share a lane
  (one player per lane in export, so dense projects stay light), play sound only, and fill the
  frame. Clips can play at another speed.
- Crop & place effect: crops a window out of the picture and places it anywhere in the frame,
  transparent around it, so layers underneath show through.
- Replacing a clip whose media is missing now relinks every clip and overlay that used that
  file and keeps their in-points, instead of resetting the clip to the whole new file.
- Export video codec choice: H264, H265 (HEVC), VP9 or AV1, in an .mp4 with AAC sound.
  Only the codecs the phone can encode are offered.
- Export speed setting, Very fast by default: IHTX passes render at up to 720p with a lighter
  bitrate and fewer keyframes, so each pass takes far less time. Normal keeps full resolution.

- Moving video overlays during export, with timeline positioning, opacity, scale,
  position, automatic looping, and reorderable layer priority. The editor preview
  uses a still poster to keep playback lightweight.
- A stackable Tiles effect with independent 1–8 horizontal and vertical repeats,
  including 2x2, 3x3, and rectangular grids.
- Gradient maps now support an alpha channel for every color point. Alpha is
  interpolated with the RGB channels and controls the mapped color's opacity over
  the original frame.
- Eight keyframeable controls for every video and audio plug-in.
- Video plug-in helpers for neighboring-pixel sampling, coordinate warping,
  mirroring, pixelation, and difference, multiply, screen, overlay, add, subtract,
  lighten, and darken compositing.
- Audio plug-in history, delay, oscillator, chorus/vibrato modulation, and pitch
  helpers.
- Full preset-library JSON backup and restore.
- Android cloud-backup and device-transfer rules for saved presets and thumbnails.
- Warp, Composite, Chorus, and Pitch starter templates in the plug-in editor.

### Changed

- Older RGB-only gradient-map projects and presets load as fully opaque RGBA maps.
- The next Android package version is 0.7.0 with version code 7.

### Fixed

- Gradient-map alpha could expose a purple preview surface or freeze playback by
  emitting partially transparent video frames.

## [0.6.0] - 2026-07-15

### Added

- Multi-clip projects with sequential hard-cut playback, clip reordering, trimming,
  media replacement, and automatic playback across clip boundaries.
- Live ExoPlayer preview, proportional horizontal timeline, synchronized playhead,
  overlapping effect and audio lanes, segment selection, and edge resizing.
- Clip transforms for scale, rotation, position, mirroring, and flipping.
- Stackable, reorderable, clip-wide visual effects with smooth keyframes.
- Color tools including HSL adjustment, channel-selective invert, RGB-to-BGR
  shuffling, visual multi-channel color curves, and gradient maps with up to eight
  editable RGB color points.
- Warp effects including swirl, animated X/Y wave, pinch/bulge with adjustable
  radius, ripple, four-way mirror, pixelation-capable plug-ins, and reverse video.
- Stylized effects including glow, sharpen, chromatic aberration, VHS/scanlines,
  freeze frame, echo/ghost trail, zoom, and centered god rays.
- Stackable, clip-wide audio effects including echo, chorus, tremolo, vibrato,
  bitcrush, reverse audio, pitch/speed, unlimited split-pitch voices, and vocoders
  with sine, square, saw, triangle, or imported custom audio carriers.
- Safe C-like video and audio plug-ins with customizable source code.
- Presets with search, effect-applied thumbnails, disk persistence, JSON
  import/export, and portable preset files.
- JSON project save/load, missing-media placeholders, media replacement that keeps
  edits, and Media3 Transformer export.
- Responsive portrait and landscape editing layouts with expanded effect controls.
- Custom application icon and GitHub Actions workflows for builds, tests, lint,
  release APK artifacts, and downloadable development builds.

### Changed

- Effect and audio segments apply across their entire owning clip.
- Preview rendering rebuilds safely when effect stacks or keyframes change.
- Editing workspace sizing gives controls more room without collapsing the preview.
- Preset exports omit thumbnails so they remain portable.

### Fixed

- Preview freezes when adding, stacking, or keyframing multiple effects.
- Effects failing to appear after the preview pipeline changed.
- Audio effects not being applied during preview.
- Effect picker scrolling and cramped mobile controls.
- Keyframe interpolation instability and color-curve editing bugs.
- Preview continuation when a project contains multiple video clips.
- Audio plug-in state leaking between channels.
- Presets disappearing on ordinary app restarts.

[0.7.0]: https://github.com/wowmancode/effects/compare/v0.6...HEAD
[0.6.0]: https://github.com/wowmancode/effects/releases/tag/v0.6
- Five new creative audio effects: Overdrive, Flanger, Ring modulator, Filter,
  and stereo Auto pan.
- Vocoder Lab, a 15-control vocoder with continuously morphing sine, saw,
  square, and triangle carriers plus pipe-organ harmonics, air, formants,
  detune, motion, growl, drive, and independent dry/wet levels.
- Wave distortion now holds its selected strength across the whole frame instead
  of fading away as pixels get farther from its center.
