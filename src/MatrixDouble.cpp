#include "MatrixDouble.hpp"

#include <vector>

#include <rtt/types/Types.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>

template class RTT::internal::DataSource<rstrt::math::MatrixDouble>;
template class RTT::internal::AssignableDataSource<rstrt::math::MatrixDouble>;
template class RTT::internal::ValueDataSource<rstrt::math::MatrixDouble>;
template class RTT::internal::ConstantDataSource<rstrt::math::MatrixDouble>;
template class RTT::internal::ReferenceDataSource<rstrt::math::MatrixDouble>;
template class RTT::base::ChannelElement<rstrt::math::MatrixDouble>;
template class RTT::OutputPort<rstrt::math::MatrixDouble>;
template class RTT::InputPort<rstrt::math::MatrixDouble>;
template class RTT::Property<rstrt::math::MatrixDouble>;
template class RTT::Attribute<rstrt::math::MatrixDouble>;

namespace rstrt_typekit {

rstrt::math::MatrixDouble createMatrixDouble_size(int rows, int cols) {
    return rstrt::math::MatrixDouble(rows, cols);
}

void loadMatrixDoubleType() {
    const std::string NAME("rstrt.math.MatrixDouble");

    RTT::types::TypeInfoRepository::shared_ptr repository = RTT::types::Types();

    repository->addType(new RTT::types::StructTypeInfo<rstrt::math::MatrixDouble, true>(NAME));
    RTT::types::TypeInfo* typeInfo = repository->type(NAME);
    typeInfo->addConstructor(RTT::types::newConstructor(&createMatrixDouble_size));

    repository->addType(
        new RTT::types::SequenceTypeInfo<std::vector<rstrt::math::MatrixDouble> >
        (NAME + "[]"));
}

}
