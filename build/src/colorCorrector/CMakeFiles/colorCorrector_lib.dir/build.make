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
include src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/depend.make

# Include the progress variables for this target.
include src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/progress.make

# Include the compile flags for this target's objects.
include src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/flags.make

src/colorCorrector/ui_lightfieldwidget.h: ../src/colorCorrector/ui/lightfieldwidget.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_lightfieldwidget.h"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/labrat/Desktop/cam-proc/build/src/colorCorrector/ui_lightfieldwidget.h /home/labrat/Desktop/cam-proc/src/colorCorrector/ui/lightfieldwidget.ui

src/colorCorrector/ui_rgbhsvwidget.h: ../src/colorCorrector/ui/rgbhsvwidget.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_rgbhsvwidget.h"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/labrat/Desktop/cam-proc/build/src/colorCorrector/ui_rgbhsvwidget.h /home/labrat/Desktop/cam-proc/src/colorCorrector/ui/rgbhsvwidget.ui

src/colorCorrector/ui_mainwindow.h: ../src/colorCorrector/ui/mainwindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ui_mainwindow.h"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/labrat/Desktop/cam-proc/build/src/colorCorrector/ui_mainwindow.h /home/labrat/Desktop/cam-proc/src/colorCorrector/ui/mainwindow.ui

src/colorCorrector/ui_adaptivelightfieldwidget.h: ../src/colorCorrector/ui/adaptivelightfieldwidget.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating ui_adaptivelightfieldwidget.h"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/labrat/Desktop/cam-proc/build/src/colorCorrector/ui_adaptivelightfieldwidget.h /home/labrat/Desktop/cam-proc/src/colorCorrector/ui/adaptivelightfieldwidget.ui

src/colorCorrector/ui_histeqwidget.h: ../src/colorCorrector/ui/histeqwidget.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating ui_histeqwidget.h"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/labrat/Desktop/cam-proc/build/src/colorCorrector/ui_histeqwidget.h /home/labrat/Desktop/cam-proc/src/colorCorrector/ui/histeqwidget.ui

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/flags.make
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o: ../src/colorCorrector/src/histequalizer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o -c /home/labrat/Desktop/cam-proc/src/colorCorrector/src/histequalizer.cpp

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/colorCorrector/src/histequalizer.cpp > CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.i

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/colorCorrector/src/histequalizer.cpp -o CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.s

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o.requires:

.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o.requires

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o.provides: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o.requires
	$(MAKE) -f src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/build.make src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o.provides.build
.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o.provides

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o.provides.build: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o


src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/flags.make
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o: ../src/colorCorrector/src/lightfield.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o -c /home/labrat/Desktop/cam-proc/src/colorCorrector/src/lightfield.cpp

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/colorCorrector/src/lightfield.cpp > CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.i

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/colorCorrector/src/lightfield.cpp -o CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.s

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o.requires:

.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o.requires

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o.provides: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o.requires
	$(MAKE) -f src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/build.make src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o.provides.build
.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o.provides

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o.provides.build: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o


src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/flags.make
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o: ../src/colorCorrector/src/rgbhsvstretch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o -c /home/labrat/Desktop/cam-proc/src/colorCorrector/src/rgbhsvstretch.cpp

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/colorCorrector/src/rgbhsvstretch.cpp > CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.i

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/colorCorrector/src/rgbhsvstretch.cpp -o CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.s

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o.requires:

.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o.requires

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o.provides: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o.requires
	$(MAKE) -f src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/build.make src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o.provides.build
.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o.provides

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o.provides.build: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o


src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/flags.make
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o: ../src/colorCorrector/src/adaptivelightfield.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o -c /home/labrat/Desktop/cam-proc/src/colorCorrector/src/adaptivelightfield.cpp

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/colorCorrector/src/adaptivelightfield.cpp > CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.i

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/colorCorrector/src/adaptivelightfield.cpp -o CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.s

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o.requires:

.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o.requires

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o.provides: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o.requires
	$(MAKE) -f src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/build.make src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o.provides.build
.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o.provides

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o.provides.build: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o


src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/flags.make
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o: ../src/colorCorrector/src/lightfieldcorrector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o -c /home/labrat/Desktop/cam-proc/src/colorCorrector/src/lightfieldcorrector.cpp

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/colorCorrector/src/lightfieldcorrector.cpp > CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.i

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/colorCorrector/src/lightfieldcorrector.cpp -o CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.s

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o.requires:

.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o.requires

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o.provides: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o.requires
	$(MAKE) -f src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/build.make src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o.provides.build
.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o.provides

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o.provides.build: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o


src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/flags.make
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o: src/colorCorrector/colorCorrector_lib_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o -c /home/labrat/Desktop/cam-proc/build/src/colorCorrector/colorCorrector_lib_automoc.cpp

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/build/src/colorCorrector/colorCorrector_lib_automoc.cpp > CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.i

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/build/src/colorCorrector/colorCorrector_lib_automoc.cpp -o CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.s

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o.requires:

.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o.requires

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o.provides: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o.requires
	$(MAKE) -f src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/build.make src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o.provides.build
.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o.provides

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o.provides.build: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o


# Object files for target colorCorrector_lib
colorCorrector_lib_OBJECTS = \
"CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o" \
"CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o" \
"CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o" \
"CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o" \
"CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o" \
"CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o"

# External object files for target colorCorrector_lib
colorCorrector_lib_EXTERNAL_OBJECTS =

lib/libcolorCorrector_lib.so: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o
lib/libcolorCorrector_lib.so: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o
lib/libcolorCorrector_lib.so: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o
lib/libcolorCorrector_lib.so: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o
lib/libcolorCorrector_lib.so: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o
lib/libcolorCorrector_lib.so: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o
lib/libcolorCorrector_lib.so: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/build.make
lib/libcolorCorrector_lib.so: lib/liblibCam.so
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libpthread.so
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_viz.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_objdetect.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_videostab.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_shape.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_stitching.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_calib3d.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_superres.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_dnn.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_ml.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_photo.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_features2d.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_highgui.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_video.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_videoio.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_imgcodecs.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_imgproc.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_flann.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/local/lib/libopencv_core.so.3.4.0
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libQt5PrintSupport.so.5.5.1
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.5.1
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.5.1
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.5.1
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.5.1
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Sql.so.5.5.1
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libQt5XmlPatterns.so.5.5.1
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.5.1
lib/libcolorCorrector_lib.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.5.1
lib/libcolorCorrector_lib.so: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX shared library ../../lib/libcolorCorrector_lib.so"
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/colorCorrector_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/build: lib/libcolorCorrector_lib.so

.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/build

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/requires: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/histequalizer.cpp.o.requires
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/requires: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfield.cpp.o.requires
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/requires: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/rgbhsvstretch.cpp.o.requires
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/requires: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/adaptivelightfield.cpp.o.requires
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/requires: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/src/lightfieldcorrector.cpp.o.requires
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/requires: src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/colorCorrector_lib_automoc.cpp.o.requires

.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/requires

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/clean:
	cd /home/labrat/Desktop/cam-proc/build/src/colorCorrector && $(CMAKE_COMMAND) -P CMakeFiles/colorCorrector_lib.dir/cmake_clean.cmake
.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/clean

src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/depend: src/colorCorrector/ui_lightfieldwidget.h
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/depend: src/colorCorrector/ui_rgbhsvwidget.h
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/depend: src/colorCorrector/ui_mainwindow.h
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/depend: src/colorCorrector/ui_adaptivelightfieldwidget.h
src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/depend: src/colorCorrector/ui_histeqwidget.h
	cd /home/labrat/Desktop/cam-proc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/labrat/Desktop/cam-proc /home/labrat/Desktop/cam-proc/src/colorCorrector /home/labrat/Desktop/cam-proc/build /home/labrat/Desktop/cam-proc/build/src/colorCorrector /home/labrat/Desktop/cam-proc/build/src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/colorCorrector/CMakeFiles/colorCorrector_lib.dir/depend

