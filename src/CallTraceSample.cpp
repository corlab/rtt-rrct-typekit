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
																   const uint_least64_t callTime) {
	return rstrt::monitoring::CallTraceSample(callName, containerName, callTime);
}

rstrt::monitoring::CallTraceSample createCallTraceSample_ValuesNNTT(const std::string& callName,
																	const std::string& containerName,
																	const uint_least64_t callTime,
																	const int callType) {
	return rstrt::monitoring::CallTraceSample(callName, containerName, callTime, 0, callType);
}

rstrt::monitoring::CallTraceSample createCallTraceSample_ValuesNNTDT(const std::string& callName,
																	const std::string& containerName,
																	const uint_least64_t callTime,
																	const uint_least64_t callDuration,
																	const int callType) {
	return rstrt::monitoring::CallTraceSample(callName, containerName, callTime, callDuration, callType);
}

rstrt::monitoring::CallTraceSample createCallTraceSample_ValuesNNTD(const std::string& callName,
																	const std::string& containerName,
																	const uint_least64_t callTime,
																	const uint_least64_t callDuration) {
	return rstrt::monitoring::CallTraceSample(callName, containerName, callTime, callDuration, 0);
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
	typeInfo->addConstructor(
		RTT::types::newConstructor(&createCallTraceSample_ValuesNNTDT));
	typeInfo->addConstructor(
		RTT::types::newConstructor(&createCallTraceSample_ValuesNNTD));

	repository->addType(
			new RTT::types::SequenceTypeInfo<
					std::vector<rstrt::monitoring::CallTraceSample> >(NAME + "[]"));
}

}
