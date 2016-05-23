#include "JointAngles.hpp"

#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::kinematics::JointAngles>;
template class RTT::internal::AssignableDataSource<rstrt::kinematics::JointAngles>;
template class RTT::internal::ValueDataSource<rstrt::kinematics::JointAngles>;
template class RTT::internal::ConstantDataSource<rstrt::kinematics::JointAngles>;
template class RTT::internal::ReferenceDataSource<rstrt::kinematics::JointAngles>;
template class RTT::base::ChannelElement<rstrt::kinematics::JointAngles>;
template class RTT::OutputPort<rstrt::kinematics::JointAngles>;
template class RTT::InputPort<rstrt::kinematics::JointAngles>;
template class RTT::Property<rstrt::kinematics::JointAngles>;
template class RTT::Attribute<rstrt::kinematics::JointAngles>;

namespace rstrt_typekit {

void loadJointAnglesType() {
    RTT::types::Types()->addType(
        new RTT::types::StructTypeInfo<rstrt::kinematics::JointAngles>
        ("rstrt.kinematics.JointAngles"));
    RTT::types::Types()->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::kinematics::JointAngles> >
        ("rstrt.kinematics.JointAngles[]"));
}

}
