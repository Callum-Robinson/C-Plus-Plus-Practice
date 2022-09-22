#include <iostream>

using namespace std;

/*
	Very simple task for populating and printing an array of numbers
*/
int main() {
	const int SIZE = 10;
	int numbers[SIZE];

	for (int i = 0; i < SIZE; i++) {
		numbers[i] = i + 1;
	};

	for (int number : numbers) {
		cout << number << endl;
	}

}