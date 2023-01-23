cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

add_definitions(-std=c++11)
find_package(gazebo REQUIRED
gazebo_plugins
)

include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})
list(APPEND CMAKE_CXX_FLAGS "${GAZEBO_CXX_FLAGS}")

add_library(hello SHARED script/hello.cpp)

target_link_libraries(hello ${GAZEBO_LIBRARIES})  