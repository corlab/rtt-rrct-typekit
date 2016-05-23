#include "TypekitPlugin.hpp"

#include "JointAngles.hpp"

namespace rstrt_typekit {

TypekitPlugin typekit;

void loadJointAnglesType();
void loadJointVelocitiesType();
void loadJointAccelerationsType();

std::string TypekitPlugin::getName() {
    return "rrct";
}

bool TypekitPlugin::loadOperators() {
    return true;
}

bool TypekitPlugin::loadConstructors() {
    return true;
}

bool TypekitPlugin::loadTypes() {
    loadJointAnglesType();
    loadJointVelocitiesType();
    loadJointAccelerationsType();

    return true;
}

}

ORO_TYPEKIT_PLUGIN(rstrt_typekit::TypekitPlugin)
