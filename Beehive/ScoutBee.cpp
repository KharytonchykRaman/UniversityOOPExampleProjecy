#include "ScoutBee.h"

int ScoutBee::getFlightDistance() {
	return flightDistance;
}
void ScoutBee::setFlightDistance(int flightDistance) {
	if (flightDistance > 0)
	{
		this->flightDistance = flightDistance;
	}
}

double ScoutBee::calcHoney() {
	return flightDistance* HONEY_COEFFICIENT;
}

string ScoutBee::convert() {
	return Bee::convert() + ", flew " + to_string(flightDistance)
		+ " meters and ate " + to_string(calcHoney()) + " honey";
}