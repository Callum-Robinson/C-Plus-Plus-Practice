#include <iostream>

using namespace std;

/*
*	Introduction example to C++ pointers
*/
int main() {
	int myInt = 120; // integer declared and initalised
	int* somePtr = &myInt; // pointer set to the address of the integer

	cout << "myInt is originally: " << myInt << endl;
	cout << "The pointer holds the value: " << somePtr << endl;
	cout << "The pointer derefenced: " << *somePtr << endl;

	*somePtr = 240;

	cout << "myInt is now: " << myInt << endl;

	cout << endl;

	double myDouble = 3.14;
	double* doublePtr = &myDouble;

	cout << "The double pointer holds the address: " << doublePtr << endl;
	cout << "The double pointer points to the value: " << *doublePtr << endl;
}