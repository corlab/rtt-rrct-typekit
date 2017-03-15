#include "Pose.hpp"

#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::geometry::Pose>;
template class RTT::internal::AssignableDataSource<rstrt::geometry::Pose>;
template class RTT::internal::ValueDataSource<rstrt::geometry::Pose>;
template class RTT::internal::ConstantDataSource<rstrt::geometry::Pose>;
template class RTT::internal::ReferenceDataSource<rstrt::geometry::Pose>;
template class RTT::base::ChannelElement<rstrt::geometry::Pose>;
template class RTT::OutputPort<rstrt::geometry::Pose>;
template class RTT::InputPort<rstrt::geometry::Pose>;
template class RTT::Property<rstrt::geometry::Pose>;
template class RTT::Attribute<rstrt::geometry::Pose>;

namespace rstrt_typekit {

//rstrt::geometry::Pose
// createPose_Values(double x, double y, double z, double qw, double qx, double qy, double qz) {
//    return rstrt::geometry::Pose(x, y, z, qw, qx, qy, qz);
//}

rstrt::geometry::Pose
 createPose_NestedTypes(rstrt::geometry::Translation t, rstrt::geometry::Rotation r) {
    return rstrt::geometry::Pose(t, r);
}

void loadPoseType() {
    const std::string NAME("rstrt.geometry.Pose");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::geometry::Pose,
                                                       true>
                        (NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
//    typeInfo->addConstructor(RTT::types::newConstructor(&createPose_Values));

    typeInfo->addConstructor(RTT::types::newConstructor(&createPose_NestedTypes));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::geometry::Pose> >
        (NAME + "[]"));
}

}
