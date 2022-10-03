#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

/*
	Simple exercise using the count algorithm for a D20 example
	And including an example of replace
*/

void fillVector(vector<int>& myVector);
void printVector(const vector<int>& myVector);
void countCritsAndFails(const vector<int>& myVector);

int main() {
	vector<int> myVector;
	fillVector(myVector);

	printVector(myVector);
	cout << endl;
	countCritsAndFails(myVector);



	/*
		An example of replace
	*/
	/*cout << endl << "Replace all 1s with 0s" << endl;
	replace(myVector.begin(), myVector.end(), 1, 0);
	printVector(myVector);*/
}

/*
	Fills vector with random numbers (1 - 20)
*/
void fillVector(vector<int>& myVector) {
	srand(time(nullptr)); //seed
	int temp;

	for (int i = 0; i < 50; i++) {
		temp = rand() % 20 + 1;
		myVector.push_back(temp);
	}
}

/*
	Prints each 'roll' in the vector
*/
void printVector(const vector<int>& myVector) {
	cout << "The Rolls:" << endl;
	for (int element : myVector) {
		cout << element << endl;
	}
}

/*
	Counts all 1s and 20s and prints
*/
void countCritsAndFails(const vector<int>& myVector) {
	int numNat20s = count(myVector.begin(), myVector.end(), 20);
	cout << "Number of critical hits = " << numNat20s << endl;

	int numNat1s = count(myVector.begin(), myVector.end(), 1);
	cout << "Number of critical fails = " << numNat20s << endl;
}