#include "rrctTypekit.hpp"

template class RTT::internal::DataSource<RRCT::JointAngles>;
template class RTT::internal::AssignableDataSource<RRCT::JointAngles>;
template class RTT::internal::ValueDataSource<RRCT::JointAngles>;
template class RTT::internal::ConstantDataSource<RRCT::JointAngles>;
template class RTT::internal::ReferenceDataSource<RRCT::JointAngles>;
template class RTT::base::ChannelElement<RRCT::JointAngles>;
template class RTT::OutputPort<RRCT::JointAngles>;
template class RTT::InputPort<RRCT::JointAngles>;
template class RTT::Property<RRCT::JointAngles>;
template class RTT::Attribute<RRCT::JointAngles>;

namespace RRCT {
using namespace std;
using namespace RTT;

void loadJointAnglesTypes() {
	RTT::types::Types()->addType(
			new RRCTTypeInfo<JointAngles>("RRCT.JointAngles"));
	RTT::types::Types()->addType(
			new SequenceTypeInfo<std::vector<JointAngles> >(
					"RRCT.JointAngles[]"));
}
;
}
