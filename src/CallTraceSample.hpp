#pragma once

#include <rst-rt/monitoring/CallTraceSample.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#include <cstdint>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::monitoring::CallTraceSample >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::monitoring::CallTraceSample >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::monitoring::CallTraceSample >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::monitoring::CallTraceSample >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::monitoring::CallTraceSample >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::monitoring::CallTraceSample >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::monitoring::CallTraceSample >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::monitoring::CallTraceSample >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::monitoring::CallTraceSample >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::monitoring::CallTraceSample >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::monitoring::CallTraceSample& j, unsigned int version) {
    a & make_nvp("call_name", j.call_name);
    a & make_nvp("container_name", j.container_name);
    a & make_nvp("call_time", j.call_time);
    a & make_nvp("call_type", j.call_type);
}

}
}
