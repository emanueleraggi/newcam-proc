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
include src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/depend.make

# Include the progress variables for this target.
include src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/progress.make

# Include the compile flags for this target's objects.
include src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/flags.make

src/GUIconceptStudy/ui_mainwindow.h: ../src/GUIconceptStudy/ui/mainwindow.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_mainwindow.h"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/ui_mainwindow.h /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/mainwindow.ui

src/GUIconceptStudy/ui_leftcameramenudialog.h: ../src/GUIconceptStudy/ui/leftcameramenudialog.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_leftcameramenudialog.h"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/ui_leftcameramenudialog.h /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/leftcameramenudialog.ui

src/GUIconceptStudy/ui_clipscene.h: ../src/GUIconceptStudy/ui/clipscene.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating ui_clipscene.h"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/ui_clipscene.h /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/clipscene.ui

src/GUIconceptStudy/ui_rightcameramenudialog.h: ../src/GUIconceptStudy/ui/rightcameramenudialog.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating ui_rightcameramenudialog.h"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/ui_rightcameramenudialog.h /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/rightcameramenudialog.ui

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/flags.make
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o: ../src/GUIconceptStudy/main/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o -c /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/main/main.cpp

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GUIconceptStudy.dir/main/main.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/main/main.cpp > CMakeFiles/GUIconceptStudy.dir/main/main.cpp.i

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GUIconceptStudy.dir/main/main.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/main/main.cpp -o CMakeFiles/GUIconceptStudy.dir/main/main.cpp.s

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o.requires:

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o.requires

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o.provides: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o.requires
	$(MAKE) -f src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/build.make src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o.provides.build
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o.provides

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o.provides.build: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o


src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/flags.make
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o: ../src/GUIconceptStudy/ui/mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o -c /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/mainwindow.cpp

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/mainwindow.cpp > CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.i

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/mainwindow.cpp -o CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.s

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o.requires:

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o.requires

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o.provides: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o.requires
	$(MAKE) -f src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/build.make src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o.provides.build
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o.provides

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o.provides.build: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o


src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/flags.make
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o: ../src/GUIconceptStudy/ui/leftcameramenudialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o -c /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/leftcameramenudialog.cpp

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/leftcameramenudialog.cpp > CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.i

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/leftcameramenudialog.cpp -o CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.s

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o.requires:

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o.requires

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o.provides: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o.requires
	$(MAKE) -f src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/build.make src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o.provides.build
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o.provides

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o.provides.build: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o


src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/flags.make
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o: ../src/GUIconceptStudy/ui/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o -c /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/main.cpp

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/main.cpp > CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.i

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/main.cpp -o CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.s

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o.requires:

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o.requires

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o.provides: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o.requires
	$(MAKE) -f src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/build.make src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o.provides.build
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o.provides

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o.provides.build: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o


src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/flags.make
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o: ../src/GUIconceptStudy/ui/rightcameramenudialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o -c /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/rightcameramenudialog.cpp

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/rightcameramenudialog.cpp > CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.i

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/rightcameramenudialog.cpp -o CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.s

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o.requires:

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o.requires

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o.provides: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o.requires
	$(MAKE) -f src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/build.make src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o.provides.build
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o.provides

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o.provides.build: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o


src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/flags.make
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o: ../src/GUIconceptStudy/ui/clipscene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o -c /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/clipscene.cpp

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/clipscene.cpp > CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.i

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/src/GUIconceptStudy/ui/clipscene.cpp -o CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.s

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o.requires:

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o.requires

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o.provides: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o.requires
	$(MAKE) -f src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/build.make src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o.provides.build
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o.provides

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o.provides.build: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o


src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/flags.make
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o: src/GUIconceptStudy/GUIconceptStudy_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o -c /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/GUIconceptStudy_automoc.cpp

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/GUIconceptStudy_automoc.cpp > CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.i

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/GUIconceptStudy_automoc.cpp -o CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.s

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o.requires:

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o.requires

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o.provides: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o.requires
	$(MAKE) -f src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/build.make src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o.provides.build
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o.provides

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o.provides.build: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o


src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/flags.make
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o -c /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.i"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp > CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.i

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.s"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp -o CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.s

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o.requires:

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o.requires

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o.provides: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o.requires
	$(MAKE) -f src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/build.make src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o.provides.build
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o.provides

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o.provides.build: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o


# Object files for target GUIconceptStudy
GUIconceptStudy_OBJECTS = \
"CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o" \
"CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o" \
"CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o" \
"CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o" \
"CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o" \
"CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o" \
"CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o" \
"CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o"

# External object files for target GUIconceptStudy
GUIconceptStudy_EXTERNAL_OBJECTS =

bin/GUIconceptStudy: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o
bin/GUIconceptStudy: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o
bin/GUIconceptStudy: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o
bin/GUIconceptStudy: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o
bin/GUIconceptStudy: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o
bin/GUIconceptStudy: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o
bin/GUIconceptStudy: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o
bin/GUIconceptStudy: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o
bin/GUIconceptStudy: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/build.make
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libboost_system.so
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libboost_thread.so
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libpthread.so
bin/GUIconceptStudy: /usr/local/lib/libopencv_viz.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_objdetect.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_videostab.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_shape.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_stitching.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_calib3d.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_superres.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_dnn.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_ml.so.3.4.0
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libQt5PrintSupport.so.5.5.1
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.5.1
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libQt5Sql.so.5.5.1
bin/GUIconceptStudy: /usr/local/lib/libopencv_photo.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_features2d.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_highgui.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_flann.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_video.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_videoio.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_imgcodecs.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_imgproc.so.3.4.0
bin/GUIconceptStudy: /usr/local/lib/libopencv_core.so.3.4.0
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.5.1
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.5.1
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.5.1
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.5.1
bin/GUIconceptStudy: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.5.1
bin/GUIconceptStudy: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable ../../bin/GUIconceptStudy"
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GUIconceptStudy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/build: bin/GUIconceptStudy

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/build

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/requires: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/main/main.cpp.o.requires
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/requires: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/mainwindow.cpp.o.requires
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/requires: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/leftcameramenudialog.cpp.o.requires
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/requires: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/main.cpp.o.requires
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/requires: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/rightcameramenudialog.cpp.o.requires
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/requires: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/ui/clipscene.cpp.o.requires
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/requires: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/GUIconceptStudy_automoc.cpp.o.requires
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/requires: src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/CMakeFiles/GUIconceptStudy.dir/qrc_res.cpp.o.requires

.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/requires

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/clean:
	cd /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy && $(CMAKE_COMMAND) -P CMakeFiles/GUIconceptStudy.dir/cmake_clean.cmake
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/clean

src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/depend: src/GUIconceptStudy/ui_mainwindow.h
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/depend: src/GUIconceptStudy/ui_leftcameramenudialog.h
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/depend: src/GUIconceptStudy/ui_clipscene.h
src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/depend: src/GUIconceptStudy/ui_rightcameramenudialog.h
	cd /home/labrat/Desktop/cam-proc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/labrat/Desktop/cam-proc /home/labrat/Desktop/cam-proc/src/GUIconceptStudy /home/labrat/Desktop/cam-proc/build /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy /home/labrat/Desktop/cam-proc/build/src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/GUIconceptStudy/CMakeFiles/GUIconceptStudy.dir/depend

