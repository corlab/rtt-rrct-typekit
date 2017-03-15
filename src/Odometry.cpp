#include "Odometry.hpp"

#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::robot::Odometry>;
template class RTT::internal::AssignableDataSource<rstrt::robot::Odometry>;
template class RTT::internal::ValueDataSource<rstrt::robot::Odometry>;
template class RTT::internal::ConstantDataSource<rstrt::robot::Odometry>;
template class RTT::internal::ReferenceDataSource<rstrt::robot::Odometry>;
template class RTT::base::ChannelElement<rstrt::robot::Odometry>;
template class RTT::OutputPort<rstrt::robot::Odometry>;
template class RTT::InputPort<rstrt::robot::Odometry>;
template class RTT::Property<rstrt::robot::Odometry>;
template class RTT::Attribute<rstrt::robot::Odometry>;

namespace rstrt_typekit {

//rstrt::robot::Odometry createOdometry_Values(double px, double py, double pz,
//		double pqw, double pqx, double pqy, double pqz, double tlx, double tly,
//		double tlz, double taa, double tab, double tac) {
//	return rstrt::robot::Odometry(px, py, pz, pqw, pqx, pqy, pqz, tlx, tly, tlz,
//			taa, tab, tac);
//}

rstrt::robot::Odometry createOdometry_NestedTypes(rstrt::geometry::Pose p,
		rstrt::kinematics::Twist t) {
	return rstrt::robot::Odometry(p, t);
}

void loadOdometryType() {
	const std::string NAME("rstrt.robot.Odometry");

	RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

	repository->addType(
			new RTT::types::StructTypeInfo<rstrt::robot::Odometry, true>(NAME));
	RTT::types::TypeInfo* typeInfo = repository->type(NAME);
//	typeInfo->addConstructor(
//			RTT::types::newConstructor(&createOdometry_Values));

	typeInfo->addConstructor(
			RTT::types::newConstructor(&createOdometry_NestedTypes));

	repository->addType(
			new RTT::types::SequenceTypeInfo<std::vector<rstrt::robot::Odometry> >(
					NAME + "[]"));
}

}
