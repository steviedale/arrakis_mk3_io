cmake_minimum_required(VERSION 3.5)

project(io_controller)

find_package(ament_cmake REQUIRED)

add_library(${PROJECT_NAME}
  src/io_controller.cpp
  src/f75111.c
  src/SMBus.c
)
target_include_directories(${PROJECT_NAME} PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:include>"
)

ament_export_include_directories(include)

message(WARNING "START")
message(WARNING "${CMAKE_INSTALL_PREFIX}")
message(WARNING "END")

install(TARGETS 
  ${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/${PROJECT_NAME}/
	DESTINATION include/${PROJECT_NAME}/
	FILES_MATCHING PATTERN "*.h*"
	PATTERN ".svn" EXCLUDE
)
 
ament_package()