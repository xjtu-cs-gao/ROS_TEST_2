#include "vec_map_server_node.h"

VectorMapServerNode::VectorMapServerNode(ros::NodeHandle nh, ros::NodeHandle pnh) : nh(nh) {
    get_guided_curves_service =
      nh.advertiseService("get_guided_curves_service",
      &VectorMapServerNode::getGuidedCurvesCallback, this);
}