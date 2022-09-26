#include <iostream>
#include "Rectangle.h"

using namespace std;

/*
	Very simple Rectangle class example
*/
int main() {
	Rectangle r1;
	Rectangle r2(5.0, 2.0);

	cout << "r1's area = " << r1.area() << endl;
	cout << "r1's perimeter = " << r1.perimeter() << endl << endl;
	cout << "r2's area = " << r2.area() << endl;
	cout << "r2's perimeter = " << r2.perimeter() << endl << endl;

	r1.setLength(42);
	r1.setWidth(26);

	cout << "r1's length is now: " << r1.getLength() << endl;
	cout << "r1's width is now: " << r1.getWidth() << endl;
	cout << "r1's new area = " << r1.area() << endl;
	cout << "r1's new perimeter = " << r1.perimeter() << endl;
}