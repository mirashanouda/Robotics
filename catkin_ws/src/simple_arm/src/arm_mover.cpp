#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include "simple_arm/GoToPosition.h" //service

using namespace ros;
using namespace std;
using namespace std_msgs;
// using namespace simple_arm::GoToPosition; //used to call the type request&responce

// Global joint publisher variables
Publisher joint1_pub, joint2_pub;

// This function checks and clamps the joint angles to a safe zone
vector<float> clamp_at_boundaries(float requested_j1, float requested_j2)
{
    // Define clamped joint angles and assign them to the requested ones
    float clamped_j1 = requested_j1;
    float clamped_j2 = requested_j2;

    // Get min and max joint parameters, and assigning them to their respective variables
    float min_j1, max_j1, min_j2, max_j2;
    // Assign a new node handle since we have no access to the main one
    NodeHandle n2;
    // Get node name
    string node_name = this_node::getName();
    // Get joints min and max parameters
    n2.getParam(node_name + "/min_joint_1_angle", min_j1);
    n2.getParam(node_name + "/max_joint_1_angle", max_j1);
    n2.getParam(node_name + "/min_joint_2_angle", min_j2);
    n2.getParam(node_name + "/max_joint_2_angle", max_j2);

    // Check if joint 1 falls in the safe zone, otherwise clamp it
    if (requested_j1 < min_j1 || requested_j1 > max_j1) {
        clamped_j1 = min(max(requested_j1, min_j1), max_j1);
        ROS_WARN("j1 is out of bounds, valid range (%1.2f,%1.2f), clamping to: %1.2f", min_j1, max_j1, clamped_j1);
    }
    // Check if joint 2 falls in the safe zone, otherwise clamp it
    if (requested_j2 < min_j2 || requested_j2 > max_j2) {
        clamped_j2 = min(max(requested_j2, min_j2), max_j2);
        ROS_WARN("j2 is out of bounds, valid range (%1.2f,%1.2f), clamping to: %1.2f", min_j2, max_j2, clamped_j2);
    }

    // Store clamped joint angles in a clamped_data vector
    return { clamped_j1, clamped_j2 };
}

bool handle_safe_move_request(
    simple_arm::GoToPosition::Request& req, 
    simple_arm::GoToPosition::Response& res){

    ROS_INFO("GoToPositionRequest received - j1:%1.2f, j2:%1.2f", (float)req.joint_1, (float)req.joint_2);

    // Check if requested joint angles are in the safe zone, otherwise clamp them
    vector<float> joints_angles = clamp_at_boundaries(req.joint_1, req.joint_2);

    // Publish clamped joint angles to the arm
    Float64 joint1_angle, joint2_angle;

    joint1_angle.data = joints_angles[0];
    joint2_angle.data = joints_angles[1];

    joint1_pub.publish(joint1_angle);
    joint2_pub.publish(joint2_angle);

    // Wait 3 seconds for arm to settle
    Duration(3).sleep();

    // Return a response message
    res.msg_feedback = "Joint angles set - j1: " + to_string(joints_angles[0]) + " , j2: " + to_string(joints_angles[1]);
    ROS_INFO_STREAM(res.msg_feedback);

    return true;
}

int main(int argc, char** argv){
    
    init(argc, argv, "arm_mover");
    NodeHandle nh;

    // Publisher: advertise<message_type>("/topic_name", queue_size);
    joint1_pub = nh.advertise<Float64>("/simple_arm/joint_1_position_controller/command", 10);
    joint2_pub = nh.advertise<Float64>("/simple_arm/joint_2_position_controller/command", 10);

    // safe_move service with a handle_safe_move_request callback function
    // Best practice is to name the surive recedding by the node name
    ServiceServer service = nh.advertiseService("/arm_mover/safe_move", handle_safe_move_request);

    ROS_INFO("Ready to send joint commands");

    ros::spin();

    return 0;
}