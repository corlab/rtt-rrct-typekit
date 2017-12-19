#include "CallTraceSample.hpp"

#include <string>
#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::monitoring::CallTraceSample>;
template class RTT::internal::AssignableDataSource<rstrt::monitoring::CallTraceSample>;
template class RTT::internal::ValueDataSource<rstrt::monitoring::CallTraceSample>;
template class RTT::internal::ConstantDataSource<rstrt::monitoring::CallTraceSample>;
template class RTT::internal::ReferenceDataSource<rstrt::monitoring::CallTraceSample>;
template class RTT::base::ChannelElement<rstrt::monitoring::CallTraceSample>;
template class RTT::OutputPort<rstrt::monitoring::CallTraceSample>;
template class RTT::InputPort<rstrt::monitoring::CallTraceSample>;
template class RTT::Property<rstrt::monitoring::CallTraceSample>;
template class RTT::Attribute<rstrt::monitoring::CallTraceSample>;

namespace rstrt_typekit {

rstrt::monitoring::CallTraceSample createCallTraceSample_ValuesNNT(const std::string& callName,
																   const std::string& containerName,
																   const double callTime) {
	return rstrt::monitoring::CallTraceSample(callName, containerName, callTime);
}

rstrt::monitoring::CallTraceSample createCallTraceSample_ValuesNNTT(const std::string& callName,
																	const std::string& containerName,
																	const double callTime,
																	const int callType) {
	return rstrt::monitoring::CallTraceSample(callName, containerName, callTime, callType);
}

void loadCallTraceSampleType() {
	const std::string NAME("rstrt.monitoring.CallTraceSample");

	RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

	repository->addType(
			new RTT::types::StructTypeInfo<rstrt::monitoring::CallTraceSample, true>(NAME));
	RTT::types::TypeInfo* typeInfo = repository->type(NAME);
	typeInfo->addConstructor(
			RTT::types::newConstructor(&createCallTraceSample_ValuesNNT));
	typeInfo->addConstructor(
			RTT::types::newConstructor(&createCallTraceSample_ValuesNNTT));

	repository->addType(
			new RTT::types::SequenceTypeInfo<
					std::vector<rstrt::monitoring::CallTraceSample> >(NAME + "[]"));
}

}
