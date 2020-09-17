cmake_minimum_required(VERSION 3.5)

project(io_controller_ros)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(io_controller_msgs REQUIRED)
find_package(io_controller REQUIRED)

add_executable(${PROJECT_NAME}_node
  src/io_controller_server.cpp
)
target_link_libraries(${PROJECT_NAME}_node
  ${rclcpp_LIBRARIES}
  ${io_controller_msgs_LIBRARIES}
  io_controller::io_controller
)
target_include_directories(${PROJECT_NAME}_node PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:include>"
  ${rclcpp_INCLUDE_DIRS}
  ${io_controller_msgs_INCLUDE_DIRS}
)

ament_export_include_directories(include)

install(TARGETS 
  ${PROJECT_NAME}_node
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/${PROJECT_NAME}/
	DESTINATION include/${PROJECT_NAME}/
	FILES_MATCHING PATTERN "*.h*"
	PATTERN ".svn" EXCLUDE
)

ament_package()

