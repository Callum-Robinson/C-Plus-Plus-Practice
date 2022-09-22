#include <iostream>

using namespace std;

/*
	Simple project to practice pass by reference
	- a function that takes two parameters:
	- input is passed by value
	- output is passed by reference as input * 3
*/

void tripleIt(int input, int& output);

int main() {
	int input = 5;
	int output = 0;

	cout << "The output is originally: " << output << endl;
	tripleIt(input, output);
	cout << "The output is now: " << output << endl;
}

void tripleIt(int input, int& output) {
	output = input * 3;
}