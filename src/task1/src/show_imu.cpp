#include "show_imu.h"

/*
 geometry_msgs/Quaternion orientation
  float64 x
  float64 y
  float64 z
  float64 w
 */ 


void chatterCallback(const sensor_msgs::Imu::ConstPtr& msg)
{
    ROS_INFO("geometry_msgs/Quaternion orientation");
    ROS_INFO("float64 x: %.21f",msg->orientation.x);
    ROS_INFO("float64 y: %.21f",msg->orientation.y);
    ROS_INFO("float64 z: %.21f",msg->orientation.z);
    ROS_INFO("float64 w: %.21f",msg->orientation.w);
    ROS_INFO("=_= 0v0 awa QAQ QwQ TAT pwq X_X HAH TwT");
}

int main(int argc,char** argv)
{
    ros::init(argc, argv, "show_imu");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("/imu/data_raw", 1000, chatterCallback);
    ros::spin();
    return 0;
}