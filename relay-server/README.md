# effect-app relay server

Online rooms in effect-app need a small server so phones can find each other. This is it.

It only passes bytes between the phones in a room. Everything it carries (edits, chat, plug-ins,
media) is **end-to-end encrypted** by the app before it leaves the phone, with keys that come from
the invite. The server never sees the invite, so it can't read or change anything. What it does
see: the IP addresses of the phones, a random room id, and how much data moves.

It keeps nothing on disk and has no accounts.

## Run it

Needs Java 17. From this folder:

```text
gradle installDist
PORT=8080 build/install/effect-app-relay/bin/effect-app-relay
```

Or with Docker:

```text
docker build -t effect-app-relay .
docker run -p 8080:8080 effect-app-relay
```

## Put it behind HTTPS

The app only connects over `wss://` (secure WebSockets), so the server needs a TLS certificate.
The easiest way is a reverse proxy that gets one automatically, such as
[Caddy](https://caddyserver.com):

```text
relay.example.com {
    reverse_proxy localhost:8080
}
```

Hosts like Fly.io, Render or Railway also give you HTTPS automatically: deploy the Dockerfile and
use the address they give you.

Then put the host (for example `relay.example.com`, or `relay.example.com:8443` for a non-default
port) in the app under **Online → Relay server**. To build the app with it filled in by default:

```text
gradle assembleDebug -PlecRelayHost=relay.example.com
```

## Limits

- Up to 2,000 rooms at once and 16 connections per room (the app allows 10 people).
- Frames up to 512 KB; each connection averages at most 16 MB/s (it's slowed down, not dropped).
- A connection has 10 seconds to say which room it wants; idle connections are pinged and
  dropped after 60 seconds without an answer.
- When the room owner disconnects, the room closes for everyone.
