package dev.lec.effectapp

import android.media.MediaMetadataRetriever

/** API-24-compatible resource helper; AutoCloseable support was only added in API 29. */
inline fun <T> MediaMetadataRetriever.use(block: (MediaMetadataRetriever) -> T): T =
    try {
        block(this)
    } finally {
        release()
    }
