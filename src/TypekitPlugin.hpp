#pragma once

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

namespace rstrt_typekit {

/**
 * RST-RT RTT bindings
 */
class TypekitPlugin: public RTT::types::TypekitPlugin {
public:
    virtual std::string getName();

    virtual bool loadTypes();
    virtual bool loadConstructors();
    virtual bool loadOperators();
};

/**
 * The single global instance of the RRCT Typekit.
 */
extern TypekitPlugin typekit;

}
