cmake_minimum_required(VERSION 3.5)

project(io_controller_ros)

find_package(ament_cmake REQUIRED)
find_package(io_controller REQUIRED)

#message(WARNING "START")
#message(WARNING "${io_controller_LIBRARIES}")
#message(WARNING "END")

add_executable(${PROJECT_NAME}_node
  src/io_controller_node.cpp
)
target_link_libraries(${PROJECT_NAME}_node
  #${io_controller_LIBRARIES} 
  /home/mini_4/arrakis_ws/install/io_controller/lib
)
target_include_directories(${PROJECT_NAME}_node PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:include>"
  ${io_controller_INCLUDE_DIRS} 
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

