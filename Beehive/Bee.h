#pragma once
#include <string>

using namespace std;

class Bee
{
protected:
	int lifeTimeDay;
	int honey;
public:
	Bee() : lifeTimeDay(0), honey(0) {};
	Bee(int lifeTimeDay, int honey) : lifeTimeDay(lifeTimeDay), honey(honey) {};

	int getLifeTimeDay();
	void setLifeTimeDay(int lifeTimeDay);

	int getHoney();
	void setHoney(int honey);

	virtual double calcHoney();

	virtual string convert();
};