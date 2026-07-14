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
