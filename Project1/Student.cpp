#include "Student.h"

int Student::count = 0;

int Student::getCount() {
	return count;
}

// default constructor
Student::Student() : Student("no name", 6, 4) {
}

Student::Student(string name, int age, double mark)
	: Human(name, age), mark(mark) {
	count++;
}

Student::~Student() {
	//cout << "calling destructor" << endl;
	count--;
}

double Student::getMark() {
	return mark;
}

void Student::setMark(int mark) {
	if (mark < MAX_MARK && mark > MIN_MARK)
	{
		this->mark = mark;
	}
}

string Student::convert() {
	string s = "";
	s += name;
	s += ": age = " + to_string(age);
	s += ", mark = " + to_string(mark);
	return s;
}