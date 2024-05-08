#include "Worker.h"

double Worker::getSalary() {
	return salary;
};

void Worker::setSalary(double salary) {
	if (salary > 0)
	{
		this->salary = salary;
	}
};

string Worker::getInfo() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", salary = " + to_string(salary);
    return s;
};