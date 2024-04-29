#include "Worker.h"

int Worker::getAge() {
	return age;
};

string Worker::getName() {
	return name;
};

double Worker::getSalary() {
	return salary;
};

void Worker::setAge(int age) {
	this->age = age;
};

void Worker::setName(string name) {
	this->name = name;
};

void Worker::setSalary(double salary) {
	this->salary = salary;
};

string Worker::getInfo() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", salary = " + to_string(salary);
    return s;
};