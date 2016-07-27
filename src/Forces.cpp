#include "Forces.hpp"

#include <string>
#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::dynamics::Forces>;
template class RTT::internal::AssignableDataSource<rstrt::dynamics::Forces>;
template class RTT::internal::ValueDataSource<rstrt::dynamics::Forces>;
template class RTT::internal::ConstantDataSource<rstrt::dynamics::Forces>;
template class RTT::internal::ReferenceDataSource<rstrt::dynamics::Forces>;
template class RTT::base::ChannelElement<rstrt::dynamics::Forces>;
template class RTT::OutputPort<rstrt::dynamics::Forces>;
template class RTT::InputPort<rstrt::dynamics::Forces>;
template class RTT::Property<rstrt::dynamics::Forces>;
template class RTT::Attribute<rstrt::dynamics::Forces>;

namespace rstrt_typekit {

rstrt::dynamics::Forces
 createForces_Values(double x, double y, double z) {
    return rstrt::dynamics::Forces(x, y, z);
}

void loadForcesType() {
    const std::string NAME("rstrt.dynamics.Forces");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::dynamics::Forces,
                                                       true>
                        (NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createForces_Values));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::dynamics::Forces> >
        (NAME + "[]"));
}

}
