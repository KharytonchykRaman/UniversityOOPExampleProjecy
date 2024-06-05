#pragma once
#include "Bee.h"
class NurseBee :
	public Bee
{
private:
	int numMilkDay;
public:
	const int HONEY_COEFFICIENT = 7;

	NurseBee() : numMilkDay(0) {};
	NurseBee(int numMilkDay, int lifeTimeDay) : numMilkDay(numMilkDay), Bee(lifeTimeDay) {};

	int getNumMilkDay();
	void setNumMilkDay(int numMilkDay);

	double calcHoney() override;
	string convert() override;
};