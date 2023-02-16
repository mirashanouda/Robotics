#include "ros/ros.h"
#include "ball_chaser/DriveToTarget.h"
#include <sensor_msgs/Image.h>

using namespace std;
using namespace ros;

ServiceClient client;

// This function calls the safe_move service to safely move the arm to the center position
void move(float x, float z)
{
    ROS_INFO_STREAM("Moving the arm to the center");

    // Request centered joint angles [1.57, 1.57]
    ball_chaser::DriveToTarget srv;
    srv.request.lnr_x = x;
    srv.request.ang_z = z;

    // Call the safe_move service and pass the requested joint angles
    if (!client.call(srv))
        ROS_ERROR("Failed to call service safe_move");
}

// This callback function continuously executes and reads the image data
void image_processing_callback(const sensor_msgs::Image img)
{

    bool ball_found = false;
    int third = img.height/3;

    // Loop through each pixel in the image and check if its equal to the first one
    for (int i = 0; i < img.height * img.step; i++) {
        if (img.data[i] == 255) {
            if (i <= third) move(1.0, -1.0);
            if (i > third && i <= third*2) move(1.0, 0.0);
            if (i > third*2) move(1.0, 1.0);
            break;
        }
    }
}

int main(int argc, char** argv)
{
    // Initialize the look_away node and create a handle to it
    init(argc, argv, "process_image");
    NodeHandle n;

    // Define a client service capable of requesting services from robot_movement
    client = n.serviceClient<ball_chaser::DriveToTarget>("/ball_chaser/robot_movement");

    // Subscribe to rgb_camera/image_raw topic to read the image data inside the image_processing_callback function
    Subscriber sub2 = n.subscribe("/camera/rgb/image_raw", 10, image_processing_callback);

    // Handle ROS communication events
    spin();

    return 0;
}