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
include src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/depend.make

# Include the progress variables for this target.
include src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flags.make

src/featureMatcher/ui_flannwidget.h: ../src/featureMatcher/flannwidget.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_flannwidget.h"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/labrat/Desktop/cam-proc/build/src/featureMatcher/ui_flannwidget.h /home/labrat/Desktop/cam-proc/src/featureMatcher/flannwidget.ui

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flags.make
src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o: ../src/featureMatcher/featurematcher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o -c /home/labrat/Desktop/cam-proc/src/featureMatcher/featurematcher.cpp

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/featureMatcher/featurematcher.cpp > CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.i

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/featureMatcher/featurematcher.cpp -o CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.s

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o.requires:

.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o.requires

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o.provides: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o.requires
	$(MAKE) -f src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/build.make src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o.provides.build
.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o.provides

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o.provides.build: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o


src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flags.make
src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o: ../src/featureMatcher/flannmatcher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o -c /home/labrat/Desktop/cam-proc/src/featureMatcher/flannmatcher.cpp

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/featureMatcher/flannmatcher.cpp > CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.i

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/featureMatcher/flannmatcher.cpp -o CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.s

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o.requires:

.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o.requires

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o.provides: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o.requires
	$(MAKE) -f src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/build.make src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o.provides.build
.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o.provides

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o.provides.build: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o


src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flags.make
src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o: ../src/featureMatcher/flannwidget.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o -c /home/labrat/Desktop/cam-proc/src/featureMatcher/flannwidget.cpp

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/featureMatcher/flannwidget.cpp > CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.i

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/featureMatcher/flannwidget.cpp -o CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.s

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o.requires:

.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o.requires

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o.provides: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o.requires
	$(MAKE) -f src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/build.make src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o.provides.build
.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o.provides

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o.provides.build: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o


src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.o: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flags.make
src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.o: ../src/featureMatcher/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/featureMatcher_lib.dir/main.cpp.o -c /home/labrat/Desktop/cam-proc/src/featureMatcher/main.cpp

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/featureMatcher_lib.dir/main.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/featureMatcher/main.cpp > CMakeFiles/featureMatcher_lib.dir/main.cpp.i

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/featureMatcher_lib.dir/main.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/featureMatcher/main.cpp -o CMakeFiles/featureMatcher_lib.dir/main.cpp.s

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.o.requires:

.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.o.requires

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.o.provides: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.o.requires
	$(MAKE) -f src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/build.make src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.o.provides.build
.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.o.provides

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.o.provides.build: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.o


src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flags.make
src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o: src/featureMatcher/featureMatcher_lib_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o -c /home/labrat/Desktop/cam-proc/build/src/featureMatcher/featureMatcher_lib_automoc.cpp

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/build/src/featureMatcher/featureMatcher_lib_automoc.cpp > CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.i

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/build/src/featureMatcher/featureMatcher_lib_automoc.cpp -o CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.s

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o.requires:

.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o.requires

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o.provides: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o.requires
	$(MAKE) -f src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/build.make src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o.provides.build
.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o.provides

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o.provides.build: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o


# Object files for target featureMatcher_lib
featureMatcher_lib_OBJECTS = \
"CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o" \
"CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o" \
"CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o" \
"CMakeFiles/featureMatcher_lib.dir/main.cpp.o" \
"CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o"

# External object files for target featureMatcher_lib
featureMatcher_lib_EXTERNAL_OBJECTS =

lib/libfeatureMatcher_lib.so: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o
lib/libfeatureMatcher_lib.so: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o
lib/libfeatureMatcher_lib.so: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o
lib/libfeatureMatcher_lib.so: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.o
lib/libfeatureMatcher_lib.so: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o
lib/libfeatureMatcher_lib.so: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/build.make
lib/libfeatureMatcher_lib.so: lib/libfeatureExtractor_lib.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libpthread.so
lib/libfeatureMatcher_lib.so: lib/liblibCam.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libQt5PrintSupport.so.5.5.1
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.5.1
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.5.1
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Sql.so.5.5.1
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libQt5XmlPatterns.so.5.5.1
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.5.1
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.5.1
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.5.1
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.5.1
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
lib/libfeatureMatcher_lib.so: /usr/lib/x86_64-linux-gnu/libpthread.so
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_viz.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_objdetect.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_videostab.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_photo.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_shape.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_stitching.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_calib3d.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_features2d.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_highgui.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_superres.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_video.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_dnn.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_videoio.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_imgcodecs.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_imgproc.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_flann.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_ml.so.3.4.0
lib/libfeatureMatcher_lib.so: /usr/local/lib/libopencv_core.so.3.4.0
lib/libfeatureMatcher_lib.so: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX shared library ../../lib/libfeatureMatcher_lib.so"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/featureMatcher_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/build: lib/libfeatureMatcher_lib.so

.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/build

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/requires: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featurematcher.cpp.o.requires
src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/requires: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannmatcher.cpp.o.requires
src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/requires: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/flannwidget.cpp.o.requires
src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/requires: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/main.cpp.o.requires
src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/requires: src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/featureMatcher_lib_automoc.cpp.o.requires

.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/requires

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/clean:
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && $(CMAKE_COMMAND) -P CMakeFiles/featureMatcher_lib.dir/cmake_clean.cmake
.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/clean

src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/depend: src/featureMatcher/ui_flannwidget.h
	cd /home/labrat/Desktop/cam-proc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/labrat/Desktop/cam-proc /home/labrat/Desktop/cam-proc/src/featureMatcher /home/labrat/Desktop/cam-proc/build /home/labrat/Desktop/cam-proc/build/src/featureMatcher /home/labrat/Desktop/cam-proc/build/src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_lib.dir/depend

