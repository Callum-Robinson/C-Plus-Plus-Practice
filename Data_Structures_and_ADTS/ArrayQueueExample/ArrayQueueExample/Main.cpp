#include <iostream>
#include "ArrayQueue.h"
using namespace std;

/*
	Array Queue implementation example
*/
int main() {
	ArrayQueue queue;

	for (int i = 1; i <= 16; i++) {
		queue.enqueue(i * 100);
	}

	queue.enqueue(1234);
	cout << endl;

	while (!queue.isEmpty()) {
		cout << queue.dequeue() << endl;
	}

	queue.dequeue();
	cout << endl;

	// circular test
	for (int i = 0; i < 20; i++) {
		cout << "Just enqueued " << (i * 10) << endl;
		queue.enqueue(i * 10);

		if (i % 3 == 0) {
			cout << "Just dequeued " << queue.dequeue() << endl;
		}
	}
	queue.enqueue(123);
	queue.enqueue(234);
	queue.enqueue(345);
}