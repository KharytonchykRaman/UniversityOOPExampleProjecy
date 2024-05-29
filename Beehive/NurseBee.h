#pragma once
#include "Bee.h"
class NurseBee :
	public Bee
{
private:
	int numMilkDay;
public:
	NurseBee() : numMilkDay(0) {};
	NurseBee(int numMilkDay) : numMilkDay(numMilkDay), Bee(lifeTimeDay, honey) {};

	int getNumMilkDay();
	void setNumMilkDay(int numMilkDay);

	double calcHoney() override;
	string convert();
};