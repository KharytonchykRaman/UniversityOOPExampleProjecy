#pragma once
#include <string>

using namespace std;

class Bee
{
protected:
	int lifeTimeDay;
public:
	Bee() : lifeTimeDay(0) {};
	Bee(int lifeTimeDay) : lifeTimeDay(lifeTimeDay) {};

	int getLifeTimeDay();
	void setLifeTimeDay(int lifeTimeDay);

	virtual double calcHoney();
	virtual double honeyCollected();
	virtual string convert();
};