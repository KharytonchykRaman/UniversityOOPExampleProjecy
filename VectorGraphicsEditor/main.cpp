#include <iostream>
#include "Square.h"
#include "Circle.h"
#include "Editor.h"

int main() {

	Square* sq = new Square(5,0,0);
	Circle* cir = new Circle(3,0,0);

	Editor editor;

	cout << editor.justDoIt(sq) << endl;
	cout << editor.justDoIt(cir) << endl;

	return 0;
}