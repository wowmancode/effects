plugins {
    alias(libs.plugins.android.library)
    alias(libs.plugins.kotlin.android)
}

android {
    namespace = "dev.lec.effectapp.effects"
    compileSdk = 36
    ndkVersion = "27.0.12077973"
    defaultConfig {
        minSdk = 24
        testInstrumentationRunner = "androidx.test.runner.AndroidJUnitRunner"
    }
    externalNativeBuild {
        cmake { path = file("src/main/c/CMakeLists.txt") }
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
    kotlinOptions { jvmTarget = "17" }
    sourceSets["main"].assets.srcDir(layout.buildDirectory.dir("generated/nativeCAssets"))
    defaultConfig { consumerProguardFiles("consumer-rules.pro") }
}

val copyNativeCAssets by tasks.registering(Copy::class) {
    val compiler = rootProject.layout.projectDirectory.dir("third_party/tinycc")
    into(layout.buildDirectory.dir("generated/nativeCAssets/native-c"))
    from(compiler.dir("include")) { into("include") }
    from(compiler.dir("lib")) {
        include("libtcc1.c", "lib-arm64.c", "armeabi.c", "armflush.c")
        into("runtime")
    }
    from(compiler.file("COPYING"))
}
tasks.named("preBuild") { dependsOn(copyNativeCAssets) }

dependencies {
    api(project(":core-model"))
    api(libs.androidx.media3.common)
    implementation(libs.androidx.media3.effect)
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.10.2")
    testImplementation(libs.junit)
    androidTestImplementation("androidx.test:runner:1.6.2")
    androidTestImplementation("androidx.test.ext:junit:1.2.1")
}

