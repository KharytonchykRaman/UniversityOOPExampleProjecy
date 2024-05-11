#include <iostream>
#include "Stack.h"
#include "Queue.h"


int main() {

	Stack stack;

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);

	while (!stack.isEmpty()) {
		cout << stack.pop() << " ";
	}

	Queue queue;

	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(4);

	cout << endl <<queue.getInfo() << endl;

	cout << "first element is " << queue.peek() << endl;

	queue.dequeue();

	cout << queue.getInfo() << endl;

	return 0;
}