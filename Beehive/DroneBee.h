#pragma once
#include "Bee.h"
class DroneBee :
	public Bee
{
private:
	string size;
public:
	DroneBee() : size("none") {};
	DroneBee(string size) : size(size), Bee(lifeTimeDay, honey) {};

	string getSize();
	void setSize(string size);

	double calcHoney() override;
	string convert();
};