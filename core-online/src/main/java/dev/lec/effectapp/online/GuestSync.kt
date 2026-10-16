package dev.lec.effectapp.online

import dev.lec.effectapp.model.EditProject

/**
 * A guest's copy of the project: what the owner has confirmed, plus the guest's own changes
 * that are still on their way. The owner's order is final; local changes are replayed on top,
 * so a slider being dragged doesn't jump back when an older echo of it arrives.
 */
class GuestSync(confirmed: EditProject, version: Long) {
    var confirmed: EditProject = confirmed
        private set
    var version: Long = version
        private set
    private val pending = ArrayDeque<Pair<Long, List<Op>>>()

    /** Confirmed project with pending local changes on top: what the guest sees. */
    var view: EditProject = confirmed
        private set

    val pendingCount: Int get() = pending.size

    fun local(batchId: Long, ops: List<Op>) {
        pending.addLast(batchId to ops)
        view = ProjectSync.apply(view, ops)
    }

    /** Applies a confirmed batch. Returns true when it was one of this guest's own. */
    fun onConfirmed(version: Long, ops: List<Op>, own: Boolean, batchId: Long): Boolean {
        confirmed = ProjectSync.apply(confirmed, ops)
        this.version = version
        var wasOwn = false
        if (own) {
            val index = pending.indexOfFirst { it.first == batchId }
            if (index >= 0) {
                // Batches are confirmed in order, so anything older was dropped or refused.
                repeat(index + 1) { pending.removeFirst() }
                wasOwn = true
            }
        }
        rebuild()
        return wasOwn
    }

    fun refused(batchId: Long) {
        pending.removeAll { it.first == batchId }
        rebuild()
    }

    /**
     * Catches up after a reconnect: [project] is the owner's current state, and batches up to
     * [lastBatch] were already handled. Returns the rest, which never arrived and must be
     * sent again.
     */
    fun resync(version: Long, project: EditProject, lastBatch: Long): List<Pair<Long, List<Op>>> {
        pending.removeAll { it.first <= lastBatch }
        snapshot(version, project)
        return pending.toList()
    }

    fun snapshot(version: Long, project: EditProject) {
        confirmed = project
        this.version = version
        rebuild()
    }

    private fun rebuild() {
        view = pending.fold(confirmed) { project, (_, ops) -> ProjectSync.apply(project, ops) }
    }
}
