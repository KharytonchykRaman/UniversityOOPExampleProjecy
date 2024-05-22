#pragma once
#include <string>

using namespace std;

class Figure
{
public:
	virtual double countPerimeter() = 0;
	virtual double countSquare() = 0;
	virtual string draw() = 0;
};

