# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/build

# Include any dependencies generated for this target.
include CMakeFiles/tp4_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tp4_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp4_test.dir/flags.make

CMakeFiles/tp4_test.dir/test/catch.cpp.o: CMakeFiles/tp4_test.dir/flags.make
CMakeFiles/tp4_test.dir/test/catch.cpp.o: ../test/catch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp4_test.dir/test/catch.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp4_test.dir/test/catch.cpp.o -c /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/test/catch.cpp

CMakeFiles/tp4_test.dir/test/catch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp4_test.dir/test/catch.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/test/catch.cpp > CMakeFiles/tp4_test.dir/test/catch.cpp.i

CMakeFiles/tp4_test.dir/test/catch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp4_test.dir/test/catch.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/test/catch.cpp -o CMakeFiles/tp4_test.dir/test/catch.cpp.s

CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o: CMakeFiles/tp4_test.dir/flags.make
CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o: ../test/tp4_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o -c /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/test/tp4_test.cpp

CMakeFiles/tp4_test.dir/test/tp4_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp4_test.dir/test/tp4_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/test/tp4_test.cpp > CMakeFiles/tp4_test.dir/test/tp4_test.cpp.i

CMakeFiles/tp4_test.dir/test/tp4_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp4_test.dir/test/tp4_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/test/tp4_test.cpp -o CMakeFiles/tp4_test.dir/test/tp4_test.cpp.s

# Object files for target tp4_test
tp4_test_OBJECTS = \
"CMakeFiles/tp4_test.dir/test/catch.cpp.o" \
"CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o"

# External object files for target tp4_test
tp4_test_EXTERNAL_OBJECTS =

tp4_test: CMakeFiles/tp4_test.dir/test/catch.cpp.o
tp4_test: CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o
tp4_test: CMakeFiles/tp4_test.dir/build.make
tp4_test: CMakeFiles/tp4_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable tp4_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp4_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp4_test.dir/build: tp4_test

.PHONY : CMakeFiles/tp4_test.dir/build

CMakeFiles/tp4_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp4_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp4_test.dir/clean

CMakeFiles/tp4_test.dir/depend:
	cd /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4 /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4 /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/build /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/build /home/local.isima.fr/vicanhotod/TP_Cpp_ZZ3/tp_4/build/CMakeFiles/tp4_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tp4_test.dir/depend

