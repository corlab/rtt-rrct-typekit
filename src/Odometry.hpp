#pragma once

#include <rst-rt/robot/Odometry.hpp>
#include <rst-rt/geometry/Pose.hpp>
#include <rst-rt/kinematics/Twist.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::robot::Odometry >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::robot::Odometry >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::robot::Odometry >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::robot::Odometry >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::robot::Odometry >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::robot::Odometry >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::robot::Odometry >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::robot::Odometry >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::robot::Odometry >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::robot::Odometry >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::robot::Odometry& j, unsigned int version) {
    a & make_nvp("pose",     j.pose);
    a & make_nvp("twist", j.twist);
}

}
}
