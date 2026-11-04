cmake_minimum_required(VERSION 3.22.1)

project(split_pitch_modes C ASM)

# Split pitch. Methods 2 and 3 use the reconstructed DSP in elastique/, which
# needs 64-bit pointers; 32-bit ABIs get Original only (reconstructed_pitch.c
# compiles to stubs there).
if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    file(GLOB RECON_BLOCKS "${CMAKE_CURRENT_SOURCE_DIR}/elastique/generated/blocks_*.c")
    set(RECON_IMAGE "${CMAKE_CURRENT_SOURCE_DIR}/elastique/generated/data_image.bin")
    configure_file(reconstructed_image.S.in "${CMAKE_CURRENT_BINARY_DIR}/reconstructed_image.S" @ONLY)
    set_property(SOURCE "${CMAKE_CURRENT_BINARY_DIR}/reconstructed_image.S" APPEND PROPERTY
                 OBJECT_DEPENDS "${RECON_IMAGE}")
    add_library(reconstructed_blocks OBJECT ${RECON_BLOCKS})
    # The translated blocks are huge and mechanical: -O2 without debug info in
    # every build type (debug -O0 would be several times slower), no FMA
    # contraction or fast math so the arithmetic rounds like the original.
    target_compile_options(reconstructed_blocks PRIVATE -O2 -g0 -w -ffp-contract=off -fno-fast-math)
    if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
        target_compile_options(reconstructed_blocks PRIVATE -mpopcnt) # part of the Android x86_64 ABI
    endif()
    set_property(TARGET reconstructed_blocks PROPERTY POSITION_INDEPENDENT_CODE ON)
    set(RECON_SOURCES reconstructed_pitch.c elastique/a17.c
        "${CMAKE_CURRENT_BINARY_DIR}/reconstructed_image.S" $<TARGET_OBJECTS:reconstructed_blocks>)
else()
    set(RECON_SOURCES reconstructed_pitch.c)
endif()

add_library(split_pitch_modes SHARED split_pitch_modes.c ${RECON_SOURCES})
target_include_directories(split_pitch_modes PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")
set_source_files_properties(reconstructed_pitch.c elastique/a17.c PROPERTIES COMPILE_OPTIONS "-O2;-w")
target_compile_options(split_pitch_modes PRIVATE -ffp-contract=off -fno-fast-math)
target_link_options(split_pitch_modes PRIVATE -Wl,-z,noexecstack)
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

