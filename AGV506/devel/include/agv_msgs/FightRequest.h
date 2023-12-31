// Generated by gencpp from file agv_msgs/FightRequest.msg
// DO NOT EDIT!


#ifndef AGV_MSGS_MESSAGE_FIGHTREQUEST_H
#define AGV_MSGS_MESSAGE_FIGHTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace agv_msgs
{
template <class ContainerAllocator>
struct FightRequest_
{
  typedef FightRequest_<ContainerAllocator> Type;

  FightRequest_()
    : fight(0)  {
    }
  FightRequest_(const ContainerAllocator& _alloc)
    : fight(0)  {
  (void)_alloc;
    }



   typedef uint8_t _fight_type;
  _fight_type fight;





  typedef boost::shared_ptr< ::agv_msgs::FightRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::agv_msgs::FightRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FightRequest_

typedef ::agv_msgs::FightRequest_<std::allocator<void> > FightRequest;

typedef boost::shared_ptr< ::agv_msgs::FightRequest > FightRequestPtr;
typedef boost::shared_ptr< ::agv_msgs::FightRequest const> FightRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::agv_msgs::FightRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::agv_msgs::FightRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::agv_msgs::FightRequest_<ContainerAllocator1> & lhs, const ::agv_msgs::FightRequest_<ContainerAllocator2> & rhs)
{
  return lhs.fight == rhs.fight;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::agv_msgs::FightRequest_<ContainerAllocator1> & lhs, const ::agv_msgs::FightRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace agv_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::agv_msgs::FightRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::agv_msgs::FightRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::agv_msgs::FightRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::agv_msgs::FightRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::agv_msgs::FightRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::agv_msgs::FightRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::agv_msgs::FightRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ffaf942d6c86453a06551eea67504792";
  }

  static const char* value(const ::agv_msgs::FightRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xffaf942d6c86453aULL;
  static const uint64_t static_value2 = 0x06551eea67504792ULL;
};

template<class ContainerAllocator>
struct DataType< ::agv_msgs::FightRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "agv_msgs/FightRequest";
  }

  static const char* value(const ::agv_msgs::FightRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::agv_msgs::FightRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#request 第0位:上升 第1位:下降 暂停:00\n"
"uint8 fight\n"
;
  }

  static const char* value(const ::agv_msgs::FightRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::agv_msgs::FightRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fight);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FightRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::agv_msgs::FightRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::agv_msgs::FightRequest_<ContainerAllocator>& v)
  {
    s << indent << "fight: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fight);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AGV_MSGS_MESSAGE_FIGHTREQUEST_H
