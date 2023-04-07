#include "vec_map_server_node.h"

bool VectorMapServerNode::getGuidedCurvesCallback(
    ros::ServiceEvent<ros_test_1::GetGuidedCurvesRequest, ros_test_1::GetGuidedCurvesResponse>& event) {
    return true;
    
}