package dev.lec.effectapp.online

import java.security.SecureRandom

object Names {
    const val MAX_LENGTH = 24

    private val INVISIBLE = Regex("[\\p{Cc}\\p{Cf}\\p{Co}\\p{Cn}\\p{Zl}\\p{Zp}]")
    private val SPACES = Regex("\\s+")

    /**
     * Makes a name safe to show: drops control, zero-width, bidi-override and unassigned
     * characters, squashes spaces and caps the length. Null when nothing is left.
     */
    fun clean(raw: String?): String? {
        if (raw == null) return null
        val cleaned = raw.take(200)
            .replace(INVISIBLE, "")
            .replace(SPACES, " ")
            .trim()
        if (cleaned.isEmpty()) return null
        // Cut by code points so a surrogate pair is never split.
        val end = if (cleaned.codePointCount(0, cleaned.length) > MAX_LENGTH) {
            cleaned.offsetByCodePoints(0, MAX_LENGTH)
        } else cleaned.length
        return cleaned.substring(0, end).trim().ifEmpty { null }
    }

    private val ADJECTIVES = listOf(
        "Teal", "Amber", "Quiet", "Brave", "Lucky", "Swift", "Misty", "Sunny", "Cosmic", "Velvet",
        "Neon", "Silver", "Rusty", "Mellow", "Fuzzy", "Crimson", "Golden", "Frosty", "Jolly", "Witty",
        "Electric", "Hidden", "Gentle", "Bold", "Pixel", "Lunar", "Mossy", "Stormy", "Dusty", "Zesty",
    )
    private val ANIMALS = listOf(
        "Otter", "Falcon", "Panda", "Lynx", "Gecko", "Heron", "Badger", "Koala", "Marten", "Puffin",
        "Fox", "Owl", "Moth", "Newt", "Bison", "Crane", "Ferret", "Ibis", "Jackal", "Lemur",
        "Mole", "Narwhal", "Orca", "Quokka", "Raven", "Seal", "Tapir", "Vole", "Wombat", "Yak",
    )

    fun random(random: SecureRandom = SecureRandom()): String =
        "${ADJECTIVES[random.nextInt(ADJECTIVES.size)]} ${ANIMALS[random.nextInt(ANIMALS.size)]}"

    /** [wanted] if nobody in [taken] uses it (ignoring case), otherwise "wanted (2)", "(3)", ... */
    fun unique(wanted: String, taken: Collection<String>): String {
        val lower = taken.map { it.lowercase() }.toSet()
        if (wanted.lowercase() !in lower) return wanted
        var n = 2
        while (true) {
            val candidate = "$wanted ($n)"
            if (candidate.lowercase() !in lower) return candidate
            n++
        }
    }
}
