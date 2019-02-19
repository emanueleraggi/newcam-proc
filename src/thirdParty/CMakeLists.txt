cmake_minimum_required (VERSION 2.8.12)
project(example)

find_package( Qt5Widgets REQUIRED)
find_package( Qt5PrintSupport REQUIRED)

###
# make sure we use c++11
###
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

file(GLOB SRCS
    "qCustomPlot/*.h"
    "qCustomPlot/*.cpp"
    "qCustomPlot/*.hpp"
)

add_library(libQCustomPlot ${SRCS})
target_link_libraries (libQCustomPlot Qt5::Widgets  Qt5::PrintSupport)
