package dev.lec.effectapp.effects

object EffectRegistry {
    private val registered = listOf<LecEffect>(
        HueRotateEffect(),
        HslAdjustEffect(),
        SharpenEffect(),
        GradientMapEffect(),
        GlowEffect(),
        GodRaysEffect(),
        SwirlEffect(),
        WaveEffect(),
        PinchBulgeEffect(),
        GhostTrailEffect(),
        ColorInvertEffect(),
        ZoomEffect(),
        ChromaticAberrationEffect(),
        VhsEffect(),
        FreezeFrameEffect(),
        MirrorFlipEffect(),
        AudioEchoEffect(),
        ChorusEffect(),
        PitchChangeEffect(),
        SplitPitchEffect(),
        VocoderEffect("vocoder_square", "Vocoder · square"),
        VocoderEffect("vocoder_saw", "Vocoder · saw"),
        VocoderEffect("vocoder_sine", "Vocoder · sine"),
        VocoderEffect("vocoder_triangle", "Vocoder · triangle"),
        VocoderEffect("vocoder_custom", "Vocoder · custom carrier", customCarrier = true),
    )
    val all: List<LecEffect> get() = registered

    fun byId(id: String): LecEffect? = registered.firstOrNull { it.id == id }

    fun byCategory(category: EffectCategory): List<LecEffect> = registered.filter { it.category == category }
}
