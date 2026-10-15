cmake_minimum_required(VERSION 3.22.1)
project(split_pitch_modes C)

add_library(split_pitch_modes SHARED split_pitch_modes.c expressfx_drums.c)
# No FMA contraction: keeps the native output identical to the Kotlin fallback.
target_compile_options(split_pitch_modes PRIVATE -ffp-contract=off)
target_link_libraries(split_pitch_modes m)
