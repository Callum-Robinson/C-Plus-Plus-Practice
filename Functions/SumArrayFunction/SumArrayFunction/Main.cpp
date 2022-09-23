#include <iostream>

using namespace std;

/*
	Simple project to create a function that sums the elements in an array and returns the sum
*/
int sumArray(int intArray[], int size);

int main() {
	int myArray[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int size = 10;

	cout << "The sum of the array is: " << sumArray(myArray, size) << endl;
}

int sumArray(int intArray[], int size) {
	int sum = 0;
	// could also be done with an enchanced for loop
	for (int i = 0; i < size; i++) {
		sum += intArray[i];
	}

	return sum;
}