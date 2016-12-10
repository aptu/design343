cmake_minimum_required(VERSION 2.8)
project(design343)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES current/main.cpp current/customer.cpp current/BST/binTree.cpp)
add_executable(design343 ${SOURCE_FILES})