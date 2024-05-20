#pragma once
#include "Bus.h"
#include "Car.h"
#include "Truck.h"
class GasStation
{
public:
	int calcTotalGas(Bus* buses, Truck* trucks, Car* cars, int bsize, int csize, int tsize) {
		int total = 0;

		for (int i = 0; i < bsize; i++)
		{
			total += buses[i].gas;
		}

		for (int i = 0; i < tsize; i++)
		{
			total += trucks[i].gas;
		}

		for (int i = 0; i < csize; i++)
		{
			total += cars[i].gas;
		}

		return total;
	}
};

