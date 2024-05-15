#pragma once
#include <string>

using namespace std;

class Queue
{
private:
	int* queue;
	int size{0};
public:
	int getSize();
	void enqueue(int element);
	int dequeue();
	int peek();
	bool isEmpty();
	string getInfo();
};

