#ifndef RRCT_TYPES_HPP
#define RRCT_TYPES_HPP

#include "rrct/kinematics/JointAngles.hpp"

// This is a hack. We include it unconditionally as it may be required by some
// typekits *and* it is a standard header. Ideally, we would actually check if
// some of the types need std::vector.
#include <vector>
#include <boost/cstdint.hpp>
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rrct::kinematics::JointAngles >;
extern template class RTT::internal::AssignableDataSource< ::rrct::kinematics::JointAngles >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rrct::kinematics::JointAngles >;
extern template class RTT::internal::ConstantDataSource< ::rrct::kinematics::JointAngles >;
extern template class RTT::internal::ReferenceDataSource< ::rrct::kinematics::JointAngles >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rrct::kinematics::JointAngles >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rrct::kinematics::JointAngles >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rrct::kinematics::JointAngles >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rrct::kinematics::JointAngles >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rrct::kinematics::JointAngles >;
#endif

namespace boost {
namespace serialization {
template<typename Archive>
void serialize(Archive& a, ::rrct::kinematics::JointAngles& j, unsigned int version) {
	using boost::serialization::make_nvp;
	a & make_nvp("angles", j.angles);
}
}
}

#endif

