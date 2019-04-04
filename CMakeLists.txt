project(server)
cmake_minimum_required(VERSION 3.9)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON) # -std=c++11 instead of -std=gnu++11
set(MY_CXX_COMPILE_FEATURES cxx_generic_lambdas cxx_range_for cxx_strong_enums)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/build)

file(GLOB_RECURSE SOURCE src/*.cpp)
file(GLOB_RECURSE HEADER include/*.h)

find_package(LibHttpServer REQUIRED)
find_package(Boost COMPONENTS thread REQUIRED)

include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/libs
    ${Boost_INCLUDE_DIR}
    ${LIBHTTPSERVER_INCLUDE_DIRS}
    )

add_executable(server ${SOURCE} ${HEADER})

target_link_libraries(
    server 
    ${Boost_LIBRARIES}
    ${LIBHTTPSERVER_LIBRARIES}
)

