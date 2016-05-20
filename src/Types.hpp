#pragma once

#include <rst-rt/kinematics/JointAngles.hpp>

// This is a hack. We include it unconditionally as it may be required by some
// typekits *and* it is a standard header. Ideally, we would actually check if
// some of the types need std::vector.
#include <vector>
#include <boost/cstdint.hpp>
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::kinematics::JointAngles >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::kinematics::JointAngles >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::kinematics::JointAngles >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::kinematics::JointAngles >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::kinematics::JointAngles >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::kinematics::JointAngles >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::kinematics::JointAngles >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::kinematics::JointAngles >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::kinematics::JointAngles >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::kinematics::JointAngles >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::kinematics::JointAngles& j, unsigned int version) {
    a & make_nvp("angles", j.angles);
}

}
}
