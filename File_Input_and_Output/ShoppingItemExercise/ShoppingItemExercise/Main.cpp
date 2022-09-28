#include <iostream>
#include <string>
#include <fstream>
#include "ItemFrequenices.h"
using namespace std;

/*
	Exercise to read in a shopping list and add the data in to two vectors
	one with the items names and another with the frequency the appear
*/
int main() {
	ItemFrequencies itemFrequencies;
	ifstream input;
	string current;

	input.open("shopping.txt");

	if (!input) { // check if input setup correctly
		cout << "Error opening data file" << endl;
		return 1;
	}

	while (!input.eof()) { // while not at the end of file take in item from input and call addItem
		input >> current;
		itemFrequencies.addItem(current);
	}

	itemFrequencies.printFrequencies();

	input.close();
}