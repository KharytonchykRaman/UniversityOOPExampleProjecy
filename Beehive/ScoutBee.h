#pragma once
#include "Bee.h"
class ScoutBee :
	public Bee
{
private:
	string gatheringType;
	int flightDistance;
public:
	ScoutBee() :  flightDistance(0) {};
	ScoutBee(int flightDistance) : flightDistance(flightDistance), Bee(lifeTimeDay, honey) {};

	int getFlightDistance();
	void setFlightDistance(int flightDistance);

	double calcHoney() override;
	string convert();
};