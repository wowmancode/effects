plugins {
    alias(libs.plugins.android.application)
    alias(libs.plugins.kotlin.android)
    alias(libs.plugins.kotlin.compose)
}

android {
    namespace = "dev.lec.effectapp"
    compileSdk = 36

    defaultConfig {
        applicationId = "dev.lec.effectapp"
        minSdk = 24
        targetSdk = 36
        versionCode = 7
        versionName = "0.7.0"
        // Relay server suggested for online rooms (host[:port], reached over wss://). Set with
        // -PlecRelayHost=relay.example.com or in gradle.properties; people can change it in the app.
        val relayHost = (project.findProperty("lecRelayHost") as String?).orEmpty()
        require(relayHost.matches(Regex("[A-Za-z0-9.:-]*"))) { "lecRelayHost must be host[:port]" }
        buildConfigField("String", "RELAY_HOST", "\"$relayHost\"")
    }

    buildFeatures {
        compose = true
        buildConfig = true
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    kotlinOptions {
        jvmTarget = "17"
        freeCompilerArgs += "-opt-in=androidx.compose.material3.ExperimentalMaterial3Api"
    }
    packaging { resources.excludes += "/META-INF/{AL2.0,LGPL2.1}" }
}

dependencies {
    implementation(project(":core-effects"))
    implementation(project(":core-model"))
    implementation(project(":core-online"))
    implementation(project(":core-pipeline"))
    implementation(libs.androidx.core.ktx)
    implementation(libs.androidx.activity.compose)
    implementation(libs.androidx.lifecycle.runtime.compose)
    implementation(libs.androidx.lifecycle.viewmodel.compose)
    implementation(libs.androidx.navigation.compose)
    implementation(platform(libs.androidx.compose.bom))
    implementation(libs.androidx.compose.ui)
    implementation(libs.androidx.compose.foundation)
    implementation(libs.androidx.compose.material3)
    implementation(libs.androidx.compose.ui.tooling.preview)
    implementation(libs.androidx.media3.common)
    implementation(libs.androidx.media3.exoplayer)
    implementation(libs.androidx.media3.ui)
    implementation(libs.androidx.media3.transformer)
    implementation(libs.kotlinx.serialization.json)
    implementation(libs.okhttp)
    debugImplementation(libs.androidx.compose.ui.tooling)
}
