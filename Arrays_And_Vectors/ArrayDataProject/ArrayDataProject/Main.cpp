#include <iostream>
#include <array>

using namespace std;

/*
	Array data simple project
	- Take 5 integers from input and read into array
	- Loop through the array and print twice their amount
*/
int main() {
	cout << "Enter 5 integers:" << endl;
	int numbers[5];

	// Take 5 integers from input and read into array
	for (int i = 0; i < 5; i++) {
		cout << "Number " << i << ": ";
		cin >> numbers[i];
	}

	// Loop through the array and print twice their amount
	cout << endl << "The double of your integers:" << endl;
	for (int number : numbers) {
		cout << number * 2 << endl;
	}
}