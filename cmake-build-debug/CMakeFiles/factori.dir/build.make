# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.3.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.3.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Ant-Dev\C-Programming

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Ant-Dev\C-Programming\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/factori.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/factori.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/factori.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/factori.dir/flags.make

CMakeFiles/factori.dir/assignment_2/factorial.c.obj: CMakeFiles/factori.dir/flags.make
CMakeFiles/factori.dir/assignment_2/factorial.c.obj: C:/Ant-Dev/C-Programming/assignment_2/factorial.c
CMakeFiles/factori.dir/assignment_2/factorial.c.obj: CMakeFiles/factori.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Ant-Dev\C-Programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/factori.dir/assignment_2/factorial.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/factori.dir/assignment_2/factorial.c.obj -MF CMakeFiles\factori.dir\assignment_2\factorial.c.obj.d -o CMakeFiles\factori.dir\assignment_2\factorial.c.obj -c C:\Ant-Dev\C-Programming\assignment_2\factorial.c

CMakeFiles/factori.dir/assignment_2/factorial.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/factori.dir/assignment_2/factorial.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Ant-Dev\C-Programming\assignment_2\factorial.c > CMakeFiles\factori.dir\assignment_2\factorial.c.i

CMakeFiles/factori.dir/assignment_2/factorial.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/factori.dir/assignment_2/factorial.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Ant-Dev\C-Programming\assignment_2\factorial.c -o CMakeFiles\factori.dir\assignment_2\factorial.c.s

# Object files for target factori
factori_OBJECTS = \
"CMakeFiles/factori.dir/assignment_2/factorial.c.obj"

# External object files for target factori
factori_EXTERNAL_OBJECTS =

factori.exe: CMakeFiles/factori.dir/assignment_2/factorial.c.obj
factori.exe: CMakeFiles/factori.dir/build.make
factori.exe: CMakeFiles/factori.dir/linkLibs.rsp
factori.exe: CMakeFiles/factori.dir/objects1.rsp
factori.exe: CMakeFiles/factori.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Ant-Dev\C-Programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable factori.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\factori.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/factori.dir/build: factori.exe
.PHONY : CMakeFiles/factori.dir/build

CMakeFiles/factori.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\factori.dir\cmake_clean.cmake
.PHONY : CMakeFiles/factori.dir/clean

CMakeFiles/factori.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Ant-Dev\C-Programming C:\Ant-Dev\C-Programming C:\Ant-Dev\C-Programming\cmake-build-debug C:\Ant-Dev\C-Programming\cmake-build-debug C:\Ant-Dev\C-Programming\cmake-build-debug\CMakeFiles\factori.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/factori.dir/depend

