#pragma once
#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
	string name;
	int age;

public:

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

