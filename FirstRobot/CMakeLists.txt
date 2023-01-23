cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

find_package(gazebo REQUIRED)
include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})
list(APPEND CMAKE_CXX_FLAGS "${GAZEBO_CXX_FLAGS}")

add_library(hello SHARED script/hello.cpp)
add_library(test SHARED script/test.cpp)

target_link_libraries(hello ${GAZEBO_LIBRARIES})  
target_link_libraries(test ${GAZEBO_LIBRARIES})  