#include "Rotation.hpp"

#include <string>
#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::geometry::Rotation>;
template class RTT::internal::AssignableDataSource<rstrt::geometry::Rotation>;
template class RTT::internal::ValueDataSource<rstrt::geometry::Rotation>;
template class RTT::internal::ConstantDataSource<rstrt::geometry::Rotation>;
template class RTT::internal::ReferenceDataSource<rstrt::geometry::Rotation>;
template class RTT::base::ChannelElement<rstrt::geometry::Rotation>;
template class RTT::OutputPort<rstrt::geometry::Rotation>;
template class RTT::InputPort<rstrt::geometry::Rotation>;
template class RTT::Property<rstrt::geometry::Rotation>;
template class RTT::Attribute<rstrt::geometry::Rotation>;

namespace rstrt_typekit {

rstrt::geometry::Rotation createRotation_Values(double qw, double qx, double qy,
		double qz) {
	return rstrt::geometry::Rotation(qw, qx, qy, qz);
}

rstrt::geometry::Rotation createRotation_Values_FrameId(double qw, double qx,
		double qy, double qz, const std::string& frameId) {
	return rstrt::geometry::Rotation(qw, qx, qy, qz, frameId);
}

void loadRotationType() {
	const std::string NAME("rstrt.geometry.Rotation");

	RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

	repository->addType(
			new RTT::types::StructTypeInfo<rstrt::geometry::Rotation, true>(
					NAME));
	RTT::types::TypeInfo* typeInfo = repository->type(NAME);
	typeInfo->addConstructor(
			RTT::types::newConstructor(&createRotation_Values));
	typeInfo->addConstructor(
			RTT::types::newConstructor(&createRotation_Values_FrameId));

	repository->addType(
			new RTT::types::SequenceTypeInfo<
					std::vector<rstrt::geometry::Rotation> >(NAME + "[]"));
}

}
