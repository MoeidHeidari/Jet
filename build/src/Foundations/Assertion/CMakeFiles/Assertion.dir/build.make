# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/andromeda/Documents/Jet

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andromeda/Documents/Jet/build

# Include any dependencies generated for this target.
include src/Foundations/Assertion/CMakeFiles/Assertion.dir/depend.make

# Include the progress variables for this target.
include src/Foundations/Assertion/CMakeFiles/Assertion.dir/progress.make

# Include the compile flags for this target's objects.
include src/Foundations/Assertion/CMakeFiles/Assertion.dir/flags.make

src/Foundations/Assertion/CMakeFiles/Assertion.dir/jet_assertion.cpp.o: src/Foundations/Assertion/CMakeFiles/Assertion.dir/flags.make
src/Foundations/Assertion/CMakeFiles/Assertion.dir/jet_assertion.cpp.o: ../src/Foundations/Assertion/jet_assertion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andromeda/Documents/Jet/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/Foundations/Assertion/CMakeFiles/Assertion.dir/jet_assertion.cpp.o"
	cd /home/andromeda/Documents/Jet/build/src/Foundations/Assertion && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assertion.dir/jet_assertion.cpp.o -c /home/andromeda/Documents/Jet/src/Foundations/Assertion/jet_assertion.cpp

src/Foundations/Assertion/CMakeFiles/Assertion.dir/jet_assertion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assertion.dir/jet_assertion.cpp.i"
	cd /home/andromeda/Documents/Jet/build/src/Foundations/Assertion && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andromeda/Documents/Jet/src/Foundations/Assertion/jet_assertion.cpp > CMakeFiles/Assertion.dir/jet_assertion.cpp.i

src/Foundations/Assertion/CMakeFiles/Assertion.dir/jet_assertion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assertion.dir/jet_assertion.cpp.s"
	cd /home/andromeda/Documents/Jet/build/src/Foundations/Assertion && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andromeda/Documents/Jet/src/Foundations/Assertion/jet_assertion.cpp -o CMakeFiles/Assertion.dir/jet_assertion.cpp.s

# Object files for target Assertion
Assertion_OBJECTS = \
"CMakeFiles/Assertion.dir/jet_assertion.cpp.o"

# External object files for target Assertion
Assertion_EXTERNAL_OBJECTS =

src/Foundations/Assertion/libAssertion.a: src/Foundations/Assertion/CMakeFiles/Assertion.dir/jet_assertion.cpp.o
src/Foundations/Assertion/libAssertion.a: src/Foundations/Assertion/CMakeFiles/Assertion.dir/build.make
src/Foundations/Assertion/libAssertion.a: src/Foundations/Assertion/CMakeFiles/Assertion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andromeda/Documents/Jet/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libAssertion.a"
	cd /home/andromeda/Documents/Jet/build/src/Foundations/Assertion && $(CMAKE_COMMAND) -P CMakeFiles/Assertion.dir/cmake_clean_target.cmake
	cd /home/andromeda/Documents/Jet/build/src/Foundations/Assertion && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assertion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Foundations/Assertion/CMakeFiles/Assertion.dir/build: src/Foundations/Assertion/libAssertion.a

.PHONY : src/Foundations/Assertion/CMakeFiles/Assertion.dir/build

src/Foundations/Assertion/CMakeFiles/Assertion.dir/clean:
	cd /home/andromeda/Documents/Jet/build/src/Foundations/Assertion && $(CMAKE_COMMAND) -P CMakeFiles/Assertion.dir/cmake_clean.cmake
.PHONY : src/Foundations/Assertion/CMakeFiles/Assertion.dir/clean

src/Foundations/Assertion/CMakeFiles/Assertion.dir/depend:
	cd /home/andromeda/Documents/Jet/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andromeda/Documents/Jet /home/andromeda/Documents/Jet/src/Foundations/Assertion /home/andromeda/Documents/Jet/build /home/andromeda/Documents/Jet/build/src/Foundations/Assertion /home/andromeda/Documents/Jet/build/src/Foundations/Assertion/CMakeFiles/Assertion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/Foundations/Assertion/CMakeFiles/Assertion.dir/depend

