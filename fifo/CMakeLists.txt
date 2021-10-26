cmake_minimum_required(VERSION 3.10)

project(fifo)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(FIFO_HEADERS include/fifo.h)
set(FIFO_SOURCES src/fifo.cpp)

include_directories(include)

add_library(fifo
	${FIFO_HEADERS}
	${FIFO_SOURCES}
	)

add_executable(fifo_test
	src/fifo_test.cpp)

target_link_libraries(fifo_test fifo)
