#include "GuardBee.h"

int GuardBee::getNumDefendedAttack() {
	return numDefendedAttack;
}

void GuardBee::setNumDefendedAttack(int numDefendedAttack) {
	if (numDefendedAttack > 0)
	{
		this->numDefendedAttack = numDefendedAttack;
	}
}

double GuardBee::calcHoney() {
	return numDefendedAttack * HONEY_COEFFICIENT;
}

string GuardBee::convert() {
	return Bee::convert() + ", defended " + to_string(numDefendedAttack)
		+ " attacks and ate " + to_string(calcHoney()) + " honey";
}