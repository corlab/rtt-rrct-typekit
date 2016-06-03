#include "JointVelocities.hpp"

#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::kinematics::JointVelocities>;
template class RTT::internal::AssignableDataSource<rstrt::kinematics::JointVelocities>;
template class RTT::internal::ValueDataSource<rstrt::kinematics::JointVelocities>;
template class RTT::internal::ConstantDataSource<rstrt::kinematics::JointVelocities>;
template class RTT::internal::ReferenceDataSource<rstrt::kinematics::JointVelocities>;
template class RTT::base::ChannelElement<rstrt::kinematics::JointVelocities>;
template class RTT::OutputPort<rstrt::kinematics::JointVelocities>;
template class RTT::InputPort<rstrt::kinematics::JointVelocities>;
template class RTT::Property<rstrt::kinematics::JointVelocities>;
template class RTT::Attribute<rstrt::kinematics::JointVelocities>;

namespace rstrt_typekit {

rstrt::kinematics::JointVelocities createJointVelocities_size(int size) {
    return rstrt::kinematics::JointVelocities(size);
}

void loadJointVelocitiesType() {
    const std::string NAME("rstrt.kinematics.JointVelocities");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::kinematics::JointVelocities,
                                                       true>
                        (NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createJointVelocities_size));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::kinematics::JointVelocities> >
        (NAME + "[]"));
}

}
