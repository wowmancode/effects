plugins {
    kotlin("jvm") version "2.1.21"
    application
}

group = "dev.lec.relay"
version = "1.0.0"

kotlin { jvmToolchain(17) }

application {
    mainClass.set("dev.lec.relay.MainKt")
}

val ktor = "3.1.3"

dependencies {
    implementation("io.ktor:ktor-server-core:$ktor")
    implementation("io.ktor:ktor-server-netty:$ktor")
    implementation("io.ktor:ktor-server-websockets:$ktor")
    implementation("ch.qos.logback:logback-classic:1.5.18")
    testImplementation("junit:junit:4.13.2")
    testImplementation("org.jetbrains.kotlinx:kotlinx-coroutines-test:1.10.2")
}
