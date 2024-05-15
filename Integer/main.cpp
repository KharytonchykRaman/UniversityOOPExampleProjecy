#include <iostream>
#include "Integer.h"

using namespace std;

int main() {

	Integer integer(5);

	cout << integer.add(7).getValue() << endl;
	cout << integer.mul(7).getValue() << endl;
	cout << integer.div(2).getValue() << endl;
	cout << integer.sub(100).getValue() << endl;
	cout << integer.mod(2).getValue() << endl;
	cout << integer.pow(3).getValue() << endl;
	cout << integer.opp().getValue() << endl;

	integer.setValue(15);
	cout << "Results after setting new value:\n";

	cout << integer.add(7).getValue() << endl;
	cout << integer.mul(7).getValue() << endl;
	cout << integer.div(2).getValue() << endl;
	cout << integer.sub(100).getValue() << endl;
	cout << integer.mod(2).getValue() << endl;
	cout << integer.pow(3).getValue() << endl;
	cout << integer.opp().getValue() << endl;

	return 0;
}