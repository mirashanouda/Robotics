execute_process(COMMAND "/home/mira/Robotics/turtlebot/build/Turtlebot_on_noetic/kobuki_desktop/kobuki_dashboard/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/mira/Robotics/turtlebot/build/Turtlebot_on_noetic/kobuki_desktop/kobuki_dashboard/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
