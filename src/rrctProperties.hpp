#ifndef RRCTPROPERTIES_HPP
#define RRCTPROPERTIES_HPP

#include "rrct/JointAngles.hpp"

#include <rtt/Property.hpp>
#include <rtt/PropertyBag.hpp>
#include <rtt/types/TemplateTypeInfo.hpp>

namespace RTT
{
    using namespace RRCT;

    void decomposeProperty(const JointAngles &chain, PropertyBag& target);
    bool composeProperty(const PropertyBag& bag, JointAngles &chain);

}
#endif
