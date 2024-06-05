#include "Square.h"
#include "Circle.h"
#include "Editor.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() {

	Square* sq = new Square(5, 0, 0);
	Circle* cir = new Circle(3, 0, 0);
	Rectangle* rec = new Rectangle(3, 4, 0, 0);
	Triangle* tr = new Triangle(12, 16, 20, 0, 0);

	Editor editor;

	cout << editor.justDoIt(sq) << endl;
	cout << editor.justDoIt(cir) << endl;
	cout << editor.justDoIt(rec) << endl;
	cout << editor.justDoIt(tr) << endl;

	return 0;
}