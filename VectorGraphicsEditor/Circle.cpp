#include "Circle.h"

double const PI = 3.1416;

double Circle::countPerimeter() {
	return 2 * r * PI;
};

double Circle::countSquare() {
	return PI * r * r;
};

string Circle::draw() {
	return "Circle" + Figure::draw();
};