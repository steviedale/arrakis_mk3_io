cmake_minimum_required(VERSION 3.5)

project(testing)

find_package(ament_cmake REQUIRED)
find_package(io_controller REQUIRED)

add_executable(${PROJECT_NAME}
  src/testing.cpp
)
target_link_libraries(${PROJECT_NAME}
  io_controller::io_controller
)
target_include_directories(${PROJECT_NAME} PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:include>"
)

ament_export_include_directories(include)

install(TARGETS 
  ${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/${PROJECT_NAME}/
	DESTINATION include/${PROJECT_NAME}/
)

ament_package()

