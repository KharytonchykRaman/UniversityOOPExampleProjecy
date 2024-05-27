#include "Square.h"

double Square::countPerimeter() {
	return a * 4;
};

double Square::countSquare() {
	return a * a;
};

string Square::draw() {
	return "Square" + Figure::draw();
}