#ifndef HOUSE_H // include guards
#define HOUSE_H

#include <string>
using namespace std;

class House {
public:
	House();
	House(int numStories, int numWindows, string colour);
	~House();

	void setNumStories(int numStories);
	
	void setNumWindows(int numWindows);

	void setColour(string colour);

	int getNumStories() const;

	int getNumWindows() const;

	string getColour() const;

	void print() const;

private:
	int numStories;
	int numWindows;
	string colour;
};

#endif