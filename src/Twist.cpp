#include "Twist.hpp"

#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::kinematics::Twist>;
template class RTT::internal::AssignableDataSource<rstrt::kinematics::Twist>;
template class RTT::internal::ValueDataSource<rstrt::kinematics::Twist>;
template class RTT::internal::ConstantDataSource<rstrt::kinematics::Twist>;
template class RTT::internal::ReferenceDataSource<rstrt::kinematics::Twist>;
template class RTT::base::ChannelElement<rstrt::kinematics::Twist>;
template class RTT::OutputPort<rstrt::kinematics::Twist>;
template class RTT::InputPort<rstrt::kinematics::Twist>;
template class RTT::Property<rstrt::kinematics::Twist>;
template class RTT::Attribute<rstrt::kinematics::Twist>;

namespace rstrt_typekit {

rstrt::kinematics::Twist createTwist_Values(double x, double y, double z,
		double a, double b, double c) {
	return rstrt::kinematics::Twist(x, y, z, a, b, c);
}

rstrt::kinematics::Twist createTwist_NestedTypes(
		rstrt::kinematics::LinearVelocities l,
		rstrt::geometry::AngularVelocity a) {
	return rstrt::kinematics::Twist(l, a);
}

void loadTwistType() {
	const std::string NAME("rstrt.kinematics.Twist");

	RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

	repository->addType(
			new RTT::types::StructTypeInfo<rstrt::kinematics::Twist, true>(
					NAME));
	RTT::types::TypeInfo* typeInfo = repository->type(NAME);
	typeInfo->addConstructor(RTT::types::newConstructor(&createTwist_Values));

	typeInfo->addConstructor(
			RTT::types::newConstructor(&createTwist_NestedTypes));

	repository->addType(
			new RTT::types::SequenceTypeInfo<
					std::vector<rstrt::kinematics::Twist> >(NAME + "[]"));
}

}
