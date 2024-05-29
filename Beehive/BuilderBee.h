#pragma once
#include "Bee.h"
class BuilderBee :
	public Bee
{
private:
	double workNum;
public:
	BuilderBee() : workNum(0) {};
	BuilderBee(double workNum) : workNum(workNum), Bee(lifeTimeDay, honey) {};

	double getWorkNum();
	void setWorkNum(double workNum);

	double calcHoney() override;
	string convert();
};