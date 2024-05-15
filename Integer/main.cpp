#include <iostream>
#include "Integer.h"

using namespace std;

int main() {

	Integer integer(5);
	Integer test(3);

	Integer result = integer.add(test);
	cout << result.getValue() << endl;

	result = integer.mul(test);
	cout << result.getValue() << endl;

	result = integer.div(test);
	cout << result.getValue() << endl;

	result = integer.sub(test);
	cout << result.getValue() << endl;

	result = integer.mod(test);
	cout << result.getValue() << endl;

	result = integer.pow(test);
	cout << result.getValue() << endl;

	result = integer.opp();
	cout << result.getValue() << endl;

	integer.setValue(15);
	cout << "Results after setting new value:\n";

	result = integer.add(test);
	cout << result.getValue() << endl;

	result = integer.mul(test);
	cout << result.getValue() << endl;

	result = integer.div(test);
	cout << result.getValue() << endl;

	result = integer.sub(test);
	cout << result.getValue() << endl;

	result = integer.mod(test);
	cout << result.getValue() << endl;

	result = integer.pow(test);
	cout << result.getValue() << endl;

	result = integer.opp();
	cout << result.getValue() << endl;

	Integer a(10);
	Integer b(17);
	Integer c = a + b;
	cout << c.getValue()<< endl;

	return 0;
}