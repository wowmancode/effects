![Downloads](https://img.shields.io/github/downloads/wowmancode/effects/total)
# effect-app

A free and open-source Android video editor focused on stacking time-ranged visual and audio effects across hard-cut video sequences.

## Features

- Multiple clips arranged sequentially with hard cuts.
- Live ExoPlayer preview and a proportional, horizontally scrolling timeline.
- Generic effect registry and parameter editor designed for gradual expansion.
- Media3 Transformer export without FFmpeg wrappers.
- JSON project save/load for shareable edits and presets.
- Split-pitch harmonizer with Original and Drums unpitched pitch methods. Drums unpitched uses the [expressfx_drums C DSP](core-effects/src/main/c/README.md) on Android with a matching Kotlin fallback; both methods keep the same voice pitch settings.

## Online rooms

Edit with up to 9 other people. The owner creates a room and shares the invite (best in an
end-to-end encrypted chat); everyone who joins is approved by the owner after comparing a safety
code.

- **End-to-end encrypted.** Each person's connection to the owner has its own keys (P-256 key
  agreement, AES-256-GCM). The invite secret never leaves the phones. A [relay server](relay-server/README.md)
  passes the encrypted data along and can't read it.
- **No accounts or passwords.** Names are random or typed in, stored only on the phone.
- **Media by content.** Media is identified by its SHA-256 hash, so files people already share
  (for example, sent "as a file" in a chat) link instantly. New media is offered to everyone, who
  each choose Yes or No; downloads are checked against the hash before they're used.
- **Owner controls.** Room size (2–10, can be raised later), a lock, a media size limit, and
  per-person permissions: add, delete and edit media; add, remove and change effects. The owner's
  phone checks every change, so a modified app can't get around them.
- **Plug-ins.** Only the owner can change plug-in code. GLSL plug-ins from the owner don't run on
  a guest's phone until the guest allows them.
- **Text chat**, and Leave / End room. Everyone keeps their own copy of the edit afterwards.

Online rooms need the app's `INTERNET` permission, which is only used to reach the relay server.

## Project status

This is a personal hobby project maintained on a best-effort basis. It comes with no warranty and no guaranteed support. Feature requests may be implemented when they are easy or align with the maintainer's interests. Pull requests are welcome, but review is not guaranteed.

## Building

Builds run on GitHub Actions. The repository intentionally does not commit the binary Gradle wrapper JAR. Locally, use Gradle 8.11.1 and Android SDK 36:

```text
gradle assembleDebug lint test
```

## License

App code is licensed under GPL-3.0-only. See `LICENSE` and `NOTICE.md`.
