#include "DroneBee.h"

int DroneBee::getSize() {
	return size;
}

void DroneBee::setSize(int size) {
	if (size < 4 && size > 0)
	{
		this->size = size;
	}
}

double DroneBee::calcHoney() {
	return size * HONEY_COEFFICIENT;
}

string DroneBee::convert() {
	return Bee::convert() + ", size: " + to_string(size) 
		+ " and ate " + to_string(calcHoney()) + " honey";
}