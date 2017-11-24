#pragma once

#include <rst-rt/geometry/Translation.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::geometry::Translation >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::geometry::Translation >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::geometry::Translation >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::geometry::Translation >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::geometry::Translation >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::geometry::Translation >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::geometry::Translation >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::geometry::Translation >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::geometry::Translation >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::geometry::Translation >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::geometry::Translation& j, unsigned int version) {
    a & make_nvp("translation", j.translation);
    if (!j.frameId.empty()) {
        a & make_nvp("frameId", j.frameId);
    }
    a & make_nvp("x", j.translation(0));
    a & make_nvp("y", j.translation(1));
    a & make_nvp("z", j.translation(2));
}

}
}
