cmake_minimum_required(VERSION 3.22.1)
project(split_pitch_modes C)

add_library(split_pitch_modes SHARED split_pitch_modes.c expressfx_drums.c)
# No FMA contraction: keeps the native output identical to the Kotlin fallback.
target_compile_options(split_pitch_modes PRIVATE -ffp-contract=off)
target_link_libraries(split_pitch_modes m)

set(TINYCC "${CMAKE_CURRENT_SOURCE_DIR}/../../../../third_party/tinycc")
if(NOT EXISTS "${TINYCC}/libtcc.c")
    message(FATAL_ERROR "Initialize the pinned TinyCC dependency with git submodule update --init --recursive")
endif()
configure_file(tcc_config.h.in "${CMAKE_CURRENT_BINARY_DIR}/config.h" COPYONLY)
add_library(lec_native_c SHARED native_c_compiler.c native_c_jni.c "${TINYCC}/libtcc.c")
target_include_directories(lec_native_c PRIVATE "${TINYCC}" "${CMAKE_CURRENT_BINARY_DIR}")
target_compile_options(lec_native_c PRIVATE -Os -ffunction-sections -fdata-sections -Wno-unused-function)
target_link_options(lec_native_c PRIVATE -Wl,--gc-sections)
target_link_libraries(lec_native_c m dl)

