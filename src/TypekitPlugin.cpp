#include "TypekitPlugin.hpp"

namespace rstrt_typekit {

TypekitPlugin typekit;

void loadTranslationType();
void loadRotationType();
void loadPoseType();
void loadLinearAccelerationType();
void loadAngularVelocityType();

void loadJointAnglesType();
void loadJointVelocitiesType();
void loadJointAccelerationsType();
void loadJointJerksType();
void loadLinearVelocitiesType();
void loadTwistType();

void loadJointTorquesType();
void loadJointImpedanceType();
void loadForcesType();
void loadTorquesType();
void loadWrenchType();

void loadJointStateType();
void loadWeightsType();
void loadIMUType();
void loadOdometryType();

void loadCallTraceSampleType();

void loadMatrixDoubleType();

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
    loadRotationType();
    loadPoseType();
    loadLinearAccelerationType();
    loadAngularVelocityType();

    loadJointAnglesType();
    loadJointVelocitiesType();
    loadJointAccelerationsType();
    loadJointJerksType();
    loadLinearVelocitiesType();
    loadTwistType();

    loadJointTorquesType();
    loadJointImpedanceType();
    loadForcesType();
    loadTorquesType();
    loadWrenchType();

    loadJointStateType();
    loadWeightsType();
    loadIMUType();
    loadOdometryType();

    loadCallTraceSampleType();

    loadMatrixDoubleType();

    return true;
}

}

ORO_TYPEKIT_PLUGIN(rstrt_typekit::TypekitPlugin)
