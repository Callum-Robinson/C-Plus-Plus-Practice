#include <iostream>
#include <vector>

using namespace std;

/*
	Simple vector data project
	- Take standard input
	- Take non-negative integers and store them in a vector
	- Loop until a negative integer is entered
	- Print twice the values of the vector
	- added bonus check to see if vector is empty
*/
int main() {
	vector<int> numbers;
	int input;

	cout << "Enter a non-negative integer to add it to the vector or a negative to exit:" << endl;
	cin >> input;

	// Loop until a negative integer is entered
	while (input >= 0) {
		numbers.push_back(input);
		cout << "Enter a non-negative integer to add it to the vector or a negative to exit:" << endl;
		cin >> input;
	}

	// bonus check to see if vector is empty
	if (numbers.size() == 0) {
		cout << "You didn't enter any non-negative integers" << endl;
	}
	else
	{
		// Print twice the values of the vector
		cout << endl << "The doubles of the non-negative integers you entered:" << endl;
		for (int number : numbers) {
			cout << number << " -> " << number * 2 << endl;
		}
	}
}