package dev.lec.effectapp.effects

object EffectRegistry {
    private val registered = listOf<LecEffect>(HueRotateEffect(), PitchChangeEffect())
    val all: List<LecEffect> get() = registered

    fun byId(id: String): LecEffect? = registered.firstOrNull { it.id == id }

    fun byCategory(category: EffectCategory): List<LecEffect> = registered.filter { it.category == category }
}
