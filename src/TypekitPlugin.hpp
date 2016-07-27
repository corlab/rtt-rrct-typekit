#pragma once

#include <string>

#include <rtt/types/TypekitPlugin.hpp>

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
 * The single global instance of the RST-RT Typekit.
 */
extern TypekitPlugin typekit;

}
