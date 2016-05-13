#ifndef RRCT_TYPES_HPP
#define RRCT_TYPES_HPP

#include "rrct/JointAngles.hpp"

// This is a hack. We include it unconditionally as it may be required by some
// typekits *and* it is a standard header. Ideally, we would actually check if
// some of the types need std::vector.
#include <vector>
#include <boost/cstdint.hpp>
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::RRCT::JointAngles >;
extern template class RTT::internal::AssignableDataSource< ::RRCT::JointAngles >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::RRCT::JointAngles >;
extern template class RTT::internal::ConstantDataSource< ::RRCT::JointAngles >;
extern template class RTT::internal::ReferenceDataSource< ::RRCT::JointAngles >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::RRCT::JointAngles >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::RRCT::JointAngles >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::RRCT::JointAngles >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::RRCT::JointAngles >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::RRCT::JointAngles >;
#endif

namespace boost {
namespace serialization {
template<typename Archive>
void serialize(Archive& a, ::RRCT::JointAngles& j, unsigned int version) {
	using boost::serialization::make_nvp;
	a & make_nvp("data_rad", j.data_rad);
}
}
}

#endif

