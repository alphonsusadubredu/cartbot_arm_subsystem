// Generated by gencpp from file walk_distance_msg/Walk.msg
// DO NOT EDIT!


#ifndef WALK_DISTANCE_MSG_MESSAGE_WALK_H
#define WALK_DISTANCE_MSG_MESSAGE_WALK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace walk_distance_msg
{
template <class ContainerAllocator>
struct Walk_
{
  typedef Walk_<ContainerAllocator> Type;

  Walk_()
    : direction(0)
    , distance(0.0)  {
    }
  Walk_(const ContainerAllocator& _alloc)
    : direction(0)
    , distance(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _direction_type;
  _direction_type direction;

   typedef float _distance_type;
  _distance_type distance;





  typedef boost::shared_ptr< ::walk_distance_msg::Walk_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::walk_distance_msg::Walk_<ContainerAllocator> const> ConstPtr;

}; // struct Walk_

typedef ::walk_distance_msg::Walk_<std::allocator<void> > Walk;

typedef boost::shared_ptr< ::walk_distance_msg::Walk > WalkPtr;
typedef boost::shared_ptr< ::walk_distance_msg::Walk const> WalkConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::walk_distance_msg::Walk_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::walk_distance_msg::Walk_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace walk_distance_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'walk_distance_msg': ['/home/ubuntu/bill_ros/rascapp_robot/ros_ws/src/walk_distance_msg/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::walk_distance_msg::Walk_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::walk_distance_msg::Walk_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::walk_distance_msg::Walk_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::walk_distance_msg::Walk_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::walk_distance_msg::Walk_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::walk_distance_msg::Walk_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::walk_distance_msg::Walk_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fa939a7f5aefe801fd8d555219b82603";
  }

  static const char* value(const ::walk_distance_msg::Walk_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfa939a7f5aefe801ULL;
  static const uint64_t static_value2 = 0xfd8d555219b82603ULL;
};

template<class ContainerAllocator>
struct DataType< ::walk_distance_msg::Walk_<ContainerAllocator> >
{
  static const char* value()
  {
    return "walk_distance_msg/Walk";
  }

  static const char* value(const ::walk_distance_msg::Walk_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::walk_distance_msg::Walk_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 direction\n\
float32 distance\n\
";
  }

  static const char* value(const ::walk_distance_msg::Walk_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::walk_distance_msg::Walk_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.direction);
      stream.next(m.distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Walk_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::walk_distance_msg::Walk_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::walk_distance_msg::Walk_<ContainerAllocator>& v)
  {
    s << indent << "direction: ";
    Printer<int32_t>::stream(s, indent + "  ", v.direction);
    s << indent << "distance: ";
    Printer<float>::stream(s, indent + "  ", v.distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WALK_DISTANCE_MSG_MESSAGE_WALK_H
