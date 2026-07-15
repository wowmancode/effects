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

class TremoloEffect : LecEffect {
    override val id = "tremolo"
    override val displayName = "Tremolo"
    override val category = EffectCategory.AUDIO
    override val params = listOf(
        EffectParam("rate_hz", "Rate (Hz)", 0.1f, 20f, 5f),
        EffectParam("depth", "Depth", 0f, 1f, 0.75f),
        EffectParam("mix", "Wet mix", 0f, 1f, 1f),
    )

    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}

class BitcrushEffect : LecEffect {
    override val id = "bitcrush"
    override val displayName = "Bitcrush"
    override val category = EffectCategory.AUDIO
    override val params = listOf(
        EffectParam("bit_depth", "Bit depth", 2f, 16f, 8f),
        EffectParam("sample_rate", "Sample rate", 500f, 48_000f, 8_000f),
        EffectParam("mix", "Wet mix", 0f, 1f, 1f),
    )

    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}

class ReverseAudioEffect : LecEffect {
    override val id = "reverse_audio"
    override val displayName = "Reverse audio"
    override val category = EffectCategory.AUDIO
    override val params = emptyList<EffectParam>()

    @OptIn(UnstableApi::class)
    override fun toMediaEffect(values: Map<String, Float>): Effect? = null
}
