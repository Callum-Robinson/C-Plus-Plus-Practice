#include <iostream>

using namespace std;

void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();

void noChange(const double* const doublePtr);

/*
	Example to show the different scenarios of constants when using pointers
*/
int main() {
	noConst();
	cout << endl;

	cp2ncd();
	cout << endl;

	ncp2cd();
	cout << endl;

	cp2cd();
	cout << endl;

	
	// challenge addtion
	double* doublePtr = new double(3.14);
	noChange(doublePtr);
	delete doublePtr;
}

// neither pointer or data is a constant
void noConst() {
	cout << "In the no constant example" << endl;

	int* intPtr = new int(50);
	cout << "\toriginal value: " << *intPtr << endl;

	*intPtr = 100;
	cout << "\tchanged data: " << *intPtr << endl;

	delete intPtr; // delete current dynamic int

	intPtr = new int(125);
	cout << "\tnew integer value: " << *intPtr << endl;

	delete intPtr;
}

// pointer is constant (and cannot be changed)
// data is not constant
void cp2ncd() {
	cout << "In the constant pointer and non-constant data example" << endl;

	int* const intPtr = new int(100);
	cout << "\toriginal value: " << *intPtr << endl;

	*intPtr = 250;
	cout << "\tnew integer value: " << *intPtr << endl;

	delete intPtr;

	//intPtr = new int(222); // error as the ptr is constant
}

// pointer is not constant
// data is constant
void ncp2cd() {
	cout << "In the non-constant pointer and constant data" << endl;

	const int* intPtr = new int(500);
	cout << "\toriginal value: " << *intPtr << endl;

	delete intPtr;

	intPtr = new int(100);
	cout << "\tnew integer: " << *intPtr << endl;

	//*intPtr = 1500; // error as the data is constant

	delete intPtr;
}

void cp2cd() {
	cout << "In the example with a constant pointer and constant data" << endl;
	const int* const intPtr = new int(5000);

	cout << "\toriginal value: " << *intPtr << endl;

	// no changes can be made
	// etc.
	// *intPtr = 1212 // error as data is constant
	// intPtr = new int(1212) // error as ptr is constant
	
	delete intPtr;
}


// challenge addition
void noChange(const double* const doublePtr) {
	cout << "The unchangable double is: " << *doublePtr << endl;
}