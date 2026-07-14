package dev.lec.effectapp.effects

import androidx.annotation.OptIn
import androidx.media3.common.Effect
import androidx.media3.common.util.UnstableApi

class AudioEchoEffect : LecEffect {
    override val id = "audio_echo"
    override val displayName = "Echo"
    override val category = EffectCategory.AUDIO
    override val params = listOf(
        EffectParam("delay_ms", "Delay (ms)", 40f, 800f, 240f),
        EffectParam("feedback", "Feedback", 0f, 0.9f, 0.35f),
        EffectParam("mix", "Wet mix", 0f, 1f, 0.35f),
    )

    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}

class ChorusEffect : LecEffect {
    override val id = "chorus"
    override val displayName = "Chorus"
    override val category = EffectCategory.AUDIO
    override val params = listOf(
        EffectParam("depth_ms", "Depth (ms)", 1f, 30f, 12f),
        EffectParam("rate_hz", "Rate (Hz)", 0.1f, 5f, 0.8f),
        EffectParam("mix", "Wet mix", 0f, 1f, 0.4f),
    )

    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}
