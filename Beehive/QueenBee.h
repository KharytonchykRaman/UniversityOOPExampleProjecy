#pragma once
#include "Bee.h"

class QueenBee :
	public Bee
{
private:
	int size;
	int numEggDay;
public:
	const int HONEY_COEFFICIENT = 2;

	QueenBee() : size(1), numEggDay(0) {};
	QueenBee(int size, int numEggDay) : size(size), numEggDay(numEggDay), Bee(lifeTimeDay) {};

	int getSize();
	void setSize(int size);

	int getNumEggDay();
	void setNumEggDay(int numEggDay);

	double calcHoney() override;
	string convert() override;
};