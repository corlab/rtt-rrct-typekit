#include "JointAccelerations.hpp"

#include <vector>

#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::kinematics::JointAccelerations>;
template class RTT::internal::AssignableDataSource<rstrt::kinematics::JointAccelerations>;
template class RTT::internal::ValueDataSource<rstrt::kinematics::JointAccelerations>;
template class RTT::internal::ConstantDataSource<rstrt::kinematics::JointAccelerations>;
template class RTT::internal::ReferenceDataSource<rstrt::kinematics::JointAccelerations>;
template class RTT::base::ChannelElement<rstrt::kinematics::JointAccelerations>;
template class RTT::OutputPort<rstrt::kinematics::JointAccelerations>;
template class RTT::InputPort<rstrt::kinematics::JointAccelerations>;
template class RTT::Property<rstrt::kinematics::JointAccelerations>;
template class RTT::Attribute<rstrt::kinematics::JointAccelerations>;

namespace rstrt_typekit {

rstrt::kinematics::JointAccelerations createJointAccelerations_size(int size) {
    return rstrt::kinematics::JointAccelerations(size);
}

void loadJointAccelerationsType() {
    const std::string NAME("rstrt.kinematics.JointAccelerations");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::kinematics::JointAccelerations>(NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createJointAccelerations_size));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::kinematics::JointAccelerations> >
        (NAME + "[]"));
}

}
