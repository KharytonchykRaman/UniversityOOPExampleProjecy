#pragma once
#include "Bee.h"
class WorkerBee :
	public Bee
{
private:
	string gatheringType;
	int flightDistance;
public:
	WorkerBee() : gatheringType("default"), flightDistance(0) {};
	WorkerBee(string gatheringType, int flightDistance) : 
		gatheringType(gatheringType), flightDistance(flightDistance), Bee(lifeTimeDay, honey) {};

	string getGathringType();
	void setGathringType(string GathringType);

	int getFlightDistance();
	void setFlightDistance(int flightDistance);

	double calcHoney() override;
	string convert();
};