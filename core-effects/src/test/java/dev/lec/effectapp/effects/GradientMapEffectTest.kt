package dev.lec.effectapp.effects

import org.junit.Assert.assertEquals
import org.junit.Assert.assertTrue
import org.junit.Test

class GradientMapEffectTest {
    @Test
    fun emptyValuesStartWithThreeColorStops() {
        val stops = GradientMapEffect.decodeStops(emptyMap())

        assertEquals(3, stops.size)
        assertEquals(listOf(0f, 0.5f, 1f), stops.map { it.position })
        assertTrue(stops.all { it.alpha == 1f })
    }

    @Test
    fun addedStopsRoundTripInPositionOrder() {
        val stops = GradientMapEffect.defaultStops + GradientColorStop(0.25f, 0.2f, 0.3f, 0.4f, 0.35f)

        val decoded = GradientMapEffect.decodeStops(GradientMapEffect.encodeStops(stops))

        assertEquals(4, decoded.size)
        assertEquals(listOf(0f, 0.25f, 0.5f, 1f), decoded.map { it.position })
        assertEquals(0.35f, decoded[1].alpha)
        assertTrue(
            decoded.all {
                it.red in 0f..1f && it.green in 0f..1f && it.blue in 0f..1f && it.alpha in 0f..1f
            },
        )
    }

    @Test
    fun olderRgbStopsDefaultToOpaqueAlpha() {
        val decoded = GradientMapEffect.decodeStops(mapOf("stop_count" to 2f))

        assertTrue(decoded.all { it.alpha == 1f })
    }
}
