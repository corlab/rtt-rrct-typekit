#include "LinearAcceleration.hpp"

#include <string>
#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::geometry::LinearAcceleration>;
template class RTT::internal::AssignableDataSource<rstrt::geometry::LinearAcceleration>;
template class RTT::internal::ValueDataSource<rstrt::geometry::LinearAcceleration>;
template class RTT::internal::ConstantDataSource<rstrt::geometry::LinearAcceleration>;
template class RTT::internal::ReferenceDataSource<rstrt::geometry::LinearAcceleration>;
template class RTT::base::ChannelElement<rstrt::geometry::LinearAcceleration>;
template class RTT::OutputPort<rstrt::geometry::LinearAcceleration>;
template class RTT::InputPort<rstrt::geometry::LinearAcceleration>;
template class RTT::Property<rstrt::geometry::LinearAcceleration>;
template class RTT::Attribute<rstrt::geometry::LinearAcceleration>;

namespace rstrt_typekit {

rstrt::geometry::LinearAcceleration
 createLinearAcceleration_Values(double x, double y, double z) {
    return rstrt::geometry::LinearAcceleration(x, y, z);
}

void loadLinearAccelerationType() {
    const std::string NAME("rstrt.geometry.LinearAcceleration");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::geometry::LinearAcceleration,
                                                       true>
                        (NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createLinearAcceleration_Values));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::geometry::LinearAcceleration> >
        (NAME + "[]"));
}

}
