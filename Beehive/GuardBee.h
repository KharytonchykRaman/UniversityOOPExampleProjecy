#pragma once
#include "Bee.h"
class GuardBee :
	public Bee
{
private:
	int numDefendedAttack;
public:
	GuardBee() :  numDefendedAttack(0) {};
	GuardBee( int numDefendedAttack) : numDefendedAttack(numDefendedAttack), Bee(lifeTimeDay, honey) {};

	int getNumDefendedAttack();
	void setNumDefendedAttack(int numDefendedAttack);

	double calcHoney() override;
	string convert();
};