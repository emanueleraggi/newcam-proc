cmake_minimum_required(VERSION 2.8)

# Add our custom library stuff
#include_regular_expression("^([^b]|b[^o]|bo[^o]|boo[^s]|boos[^t]|boost[^/]).*$")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(INCLUDE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/include)

# Only works on CMake not-ancient
#set_property(GLOBAL PROPERTY C_STANDARD 99)
# On the version in 14.04, do it the old, gunky way
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu99 -g") # This way sucks
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g") # This way sucks
add_definitions("-Wno-deprecated-declarations")

project(NewCam-proc)
add_subdirectory(src/libCam)
add_subdirectory(src/colorCorrector)
add_subdirectory(src/ERDatabaseSystem)
add_subdirectory(src/detector)


