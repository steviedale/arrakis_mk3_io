cmake_minimum_required(VERSION 3.5)

project(io_controller VERSION 0.1.0 LANGUAGES CXX C)

include(cmake/io_controller_macros.cmake)

find_package(ament_cmake REQUIRED)

add_library(${PROJECT_NAME} SHARED
  src/io_controller.cpp
  src/f75111.c
  src/SMBus.c
)
target_include_directories(${PROJECT_NAME} PUBLIC
  "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
  "$<INSTALL_INTERFACE:include>"
)

ament_export_include_directories(include)

configure_package(NAMESPACE ${PROJECT_NAME}
    TARGETS ${PROJECT_NAME})

#install(TARGETS
#  ${PROJECT_NAME}
#  ARCHIVE DESTINATION lib
#  LIBRARY DESTINATION lib/${PROJECT_NAME}/
#  RUNTIME DESTINATION lib/${PROJECT_NAME}/
#)

install(DIRECTORY include/${PROJECT_NAME}/
        DESTINATION include/${PROJECT_NAME}/
)
 
ament_package()
