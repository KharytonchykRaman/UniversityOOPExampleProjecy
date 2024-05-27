#pragma once
#include "Figure.h"

class Triangle : public Figure
{
private:
	double a,b,c;
public:

	Triangle() : a(1),b(1),c(1) {};
	Triangle(double a, double b , double c) : a(a), b(b), c(c) {};

	double getA();
	void setA(double a);

	double getB();
	void setB(double a);

	double getC();
	void setC(double a);

	double countPerimeter() override;
	double countSquare() override;
	string draw() override;
};

