#include "Human.h"

int Human::getAge() {
	return age;
};

string Human::getName() {
	return name;
};

void Human::setAge(int age) {
	if (age >= MIN_AGE && age <= MAX_AGE)
	{
		this->age = age;
	}
};

void Human::setName(string name) {
	this->name = name;
};

string Human::getInfo() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	return s;
};