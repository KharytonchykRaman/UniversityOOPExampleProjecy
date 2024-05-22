#include <iostream>
#include "Square.h"
#include "Editor.h"

int main() {

	Square* sq = new Square(5);

	Editor editor;

	cout << editor.justDoIt(sq) << endl;

	return 0;
}