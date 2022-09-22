#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	/*
	* Different take on a random dice roller
	* D20s rolled, output and the values are added to a sum
	* An average is displayed after the loop
	* If a 20 or 1 is rolled than extra text is diplayed
	*/

	// Random number generation with current EPOCH seed
	srand(time(nullptr));
	int sum = 0;
	int current;
	int average;
	int limit;

	cout << "---Lets get some D20 rolls!!---" << endl;

	// Bonus addition to set how many rolls through the user input
	cout << "How many rolls?" << endl;
	cin >> limit;

	for (int i = 0; i < limit; i++) {
		// dice roll
		current = rand() % 20 + 1;

		// output the roll
		cout << current;

		// 20 = a critical hit
		if (current == 20) {
			cout << " --CRITICAL HIT--";
		}

		// 1 = a critical failure
		if (current == 1) {
			cout << " --OH NO--";
		}
		cout << endl;

		// add value to sum
		sum += current;
	}

	// calculate the average roll
	average = sum / limit;
	cout << "The average roll was: " << average << endl;

	return 0;
}