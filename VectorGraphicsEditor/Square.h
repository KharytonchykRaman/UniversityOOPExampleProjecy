#pragma once
#include "Figure.h"

class Square : public Figure
{

public:

	double a;

	Square() : a(1) {};
	Square(int a) : a(a) {};

	double countPerimeter() override;
	double countSquare() override;
	string draw() override;
};