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

# Utility rule file for featureMatcher_automoc.

# Include the progress variables for this target.
include src/featureMatcher/CMakeFiles/featureMatcher_automoc.dir/progress.make

src/featureMatcher/CMakeFiles/featureMatcher_automoc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/labrat/Desktop/cam-proc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic moc and uic for target featureMatcher"
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && /usr/bin/cmake -E cmake_autogen /home/labrat/Desktop/cam-proc/build/src/featureMatcher/CMakeFiles/featureMatcher_automoc.dir/ ""

featureMatcher_automoc: src/featureMatcher/CMakeFiles/featureMatcher_automoc
featureMatcher_automoc: src/featureMatcher/CMakeFiles/featureMatcher_automoc.dir/build.make

.PHONY : featureMatcher_automoc

# Rule to build all files generated by this target.
src/featureMatcher/CMakeFiles/featureMatcher_automoc.dir/build: featureMatcher_automoc

.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_automoc.dir/build

src/featureMatcher/CMakeFiles/featureMatcher_automoc.dir/clean:
	cd /home/labrat/Desktop/cam-proc/build/src/featureMatcher && $(CMAKE_COMMAND) -P CMakeFiles/featureMatcher_automoc.dir/cmake_clean.cmake
.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_automoc.dir/clean

src/featureMatcher/CMakeFiles/featureMatcher_automoc.dir/depend:
	cd /home/labrat/Desktop/cam-proc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/labrat/Desktop/cam-proc /home/labrat/Desktop/cam-proc/src/featureMatcher /home/labrat/Desktop/cam-proc/build /home/labrat/Desktop/cam-proc/build/src/featureMatcher /home/labrat/Desktop/cam-proc/build/src/featureMatcher/CMakeFiles/featureMatcher_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/featureMatcher/CMakeFiles/featureMatcher_automoc.dir/depend

