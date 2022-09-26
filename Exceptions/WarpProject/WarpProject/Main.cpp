#include <iostream>
#include "WarpDriveOverheating.h"

using namespace std;
/*
	Simple project to create, throw and handle a custom exception
*/
void warpTest(int temp);

int main() {
	try {
		for (int i = 30; i <= 100; i += 10) { // used for loop to quickly run through some sample temperatures
			warpTest(i);
		}
	}
	catch (WarpDriveOverheating& err) {
		cout << err.what() << endl;
	}
}

void warpTest(int temp) {
	if (temp > 80) {
		throw WarpDriveOverheating();
	}
	else {
		cout << "Temperature currently at " << temp << " jumping again" << endl;
	}
}