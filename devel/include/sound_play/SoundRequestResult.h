// Generated by gencpp from file sound_play/SoundRequestResult.msg
// DO NOT EDIT!


#ifndef SOUND_PLAY_MESSAGE_SOUNDREQUESTRESULT_H
#define SOUND_PLAY_MESSAGE_SOUNDREQUESTRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sound_play
{
template <class ContainerAllocator>
struct SoundRequestResult_
{
  typedef SoundRequestResult_<ContainerAllocator> Type;

  SoundRequestResult_()
    : playing(false)
    , stamp()  {
    }
  SoundRequestResult_(const ContainerAllocator& _alloc)
    : playing(false)
    , stamp()  {
  (void)_alloc;
    }



   typedef uint8_t _playing_type;
  _playing_type playing;

   typedef ros::Time _stamp_type;
  _stamp_type stamp;





  typedef boost::shared_ptr< ::sound_play::SoundRequestResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sound_play::SoundRequestResult_<ContainerAllocator> const> ConstPtr;

}; // struct SoundRequestResult_

typedef ::sound_play::SoundRequestResult_<std::allocator<void> > SoundRequestResult;

typedef boost::shared_ptr< ::sound_play::SoundRequestResult > SoundRequestResultPtr;
typedef boost::shared_ptr< ::sound_play::SoundRequestResult const> SoundRequestResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sound_play::SoundRequestResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sound_play::SoundRequestResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sound_play::SoundRequestResult_<ContainerAllocator1> & lhs, const ::sound_play::SoundRequestResult_<ContainerAllocator2> & rhs)
{
  return lhs.playing == rhs.playing &&
    lhs.stamp == rhs.stamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sound_play::SoundRequestResult_<ContainerAllocator1> & lhs, const ::sound_play::SoundRequestResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sound_play

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sound_play::SoundRequestResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sound_play::SoundRequestResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sound_play::SoundRequestResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sound_play::SoundRequestResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sound_play::SoundRequestResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sound_play::SoundRequestResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sound_play::SoundRequestResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "237faa3e32b21b083f32acf5260255a4";
  }

  static const char* value(const ::sound_play::SoundRequestResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x237faa3e32b21b08ULL;
  static const uint64_t static_value2 = 0x3f32acf5260255a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::sound_play::SoundRequestResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sound_play/SoundRequestResult";
  }

  static const char* value(const ::sound_play::SoundRequestResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sound_play::SoundRequestResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"bool playing\n"
"time stamp\n"
;
  }

  static const char* value(const ::sound_play::SoundRequestResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sound_play::SoundRequestResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.playing);
      stream.next(m.stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SoundRequestResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sound_play::SoundRequestResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sound_play::SoundRequestResult_<ContainerAllocator>& v)
  {
    s << indent << "playing: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.playing);
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SOUND_PLAY_MESSAGE_SOUNDREQUESTRESULT_H