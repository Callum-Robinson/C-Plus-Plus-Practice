#include "House.h"

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