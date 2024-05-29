#include <iostream>
#include "Beekeeper.h"

int main() {

	WorkerBee worker1("default", 15), worker2("default", 10), worker3("default", 13),
		worker4("default", 10), worker5("default", 9), worker6("default", 14);
	BuilderBee builder1(3);
	DroneBee drone1(2);
	GuardBee guard1(7);
	NurseBee nurse1(5);
	ScoutBee scout1(20);
	QueenBee queen1(3, 5);

	Beehive beehive;

	beehive.add(worker1);
	beehive.add(worker2);
	beehive.add(worker3);
	beehive.add(worker4);
	beehive.add(worker5);
	beehive.add(worker6);
	beehive.add(drone1);
	beehive.add(guard1);
	beehive.add(nurse1);
	beehive.add(scout1);
	beehive.add(builder1);
	beehive.add(queen1);

	Beekeeper beekeeper;

	int dayNum;
	do
	{
		cout << "Input amount of days: ";
		cin >> dayNum;
	} while (dayNum > 0);

	cout << "This beehive produces " << beekeeper.calcTotalHoneyDays(beehive, dayNum)
		<< " honey in " << dayNum << " days";

	return 0;
}