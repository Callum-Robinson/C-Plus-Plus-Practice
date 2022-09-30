#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

/*
	Simple inheritance and polymorphism exercises
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

	cout << endl;


	// Cat exercise
	cout << "Now we have a cat" << endl;
	Animal* catPtr = new Cat("Pablo", 3);
	cout << catPtr->getName() << " " << catPtr->makeNoise() << "s" << endl;
	cout << "Feed the cat: " << catPtr->eat() << endl;

	((Cat*)catPtr)->chaseMouse(); // Note the casting to a Cat pointer to access the child method
	(reinterpret_cast<Cat*>(catPtr))->chaseMouse(); // An alternate way of casting

	delete catPtr;
	catPtr = nullptr;
}