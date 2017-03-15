#pragma once

#include <rst-rt/kinematics/Twist.hpp>
#include <rst-rt/kinematics/LinearVelocities.hpp>
#include <rst-rt/geometry/AngularVelocity.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::kinematics::Twist >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::kinematics::Twist >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::kinematics::Twist >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::kinematics::Twist >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::kinematics::Twist >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::kinematics::Twist >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::kinematics::Twist >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::kinematics::Twist >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::kinematics::Twist >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::kinematics::Twist >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::kinematics::Twist& j, unsigned int version) {
    a & make_nvp("linear",     j.linear);
    a & make_nvp("angular", j.angular);
}

}
}
