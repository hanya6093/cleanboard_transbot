// Generated by gencpp from file agv_msgs/Arm.msg
// DO NOT EDIT!


#ifndef AGV_MSGS_MESSAGE_ARM_H
#define AGV_MSGS_MESSAGE_ARM_H

#include <ros/service_traits.h>


#include <agv_msgs/ArmRequest.h>
#include <agv_msgs/ArmResponse.h>


namespace agv_msgs
{

struct Arm
{

typedef ArmRequest Request;
typedef ArmResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Arm
} // namespace agv_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::agv_msgs::Arm > {
  static const char* value()
  {
    return "dd0555f68f747c630a22ca214d8ef45c";
  }

  static const char* value(const ::agv_msgs::Arm&) { return value(); }
};

template<>
struct DataType< ::agv_msgs::Arm > {
  static const char* value()
  {
    return "agv_msgs/Arm";
  }

  static const char* value(const ::agv_msgs::Arm&) { return value(); }
};


// service_traits::MD5Sum< ::agv_msgs::ArmRequest> should match
// service_traits::MD5Sum< ::agv_msgs::Arm >
template<>
struct MD5Sum< ::agv_msgs::ArmRequest>
{
  static const char* value()
  {
    return MD5Sum< ::agv_msgs::Arm >::value();
  }
  static const char* value(const ::agv_msgs::ArmRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::agv_msgs::ArmRequest> should match
// service_traits::DataType< ::agv_msgs::Arm >
template<>
struct DataType< ::agv_msgs::ArmRequest>
{
  static const char* value()
  {
    return DataType< ::agv_msgs::Arm >::value();
  }
  static const char* value(const ::agv_msgs::ArmRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::agv_msgs::ArmResponse> should match
// service_traits::MD5Sum< ::agv_msgs::Arm >
template<>
struct MD5Sum< ::agv_msgs::ArmResponse>
{
  static const char* value()
  {
    return MD5Sum< ::agv_msgs::Arm >::value();
  }
  static const char* value(const ::agv_msgs::ArmResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::agv_msgs::ArmResponse> should match
// service_traits::DataType< ::agv_msgs::Arm >
template<>
struct DataType< ::agv_msgs::ArmResponse>
{
  static const char* value()
  {
    return DataType< ::agv_msgs::Arm >::value();
  }
  static const char* value(const ::agv_msgs::ArmResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // AGV_MSGS_MESSAGE_ARM_H
