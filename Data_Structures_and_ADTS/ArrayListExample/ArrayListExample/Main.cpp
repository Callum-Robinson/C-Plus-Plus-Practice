#include <iostream>
#include "ArrayList.h"
using namespace std;

int main() {
	ArrayList myList;

	for (int i = 0; i < 15; i++) {
		myList.add(i * 10);
	}

	myList.printList();
	cout << "Size is " << myList.size() << endl;
	cout << endl << endl;

	myList.add(555, 15);
	myList.printList();
	cout << "Size is now " << myList.size() << endl;
	cout << endl << endl;

	myList.set(987, 3);
	myList.printList();
	cout << endl << endl;

	// try to add above max capacity
	myList.add(173);
}