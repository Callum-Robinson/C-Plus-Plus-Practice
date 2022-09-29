#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal { // the class is abstract due to containing a pure virtual function
public:
	Animal(string name, double weight);
	string getName() const;
	void setName(string name);
	double getWeight() const;
	void setWeight(double weight);
	virtual string makeNoise() const = 0; // virtual and set to 0 so it is abstract
	virtual string eat() const = 0;

private:
	string name;
	double weight;
};

#endif // !ANIMAL_H
