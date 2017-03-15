#pragma once

#include <rst-rt/geometry/Pose.hpp>
#include <rst-rt/geometry/Translation.hpp>
#include <rst-rt/geometry/Rotation.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::geometry::Pose >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::geometry::Pose >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::geometry::Pose >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::geometry::Pose >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::geometry::Pose >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::geometry::Pose >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::geometry::Pose >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::geometry::Pose >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::geometry::Pose >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::geometry::Pose >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::geometry::Pose& j, unsigned int version) {
    a & make_nvp("translation",     j.translation);
    a & make_nvp("rotation", j.rotation);
}

}
}
