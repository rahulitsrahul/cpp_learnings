# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/build

# Include any dependencies generated for this target.
include CMakeFiles/MyCMakeExecutable.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyCMakeExecutable.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyCMakeExecutable.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyCMakeExecutable.dir/flags.make

CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.o: CMakeFiles/MyCMakeExecutable.dir/flags.make
CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.o: CMakeFiles/MyCMakeExecutable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.o -MF CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.o.d -o CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.o -c /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/src/main.cpp

CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/src/main.cpp > CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.i

CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/src/main.cpp -o CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.s

CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.o: CMakeFiles/MyCMakeExecutable.dir/flags.make
CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.o: ../src/foo.cpp
CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.o: CMakeFiles/MyCMakeExecutable.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.o -MF CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.o.d -o CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.o -c /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/src/foo.cpp

CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/src/foo.cpp > CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.i

CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/src/foo.cpp -o CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.s

# Object files for target MyCMakeExecutable
MyCMakeExecutable_OBJECTS = \
"CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.o" \
"CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.o"

# External object files for target MyCMakeExecutable
MyCMakeExecutable_EXTERNAL_OBJECTS =

MyCMakeExecutable: CMakeFiles/MyCMakeExecutable.dir/src/main.cpp.o
MyCMakeExecutable: CMakeFiles/MyCMakeExecutable.dir/src/foo.cpp.o
MyCMakeExecutable: CMakeFiles/MyCMakeExecutable.dir/build.make
MyCMakeExecutable: CMakeFiles/MyCMakeExecutable.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MyCMakeExecutable"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyCMakeExecutable.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyCMakeExecutable.dir/build: MyCMakeExecutable
.PHONY : CMakeFiles/MyCMakeExecutable.dir/build

CMakeFiles/MyCMakeExecutable.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyCMakeExecutable.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyCMakeExecutable.dir/clean

CMakeFiles/MyCMakeExecutable.dir/depend:
	cd /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/build /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/build /home/rahul/rahul_workspace/learnings/cpp_learnings/cmake_example/build/CMakeFiles/MyCMakeExecutable.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyCMakeExecutable.dir/depend

