#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
	Simple vector practice
	- create vector with 5 names (pets for this example)
	- insert the lecturers name as the third element (John Baugh)
	- remove the last element of the vector
	- print the elements in the vector
*/
int main() {
	// create vector with 5 names (pets for this example)
	vector<string> names(5);
	names[0] = "Frankie";
	names[1] = "Pretzel";
	names[2] = "Moby";
	names[3] = "Zack";
	names[4] = "Rocco";

	// insert the lecturers name as the third element (John Baugh)
	names.insert(names.begin() + 2, "John Baugh");

	// remove the last element of the vector
	names.pop_back();

	// print the elements in the vector
	for (string name : names) {
		cout << name << endl;
	}
}