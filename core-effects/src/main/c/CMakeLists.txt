cmake_minimum_required(VERSION 3.22.1)
project(split_pitch_modes C)

add_library(split_pitch_modes SHARED split_pitch_modes.c)
target_link_libraries(split_pitch_modes m)
