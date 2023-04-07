cmake_minimum_required(VERSION 2.8.3)
project(ros_test_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Werror")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  ros_test_1
)
find_package(Eigen3 REQUIRED)

catkin_package(
  CATKIN_DEPENDS
  roscpp
  std_msgs
  ros_test_1
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(vec_map_server_node
  src/get_guided_curves_callback.cpp
  src/vec_map_server_init.cpp
  src/vec_map_server_node.cpp
)
add_dependencies(vec_map_server_node ${catkin_EXPORTED_TARGETS})

target_link_libraries(vec_map_server_node
  ${catkin_LIBRARIES}
)

install(TARGETS vec_map_server_node
        RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})