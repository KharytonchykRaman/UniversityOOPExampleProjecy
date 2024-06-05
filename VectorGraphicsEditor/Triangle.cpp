#include "Triangle.h"

double Triangle::countPerimeter() {
	return a + b + c;
};

double Triangle::countSquare() {
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
};

string Triangle::draw() {
	return "Triangle" + Figure::draw();
}