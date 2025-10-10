cmake_minimum_required(VERSION 3.16.3)
project(cmake3 C)
set(CMAKE_C_STANDARD 11)
set(SOURCES  
	src/add.c
	src/sub.c
	src/mul.c
	)
set(INCLUDE
	include/math.h
	)
set(TEST
	test/app.c
	)
add_executable(app ${SOURCES} ${INCLUDE} ${TEST}) 
