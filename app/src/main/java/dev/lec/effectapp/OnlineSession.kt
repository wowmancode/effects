package dev.lec.effectapp

import android.net.Uri
import dev.lec.effectapp.model.Clip
import dev.lec.effectapp.model.EditProject
import dev.lec.effectapp.model.TimelineSegment
import dev.lec.effectapp.online.Codec
import dev.lec.effectapp.online.EffectCatalog
import dev.lec.effectapp.online.GuestSync
import dev.lec.effectapp.online.HandshakeBox
import dev.lec.effectapp.online.Handshake
import dev.lec.effectapp.online.Invite
import dev.lec.effectapp.online.MediaOffer
import dev.lec.effectapp.online.MediaRef
import dev.lec.effectapp.online.MemberInfo
import dev.lec.effectapp.online.Msg
import dev.lec.effectapp.online.Names
import dev.lec.effectapp.online.Op
import dev.lec.effectapp.online.PairKeys
import dev.lec.effectapp.online.Perm
import dev.lec.effectapp.online.PermissionCheck
import dev.lec.effectapp.online.ProjectSync
import dev.lec.effectapp.online.RateLimiter
import dev.lec.effectapp.online.RoomKeys
import dev.lec.effectapp.online.RoomState
import dev.lec.effectapp.online.SegmentList
import dev.lec.effectapp.online.SessionCipher
import dev.lec.effectapp.online.SessionIdentity
import dev.lec.effectapp.online.Wire
import dev.lec.effectapp.online.WireValidator
import dev.lec.effectapp.online.sha256Hex
import java.io.File
import java.io.FileOutputStream
import java.security.MessageDigest
import java.security.SecureRandom
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.Job
import kotlinx.coroutines.cancel
import kotlinx.coroutines.channels.Channel
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch
import kotlinx.coroutines.sync.Mutex
import kotlinx.coroutines.sync.withLock
import kotlinx.coroutines.withContext

/** How a room starts: created here (owner) or joined from an invite (guest). */
internal sealed interface RoomStart {
    val invite: Invite
    val name: String

    data class Create(
        override val invite: Invite,
        override val name: String,
        val maxMembers: Int,
        val defaultPerms: Set<Perm>,
        val mediaCapMb: Int,
    ) : RoomStart

    data class Join(override val invite: Invite, override val name: String) : RoomStart
}

/**
 * One online room, from this phone's side. The owner's phone is the hub: guests only talk to
 * the owner, who checks every change against that guest's permissions, applies it and passes
 * it on. All traffic is end-to-end encrypted per owner-guest pair; the relay server in the
 * middle only sees ciphertext.
 *
 * Everything here runs on the main thread, one event at a time (see [events]); file reads,
 * writes and hashing hop to the IO dispatcher.
 */
internal class OnlineSession(
    private val start: RoomStart,
    private val editor: EditorViewModel,
    private val media: OnlineMedia,
    private val catalog: EffectCatalog,
    parentScope: CoroutineScope,
) {
    private val owner = start is RoomStart.Create
    private val scope = CoroutineScope(parentScope.coroutineContext + Job())
    private val keys = RoomKeys(start.invite.secret)
    private val identity = SessionIdentity.create()
    private val validator = WireValidator(catalog)
    private val permissions = PermissionCheck(catalog)
    private val random = SecureRandom()
    private var relay: RelayClient? = null

    private val _ui = MutableStateFlow(
        OnlineUi(
            phase = if (owner) OnlinePhase.PREPARING else OnlinePhase.CONNECTING,
            owner = owner,
            invite = if (owner) start.invite.format() else null,
            myName = start.name,
            myMemberId = if (owner) OWNER_ID else "",
        ),
    )
    val ui: StateFlow<OnlineUi> = _ui.asStateFlow()

    private sealed interface Event {
        data class Ready(val connectionId: String) : Event
        data class RelayEvent(val json: String) : Event
        data class Binary(val bytes: ByteArray) : Event
        data class Closed(val reason: String) : Event
        data object LocalChanged : Event
        data class Hashed(val results: Map<String, MediaOffer?>) : Event
        data class Run(val block: suspend () -> Unit) : Event
    }

    private val events = Channel<Event>(Channel.UNLIMITED)

    // Shared state
    private var lastWire = EditProject(createdAt = 0)
    private var ended = false
    private var hashing = false
    private var localJob: Job? = null
    private var nextFragmentId = 1
    private var nextChatId = 1L
    private var nextNoticeId = 1L
    private val offers = LinkedHashMap<String, MediaOffer>()
    private val approvedPlugins = HashSet<String>()
    /** Plug-in code waiting for approval, by where it sits (see [locationKey]). */
    private val blockedPlugins = HashMap<String, Pair<String, String>>()
    private val incoming = HashMap<String, Incoming>()

    // Owner state
    private var hostProject = EditProject(createdAt = 0)
    private var version = 0L
    private var room = RoomState(2, false, 100, emptySet(), emptyList())
    private val peers = LinkedHashMap<String, Peer>()
    private val uploadFrom = HashMap<String, String>()
    private val waitingFor = HashMap<String, MutableSet<String>>()

    // Guest state
    private var ownerPeer: Peer? = null
    private var sync: GuestSync? = null
    private var batchId = 0L

    private enum class PeerState { NEW, AWAITING_APPROVAL, ADMITTED }

    private inner class Peer(val connectionId: String) {
        var state = PeerState.NEW
        var cipher: SessionCipher? = null
        val decoder = Wire.Decoder()
        val sendLock = Mutex()
        var memberId = ""
        var name = ""
        var safetyCode = ""
        val frames = RateLimiter(perSecond = 400.0, burst = 1_200.0)
        val batches = RateLimiter(perSecond = 30.0, burst = 120.0)
        val chats = RateLimiter(perSecond = 1.0, burst = 5.0)
        val requests = RateLimiter(perSecond = 5.0, burst = 60.0)
    }

    private class Incoming(
        val hash: String,
        val size: Long,
        val from: String,
        val file: File,
        val output: FileOutputStream,
        val digest: MessageDigest = MessageDigest.getInstance("SHA-256"),
        var nextIndex: Int = 0,
        var written: Long = 0,
        var lastProgress: Float = 0f,
    )

    private val capBytes: Long get() = (if (owner) room.mediaCapMb else (_ui.value.room?.mediaCapMb ?: 50)).toLong() * 1024 * 1024

    // ---------------------------------------------------------------- lifecycle

    fun start() {
        scope.launch { for (event in events) if (!ended) runCatching { handle(event) }.onFailure { failSafely(it) } }
        if (start is RoomStart.Create) {
            room = RoomState(
                maxMembers = start.maxMembers.coerceIn(2, RoomState.HARD_MAX_MEMBERS),
                mediaCapMb = start.mediaCapMb,
                defaultPerms = start.defaultPerms,
                members = listOf(MemberInfo(OWNER_ID, start.name, owner = true, perms = Perm.entries.toSet())),
            )
            _ui.update { it.copy(room = room) }
            scope.launch { prepareOwner() }
        } else connect()
        editor.relinkHook = hook
    }

    private val hook: (String, String, String, Long) -> Boolean = { old, new, name, duration -> relinkHook(old, new, name, duration) }

    private suspend fun prepareOwner() {
        val local = editor.project.value
        val uris = unhashedUris(local)
        for (uri in uris) {
            val offer = media.describe(uri, capBytes)
            if (offer == null) {
                end("Couldn't share \"${displayNameFor(local, uri)}\". Find any missing media, and keep files under the room's ${room.mediaCapMb} MB limit.")
                return
            }
            media.register(offer.hash, uri, offer.copy(from = OWNER_ID))
        }
        if (ended) return
        hostProject = toWire(local)
        validator.checkProject(hostProject)?.let { end("This edit can't be shared: $it"); return }
        lastWire = hostProject
        ProjectSync.mediaHashes(hostProject).forEach { hash -> media.metaFor(hash)?.let { offers[hash] = it.copy(from = OWNER_ID) } }
        refreshMediaUi()
        connect()
    }

    private fun connect() {
        _ui.update { it.copy(phase = if (it.phase == OnlinePhase.PREPARING) OnlinePhase.CONNECTING else it.phase) }
        val client = RelayClient(start.invite.host, keys.roomId, owner, object : RelayClient.Listener {
            override fun onReady(connectionId: String) { events.trySend(Event.Ready(connectionId)) }
            override fun onEvent(json: String) { events.trySend(Event.RelayEvent(json)) }
            override fun onBinary(bytes: ByteArray) { events.trySend(Event.Binary(bytes)) }
            override fun onClosed(reason: String) { events.trySend(Event.Closed(reason)) }
        })
        relay = client
        client.connect()
    }

    /** Guest: leave the room. Owner: end it for everyone. */
    fun leave() {
        post {
            if (owner) {
                peers.values.filter { it.state != PeerState.NEW }.forEach { sendMsg(it, Msg.Ended("The owner ended the room.")) }
                end("You ended the room.")
            } else {
                ownerPeer?.let { sendMsg(it, Msg.Leave) }
                end("You left the room.")
            }
        }
    }

    /** Closes the connection right away (the app is closing). */
    fun shutdown() {
        ended = true
        relay?.close()
        media.clear()
    }

    private fun end(reason: String) {
        if (ended) return
        ended = true
        localJob?.cancel()
        incoming.values.forEach { runCatching { it.output.close(); it.file.delete() } }
        incoming.clear()
        if (editor.relinkHook === hook) editor.relinkHook = null
        // Give queued goodbyes a moment to go out before the socket closes.
        val client = relay
        scope.launch {
            delay(300)
            client?.close()
            media.clear()
            scope.cancel()
        }
        _ui.update { it.copy(phase = OnlinePhase.ENDED, endedReason = reason, joinRequests = emptyList()) }
    }

    private fun failSafely(error: Throwable) {
        if (error is kotlinx.coroutines.CancellationException) return
        end("Something went wrong in the room, so it was closed. (${error.javaClass.simpleName})")
    }

    private fun post(block: suspend () -> Unit) {
        events.trySend(Event.Run(block))
    }

    // ---------------------------------------------------------------- events

    private suspend fun handle(event: Event) {
        when (event) {
            is Event.Ready -> onReady()
            is Event.RelayEvent -> if (owner) onRelayEvent(event.json)
            is Event.Binary -> onBinary(event.bytes)
            is Event.Closed -> end(
                if (owner) event.reason
                else if (_ui.value.phase == OnlinePhase.IN_ROOM) "The room closed. ${event.reason}" else event.reason,
            )
            Event.LocalChanged -> onLocalChanged()
            is Event.Hashed -> onHashed(event.results)
            is Event.Run -> event.block()
        }
    }

    private suspend fun onReady() {
        if (owner) {
            _ui.update { it.copy(phase = OnlinePhase.IN_ROOM) }
            watchLocalEdits()
        } else {
            val peer = Peer("")
            ownerPeer = peer
            val hello = Handshake.GuestHello(1, Codec.base64Url(identity.publicBytes), start.name)
            relay?.send(byteArrayOf(KIND_HANDSHAKE) + HandshakeBox.seal(keys.roomKey, aad(GUEST_TO_OWNER), Wire.handshake(hello)))
        }
    }

    private suspend fun onRelayEvent(json: String) {
        val match = RELAY_EVENT.matchEntire(json) ?: return
        val (kind, id) = match.destructured
        when (kind) {
            "joined" -> if (peers.size < MAX_CONNECTIONS) peers[id] = Peer(id) else relay?.sendEvent(kickJson(id))
            "left" -> removePeer(id, left = true)
        }
    }

    private suspend fun onBinary(bytes: ByteArray) {
        if (owner) {
            if (bytes.size <= ID_BYTES + 1) return
            val id = Codec.hex(bytes.copyOfRange(0, ID_BYTES))
            val peer = peers[id] ?: return
            if (!peer.frames.tryTake()) return
            val payload = bytes.copyOfRange(ID_BYTES, bytes.size)
            when (payload[0]) {
                KIND_HANDSHAKE -> if (peer.state == PeerState.NEW) onGuestHello(peer, payload)
                KIND_SESSION -> {
                    val plain = peer.cipher?.open(payload.copyOfRange(1, payload.size)) ?: return
                    when (val frame = peer.decoder.decode(plain)) {
                        is Wire.Frame.Message -> onGuestMessage(peer, frame.msg)
                        is Wire.Frame.Chunk -> if (peer.state == PeerState.ADMITTED) onChunk(peer.memberId, frame)
                        null -> Unit
                    }
                }
            }
        } else {
            if (bytes.size < 2) return
            val peer = ownerPeer ?: return
            when (bytes[0]) {
                KIND_HANDSHAKE -> if (peer.cipher == null) onOwnerHello(peer, bytes)
                KIND_SESSION -> {
                    val plain = peer.cipher?.open(bytes.copyOfRange(1, bytes.size)) ?: return
                    when (val frame = peer.decoder.decode(plain)) {
                        is Wire.Frame.Message -> onOwnerMessage(frame.msg)
                        is Wire.Frame.Chunk -> onChunk(OWNER_ID, frame)
                        null -> Unit
                    }
                }
            }
        }
    }

    // ---------------------------------------------------------------- joining (owner side)

    private suspend fun onGuestHello(peer: Peer, payload: ByteArray) {
        val hello = HandshakeBox.open(keys.roomKey, aad(GUEST_TO_OWNER), payload.copyOfRange(1, payload.size))
            ?.let { Wire.handshake(it) } as? Handshake.GuestHello ?: return
        val guestKey = Codec.fromBase64Url(hello.key) ?: return
        val shared = identity.agree(guestKey) ?: return
        val refusal = when {
            hello.version != 1 -> "This app version can't join that room. Update the app."
            room.locked -> "The room is locked."
            admittedCount() + awaitingCount() + 1 >= room.maxMembers -> "The room is full."
            awaitingCount() >= 5 -> "Too many people are waiting to join. Try again in a moment."
            else -> null
        }
        if (refusal != null) {
            relay?.send(idBytes(peer.connectionId) + byteArrayOf(KIND_HANDSHAKE) +
                HandshakeBox.seal(keys.roomKey, aad(OWNER_TO_GUEST), Wire.handshake(Handshake.Refused(refusal))))
            scope.launch { delay(500); relay?.sendEvent(kickJson(peer.connectionId)) }
            peers.remove(peer.connectionId)
            return
        }
        val pair = PairKeys.derive(shared, keys.roomKey, identity.publicBytes, guestKey)
        peer.cipher = SessionCipher(pair.ownerToGuest, pair.guestToOwner)
        peer.safetyCode = pair.safetyCode
        peer.name = Names.clean(hello.name) ?: "Guest"
        peer.state = PeerState.AWAITING_APPROVAL
        relay?.send(idBytes(peer.connectionId) + byteArrayOf(KIND_HANDSHAKE) +
            HandshakeBox.seal(keys.roomKey, aad(OWNER_TO_GUEST), Wire.handshake(Handshake.OwnerHello(Codec.base64Url(identity.publicBytes)))))
        _ui.update { it.copy(joinRequests = it.joinRequests + JoinRequest(peer.connectionId, peer.name, peer.safetyCode)) }
    }

    fun approve(connectionId: String) = post {
        val peer = peers[connectionId]?.takeIf { it.state == PeerState.AWAITING_APPROVAL } ?: return@post
        _ui.update { ui -> ui.copy(joinRequests = ui.joinRequests.filterNot { it.connectionId == connectionId }) }
        if (admittedCount() + 1 >= room.maxMembers) {
            sendMsg(peer, Msg.Kicked("The room filled up."))
            dropPeer(peer)
            notice("The room is full. Raise the limit to let more people in.")
            return@post
        }
        peer.state = PeerState.ADMITTED
        peer.memberId = Codec.hex(ByteArray(4).also(random::nextBytes))
        peer.name = Names.unique(peer.name, room.members.map { it.name })
        room = room.copy(members = room.members + MemberInfo(peer.memberId, peer.name, perms = room.defaultPerms))
        _ui.update { ui -> ui.copy(safetyCodes = ui.safetyCodes + (peer.memberId to peer.safetyCode)) }
        sendMsg(peer, Msg.Admitted(peer.memberId, version, hostProject, room))
        val used = ProjectSync.mediaHashes(hostProject)
        offers.values.filter { it.hash in used }.forEach { sendMsg(peer, Msg.OfferOut(it)) }
        broadcastRoom()
        systemChat("${peer.name} joined")
    }

    fun deny(connectionId: String) = post {
        val peer = peers[connectionId] ?: return@post
        _ui.update { ui -> ui.copy(joinRequests = ui.joinRequests.filterNot { it.connectionId == connectionId }) }
        sendMsg(peer, Msg.Kicked("The owner didn't let you in."))
        dropPeer(peer)
    }

    fun kick(memberId: String) = post {
        val peer = peers.values.firstOrNull { it.memberId == memberId && it.state == PeerState.ADMITTED } ?: return@post
        sendMsg(peer, Msg.Kicked("The owner removed you from the room."))
        dropPeer(peer)
        removePeer(peer.connectionId, left = false)
        systemChat("${peer.name} was removed")
    }

    private fun dropPeer(peer: Peer) {
        scope.launch {
            delay(300)
            relay?.sendEvent(kickJson(peer.connectionId))
        }
    }

    private suspend fun removePeer(connectionId: String, left: Boolean) {
        val peer = peers.remove(connectionId) ?: return
        _ui.update { ui -> ui.copy(joinRequests = ui.joinRequests.filterNot { it.connectionId == connectionId }) }
        if (peer.state != PeerState.ADMITTED) return
        room = room.copy(members = room.members.filterNot { it.id == peer.memberId })
        _ui.update { ui -> ui.copy(safetyCodes = ui.safetyCodes - peer.memberId) }
        broadcastRoomLater()
        if (left) systemChat("${peer.name} left")
        // Uploads this person was sending can't finish now.
        incoming.values.filter { it.from == peer.memberId }.forEach { abortIncoming(it) }
        uploadFrom.filterValues { it == peer.memberId }.keys.toList().forEach { hash ->
            uploadFrom.remove(hash)
            failWaiting(hash, "The person who shared it left.")
        }
        waitingFor.values.forEach { it.remove(peer.memberId) }
    }

    private fun admittedCount() = peers.values.count { it.state == PeerState.ADMITTED }
    private fun awaitingCount() = peers.values.count { it.state == PeerState.AWAITING_APPROVAL }
    private fun admitted() = peers.values.filter { it.state == PeerState.ADMITTED }
    private fun peerFor(memberId: String) = peers.values.firstOrNull { it.memberId == memberId && it.state == PeerState.ADMITTED }

    // ---------------------------------------------------------------- room settings (owner)

    fun setMaxMembers(value: Int) = post {
        val minimum = maxOf(2, admittedCount() + 1)
        room = room.copy(maxMembers = value.coerceIn(minimum, RoomState.HARD_MAX_MEMBERS))
        broadcastRoom()
    }

    fun setLocked(locked: Boolean) = post {
        room = room.copy(locked = locked)
        broadcastRoom()
    }

    fun setMediaCap(mb: Int) = post {
        room = room.copy(mediaCapMb = mb.coerceIn(RoomState.MEDIA_CAPS_MB.first(), RoomState.MEDIA_CAPS_MB.last()))
        broadcastRoom()
    }

    fun setDefaultPerms(perms: Set<Perm>, applyToEveryone: Boolean) = post {
        room = room.copy(
            defaultPerms = perms,
            members = if (applyToEveryone) room.members.map { if (it.owner) it else it.copy(perms = perms) } else room.members,
        )
        broadcastRoom()
    }

    fun setMemberPerms(memberId: String, perms: Set<Perm>) = post {
        room = room.copy(members = room.members.map { if (it.id == memberId && !it.owner) it.copy(perms = perms) else it })
        broadcastRoom()
    }

    private suspend fun broadcastRoom() {
        _ui.update { it.copy(room = room) }
        refreshMediaUi()
        admitted().forEach { sendMsg(it, Msg.Room(room)) }
    }

    private fun broadcastRoomLater() = post { broadcastRoom() }

    private fun permsOf(memberId: String): Set<Perm> = room.members.firstOrNull { it.id == memberId }?.perms.orEmpty()

    // ---------------------------------------------------------------- joining (guest side)

    private suspend fun onOwnerHello(peer: Peer, bytes: ByteArray) {
        when (val reply = HandshakeBox.open(keys.roomKey, aad(OWNER_TO_GUEST), bytes.copyOfRange(1, bytes.size))?.let { Wire.handshake(it) }) {
            is Handshake.OwnerHello -> {
                val ownerKey = Codec.fromBase64Url(reply.key) ?: return
                val shared = identity.agree(ownerKey) ?: return
                val pair = PairKeys.derive(shared, keys.roomKey, ownerKey, identity.publicBytes)
                peer.cipher = SessionCipher(pair.guestToOwner, pair.ownerToGuest)
                _ui.update { it.copy(phase = OnlinePhase.WAITING, mySafetyCode = pair.safetyCode) }
            }
            is Handshake.Refused -> end(Names.clean(reply.reason.take(200)) ?: "The room refused the request.")
            else -> Unit
        }
    }

    // ---------------------------------------------------------------- messages

    private suspend fun onGuestMessage(peer: Peer, msg: Msg) {
        if (peer.state == PeerState.AWAITING_APPROVAL) {
            if (msg is Msg.Leave) removePeer(peer.connectionId, left = true)
            return
        }
        if (peer.state != PeerState.ADMITTED) return
        when (msg) {
            is Msg.Batch -> if (peer.batches.tryTake()) onGuestBatch(peer, msg)
            is Msg.Chat -> if (peer.chats.tryTake()) {
                val text = cleanChat(msg.text) ?: return
                val line = Msg.ChatOut(peer.memberId, peer.name, text, System.currentTimeMillis())
                admitted().forEach { sendMsg(it, line) }
                appendChat(line)
            }
            is Msg.Offer -> if (peer.requests.tryTake()) onGuestOffer(peer, msg.offer)
            is Msg.Want -> if (peer.requests.tryTake()) onWant(peer.memberId, msg.hash)
            is Msg.MediaStart -> onMediaStart(peer.memberId, msg)
            is Msg.MediaEnd -> onMediaEnd(peer.memberId, msg.hash)
            is Msg.MediaFailed -> incoming[msg.hash]?.takeIf { it.from == peer.memberId }?.let {
                abortIncoming(it)
                uploadFrom.remove(msg.hash)
                failWaiting(msg.hash, "The upload failed.")
            }
            Msg.Leave -> {
                dropPeer(peer)
                removePeer(peer.connectionId, left = true)
            }
            else -> Unit
        }
    }

    private suspend fun onGuestBatch(peer: Peer, batch: Msg.Batch) {
        val refusal = validator.checkOps(batch.ops)
            ?: permissions.refusal(permissions.needs(hostProject, batch.ops), permsOf(peer.memberId), isOwner = false)
            ?: run {
                val known = ProjectSync.mediaHashes(hostProject)
                val unshared = batch.ops.flatMap { ProjectSync.opMediaHashes(it) }.any { it !in known && it !in offers }
                if (unshared) "That media wasn't shared with the room." else null
            }
            ?: validator.checkLimits(ProjectSync.apply(hostProject, batch.ops))
        if (refusal != null) {
            sendMsg(peer, Msg.BatchRefused(batch.batchId, refusal))
            return
        }
        commit(batch.ops, from = peer.memberId, batchId = batch.batchId)
    }

    /** Owner: makes [ops] part of the room's project and passes them to everyone. */
    private suspend fun commit(ops: List<Op>, from: String, batchId: Long) {
        val before = hostProject
        hostProject = ProjectSync.apply(hostProject, ops)
        version++
        val message = Msg.Ops(version, from, batchId, ops)
        admitted().forEach { sendMsg(it, message) }
        if (from != OWNER_ID) applyWireChange(before, hostProject, alsoHistory = true)
        else lastWire = hostProject
    }

    private suspend fun onOwnerMessage(msg: Msg) {
        when (msg) {
            is Msg.Admitted -> onAdmitted(msg)
            is Msg.Room -> {
                if (msg.room.members.size > RoomState.HARD_MAX_MEMBERS) return
                val cleaned = msg.room.copy(members = msg.room.members.map { it.copy(name = Names.clean(it.name) ?: "Guest") })
                _ui.update { it.copy(room = cleaned) }
            }
            is Msg.Ops -> {
                val sync = sync ?: return
                if (validator.checkOps(msg.ops) != null) return end("The room sent a change this phone couldn't check, so it left.")
                val before = sync.view
                val own = msg.from == _ui.value.myMemberId
                sync.onConfirmed(msg.version, msg.ops, own = own, batchId = msg.batchId)
                applyWireChange(before, sync.view, alsoHistory = !own)
            }
            is Msg.BatchRefused -> {
                val sync = sync ?: return
                val before = sync.view
                sync.refused(msg.batchId)
                applyWireChange(before, sync.view, alsoHistory = false)
                notice(Names.clean(msg.reason.take(200)) ?: "The owner didn't accept that change.")
            }
            is Msg.Snapshot -> {
                val sync = sync ?: return
                if (validator.checkProject(msg.project) != null) return end("The room sent a project this phone couldn't check, so it left.")
                val before = sync.view
                sync.snapshot(msg.version, msg.project)
                applyWireChange(before, sync.view, alsoHistory = true)
            }
            is Msg.ChatOut -> {
                val text = cleanChat(msg.text) ?: return
                appendChat(msg.copy(text = text, name = Names.clean(msg.name) ?: "Guest"))
            }
            is Msg.OfferOut -> onOffer(msg.offer)
            is Msg.UploadRequest -> if (media.uriFor(msg.hash) != null && offers[msg.hash]?.from == _ui.value.myMemberId) {
                ownerPeer?.let { streamTo(it, msg.hash) }
            }
            is Msg.MediaStart -> onMediaStart(OWNER_ID, msg)
            is Msg.MediaEnd -> onMediaEnd(OWNER_ID, msg.hash)
            is Msg.MediaFailed -> {
                incoming[msg.hash]?.let(::abortIncoming)
                setMediaStatus(msg.hash, MediaStatus.FAILED)
                notice("Couldn't get ${offers[msg.hash]?.name ?: "that file"}: ${Names.clean(msg.reason.take(120)) ?: "it failed"}")
            }
            is Msg.Kicked -> end(Names.clean(msg.reason.take(200)) ?: "You were removed from the room.")
            is Msg.Ended -> end(Names.clean(msg.reason.take(200)) ?: "The room ended.")
            is Msg.Notice -> notice(Names.clean(msg.text.take(200)) ?: return)
            else -> Unit
        }
    }

    private fun onAdmitted(msg: Msg.Admitted) {
        if (sync != null) return
        if (validator.checkProject(msg.project) != null) return end("The room's project couldn't be checked, so this phone didn't join.")
        sync = GuestSync(msg.project, msg.version)
        _ui.update {
            it.copy(
                phase = OnlinePhase.IN_ROOM,
                myMemberId = msg.memberId,
                myName = msg.room.members.firstOrNull { m -> m.id == msg.memberId }?.name ?: start.name,
                room = msg.room,
            )
        }
        lastWire = msg.project
        editor.replaceWithRoomProject(toLocal(msg.project))
        watchLocalEdits()
    }

    // ---------------------------------------------------------------- chat

    fun sendChat(text: String) = post {
        val cleaned = cleanChat(text) ?: return@post
        if (owner) {
            val line = Msg.ChatOut(OWNER_ID, start.name, cleaned, System.currentTimeMillis())
            admitted().forEach { sendMsg(it, line) }
            appendChat(line)
        } else ownerPeer?.let { sendMsg(it, Msg.Chat(cleaned)) }
    }

    private fun appendChat(line: Msg.ChatOut) {
        val entry = ChatLine(nextChatId++, line.name, line.text, line.sentAt, mine = line.from == _ui.value.myMemberId)
        _ui.update { it.copy(chat = (it.chat + entry).takeLast(MAX_CHAT_LINES)) }
    }

    private fun systemChat(text: String) {
        val entry = ChatLine(nextChatId++, "", text, System.currentTimeMillis(), mine = false, system = true)
        _ui.update { it.copy(chat = (it.chat + entry).takeLast(MAX_CHAT_LINES)) }
    }

    private fun notice(text: String) {
        _ui.update { it.copy(notice = OnlineNotice(nextNoticeId++, text)) }
    }

    // ---------------------------------------------------------------- local edits

    private fun watchLocalEdits() {
        localJob?.cancel()
        localJob = scope.launch {
            var pending: Job? = null
            editor.project.collect {
                if (pending?.isActive == true) return@collect
                pending = launch {
                    delay(LOCAL_DEBOUNCE_MS)
                    events.trySend(Event.LocalChanged)
                }
            }
        }
    }

    private suspend fun onLocalChanged() {
        if (_ui.value.phase != OnlinePhase.IN_ROOM) return
        val local = editor.project.value
        val unknown = unhashedUris(local)
        if (unknown.isNotEmpty()) {
            if (!hashing) {
                hashing = true
                scope.launch {
                    val results = unknown.associateWith { media.describe(it, capBytes) }
                    events.trySend(Event.Hashed(results))
                }
            }
            return
        }
        val wire = toWire(local)
        val ops = ProjectSync.diff(lastWire, wire)
        if (ops.isEmpty()) return
        if (owner) ownerLocal(ops) else guestLocal(ops)
    }

    private fun onHashed(results: Map<String, MediaOffer?>) {
        hashing = false
        val failed = results.filterValues { it == null }.keys
        results.forEach { (uri, offer) -> if (offer != null) media.register(offer.hash, uri, offer.copy(from = _ui.value.myMemberId)) }
        if (failed.isNotEmpty()) {
            restoreLocal()
            notice("Couldn't share that file. Files must be readable and under ${capBytes / (1024 * 1024)} MB in this room.")
        }
        events.trySend(Event.LocalChanged)
    }

    private suspend fun ownerLocal(ops: List<Op>) {
        val applied = ProjectSync.apply(hostProject, ops)
        val problem = validator.checkOps(ops) ?: validator.checkLimits(applied)
        if (problem != null) {
            restoreLocal()
            notice(problem)
            return
        }
        val newMedia = ProjectSync.mediaHashes(applied) - ProjectSync.mediaHashes(hostProject)
        newMedia.forEach { hash ->
            if (hash !in offers) {
                val offer = (media.metaFor(hash) ?: return@forEach).copy(from = OWNER_ID)
                offers[hash] = offer
                admitted().forEach { sendMsg(it, Msg.OfferOut(offer)) }
            }
        }
        refreshMediaUi()
        commit(ops, OWNER_ID, 0)
    }

    private suspend fun guestLocal(ops: List<Op>) {
        val sync = sync ?: return
        val refusal = permissions.refusal(permissions.needs(sync.view, ops), _ui.value.myPerms, isOwner = false)
            ?: validator.checkOps(ops)
            ?: validator.checkLimits(ProjectSync.apply(sync.view, ops))
        if (refusal != null) {
            restoreLocal()
            notice(refusal)
            return
        }
        val peer = ownerPeer ?: return
        val known = ProjectSync.mediaHashes(sync.view)
        val newMedia = ops.flatMap { ProjectSync.opMediaHashes(it) }.toSet().filter { it !in known && it !in offers }
        val id = ++batchId
        sync.local(id, ops)
        lastWire = sync.view
        newMedia.forEach { hash ->
            val offer = (media.metaFor(hash) ?: return@forEach).copy(from = _ui.value.myMemberId)
            offers[hash] = offer
            sendMsg(peer, Msg.Offer(offer))
        }
        refreshMediaUi()
        sendMsg(peer, Msg.Batch(id, ops))
    }

    /** Throws away local edits the room hasn't taken (not allowed, too big, unreadable media). */
    private fun restoreLocal() {
        val target = toLocal(lastWire)
        editor.applyRoomChange(alsoHistory = false) { target }
    }

    /** Moves the editor from [before] to [after] (wire forms) without losing unsent local edits. */
    private fun applyWireChange(before: EditProject, after: EditProject, alsoHistory: Boolean) {
        lastWire = after
        val ops = ProjectSync.diff(before, after)
        if (ops.isEmpty()) return
        val localOps = ops.map(::opToLocal)
        editor.applyRoomChange(alsoHistory) { ProjectSync.apply(it, localOps) }
    }

    // ---------------------------------------------------------------- wire <-> local

    private fun unhashedUris(project: EditProject): Set<String> = buildSet {
        fun check(uri: String) {
            if (uri.isNotBlank() && !MediaRef.isRef(uri) && media.hashFor(uri) == null) add(uri)
        }
        fun segments(list: List<TimelineSegment>) = list.forEach { s ->
            s.stringParams.forEach { (k, v) -> if (MediaRef.isUriParam(k)) check(v) }
        }
        project.clips.forEach { clip ->
            check(clip.sourceUri)
            segments(clip.effectSegments)
            segments(clip.audioSegments)
            clip.overlays.forEach { overlay ->
                check(overlay.sourceUri)
                segments(overlay.effectSegments)
                segments(overlay.audioSegments)
            }
        }
    }

    private fun wireUri(uri: String): String =
        if (MediaRef.isRef(uri)) uri else MediaRef.of(requireNotNull(media.hashFor(uri)) { "Unhashed media" })

    private fun localUri(ref: String): String = MediaRef.hashOf(ref)?.let(media::uriFor) ?: ref

    private fun toWire(local: EditProject): EditProject = ProjectSync.normalize(
        local.copy(
            clips = local.clips.map { clip ->
                clip.copy(
                    sourceUri = wireUri(clip.sourceUri),
                    effectSegments = clip.effectSegments.map { segmentToWire(SegmentList(clip.id, null, false), it) },
                    audioSegments = clip.audioSegments.map { segmentToWire(SegmentList(clip.id, null, true), it) },
                    overlays = clip.overlays.map { overlay ->
                        overlay.copy(
                            sourceUri = wireUri(overlay.sourceUri),
                            effectSegments = overlay.effectSegments.map { segmentToWire(SegmentList(clip.id, overlay.id, false), it) },
                            audioSegments = overlay.audioSegments.map { segmentToWire(SegmentList(clip.id, overlay.id, true), it) },
                        )
                    },
                )
            },
        ),
    )

    private fun segmentToWire(at: SegmentList, segment: TimelineSegment): TimelineSegment {
        var strings = segment.stringParams
            .filterNot { (k, v) -> MediaRef.isUriParam(k) && v.isBlank() }
            .mapValues { (k, v) -> if (MediaRef.isUriParam(k)) wireUri(v) else v }
        if (strings["source"] == PLACEHOLDER_SOURCE) {
            val real = blockedPlugins[locationKey(at, segment.id)]
                ?: blockedPlugins.entries.firstOrNull { it.key.endsWith("/${segment.id}") }?.value
            if (real != null) strings = strings + mapOf("source" to real.first, "language" to real.second)
        }
        return segment.copy(stringParams = strings)
    }

    private fun toLocal(wire: EditProject): EditProject =
        ProjectSync.apply(EditProject(name = wire.name, createdAt = System.currentTimeMillis()), ProjectSync.diff(EditProject(name = wire.name, createdAt = 0), wire).map(::opToLocal))

    private fun opToLocal(op: Op): Op = when (op) {
        is Op.PutClip -> Op.PutClip(op.clip.copy(sourceUri = localUri(op.clip.sourceUri), mediaMissing = !resolved(op.clip.sourceUri)))
        is Op.PutOverlay -> Op.PutOverlay(op.clipId, op.overlay.copy(sourceUri = localUri(op.overlay.sourceUri)))
        is Op.PutSegment -> Op.PutSegment(op.at, segmentToLocal(op.at, op.segment))
        else -> op
    }

    private fun resolved(ref: String) = MediaRef.hashOf(ref)?.let(media::uriFor) != null

    private fun segmentToLocal(at: SegmentList, segment: TimelineSegment): TimelineSegment {
        val strings = segment.stringParams.mapValues { (k, v) -> if (MediaRef.isUriParam(k)) localUri(v) else v }
        val source = strings["source"]
        val language = strings["language"]
        if (!owner && language == "glsl" && source != null && catalog.isPlugin(segment.effectId)) {
            val hash = sourceHash(source, language)
            if (hash !in approvedPlugins) {
                blockedPlugins[locationKey(at, segment.id)] = source to language
                askAboutPlugin(hash, source)
                return segment.copy(stringParams = strings + mapOf("source" to PLACEHOLDER_SOURCE, "language" to "c_style"))
            }
        }
        return segment.copy(stringParams = strings)
    }

    private fun locationKey(at: SegmentList, segmentId: String) = "${at.clipId}/${at.overlayId}/${at.audio}/$segmentId"

    private fun sourceHash(source: String, language: String): String =
        Codec.hex(MessageDigest.getInstance("SHA-256").digest("$language\n$source".toByteArray()))

    private fun displayNameFor(project: EditProject, uri: String): String =
        project.clips.firstOrNull { it.sourceUri == uri }?.displayName
            ?: project.clips.flatMap { it.overlays }.firstOrNull { it.sourceUri == uri }?.displayName
            ?: "a file"

    /** Points every use of [hash] at the file this phone now has for it. */
    private fun remapMedia(hash: String) {
        val uri = media.uriFor(hash) ?: return
        val ref = MediaRef.of(hash)
        fun segments(list: List<TimelineSegment>) = list.map { s ->
            if (s.stringParams.none { (k, v) -> MediaRef.isUriParam(k) && v == ref }) s
            else s.copy(stringParams = s.stringParams.mapValues { (k, v) -> if (MediaRef.isUriParam(k) && v == ref) uri else v })
        }
        editor.applyRoomChange(alsoHistory = true) { project ->
            project.copy(
                clips = project.clips.map { clip: Clip ->
                    clip.copy(
                        sourceUri = if (clip.sourceUri == ref) uri else clip.sourceUri,
                        mediaMissing = if (clip.sourceUri == ref) false else clip.mediaMissing,
                        effectSegments = segments(clip.effectSegments),
                        audioSegments = segments(clip.audioSegments),
                        overlays = clip.overlays.map { overlay ->
                            overlay.copy(
                                sourceUri = if (overlay.sourceUri == ref) uri else overlay.sourceUri,
                                effectSegments = segments(overlay.effectSegments),
                                audioSegments = segments(overlay.audioSegments),
                            )
                        },
                    )
                },
            )
        }
    }

    // ---------------------------------------------------------------- plug-in approval (guest)

    private fun askAboutPlugin(hash: String, source: String) {
        if (_ui.value.pluginPrompts.any { it.sourceHash == hash }) return
        _ui.update { it.copy(pluginPrompts = it.pluginPrompts + PluginPrompt(hash, source.take(600))) }
    }

    fun approvePlugin(hash: String) = post {
        approvedPlugins += hash
        _ui.update { ui -> ui.copy(pluginPrompts = ui.pluginPrompts.filterNot { it.sourceHash == hash }) }
        val toRestore = blockedPlugins.filterValues { (source, language) -> sourceHash(source, language) == hash }
        if (toRestore.isEmpty()) return@post
        fun restore(clipId: String, overlayId: String?, audio: Boolean, list: List<TimelineSegment>) = list.map { s ->
            val real = toRestore[locationKey(SegmentList(clipId, overlayId, audio), s.id)]
            if (real == null || s.stringParams["source"] != PLACEHOLDER_SOURCE) s
            else s.copy(stringParams = s.stringParams + mapOf("source" to real.first, "language" to real.second))
        }
        editor.applyRoomChange(alsoHistory = true) { project ->
            project.copy(
                clips = project.clips.map { clip ->
                    clip.copy(
                        effectSegments = restore(clip.id, null, false, clip.effectSegments),
                        audioSegments = restore(clip.id, null, true, clip.audioSegments),
                        overlays = clip.overlays.map { o ->
                            o.copy(
                                effectSegments = restore(clip.id, o.id, false, o.effectSegments),
                                audioSegments = restore(clip.id, o.id, true, o.audioSegments),
                            )
                        },
                    )
                },
            )
        }
    }

    fun declinePlugin(hash: String) = post {
        _ui.update { ui -> ui.copy(pluginPrompts = ui.pluginPrompts.map { if (it.sourceHash == hash) it.copy(declined = true) else it }) }
    }

    // ---------------------------------------------------------------- media offers

    private fun validOffer(offer: MediaOffer): MediaOffer? {
        if (!HASH.matches(offer.hash)) return null
        if (offer.size <= 0 || offer.size > RoomState.MEDIA_CAPS_MB.last().toLong() * 1024 * 1024) return null
        return offer.copy(name = Names.clean(offer.name)?.take(100) ?: "Media")
    }

    private suspend fun onGuestOffer(peer: Peer, raw: MediaOffer) {
        if (Perm.ADD_MEDIA !in permsOf(peer.memberId)) return
        val offer = validOffer(raw)?.copy(from = peer.memberId) ?: return
        if (offer.size > capBytes || offer.hash in offers) return
        offers[offer.hash] = offer
        admitted().filter { it !== peer }.forEach { sendMsg(it, Msg.OfferOut(offer)) }
        considerOffer(offer)
    }

    private fun onOffer(raw: MediaOffer) {
        val offer = validOffer(raw) ?: return
        offers[offer.hash] = offer
        considerOffer(offer)
    }

    /** Uses media this phone already has, otherwise asks. */
    private fun considerOffer(offer: MediaOffer) {
        if (!media.isUsable(offer.hash)) {
            media.receivedFile(offer.hash)?.let { file ->
                media.register(offer.hash, Uri.fromFile(file).toString(), offer)
                remapMedia(offer.hash)
            }
        }
        refreshMediaUi()
    }

    private val mediaStatus = HashMap<String, MediaStatus>()
    private val mediaProgress = HashMap<String, Float>()

    private fun refreshMediaUi() {
        val names = (room.members + (_ui.value.room?.members ?: emptyList())).associate { it.id to it.name }
        val list = offers.values.map { offer ->
            val status = when {
                media.isUsable(offer.hash) -> MediaStatus.HAVE
                else -> mediaStatus[offer.hash] ?: MediaStatus.ASKING
            }
            RoomMedia(
                offer = offer,
                fromName = names[offer.from] ?: if (offer.from == OWNER_ID) "Owner" else "Someone",
                status = status,
                progress = mediaProgress[offer.hash] ?: 0f,
            )
        }
        _ui.update { it.copy(media = list) }
    }

    private fun setMediaStatus(hash: String, status: MediaStatus) {
        mediaStatus[hash] = status
        refreshMediaUi()
    }

    fun acceptMedia(hash: String) = post {
        val offer = offers[hash] ?: return@post
        if (media.isUsable(hash)) return@post
        if (offer.size > capBytes) {
            notice("${offer.name} is bigger than this room's ${capBytes / (1024 * 1024)} MB limit.")
            return@post
        }
        setMediaStatus(hash, MediaStatus.DOWNLOADING)
        if (owner) {
            val relayCopy = media.relayFile(hash)
            if (relayCopy != null) {
                keepReceived(offer, relayCopy, copy = true)
            } else {
                waitingFor.getOrPut(hash) { mutableSetOf() } += OWNER_ID
                requestUpload(hash)
            }
        } else ownerPeer?.let { sendMsg(it, Msg.Want(hash)) }
    }

    fun declineMedia(hash: String) = post { setMediaStatus(hash, MediaStatus.DECLINED) }

    private suspend fun onWant(memberId: String, hash: String) {
        val offer = offers[hash] ?: return
        val peer = peerFor(memberId) ?: return
        if (media.openForSending(hash)?.also { it.close() } != null) {
            streamTo(peer, hash, offer.size)
        } else {
            waitingFor.getOrPut(hash) { mutableSetOf() } += memberId
            requestUpload(hash)
        }
    }

    private suspend fun requestUpload(hash: String) {
        val offer = offers[hash] ?: return
        if (hash in uploadFrom) return
        val origin = peerFor(offer.from)
        if (origin == null) {
            failWaiting(hash, "The person who shared it isn't in the room.")
            return
        }
        uploadFrom[hash] = origin.memberId
        sendMsg(origin, Msg.UploadRequest(hash))
    }

    private suspend fun failWaiting(hash: String, reason: String) {
        val waiting = waitingFor.remove(hash) ?: return
        waiting.forEach { memberId ->
            if (memberId == OWNER_ID) {
                setMediaStatus(hash, MediaStatus.FAILED)
                notice("Couldn't get ${offers[hash]?.name ?: "that file"}: $reason")
            } else peerFor(memberId)?.let { sendMsg(it, Msg.MediaFailed(hash, reason)) }
        }
    }

    private fun onMediaStart(from: String, start: Msg.MediaStart) {
        val offer = offers[start.hash] ?: return
        if (start.size != offer.size || start.size > capBytes || start.hash in incoming) return
        val expected = if (owner) uploadFrom[start.hash] == from else mediaStatus[start.hash] == MediaStatus.DOWNLOADING
        if (!expected) return
        val dir = if (owner) media.relayDir else media.receivedDir
        val file = File(dir, "${start.hash}.part")
        val output = runCatching { FileOutputStream(file) }.getOrNull() ?: return
        incoming[start.hash] = Incoming(start.hash, start.size, from, file, output)
    }

    private suspend fun onChunk(from: String, chunk: Wire.Frame.Chunk) {
        val transfer = incoming[chunk.hash]?.takeIf { it.from == from } ?: return
        if (chunk.index != transfer.nextIndex || transfer.written + chunk.data.size > transfer.size || chunk.data.size > Wire.CHUNK_BYTES) {
            abortIncoming(transfer)
            if (owner) failWaiting(chunk.hash, "The upload was malformed.") else setMediaStatus(chunk.hash, MediaStatus.FAILED)
            return
        }
        val ok = withContext(Dispatchers.IO) { runCatching { transfer.output.write(chunk.data) }.isSuccess }
        if (!ok) {
            abortIncoming(transfer)
            if (!owner) setMediaStatus(chunk.hash, MediaStatus.FAILED)
            return
        }
        transfer.digest.update(chunk.data)
        transfer.nextIndex++
        transfer.written += chunk.data.size
        val progress = transfer.written.toFloat() / transfer.size
        if (progress - transfer.lastProgress > 0.04f) {
            transfer.lastProgress = progress
            mediaProgress[chunk.hash] = progress
            refreshMediaUi()
        }
    }

    private suspend fun onMediaEnd(from: String, hash: String) {
        val transfer = incoming[hash]?.takeIf { it.from == from } ?: return
        incoming.remove(hash)
        withContext(Dispatchers.IO) { runCatching { transfer.output.close() } }
        val actual = Codec.hex(transfer.digest.digest())
        if (transfer.written != transfer.size || actual != hash) {
            transfer.file.delete()
            if (owner) {
                uploadFrom.remove(hash)
                failWaiting(hash, "The file didn't match what was shared.")
            } else {
                setMediaStatus(hash, MediaStatus.FAILED)
                notice("${offers[hash]?.name ?: "A file"} didn't match what was shared, so it was thrown away.")
            }
            return
        }
        val offer = offers[hash] ?: return
        if (owner) {
            uploadFrom.remove(hash)
            val relayCopy = File(media.relayDir, hash)
            if (!transfer.file.renameTo(relayCopy)) return failWaiting(hash, "Couldn't store the file.")
            val waiting = waitingFor.remove(hash).orEmpty()
            if (OWNER_ID in waiting) keepReceived(offer, relayCopy, copy = true)
            waiting.filter { it != OWNER_ID }.forEach { memberId -> peerFor(memberId)?.let { streamTo(it, hash, offer.size) } }
        } else {
            keepReceived(offer, transfer.file, copy = false)
        }
    }

    /** Stores a verified file under online-media/ and starts using it. */
    private suspend fun keepReceived(offer: MediaOffer, file: File, copy: Boolean) {
        val target = media.receivedTarget(offer)
        val stored = withContext(Dispatchers.IO) {
            runCatching {
                if (copy) file.copyTo(target, overwrite = true) else if (!file.renameTo(target)) error("rename")
                // Re-check what's on disk before trusting it.
                target.inputStream().use { sha256Hex(it) } == offer.hash
            }.getOrDefault(false)
        }
        if (!stored) {
            target.delete()
            setMediaStatus(offer.hash, MediaStatus.FAILED)
            return
        }
        media.register(offer.hash, Uri.fromFile(target).toString(), offer)
        mediaProgress.remove(offer.hash)
        setMediaStatus(offer.hash, MediaStatus.HAVE)
        remapMedia(offer.hash)
    }

    private fun abortIncoming(transfer: Incoming) {
        incoming.remove(transfer.hash)
        runCatching { transfer.output.close() }
        transfer.file.delete()
        mediaProgress.remove(transfer.hash)
    }

    /** Sends a file in chunks (owner to a guest, or a guest uploading to the owner). */
    private fun streamTo(peer: Peer, hash: String, knownSize: Long? = null) {
        scope.launch {
            val size = knownSize ?: offers[hash]?.size ?: return@launch
            val input = withContext(Dispatchers.IO) { media.openForSending(hash) }
            if (input == null) {
                sendMsg(peer, Msg.MediaFailed(hash, "The file isn't available."))
                return@launch
            }
            var sent = 0L
            var index = 0
            val buffer = ByteArray(Wire.CHUNK_BYTES)
            val ok = runCatching {
                input.use {
                    sendMsg(peer, Msg.MediaStart(hash, size))
                    while (!ended) {
                        val n = withContext(Dispatchers.IO) { readFully(input, buffer) }
                        if (n <= 0) break
                        sent += n
                        if (sent > size) error("File changed")
                        sendFrames(peer, listOf(Wire.chunk(hash, index++, buffer, n)))
                    }
                }
                sent == size
            }.getOrDefault(false)
            if (ended) return@launch
            sendMsg(peer, if (ok) Msg.MediaEnd(hash) else Msg.MediaFailed(hash, "The file couldn't be read."))
        }
    }

    private fun readFully(input: java.io.InputStream, buffer: ByteArray): Int {
        var total = 0
        while (total < buffer.size) {
            val n = input.read(buffer, total, buffer.size - total)
            if (n < 0) break
            total += n
        }
        return total
    }

    // ---------------------------------------------------------------- relinking missing room media

    private fun relinkHook(oldUri: String, newUri: String, displayName: String, durationMs: Long): Boolean {
        val hash = MediaRef.hashOf(oldUri) ?: return false
        scope.launch {
            val offer = media.describe(newUri, Long.MAX_VALUE)
            post {
                if (offer?.hash == hash) {
                    media.register(hash, newUri, offers[hash] ?: offer)
                    refreshMediaUi()
                    remapMedia(hash)
                } else notice("That isn't the same file as the one in the room.")
            }
        }
        return true
    }

    // ---------------------------------------------------------------- sending

    private suspend fun sendMsg(peer: Peer, msg: Msg) {
        sendFrames(peer, Wire.encode(msg, nextFragmentId++))
    }

    private suspend fun sendFrames(peer: Peer, frames: List<ByteArray>) {
        val cipher = peer.cipher ?: return
        val client = relay ?: return
        // Sealing and sending happen under one lock so frames leave in counter order.
        peer.sendLock.withLock {
            frames.forEach { frame ->
                val sealed = byteArrayOf(KIND_SESSION) + cipher.seal(frame)
                client.send(if (owner) idBytes(peer.connectionId) + sealed else sealed)
            }
        }
    }

    private fun aad(direction: String) = "lecfx hs v1|${keys.roomId}|$direction".toByteArray()

    private fun idBytes(id: String) = requireNotNull(Codec.fromHex(id))

    private fun kickJson(id: String) = """{"kick":"$id"}"""

    private fun cleanChat(text: String): String? {
        val cleaned = text.take(MAX_CHAT_CHARS * 2)
            .replace(CHAT_INVISIBLE, "")
            .replace(Regex("\n{3,}"), "\n\n")
            .trim()
            .take(MAX_CHAT_CHARS)
        return cleaned.ifEmpty { null }
    }

    companion object {
        const val OWNER_ID = "owner"
        const val MAX_CHAT_CHARS = 1_000
        private const val MAX_CHAT_LINES = 300
        private const val MAX_CONNECTIONS = 24
        private const val LOCAL_DEBOUNCE_MS = 90L
        private const val ID_BYTES = 8
        private const val KIND_HANDSHAKE: Byte = 1
        private const val KIND_SESSION: Byte = 2
        private const val GUEST_TO_OWNER = "g2o"
        private const val OWNER_TO_GUEST = "o2g"
        /** Stands in for GLSL code nobody has approved yet: draws the picture unchanged. */
        const val PLACEHOLDER_SOURCE = "red = red; // waiting for approval"
        private val HASH = Regex("[0-9a-f]{64}")
        private val RELAY_EVENT = Regex("""^\{"event":"(joined|left)","id":"([0-9a-f]{16})"}$""")
        private val CHAT_INVISIBLE = Regex("[\\p{Cf}\\p{Co}\\p{Cn}\\u0000-\\u0009\\u000B-\\u001F\\u007F-\\u009F]")
    }
}
