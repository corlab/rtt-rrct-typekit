#pragma once

#include <rst-rt/robot/IMU.hpp>
#include <rst-rt/geometry/LinearAcceleration.hpp>
#include <rst-rt/geometry/AngularVelocity.hpp>
#include <rst-rt/geometry/Rotation.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::robot::IMU >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::robot::IMU >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::robot::IMU >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::robot::IMU >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::robot::IMU >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::robot::IMU >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::robot::IMU >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::robot::IMU >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::robot::IMU >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::robot::IMU >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::robot::IMU& j, unsigned int version) {
    a & make_nvp("linearAcceleration",     j.linearAcceleration);
    a & make_nvp("angularVelocity", j.angularVelocity);
    a & make_nvp("rotation",    j.rotation);
}

}
}
