#pragma once
#include "Bee.h"
class BuilderBee :
	public Bee
{
private:
	double workNum;
public:

	int const HONEY_COEFFICIENT = 5;

	BuilderBee() : workNum(0) {};
	BuilderBee(double workNum, int lifeTimeDay) : workNum(workNum), Bee(lifeTimeDay) {};

	double getWorkNum();
	void setWorkNum(double workNum);

	double calcHoney() override;
	string convert() override;
};