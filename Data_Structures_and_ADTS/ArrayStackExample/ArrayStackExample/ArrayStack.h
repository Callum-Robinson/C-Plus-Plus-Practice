#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include "Stack.h"
#include <iostream>
using namespace std;

class ArrayStack : Stack {
	
public:
	ArrayStack(int s = 16) : MAX_SIZE(s) {
		top = -1; // -1 indicates no elements in the stack
		mArray = new int[MAX_SIZE];
	}

	void push(int newEntry) {
		if (top < MAX_SIZE - 1) {
			top++;
			mArray[top] = newEntry;
		}
		else {
			cout << "Error: Stack is full" << endl; // Would use exception handling in a industry environment
		}
	}

	int pop() {
		int data = 0;

		if (!isEmpty()) {
			data = mArray[top];
			top--;
		}
		else {
			cout << "Error: Can't pop an empty stack" << endl;
		}

		return data;
	}

	int peek() const {
		int data = 0;

		if (!isEmpty()) {
			data = mArray[top];
		}
		else {
			cout << "The stack is empty" << endl;
		}

		return data;
	}

	bool isEmpty() const {
		return top == -1;
	}

	void makeEmpty() {
		top = -1;
	}


private:
	int* mArray;
	const int MAX_SIZE;
	int top;
};


#endif // !ARRAY_STACK_H

