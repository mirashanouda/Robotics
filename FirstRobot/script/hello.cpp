#include <gazebo/gazebo.hh>

namespace gazebo {
    class WorldPluginFirstRobot : public WorldPlugin{
        public: WorldPluginFirstRobot() : WorldPlugin(){
            printf("Hello Gazebo!\n");
        }
        public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf){
        } 
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginFirstRobot)
} // namespace name
