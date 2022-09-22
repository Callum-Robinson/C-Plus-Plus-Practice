#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
	Parallel vector project tracking names and ages
	- Use two vectors
	- Take 5 names and ages from standard input
	- Print out a sentence for each person
*/
int main() {
	vector<string> names;
	vector<int> ages;
	string nameInput;
	int ageInput;
	int noOfPeople = 5;

	for (int i = 0; i < noOfPeople; i++) {
		// Take names and add to vector
		cout << "Enter a name: ";
		getline(cin , nameInput); // Can have a full name
		names.push_back(nameInput);

		// Take ages and add to vector
		cout << "And their age: ";
		cin >> ageInput;
		cin.get();
		ages.push_back(ageInput);
	}

	cout << endl;

	// Print out a sentence for each person
	for (int i = 0; i < noOfPeople; i++) {
		cout << names[i] << " is " << ages[i] << " years old" << endl;
	}
}