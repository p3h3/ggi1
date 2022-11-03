cmake_minimum_required(VERSION 3.23)
project(ggi1_2)

set(CMAKE_CXX_STANDARD 14)

add_executable(ggi1_2va vorbereitung/2va.c)
add_executable(ggi1_2vb vorbereitung/2vb.c)
add_executable(ggi1_2vc vorbereitung/2vc.c)

add_executable(ggi1_2pa praesenz/2pa.c)
add_executable(ggi1_2pb praesenz/2pb.c)
add_executable(ggi1_2pc praesenz/2pc.c)
add_executable(ggi1_2pd praesenz/2pd.c)

add_executable(ggi1_2nd nachbearbeitung/2nd.c)