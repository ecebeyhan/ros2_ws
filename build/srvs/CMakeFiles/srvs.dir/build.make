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
CMAKE_SOURCE_DIR = /root/ros2_ws/src/srvs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/ros2_ws/build/srvs

# Utility rule file for srvs.

# Include any custom commands dependencies for this target.
include CMakeFiles/srvs.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/srvs.dir/progress.make

CMakeFiles/srvs: /root/ros2_ws/src/srvs/msg/SensorType.msg
CMakeFiles/srvs: /root/ros2_ws/src/srvs/msg/SensorStatus.msg
CMakeFiles/srvs: /root/ros2_ws/src/srvs/srv/GetSensorStatusList.srv
CMakeFiles/srvs: rosidl_cmake/srv/GetSensorStatusList_Request.msg
CMakeFiles/srvs: rosidl_cmake/srv/GetSensorStatusList_Response.msg

srvs: CMakeFiles/srvs
srvs: CMakeFiles/srvs.dir/build.make
.PHONY : srvs

# Rule to build all files generated by this target.
CMakeFiles/srvs.dir/build: srvs
.PHONY : CMakeFiles/srvs.dir/build

CMakeFiles/srvs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/srvs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/srvs.dir/clean

CMakeFiles/srvs.dir/depend:
	cd /root/ros2_ws/build/srvs && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/ros2_ws/src/srvs /root/ros2_ws/src/srvs /root/ros2_ws/build/srvs /root/ros2_ws/build/srvs /root/ros2_ws/build/srvs/CMakeFiles/srvs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/srvs.dir/depend

