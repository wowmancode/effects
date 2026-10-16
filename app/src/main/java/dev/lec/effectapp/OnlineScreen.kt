package dev.lec.effectapp

import android.content.ClipData
import android.content.ClipboardManager
import android.content.Context
import android.content.Intent
import android.net.ConnectivityManager
import android.widget.Toast
import androidx.compose.foundation.horizontalScroll
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.heightIn
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.text.selection.SelectionContainer
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.AlertDialog
import androidx.compose.material3.Button
import androidx.compose.material3.Card
import androidx.compose.material3.Checkbox
import androidx.compose.material3.FilterChip
import androidx.compose.material3.LinearProgressIndicator
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.OutlinedTextField
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Switch
import androidx.compose.material3.Text
import androidx.compose.material3.TextButton
import androidx.compose.material3.TopAppBar
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableIntStateOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.font.FontFamily
import androidx.compose.ui.text.font.FontStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import dev.lec.effectapp.online.MemberInfo
import dev.lec.effectapp.online.Names
import dev.lec.effectapp.online.Perm
import dev.lec.effectapp.online.RoomState

@Composable
fun OnlineScreen(online: OnlineViewModel, editor: EditorViewModel, onBack: () -> Unit) {
    val ui by online.ui.collectAsState()
    Scaffold(
        topBar = {
            TopAppBar(
                title = { Text("Online") },
                navigationIcon = { TextButton(onClick = onBack) { Text("Back") } },
            )
        },
    ) { padding ->
        Column(
            Modifier
                .fillMaxSize()
                .padding(padding)
                .verticalScroll(rememberScrollState())
                .padding(horizontal = 16.dp, vertical = 8.dp),
            verticalArrangement = Arrangement.spacedBy(12.dp),
        ) {
            val state = ui
            when {
                state == null -> SetupContent(online, editor)
                state.phase == OnlinePhase.PREPARING -> Waiting("Getting your media ready to share…", "Cancel") { online.leave() }
                state.phase == OnlinePhase.CONNECTING -> Waiting("Connecting…", "Cancel") { online.leave() }
                state.phase == OnlinePhase.WAITING -> WaitingForOwner(state) { online.leave() }
                state.phase == OnlinePhase.IN_ROOM -> RoomContent(online, state)
                state.phase == OnlinePhase.RECONNECTING -> Waiting(
                    "Connection lost. Reconnecting… Your edits are kept and sent once you're back.",
                    if (state.owner) "End room" else "Leave",
                ) { online.leave() }
                else -> EndedContent(state.endedReason) { online.dismiss() }
            }
        }
    }
    OnlinePrompts(online, showEnded = false)
}

// -------------------------------------------------------------------- before a room

@Composable
private fun SetupContent(online: OnlineViewModel, editor: EditorViewModel) {
    val profile by online.profile.collectAsState()
    var error by remember { mutableStateOf<String?>(null) }

    Text(
        "Edit together with up to 9 other people. Everything is end-to-end encrypted: the relay server " +
            "only passes along scrambled data. There are no accounts or passwords.",
        style = MaterialTheme.typography.bodySmall,
    )

    Section("Your name") {
        Row(verticalAlignment = Alignment.CenterVertically) {
            Text("Random name", Modifier.weight(1f))
            Switch(checked = profile.useRandomName, onCheckedChange = { online.updateProfile(profile.copy(useRandomName = it)) })
        }
        if (profile.useRandomName) {
            Row(verticalAlignment = Alignment.CenterVertically) {
                Text(profile.randomName, Modifier.weight(1f), fontWeight = FontWeight.SemiBold)
                TextButton(onClick = online::newRandomName) { Text("New name") }
            }
        } else {
            OutlinedTextField(
                value = profile.customName,
                onValueChange = { online.updateProfile(profile.copy(customName = it.take(Names.MAX_LENGTH))) },
                label = { Text("Name others see") },
                singleLine = true,
                modifier = Modifier.fillMaxWidth(),
            )
            if (Names.clean(profile.customName) == null) Hint("Leave it blank to show as \"Guest\".")
        }
        Hint("Names are only labels: anyone can pick any name. Safety codes show who's really who.")
    }

    Section("Relay server") {
        OutlinedTextField(
            value = profile.relayHost,
            onValueChange = { online.updateProfile(profile.copy(relayHost = it.take(260))) },
            label = { Text("Server (host or host:port)") },
            singleLine = true,
            modifier = Modifier.fillMaxWidth(),
        )
        Hint("Everyone in a room uses the owner's server; it's part of the invite. See relay-server/README.md to run one.")
    }

    var maxMembers by remember { mutableIntStateOf(4) }
    var mediaCap by remember { mutableIntStateOf(200) }
    var defaults by remember { mutableStateOf(setOf(Perm.ADD_EFFECT, Perm.REMOVE_EFFECT, Perm.EDIT_EFFECT, Perm.EDIT_MEDIA)) }
    Section("Create a room") {
        Stepper("People (you included)", maxMembers, 2, RoomState.HARD_MAX_MEMBERS) { maxMembers = it }
        Text("Largest file people can share", style = MaterialTheme.typography.labelMedium)
        CapChips(mediaCap) { mediaCap = it }
        Text("What others can do (change any time)", style = MaterialTheme.typography.labelMedium)
        PermChecks(defaults) { defaults = it }
        Button(
            onClick = { error = online.create(editor, maxMembers, defaults, mediaCap) },
            modifier = Modifier.fillMaxWidth(),
        ) { Text("Create room") }
    }

    var inviteText by remember { mutableStateOf("") }
    Section("Join a room") {
        OutlinedTextField(
            value = inviteText,
            onValueChange = { inviteText = it.take(2_000) },
            label = { Text("Paste the invite") },
            modifier = Modifier.fillMaxWidth(),
        )
        val parsed = remember(inviteText) { dev.lec.effectapp.online.Invite.parse(inviteText) }
        if (parsed != null) Hint("Connects through ${parsed.host}, the server the owner chose. It can see your IP address, but not the edit or chat.")
        Hint("Joining replaces the edit open here with the room's. Save yours first if you want to keep it.")
        Button(
            onClick = { error = online.join(editor, inviteText) },
            enabled = inviteText.isNotBlank(),
            modifier = Modifier.fillMaxWidth(),
        ) { Text("Join") }
    }
    error?.let { Text(it, color = MaterialTheme.colorScheme.error) }
}

@Composable
private fun Waiting(text: String, action: String, onAction: () -> Unit) {
    Text(text)
    LinearProgressIndicator(Modifier.fillMaxWidth())
    OutlinedButton(onClick = onAction) { Text(action) }
}

@Composable
private fun WaitingForOwner(ui: OnlineUi, onCancel: () -> Unit) {
    Text("Waiting for the owner to let you in…")
    LinearProgressIndicator(Modifier.fillMaxWidth())
    ui.mySafetyCode?.let { SafetyCodeCard(it, "Read this to the owner. Their screen should show the same code next to your name. If it doesn't, leave: someone may be in the middle.") }
    OutlinedButton(onClick = onCancel) { Text("Cancel") }
}

@Composable
private fun EndedContent(reason: String?, onDone: () -> Unit) {
    Text(reason ?: "The room ended.")
    Hint("Your copy of the edit stays open, and any media you accepted stays on this phone.")
    Button(onClick = onDone) { Text("OK") }
}

// -------------------------------------------------------------------- in a room

@Composable
private fun RoomContent(online: OnlineViewModel, ui: OnlineUi) {
    val context = LocalContext.current
    val room = ui.room ?: return
    var confirmLeave by remember { mutableStateOf(false) }

    if (ui.ownerAway) {
        Text("The owner's connection dropped. Waiting for them to come back…", color = MaterialTheme.colorScheme.error)
    }
    if (ui.owner) {
        Section("Invite") {
            val invite = ui.invite.orEmpty()
            SelectionContainer {
                Text(invite, fontFamily = FontFamily.Monospace, style = MaterialTheme.typography.bodySmall)
            }
            Row(horizontalArrangement = Arrangement.spacedBy(8.dp)) {
                Button(onClick = {
                    val send = Intent(Intent.ACTION_SEND).setType("text/plain").putExtra(Intent.EXTRA_TEXT, invite)
                    context.startActivity(Intent.createChooser(send, "Send invite"))
                }) { Text("Share") }
                OutlinedButton(onClick = {
                    val clipboard = context.getSystemService(Context.CLIPBOARD_SERVICE) as ClipboardManager
                    val clip = ClipData.newPlainText("Room invite", invite)
                    // Keeps the invite out of the clipboard preview Android shows on screen.
                    clip.description.extras = android.os.PersistableBundle().apply {
                        putBoolean(if (android.os.Build.VERSION.SDK_INT >= 33) android.content.ClipDescription.EXTRA_IS_SENSITIVE else "android.content.extra.IS_SENSITIVE", true)
                    }
                    clipboard.setPrimaryClip(clip)
                    Toast.makeText(context, "Invite copied", Toast.LENGTH_SHORT).show()
                }) { Text("Copy") }
            }
            Hint(
                "Anyone with this invite can ask to join, and you approve each person. Send it in an " +
                    "end-to-end encrypted chat (Signal, WhatsApp) if you can. Discord DMs aren't, so check safety codes there.",
            )
        }
    } else {
        ui.mySafetyCode?.let { SafetyCodeCard(it, "The owner sees this same code next to your name.") }
    }

    Section("People (${room.members.size} of ${room.maxMembers})") {
        room.members.forEach { member ->
            MemberRow(online, ui, member)
        }
    }

    if (ui.owner) {
        Section("Room settings") {
            Stepper("People allowed (you included)", room.maxMembers, maxOf(2, room.members.size), RoomState.HARD_MAX_MEMBERS, online::setMaxMembers)
            Row(verticalAlignment = Alignment.CenterVertically) {
                Text("Lock room (no new join requests)", Modifier.weight(1f))
                Switch(checked = room.locked, onCheckedChange = online::setLocked)
            }
            Text("Largest file people can share", style = MaterialTheme.typography.labelMedium)
            CapChips(room.mediaCapMb, online::setMediaCap)
            Text("New people can", style = MaterialTheme.typography.labelMedium)
            PermChecks(room.defaultPerms) { online.setDefaultPerms(it, applyToEveryone = false) }
            TextButton(onClick = { online.setDefaultPerms(room.defaultPerms, applyToEveryone = true) }) {
                Text("Give these to everyone now")
            }
        }
    } else {
        Section("You can") {
            val perms = ui.myPerms
            if (perms.isEmpty()) Text("Watch and chat. The owner hasn't given you edit permissions.")
            Perm.entries.filter { it in perms }.forEach { Text("• ${it.label}") }
            Hint("Changes you aren't allowed to make are undone, with a message.")
        }
    }

    if (ui.media.isNotEmpty()) {
        Section("Media") {
            ui.media.forEach { item -> MediaRow(online, item) }
        }
    }

    val declinedPlugins = ui.pluginPrompts.filter { it.declined }
    if (declinedPlugins.isNotEmpty()) {
        Section("Plug-ins not running") {
            Hint("These GLSL plug-ins from the owner are switched off on this phone until you allow them.")
            declinedPlugins.forEach { prompt ->
                Row(verticalAlignment = Alignment.CenterVertically) {
                    Text(prompt.preview.lineSequence().firstOrNull().orEmpty().take(40), Modifier.weight(1f), fontFamily = FontFamily.Monospace)
                    TextButton(onClick = { online.approvePlugin(prompt.sourceHash) }) { Text("Run") }
                }
            }
        }
    }

    Section("Chat") {
        ChatContent(online, ui)
    }

    OutlinedButton(onClick = { confirmLeave = true }, modifier = Modifier.fillMaxWidth()) {
        Text(if (ui.owner) "End room for everyone" else "Leave room")
    }
    if (confirmLeave) {
        AlertDialog(
            onDismissRequest = { confirmLeave = false },
            title = { Text(if (ui.owner) "End the room?" else "Leave the room?") },
            text = {
                Text(
                    if (ui.owner) "Everyone is disconnected. Each person keeps their own copy of the edit."
                    else "You keep a copy of the edit and any media you accepted.",
                )
            },
            confirmButton = { TextButton(onClick = { confirmLeave = false; online.leave() }) { Text(if (ui.owner) "End" else "Leave") } },
            dismissButton = { TextButton(onClick = { confirmLeave = false }) { Text("Stay") } },
        )
    }
}

@Composable
private fun MemberRow(online: OnlineViewModel, ui: OnlineUi, member: MemberInfo) {
    var expanded by remember { mutableStateOf(false) }
    val me = member.id == ui.myMemberId
    Column {
        Row(verticalAlignment = Alignment.CenterVertically) {
            Column(Modifier.weight(1f)) {
                Text(
                    member.name + when {
                        member.owner && me -> " (owner, you)"
                        member.owner -> " (owner)"
                        me -> " (you)"
                        else -> ""
                    } + if (member.away) " · reconnecting…" else "",
                    fontWeight = FontWeight.SemiBold,
                )
                if (ui.owner && !member.owner) {
                    ui.safetyCodes[member.id]?.let { Text("Safety code $it", style = MaterialTheme.typography.bodySmall, fontFamily = FontFamily.Monospace) }
                }
                if (!member.owner) {
                    Text(
                        if (member.perms.isEmpty()) "Chat only" else "${member.perms.size} of ${Perm.entries.size} permissions",
                        style = MaterialTheme.typography.bodySmall,
                    )
                }
            }
            if (ui.owner && !member.owner) {
                TextButton(onClick = { expanded = !expanded }) { Text(if (expanded) "Done" else "Edit") }
            }
        }
        if (expanded) {
            PermChecks(member.perms) { online.setMemberPerms(member.id, it) }
            TextButton(onClick = { online.kick(member.id) }) { Text("Remove from room", color = MaterialTheme.colorScheme.error) }
        }
    }
}

@Composable
private fun MediaRow(online: OnlineViewModel, item: RoomMedia) {
    Column {
        Text("${item.offer.name} · ${formatSize(item.offer.size)}", fontWeight = FontWeight.SemiBold)
        Text("from ${item.fromName}", style = MaterialTheme.typography.bodySmall)
        when (item.status) {
            MediaStatus.HAVE -> Text("On this phone", style = MaterialTheme.typography.bodySmall)
            MediaStatus.DOWNLOADING -> LinearProgressIndicator(progress = { item.progress }, modifier = Modifier.fillMaxWidth())
            MediaStatus.ASKING, MediaStatus.DECLINED, MediaStatus.FAILED -> Row(verticalAlignment = Alignment.CenterVertically) {
                Text(
                    when (item.status) {
                        MediaStatus.DECLINED -> "Declined: shows as missing here"
                        MediaStatus.FAILED -> "Download failed"
                        else -> "Not downloaded"
                    },
                    Modifier.weight(1f),
                    style = MaterialTheme.typography.bodySmall,
                )
                TextButton(onClick = { online.acceptMedia(item.offer.hash) }) { Text(if (item.status == MediaStatus.FAILED) "Retry" else "Get") }
            }
        }
    }
}

@Composable
private fun ChatContent(online: OnlineViewModel, ui: OnlineUi) {
    Column(Modifier.heightIn(max = 420.dp).verticalScroll(rememberScrollState(Int.MAX_VALUE))) {
        if (ui.chat.isEmpty()) Hint("No messages yet.")
        ui.chat.takeLast(100).forEach { line ->
            if (line.system) {
                Text(line.text, style = MaterialTheme.typography.bodySmall, fontStyle = FontStyle.Italic)
            } else {
                // Plain text only: nothing in a message is turned into a link or formatting.
                Text(
                    (if (line.mine) "You" else line.name) + ": " + line.text,
                    style = MaterialTheme.typography.bodyMedium,
                )
            }
        }
    }
    var draft by remember { mutableStateOf("") }
    Row(verticalAlignment = Alignment.CenterVertically) {
        OutlinedTextField(
            value = draft,
            onValueChange = { draft = it.take(OnlineSession.MAX_CHAT_CHARS) },
            placeholder = { Text("Message") },
            modifier = Modifier.weight(1f),
            maxLines = 4,
        )
        Spacer(Modifier.width(8.dp))
        Button(onClick = { online.sendChat(draft); draft = "" }, enabled = draft.isNotBlank()) { Text("Send") }
    }
}

// -------------------------------------------------------------------- prompts (editor and online screens)

/** Join requests, media offers, plug-in approvals and notices, shown wherever the person is. */
@Composable
fun OnlinePrompts(online: OnlineViewModel, showEnded: Boolean = true) {
    val ui by online.ui.collectAsState()
    val state = ui ?: return
    val context = LocalContext.current

    LaunchedEffect(state.notice?.id) {
        state.notice?.let { Toast.makeText(context, it.text, Toast.LENGTH_LONG).show() }
    }

    if (state.phase == OnlinePhase.ENDED) {
        if (showEnded) {
            AlertDialog(
                onDismissRequest = online::dismiss,
                title = { Text("Room closed") },
                text = { Text((state.endedReason ?: "The room ended.") + " Your copy of the edit stays open.") },
                confirmButton = { TextButton(onClick = online::dismiss) { Text("OK") } },
            )
        }
        return
    }

    val request = state.joinRequests.firstOrNull()
    if (state.owner && request != null) {
        AlertDialog(
            onDismissRequest = {},
            title = { Text("${request.name} wants to join") },
            text = {
                Column(verticalArrangement = Arrangement.spacedBy(8.dp)) {
                    Text("Safety code")
                    Text(request.safetyCode, fontFamily = FontFamily.Monospace, style = MaterialTheme.typography.titleLarge)
                    Text("Ask them to read the code on their screen. Only let them in if it matches.", style = MaterialTheme.typography.bodySmall)
                }
            },
            confirmButton = { TextButton(onClick = { online.approve(request.connectionId) }) { Text("Let in") } },
            dismissButton = { TextButton(onClick = { online.deny(request.connectionId) }) { Text("Deny") } },
        )
        return
    }

    val asking = state.media.filter { it.status == MediaStatus.ASKING }
    val offer = asking.firstOrNull()
    if (state.phase == OnlinePhase.IN_ROOM && offer != null) {
        val metered = remember { (context.getSystemService(Context.CONNECTIVITY_SERVICE) as ConnectivityManager).isActiveNetworkMetered }
        AlertDialog(
            onDismissRequest = {},
            title = { Text("${offer.fromName} shared ${offer.offer.name}") },
            text = {
                Column(verticalArrangement = Arrangement.spacedBy(8.dp)) {
                    Text("${formatSize(offer.offer.size)}. Download it to this phone?")
                    if (metered) Text("You're on mobile data.", color = MaterialTheme.colorScheme.error)
                    Text("If you say no, it shows as missing media here. You can get it later from Online.", style = MaterialTheme.typography.bodySmall)
                }
            },
            confirmButton = {
                Row {
                    if (asking.size > 1) TextButton(onClick = { asking.forEach { online.acceptMedia(it.offer.hash) } }) { Text("Yes to all ${asking.size}") }
                    TextButton(onClick = { online.acceptMedia(offer.offer.hash) }) { Text("Yes") }
                }
            },
            dismissButton = { TextButton(onClick = { online.declineMedia(offer.offer.hash) }) { Text("No") } },
        )
        return
    }

    val plugin = state.pluginPrompts.firstOrNull { !it.declined }
    if (plugin != null) {
        AlertDialog(
            onDismissRequest = {},
            title = { Text("Run the owner's GLSL plug-in?") },
            text = {
                Column(verticalArrangement = Arrangement.spacedBy(8.dp)) {
                    Text(
                        "GLSL plug-ins run directly on your phone's graphics chip. A badly written or hostile one can " +
                            "freeze or crash the app. Only run it if you trust the owner. Until then it's switched off here.",
                        style = MaterialTheme.typography.bodySmall,
                    )
                    SelectionContainer(
                        Modifier
                            .heightIn(max = 220.dp)
                            .verticalScroll(rememberScrollState())
                            .horizontalScroll(rememberScrollState()),
                    ) {
                        Text(plugin.preview, fontFamily = FontFamily.Monospace, style = MaterialTheme.typography.bodySmall)
                    }
                }
            },
            confirmButton = { TextButton(onClick = { online.approvePlugin(plugin.sourceHash) }) { Text("Run") } },
            dismissButton = { TextButton(onClick = { online.declinePlugin(plugin.sourceHash) }) { Text("Not now") } },
        )
    }
}

// -------------------------------------------------------------------- bits

@Composable
private fun Section(title: String, content: @Composable () -> Unit) {
    Card(Modifier.fillMaxWidth()) {
        Column(Modifier.padding(12.dp), verticalArrangement = Arrangement.spacedBy(8.dp)) {
            Text(title, style = MaterialTheme.typography.titleMedium)
            content()
        }
    }
}

@Composable
private fun Hint(text: String) {
    Text(text, style = MaterialTheme.typography.bodySmall, color = MaterialTheme.colorScheme.onSurfaceVariant)
}

@Composable
private fun SafetyCodeCard(code: String, explanation: String) {
    Section("Your safety code") {
        Text(code, fontFamily = FontFamily.Monospace, style = MaterialTheme.typography.headlineSmall)
        Hint(explanation)
    }
}

@Composable
private fun Stepper(label: String, value: Int, min: Int, max: Int, onChange: (Int) -> Unit) {
    Row(verticalAlignment = Alignment.CenterVertically) {
        Text(label, Modifier.weight(1f))
        TextButton(onClick = { onChange(value - 1) }, enabled = value > min) { Text("−") }
        Text("$value", fontWeight = FontWeight.SemiBold)
        TextButton(onClick = { onChange(value + 1) }, enabled = value < max) { Text("+") }
    }
}

@Composable
private fun CapChips(selected: Int, onSelect: (Int) -> Unit) {
    Row(horizontalArrangement = Arrangement.spacedBy(6.dp)) {
        RoomState.MEDIA_CAPS_MB.forEach { mb ->
            FilterChip(selected = selected == mb, onClick = { onSelect(mb) }, label = { Text("$mb MB") })
        }
    }
}

@Composable
private fun PermChecks(perms: Set<Perm>, onChange: (Set<Perm>) -> Unit) {
    Column {
        Perm.entries.forEach { perm ->
            Row(verticalAlignment = Alignment.CenterVertically) {
                Checkbox(checked = perm in perms, onCheckedChange = { on -> onChange(if (on) perms + perm else perms - perm) })
                Text(perm.label)
            }
        }
    }
}

private fun formatSize(bytes: Long): String = when {
    bytes >= 1024L * 1024 -> "%.1f MB".format(bytes / (1024.0 * 1024))
    bytes >= 1024 -> "${bytes / 1024} KB"
    else -> "$bytes bytes"
}
