#include <cstdlib>
#include <ros/ros.h>
#include <ros_test_1/GetGuidedCurves.h>

class VectorMapServerNode {
    private:
    ros::ServiceServer get_guided_curves_service;
    
    ros::NodeHandle nh;

    public:
    VectorMapServerNode(ros::NodeHandle nh, ros::NodeHandle pnh);

    bool getGuidedCurvesCallback(
    ros::ServiceEvent<ros_test_1::GetGuidedCurvesRequest, ros_test_1::GetGuidedCurvesResponse>& event);
};