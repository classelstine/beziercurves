# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.0.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.0.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/musk/Desktop/graphix/03/beziercurves

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/musk/Desktop/graphix/03/beziercurves/build

# Include any dependencies generated for this target.
include glfw-3.2.1/tests/CMakeFiles/cursor.dir/depend.make

# Include the progress variables for this target.
include glfw-3.2.1/tests/CMakeFiles/cursor.dir/progress.make

# Include the compile flags for this target's objects.
include glfw-3.2.1/tests/CMakeFiles/cursor.dir/flags.make

glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.o: glfw-3.2.1/tests/CMakeFiles/cursor.dir/flags.make
glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.o: ../glfw-3.2.1/tests/cursor.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/musk/Desktop/graphix/03/beziercurves/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.o"
	cd /Users/musk/Desktop/graphix/03/beziercurves/build/glfw-3.2.1/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/cursor.dir/cursor.c.o   -c /Users/musk/Desktop/graphix/03/beziercurves/glfw-3.2.1/tests/cursor.c

glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cursor.dir/cursor.c.i"
	cd /Users/musk/Desktop/graphix/03/beziercurves/build/glfw-3.2.1/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/musk/Desktop/graphix/03/beziercurves/glfw-3.2.1/tests/cursor.c > CMakeFiles/cursor.dir/cursor.c.i

glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cursor.dir/cursor.c.s"
	cd /Users/musk/Desktop/graphix/03/beziercurves/build/glfw-3.2.1/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/musk/Desktop/graphix/03/beziercurves/glfw-3.2.1/tests/cursor.c -o CMakeFiles/cursor.dir/cursor.c.s

glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.o.requires:
.PHONY : glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.o.requires

glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.o.provides: glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.o.requires
	$(MAKE) -f glfw-3.2.1/tests/CMakeFiles/cursor.dir/build.make glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.o.provides.build
.PHONY : glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.o.provides

glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.o.provides.build: glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.o

glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.o: glfw-3.2.1/tests/CMakeFiles/cursor.dir/flags.make
glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.o: ../glfw-3.2.1/deps/glad.c
	$(CMAKE_COMMAND) -E cmake_progress_report /Users/musk/Desktop/graphix/03/beziercurves/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.o"
	cd /Users/musk/Desktop/graphix/03/beziercurves/build/glfw-3.2.1/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/cursor.dir/__/deps/glad.c.o   -c /Users/musk/Desktop/graphix/03/beziercurves/glfw-3.2.1/deps/glad.c

glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cursor.dir/__/deps/glad.c.i"
	cd /Users/musk/Desktop/graphix/03/beziercurves/build/glfw-3.2.1/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /Users/musk/Desktop/graphix/03/beziercurves/glfw-3.2.1/deps/glad.c > CMakeFiles/cursor.dir/__/deps/glad.c.i

glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cursor.dir/__/deps/glad.c.s"
	cd /Users/musk/Desktop/graphix/03/beziercurves/build/glfw-3.2.1/tests && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /Users/musk/Desktop/graphix/03/beziercurves/glfw-3.2.1/deps/glad.c -o CMakeFiles/cursor.dir/__/deps/glad.c.s

glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.o.requires:
.PHONY : glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.o.requires

glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.o.provides: glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.o.requires
	$(MAKE) -f glfw-3.2.1/tests/CMakeFiles/cursor.dir/build.make glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.o.provides.build
.PHONY : glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.o.provides

glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.o.provides.build: glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.o

# Object files for target cursor
cursor_OBJECTS = \
"CMakeFiles/cursor.dir/cursor.c.o" \
"CMakeFiles/cursor.dir/__/deps/glad.c.o"

# External object files for target cursor
cursor_EXTERNAL_OBJECTS =

glfw-3.2.1/tests/cursor: glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.o
glfw-3.2.1/tests/cursor: glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.o
glfw-3.2.1/tests/cursor: glfw-3.2.1/tests/CMakeFiles/cursor.dir/build.make
glfw-3.2.1/tests/cursor: glfw-3.2.1/src/libglfw3.a
glfw-3.2.1/tests/cursor: glfw-3.2.1/tests/CMakeFiles/cursor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable cursor"
	cd /Users/musk/Desktop/graphix/03/beziercurves/build/glfw-3.2.1/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cursor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
glfw-3.2.1/tests/CMakeFiles/cursor.dir/build: glfw-3.2.1/tests/cursor
.PHONY : glfw-3.2.1/tests/CMakeFiles/cursor.dir/build

glfw-3.2.1/tests/CMakeFiles/cursor.dir/requires: glfw-3.2.1/tests/CMakeFiles/cursor.dir/cursor.c.o.requires
glfw-3.2.1/tests/CMakeFiles/cursor.dir/requires: glfw-3.2.1/tests/CMakeFiles/cursor.dir/__/deps/glad.c.o.requires
.PHONY : glfw-3.2.1/tests/CMakeFiles/cursor.dir/requires

glfw-3.2.1/tests/CMakeFiles/cursor.dir/clean:
	cd /Users/musk/Desktop/graphix/03/beziercurves/build/glfw-3.2.1/tests && $(CMAKE_COMMAND) -P CMakeFiles/cursor.dir/cmake_clean.cmake
.PHONY : glfw-3.2.1/tests/CMakeFiles/cursor.dir/clean

glfw-3.2.1/tests/CMakeFiles/cursor.dir/depend:
	cd /Users/musk/Desktop/graphix/03/beziercurves/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/musk/Desktop/graphix/03/beziercurves /Users/musk/Desktop/graphix/03/beziercurves/glfw-3.2.1/tests /Users/musk/Desktop/graphix/03/beziercurves/build /Users/musk/Desktop/graphix/03/beziercurves/build/glfw-3.2.1/tests /Users/musk/Desktop/graphix/03/beziercurves/build/glfw-3.2.1/tests/CMakeFiles/cursor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : glfw-3.2.1/tests/CMakeFiles/cursor.dir/depend

