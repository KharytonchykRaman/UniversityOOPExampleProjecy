#pragma once
class Queue
{
private:
	int* queue;
	int size;
public:
	void enqueue(int element);
	int dequeue();
	int peek();
	bool isEmpty();
};

