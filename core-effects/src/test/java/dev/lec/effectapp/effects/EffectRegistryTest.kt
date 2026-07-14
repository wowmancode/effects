package dev.lec.effectapp.effects

import org.junit.Assert.assertEquals
import org.junit.Assert.assertNotNull
import org.junit.Assert.assertTrue
import org.junit.Test

class EffectRegistryTest {
    @Test
    fun idsAreUniqueAndResolvable() {
        assertEquals(EffectRegistry.all.size, EffectRegistry.all.map { it.id }.distinct().size)
        EffectRegistry.all.forEach { assertNotNull(EffectRegistry.byId(it.id)) }
    }

    @Test
    fun requestedSpatialEffectsExposeExpectedControls() {
        val hsl = requireNotNull(EffectRegistry.byId("hsl_adjust"))
        assertEquals(setOf("hue", "saturation", "lightness"), hsl.params.map { it.id }.toSet())
        assertTrue(hsl.params.all { it.min == 0f && it.max == 1f })

        val swirl = requireNotNull(EffectRegistry.byId("swirl"))
        assertEquals(setOf("degrees", "radius", "position_x", "position_y"), swirl.params.map { it.id }.toSet())

        val wave = requireNotNull(EffectRegistry.byId("wave"))
        assertEquals(setOf("position_x", "position_y", "strength", "stretch"), wave.params.map { it.id }.toSet())

        val pinch = requireNotNull(EffectRegistry.byId("pinch_bulge"))
        assertTrue(pinch.params.any { it.id == "radius" })
        val strength = requireNotNull(pinch.params.find { it.id == "strength" })
        assertEquals(-1f, strength.min)
        assertEquals(1f, strength.max)

        val glow = requireNotNull(EffectRegistry.byId("glow"))
        assertEquals(setOf("radius", "strength", "threshold"), glow.params.map { it.id }.toSet())

        val godRays = requireNotNull(EffectRegistry.byId("god_rays"))
        assertTrue(godRays.params.any { it.id == "position_x" })

        val mirror = requireNotNull(EffectRegistry.byId("mirror"))
        val sourceSide = requireNotNull(mirror.params.singleOrNull { it.id == "source_side" })
        assertEquals(0f, sourceSide.min)
        assertEquals(3f, sourceSide.max)
    }
}
