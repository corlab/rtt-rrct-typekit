#include "Wrench.hpp"

#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::dynamics::Wrench>;
template class RTT::internal::AssignableDataSource<rstrt::dynamics::Wrench>;
template class RTT::internal::ValueDataSource<rstrt::dynamics::Wrench>;
template class RTT::internal::ConstantDataSource<rstrt::dynamics::Wrench>;
template class RTT::internal::ReferenceDataSource<rstrt::dynamics::Wrench>;
template class RTT::base::ChannelElement<rstrt::dynamics::Wrench>;
template class RTT::OutputPort<rstrt::dynamics::Wrench>;
template class RTT::InputPort<rstrt::dynamics::Wrench>;
template class RTT::Property<rstrt::dynamics::Wrench>;
template class RTT::Attribute<rstrt::dynamics::Wrench>;

namespace rstrt_typekit {

rstrt::dynamics::Wrench
 createWrench_Values(double x, double y, double z, double a, double b, double c) {
    return rstrt::dynamics::Wrench(x, y, z, a, b, c);
}

void loadWrenchType() {
    const std::string NAME("rstrt.dynamics.Wrench");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::dynamics::Wrench,
                                                       true>
                        (NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createWrench_Values));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::dynamics::Wrench> >
        (NAME + "[]"));
}

}
