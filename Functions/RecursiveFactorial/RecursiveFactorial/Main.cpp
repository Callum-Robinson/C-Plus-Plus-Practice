#include <iostream>

using namespace std;

/*
	Simple recursive exercise creating a recursive function to calculate the factorial 
	of a given integer
*/
int factorial(int x);

int main() {
	cout << "6! = " << factorial(6) << endl;
	cout << "10! = " << factorial(10) << endl;
}

int factorial(int x) {
	if (x > 1) {
		return x * factorial(x - 1);
	}

	return 1;
}