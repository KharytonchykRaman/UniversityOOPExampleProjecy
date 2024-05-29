#include "Bee.h"

int Bee::getLifeTimeDay() {
	return lifeTimeDay;
}

void Bee::setLifeTimeDay(int lifeTimeDay) {
	if (lifeTimeDay > 0)
	{
		this->lifeTimeDay = lifeTimeDay;
	}
}

string Bee::convert() {
	return "The bee lived for " + to_string(lifeTimeDay) + " days";
}

double Bee::calcHoney() {
	return 0;
}

double Bee::honeyCollected() {
	return 0;
}