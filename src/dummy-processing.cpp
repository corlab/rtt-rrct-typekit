#include "dummy-processing.hpp"

#include <rtt/Component.hpp>

using namespace std;
using namespace RTT;
using namespace Orocos;

DummyProcessing::DummyProcessing(std::string const& name) :
		TaskContext(name), interval(200.0), ja(3) {
	this->addAttribute("interval", interval);

	ja.angles(0) = 1;
	ja.angles(1) = 2;
	ja.angles(2) = 4;

	this->addAttribute("jointAngles", ja);


}

bool DummyProcessing::configureHook() {
	RTT::Logger::Instance()->setLogLevel(RTT::Logger::Debug);
	RTT::Logger::Instance()->startup();
	tmpInterval = interval;
	return true;
}

bool DummyProcessing::startHook() {
	return true;
}

void DummyProcessing::updateHook() {
	RTT::os::TimeService::ticks currentTimeTicz =
			os::TimeService::Instance()->getTicks();

	while ((RTT::os::TimeService::Instance()->secondsSince(currentTimeTicz)
			* 1E+6) < tmpInterval) {
	}

	RTT::os::TimeService::ticks endTicks =
			os::TimeService::Instance()->getTicks();

	double time_passed = RTT::os::TimeService::Instance()->secondsSince(
			currentTimeTicz) * 1E+3;

	double nsecs = RTT::os::TimeService::Instance()->ticks2nsecs(
			endTicks - currentTimeTicz);

	RTT::log(RTT::Error) << this->getName() << " Ticks: " << endTicks - currentTimeTicz
			<< RTT::endlog();

	RTT::log(RTT::Error) << this->getName() << " nsecs: " << nsecs * 1E-6
			<< RTT::endlog();
	RTT::log(RTT::Error) << this->getName() << " Elapsed millisecs: "
			<< time_passed << RTT::endlog();

}

void DummyProcessing::stopHook() {
}

void DummyProcessing::cleanupHook() {
	RTT::Logger::Instance()->shutdown();
}

/*
 * Using this macro, only one component may live
 * in one library *and* you may *not* link this library
 * with another component library. Use
 * ORO_CREATE_COMPONENT_TYPE()
 * ORO_LIST_COMPONENT_TYPE(RTTController)
 * In case you want to link with another library that
 * already contains components.
 *
 * If you have put your component class
 * in a namespace, don't forget to add it here too:
 */
ORO_CREATE_COMPONENT_LIBRARY()ORO_LIST_COMPONENT_TYPE(RTT::DummyProcessing)
//ORO_CREATE_COMPONENT(DummyProcessing)
