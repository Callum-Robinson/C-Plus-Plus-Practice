#include <iostream>
#include <string>
#include "House.h"
using namespace std;

/*
	Simple OOP exerice creating and implementing a House object
*/
void printHouseData(const House& house);

int main() {
	House myHouse;
	House yourHouse;

	myHouse.setNumStories(2);
	myHouse.setNumWindows(6);
	myHouse.setColour("red");

	yourHouse.setNumStories(3);
	yourHouse.setNumWindows(8);
	yourHouse.setColour("grey");

	printHouseData(myHouse);
	printHouseData(yourHouse);
}

void printHouseData(const House& house) {
	cout << "This house has " << house.getNumStories() << " stories, "
		<< house.getNumWindows() << " windows and is " << house.getColour() << endl;
}