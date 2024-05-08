#pragma once
#include "Human.h"

class Student : public Human 
{
	double mark;
	static int count;

public:

	static const int MAX_MARK = 10;
	static const int MIN_MARK = 0;

	Student();
	Student(string name, int age, double mark);

	//Student(const Student& student);

	~Student();

	double getMark();
	void setMark(int mark);

	static int getCount();

	string convert();
};