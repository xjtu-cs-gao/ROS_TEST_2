#include "vec_map_server_node.h"
#include <ros/ros.h>
#include <std_msgs/Empty.h>

int main(int argc, char* argv[]) {
  ros::init(argc, argv, "vec_map_cpp_server");
  ROS_INFO("vec_map_cpp_server init");
  ros::NodeHandle nh;
  ros::NodeHandle pnh("~");

  VectorMapServerNode node(nh, pnh);
  ros::spin();
}
