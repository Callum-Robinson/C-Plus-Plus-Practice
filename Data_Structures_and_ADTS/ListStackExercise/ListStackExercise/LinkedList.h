#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include "List.h"
using namespace std;

/*
	Node class
*/
class Node {

public:
	Node(int data, Node* next) {
		this->data = data;
		this->next = next;
	}

	int getData() const {
		return data;
	}

	void setData(int data) {
		this->data = data;
	}

	Node* getNext() const {
		return next;
	}

	void setNext(Node* next) {
		this->next = next;
	}

private:
	int data;
	Node* next;
};


/*
	Linked List class
*/
class LinkedList : public List {

public:
	LinkedList() {
		mNumElements = 0;
		mHead = nullptr;
	}

	virtual ~LinkedList() {
		makeEmpty();
	}

	/*
		Add entry to end
	*/
	void add(int newEntry) {
		Node* newNode = new Node(newEntry, mHead); // next = mHead
		mHead = newNode;

		mNumElements++;
	}

	/*
		Add entry at given position
	*/
	void add(int newEntry, int position) {
		Node* newNode = new Node(newEntry, mHead);

		if (position >= mNumElements + 1 || position < 0) {
			cout << "Error: Cannot add at specified position" << endl;
			return;
		}

		if (position == 0) { // beginning
			mHead = newNode;
		}
		else {
			Node* nodeBefore = mHead;
			Node* nodeAfter;

			for (int i = 0; i < position - 1; i++) {
				nodeBefore = nodeBefore->getNext();
			}

			nodeAfter = nodeBefore->getNext();
			newNode->setNext(nodeAfter);
			nodeBefore->setNext(newNode);
		}

		mNumElements++;
	}

	/*
		Set an element at a given position
	*/
	void set(int newEntry, int position) {
		Node* walker = mHead;
		int index = 0;

		if (position >= mNumElements || position < 0) {
			cout << "Error: Cannot set at specified position" << endl;
			return;
		}

		for (int i = 0; i < position; i++) {
			walker = walker->getNext();
		}

		walker->setData(newEntry);
	}

	/*
		See if a given entry is in the list (uses the find method)
	*/
	bool contains(int entry) const {
		return (find(entry) != -1);
	}

	/*
		See if the given entry is in the list and at what position
	*/
	int find(int entry) const {
		int foundIndex = -1;

		int indexCounter = 0;
		Node* walker = mHead;

		while (walker != nullptr) {
			if (walker->getData() == entry) {
				foundIndex = indexCounter;
				break;
			}

			walker = walker->getNext();
			indexCounter++;
		}
		return foundIndex;
	}

	/*
		Remove an entry at a given postion and return the removed data
	*/
	int remove(int position) {
		if (position >= mNumElements || position < 0) {
			cout << "Error: Cannot remove at specified position" << endl;
			return 0;
		}

		int dataToReturn = 0;

		if (position == 0) {
			Node* temp = mHead;
			dataToReturn = temp->getData();
			mHead = mHead->getNext();
			delete temp;
		}
		else {
			Node* nodeBefore = mHead;
			Node* nodeToRemove;
			Node* nodeAfter;

			for (int i = 0; i < position - 1; i++) {
				nodeBefore = nodeBefore->getNext();
			}

			nodeToRemove = nodeBefore->getNext();
			dataToReturn = nodeToRemove->getData();
			nodeAfter = nodeToRemove->getNext();

			nodeBefore->setNext(nodeAfter);
			delete nodeToRemove;
		}

		mNumElements--;

		return dataToReturn;
	}

	/*
		Empty the list and set the size to 0
	*/
	void makeEmpty() {
		Node* temp;
		while (mHead != nullptr) {
			temp = mHead;
			mHead = mHead->getNext();
			delete temp;
		}

		mNumElements = 0;
	}

	/*
		Return the size of the list
	*/
	int size() const {
		return mNumElements;
	}

	/*
		Check if the list is empty
	*/
	bool isEmpty() const {
		return mNumElements == 0;
	}

	/*
		Print the list
	*/
	void printList() const {
		Node* walker = mHead;

		while (walker != nullptr) {
			cout << walker->getData() << endl;
			walker = walker->getNext();
		}
	}


private:
	Node* mHead;
	int mNumElements;
};


#endif // !LINKED_LIST_H

