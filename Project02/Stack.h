#pragma once
#include <string>

using namespace std;

class Stack
{
	int* stack;
	int size{0};
public:
	int getSize();
	bool isEmpty();
	void push(int element);
	int pop();
	int peek();
	string getInfo();
};