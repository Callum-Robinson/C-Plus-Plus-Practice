#include <iostream>
#include <array>

using namespace std;

/*
	Simple two dimensional array practice
	- Create 2D array of integers
	- Print the array
	- Print the rows of the array reversed
*/
int main() {
	// Create 2D array of integers
	int nums[3][3]{
		{1, 2, 3}, {4, 5, 6}, {7, 8, 9}
	};

	// Print the array
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++) {
			cout << nums[row][col] << " ";
		}
		cout << endl;
	}

	cout << endl << endl;

	// Print the rows of the array reversed
	for (int row = 0; row < 3; row++) {
		for (int col = 2; col >= 0; col--) {
			cout << nums[row][col] << " ";
		}
		cout << endl;
	}
}