#include "House.h"
#include <iostream>

House::House() {
	this->numStories = 1;
	this->numWindows = 4;
	this->colour = "white";
}

House::House(int numStories, int numWindows, string colour) {
	this->numStories = numStories;
	this->numWindows = numWindows;
	this->colour = colour;
}

House::~House() {
	cout << "The " << colour << " house with " << numStories << " stories and "
		<< numWindows << " windows is being destroyed" << endl;
}

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

void House::print() const {
	cout << "This house has " << numStories << " stories, "
		<< numWindows << " windows and is " << colour << endl;
}