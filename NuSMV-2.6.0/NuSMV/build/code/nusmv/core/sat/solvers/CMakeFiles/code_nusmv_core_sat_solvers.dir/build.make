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
include code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/depend.make

# Include the progress variables for this target.
include code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/progress.make

# Include the compile flags for this target's objects.
include code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/flags.make

code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o: code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/flags.make
code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o: ../code/nusmv/core/sat/solvers/SatMinisat.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/research/NuSMV-2.6.0/NuSMV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o"
	cd /root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/sat/solvers && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o   -c /root/research/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat/solvers/SatMinisat.c

code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.i"
	cd /root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/sat/solvers && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/research/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat/solvers/SatMinisat.c > CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.i

code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.s"
	cd /root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/sat/solvers && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/research/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat/solvers/SatMinisat.c -o CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.s

code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o.requires:

.PHONY : code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o.requires

code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o.provides: code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o.requires
	$(MAKE) -f code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/build.make code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o.provides.build
.PHONY : code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o.provides

code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o.provides.build: code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o


code_nusmv_core_sat_solvers: code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o
code_nusmv_core_sat_solvers: code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/build.make

.PHONY : code_nusmv_core_sat_solvers

# Rule to build all files generated by this target.
code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/build: code_nusmv_core_sat_solvers

.PHONY : code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/build

code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/requires: code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/SatMinisat.c.o.requires

.PHONY : code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/requires

code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/clean:
	cd /root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/sat/solvers && $(CMAKE_COMMAND) -P CMakeFiles/code_nusmv_core_sat_solvers.dir/cmake_clean.cmake
.PHONY : code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/clean

code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/depend:
	cd /root/research/NuSMV-2.6.0/NuSMV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/research/NuSMV-2.6.0/NuSMV /root/research/NuSMV-2.6.0/NuSMV/code/nusmv/core/sat/solvers /root/research/NuSMV-2.6.0/NuSMV/build /root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/sat/solvers /root/research/NuSMV-2.6.0/NuSMV/build/code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : code/nusmv/core/sat/solvers/CMakeFiles/code_nusmv_core_sat_solvers.dir/depend

