# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.21.4/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.21.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/leogenot/Downloads/Simple-Glimac-Setup-main

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/leogenot/Downloads/Simple-Glimac-Setup-main/build

# Include any dependencies generated for this target.
include CMakeFiles/TP1_exe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TP1_exe.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TP1_exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TP1_exe.dir/flags.make

CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.o: CMakeFiles/TP1_exe.dir/flags.make
CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.o: ../TP1/game_functions.cpp
CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.o: CMakeFiles/TP1_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/leogenot/Downloads/Simple-Glimac-Setup-main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.o -MF CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.o.d -o CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.o -c /Users/leogenot/Downloads/Simple-Glimac-Setup-main/TP1/game_functions.cpp

CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/leogenot/Downloads/Simple-Glimac-Setup-main/TP1/game_functions.cpp > CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.i

CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/leogenot/Downloads/Simple-Glimac-Setup-main/TP1/game_functions.cpp -o CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.s

CMakeFiles/TP1_exe.dir/TP1/main.cpp.o: CMakeFiles/TP1_exe.dir/flags.make
CMakeFiles/TP1_exe.dir/TP1/main.cpp.o: ../TP1/main.cpp
CMakeFiles/TP1_exe.dir/TP1/main.cpp.o: CMakeFiles/TP1_exe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/leogenot/Downloads/Simple-Glimac-Setup-main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TP1_exe.dir/TP1/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TP1_exe.dir/TP1/main.cpp.o -MF CMakeFiles/TP1_exe.dir/TP1/main.cpp.o.d -o CMakeFiles/TP1_exe.dir/TP1/main.cpp.o -c /Users/leogenot/Downloads/Simple-Glimac-Setup-main/TP1/main.cpp

CMakeFiles/TP1_exe.dir/TP1/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP1_exe.dir/TP1/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/leogenot/Downloads/Simple-Glimac-Setup-main/TP1/main.cpp > CMakeFiles/TP1_exe.dir/TP1/main.cpp.i

CMakeFiles/TP1_exe.dir/TP1/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP1_exe.dir/TP1/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/leogenot/Downloads/Simple-Glimac-Setup-main/TP1/main.cpp -o CMakeFiles/TP1_exe.dir/TP1/main.cpp.s

# Object files for target TP1_exe
TP1_exe_OBJECTS = \
"CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.o" \
"CMakeFiles/TP1_exe.dir/TP1/main.cpp.o"

# External object files for target TP1_exe
TP1_exe_EXTERNAL_OBJECTS =

../bin/Debug/TP1_exe: CMakeFiles/TP1_exe.dir/TP1/game_functions.cpp.o
../bin/Debug/TP1_exe: CMakeFiles/TP1_exe.dir/TP1/main.cpp.o
../bin/Debug/TP1_exe: CMakeFiles/TP1_exe.dir/build.make
../bin/Debug/TP1_exe: CMakeFiles/TP1_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/leogenot/Downloads/Simple-Glimac-Setup-main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/Debug/TP1_exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TP1_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TP1_exe.dir/build: ../bin/Debug/TP1_exe
.PHONY : CMakeFiles/TP1_exe.dir/build

CMakeFiles/TP1_exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TP1_exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TP1_exe.dir/clean

CMakeFiles/TP1_exe.dir/depend:
	cd /Users/leogenot/Downloads/Simple-Glimac-Setup-main/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/leogenot/Downloads/Simple-Glimac-Setup-main /Users/leogenot/Downloads/Simple-Glimac-Setup-main /Users/leogenot/Downloads/Simple-Glimac-Setup-main/build /Users/leogenot/Downloads/Simple-Glimac-Setup-main/build /Users/leogenot/Downloads/Simple-Glimac-Setup-main/build/CMakeFiles/TP1_exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TP1_exe.dir/depend
