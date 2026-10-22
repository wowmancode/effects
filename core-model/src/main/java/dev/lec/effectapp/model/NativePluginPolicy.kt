package dev.lec.effectapp.model

import java.security.MessageDigest

const val NATIVE_C_PLUGIN_LANGUAGE = "native_c"

object NativePluginPolicy {
    const val WARNING = "Only put in code you trust!"
    const val MAX_SOURCE_CHARS = 262_144

    fun isNative(segment: TimelineSegment): Boolean = segment.stringParams["language"] == NATIVE_C_PLUGIN_LANGUAGE

    fun segments(project: EditProject): List<TimelineSegment> = project.clips.flatMap { clip ->
        clip.effectSegments + clip.audioSegments + clip.overlays.flatMap { it.effectSegments + it.audioSegments }
    }.filter(::isNative)

    fun containsNative(project: EditProject): Boolean = segments(project).isNotEmpty()

    fun approvalKey(source: String, audio: Boolean): String = MessageDigest.getInstance("SHA-256")
        .digest("lec-native-c-api-1\n${if (audio) "audio" else "video"}\n$source".toByteArray(Charsets.UTF_8))
        .joinToString("") { "%02x".format(it) }

    fun validateSource(source: String, audio: Boolean): String? = when {
        source.length > MAX_SOURCE_CHARS -> "Native C source is limited to $MAX_SOURCE_CHARS characters."
        source.isBlank() -> "Add a C plug-in function."
        '\u0000' in source -> "C source cannot contain NUL characters."
        !Regex("\\b${if (audio) "lec_audio" else "lec_video"}\\s*\\(").containsMatchIn(source) ->
            "Define ${if (audio) "lec_audio" else "lec_video"} using the signature shown below."
        else -> null
    }
}
