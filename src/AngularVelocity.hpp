#pragma once

#include <rst-rt/geometry/AngularVelocity.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::geometry::AngularVelocity >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::geometry::AngularVelocity >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::geometry::AngularVelocity >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::geometry::AngularVelocity >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::geometry::AngularVelocity >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::geometry::AngularVelocity >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::geometry::AngularVelocity >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::geometry::AngularVelocity >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::geometry::AngularVelocity >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::geometry::AngularVelocity >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::geometry::AngularVelocity& j,
		unsigned int version) {
	a & make_nvp("angularVelocity", j.angularVelocity);
}

}
}
