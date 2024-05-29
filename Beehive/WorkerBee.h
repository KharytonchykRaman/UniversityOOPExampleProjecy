#pragma once
#include "Bee.h"
class WorkerBee :
	public Bee
{
private:
	string gatheringType;
	int flightDistance;
public:
	const int HONEY_COEFFICIENT_WASTE = 2;
	const int HONEY_COEFFICIENT_COLLECT = 15;

	WorkerBee() : gatheringType("default"), flightDistance(0) {};
	WorkerBee(string gatheringType, int flightDistance) : 
		gatheringType(gatheringType), flightDistance(flightDistance), Bee(lifeTimeDay) {};

	string getGatheringType();
	void setGatheringType(string GathringType);

	int getFlightDistance();
	void setFlightDistance(int flightDistance);

	double calcHoney() override;
	string convert();
	double honeyCollected() override;
};