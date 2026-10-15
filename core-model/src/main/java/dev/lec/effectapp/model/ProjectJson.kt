package dev.lec.effectapp.model

import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json

object ProjectJson {
    private val json = Json {
        prettyPrint = true
        ignoreUnknownKeys = true
        encodeDefaults = true
    }

    fun encode(project: EditProject): String = json.encodeToString(project)

    fun decode(value: String): EditProject = json.decodeFromString(value)
}

object PresetJson {
    private val json = Json {
        prettyPrint = true
        ignoreUnknownKeys = true
        encodeDefaults = true
    }

    fun encode(preset: EffectPreset): String = json.encodeToString(preset.copy(thumbnailPath = null))

    fun decode(value: String): EffectPreset = json.decodeFromString<EffectPreset>(value).copy(thumbnailPath = null)
}

object PresetLibraryJson {
    private val json = Json {
        prettyPrint = true
        ignoreUnknownKeys = true
        encodeDefaults = true
    }

    fun encode(presets: List<EffectPreset>): String = json.encodeToString(presets)

    fun decode(value: String): List<EffectPreset> = json.decodeFromString(value)

    /**
     * Decodes a JSON payload that may hold either a single exported preset or a whole library,
     * returning the presets it contains. Used when bulk-importing files unpacked from a zip.
     */
    fun decodeFlexible(value: String): List<EffectPreset> =
        if (value.trimStart().startsWith("[")) {
            json.decodeFromString<List<EffectPreset>>(value)
        } else {
            listOf(json.decodeFromString<EffectPreset>(value))
        }
}
