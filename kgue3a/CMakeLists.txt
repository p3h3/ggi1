cmake_minimum_required(VERSION 3.23)
project(ggi1_3a C)

set(CMAKE_C_STANDARD 99)

add_executable(ggi1_3ava vorbereitung/3ava.c)
add_executable(ggi1_3avb vorbereitung/3avb.c)

add_executable(ggi1_3apa praesenz/3apa.c)
add_executable(ggi1_3apc praesenz/3apc.c)

add_executable(ggi1_3ana nachbearbeitung/3ana.c)
add_executable(ggi1_3anb nachbearbeitung/3anb.c)
add_executable(ggi1_3anc nachbearbeitung/3anc.c)
