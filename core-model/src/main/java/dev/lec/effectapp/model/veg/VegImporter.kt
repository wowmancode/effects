package dev.lec.effectapp.model.veg

import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.EffectKeyframe
import dev.lec.effectapp.model.Overlay
import dev.lec.effectapp.model.TimelineSegment
import java.net.URLEncoder
import java.util.UUID
import kotlin.math.abs
import kotlin.math.ln
import kotlin.math.min
import kotlin.math.roundToInt
import kotlin.math.roundToLong

/** An image the app renders once at import (solid colours, text, noise bases). */
data class GeneratedImage(
    val kind: Kind,
    /** 0xAARRGGBB. */
    val argb: Int = 0xFF000000.toInt(),
    val text: String = "",
    /** Text height as a fraction of the frame height. */
    val textSize: Float = 0.08f,
    val width: Int,
    val height: Int,
) {
    enum class Kind { SOLID, TEXT, NOISE }
}

data class ImportedProject(
    val project: EditProject,
    /** Images to render, keyed by the placeholder source URI the project uses for them. */
    val generatedImages: Map<String, GeneratedImage>,
    /** Plain-language notes about what could not be carried over. */
    val notes: List<String>,
)

/**
 * Turns a layered project into effect-app's model: one row of clips (at each moment the lowest
 * video layer that plays a file) with everything above it as overlays in lanes, and every sound
 * as a sound-only overlay. Placement (window crop, position, size) becomes a "frame_place"
 * effect; speeds, in-points and pitch shifts carry over.
 */
object VegImporter {
    const val MISSING_SCHEME = "missing:"
    const val GENERATED_SCHEME = "generated:"
    private const val AUDIO_LANE_BASE = 1_000
    private const val ANIMATION_STEP_MS = 100L

    /** Slivers shorter than this (rounding leftovers) are folded away rather than kept as cuts. */
    private const val MIN_PIECE_MS = 10L
    private val IMAGE_EXTENSIONS = setOf("png", "jpg", "jpeg", "bmp", "gif", "webp", "tif", "tiff")

    fun import(file: VegFile, name: String): ImportedProject = Builder(file, name).build()

    /** Placeholder URI for a file that has to be located on this device. */
    fun missingUri(originalPath: String): String =
        MISSING_SCHEME + URLEncoder.encode(originalPath, "UTF-8")

    /** The file name a [missingUri] stands for, or null for other URIs. */
    fun missingFileName(uri: String): String? =
        if (!uri.startsWith(MISSING_SCHEME)) null
        else java.net.URLDecoder.decode(uri.removePrefix(MISSING_SCHEME), "UTF-8")
            .substringAfterLast('\\').substringAfterLast('/')

    private class Item(
        val track: VegTrack,
        /** Video: 0 = front-most video track. Audio: order among audio tracks. */
        val layer: Int,
        val event: VegEvent,
        val media: VegMedia?,
        val startMs: Long,
        val endMs: Long,
    ) {
        val startExactMs: Double get() = event.startTicks / TICKS_PER_MS.toDouble()
        val rate: Double get() = event.rateOrOne
        val isGenerator: Boolean get() = media?.isGenerator == true
        val isImage: Boolean get() = !isGenerator &&
            media?.fileName?.substringAfterLast('.', "")?.lowercase()?.let { it in IMAGE_EXTENSIONS } == true
        val playsFile: Boolean get() = media != null && !isGenerator && !isImage

        /** Source position (ms) at project time [timeMs]. */
        fun sourceMsAt(timeMs: Long): Long =
            (event.sourceStartTicks / TICKS_PER_MS + (timeMs - startExactMs) * rate).roundToLong().coerceAtLeast(0)
    }

    private class Builder(val file: VegFile, val name: String) {
        val width = if (file.width > 0) file.width else 1280
        val height = if (file.height > 0) file.height else 720
        val aspect = width.toDouble() / height
        val images = linkedMapOf<String, GeneratedImage>()
        val skippedBlendLayers = mutableSetOf<Int>()
        var hiddenUnder = 0
        val unknownFx = mutableSetOf<String>()

        fun build(): ImportedProject {
            val videoTracks = file.tracks.filter { it.isVideo }
            val audioTracks = file.tracks.filterNot { it.isVideo }
            val video = videoTracks.flatMapIndexed { layer, track -> items(track, layer) }
                .filter { it.media != null }
            val audio = audioTracks.flatMapIndexed { layer, track -> items(track, layer) }
                .filter { it.media != null && !it.isGenerator && !it.isImage }
            val endMs = (video + audio).maxOfOrNull { it.endMs } ?: 0L
            if (endMs <= 0) throw VegFormatException("The project is empty.")
            val files = video.filter { it.playsFile }
            val fillerSource = files.groupingBy { it.media!!.path }.eachCount().maxByOrNull { it.value }?.key
                ?: audio.firstOrNull()?.media?.path
                ?: throw VegFormatException("The project has no media files.")

            // ---- the clip row: the lowest file-playing video layer at each moment ----
            val cuts = (listOf(0L, endMs) + files.flatMap { listOf(it.startMs, it.endMs) })
                .filter { it in 0..endMs }.distinct().sorted()
            data class Span(val base: Item?, val start: Long, val end: Long)
            val spans = mutableListOf<Span>()
            cuts.zipWithNext().forEach { (a, b) ->
                if (b <= a) return@forEach
                val base = files.filter { it.startMs <= a && it.endMs >= b }.maxByOrNull { it.layer }
                val last = spans.lastOrNull()
                if (last != null && last.end == a && (last.base === base || b - a < MIN_PIECE_MS)) {
                    spans[spans.lastIndex] = last.copy(end = b)
                } else spans += Span(base, a, b)
            }

            val clips = spans.map { span ->
                val base = span.base
                val duration = span.end - span.start
                val clip = if (base != null) {
                    val inPoint = base.sourceMsAt(span.start)
                    Clip(
                        id = newId(),
                        sourceUri = missingUri(base.media!!.path),
                        displayName = base.media.fileName,
                        trimStartMs = inPoint,
                        trimEndMs = inPoint + duration,
                        speed = base.rate.toFloat(),
                        effectSegments = videoEffects(base, span.start, span.end),
                        audioSegments = listOf(mute(duration)),
                    )
                } else {
                    Clip(
                        id = newId(),
                        sourceUri = missingUri(fillerSource),
                        displayName = fillerSource.substringAfterLast('\\').substringAfterLast('/'),
                        trimStartMs = 0,
                        trimEndMs = duration,
                        effectSegments = listOf(
                            segment("plugin_video", duration, mapOf("control1" to 1f), glsl(LayerShaders.SOLID_BLACK)),
                        ),
                        audioSegments = listOf(mute(duration)),
                    )
                }
                val baseLayer = base?.layer ?: Int.MAX_VALUE
                val overlays = mutableListOf<Overlay>()
                video.forEach { item ->
                    if (item === base) return@forEach
                    val from = maxOf(item.startMs, span.start)
                    val to = minOf(item.endMs, span.end)
                    if (to - from < MIN_PIECE_MS) return@forEach
                    if (item.isGenerator && (item.track.compositeCode != 0 || item.track.compositePlugin)) {
                        skippedBlendLayers += item.layer
                        return@forEach
                    }
                    if (item.layer > baseLayer) {
                        hiddenUnder++
                        return@forEach
                    }
                    overlays += videoOverlay(item, from, to, span.start)
                }
                audio.forEach { item ->
                    val from = maxOf(item.startMs, span.start)
                    val to = minOf(item.endMs, span.end)
                    if (to - from < MIN_PIECE_MS) return@forEach
                    overlays += audioOverlay(item, from, to, span.start)
                }
                // overlays[0] is drawn on top; sound-only overlays draw nothing, so they go last.
                clip.copy(overlays = overlays.sortedWith(compareBy<Overlay>({ it.audioOnly }, { it.lane })))
            }

            val notes = buildList {
                if (skippedBlendLayers.isNotEmpty()) {
                    add("${skippedBlendLayers.size} layer(s) use a blend mode effect-app can't draw yet, so they were left out.")
                }
                if (hiddenUnder > 0) add("$hiddenUnder piece(s) of layers under the main picture were left out.")
                if (unknownFx.isNotEmpty()) add("${unknownFx.size} effect type(s) aren't supported yet and were skipped.")
                if (files.isNotEmpty() || audio.isNotEmpty()) {
                    add("Fades, volume changes and track-wide effects aren't carried over.")
                }
            }
            return ImportedProject(
                project = EditProject(name = name, clips = clips),
                generatedImages = images,
                notes = notes,
            )
        }

        /** A track's events as items, each cut off where the next event on the track starts. */
        fun items(track: VegTrack, layer: Int): List<Item> {
            val events = track.events.filter { it.lengthTicks > 0 }.sortedBy { it.startTicks }
            return events.mapIndexedNotNull { index, event ->
                val start = ms(event.startTicks)
                var end = ms(event.startTicks + event.lengthTicks)
                events.getOrNull(index + 1)?.let { next -> end = min(end, ms(next.startTicks)) }
                if (end <= start) return@mapIndexedNotNull null
                Item(track, layer, event, file.media[event.mediaId], start, end)
            }
        }

        fun videoOverlay(item: Item, from: Long, to: Long, clipStart: Long): Overlay {
            val media = item.media
            val sourceUri: String
            val displayName: String
            val isVideo: Boolean
            val extra = mutableListOf<TimelineSegment>()
            when {
                item.playsFile -> {
                    sourceUri = missingUri(media!!.path)
                    displayName = media.fileName
                    isVideo = true
                }
                item.isImage -> {
                    sourceUri = missingUri(media!!.path)
                    displayName = media.fileName
                    isVideo = false
                }
                else -> {
                    val (key, image) = generatedImage(media)
                    images[key] = image
                    sourceUri = key
                    displayName = media?.generator?.preset?.ifBlank { null } ?: "Layer"
                    isVideo = false
                    if (image.kind == GeneratedImage.Kind.NOISE) {
                        extra += segment(
                            "plugin_video",
                            to - from,
                            mapOf("control1" to 1f, "control2" to 1f),
                            glsl(LayerShaders.NOISE),
                        )
                    }
                }
            }
            return Overlay(
                id = newId(),
                sourceUri = sourceUri,
                displayName = displayName,
                isVideo = isVideo,
                includeAudio = false,
                startMs = from - clipStart,
                endMs = to - clipStart,
                sourceStartMs = if (isVideo) item.sourceMsAt(from) else 0,
                speed = if (isVideo) item.rate.toFloat() else 1f,
                lane = item.layer,
                fillFrame = true,
                effectSegments = extra + videoEffects(item, from, to),
            )
        }

        fun audioOverlay(item: Item, from: Long, to: Long, clipStart: Long): Overlay {
            val media = item.media!!
            val duration = to - from
            val segments = buildList {
                val ratio = item.event.pitchRatio
                if (abs(ratio - 1.0) > 1e-6) {
                    val semitones = (12.0 * ln(ratio) / ln(2.0)).toFloat()
                    add(segment("pitch_change", duration, mapOf("semitones" to semitones, "mix" to 1f)))
                }
            }
            return Overlay(
                id = newId(),
                sourceUri = missingUri(media.path),
                displayName = media.fileName,
                isVideo = false,
                includeAudio = true,
                audioOnly = true,
                startMs = from - clipStart,
                endMs = to - clipStart,
                sourceStartMs = item.sourceMsAt(from),
                speed = item.rate.toFloat(),
                lane = AUDIO_LANE_BASE + item.layer,
                audioSegments = segments,
            )
        }

        /** The item's own effects (applied to its picture first), then its placement. */
        fun videoEffects(item: Item, from: Long, to: Long): List<TimelineSegment> {
            val duration = to - from
            val result = mutableListOf<TimelineSegment>()
            item.event.videoFx.forEach { fx ->
                when (fx.clsid) {
                    VegClsid.BLACK_AND_WHITE -> {
                        val amount = fx.doubles().firstOrNull()?.toFloat()?.coerceIn(0f, 1f) ?: 1f
                        result += segment(
                            "plugin_video",
                            duration,
                            mapOf("control1" to amount, "control3" to -2f),
                            glsl(LayerShaders.HSL_ADJUST),
                        )
                    }
                    VegClsid.TV_SIMULATOR -> {
                        val p = fx.doubles()
                        fun v(i: Int, fallback: Double) = (p.getOrNull(i) ?: fallback).toFloat()
                        result += segment(
                            "plugin_video",
                            duration,
                            mapOf(
                                "control1" to 1f + (v(0, 1.0) - 1f) / 3f,
                                "control2" to v(1, 0.0),
                                "control3" to v(2, 0.0),
                                "control4" to 1f - v(3, 1.0),
                                "control5" to 1f - v(4, 1.0),
                                "control6" to v(5, 0.0),
                                "control7" to v(6, 0.0),
                                "control8" to v(7, 0.0),
                            ),
                            glsl(LayerShaders.TV_SIMULATOR),
                        )
                    }
                    else -> unknownFx += fx.clsid
                }
            }
            placement(item, from, to)?.let(result::add)
            return result
        }

        /**
         * The "frame_place" segment for [item] over project time [from, to), or null when it
         * just fills the frame. Animated windows or motion get keyframes at their own key times
         * plus every [ANIMATION_STEP_MS] in between (placement isn't linear in the keys).
         */
        fun placement(item: Item, from: Long, to: Long): TimelineSegment? {
            val times = sortedSetOf(from, to)
            val eventStart = item.startExactMs
            val pcTimes = item.event.panCrop.map { (eventStart + it.timeTicks / TICKS_PER_MS.toDouble()).roundToLong() }
            val motionTimes = item.track.motion.map { ms(it.timeTicks) }
            (pcTimes + motionTimes).filter { it in from..to }.forEach { times += it }
            val animated = item.event.panCrop.size > 1 || item.track.motion.size > 1
            if (animated) {
                var t = from + ANIMATION_STEP_MS
                while (t < to) { times += t; t += ANIMATION_STEP_MS }
            }
            val samples = times.map { it to placeAt(item, it) }
            if (samples.all { isIdentity(it.second) }) return null
            val first = samples.first().second
            val distinct = samples.any { (_, p) -> p.keys.any { abs((p[it] ?: 0f) - (first[it] ?: 0f)) > 1e-4f } }
            return TimelineSegment(
                id = newId(),
                effectId = "frame_place",
                startMs = 0,
                endMs = to - from,
                params = first,
                keyframes = if (!distinct) emptyList() else samples.map { (t, p) -> EffectKeyframe(t - from, p) },
            )
        }

        /** Placement parameters at project time [timeMs] (see FramePlacementEffect). */
        fun placeAt(item: Item, timeMs: Long): Map<String, Float> {
            val event = item.event
            val coordW = if (event.coordWidth > 0) event.coordWidth.toDouble() else width.toDouble()
            val coordH = if (event.coordHeight > 0) event.coordHeight.toDouble() else height.toDouble()
            val local = (timeMs - item.startExactMs) * TICKS_PER_MS
            val pc = interpolatePanCrop(event.panCrop, local)
            val w = pc?.width ?: coordW
            val h = pc?.height ?: coordH
            val cx = pc?.centerX ?: (coordW / 2)
            val cy = pc?.centerY ?: (coordH / 2)
            val rotation = pc?.rotation ?: 0.0
            // The window is fitted into the frame keeping its shape…
            val fit = if (abs(w) < 1e-6 || abs(h) < 1e-6) 1.0 else min(width / abs(w), height / abs(h))
            val shownW = abs(w) * fit
            val shownH = abs(h) * fit
            // …then Track Motion scales and moves it (frame is 2·aspect wide and 2 high, Y up).
            val motion = interpolateMotion(item.track.motion, timeMs * TICKS_PER_MS)
            val mw = motion?.width ?: aspect
            val mh = motion?.height ?: 1.0
            val mx = motion?.x ?: 0.0
            val my = motion?.y ?: 0.0
            val flipH = (w < 0) != (mw < 0)
            val flipV = (h < 0) != (mh < 0)
            val outW = shownW * abs(mw) / aspect
            val outH = shownH * abs(mh)
            val outCx = width / 2.0 + mx * height / 2.0
            val outCy = height / 2.0 - my * height / 2.0
            return mapOf(
                "src_cx" to (cx / coordW).toFloat(),
                "src_cy" to (cy / coordH).toFloat(),
                "src_w" to (abs(w) / coordW).toFloat(),
                "src_h" to (abs(h) / coordH).toFloat(),
                "src_rot" to rotation.toFloat(),
                "src_aspect" to (coordW / coordH).toFloat(),
                "dst_cx" to (outCx / width).toFloat(),
                "dst_cy" to (outCy / height).toFloat(),
                "dst_w" to ((if (flipH) -outW else outW) / width).toFloat(),
                "dst_h" to ((if (flipV) -outH else outH) / height).toFloat(),
            )
        }

        fun isIdentity(p: Map<String, Float>): Boolean {
            fun near(key: String, value: Float) = abs((p[key] ?: value) - value) < 1e-4f
            return near("src_cx", 0.5f) && near("src_cy", 0.5f) && near("src_w", 1f) && near("src_h", 1f) &&
                near("src_rot", 0f) && near("dst_cx", 0.5f) && near("dst_cy", 0.5f) &&
                near("dst_w", 1f) && near("dst_h", 1f) &&
                abs((p["src_aspect"] ?: 0f) - aspect.toFloat()) < 0.01f
        }

        fun generatedImage(media: VegMedia?): Pair<String, GeneratedImage> {
            val w = 1280
            val h = (1280 / aspect).roundToInt().coerceAtLeast(2)
            val generator = media?.generator
            return when (generator?.clsid) {
                VegClsid.SOLID_COLOR -> {
                    // Stored as B, G, R, A floats.
                    val f = generator.floats()
                    fun c(i: Int) = ((f.getOrNull(i) ?: 0f).coerceIn(0f, 1f) * 255).roundToInt()
                    val argb = (c(3) shl 24) or (c(2) shl 16) or (c(1) shl 8) or c(0)
                    val key = GENERATED_SCHEME + "solid-%08x".format(argb)
                    key to GeneratedImage(GeneratedImage.Kind.SOLID, argb = argb, width = w, height = h)
                }
                VegClsid.TEXT -> {
                    val text = media.text.orEmpty()
                    // Half-points on a 360-line frame, as a fraction of the frame height.
                    val size = if (media.textHalfPoints > 0) media.textHalfPoints / 2f / 360f else 0.08f
                    val key = GENERATED_SCHEME + "text-" + Integer.toHexString((text + size).hashCode())
                    key to GeneratedImage(GeneratedImage.Kind.TEXT, argb = 0xFFFFFFFF.toInt(), text = text, textSize = size, width = w, height = h)
                }
                VegClsid.NOISE_TEXTURE -> (GENERATED_SCHEME + "noise") to
                    GeneratedImage(GeneratedImage.Kind.NOISE, argb = 0xFF808080.toInt(), width = w, height = h)
                else -> (GENERATED_SCHEME + "solid-ff000000") to
                    GeneratedImage(GeneratedImage.Kind.SOLID, width = w, height = h)
            }
        }
    }

    private fun interpolatePanCrop(keys: List<VegPanCropKey>, timeTicks: Double): VegPanCropKey? {
        if (keys.isEmpty()) return null
        val next = keys.indexOfFirst { it.timeTicks > timeTicks }
        if (next == 0) return keys.first()
        if (next == -1) return keys.last()
        val a = keys[next - 1]
        val b = keys[next]
        val f = ((timeTicks - a.timeTicks) / (b.timeTicks - a.timeTicks).coerceAtLeast(1)).coerceIn(0.0, 1.0)
        fun l(x: Double, y: Double) = x + (y - x) * f
        return VegPanCropKey(
            timeTicks.roundToLong(), l(a.width, b.width), l(a.height, b.height),
            l(a.centerX, b.centerX), l(a.centerY, b.centerY), l(a.rotation, b.rotation),
        )
    }

    private fun interpolateMotion(keys: List<VegMotionKey>, timeTicks: Long): VegMotionKey? {
        if (keys.isEmpty()) return null
        val next = keys.indexOfFirst { it.timeTicks > timeTicks }
        if (next == 0) return keys.first()
        if (next == -1) return keys.last()
        val a = keys[next - 1]
        val b = keys[next]
        val f = ((timeTicks - a.timeTicks).toDouble() / (b.timeTicks - a.timeTicks).coerceAtLeast(1)).coerceIn(0.0, 1.0)
        fun l(x: Double, y: Double) = x + (y - x) * f
        return VegMotionKey(timeTicks, l(a.x, b.x), l(a.y, b.y), l(a.width, b.width), l(a.height, b.height))
    }

    private fun ms(ticks: Long): Long = (ticks.toDouble() / TICKS_PER_MS).roundToLong()

    private fun newId(): String = UUID.randomUUID().toString()

    private fun glsl(source: String): Map<String, String> = mapOf("source" to source, "language" to "glsl")

    private fun mute(durationMs: Long) = segment("volume", durationMs, mapOf("gain_db" to -60f))

    private fun segment(
        effectId: String,
        durationMs: Long,
        params: Map<String, Float>,
        strings: Map<String, String> = emptyMap(),
    ): TimelineSegment {
        val withDefaults = if (effectId == "plugin_video") {
            (1..8).associate { "control$it" to (if (it == 1) 1f else 0f) } + params
        } else params
        return TimelineSegment(
            id = newId(),
            effectId = effectId,
            startMs = 0,
            endMs = durationMs,
            params = withDefaults,
            stringParams = strings,
        )
    }
}
