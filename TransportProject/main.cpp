#include <iostream>
#include "GasStation.h"
#include "Car.h"
#include "Truck.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main() {

	Car car1(45), car2(55), car3(50);
	Bus bus1(200);
	Truck truck1(230), truck2(400);
	Motorbike bike1(5), bike2(15);

	Transport transports[]{ car1,car2,car3,bus1,truck1,truck2,bike1,bike2 };

	GasStation station;

	int total = station.calcTotalGas(transports, 8);

	cout << "Total fuel is " << total << endl;

	return 0;
}