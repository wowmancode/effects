package dev.lec.effectapp

import dev.lec.effectapp.online.MediaOffer
import dev.lec.effectapp.online.Perm
import dev.lec.effectapp.online.RoomState

enum class OnlinePhase { PREPARING, CONNECTING, WAITING, IN_ROOM, ENDED }

data class JoinRequest(val connectionId: String, val name: String, val safetyCode: String)

data class ChatLine(
    val id: Long,
    val name: String,
    val text: String,
    val sentAt: Long,
    val mine: Boolean,
    /** "X joined", "X left" and similar, shown differently from messages. */
    val system: Boolean = false,
)

enum class MediaStatus { HAVE, ASKING, DECLINED, DOWNLOADING, FAILED }

data class RoomMedia(
    val offer: MediaOffer,
    val fromName: String,
    val status: MediaStatus,
    val progress: Float = 0f,
)

data class PluginPrompt(val sourceHash: String, val preview: String, val declined: Boolean = false)

data class OnlineNotice(val id: Long, val text: String)

data class OnlineUi(
    val phase: OnlinePhase = OnlinePhase.CONNECTING,
    val owner: Boolean = false,
    val invite: String? = null,
    val myMemberId: String = "",
    val myName: String = "",
    /** Guest: the code to compare with the owner's screen. */
    val mySafetyCode: String? = null,
    val room: RoomState? = null,
    /** Owner: each member's safety code. */
    val safetyCodes: Map<String, String> = emptyMap(),
    val joinRequests: List<JoinRequest> = emptyList(),
    val chat: List<ChatLine> = emptyList(),
    val media: List<RoomMedia> = emptyList(),
    val pluginPrompts: List<PluginPrompt> = emptyList(),
    val notice: OnlineNotice? = null,
    val endedReason: String? = null,
) {
    val myPerms: Set<Perm>
        get() = if (owner) Perm.entries.toSet() else room?.members?.firstOrNull { it.id == myMemberId }?.perms.orEmpty()
}
