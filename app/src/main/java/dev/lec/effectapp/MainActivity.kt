package dev.lec.effectapp

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Surface
import androidx.compose.runtime.Composable
import androidx.lifecycle.viewmodel.compose.viewModel
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContent {
            MaterialTheme {
                Surface { EffectApp() }
            }
        }
    }
}

@Composable
private fun EffectApp(editorViewModel: EditorViewModel = viewModel()) {
    val navController = rememberNavController()
    NavHost(navController = navController, startDestination = "import") {
        composable("import") {
            ImportScreen(editorViewModel, onEdit = { navController.navigate("editor") })
        }
        composable("editor") {
            EditorScreen(
                editorViewModel,
                onBack = { navController.popBackStack() },
                onExport = { navController.navigate("export") },
            )
        }
        composable("export") {
            ExportScreen(editorViewModel, onBack = { navController.popBackStack() })
        }
    }
}
