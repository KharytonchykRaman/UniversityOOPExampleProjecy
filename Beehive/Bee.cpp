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

int Bee::getHoney() {
	return honey;
}

void Bee::setHoney(int honey) {
	if (honey > 0)
	{
		this->honey = honey;
	}
}

string Bee::convert() {
	return "The bee lived for " + to_string(lifeTimeDay) + " days and produces " + to_string(honey) + " honey a day";
}