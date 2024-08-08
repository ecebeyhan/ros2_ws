cmake_minimum_required(VERSION 3.8)
project(get_sensor_status)

# Enforce C++11 or later
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(srvs REQUIRED)

# Include directories
include_directories(include)

# Add the executable for the client node
add_executable(get_sensor_status_client src/client.cpp)
ament_target_dependencies(get_sensor_status_client rclcpp srvs)

# Add the executable for the service node
add_executable(get_sensor_status_service src/service.cpp)
ament_target_dependencies(get_sensor_status_service rclcpp srvs)

# Install the executables
install(TARGETS
  get_sensor_status_client
  get_sensor_status_service
  DESTINATION lib/${PROJECT_NAME}
)


ament_package()
