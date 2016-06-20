#pragma once

#include <rst-rt/kinematics/JointJerks.hpp>

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/array.hpp>

#ifdef CORELIB_DATASOURCE_HPP
extern template class RTT::internal::DataSource< ::rstrt::kinematics::JointJerks >;
extern template class RTT::internal::AssignableDataSource< ::rstrt::kinematics::JointJerks >;
#endif
#ifdef ORO_CORELIB_DATASOURCES_HPP
extern template class RTT::internal::ValueDataSource< ::rstrt::kinematics::JointJerks >;
extern template class RTT::internal::ConstantDataSource< ::rstrt::kinematics::JointJerks >;
extern template class RTT::internal::ReferenceDataSource< ::rstrt::kinematics::JointJerks >;
#endif
#ifdef ORO_CHANNEL_ELEMENT_HPP
extern template class RTT::base::ChannelElement< ::rstrt::kinematics::JointJerks >;
#endif
#ifdef ORO_OUTPUT_PORT_HPP
extern template class RTT::OutputPort< ::rstrt::kinematics::JointJerks >;
#endif
#ifdef ORO_INPUT_PORT_HPP
extern template class RTT::InputPort< ::rstrt::kinematics::JointJerks >;
#endif
#ifdef ORO_PROPERTY_HPP
extern template class RTT::Property< ::rstrt::kinematics::JointJerks >;
#endif
#ifdef ORO_CORELIB_ATTRIBUTE_HPP
extern template class RTT::Attribute< ::rstrt::kinematics::JointJerks >;
#endif

namespace boost {
namespace serialization {

template<typename Archive>
void serialize(Archive& a, ::rstrt::kinematics::JointJerks& j, unsigned int version) {
    a & make_nvp("jerks", j.jerks);
}

}
}
