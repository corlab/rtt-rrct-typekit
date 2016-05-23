#pragma once

#include <rst-rt/kinematics/JointVelocities.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::kinematics::JointVelocities >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::kinematics::JointVelocities >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::kinematics::JointVelocities >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::kinematics::JointVelocities >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::kinematics::JointVelocities >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::kinematics::JointVelocities >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::kinematics::JointVelocities >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::kinematics::JointVelocities >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::kinematics::JointVelocities >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::kinematics::JointVelocities >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::kinematics::JointVelocities& j, unsigned int version) {
    a & make_nvp("velocities", j.velocities);
}

}
}
