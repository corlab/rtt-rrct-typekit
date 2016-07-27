#include "TypekitPlugin.hpp"

namespace rstrt_typekit {

TypekitPlugin typekit;

void loadTranslationType();

void loadJointAnglesType();
void loadJointVelocitiesType();
void loadJointAccelerationsType();
void loadJointJerksType();

void loadJointTorquesType();
void loadJointImpedanceType();
void loadForcesType();
void loadTorquesType();
void loadWrenchType();

void loadJointStateType();
void loadWeightsType();

std::string TypekitPlugin::getName() {
    return "rst-rt";
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
    loadJointJerksType();

    loadJointTorquesType();
    loadJointImpedanceType();
    loadForcesType();
    loadTorquesType();
    loadWrenchType();

    loadJointStateType();
    loadWeightsType();

    return true;
}

}

ORO_TYPEKIT_PLUGIN(rstrt_typekit::TypekitPlugin)
