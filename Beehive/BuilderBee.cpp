#include "BuilderBee.h"

double BuilderBee::getWorkNum() {
	return workNum;
}

void BuilderBee::setWorkNum(double workNum) {
	if (workNum > 0)
	{
		this->workNum = workNum;
	}
}

double BuilderBee::calcHoney() {
	return workNum * HONEY_COEFFICIENT;
}

string BuilderBee::convert() {
	return Bee::convert() + ", work " + to_string(workNum) 
		+ " times and ate " + to_string(calcHoney()) + " honey";
}