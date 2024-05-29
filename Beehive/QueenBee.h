#pragma once
#include "Bee.h"

class QueenBee :
	public Bee
{
private:
	string size;
	int numEggDay;
public:
	QueenBee() : size("none"), numEggDay(0) {};
	QueenBee(string size, int numEggDay) : size(size), numEggDay(numEggDay), Bee(lifeTimeDay, honey) {};

	string getSize();
	void setSize(string size);

	int getNumEggDay();
	void setNumEggDay(int numEggDay);

	double calcHoney() override;
	string convert();
};