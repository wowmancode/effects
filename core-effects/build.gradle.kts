plugins {
    alias(libs.plugins.android.library)
    alias(libs.plugins.kotlin.android)
}

android {
    namespace = "dev.lec.effectapp.effects"
    compileSdk = 36
    ndkVersion = "27.0.12077973"
    defaultConfig { minSdk = 24 }
    externalNativeBuild {
        cmake { path = file("src/main/c/CMakeLists.txt") }
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    kotlinOptions { jvmTarget = "17" }
}

dependencies {
    api(project(":core-model"))
    api(libs.androidx.media3.common)
    implementation(libs.androidx.media3.effect)
    testImplementation(libs.junit)
}
