# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /root/research/NuSMV-2.6.0/NuSMV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/research/NuSMV-2.6.0/NuSMV/build

# Include any dependencies generated for this target.
include code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/depend.make

# Include the progress variables for this target.
include code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/progress.make

# Include the compile flags for this target's objects.
include code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/flags.make

code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o: code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/flags.make
code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o: ../code/nusmv/shell/mc/mcCmd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/research/NuSMV-2.6.0/NuSMV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o"
	cd /root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/mc && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o   -c /root/research/NuSMV-2.6.0/NuSMV/code/nusmv/shell/mc/mcCmd.c

code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.i"
	cd /root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/mc && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/research/NuSMV-2.6.0/NuSMV/code/nusmv/shell/mc/mcCmd.c > CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.i

code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.s"
	cd /root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/mc && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/research/NuSMV-2.6.0/NuSMV/code/nusmv/shell/mc/mcCmd.c -o CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.s

code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o.requires:

.PHONY : code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o.requires

code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o.provides: code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o.requires
	$(MAKE) -f code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/build.make code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o.provides.build
.PHONY : code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o.provides

code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o.provides.build: code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o


code_nusmv_shell_mc: code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o
code_nusmv_shell_mc: code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/build.make

.PHONY : code_nusmv_shell_mc

# Rule to build all files generated by this target.
code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/build: code_nusmv_shell_mc

.PHONY : code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/build

code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/requires: code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/mcCmd.c.o.requires

.PHONY : code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/requires

code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/clean:
	cd /root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/mc && $(CMAKE_COMMAND) -P CMakeFiles/code_nusmv_shell_mc.dir/cmake_clean.cmake
.PHONY : code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/clean

code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/depend:
	cd /root/research/NuSMV-2.6.0/NuSMV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/research/NuSMV-2.6.0/NuSMV /root/research/NuSMV-2.6.0/NuSMV/code/nusmv/shell/mc /root/research/NuSMV-2.6.0/NuSMV/build /root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/mc /root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : code/nusmv/shell/mc/CMakeFiles/code_nusmv_shell_mc.dir/depend

