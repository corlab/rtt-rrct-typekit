#pragma once

#include <rst-rt/robot/JointState.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::robot::JointState >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::robot::JointState >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::robot::JointState >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::robot::JointState >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::robot::JointState >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::robot::JointState >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::robot::JointState >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::robot::JointState >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::robot::JointState >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::robot::JointState >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::robot::JointState& j, unsigned int version) {
    a & make_nvp("angles",     j.angles);
    a & make_nvp("velocities", j.velocities);
    a & make_nvp("torques",    j.torques);
}

}
}
