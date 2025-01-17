// Generated by gencpp from file marvelmind_nav/hedge_pos.msg
// DO NOT EDIT!


#ifndef MARVELMIND_NAV_MESSAGE_HEDGE_POS_H
#define MARVELMIND_NAV_MESSAGE_HEDGE_POS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace marvelmind_nav
{
template <class ContainerAllocator>
struct hedge_pos_
{
  typedef hedge_pos_<ContainerAllocator> Type;

  hedge_pos_()
    : timestamp_ms(0)
    , x_m(0.0)
    , y_m(0.0)
    , z_m(0.0)
    , flags(0)  {
    }
  hedge_pos_(const ContainerAllocator& _alloc)
    : timestamp_ms(0)
    , x_m(0.0)
    , y_m(0.0)
    , z_m(0.0)
    , flags(0)  {
  (void)_alloc;
    }



   typedef int64_t _timestamp_ms_type;
  _timestamp_ms_type timestamp_ms;

   typedef double _x_m_type;
  _x_m_type x_m;

   typedef double _y_m_type;
  _y_m_type y_m;

   typedef double _z_m_type;
  _z_m_type z_m;

   typedef uint8_t _flags_type;
  _flags_type flags;





  typedef boost::shared_ptr< ::marvelmind_nav::hedge_pos_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::marvelmind_nav::hedge_pos_<ContainerAllocator> const> ConstPtr;

}; // struct hedge_pos_

typedef ::marvelmind_nav::hedge_pos_<std::allocator<void> > hedge_pos;

typedef boost::shared_ptr< ::marvelmind_nav::hedge_pos > hedge_posPtr;
typedef boost::shared_ptr< ::marvelmind_nav::hedge_pos const> hedge_posConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::marvelmind_nav::hedge_pos_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::marvelmind_nav::hedge_pos_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace marvelmind_nav

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'marvelmind_nav': ['/home/bill/bill_ros/ros_ws/src/marvelmind_nav/marvelmind_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::marvelmind_nav::hedge_pos_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::marvelmind_nav::hedge_pos_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marvelmind_nav::hedge_pos_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::marvelmind_nav::hedge_pos_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marvelmind_nav::hedge_pos_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::marvelmind_nav::hedge_pos_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::marvelmind_nav::hedge_pos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5d7dc3e9efe3ead353f74615346c8145";
  }

  static const char* value(const ::marvelmind_nav::hedge_pos_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5d7dc3e9efe3ead3ULL;
  static const uint64_t static_value2 = 0x53f74615346c8145ULL;
};

template<class ContainerAllocator>
struct DataType< ::marvelmind_nav::hedge_pos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "marvelmind_nav/hedge_pos";
  }

  static const char* value(const ::marvelmind_nav::hedge_pos_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::marvelmind_nav::hedge_pos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 timestamp_ms\n\
float64 x_m\n\
float64 y_m\n\
float64 z_m\n\
uint8 flags\n\
";
  }

  static const char* value(const ::marvelmind_nav::hedge_pos_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::marvelmind_nav::hedge_pos_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp_ms);
      stream.next(m.x_m);
      stream.next(m.y_m);
      stream.next(m.z_m);
      stream.next(m.flags);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct hedge_pos_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::marvelmind_nav::hedge_pos_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::marvelmind_nav::hedge_pos_<ContainerAllocator>& v)
  {
    s << indent << "timestamp_ms: ";
    Printer<int64_t>::stream(s, indent + "  ", v.timestamp_ms);
    s << indent << "x_m: ";
    Printer<double>::stream(s, indent + "  ", v.x_m);
    s << indent << "y_m: ";
    Printer<double>::stream(s, indent + "  ", v.y_m);
    s << indent << "z_m: ";
    Printer<double>::stream(s, indent + "  ", v.z_m);
    s << indent << "flags: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flags);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MARVELMIND_NAV_MESSAGE_HEDGE_POS_H
