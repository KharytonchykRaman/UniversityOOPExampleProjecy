#include "Rectangle.h"

double Rectangle::countPerimeter() {
	return (a + b) * 2;
};

double Rectangle::countSquare() {
	return a * b;
};

string Rectangle::draw() {
	return "Rectangle" + Figure::draw();
}