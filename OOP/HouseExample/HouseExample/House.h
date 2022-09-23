#ifndef HOUSE_H // include guards
#define HOUSE_H

#include <string>
using namespace std;

class House {
public:
	void setNumStories(int numStories);
	
	void setNumWindows(int numWindows);

	void setColour(string colour);

	int getNumStories() const;

	int getNumWindows() const;

	string getColour() const;

	void printHouseData();

private:
	int numStories;
	int numWindows;
	string colour;
};

#endif