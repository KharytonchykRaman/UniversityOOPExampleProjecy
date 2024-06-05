#pragma once
#include "Bee.h"
class ScoutBee :
	public Bee
{
private:
	int flightDistance;
public:
	const int HONEY_COEFFICIENT = 1.5;

	ScoutBee() :  flightDistance(0) {};
	ScoutBee(int flightDistance, int lifeTimeDay) : flightDistance(flightDistance), Bee(lifeTimeDay) {};

	int getFlightDistance();
	void setFlightDistance(int flightDistance);

	double calcHoney() override;
	string convert() override;
};