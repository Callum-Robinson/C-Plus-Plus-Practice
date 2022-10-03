#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
public: 
	Car(string colour, int numDoors);
	string getColour() const;
	int getNumDoors() const;

private:
	string colour;
	int numDoors;
};

#endif // !CAR_H

