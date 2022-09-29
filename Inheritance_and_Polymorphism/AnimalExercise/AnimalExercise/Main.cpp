#include <iostream>
#include "Animal.h"
#include "Dog.h"

using namespace std;

/*
	Simple inheritance exercise
*/
int main() {
	Dog dog("Frankie", 40, "Dachshund");

	cout << "Dog's name: " << dog.getName() << endl;
	cout << "Dog's weight: " << dog.getWeight() << endl;
	cout << "Dog's breed: " << dog.getBreed() << endl;
	cout << "Dog's noise: " << dog.makeNoise() << endl;
	dog.digHole();
}