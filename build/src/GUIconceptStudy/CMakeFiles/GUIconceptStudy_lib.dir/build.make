# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/labrat/Desktop/cam-proc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/labrat/Desktop/cam-proc/build

# Include any dependencies generated for this target.
include src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/depend.make

# Include the progress variables for this target.
include src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/flags.make

src/GUIconceptStudy/ui_mainwindow.h: ../src/GUIconceptStudy/ui/mainwindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_mainwindow.h"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/ui_mainwindow.h /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/mainwindow.ui

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/flags.make
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o: ../src/GUIconceptStudy/src/qcustomplot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o -c /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/src/qcustomplot.cpp

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/src/qcustomplot.cpp > CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.i

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/src/qcustomplot.cpp -o CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.s

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o.requires:

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o.requires

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o.provides: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o.requires
	$(MAKE) -f src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/build.make src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o.provides.build
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o.provides

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o.provides.build: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o


src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/flags.make
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o: ../src/GUIconceptStudy/ui/mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o -c /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/mainwindow.cpp

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/mainwindow.cpp > CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.i

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/mainwindow.cpp -o CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.s

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o.requires:

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o.requires

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o.provides: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o.requires
	$(MAKE) -f src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/build.make src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o.provides.build
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o.provides

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o.provides.build: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o


src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/flags.make
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o -c /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp > CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.i

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp -o CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.s

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o.requires:

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o.requires

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o.provides: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o.requires
	$(MAKE) -f src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/build.make src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o.provides.build
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o.provides

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o.provides.build: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o


# Object files for target GUIconceptStudy_lib
GUIconceptStudy_lib_OBJECTS = \
"CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o" \
"CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o" \
"CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o"

# External object files for target GUIconceptStudy_lib
GUIconceptStudy_lib_EXTERNAL_OBJECTS =

lib/libGUIconceptStudy_lib.so: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o
lib/libGUIconceptStudy_lib.so: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o
lib/libGUIconceptStudy_lib.so: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o
lib/libGUIconceptStudy_lib.so: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/build.make
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libpthread.so
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_viz.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_objdetect.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_videostab.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_shape.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_stitching.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_calib3d.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_superres.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_dnn.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_ml.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libQt5PrintSupport.so.5.5.1
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.5.1
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_photo.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_features2d.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_highgui.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_flann.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_video.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_videoio.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_imgcodecs.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_imgproc.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/local/lib/libopencv_core.so.3.4.0
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.5.1
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.5.1
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.5.1
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.5.1
lib/libGUIconceptStudy_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.5.1
lib/libGUIconceptStudy_lib.so: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library ../../lib/libGUIconceptStudy_lib.so"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GUIconceptStudy_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/build: lib/libGUIconceptStudy_lib.so

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/build

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/requires: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/src/qcustomplot.cpp.o.requires
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/requires: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/ui/mainwindow.cpp.o.requires
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/requires: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/CMakeFiles/GUIconceptStudy_lib.dir/qrc_res.cpp.o.requires

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/requires

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/clean:
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && $(CMAKE_COMMAND) -P CMakeFiles/GUIconceptStudy_lib.dir/cmake_clean.cmake
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/clean

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/depend: src/GUIconceptStudy/ui_mainwindow.h
	cd /home/labrat/Desktop/cam-proc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/labrat/Desktop/cam-proc /home/labrat/Desktop/cam-proc/src/GUIconceptStudy /home/labrat/Desktop/cam-proc/build /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy_lib.dir/depend

