#ifndef ORO_RRCT_TYPEKIT_HPP
#define ORO_RRCT_TYPEKIT_HPP

#include "rrctTypekitTypes.hpp"
#include <rtt/types/TypekitPlugin.hpp>
#include <rtt/types/Types.hpp>
#include <rtt/types/TemplateTypeInfo.hpp>
#include <rtt/types/SequenceTypeInfo.hpp>
#include <rtt/types/StructTypeInfo.hpp>
#include <rtt/types/Operators.hpp>
#include <rtt/types/OperatorTypes.hpp>
#include <rtt/internal/mystd.hpp>
#include <rtt/os/StartStopManager.hpp>
#include <rtt/internal/GlobalService.hpp>

// TODO why only these two?
//#include <kdl/jntarray.hpp>
//#include <kdl/jacobian.hpp>

#include "rrctProperties.hpp"

namespace rrct {
using namespace RTT;
using namespace RTT::detail;
using namespace std;

/**
 * Helper functions.
 */
/**
 * Returns a reference to one item in an KDL container.
 * @param cont The container to access
 * @param index The item to reference
 * @return A reference to item \a index
 */
template<class RRCTType, int size>
double& get_container_item(RRCTType & cont, int index) {
	if (index >= size || index < 0)
		return internal::NA<double&>::na();
	return cont[index];
}
;

/**
 * Returns a copy to one item in an STL container.
 * @note vector<bool> is not supported, since it's not an STL container.
 * @param cont The container to access
 * @param index The item to extract from the sequence
 * @return A copy of item \a index
 */
template<class RRCTType, int size>
double get_container_item_copy(const RRCTType & cont, int index) {
	if (index >= size || index < 0)
		return internal::NA<double>::na();
	return cont[index];
}
;

/**
 * RRCT RTT bindings
 */
class RRCTTypekitPlugin: public RTT::types::TypekitPlugin {
public:
	virtual std::string getName();

	virtual bool loadTypes();
	virtual bool loadConstructors();
	virtual bool loadOperators();
};

/**
 * Temlate class used for Vector, Twist and Wrench
 */
template<class RRCTType, int size>
struct RRCTVectorTypeInfo: public StructTypeInfo<RRCTType, true> {
	RRCTVectorTypeInfo(std::string name) :
			StructTypeInfo<RRCTType, true>(name) {
	}

	virtual bool decomposeTypeImpl(const RRCTType& source,
			PropertyBag& targetbag) const {
		decomposeProperty(source, targetbag);
		return true;
	}

	virtual bool composeTypeImpl(const PropertyBag& source,
			RRCTType& result) const {
		return composeProperty(source, result);
	}

	base::DataSourceBase::shared_ptr getMember(
			base::DataSourceBase::shared_ptr item,
			base::DataSourceBase::shared_ptr id) const {
		// discover if user gave us a part name or index:
		typename internal::DataSource<int>::shared_ptr id_indx =
				internal::DataSource<int>::narrow(
						internal::DataSourceTypeInfo<int>::getTypeInfo()->convert(
								id).get());
		if (id_indx) {
			try {
				if (item->isAssignable())
					return internal::newFunctorDataSource(
							&get_container_item<RRCTType, size>,
							internal::GenerateDataSource()(item.get(),
									id_indx.get()));
				else
					return internal::newFunctorDataSource(
							&get_container_item_copy<RRCTType, size>,
							internal::GenerateDataSource()(item.get(),
									id_indx.get()));
			} catch (...) {
			}
		}
		if (id_indx) {
			log(Error) << "RRCTVectorTypeInfo: Invalid index : "
					<< id_indx->get() << ":" << id_indx->getTypeName()
					<< endlog();
		}
		if (!id_indx)
			log(Error) << "RRCTVectorTypeInfo: Not a member or index : " << id
					<< ":" << id->getTypeName() << endlog();
		return base::DataSourceBase::shared_ptr();
	}
};

/**
 * Template class used for Frame, Rotation
 */
template<class RRCTType>
struct RRCTTypeInfo: public StructTypeInfo<RRCTType, true> {
	RRCTTypeInfo(std::string name) :
			StructTypeInfo<RRCTType, true>(name) {
	}

	virtual bool decomposeTypeImpl(const RRCTType& source,
			PropertyBag& targetbag) const {
		decomposeProperty(source, targetbag);
		return true;
	}

	virtual bool composeTypeImpl(const PropertyBag& source,
			RRCTType& result) const {
		return composeProperty(source, result);
	}

};

/**
 * The single global instance of the RRCT Typekit.
 */
extern RRCTTypekitPlugin RRCTTypekit;
}
#endif
