#include "TypekitPlugin.hpp"

namespace rstrt_typekit {

TypekitPlugin typekit;

void loadTranslationType();

void loadJointAnglesType();
void loadJointVelocitiesType();
void loadJointAccelerationsType();

void loadJointTorquesType();
void loadJointImpedanceType();

void loadJointStateType();

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
    loadTranslationType();

    loadJointAnglesType();
    loadJointVelocitiesType();
    loadJointAccelerationsType();

    loadJointTorquesType();
    loadJointImpedanceType();

    loadJointStateType();

    return true;
}

}

ORO_TYPEKIT_PLUGIN(rstrt_typekit::TypekitPlugin)
