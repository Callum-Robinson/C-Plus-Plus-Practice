#include "House.h"
#include <iostream>

void House::setNumStories(int numStories) {
	this->numStories = numStories;
}

void House::setNumWindows(int numWindows) {
	this->numWindows = numWindows;
}

void House::setColour(string colour) {
	this->colour = colour;
}

int House::getNumStories() const {
	return numStories;
}

int House::getNumWindows() const {
	return numWindows;
}

string House::getColour() const {
	return colour;
}

void House::printHouseData() {
	cout << "This house has " << numStories << " stories, "
		<< numWindows << " windows and is " << colour << endl;
}