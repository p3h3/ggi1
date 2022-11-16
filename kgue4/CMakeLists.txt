cmake_minimum_required(VERSION 3.23)
project(ggi1_4 C)

set(CMAKE_C_STANDARD 99)

add_executable(ggi1_4va vorbereitung/4va.c)

add_executable(ggi1_4pa praesenz/4pa.c)
add_executable(ggi1_4pb praesenz/4pb.c)
add_executable(ggi1_4pc praesenz/4pc.c)

#add_executable(ggi1_3ana nachbearbeitung/3ana.c)
add_executable(ggi1_4nb nachbearbeitung/4nb.c)
