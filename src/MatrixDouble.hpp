#pragma once

#include <rst-rt/math/MatrixDouble.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::math::MatrixDouble >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::math::MatrixDouble >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::math::MatrixDouble >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::math::MatrixDouble >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::math::MatrixDouble >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::math::MatrixDouble >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::math::MatrixDouble >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::math::MatrixDouble >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::math::MatrixDouble >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::math::MatrixDouble >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::math::MatrixDouble& j, unsigned int version) {
    a & make_nvp("matrix", j.matrix);
}

}
}
