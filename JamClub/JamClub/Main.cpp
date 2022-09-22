#include <iostream>

using namespace std;
/*
	Jam of the month exercise
*/
int main() {

	char package;
	int noOfJams;
	int extraJams;
	int total;

	
	cout << "Which package did you buy?" << endl;
	cin >> package;
	cout << "How many jams did you buy?" << endl;
	cin >> noOfJams;

	switch (package) {
		
	case 'A':
	case 'a':
		total = 8;
		extraJams = noOfJams - 2;

		if (extraJams > 0) {
			total += (extraJams * 5);
		}

		cout << "Total cost is: " << total << endl;
		break;

	case 'B':
	case 'b':
		total = 12;
		extraJams = noOfJams - 4;

		if (extraJams > 0) {
			total += (extraJams * 4);
		}

		cout << "Total cost is: " << total << endl;
		break;

	case 'C':
	case'c':
		total = 15;
		extraJams = noOfJams - 6;

		if (extraJams > 0) {
			total += (extraJams * 3);
		}

		cout << "Total cost is: " << total << endl;
		break;

	default:
		cout << "Incorrect package no jams for you" << endl;
	}

	cout << "---Thank You---" << endl;


	return 0;
}