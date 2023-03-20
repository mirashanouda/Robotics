// Generated by gencpp from file yocs_msgs/Column.msg
// DO NOT EDIT!


#ifndef YOCS_MSGS_MESSAGE_COLUMN_H
#define YOCS_MSGS_MESSAGE_COLUMN_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseWithCovarianceStamped.h>

namespace yocs_msgs
{
template <class ContainerAllocator>
struct Column_
{
  typedef Column_<ContainerAllocator> Type;

  Column_()
    : name()
    , radius(0.0)
    , height(0.0)
    , pose()  {
    }
  Column_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , radius(0.0)
    , height(0.0)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef float _radius_type;
  _radius_type radius;

   typedef float _height_type;
  _height_type height;

   typedef  ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::yocs_msgs::Column_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yocs_msgs::Column_<ContainerAllocator> const> ConstPtr;

}; // struct Column_

typedef ::yocs_msgs::Column_<std::allocator<void> > Column;

typedef boost::shared_ptr< ::yocs_msgs::Column > ColumnPtr;
typedef boost::shared_ptr< ::yocs_msgs::Column const> ColumnConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yocs_msgs::Column_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yocs_msgs::Column_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::yocs_msgs::Column_<ContainerAllocator1> & lhs, const ::yocs_msgs::Column_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.radius == rhs.radius &&
    lhs.height == rhs.height &&
    lhs.pose == rhs.pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::yocs_msgs::Column_<ContainerAllocator1> & lhs, const ::yocs_msgs::Column_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace yocs_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::yocs_msgs::Column_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yocs_msgs::Column_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yocs_msgs::Column_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yocs_msgs::Column_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yocs_msgs::Column_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yocs_msgs::Column_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yocs_msgs::Column_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8e1bb2c627c92d4c6f6075fe37858727";
  }

  static const char* value(const ::yocs_msgs::Column_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8e1bb2c627c92d4cULL;
  static const uint64_t static_value2 = 0x6f6075fe37858727ULL;
};

template<class ContainerAllocator>
struct DataType< ::yocs_msgs::Column_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yocs_msgs/Column";
  }

  static const char* value(const ::yocs_msgs::Column_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yocs_msgs::Column_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Virtual column obstacle; a cylinder vertically aligned\n"
"#  - Orientation is ignored\n"
"#  - Z provides the lower border of the column (normally 0)\n"
"\n"
"string  name\n"
"float32 radius\n"
"float32 height\n"
"geometry_msgs/PoseWithCovarianceStamped pose\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovarianceStamped\n"
"# This expresses an estimated pose with a reference coordinate frame and timestamp\n"
"\n"
"Header header\n"
"PoseWithCovariance pose\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovariance\n"
"# This represents a pose in free space with uncertainty.\n"
"\n"
"Pose pose\n"
"\n"
"# Row-major representation of the 6x6 covariance matrix\n"
"# The orientation parameters use a fixed-axis representation.\n"
"# In order, the parameters are:\n"
"# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
"float64[36] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::yocs_msgs::Column_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yocs_msgs::Column_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.radius);
      stream.next(m.height);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Column_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yocs_msgs::Column_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yocs_msgs::Column_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "radius: ";
    Printer<float>::stream(s, indent + "  ", v.radius);
    s << indent << "height: ";
    Printer<float>::stream(s, indent + "  ", v.height);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovarianceStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YOCS_MSGS_MESSAGE_COLUMN_H