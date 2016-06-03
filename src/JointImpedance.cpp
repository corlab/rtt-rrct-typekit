#include "JointImpedance.hpp"

#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::dynamics::JointImpedance>;
template class RTT::internal::AssignableDataSource<rstrt::dynamics::JointImpedance>;
template class RTT::internal::ValueDataSource<rstrt::dynamics::JointImpedance>;
template class RTT::internal::ConstantDataSource<rstrt::dynamics::JointImpedance>;
template class RTT::internal::ReferenceDataSource<rstrt::dynamics::JointImpedance>;
template class RTT::base::ChannelElement<rstrt::dynamics::JointImpedance>;
template class RTT::OutputPort<rstrt::dynamics::JointImpedance>;
template class RTT::InputPort<rstrt::dynamics::JointImpedance>;
template class RTT::Property<rstrt::dynamics::JointImpedance>;
template class RTT::Attribute<rstrt::dynamics::JointImpedance>;

namespace rstrt_typekit {

rstrt::dynamics::JointImpedance createJointImpedance_size(int size) {
    return rstrt::dynamics::JointImpedance(size);
}

void loadJointImpedanceType() {
    const std::string NAME("rstrt.dynamics.JointImpedance");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::dynamics::JointImpedance,
                                                       true>
                        (NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createJointImpedance_size));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::dynamics::JointImpedance> >
        (NAME + "[]"));
}

}
