#include <iostream>
#include "Circle.h"

using namespace std;

/*
	Mini project to create a dyanmic array of pointers to (circle) objects
*/
int main() {
	int quantity = 1;
	double radius = 1;

	// take number of circles from console
	cout << "How many circles would you like: ";
	cin >> quantity;
	cout << endl;

	Circle** circleArray = new Circle* [quantity]; // create dynamic array of pointers

	// for each circle take the radius and create the pointer in the array
	for (int i = 0; i < quantity; i++) {
		cout << "What is the radius of circle " << i + 1 << ": " << endl;
		cin >> radius;
		circleArray[i] = new Circle(radius);
	}
	cout << endl;

	// for each circle print the circumference and area
	for (int i = 0; i < quantity; i++) {
		cout << "Circle " << i + 1 << endl;
		cout << "Circumference: " << circleArray[i]->circumference() << endl;
		cout << "Area: " << circleArray[i]->area() << endl;
		cout << endl;
	}

	// delete the individual circles
	for (int i = 0; i < quantity; i++) {
		delete circleArray[i];
		circleArray[i] = nullptr;
	}
	// delete array
	delete[] circleArray;
}