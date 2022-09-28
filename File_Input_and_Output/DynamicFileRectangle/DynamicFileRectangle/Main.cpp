#include <iostream>
#include <fstream>
#include <vector>
#include "Rectangle.h"

using namespace std;

void populateVector(ifstream& input, vector<Rectangle*>& ptrVector);
void printData(ofstream& output, vector<Rectangle*>& ptrVector);
void clearVector(vector<Rectangle*>& ptrVector);

/*
	Task to:
	- take length and width data from a file
	- create pointers to rectnagle objects using this data
	- print the area and perimeter of each to an output file
	- clean up the memory of the pointers after
*/
int main() {
	ifstream input;
	ofstream output;
	vector<Rectangle*> ptrVector;

	input.open("rectangles.txt");
	output.open("output.txt");

	if (!input) { // checl if input stream setup correctly
		cout << "Error opening input file" << endl;
		return 1;
	}

	populateVector(input, ptrVector); // call populate function
	printData(output, ptrVector); // call output function
	clearVector(ptrVector); // call clear function

	input.close(); // close both
	output.close();// files
}

void populateVector(ifstream& input, vector<Rectangle*>& ptrVector) {
	int length;
	int width;

	while (!input.eof()) { // while not at the end of the input file
		input >> length;
		input >> width;
		ptrVector.push_back(new Rectangle(length, width)); // add a new recntagle pointer to vector
	}
}

void printData(ofstream& output, vector<Rectangle*>& ptrVector) {
	for (Rectangle* ptr : ptrVector) { // for each pointer output the area and perimeter to a file
		output << "Area: " << ptr->area() << "  Perimeter: " << ptr->perimeter() << endl;
	}
}

void clearVector(vector<Rectangle*>& ptrVector) {
	for (Rectangle* ptr : ptrVector) {
		delete ptr; // return each pointers memory
	}

	ptrVector.clear();
}