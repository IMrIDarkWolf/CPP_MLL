cmake_minimum_required(VERSION 3.13)
project(iris_classification)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE Debug)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O2")

include_directories("${PROJECT_SOURCE_DIR}/include")

file(GLOB CPPS "source/*.cpp" CS "source/*.c")

add_executable(${PROJECT_NAME} ${CPPS} ${CS})