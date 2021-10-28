cmake_minimum_required(VERSION 3.10)

project(lifo_c)

set(LIFO_C_HEADERS include/lifo_c.h)
set(LIFO_C_SOURCES src/lifo_c.c)

include_directories(include)

add_library(lifo_c
	${LIFO_C_HEADERS}
	${LIFO_C_SOURCES}
	)

add_executable(lifo_c_test
	src/lifo_c_test.c)

target_link_libraries(lifo_c_test lifo_c)

set_property(TARGET lifo_c PROPERTY C_STANDARD 11)
set_property(TARGET lifo_c_test PROPERTY C_STANDARD 11)

