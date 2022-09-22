#include <iostream>

using namespace std;

/*
	Simple odds and evens project with an extra limit input
*/
int main() {
	// simple limit input for how many numbers
	int limit;
	cout << "How many numbers would you like?" << endl;
	cin >> limit;
	cout << endl;

	// checks if iterator value is odd or even
	cout << "---Odd or Evens---" << endl;
	for (int i = 0; i <= limit; i++) {
		if (i % 2 == 0) {
			cout << i << " is even" << endl;
		}
		else {
			cout << i << " is odd" << endl;
		}
	}

	return 0;
}