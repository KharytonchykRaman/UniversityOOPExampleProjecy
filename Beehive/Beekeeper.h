#pragma once
#include "Beehive.h"

class Beekeeper
{
private:
	int age;
	string name;
public:
	double calcTotalHoneyDay(Bee bee);
	double calcTotalHoneyDays(Bee bee, int numDay);
};