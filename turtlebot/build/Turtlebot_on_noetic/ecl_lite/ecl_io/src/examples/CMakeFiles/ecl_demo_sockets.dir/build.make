# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/mira/Robotics/turtlebot/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mira/Robotics/turtlebot/build

# Include any dependencies generated for this target.
include Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/depend.make

# Include the progress variables for this target.
include Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/progress.make

# Include the compile flags for this target's objects.
include Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/flags.make

Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/sockets.cpp.o: Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/flags.make
Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/sockets.cpp.o: /home/mira/Robotics/turtlebot/src/Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/sockets.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mira/Robotics/turtlebot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/sockets.cpp.o"
	cd /home/mira/Robotics/turtlebot/build/Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ecl_demo_sockets.dir/sockets.cpp.o -c /home/mira/Robotics/turtlebot/src/Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/sockets.cpp

Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/sockets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ecl_demo_sockets.dir/sockets.cpp.i"
	cd /home/mira/Robotics/turtlebot/build/Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mira/Robotics/turtlebot/src/Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/sockets.cpp > CMakeFiles/ecl_demo_sockets.dir/sockets.cpp.i

Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/sockets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ecl_demo_sockets.dir/sockets.cpp.s"
	cd /home/mira/Robotics/turtlebot/build/Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mira/Robotics/turtlebot/src/Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/sockets.cpp -o CMakeFiles/ecl_demo_sockets.dir/sockets.cpp.s

# Object files for target ecl_demo_sockets
ecl_demo_sockets_OBJECTS = \
"CMakeFiles/ecl_demo_sockets.dir/sockets.cpp.o"

# External object files for target ecl_demo_sockets
ecl_demo_sockets_EXTERNAL_OBJECTS =

/home/mira/Robotics/turtlebot/devel/lib/ecl_io/ecl_demo_sockets: Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/sockets.cpp.o
/home/mira/Robotics/turtlebot/devel/lib/ecl_io/ecl_demo_sockets: Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/build.make
/home/mira/Robotics/turtlebot/devel/lib/ecl_io/ecl_demo_sockets: /home/mira/Robotics/turtlebot/devel/lib/libecl_io.so
/home/mira/Robotics/turtlebot/devel/lib/ecl_io/ecl_demo_sockets: /home/mira/Robotics/turtlebot/devel/lib/libecl_errors.so
/home/mira/Robotics/turtlebot/devel/lib/ecl_io/ecl_demo_sockets: Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mira/Robotics/turtlebot/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/mira/Robotics/turtlebot/devel/lib/ecl_io/ecl_demo_sockets"
	cd /home/mira/Robotics/turtlebot/build/Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ecl_demo_sockets.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/build: /home/mira/Robotics/turtlebot/devel/lib/ecl_io/ecl_demo_sockets

.PHONY : Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/build

Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/clean:
	cd /home/mira/Robotics/turtlebot/build/Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples && $(CMAKE_COMMAND) -P CMakeFiles/ecl_demo_sockets.dir/cmake_clean.cmake
.PHONY : Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/clean

Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/depend:
	cd /home/mira/Robotics/turtlebot/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mira/Robotics/turtlebot/src /home/mira/Robotics/turtlebot/src/Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples /home/mira/Robotics/turtlebot/build /home/mira/Robotics/turtlebot/build/Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples /home/mira/Robotics/turtlebot/build/Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Turtlebot_on_noetic/ecl_lite/ecl_io/src/examples/CMakeFiles/ecl_demo_sockets.dir/depend

