#include "NurseBee.h"

int NurseBee::getNumMilkDay() {
	return numMilkDay;
}

void NurseBee::setNumMilkDay(int numMilkDay) {
	if (numMilkDay > 0)
	{
		this->numMilkDay = numMilkDay;
	}
}

double NurseBee::calcHoney() {
	return numMilkDay * HONEY_COEFFICIENT;
}

string NurseBee::convert() {
	return Bee::convert() + ", produced " + to_string(numMilkDay)
		+ " milk today and ate " + to_string(calcHoney()) + " honey";
}