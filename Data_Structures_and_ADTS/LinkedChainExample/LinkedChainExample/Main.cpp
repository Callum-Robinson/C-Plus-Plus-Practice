#include <iostream>
#include "Node.h"
using namespace std;

/*
	A simple linked chain example
*/

Node* createChain();
void deleteChain(Node*& head);
void printChain(Node* head);

int main() {
	Node* theHead;

	theHead = createChain();

	printChain(theHead);
	deleteChain(theHead);
}

Node* createChain() {
	Node* head = nullptr;

	for (int i = 0; i < 25; i++) {
		head = new Node(i, head);
	}

	return head;
}

void deleteChain(Node*& head) {
	Node* nodeToDelete;

	while (head != nullptr) {
		nodeToDelete = head;
		head = head->getNext();
		delete nodeToDelete;
	}
}

void printChain(Node* head) {
	Node* walker = head;
	int counter = 0;

	while (walker != nullptr) {
		cout << walker->getData() << endl;
		walker = walker->getNext();
		counter++;
	}
	cout << "The size of the chain is " << counter;
}