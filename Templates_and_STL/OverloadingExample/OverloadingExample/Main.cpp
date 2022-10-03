#include <iostream>
#include "Rectangle.h"
using namespace std;

/*
	Simple example of operator overloading using the previous rectangle objects
*/
int main() {
	Rectangle rect1(10, 20);
	Rectangle rect2(50, 100);
	Rectangle rect3(10, 20);
	Rectangle resultRect;

	resultRect = rect1 + rect2;

	cout << "(rect1 == rect3)? " << boolalpha << (rect1 == rect3) << endl;
	
	cout << "Result rectangle length * width: " << resultRect.getLength() << " * " << resultRect.getWidth() << endl;
	cout << "Result rectangle area: " << resultRect.area() << endl;
}