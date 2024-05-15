#include "queue.h"

int Queue::getSize() {
	return size;
};

void Queue::enqueue(int element) {
	if (isEmpty())
	{
		queue = new int[1];
		queue[0] = element;
	}
	else {
		int* temp = new int[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = queue[i];
		}
		temp[size] = element;
		delete[] queue;
		queue = temp;
	}
	size++;
};

int Queue::dequeue() {
	if (!isEmpty())
	{
		int* temp = new int[size - 1];
		int element = queue[0];
		size--;
		for (int i = 1; i <= size; i++)
		{
			temp[i - 1] = queue[i];
		}
		delete[] queue;
		queue = temp;
		return element;
	}
	return 0;
};

int Queue::peek() {
	if (!isEmpty())
	{
		return queue[0];
	}
	return 0;
};

bool Queue::isEmpty() {
	return size == 0;
};

string Queue::getInfo() {
	string s = "Queue: ";
	for (int i = 0; i < size; i++)
	{
		s += to_string(queue[i]) + " ";
	}
	return s;
}