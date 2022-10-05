#ifndef ARRAY_QUEUE_H
#define ARRAY_QUEUE_H

#include <iostream>
#include "Queue.h"
using namespace std;

class ArrayQueue : public Queue {

public:
	ArrayQueue(int s = 16) : MAX_SIZE(s) {
		front = 0;
		back = 0;
		mArray = new int[MAX_SIZE];
		numElements = 0;
	}

	virtual ~ArrayQueue() {
		delete[] mArray;
	}

	/*
		Add given entry to the back of the queue
	*/
	void enqueue(int newEntry) {
		if (numElements < MAX_SIZE) {
			mArray[back] = newEntry;
			back = (back + 1) % MAX_SIZE; // 'Circles' around
			numElements++;
		}
		else {
			cout << "You cannot enqueue onto a full queue." << endl;
		}
	}

	/*
		Remove the front of the queue and return the removed data
	*/
	int dequeue() {
		int data = 0;
		if (!isEmpty()) {
			data = mArray[front];
			front = (front + 1) % MAX_SIZE;
			numElements--;
		}
		else {
			cout << "You cannot dequeue on an empty queue" << endl;
		}

		return data;
	}

	/*
		Return the front value
	*/
	int peekFront() const {
		if (!isEmpty())
		{
			return mArray[front];
		}

		cout << "Queue is empty." << endl;

		return 0;
	}

	/*
		Check if queue is empty
	*/
	bool isEmpty() const {
		return numElements == 0;
	}

	/*
		Set the queue to be empty
	*/
	void makeEmpty() {
		front = 0;
		back = 0;
		numElements = 0;
	}


private:
	int* mArray;
	const int MAX_SIZE;
	int front;
	int back;
	int numElements;
};


#endif // ARRAY_QUEUE_H