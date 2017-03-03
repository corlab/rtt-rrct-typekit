#pragma once

#include <rst-rt/geometry/Rotation.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::geometry::Rotation >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::geometry::Rotation >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::geometry::Rotation >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::geometry::Rotation >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::geometry::Rotation >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::geometry::Rotation >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::geometry::Rotation >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::geometry::Rotation >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::geometry::Rotation >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::geometry::Rotation >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::geometry::Rotation& j, unsigned int version) {
    a & make_nvp("rotation", j.rotation);
    if (!j.frameId.empty()) {
        a & make_nvp("frameId", j.frameId);
    }
}

}
}
