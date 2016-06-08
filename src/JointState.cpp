#include "JointState.hpp"

#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::robot::JointState>;
template class RTT::internal::AssignableDataSource<rstrt::robot::JointState>;
template class RTT::internal::ValueDataSource<rstrt::robot::JointState>;
template class RTT::internal::ConstantDataSource<rstrt::robot::JointState>;
template class RTT::internal::ReferenceDataSource<rstrt::robot::JointState>;
template class RTT::base::ChannelElement<rstrt::robot::JointState>;
template class RTT::OutputPort<rstrt::robot::JointState>;
template class RTT::InputPort<rstrt::robot::JointState>;
template class RTT::Property<rstrt::robot::JointState>;
template class RTT::Attribute<rstrt::robot::JointState>;

namespace rstrt_typekit {

rstrt::robot::JointState createJointState_size(int size) {
    return rstrt::robot::JointState(size);
}

void loadJointStateType() {
    const std::string NAME("rstrt.robot.JointState");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::robot::JointState,
                                                       true>
                        (NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createJointState_size));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::robot::JointState> >
        (NAME + "[]"));
}

}
