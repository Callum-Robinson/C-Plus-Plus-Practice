#include <iostream>
#include "AngryCatException.h"

using namespace std;

/*
	Example creating a simple custom exception
*/
void giveTreats(int noOfTreats);
int main() {
	int noOfTreats = 0;
	cout << "How many treats do you have for the cat?" << endl;
	cin >> noOfTreats;

	try {
		giveTreats(noOfTreats);
	}
	catch(const AngryCatException& err) {
		cerr << err.what() << endl;;
	}
}

void giveTreats(int noOfTreats) {
	if (noOfTreats <= 0) {
		throw AngryCatException(); // custom thrown
	}
	else if(noOfTreats < 3) {
		throw AngryCatException("It demands more!"); // custom with parameter thrown
	}
	else {
		cout << "Happy Kitty" << endl;
	}
}