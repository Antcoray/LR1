cmake_minimum_required(VERSION 3.10)
project(LR1)
# Enable AddressSanitizer (ASan)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fno-omit-frame-pointer")

add_executable(Task_3 Task_3.cpp)
