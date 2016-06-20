#include "JointJerks.hpp"

#include <vector>

#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::kinematics::JointJerks>;
template class RTT::internal::AssignableDataSource<rstrt::kinematics::JointJerks>;
template class RTT::internal::ValueDataSource<rstrt::kinematics::JointJerks>;
template class RTT::internal::ConstantDataSource<rstrt::kinematics::JointJerks>;
template class RTT::internal::ReferenceDataSource<rstrt::kinematics::JointJerks>;
template class RTT::base::ChannelElement<rstrt::kinematics::JointJerks>;
template class RTT::OutputPort<rstrt::kinematics::JointJerks>;
template class RTT::InputPort<rstrt::kinematics::JointJerks>;
template class RTT::Property<rstrt::kinematics::JointJerks>;
template class RTT::Attribute<rstrt::kinematics::JointJerks>;

namespace rstrt_typekit {

rstrt::kinematics::JointJerks createJointJerks_size(int size) {
    return rstrt::kinematics::JointJerks(size);
}

void loadJointJerksType() {
    const std::string NAME("rstrt.kinematics.JointJerks");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::kinematics::JointJerks,
                                                       true>
                        (NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createJointJerks_size));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::kinematics::JointJerks> >
        (NAME + "[]"));
}

}
