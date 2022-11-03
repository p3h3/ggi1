cmake_minimum_required(VERSION 3.23)
project(ggi1_3 C)

set(CMAKE_C_STANDARD 99)

add_executable(ggi1_3va vorbereitung/3va.c)
add_executable(ggi1_3vb vorbereitung/3vb.c)

add_executable(ggi1_3pa praesenz/3pa.c)
#add_executable(ggi1_3pc praesenz/3pc.c)

#add_executable(ggi1_3na nachbearbeitung/3na.c)
#add_executable(ggi1_3nb nachbearbeitung/3nb.c)
#add_executable(ggi1_3nc nachbearbeitung/3nc.c)