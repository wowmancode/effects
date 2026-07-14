package dev.lec.effectapp.effects

object EffectRegistry {
    private val registered = listOf<LecEffect>(
        HueRotateEffect(),
        HslAdjustEffect(),
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
    )
    val all: List<LecEffect> get() = registered

    fun byId(id: String): LecEffect? = registered.firstOrNull { it.id == id }

    fun byCategory(category: EffectCategory): List<LecEffect> = registered.filter { it.category == category }
}
