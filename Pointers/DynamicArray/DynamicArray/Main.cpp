#include <iostream>

using namespace std;

/*
	Simple example of dyanmic arrays
*/
int main() {
	int size = 0;

	// With dynamic can set the array size at runtime
	cout << "How big would you like the array?" << endl;
	cin >> size;
	cout << endl;

	int* myArray = new int[size];

	for (int i = 0; i < size; i++) {
		myArray[i] = i * 2; // We do not need additional dereferencing
	}
	cout << "The array:" << endl;
	for (int i = 0; i < size; i++) {
		cout << myArray[i] << endl;
	}

	delete[] myArray;
}