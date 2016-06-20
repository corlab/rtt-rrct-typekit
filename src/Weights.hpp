#pragma once

#include <rst-rt/robot/Weights.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::robot::Weights >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::robot::Weights >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::robot::Weights >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::robot::Weights >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::robot::Weights >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::robot::Weights >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::robot::Weights >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::robot::Weights >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::robot::Weights >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::robot::Weights >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::robot::Weights& j, unsigned int version) {
    a & make_nvp("weights",     j.weights);
}

}
}
