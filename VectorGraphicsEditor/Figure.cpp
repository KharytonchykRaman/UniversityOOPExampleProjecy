#include "Figure.h"

double Figure::getX() {
	return x;
}

void Figure::setX(double x) {
	this->x = x;
}

double Figure::getY() {
	return y;
}

void Figure::setY(double y) {
	this->y = y;
}

string Figure::draw() {
	return ": start point(" + to_string(x) + ";" + to_string(y) + ")";
}