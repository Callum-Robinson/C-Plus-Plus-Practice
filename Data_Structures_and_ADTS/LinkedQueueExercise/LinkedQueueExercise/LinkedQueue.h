#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

#include <iostream>
#include "Queue.h"
using namespace std;

/*
	Node class
*/
class Node {
	
public:
	Node(int data, Node* next, Node* previous) {
		this->data = data;
		this->previous = previous;
		this->next = next;
	}

	int getData() const {
		return data;
	}

	void setData(int data) {
		this->data = data;
	}

	Node* getPrevious() const {
		return previous;
	}

	void setPrevious(Node* previous) {
		this->previous = previous;
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
	Node* previous;
};



/*
	Linked Queue class
*/
class LinkedQueue : public Queue {

public:
	LinkedQueue() {
		front = nullptr;
		back = nullptr;
	}

	void enqueue(int newEntry) {
		Node* newNode = new Node(newEntry, back, nullptr);

		if (isEmpty()) {
			front = newNode;
		}
		else {
			back->setPrevious(newNode);
		}
		back = newNode;
	}

	int dequeue() {
		int data = 0;

		if (!isEmpty()) {
			Node* nodeToRemove = front;
			
			data = front->getData();
			front = front->getPrevious();

			delete nodeToRemove;

			if (front == nullptr) {
				back = nullptr;
			}
			else {
				front->setNext(nullptr);
			}
		}
		else {
			cout << "Cannot dequeue from empty queue." << endl;
		}

		return data;
	}

	int peekFront() const {
		if (!isEmpty())
		{
			return front->getData();
		}

		cout << "Queue is empty." << endl;

		return 0;
	}

	bool isEmpty() const {
		return front == nullptr && front == back;
	}

	void makeEmpty() {
		while (!isEmpty()) {
			dequeue();
		}
	}

private:
	Node* front;
	Node* back;
};


#endif // !LINKED_QUEUE_H