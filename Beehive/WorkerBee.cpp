#include "WorkerBee.h"

string WorkerBee::getGatheringType() {
	return gatheringType;
}

void WorkerBee::setGatheringType(string gatheringType) {
	this->gatheringType = gatheringType;
}

int WorkerBee::getFlightDistance() {
	return flightDistance;
}

void WorkerBee::setFlightDistance(int flightDistance) {
	if (flightDistance > 0)
	{
		this->flightDistance = flightDistance;
	}
}

double WorkerBee::calcHoney() {
	return flightDistance* HONEY_COEFFICIENT_WASTE;
}

string WorkerBee::convert() {
	return Bee::convert() + ", flew " + to_string(flightDistance)
		+ " meters and ate " + to_string(calcHoney()) + " honey";
}

double WorkerBee::honeyCollected() {
	return flightDistance * HONEY_COEFFICIENT_COLLECT;
}