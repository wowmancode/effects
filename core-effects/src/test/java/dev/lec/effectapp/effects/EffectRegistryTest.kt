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

        val curves = requireNotNull(EffectRegistry.byId("color_curves"))
        assertTrue(curves.params.isEmpty())
        val curvePoints = listOf(
            ColorCurvePoint(0f, 0.1f),
            ColorCurvePoint(0.45f, 0.7f),
            ColorCurvePoint(1f, 0.9f),
        )
        val encodedCurve = ColorCurvesEffect.encodePoints("red", curvePoints)
        assertEquals(3f, encodedCurve["red_point_count"])
        assertEquals(curvePoints, ColorCurvesEffect.decodePoints(encodedCurve, "red"))

        val swirl = requireNotNull(EffectRegistry.byId("swirl"))
        assertEquals(setOf("degrees", "radius", "position_x", "position_y"), swirl.params.map { it.id }.toSet())

        val wave = requireNotNull(EffectRegistry.byId("wave"))
        assertEquals(
            setOf("position_x", "position_y", "strength", "stretch", "speed", "wave_x", "wave_y"),
            wave.params.map { it.id }.toSet(),
        )

        val ripple = requireNotNull(EffectRegistry.byId("ripple"))
        assertEquals(setOf("position_x", "position_y", "strength", "stretch", "speed"), ripple.params.map { it.id }.toSet())

        val invert = requireNotNull(EffectRegistry.byId("color_invert"))
        assertEquals(setOf("invert_red", "invert_green", "invert_blue"), invert.params.map { it.id }.toSet())
        assertNotNull(EffectRegistry.byId("rgb_to_bgr"))
        assertNotNull(EffectRegistry.byId("reverse_video"))
        assertNotNull(EffectRegistry.byId("reverse_audio"))

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
