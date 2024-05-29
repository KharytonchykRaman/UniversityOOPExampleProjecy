#include "Beehive.h"

int Beehive::getSize() {
	return size;
}

void Beehive::add(Bee bee) {
	if (size == 0) {
		list = new Bee[1];
		list[0] = bee;
	}
	else {
		Bee* temp = new Bee[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}

		temp[size] = bee;

		delete[] list;
		list = temp;
	}
	size++;
}

void Beehive::remove(int index) {
	if (index >= 0 && index < size) {
		Bee* temp = new Bee[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j++] = list[i];
			}
		}

		delete[] list;
		list = temp;
		size--;
	}
}

void Beehive::remove(Bee bee) {
	int index = getFirstIndex(bee);

	if (index != -1) {

		Bee* temp = new Bee[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j++] = list[i];
			}
		}
		size--;
		delete[] list;
		list = temp;
	}
}

int Beehive::getFirstIndex(Bee bee) {
	for (int i = 0; i < size; i++)
	{
		if (bee.getLifeTimeDay() == list[i].getLifeTimeDay()
			&& bee.getHoney() == list[i].getHoney()) {
			return i;
		}
	}

	return -1;
}

Bee Beehive::get(int index) {
	if (index >= 0 && index < size) {
		return list[index];
	}

	return Bee();
}

string Beehive::convertToString() {
	string s = "Beehive info:\n";

	for (int i = 0; i < size; i++)
	{
		s += list[i].convert() + "\n";
	}

	return s;
}

string Beehive::getBeehiveInfo() {
	string s = "";
	s += "Number of bees : " + to_string(size) + "\n";
	s += "Construction type : " + constructionType + "\n";
	s += "Material : " + material + "\n";
	s += "Beehive length : " + to_string(length) + "\n";
	s += "Beehive width : " + to_string(width) + "\n";
	s += "Beehive height : " + to_string(height) + "\n";
	s += "Number of cells built : " + to_string(cell) + "\n";
	return s;
}