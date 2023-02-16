// Generated by gencpp from file ball_chaser/DriveToTarget.msg
// DO NOT EDIT!


#ifndef BALL_CHASER_MESSAGE_DRIVETOTARGET_H
#define BALL_CHASER_MESSAGE_DRIVETOTARGET_H

#include <ros/service_traits.h>


#include <ball_chaser/DriveToTargetRequest.h>
#include <ball_chaser/DriveToTargetResponse.h>


namespace ball_chaser
{

struct DriveToTarget
{

typedef DriveToTargetRequest Request;
typedef DriveToTargetResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DriveToTarget
} // namespace ball_chaser


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ball_chaser::DriveToTarget > {
  static const char* value()
  {
    return "97b31afcab8f9fd25010f502598a5e47";
  }

  static const char* value(const ::ball_chaser::DriveToTarget&) { return value(); }
};

template<>
struct DataType< ::ball_chaser::DriveToTarget > {
  static const char* value()
  {
    return "ball_chaser/DriveToTarget";
  }

  static const char* value(const ::ball_chaser::DriveToTarget&) { return value(); }
};


// service_traits::MD5Sum< ::ball_chaser::DriveToTargetRequest> should match
// service_traits::MD5Sum< ::ball_chaser::DriveToTarget >
template<>
struct MD5Sum< ::ball_chaser::DriveToTargetRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ball_chaser::DriveToTarget >::value();
  }
  static const char* value(const ::ball_chaser::DriveToTargetRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ball_chaser::DriveToTargetRequest> should match
// service_traits::DataType< ::ball_chaser::DriveToTarget >
template<>
struct DataType< ::ball_chaser::DriveToTargetRequest>
{
  static const char* value()
  {
    return DataType< ::ball_chaser::DriveToTarget >::value();
  }
  static const char* value(const ::ball_chaser::DriveToTargetRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ball_chaser::DriveToTargetResponse> should match
// service_traits::MD5Sum< ::ball_chaser::DriveToTarget >
template<>
struct MD5Sum< ::ball_chaser::DriveToTargetResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ball_chaser::DriveToTarget >::value();
  }
  static const char* value(const ::ball_chaser::DriveToTargetResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ball_chaser::DriveToTargetResponse> should match
// service_traits::DataType< ::ball_chaser::DriveToTarget >
template<>
struct DataType< ::ball_chaser::DriveToTargetResponse>
{
  static const char* value()
  {
    return DataType< ::ball_chaser::DriveToTarget >::value();
  }
  static const char* value(const ::ball_chaser::DriveToTargetResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BALL_CHASER_MESSAGE_DRIVETOTARGET_H
