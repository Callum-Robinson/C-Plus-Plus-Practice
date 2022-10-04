#include "Alien.h"
#include <cstdlib>
#include <ctime>
using namespace std;

/*
	Constructor
*/
Alien::Alien(int weight, int height, char gender) {
	this->weight = weight;
	this->height = height;
	this->gender = gender;
}

/*
	Getters
*/
int Alien::getWeight() const{
	return weight;
}

int Alien::getHeight() const{
	return height;
}

char Alien::getGender() const{
	return gender;
}

int Alien::getPrestige() const{
	int genderPoints;

	if (gender == 'M' || gender == 'm') {
		genderPoints = 2;
	}
	else {
		genderPoints = 3;
	}

	return height + weight + genderPoints;
}

/*
	Operators
*/
bool Alien::operator==(Alien& other) const {
	return getPrestige() == other.getPrestige();
}

bool Alien::operator!=(Alien& other) const {
	return getPrestige() != other.getPrestige();
}

bool Alien::operator>(Alien& other) const {
	return getPrestige() > other.getPrestige();
}

bool Alien::operator>=(Alien& other) const {
	return getPrestige() >= other.getPrestige();
}

bool Alien::operator<(Alien& other) const {
	return getPrestige() < other.getPrestige();
}

bool Alien::operator<=(Alien& other) const {
	return getPrestige() <= other.getPrestige();
}

Alien Alien::operator+(Alien& other) const {
	int childWeight = weight + other.weight;
	int childHeight = height + other.height;
	char childGender;
	
	srand(time(nullptr));
	int randNum = rand() % 10 + 1;
	
	if (randNum < 4) {
		childGender = 'F';
	}
	else {
		childGender = 'M';
	}

	return Alien(childHeight, childWeight, childGender);
}

void Alien::operator=(Alien& other) {
	this->weight = weight;
	this->height = height;
	this->gender = gender;
}