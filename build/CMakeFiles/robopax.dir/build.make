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
CMAKE_SOURCE_DIR = /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build

# Include any dependencies generated for this target.
include CMakeFiles/robopax.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/robopax.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/robopax.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/robopax.dir/flags.make

CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.o: ../src/common/logger/ConsoleLogger.cpp
CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.o -MF CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.o.d -o CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/common/logger/ConsoleLogger.cpp

CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/common/logger/ConsoleLogger.cpp > CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.i

CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/common/logger/ConsoleLogger.cpp -o CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.s

CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.o: ../src/common/logger/Logger.cpp
CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.o -MF CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.o.d -o CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/common/logger/Logger.cpp

CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/common/logger/Logger.cpp > CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.i

CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/common/logger/Logger.cpp -o CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.s

CMakeFiles/robopax.dir/src/components/Component.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/components/Component.cpp.o: ../src/components/Component.cpp
CMakeFiles/robopax.dir/src/components/Component.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/robopax.dir/src/components/Component.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/components/Component.cpp.o -MF CMakeFiles/robopax.dir/src/components/Component.cpp.o.d -o CMakeFiles/robopax.dir/src/components/Component.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/components/Component.cpp

CMakeFiles/robopax.dir/src/components/Component.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/components/Component.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/components/Component.cpp > CMakeFiles/robopax.dir/src/components/Component.cpp.i

CMakeFiles/robopax.dir/src/components/Component.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/components/Component.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/components/Component.cpp -o CMakeFiles/robopax.dir/src/components/Component.cpp.s

CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.o: ../src/components/component_manager/ComponentManager.cpp
CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.o -MF CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.o.d -o CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/components/component_manager/ComponentManager.cpp

CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/components/component_manager/ComponentManager.cpp > CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.i

CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/components/component_manager/ComponentManager.cpp -o CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.s

CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.o: ../src/components/servos/ServoSim.cpp
CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.o -MF CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.o.d -o CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/components/servos/ServoSim.cpp

CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/components/servos/ServoSim.cpp > CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.i

CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/components/servos/ServoSim.cpp -o CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.s

CMakeFiles/robopax.dir/src/main.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/robopax.dir/src/main.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/robopax.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/main.cpp.o -MF CMakeFiles/robopax.dir/src/main.cpp.o.d -o CMakeFiles/robopax.dir/src/main.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/main.cpp

CMakeFiles/robopax.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/main.cpp > CMakeFiles/robopax.dir/src/main.cpp.i

CMakeFiles/robopax.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/main.cpp -o CMakeFiles/robopax.dir/src/main.cpp.s

CMakeFiles/robopax.dir/src/state_machine/State.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/state_machine/State.cpp.o: ../src/state_machine/State.cpp
CMakeFiles/robopax.dir/src/state_machine/State.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/robopax.dir/src/state_machine/State.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/state_machine/State.cpp.o -MF CMakeFiles/robopax.dir/src/state_machine/State.cpp.o.d -o CMakeFiles/robopax.dir/src/state_machine/State.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/State.cpp

CMakeFiles/robopax.dir/src/state_machine/State.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/state_machine/State.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/State.cpp > CMakeFiles/robopax.dir/src/state_machine/State.cpp.i

CMakeFiles/robopax.dir/src/state_machine/State.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/state_machine/State.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/State.cpp -o CMakeFiles/robopax.dir/src/state_machine/State.cpp.s

CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.o: ../src/state_machine/StateMachine.cpp
CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.o -MF CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.o.d -o CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/StateMachine.cpp

CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/StateMachine.cpp > CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.i

CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/StateMachine.cpp -o CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.s

CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.o: ../src/state_machine/StateUtils.cpp
CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.o -MF CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.o.d -o CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/StateUtils.cpp

CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/StateUtils.cpp > CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.i

CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/StateUtils.cpp -o CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.s

CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.o: ../src/state_machine/servos/AbortState.cpp
CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.o -MF CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.o.d -o CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/servos/AbortState.cpp

CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/servos/AbortState.cpp > CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.i

CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/servos/AbortState.cpp -o CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.s

CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.o: ../src/state_machine/servos/position_control/PositionControl.cpp
CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.o -MF CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.o.d -o CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/servos/position_control/PositionControl.cpp

CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/servos/position_control/PositionControl.cpp > CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.i

CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/servos/position_control/PositionControl.cpp -o CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.s

CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.o: ../src/state_machine/servos/servo_idle/ServoIdle.cpp
CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.o -MF CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.o.d -o CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/servos/servo_idle/ServoIdle.cpp

CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/servos/servo_idle/ServoIdle.cpp > CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.i

CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/servos/servo_idle/ServoIdle.cpp -o CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.s

CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.o: ../src/state_machine/step_sequencer/Step.cpp
CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.o -MF CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.o.d -o CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/step_sequencer/Step.cpp

CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/step_sequencer/Step.cpp > CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.i

CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/step_sequencer/Step.cpp -o CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.s

CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.o: CMakeFiles/robopax.dir/flags.make
CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.o: ../src/state_machine/step_sequencer/StepSequencer.cpp
CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.o: CMakeFiles/robopax.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.o -MF CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.o.d -o CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.o -c /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/step_sequencer/StepSequencer.cpp

CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/step_sequencer/StepSequencer.cpp > CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.i

CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/src/state_machine/step_sequencer/StepSequencer.cpp -o CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.s

# Object files for target robopax
robopax_OBJECTS = \
"CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.o" \
"CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.o" \
"CMakeFiles/robopax.dir/src/components/Component.cpp.o" \
"CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.o" \
"CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.o" \
"CMakeFiles/robopax.dir/src/main.cpp.o" \
"CMakeFiles/robopax.dir/src/state_machine/State.cpp.o" \
"CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.o" \
"CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.o" \
"CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.o" \
"CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.o" \
"CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.o" \
"CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.o" \
"CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.o"

# External object files for target robopax
robopax_EXTERNAL_OBJECTS =

robopax: CMakeFiles/robopax.dir/src/common/logger/ConsoleLogger.cpp.o
robopax: CMakeFiles/robopax.dir/src/common/logger/Logger.cpp.o
robopax: CMakeFiles/robopax.dir/src/components/Component.cpp.o
robopax: CMakeFiles/robopax.dir/src/components/component_manager/ComponentManager.cpp.o
robopax: CMakeFiles/robopax.dir/src/components/servos/ServoSim.cpp.o
robopax: CMakeFiles/robopax.dir/src/main.cpp.o
robopax: CMakeFiles/robopax.dir/src/state_machine/State.cpp.o
robopax: CMakeFiles/robopax.dir/src/state_machine/StateMachine.cpp.o
robopax: CMakeFiles/robopax.dir/src/state_machine/StateUtils.cpp.o
robopax: CMakeFiles/robopax.dir/src/state_machine/servos/AbortState.cpp.o
robopax: CMakeFiles/robopax.dir/src/state_machine/servos/position_control/PositionControl.cpp.o
robopax: CMakeFiles/robopax.dir/src/state_machine/servos/servo_idle/ServoIdle.cpp.o
robopax: CMakeFiles/robopax.dir/src/state_machine/step_sequencer/Step.cpp.o
robopax: CMakeFiles/robopax.dir/src/state_machine/step_sequencer/StepSequencer.cpp.o
robopax: CMakeFiles/robopax.dir/build.make
robopax: CMakeFiles/robopax.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable robopax"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/robopax.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/robopax.dir/build: robopax
.PHONY : CMakeFiles/robopax.dir/build

CMakeFiles/robopax.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/robopax.dir/cmake_clean.cmake
.PHONY : CMakeFiles/robopax.dir/clean

CMakeFiles/robopax.dir/depend:
	cd /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build /mnt/c/Users/dyzta/Documents/dtan/Projects/robopax/build/CMakeFiles/robopax.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/robopax.dir/depend

