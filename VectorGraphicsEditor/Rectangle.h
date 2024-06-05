#pragma once
#include "Figure.h"
class Rectangle :
    public Figure
{
private:
	double a;
	double b;
public:

	Rectangle() : a(1),b(1), Figure() {};
	Rectangle(double a,double b, double x, double y) : Figure(x, y), a(a),b(b) {};

	double countPerimeter() override;
	double countSquare() override;
	string draw() override;
};

