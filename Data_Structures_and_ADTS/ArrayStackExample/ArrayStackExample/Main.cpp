#include <iostream>
#include "ArrayStack.h"
using namespace std;

int main() {
	ArrayStack stack;
	ArrayStack stack2;

	for (int i = 0; i < 17; i++)  //make it get to the limit on last element
	{
		stack.push(i);
	}

	cout << endl;

	/*
		Print all elements in stack exercise (in original order)
	*/
	cout << "The stack:" << endl;

	while (!stack.isEmpty()) {
		stack2.push(stack.pop());
	}

	while (!stack2.isEmpty()) {
		stack.push(stack2.pop());
		cout << stack.peek() << endl;
	}
}