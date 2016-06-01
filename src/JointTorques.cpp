#include "JointTorques.hpp"

#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::dynamics::JointTorques>;
template class RTT::internal::AssignableDataSource<rstrt::dynamics::JointTorques>;
template class RTT::internal::ValueDataSource<rstrt::dynamics::JointTorques>;
template class RTT::internal::ConstantDataSource<rstrt::dynamics::JointTorques>;
template class RTT::internal::ReferenceDataSource<rstrt::dynamics::JointTorques>;
template class RTT::base::ChannelElement<rstrt::dynamics::JointTorques>;
template class RTT::OutputPort<rstrt::dynamics::JointTorques>;
template class RTT::InputPort<rstrt::dynamics::JointTorques>;
template class RTT::Property<rstrt::dynamics::JointTorques>;
template class RTT::Attribute<rstrt::dynamics::JointTorques>;

namespace rstrt_typekit {

void loadJointTorquesType() {
    RTT::types::Types()->addType(
        new RTT::types::StructTypeInfo<rstrt::dynamics::JointTorques>
        ("rstrt.dynamics.JointTorques"));
    RTT::types::Types()->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::dynamics::JointTorques> >
        ("rstrt.dynamics.JointTorques[]"));
}

}
