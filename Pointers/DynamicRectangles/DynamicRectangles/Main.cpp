#include <iostream>
#include "Rectangle.h"

using namespace std;

/*
	Mini project to create an array of pointers to rectangle objects
*/
int main() {
	Rectangle* rectangleArray[3]; // create array of pointers
	
	rectangleArray[0] = new Rectangle(5.0, 2.0);
	rectangleArray[1] = new Rectangle(3.14, 7.8);
	rectangleArray[2] = new Rectangle(17.93, 31.46);

	for (Rectangle* ptr : rectangleArray) { // loop to print the area and perimeter of each rectangle
		cout << "Area = " << ptr->area() << endl;
		cout << "Perimeter = " << ptr->perimeter() << endl;
		cout << endl;
	}

	for (Rectangle* ptr : rectangleArray) { // loop to return the memory
		delete ptr;
	}
}