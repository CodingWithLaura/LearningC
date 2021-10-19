project(c_signal_handling)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package (Threads)

add_executable(signal_test src/signal_test.c)
add_executable(signal_handling_threaded src/signal_handling_threaded.cpp)

target_link_libraries(signal_handling_threaded ${CMAKE_THREAD_LIBS_INIT})
