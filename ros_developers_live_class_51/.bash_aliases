cd
export DISPLAY=:1
export LC_ALL=C
export PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '
export LD_LIBRARY_PATH=/usr/local/cuda-10.2/lib64:/home/user/.catkin_ws_python3/src/TensorRT-7.0.0.11/lib:${LD_LIBRARY_PATH}

alias rosenv='export | grep ROS'
alias public_ip="curl -s checkip.dyndns.org | sed -e 's/.*Current IP Address: //' -e 's/<.*$//'"
alias instance_id="curl -s http://169.254.169.254/latest/meta-data/instance-id"
alias rosbridge_address='echo "wss://$(instance_id).robotigniteacademy.com/rosbridge/"'
alias webpage_address='echo "https://$(instance_id).robotigniteacademy.com/webpage/"'
alias webvideo_address='echo "https://$(instance_id).robotigniteacademy.com/cameras/"'

# Source workspaces
source /usr/share/gazebo/setup.sh
source /opt/ros/latest/setup.bash
source /home/simulations/public_sim_ws/devel/setup.bash;
source ~/simulation_ws/devel/setup.bash &> /dev/null
source ~/catkin_ws/devel/setup.bash &> /dev/null;

# Alberto asked path below on Jun, 5, 2020.
export PYTHONPATH=/home/simulations/public_sim_ws/devel/lib/python2.7/dist-packages:/opt/ros/kinetic/lib/python2.7/dist-packages:/home/simulations/public_sim_ws/src/all/ros_basics_examples/python_course_class:/home/simulations/public_sim_ws/src/all/kinematics_course_utils/kinematics

# Configure ROS environment
export ROS_MASTER_URI=http://master:11311

(rospack profile &> /dev/null &)
cd
