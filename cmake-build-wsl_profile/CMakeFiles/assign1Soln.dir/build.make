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
CMAKE_SOURCE_DIR = /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/cmake-build-wsl_profile

# Include any dependencies generated for this target.
include CMakeFiles/assign1Soln.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/assign1Soln.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/assign1Soln.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assign1Soln.dir/flags.make

CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.o: CMakeFiles/assign1Soln.dir/flags.make
CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.o: ../sudokutesterClientApp.c
CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.o: CMakeFiles/assign1Soln.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/cmake-build-wsl_profile/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.o -MF CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.o.d -o CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.o -c /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/sudokutesterClientApp.c

CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/sudokutesterClientApp.c > CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.i

CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/sudokutesterClientApp.c -o CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.s

CMakeFiles/assign1Soln.dir/sudokuTester.c.o: CMakeFiles/assign1Soln.dir/flags.make
CMakeFiles/assign1Soln.dir/sudokuTester.c.o: ../sudokuTester.c
CMakeFiles/assign1Soln.dir/sudokuTester.c.o: CMakeFiles/assign1Soln.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/cmake-build-wsl_profile/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/assign1Soln.dir/sudokuTester.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/assign1Soln.dir/sudokuTester.c.o -MF CMakeFiles/assign1Soln.dir/sudokuTester.c.o.d -o CMakeFiles/assign1Soln.dir/sudokuTester.c.o -c /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/sudokuTester.c

CMakeFiles/assign1Soln.dir/sudokuTester.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/assign1Soln.dir/sudokuTester.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/sudokuTester.c > CMakeFiles/assign1Soln.dir/sudokuTester.c.i

CMakeFiles/assign1Soln.dir/sudokuTester.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/assign1Soln.dir/sudokuTester.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/sudokuTester.c -o CMakeFiles/assign1Soln.dir/sudokuTester.c.s

# Object files for target assign1Soln
assign1Soln_OBJECTS = \
"CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.o" \
"CMakeFiles/assign1Soln.dir/sudokuTester.c.o"

# External object files for target assign1Soln
assign1Soln_EXTERNAL_OBJECTS =

assign1Soln: CMakeFiles/assign1Soln.dir/sudokutesterClientApp.c.o
assign1Soln: CMakeFiles/assign1Soln.dir/sudokuTester.c.o
assign1Soln: CMakeFiles/assign1Soln.dir/build.make
assign1Soln: CMakeFiles/assign1Soln.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/cmake-build-wsl_profile/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable assign1Soln"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assign1Soln.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assign1Soln.dir/build: assign1Soln
.PHONY : CMakeFiles/assign1Soln.dir/build

CMakeFiles/assign1Soln.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/assign1Soln.dir/cmake_clean.cmake
.PHONY : CMakeFiles/assign1Soln.dir/clean

CMakeFiles/assign1Soln.dir/depend:
	cd /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/cmake-build-wsl_profile && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/cmake-build-wsl_profile /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/cmake-build-wsl_profile /mnt/c/data/CollegeSheridan/PROG20799/assignment/assign1ForStudents/cmake-build-wsl_profile/CMakeFiles/assign1Soln.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/assign1Soln.dir/depend
