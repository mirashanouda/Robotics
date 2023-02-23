#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "ball_chaser/DriveToTarget.h" //service

using namespace ros;
using namespace std;
using namespace std_msgs;
// using namespace simple_arm::GoToPosition; //used to call the type request&responce

// Global joint publisher variables
Publisher move_pub;

bool handle_movement(
    ball_chaser::DriveToTarget::Request& req, 
    ball_chaser::DriveToTargetResponse& res){

    ROS_INFO("Request received - x:%f, z:%f", (float)req.lnr_x, (float)req.ang_z);

    // Publish clamped joint angles to the arm
    geometry_msgs::Twist move;
    move.linear.x = req.lnr_x;
    move.angular.z = req.ang_z;

    move_pub.publish(move);

    // Wait 3 seconds for arm to settle
    Duration(3).sleep();

    // Return a response message
    res.back_msg = "back msg: Linear X: " + to_string(req.lnr_x) + " , Angular Z: " + to_string(req.ang_z);
    ROS_INFO_STREAM(res.back_msg);

    return true;
}

int main(int argc, char** argv){
    
    init(argc, argv, "drive_bot");
    NodeHandle nh;

    // Publisher: advertise<message_type>("/topic_name", queue_size);
    move_pub = nh.advertise<geometry_msgs::Twist>("/cmd_vel/", 10);

    // safe_move service with a handle_safe_move_request callback function
    // Best practice is to name the service pecedding by the node name
    ServiceServer service = nh.advertiseService("/ball_chaser/robot_movement", handle_movement);

    ROS_INFO("Ready to control the robot");

    ros::spin();

    return 0;
}
