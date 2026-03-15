cmake_minimum_required(VERSION 3.16.3)
project(hello-cmake C)
set(CMAKE_C_STANDARD 11)
add_executable(hellocmake hello.c)
install(TARGETS hellocmake RUNTIME DESTINATION bin)

