package dev.lec.effectapp

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import android.content.ClipData
import android.content.ClipboardManager
import android.content.Context
import androidx.compose.foundation.layout.heightIn
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.text.selection.SelectionContainer
import androidx.compose.foundation.verticalScroll
import androidx.compose.material3.AlertDialog
import androidx.compose.material3.Text
import androidx.compose.material3.TextButton
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.text.font.FontFamily
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.lifecycle.viewmodel.compose.viewModel
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        CrashLog.install(applicationContext)
        enableEdgeToEdge()
        setContent {
            MaterialTheme {
                Surface { EffectApp() }
            }
        }
    }
}

@Composable
private fun EffectApp(
    editorViewModel: EditorViewModel = viewModel(),
    onlineViewModel: OnlineViewModel = viewModel(),
) {
    val navController = rememberNavController()
    LastCrashDialog()
    NavHost(navController = navController, startDestination = "import") {
        composable("import") {
            ImportScreen(editorViewModel, onEdit = { navController.navigate("editor") })
        }
        composable("editor") {
            EditorScreen(
                editorViewModel,
                onBack = { navController.popBackStack() },
                onExport = { navController.navigate("export") },
                online = onlineViewModel,
                onOnline = { navController.navigate("online") },
            )
        }
        composable("online") {
            OnlineScreen(onlineViewModel, editorViewModel, onBack = { navController.popBackStack() })
        }
        composable("export") {
            ExportScreen(editorViewModel, onBack = { navController.popBackStack() })
        }
    }
}


/** Shows the last crash once, so it can be copied into a bug report. */
@Composable
private fun LastCrashDialog() {
    val context = LocalContext.current
    var report by remember { mutableStateOf(CrashLog.read()) }
    val text = report ?: return
    val close = {
        CrashLog.clear()
        report = null
    }
    AlertDialog(
        onDismissRequest = close,
        title = { Text("The app hit an error last time") },
        text = {
            SelectionContainer(Modifier.heightIn(max = 360.dp).verticalScroll(rememberScrollState())) {
                Text(text, fontFamily = FontFamily.Monospace, fontSize = 10.sp)
            }
        },
        confirmButton = {
            TextButton(onClick = {
                val clipboard = context.getSystemService(Context.CLIPBOARD_SERVICE) as ClipboardManager
                clipboard.setPrimaryClip(ClipData.newPlainText("effect-app error", text))
                close()
            }) { Text("Copy and close") }
        },
        dismissButton = { TextButton(onClick = close) { Text("Close") } },
    )
}
