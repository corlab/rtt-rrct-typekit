#include "Weights.hpp"

#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::robot::Weights>;
template class RTT::internal::AssignableDataSource<rstrt::robot::Weights>;
template class RTT::internal::ValueDataSource<rstrt::robot::Weights>;
template class RTT::internal::ConstantDataSource<rstrt::robot::Weights>;
template class RTT::internal::ReferenceDataSource<rstrt::robot::Weights>;
template class RTT::base::ChannelElement<rstrt::robot::Weights>;
template class RTT::OutputPort<rstrt::robot::Weights>;
template class RTT::InputPort<rstrt::robot::Weights>;
template class RTT::Property<rstrt::robot::Weights>;
template class RTT::Attribute<rstrt::robot::Weights>;

namespace rstrt_typekit {

rstrt::robot::Weights createWeights_size(int size) {
    return rstrt::robot::Weights(size);
}

void loadWeightsType() {
    const std::string NAME("rstrt.robot.Weights");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::robot::Weights,
                                                       true>
                        (NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createWeights_size));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::robot::Weights> >
        (NAME + "[]"));
}

}
