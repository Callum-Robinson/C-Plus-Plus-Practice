#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

/*
	Simple inheritance and polymorphism exercise
*/
int main() {
	Dog dog("Frankie", 40, "Dachshund");

	cout << "Dog's name: " << dog.getName() << endl;
	cout << "Dog's weight: " << dog.getWeight() << endl;
	cout << "Dog's breed: " << dog.getBreed() << endl;
	cout << "Dog's noise: " << dog.makeNoise() << endl;
	dog.digHole();
	cout << endl;

	// Polymorphism 
	cout << "Polymorphism Example" << endl;
	Animal* dogPtr = new Dog("Zack", 80, "Labrador");
	// Use of the virtual keyword in Animal.h gives us the correct makeNoise at runtime
	cout << dogPtr->getName() << " " << dogPtr->makeNoise() << "s " << endl;
	cout << "and thinks " << dogPtr->eat() << endl;

	delete dogPtr;
	dogPtr = nullptr;
}