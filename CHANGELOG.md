# Changelog

All notable changes to effect-app will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project follows [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [0.7.0] - Unreleased

### Added

- Gradient maps now support an alpha channel for every color point. Alpha is
  interpolated with the RGB channels and multiplied by the source alpha.
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
