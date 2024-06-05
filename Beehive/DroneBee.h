#pragma once
#include "Bee.h"
class DroneBee :
	public Bee
{
private:
	int size;
public:
	const int HONEY_COEFFICIENT = 5;

	DroneBee() : size(1) {};
	DroneBee(int size, int lifeTimeDay) : size(size), Bee(lifeTimeDay) {};

	int getSize();
	void setSize(int size);

	double calcHoney() override;
	string convert() override;
};