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

# Utility rule file for srvs__py.

# Include any custom commands dependencies for this target.
include srvs__py/CMakeFiles/srvs__py.dir/compiler_depend.make

# Include the progress variables for this target.
include srvs__py/CMakeFiles/srvs__py.dir/progress.make

srvs__py/CMakeFiles/srvs__py: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c
srvs__py/CMakeFiles/srvs__py: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_introspection_c.c
srvs__py/CMakeFiles/srvs__py: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_c.c
srvs__py/CMakeFiles/srvs__py: rosidl_generator_py/srvs/msg/_sensor_type.py
srvs__py/CMakeFiles/srvs__py: rosidl_generator_py/srvs/msg/_sensor_status.py
srvs__py/CMakeFiles/srvs__py: rosidl_generator_py/srvs/srv/_get_sensor_status_list.py
srvs__py/CMakeFiles/srvs__py: rosidl_generator_py/srvs/msg/__init__.py
srvs__py/CMakeFiles/srvs__py: rosidl_generator_py/srvs/srv/__init__.py
srvs__py/CMakeFiles/srvs__py: rosidl_generator_py/srvs/msg/_sensor_type_s.c
srvs__py/CMakeFiles/srvs__py: rosidl_generator_py/srvs/msg/_sensor_status_s.c
srvs__py/CMakeFiles/srvs__py: rosidl_generator_py/srvs/srv/_get_sensor_status_list_s.c

rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/lib/rosidl_generator_py/rosidl_generator_py
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_generator_py/__init__.py
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/local/lib/python3.10/dist-packages/rosidl_generator_py/generate_py_impl.py
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_action_pkg_typesupport_entry_point.c.em
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_action.py.em
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_idl_support.c.em
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_idl.py.em
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_msg_pkg_typesupport_entry_point.c.em
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_msg_support.c.em
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_msg.py.em
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_srv_pkg_typesupport_entry_point.c.em
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: /opt/ros/humble/share/rosidl_generator_py/resource/_srv.py.em
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: rosidl_adapter/srvs/msg/SensorType.idl
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: rosidl_adapter/srvs/msg/SensorStatus.idl
rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c: rosidl_adapter/srvs/srv/GetSensorStatusList.idl
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/ros2_ws/build/srvs/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating Python code for ROS interfaces"
	cd /root/ros2_ws/build/srvs/srvs__py && /usr/bin/python3 /opt/ros/humble/share/rosidl_generator_py/cmake/../../../lib/rosidl_generator_py/rosidl_generator_py --generator-arguments-file /root/ros2_ws/build/srvs/rosidl_generator_py__arguments.json --typesupport-impls "rosidl_typesupport_fastrtps_c;rosidl_typesupport_introspection_c;rosidl_typesupport_c"

rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_introspection_c.c: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_introspection_c.c

rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_c.c: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_c.c

rosidl_generator_py/srvs/msg/_sensor_type.py: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/srvs/msg/_sensor_type.py

rosidl_generator_py/srvs/msg/_sensor_status.py: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/srvs/msg/_sensor_status.py

rosidl_generator_py/srvs/srv/_get_sensor_status_list.py: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/srvs/srv/_get_sensor_status_list.py

rosidl_generator_py/srvs/msg/__init__.py: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/srvs/msg/__init__.py

rosidl_generator_py/srvs/srv/__init__.py: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/srvs/srv/__init__.py

rosidl_generator_py/srvs/msg/_sensor_type_s.c: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/srvs/msg/_sensor_type_s.c

rosidl_generator_py/srvs/msg/_sensor_status_s.c: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/srvs/msg/_sensor_status_s.c

rosidl_generator_py/srvs/srv/_get_sensor_status_list_s.c: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c
	@$(CMAKE_COMMAND) -E touch_nocreate rosidl_generator_py/srvs/srv/_get_sensor_status_list_s.c

srvs__py: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_c.c
srvs__py: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_fastrtps_c.c
srvs__py: rosidl_generator_py/srvs/_srvs_s.ep.rosidl_typesupport_introspection_c.c
srvs__py: rosidl_generator_py/srvs/msg/__init__.py
srvs__py: rosidl_generator_py/srvs/msg/_sensor_status.py
srvs__py: rosidl_generator_py/srvs/msg/_sensor_status_s.c
srvs__py: rosidl_generator_py/srvs/msg/_sensor_type.py
srvs__py: rosidl_generator_py/srvs/msg/_sensor_type_s.c
srvs__py: rosidl_generator_py/srvs/srv/__init__.py
srvs__py: rosidl_generator_py/srvs/srv/_get_sensor_status_list.py
srvs__py: rosidl_generator_py/srvs/srv/_get_sensor_status_list_s.c
srvs__py: srvs__py/CMakeFiles/srvs__py
srvs__py: srvs__py/CMakeFiles/srvs__py.dir/build.make
.PHONY : srvs__py

# Rule to build all files generated by this target.
srvs__py/CMakeFiles/srvs__py.dir/build: srvs__py
.PHONY : srvs__py/CMakeFiles/srvs__py.dir/build

srvs__py/CMakeFiles/srvs__py.dir/clean:
	cd /root/ros2_ws/build/srvs/srvs__py && $(CMAKE_COMMAND) -P CMakeFiles/srvs__py.dir/cmake_clean.cmake
.PHONY : srvs__py/CMakeFiles/srvs__py.dir/clean

srvs__py/CMakeFiles/srvs__py.dir/depend:
	cd /root/ros2_ws/build/srvs && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/ros2_ws/src/srvs /root/ros2_ws/build/srvs/srvs__py /root/ros2_ws/build/srvs /root/ros2_ws/build/srvs/srvs__py /root/ros2_ws/build/srvs/srvs__py/CMakeFiles/srvs__py.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : srvs__py/CMakeFiles/srvs__py.dir/depend

