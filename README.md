# effect-app

A free and open-source Android video editor focused on stacking time-ranged visual and audio effects across hard-cut video sequences.

## Features

- Multiple clips arranged sequentially with hard cuts.
- Live ExoPlayer preview and a proportional, horizontally scrolling timeline.
- Generic effect registry and parameter editor designed for gradual expansion.
- Media3 Transformer export without FFmpeg wrappers.
- JSON project save/load for shareable edits and presets.

## Project status

This is a personal hobby project maintained on a best-effort basis. It comes with no warranty and no guaranteed support. Feature requests may be implemented when they are easy or align with the maintainer's interests. Pull requests are welcome, but review is not guaranteed.

## Building

Builds run on GitHub Actions. The repository intentionally does not commit the binary Gradle wrapper JAR. Locally, use Gradle 8.11.1 and Android SDK 36:

```text
gradle assembleDebug lint test
```

## License

App code is licensed under GPL-3.0-only. See `LICENSE` and `NOTICE.md`.
