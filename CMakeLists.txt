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

#target_link_libraries(${PROJECT_NAME}
#  ${rclcpp_LIBRARIES})

#install(TARGETS ${PROJECT_NAME}
#   DESTINATION lib/${PROJECT_NAME})

#install(DIRECTORY
#   yaml DESTINATION share/${PROJECT_NAME}/
#)
 
ament_package()

