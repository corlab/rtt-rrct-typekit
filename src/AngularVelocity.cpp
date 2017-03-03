#include "AngularVelocity.hpp"

#include <string>
#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::geometry::AngularVelocity>;
template class RTT::internal::AssignableDataSource<rstrt::geometry::AngularVelocity>;
template class RTT::internal::ValueDataSource<rstrt::geometry::AngularVelocity>;
template class RTT::internal::ConstantDataSource<rstrt::geometry::AngularVelocity>;
template class RTT::internal::ReferenceDataSource<rstrt::geometry::AngularVelocity>;
template class RTT::base::ChannelElement<rstrt::geometry::AngularVelocity>;
template class RTT::OutputPort<rstrt::geometry::AngularVelocity>;
template class RTT::InputPort<rstrt::geometry::AngularVelocity>;
template class RTT::Property<rstrt::geometry::AngularVelocity>;
template class RTT::Attribute<rstrt::geometry::AngularVelocity>;

namespace rstrt_typekit {

rstrt::geometry::AngularVelocity
 createAngularVelocity_Values(double va, double vb, double vc) {
    return rstrt::geometry::AngularVelocity(va, vb, vc);
}

void loadAngularVelocityType() {
    const std::string NAME("rstrt.geometry.AngularVelocity");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::geometry::AngularVelocity,
                                                       true>
                        (NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createAngularVelocity_Values));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::geometry::AngularVelocity> >
        (NAME + "[]"));
}

}
