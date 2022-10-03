#include <iostream>
#include <memory>
using namespace std;

/*
	Simple example of using the unique smart pointer
*/

int main() {
	unique_ptr<double> myDubPtr = make_unique<double>();

	const int SIZE = 5;
	auto myArray = make_unique<int[]>(SIZE);

	*myDubPtr = 3.14;
	cout << "pointer value: " << *myDubPtr << endl;

	unique_ptr<double> otherPtr = move(myDubPtr);
	cout << "other pointer is: " << *otherPtr << endl << endl;


	for (int i = 0; i < SIZE; i++) {
		myArray[i] = i * 2;
	}
	for (int i = 0; i < SIZE; i++) {
		cout << myArray[i] << endl;
	}
}