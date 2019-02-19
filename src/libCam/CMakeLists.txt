cmake_minimum_required (VERSION 2.8.12)
project(libCam)
find_package(Qt5Widgets REQUIRED)

set (OpenCV_DIR /home/emanuele/opencv/build)
set (BOOST_LIBRARYDIR /usr/lib/x86_64-linux-gnu)


find_package( OpenCV REQUIRED )
#find_package(Boost COMPONENTS filesystem lboost_thread system REQUIRED)
find_package(Boost COMPONENTS system thread filesystem REQUIRED)
find_package(Qt5PrintSupport REQUIRED)

find_package(Qt5 REQUIRED COMPONENTS Core Quick Sql XmlPatterns)

###
# make sure we use c++11
###
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
        message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

include_directories(${OpenCV_INCLUDE_DIRS})
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )
INCLUDE_DIRECTORIES(${Qt5Widgets_INCLUDE_DIRS})

include_regular_expression("^([^b]|b[^o]|bo[^o]|boo[^s]|boos[^t]|boost[^/]).*$")

qt5_wrap_ui (UIS_HDRS  qtinclude/imagemanager.ui qtinclude/stereomanager.ui qtinclude/stereolistwidget.ui qtinclude/connectionmenu.ui)

file(GLOB LIBCAM_SRCS
    "include/*.h"
    "include/*.cpp"
    "include/*.hpp"
    "qtinclude/*.h"
    "qtinclude/*.cpp"
    "qtinclude/*.hpp"
)

file(GLOB UI_RC
  "qtinclude/qdarkstyle/*.qrc"
)

add_library(libCam SHARED ${LIBCAM_SRCS} ${UIS_HDRS} ${UI_RC})
target_include_directories (libCam  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} )
target_link_libraries (libCam  Qt5::Widgets  Qt5::PrintSupport Qt5::Core Qt5::Quick Qt5::Sql Qt5::XmlPatterns ${Boost_LIBRARIES} ${OpenCV_LIBS} )

