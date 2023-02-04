// Generated by gencpp from file simple_arm/GoToPositionResponse.msg
// DO NOT EDIT!


#ifndef SIMPLE_ARM_MESSAGE_GOTOPOSITIONRESPONSE_H
#define SIMPLE_ARM_MESSAGE_GOTOPOSITIONRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace simple_arm
{
template <class ContainerAllocator>
struct GoToPositionResponse_
{
  typedef GoToPositionResponse_<ContainerAllocator> Type;

  GoToPositionResponse_()
    : msg_feedback()  {
    }
  GoToPositionResponse_(const ContainerAllocator& _alloc)
    : msg_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _msg_feedback_type;
  _msg_feedback_type msg_feedback;





  typedef boost::shared_ptr< ::simple_arm::GoToPositionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simple_arm::GoToPositionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GoToPositionResponse_

typedef ::simple_arm::GoToPositionResponse_<std::allocator<void> > GoToPositionResponse;

typedef boost::shared_ptr< ::simple_arm::GoToPositionResponse > GoToPositionResponsePtr;
typedef boost::shared_ptr< ::simple_arm::GoToPositionResponse const> GoToPositionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simple_arm::GoToPositionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::simple_arm::GoToPositionResponse_<ContainerAllocator1> & lhs, const ::simple_arm::GoToPositionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.msg_feedback == rhs.msg_feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::simple_arm::GoToPositionResponse_<ContainerAllocator1> & lhs, const ::simple_arm::GoToPositionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace simple_arm

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_arm::GoToPositionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simple_arm::GoToPositionResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_arm::GoToPositionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2897a4bc4d7ca330e430870cfdee7314";
  }

  static const char* value(const ::simple_arm::GoToPositionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2897a4bc4d7ca330ULL;
  static const uint64_t static_value2 = 0xe430870cfdee7314ULL;
};

template<class ContainerAllocator>
struct DataType< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simple_arm/GoToPositionResponse";
  }

  static const char* value(const ::simple_arm::GoToPositionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string msg_feedback\n"
;
  }

  static const char* value(const ::simple_arm::GoToPositionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.msg_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GoToPositionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simple_arm::GoToPositionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simple_arm::GoToPositionResponse_<ContainerAllocator>& v)
  {
    s << indent << "msg_feedback: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.msg_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMPLE_ARM_MESSAGE_GOTOPOSITIONRESPONSE_H
