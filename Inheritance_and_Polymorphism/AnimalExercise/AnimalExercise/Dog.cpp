#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog(string name, double weight, string breed) : Animal(name, weight) {
	this->breed = breed;
}

string Dog::getBreed() const {
	return breed;
}

void Dog::digHole() const {
	cout << "Digging hole" << endl;
}

string Dog::makeNoise() const {
	return "Bork";
}

string Dog::eat() const {
	return "I love dog food";
}