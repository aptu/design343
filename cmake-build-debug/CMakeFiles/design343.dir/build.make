# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/olga/workspace/school/repos/design343

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/olga/workspace/school/repos/design343/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/design343.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/design343.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/design343.dir/flags.make

CMakeFiles/design343.dir/current/main.cpp.o: CMakeFiles/design343.dir/flags.make
CMakeFiles/design343.dir/current/main.cpp.o: ../current/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/olga/workspace/school/repos/design343/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/design343.dir/current/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/design343.dir/current/main.cpp.o -c /Users/olga/workspace/school/repos/design343/current/main.cpp

CMakeFiles/design343.dir/current/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/design343.dir/current/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/olga/workspace/school/repos/design343/current/main.cpp > CMakeFiles/design343.dir/current/main.cpp.i

CMakeFiles/design343.dir/current/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/design343.dir/current/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/olga/workspace/school/repos/design343/current/main.cpp -o CMakeFiles/design343.dir/current/main.cpp.s

CMakeFiles/design343.dir/current/main.cpp.o.requires:

.PHONY : CMakeFiles/design343.dir/current/main.cpp.o.requires

CMakeFiles/design343.dir/current/main.cpp.o.provides: CMakeFiles/design343.dir/current/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/design343.dir/build.make CMakeFiles/design343.dir/current/main.cpp.o.provides.build
.PHONY : CMakeFiles/design343.dir/current/main.cpp.o.provides

CMakeFiles/design343.dir/current/main.cpp.o.provides.build: CMakeFiles/design343.dir/current/main.cpp.o


# Object files for target design343
design343_OBJECTS = \
"CMakeFiles/design343.dir/current/main.cpp.o"

# External object files for target design343
design343_EXTERNAL_OBJECTS =

design343: CMakeFiles/design343.dir/current/main.cpp.o
design343: CMakeFiles/design343.dir/build.make
design343: CMakeFiles/design343.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/olga/workspace/school/repos/design343/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable design343"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/design343.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/design343.dir/build: design343

.PHONY : CMakeFiles/design343.dir/build

CMakeFiles/design343.dir/requires: CMakeFiles/design343.dir/current/main.cpp.o.requires

.PHONY : CMakeFiles/design343.dir/requires

CMakeFiles/design343.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/design343.dir/cmake_clean.cmake
.PHONY : CMakeFiles/design343.dir/clean

CMakeFiles/design343.dir/depend:
	cd /Users/olga/workspace/school/repos/design343/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/olga/workspace/school/repos/design343 /Users/olga/workspace/school/repos/design343 /Users/olga/workspace/school/repos/design343/cmake-build-debug /Users/olga/workspace/school/repos/design343/cmake-build-debug /Users/olga/workspace/school/repos/design343/cmake-build-debug/CMakeFiles/design343.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/design343.dir/depend
