#include "Torques.hpp"

#include <string>
#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::dynamics::Torques>;
template class RTT::internal::AssignableDataSource<rstrt::dynamics::Torques>;
template class RTT::internal::ValueDataSource<rstrt::dynamics::Torques>;
template class RTT::internal::ConstantDataSource<rstrt::dynamics::Torques>;
template class RTT::internal::ReferenceDataSource<rstrt::dynamics::Torques>;
template class RTT::base::ChannelElement<rstrt::dynamics::Torques>;
template class RTT::OutputPort<rstrt::dynamics::Torques>;
template class RTT::InputPort<rstrt::dynamics::Torques>;
template class RTT::Property<rstrt::dynamics::Torques>;
template class RTT::Attribute<rstrt::dynamics::Torques>;

namespace rstrt_typekit {

rstrt::dynamics::Torques
 createTorques_Values(double a, double b, double c) {
    return rstrt::dynamics::Torques(a, b, c);
}

void loadTorquesType() {
    const std::string NAME("rstrt.dynamics.Torques");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::dynamics::Torques,
                                                       true>
                        (NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createTorques_Values));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::dynamics::Torques> >
        (NAME + "[]"));
}

}
