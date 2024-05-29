#include "QueenBee.h"

int QueenBee::getSize() {
	return size;
}

void QueenBee::setSize(int size) {
	if (size < 4 && size > 0)
	{
		this->size = size;
	}
}

int QueenBee::getNumEggDay() {
	return numEggDay;
}

void QueenBee::setNumEggDay(int numEggDay) {
	if (numEggDay > 0)
	{
		this->numEggDay = numEggDay;
	}
}

double QueenBee::calcHoney() {
	return numEggDay * size * (lifeTimeDay / 365 + HONEY_COEFFICIENT);
}

string QueenBee::convert() {
	return Bee::convert() + ", size: " + to_string(size) + ", produced " + to_string(numEggDay)
		+ " eggs today and ate " + to_string(calcHoney()) + " honey";
}