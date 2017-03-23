#include "Translation.hpp"

#include <string>
#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::geometry::Translation>;
template class RTT::internal::AssignableDataSource<rstrt::geometry::Translation>;
template class RTT::internal::ValueDataSource<rstrt::geometry::Translation>;
template class RTT::internal::ConstantDataSource<rstrt::geometry::Translation>;
template class RTT::internal::ReferenceDataSource<rstrt::geometry::Translation>;
template class RTT::base::ChannelElement<rstrt::geometry::Translation>;
template class RTT::OutputPort<rstrt::geometry::Translation>;
template class RTT::InputPort<rstrt::geometry::Translation>;
template class RTT::Property<rstrt::geometry::Translation>;
template class RTT::Attribute<rstrt::geometry::Translation>;

namespace rstrt_typekit {

rstrt::geometry::Translation
 createTranslation_Values(float x, float y, float z) {
    return rstrt::geometry::Translation(x, y, z);
}

rstrt::geometry::Translation
 createTranslation_Values_FrameId(float x, float y, float z,
                                  const std::string& frameId) {
    return rstrt::geometry::Translation(x, y, z, frameId);
}

void loadTranslationType() {
    const std::string NAME("rstrt.geometry.Translation");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::geometry::Translation,
                                                       true>
                        (NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createTranslation_Values));
    typeInfo->addConstructor(RTT::types::newConstructor(&createTranslation_Values_FrameId));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::geometry::Translation> >
        (NAME + "[]"));
}

}
