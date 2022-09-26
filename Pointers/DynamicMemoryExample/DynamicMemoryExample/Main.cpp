#include <iostream>

using namespace std;

/*
	Simple exercise looking at assigning, dereferencing and wiping a pointer
*/
int main() {
	int* myIntPtr = new int(123); // assigns pointer to integer

	cout << *myIntPtr << endl; // derefences pointer and prints value

	delete myIntPtr; // frees up the memory at the pointers address

	myIntPtr = nullptr; // sets the pointer to point to null until reassigned


	// boolean example
	bool* myBoolPtr = new bool(true);

	cout << boolalpha << *myBoolPtr << endl;

	delete myBoolPtr;

	myBoolPtr = nullptr;
}