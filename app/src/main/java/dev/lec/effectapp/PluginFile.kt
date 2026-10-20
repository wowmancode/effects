package dev.lec.effectapp

import org.json.JSONObject
import dev.lec.effectapp.model.NATIVE_C_PLUGIN_LANGUAGE
import dev.lec.effectapp.effects.PLUGIN_LANGUAGE_C_STYLE
import dev.lec.effectapp.effects.PLUGIN_LANGUAGE_GLSL

internal data class SavedPlugin(
    val audio: Boolean,
    val source: String,
    val language: String,
    val controls: Map<String, Float>,
)

internal object PluginFile {
    fun encode(audio: Boolean, source: String, controls: Map<String, Float>, language: String = PLUGIN_LANGUAGE_C_STYLE): String {
        val controlJson = JSONObject()
        (1..8).forEach { index ->
            val key = "control$index"
            controlJson.put(key, (controls[key] ?: if (index == 1) 1f else 0f).toDouble())
        }
        return JSONObject()
            .put("format", "lec-effect-plugin")
            .put("version", 3)
            .put("kind", if (audio) "audio" else "video")
            .put("source", source)
            .put("language", language)
            .put("controls", controlJson)
            .toString(2)
    }

    fun decode(value: String, expectedAudio: Boolean, rawLanguage: String = PLUGIN_LANGUAGE_C_STYLE): SavedPlugin {
        val trimmed = value.trim()
        if (!trimmed.startsWith("{")) return SavedPlugin(expectedAudio, value, rawLanguage, emptyMap())
        val json = JSONObject(trimmed)
        require(json.optString("format") == "lec-effect-plugin") { "This is not a LEC plug-in file." }
        val audio = when (json.getString("kind")) {
            "audio" -> true
            "video" -> false
            else -> error("Unknown plug-in kind.")
        }
        require(audio == expectedAudio) {
            "Choose a ${if (expectedAudio) "audio" else "video"} plug-in for this effect."
        }
        val language = json.optString("language", PLUGIN_LANGUAGE_C_STYLE)
        require(language in setOf(PLUGIN_LANGUAGE_C_STYLE, PLUGIN_LANGUAGE_GLSL, NATIVE_C_PLUGIN_LANGUAGE)) { "Unknown plug-in language." }
        require(!audio || language != PLUGIN_LANGUAGE_GLSL) { "GLSL is available for video plug-ins only." }
        val controlsJson = json.optJSONObject("controls")
        val controls = (1..8).associate { index ->
            val key = "control$index"
            key to (controlsJson?.optDouble(key, if (index == 1) 1.0 else 0.0)?.toFloat()
                ?: if (index == 1) 1f else 0f)
        }
        return SavedPlugin(audio, json.getString("source"), language, controls)
    }
}

