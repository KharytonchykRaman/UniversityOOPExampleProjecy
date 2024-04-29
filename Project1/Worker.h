#pragma once
#include "Human.h"

class Worker : public Human
{
private:
	double salary;

public:
	Worker() {
		cout << "worker constructor calling;"<<endl;
	};
																		
	Worker(string name, int age, double salary) : Human(name , age), salary(salary) {};

	~Worker() {
		cout << "Worker destructor calling;" << endl;
	}

	double getSalary();
	void setSalary(double salary);

	string getInfo();
};

