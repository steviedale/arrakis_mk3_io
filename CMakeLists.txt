cmake_minimum_required(VERSION 3.5)

project(arrakis_mk3_io)

find_package(ament_cmake REQUIRED)

add_library(${PROJECT_NAME}
  src/f75111.c
  src/SMBus.c
)

target_include_directories(${PROJECT_NAME} PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:include>"
)

add_executable(testing
  src/test.cpp)
target_link_libraries(testing
  ${PROJECT_NAME})

ament_export_include_directories(include)

install(TARGETS 
  ${PROJECT_NAME}
  testing
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/${PROJECT_NAME}/
	DESTINATION include/${PROJECT_NAME}/
	FILES_MATCHING PATTERN "*.h*"
	PATTERN ".svn" EXCLUDE)
 
ament_package()

