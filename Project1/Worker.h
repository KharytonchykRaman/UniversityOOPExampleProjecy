#pragma once
#include <string>

using namespace std;

class Worker
{
private:
	string name;
	int age;
	double salary;

public:
	Worker() {};
	Worker(string name, int age, double salary) :
		name(name), age(age), salary(salary) {};
	~Worker() {};
	int getAge();
	string getName();
	double getSalary();
	void setAge(int age);
	void setName(string name);
	void setSalary(double salary);
	string getInfo();
};

