#pragma once
#include "Bee.h"
class GuardBee :
	public Bee
{
private:
	int numDefendedAttack;
public:
	const int HONEY_COEFFICIENT = 10;

	GuardBee() :  numDefendedAttack(0) {};
	GuardBee( int numDefendedAttack) : numDefendedAttack(numDefendedAttack), Bee(lifeTimeDay) {};

	int getNumDefendedAttack();
	void setNumDefendedAttack(int numDefendedAttack);

	double calcHoney() override;
	string convert();
};