
cmake_minimum_required(VERSION 3.1)
project(response_code)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
message(STATUS "Type :  " ${CURL_LIBRARY} )

find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIR})

add_executable (example ${CMAKE_CURRENT_SOURCE_DIR} example.cpp)
target_link_libraries(example ${CURL_LIBRARY})
