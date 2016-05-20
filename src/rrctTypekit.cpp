#include "rrctTypekit.hpp"

namespace rrct {
using namespace RTT;
using namespace RTT::detail;
using namespace std;

RRCTTypekitPlugin RRCTTypekit;

void loadJointAnglesTypes();
//void loadFrameTypes();
//void loadJacobianTypes();
//void loadJntArrayTypes();
//void loadJointTypes();
//void loadRotationTypes();
//void loadSegmentTypes();
//void loadTwistTypes();
//void loadVectorTypes();
//void loadWrenchTypes();

std::string RRCTTypekitPlugin::getName() {
	return "rrct";
}

bool RRCTTypekitPlugin::loadOperators() {
	return true;
}

bool RRCTTypekitPlugin::loadConstructors() {
	return true;
}

bool RRCTTypekitPlugin::loadTypes() {
	loadJointAnglesTypes();
//	loadFrameTypes();
//	loadJacobianTypes();
//	loadJntArrayTypes();
//	loadJointTypes();
//	loadRotationTypes();
//	loadSegmentTypes();
//	loadTwistTypes();
//	loadVectorTypes();
//	loadWrenchTypes();

	return true;
}
}
ORO_TYPEKIT_PLUGIN(rrct::RRCTTypekitPlugin)
