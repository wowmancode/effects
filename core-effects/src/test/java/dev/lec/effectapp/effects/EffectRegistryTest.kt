package dev.lec.effectapp.effects

import org.junit.Assert.assertEquals
import org.junit.Assert.assertNotNull
import org.junit.Test

class EffectRegistryTest {
    @Test
    fun idsAreUniqueAndResolvable() {
        assertEquals(EffectRegistry.all.size, EffectRegistry.all.map { it.id }.distinct().size)
        EffectRegistry.all.forEach { assertNotNull(EffectRegistry.byId(it.id)) }
    }
}
