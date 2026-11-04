package dev.lec.effectapp

import android.app.Application
import android.content.Context
import androidx.lifecycle.AndroidViewModel
import androidx.lifecycle.viewModelScope
import dev.lec.effectapp.effects.DEFAULT_AUDIO_PLUGIN_SOURCE
import dev.lec.effectapp.effects.DEFAULT_VIDEO_PLUGIN_SOURCE
import dev.lec.effectapp.effects.EffectRegistry
import dev.lec.effectapp.online.EffectCatalog
import dev.lec.effectapp.online.Invite
import dev.lec.effectapp.online.Names
import dev.lec.effectapp.online.Perm
import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.SharingStarted
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.flatMapLatest
import kotlinx.coroutines.flow.flowOf
import kotlinx.coroutines.flow.stateIn

/** Name settings. Nothing here is an account: it's stored only on this phone. */
data class OnlineProfile(
    val useRandomName: Boolean,
    val randomName: String,
    val customName: String,
    val relayHost: String,
) {
    /** The name others see: the random one, the typed one, or a plain "Guest" fallback. */
    val displayName: String
        get() = if (useRandomName) randomName else Names.clean(customName) ?: "Guest"
}

class OnlineViewModel(application: Application) : AndroidViewModel(application) {
    private val prefs = application.getSharedPreferences("online", Context.MODE_PRIVATE)
    private val media = OnlineMedia(application)
    private val catalog = EffectCatalog(
        knownEffectIds = EffectRegistry.all.map { it.id }.toSet(),
        defaultPluginSources = mapOf("plugin_video" to DEFAULT_VIDEO_PLUGIN_SOURCE, "plugin_audio" to DEFAULT_AUDIO_PLUGIN_SOURCE),
    )

    private val _profile = MutableStateFlow(loadProfile())
    val profile: StateFlow<OnlineProfile> = _profile.asStateFlow()

    private val _session = MutableStateFlow<OnlineSession?>(null)

    @OptIn(ExperimentalCoroutinesApi::class)
    val ui: StateFlow<OnlineUi?> = _session
        .flatMapLatest { session -> session?.ui ?: flowOf(null) }
        .stateIn(viewModelScope, SharingStarted.Eagerly, null)

    private fun loadProfile(): OnlineProfile {
        val random = prefs.getString("random_name", null)?.let(Names::clean) ?: Names.random().also {
            prefs.edit().putString("random_name", it).apply()
        }
        return OnlineProfile(
            useRandomName = prefs.getBoolean("use_random_name", true),
            randomName = random,
            customName = prefs.getString("custom_name", "").orEmpty(),
            relayHost = prefs.getString("relay_host", null) ?: BuildConfig.RELAY_HOST,
        )
    }

    fun updateProfile(profile: OnlineProfile) {
        val cleaned = profile.copy(customName = profile.customName.take(Names.MAX_LENGTH * 2), relayHost = profile.relayHost.trim())
        _profile.value = cleaned
        prefs.edit()
            .putBoolean("use_random_name", cleaned.useRandomName)
            .putString("random_name", cleaned.randomName)
            .putString("custom_name", cleaned.customName)
            .putString("relay_host", cleaned.relayHost)
            .apply()
    }

    fun newRandomName() = updateProfile(_profile.value.copy(randomName = Names.random(), useRandomName = true))

    /** Null when the room started, otherwise what's wrong. */
    fun create(editor: EditorViewModel, maxMembers: Int, defaultPerms: Set<Perm>, mediaCapMb: Int): String? {
        if (dev.lec.effectapp.model.NativePluginPolicy.containsNative(editor.project.value)) return "Native C plug-ins are offline-only. Remove them before opening an online room."
        if (_session.value?.ui?.value?.phase.let { it != null && it != OnlinePhase.ENDED }) return "You're already in a room."
        val host = _profile.value.relayHost
        if (!Invite.isValidHost(host)) return "Set a relay server first (for example relay.example.com)."
        val start = RoomStart.Create(Invite.create(host), _profile.value.displayName, maxMembers, defaultPerms, mediaCapMb)
        launch(start, editor)
        return null
    }

    fun join(editor: EditorViewModel, inviteText: String): String? {
        if (dev.lec.effectapp.model.NativePluginPolicy.containsNative(editor.project.value)) return "Native C plug-ins are offline-only. Remove them before opening an online room."
        if (_session.value?.ui?.value?.phase.let { it != null && it != OnlinePhase.ENDED }) return "You're already in a room."
        val invite = Invite.parse(inviteText) ?: return "That isn't a room invite. Paste the whole invite (it starts with lecfx1.)."
        launch(RoomStart.Join(invite, _profile.value.displayName), editor)
        return null
    }

    private fun launch(start: RoomStart, editor: EditorViewModel) {
        val session = OnlineSession(start, editor, media, catalog, viewModelScope)
        _session.value = session
        session.start()
    }

    /** Clears an ended room so a new one can start. */
    fun dismiss() {
        if (_session.value?.ui?.value?.phase == OnlinePhase.ENDED) _session.value = null
    }

    private val session: OnlineSession? get() = _session.value

    fun leave() { session?.leave() }
    fun approve(connectionId: String) { session?.approve(connectionId) }
    fun deny(connectionId: String) { session?.deny(connectionId) }
    fun kick(memberId: String) { session?.kick(memberId) }
    fun setMaxMembers(value: Int) { session?.setMaxMembers(value) }
    fun setLocked(locked: Boolean) { session?.setLocked(locked) }
    fun setMediaCap(mb: Int) { session?.setMediaCap(mb) }
    fun setDefaultPerms(perms: Set<Perm>, applyToEveryone: Boolean) { session?.setDefaultPerms(perms, applyToEveryone) }
    fun setMemberPerms(memberId: String, perms: Set<Perm>) { session?.setMemberPerms(memberId, perms) }
    fun sendChat(text: String) { session?.sendChat(text) }
    fun acceptMedia(hash: String) { session?.acceptMedia(hash) }
    fun declineMedia(hash: String) { session?.declineMedia(hash) }
    fun approvePlugin(hash: String) { session?.approvePlugin(hash) }
    fun declinePlugin(hash: String) { session?.declinePlugin(hash) }

    override fun onCleared() {
        session?.shutdown()
    }
}

