#include "Beekeeper.h"

double Beekeeper::calcTotalHoneyDay(Beehive bees) {
	int honeySpend = 0;
	int honeyCollected = 0;

	for (int i = 0; i < bees.getSize(); i++)
	{
		honeySpend += bees.get(i)->calcHoney();
		honeyCollected += bees.get(i)->honeyCollected();
	}
	return honeyCollected - honeySpend;
}

double Beekeeper::calcTotalHoneyDays(Beehive bees, int numDay) {
	return calcTotalHoneyDay(bees) * numDay;
}