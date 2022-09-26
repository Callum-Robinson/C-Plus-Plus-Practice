#include <iostream>
#include <string>
#include "House.h"
using namespace std;

/*
	Simple OOP exerice creating and implementing a House object
*/

int main() {
	House myHouse(2, 6, "red");
	House yourHouse(3, 8, "grey");

	/*myHouse.setNumStories(2);
	myHouse.setNumWindows(6);
	myHouse.setColour("red");

	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(8);
	yourHouse.setColour("grey");*/

	myHouse.print();
	yourHouse.print();
}
