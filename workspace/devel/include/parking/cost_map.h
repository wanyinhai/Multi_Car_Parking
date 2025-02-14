// Generated by gencpp from file parking/cost_map.msg
// DO NOT EDIT!


#ifndef PARKING_MESSAGE_COST_MAP_H
#define PARKING_MESSAGE_COST_MAP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace parking
{
template <class ContainerAllocator>
struct cost_map_
{
  typedef cost_map_<ContainerAllocator> Type;

  cost_map_()
    : length(0)
    , width(0)
    , time(0)
    , data()  {
    }
  cost_map_(const ContainerAllocator& _alloc)
    : length(0)
    , width(0)
    , time(0)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _length_type;
  _length_type length;

   typedef int16_t _width_type;
  _width_type width;

   typedef int16_t _time_type;
  _time_type time;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::parking::cost_map_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::parking::cost_map_<ContainerAllocator> const> ConstPtr;

}; // struct cost_map_

typedef ::parking::cost_map_<std::allocator<void> > cost_map;

typedef boost::shared_ptr< ::parking::cost_map > cost_mapPtr;
typedef boost::shared_ptr< ::parking::cost_map const> cost_mapConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::parking::cost_map_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::parking::cost_map_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace parking

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'parking': ['/home/mpc/Multi_Car_Parking/workspace/src/parking/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::parking::cost_map_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::parking::cost_map_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::parking::cost_map_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::parking::cost_map_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::parking::cost_map_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::parking::cost_map_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::parking::cost_map_<ContainerAllocator> >
{
  static const char* value()
  {
    return "be54434a940ad22ca7ed96d2870a90a3";
  }

  static const char* value(const ::parking::cost_map_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbe54434a940ad22cULL;
  static const uint64_t static_value2 = 0xa7ed96d2870a90a3ULL;
};

template<class ContainerAllocator>
struct DataType< ::parking::cost_map_<ContainerAllocator> >
{
  static const char* value()
  {
    return "parking/cost_map";
  }

  static const char* value(const ::parking::cost_map_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::parking::cost_map_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The msg type for sending cost map information\n\
# length is the dimension on x-direction\n\
# width is the dimension on y-direction\n\
# time is the time stamp\n\
# data is the map dictionary transformed to 1-D vector\n\
\n\
int16     length\n\
int16     width\n\
int16     time\n\
float64[] data\n\
";
  }

  static const char* value(const ::parking::cost_map_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::parking::cost_map_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.length);
      stream.next(m.width);
      stream.next(m.time);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cost_map_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::parking::cost_map_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::parking::cost_map_<ContainerAllocator>& v)
  {
    s << indent << "length: ";
    Printer<int16_t>::stream(s, indent + "  ", v.length);
    s << indent << "width: ";
    Printer<int16_t>::stream(s, indent + "  ", v.width);
    s << indent << "time: ";
    Printer<int16_t>::stream(s, indent + "  ", v.time);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PARKING_MESSAGE_COST_MAP_H
