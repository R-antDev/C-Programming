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
include CMakeFiles/class3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/class3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/class3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/class3.dir/flags.make

CMakeFiles/class3.dir/class3/class_3.c.obj: CMakeFiles/class3.dir/flags.make
CMakeFiles/class3.dir/class3/class_3.c.obj: C:/Ant-Dev/C-Programming/class3/class_3.c
CMakeFiles/class3.dir/class3/class_3.c.obj: CMakeFiles/class3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Ant-Dev\C-Programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/class3.dir/class3/class_3.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/class3.dir/class3/class_3.c.obj -MF CMakeFiles\class3.dir\class3\class_3.c.obj.d -o CMakeFiles\class3.dir\class3\class_3.c.obj -c C:\Ant-Dev\C-Programming\class3\class_3.c

CMakeFiles/class3.dir/class3/class_3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/class3.dir/class3/class_3.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Ant-Dev\C-Programming\class3\class_3.c > CMakeFiles\class3.dir\class3\class_3.c.i

CMakeFiles/class3.dir/class3/class_3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/class3.dir/class3/class_3.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Ant-Dev\C-Programming\class3\class_3.c -o CMakeFiles\class3.dir\class3\class_3.c.s

# Object files for target class3
class3_OBJECTS = \
"CMakeFiles/class3.dir/class3/class_3.c.obj"

# External object files for target class3
class3_EXTERNAL_OBJECTS =

class3.exe: CMakeFiles/class3.dir/class3/class_3.c.obj
class3.exe: CMakeFiles/class3.dir/build.make
class3.exe: CMakeFiles/class3.dir/linkLibs.rsp
class3.exe: CMakeFiles/class3.dir/objects1.rsp
class3.exe: CMakeFiles/class3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Ant-Dev\C-Programming\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable class3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\class3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/class3.dir/build: class3.exe
.PHONY : CMakeFiles/class3.dir/build

CMakeFiles/class3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\class3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/class3.dir/clean

CMakeFiles/class3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Ant-Dev\C-Programming C:\Ant-Dev\C-Programming C:\Ant-Dev\C-Programming\cmake-build-debug C:\Ant-Dev\C-Programming\cmake-build-debug C:\Ant-Dev\C-Programming\cmake-build-debug\CMakeFiles\class3.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/class3.dir/depend

