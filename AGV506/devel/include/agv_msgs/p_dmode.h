// Generated by gencpp from file agv_msgs/p_dmode.msg
// DO NOT EDIT!


#ifndef AGV_MSGS_MESSAGE_P_DMODE_H
#define AGV_MSGS_MESSAGE_P_DMODE_H


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
struct p_dmode_
{
  typedef p_dmode_<ContainerAllocator> Type;

  p_dmode_()
    : mode(0)  {
    }
  p_dmode_(const ContainerAllocator& _alloc)
    : mode(0)  {
  (void)_alloc;
    }



   typedef uint8_t _mode_type;
  _mode_type mode;





  typedef boost::shared_ptr< ::agv_msgs::p_dmode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::agv_msgs::p_dmode_<ContainerAllocator> const> ConstPtr;

}; // struct p_dmode_

typedef ::agv_msgs::p_dmode_<std::allocator<void> > p_dmode;

typedef boost::shared_ptr< ::agv_msgs::p_dmode > p_dmodePtr;
typedef boost::shared_ptr< ::agv_msgs::p_dmode const> p_dmodeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::agv_msgs::p_dmode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::agv_msgs::p_dmode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::agv_msgs::p_dmode_<ContainerAllocator1> & lhs, const ::agv_msgs::p_dmode_<ContainerAllocator2> & rhs)
{
  return lhs.mode == rhs.mode;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::agv_msgs::p_dmode_<ContainerAllocator1> & lhs, const ::agv_msgs::p_dmode_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace agv_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::agv_msgs::p_dmode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::agv_msgs::p_dmode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::agv_msgs::p_dmode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::agv_msgs::p_dmode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::agv_msgs::p_dmode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::agv_msgs::p_dmode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::agv_msgs::p_dmode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "89b81386720be1cd0ce7a3953fcd1b19";
  }

  static const char* value(const ::agv_msgs::p_dmode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x89b81386720be1cdULL;
  static const uint64_t static_value2 = 0x0ce7a3953fcd1b19ULL;
};

template<class ContainerAllocator>
struct DataType< ::agv_msgs::p_dmode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "agv_msgs/p_dmode";
  }

  static const char* value(const ::agv_msgs::p_dmode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::agv_msgs::p_dmode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 mode # 驾驶方式\n"
;
  }

  static const char* value(const ::agv_msgs::p_dmode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::agv_msgs::p_dmode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct p_dmode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::agv_msgs::p_dmode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::agv_msgs::p_dmode_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AGV_MSGS_MESSAGE_P_DMODE_H
