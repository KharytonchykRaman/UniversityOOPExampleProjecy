#pragma once
#include <iostream>
#include <string>

using namespace std;

class Human
{
protected:
	string name;
	int age;

public:

	static const int MAX_AGE = 100;
	static const int MIN_AGE = 0;

	Human() {
		cout << "human constructor calling;"<< endl;
	};

	Human(string name, int age) :
		name(name), age(age) {};

	~Human() {
		cout << "Human destructor calling;" << endl;
	}

	int getAge();
	string getName();
	void setAge(int age);
	void setName(string name);

	string getInfo();
};

