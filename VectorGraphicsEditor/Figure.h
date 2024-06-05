#pragma once
#include <string>
#include <iostream>

using namespace std;

class Figure
{
protected:
	double x;
	double y;
public:
	Figure() : x(0), y(0) {};
	Figure(double x, double y) : x(x), y(y) {};

	double getX();
	void setX(double x);

	double getY();
	void setY(double y);

	virtual double countPerimeter() = 0;
	virtual double countSquare() = 0;
	virtual string draw() = 0;
};