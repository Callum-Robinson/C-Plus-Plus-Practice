#include <iostream>
#include "Dog.h"

using namespace std;

/*
	Simple example of pointers to (Dog) objects 
*/
int main() {
	Dog* myDogPtr = new Dog("Frankie", "Dachshund");
	Dog* yourDogPtr = new Dog("Zack", "Labrador");

	cout << "using arrow member access" << endl;
	cout << myDogPtr->getName() << " - " << myDogPtr->getBreed() << endl;
	cout << yourDogPtr->getName() << " - " << yourDogPtr->getBreed() << endl;
	cout << endl;

	cout << "using dereferencing and the dot opertaor" << endl;
	cout << (*myDogPtr).getName() << " - " << (*myDogPtr).getBreed() << endl;
	cout << (*yourDogPtr).getName() << " - " << (*yourDogPtr).getBreed() << endl;

	delete myDogPtr;
	delete yourDogPtr;

	myDogPtr = nullptr;
	yourDogPtr = nullptr;
}