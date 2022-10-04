#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <iostream>
#include "List.h"

using namespace std;

class ArrayList : public List {
	
public:
	ArrayList(int s = 16) : MAX_SIZE(s) {
		mArray = new int[MAX_SIZE];
		numElements = 0;
	}

	void add(int newEntry) {
		if (numElements >= MAX_SIZE) {
			cout << "Cannot add any more elements. List is full." << endl;
			return;
		}

		mArray[numElements] = newEntry;
		numElements++;
	}

	void add(int newEntry, int position) {
		if (numElements >= MAX_SIZE) {
			cout << "Cannot add any more elements. List is full." << endl;
			return;
		}

		if (position < 0 || position > numElements) {
			cout << "Out of range with position" << endl;
			return;
		}

		// move elements after the insert over by 1
		for (int i = numElements; i > position; i--) {
			mArray[i] = mArray[i - 1];
		}

		mArray[position] = newEntry;

		numElements++;
	}

	void set(int newEntry, int position) {
		if (position < 0 || position > numElements) {
			cout << "Out of range with position" << endl;
			return;
		}

		mArray[position] = newEntry;
	}

	bool contains(int entry) const {
		for (int i = 0; i < numElements; i++) {
			if (mArray[i] == entry) {
				return true;
			}
		}

		return false;
	}

	int find(int entry) const {
		for (int i = 0; i < numElements; i++) {
			if (mArray[i] = entry) {
				return i;
			}
		}

		return -1;
	}

	int remove(int position) {
		int value = -1;

		if (position < 0 || position >= numElements) {
			cout << "Out of range with position" << endl;
			return value;
		}

		value = mArray[position];

		// close the 'gap' and reduce NumElements
		for (int i = position; i < numElements - 1; i++) {
			mArray[i] = mArray[i + 1];
		}
		numElements--;

		return value;
	}

	void makeEmpty() {
		numElements = 0;
	}

	int size() const {
		return numElements;
	}

	bool isEmpty() const {
		return numElements == 0;
	}

	void printList() const {
		for (int i = 0; i < numElements; i++) {
			cout << mArray[i] << endl;
		}
	}


private:
	int* mArray;
	const int MAX_SIZE;
	int numElements;
};



#endif // !ARRAYLIST_H