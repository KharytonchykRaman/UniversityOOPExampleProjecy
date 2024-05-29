#pragma once
#include "Beehive.h"

class Beekeeper
{
private:
	int age;
	string name;
public:
	double calcTotalHoneyDay(Beehive bees);
	double calcTotalHoneyDays(Beehive bees, int numDay);
};