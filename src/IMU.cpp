#include "IMU.hpp"

#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::robot::IMU>;
template class RTT::internal::AssignableDataSource<rstrt::robot::IMU>;
template class RTT::internal::ValueDataSource<rstrt::robot::IMU>;
template class RTT::internal::ConstantDataSource<rstrt::robot::IMU>;
template class RTT::internal::ReferenceDataSource<rstrt::robot::IMU>;
template class RTT::base::ChannelElement<rstrt::robot::IMU>;
template class RTT::OutputPort<rstrt::robot::IMU>;
template class RTT::InputPort<rstrt::robot::IMU>;
template class RTT::Property<rstrt::robot::IMU>;
template class RTT::Attribute<rstrt::robot::IMU>;

namespace rstrt_typekit {

//rstrt::robot::IMU createIMU_Values(float ax, float ay, float az, float va,
//		float vb, float vc, float qw, float qx, float qy, float qz) {
//	return rstrt::robot::IMU(ax, ay, az, va, vb, vc, qw, qx, qy, qz);
//}

rstrt::robot::IMU createIMU_NestedTypes(rstrt::geometry::LinearAcceleration la,
		rstrt::geometry::AngularVelocity av, rstrt::geometry::Rotation r) {
	return rstrt::robot::IMU(la, av, r);
}

void loadIMUType() {
	const std::string NAME("rstrt.robot.IMU");

	RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

	repository->addType(
			new RTT::types::StructTypeInfo<rstrt::robot::IMU, true>(NAME));
	RTT::types::TypeInfo* typeInfo = repository->type(NAME);
//	typeInfo->addConstructor(RTT::types::newConstructor(&createIMU_Values));

	typeInfo->addConstructor(
			RTT::types::newConstructor(&createIMU_NestedTypes));

	repository->addType(
			new RTT::types::SequenceTypeInfo<std::vector<rstrt::robot::IMU> >(
					NAME + "[]"));
}

}
