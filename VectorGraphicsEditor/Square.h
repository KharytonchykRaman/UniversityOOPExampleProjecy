#pragma once
#include "Figure.h"

class Square : public Figure
{
private:
	double a;
public:

	Square() : a(1), Figure() {};
	Square(double a, double x, double y) : Figure(x, y), a(a) {};

	double countPerimeter() override;
	double countSquare() override;
	string draw() override;
};