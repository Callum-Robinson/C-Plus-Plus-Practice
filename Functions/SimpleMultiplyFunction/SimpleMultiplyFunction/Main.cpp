#include <iostream>

using namespace std;

/*
	Simple project to create a function that takes three parameters and returns the product
	- Adding the extra to take the integers from input
*/

int product(int x, int y, int z);

int main() {
	int x, y, z;
	cout << "Please enter 3 integers to return their product" << endl;
	cout << "Integer 1: ";
	cin >> x;
	cout << "Integer 2: ";
	cin >> y;
	cout << "Integer 3: ";
	cin >> z;

	cout << "The product is: " << product(x, y, z) << endl;
}

int product(int x, int y, int z) {
	return x * y * z;
}