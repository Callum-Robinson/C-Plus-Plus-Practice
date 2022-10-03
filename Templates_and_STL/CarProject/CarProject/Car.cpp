#include "Car.h"

Car::Car(string colour, int numDoors) {
	this->colour = colour;
	this->numDoors = numDoors;
}

string Car::getColour() const {
	return colour;
}

int Car::getNumDoors() const {
	return numDoors;
}