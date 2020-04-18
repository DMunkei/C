cmake_minimum_required(VERSION 3.15)
project(C C)

set(CMAKE_C_STANDARD 99)

add_executable(C main.c UA2/UA2.c UA1/UA1.c UA1/UA1.h UA2/UA2.h)
