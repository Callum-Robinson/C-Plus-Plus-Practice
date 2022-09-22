#include <iostream>
using namespace std;

int main() {

	// Basic loop getting positive numbers for the user and summing them until a neagtive is entered
	double input;
	double sum = 0;
	cout << "Please enter a positive number to add to sum or negative to end" << endl;
	cin >> input;

	while (input >= 0) {
		sum += input;
		cout << "Please enter a positive number to add to sum or negative to end" << endl;
		cin >> input;
	}

	cout << "The total of the number you have entered is: " << sum << endl;

	return 0;
}