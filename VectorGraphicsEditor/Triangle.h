#pragma once
#include "Figure.h"

class Triangle : public Figure
{
private:
	double a,b,c;
public:

	Triangle() : a(1),b(1),c(1) {};
	Triangle(double a, double b , double c, double x, double y) : Figure(x, y), a(a), b(b), c(c) {};

	double countPerimeter() override;
	double countSquare() override;
	string draw() override;
};