cmake_minimum_required(VERSION 3.10)

project(lifo)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(LIFO_HEADERS include/lifo.h)
set(LIFO_SOURCES src/lifo.cpp)

include_directories(include)

add_library(lifo
	${LIFO_HEADERS}
	${LIFO_SOURCES}
	)

add_executable(lifo_test
	src/lifo_test.cpp)

target_link_libraries(lifo_test lifo)
