#ifndef LIST_STACK_H
#define LIST_STACK_H

#include <iostream>
#include "Stack.h"
#include "LinkedList.h"
using namespace std;


class ListStack : public Stack {

public:
	ListStack() {
		top = -1;
	}

	~ListStack() {
		makeEmpty();
		top = -1;
	}

	/*
		Push given entry to top of stack
	*/
	void push(int newEntry) {
		top++;

		linkedListStack.add(newEntry);
	}

	/*
		Remove top of stack and return data
	*/
	int pop() {
		int data = 0;

		if (!isEmpty()) {
			data = linkedListStack.remove(top);
			top--;
		}
		else {
			cout << "Can't pop an empty stack" << endl;
		}

		return data;
	}

	/*
		Look at top of stack
	*/
	int peek() {
		int data = 0;

		if (!isEmpty()) {
			data = linkedListStack.remove(top); // Need to remove
			linkedListStack.add(data);			// then add it back
		}
		else {
			cout << "List is empty" << endl;
		}

		return data;
	}

	/*
		Check if stack is empty
	*/
	bool isEmpty() {
		return linkedListStack.isEmpty();
	}

	/*
		Empty the stack
	*/
	void makeEmpty() {
		linkedListStack.makeEmpty();
	}


private:
	LinkedList linkedListStack;
	int top;
};


#endif // LIST_STACK_H