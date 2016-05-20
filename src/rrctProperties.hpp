#ifndef RRCTPROPERTIES_HPP
#define RRCTPROPERTIES_HPP

#include "rrct/kinematics/JointAngles.hpp"

#include <rtt/Property.hpp>
#include <rtt/PropertyBag.hpp>
#include <rtt/types/TemplateTypeInfo.hpp>

namespace RTT
{
    using namespace rrct;

    void decomposeProperty(const kinematics::JointAngles &chain, PropertyBag& target);
    bool composeProperty(const PropertyBag& bag, kinematics::JointAngles &chain);

}
#endif
