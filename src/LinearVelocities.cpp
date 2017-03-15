#include "LinearVelocities.hpp"

#include <string>
#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::kinematics::LinearVelocities>;
template class RTT::internal::AssignableDataSource<rstrt::kinematics::LinearVelocities>;
template class RTT::internal::ValueDataSource<rstrt::kinematics::LinearVelocities>;
template class RTT::internal::ConstantDataSource<rstrt::kinematics::LinearVelocities>;
template class RTT::internal::ReferenceDataSource<rstrt::kinematics::LinearVelocities>;
template class RTT::base::ChannelElement<rstrt::kinematics::LinearVelocities>;
template class RTT::OutputPort<rstrt::kinematics::LinearVelocities>;
template class RTT::InputPort<rstrt::kinematics::LinearVelocities>;
template class RTT::Property<rstrt::kinematics::LinearVelocities>;
template class RTT::Attribute<rstrt::kinematics::LinearVelocities>;

namespace rstrt_typekit {

rstrt::kinematics::LinearVelocities
 createLinearVelocities_Values(double x, double y, double z) {
    return rstrt::kinematics::LinearVelocities(x, y, z);
}

void loadLinearVelocitiesType() {
    const std::string NAME("rstrt.kinematics.LinearVelocities");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::kinematics::LinearVelocities,
                                                       true>
                        (NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createLinearVelocities_Values));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::kinematics::LinearVelocities> >
        (NAME + "[]"));
}

}
