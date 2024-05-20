#include "Professor.h"

class A {
public:
	int value1 = 10;

	virtual void start() {}
};

class B : public A {
public:
	int value2 = 20;

	void start() override {
		cout << "start b" << endl;
	}
};

int main() {

	Professor prof;

	A* a = new B();

	a->start();

	return 0;
}