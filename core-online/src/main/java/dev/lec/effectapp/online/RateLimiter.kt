package dev.lec.effectapp.online

/** Token bucket: [burst] events at once, refilling at [perSecond]. */
class RateLimiter(private val perSecond: Double, private val burst: Double, private val clock: () -> Long = System::nanoTime) {
    private var tokens = burst
    private var last = clock()

    fun tryTake(cost: Double = 1.0): Boolean {
        val now = clock()
        tokens = minOf(burst, tokens + (now - last) / 1e9 * perSecond)
        last = now
        if (tokens < cost) return false
        tokens -= cost
        return true
    }
}
