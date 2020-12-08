cmake_minimum_required(VERSION 3.17)
project(connectulum)

set(CMAKE_CXX_STANDARD 14)

add_executable(connectulum main.cpp)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(connectulum PRIVATE Threads::Threads)
