#pragma once
#include "Figure.h"

class Circle : public Figure
{
private:
	double r;
public:

	Circle() : r(1), Figure() {};
	Circle(double r, double x, double y) : Figure(x, y), r(r) {};

	double countPerimeter() override;
	double countSquare() override;
	string draw() override;
};