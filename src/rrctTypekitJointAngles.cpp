#include "rrctTypekit.hpp"

template class RTT::internal::DataSource<rrct::kinematics::JointAngles>;
template class RTT::internal::AssignableDataSource<rrct::kinematics::JointAngles>;
template class RTT::internal::ValueDataSource<rrct::kinematics::JointAngles>;
template class RTT::internal::ConstantDataSource<rrct::kinematics::JointAngles>;
template class RTT::internal::ReferenceDataSource<rrct::kinematics::JointAngles>;
template class RTT::base::ChannelElement<rrct::kinematics::JointAngles>;
template class RTT::OutputPort<rrct::kinematics::JointAngles>;
template class RTT::InputPort<rrct::kinematics::JointAngles>;
template class RTT::Property<rrct::kinematics::JointAngles>;
template class RTT::Attribute<rrct::kinematics::JointAngles>;

namespace rrct {
using namespace std;
using namespace RTT;

void loadJointAnglesTypes() {
	RTT::types::Types()->addType(
			new RRCTTypeInfo<kinematics::JointAngles>("rrct.kinematics.JointAngles"));
	RTT::types::Types()->addType(
			new SequenceTypeInfo<std::vector<kinematics::JointAngles> >(
					"RRCT.JointAngles[]"));
}
;
}
