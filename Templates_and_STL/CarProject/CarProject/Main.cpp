#include <iostream>
#include "Car.h"
#include <memory>
using namespace std;


/*
	Very simple exercise using a unique pointer
*/
int main() {
	auto myCar = make_unique<Car>("red", 4);

	cout << "My car is " << myCar->getColour() << " and has " << myCar->getNumDoors() << " doors" << endl;

}