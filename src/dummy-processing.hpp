#ifndef RTT_DUMMY_PROCESSING_HPP
#define RTT_DUMMY_PROCESSING_HPP

#include <rtt/RTT.hpp>
#include <rtt/Port.hpp>
#include <rtt/base/RunnableInterface.hpp>
#include <rtt/Activity.hpp>
#include <rtt/Property.hpp>
#include <rtt/Attribute.hpp>

#include "rrct/kinematics/JointAngles.hpp"


namespace RTT {

class DummyProcessing: public RTT::TaskContext {
public:
	DummyProcessing(std::string const& name);
	bool configureHook();
	bool startHook();
	void updateHook();
	void stopHook();
	void cleanupHook();

protected:
	double interval;
	double tmpInterval;

	rrct::kinematics::JointAngles ja;
};

}
#endif
