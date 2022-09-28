#include <iostream>
#include <fstream>

using namespace std;

/*
	Simple task to read in integers from a file, double them and then output the result to
	the console and an output file
*/
int main() {
	ifstream input;
	ofstream output;

	int currentIn;
	int currentOut;

	input.open("input.txt");
	output.open("output.txt");

	// check file opens correctly
	if (!input) {
		cout << "Error open file!" << endl;
		return 1;
	}

	while (!input.eof()) {
		input >> currentIn;
		currentOut = currentIn * 2;
		cout << currentOut << endl;
		output << currentOut << endl;
	}


	input.close();
	output.close();
}