#include <iostream>
#include <stdexcept>

using namespace std;

/*
	Simple project that throws and handles a out_of_range exception for calculating grades
	(using an american grades example)
*/
char getLetterGrade(int percentage);

int main() {
	try {
		int score1 = 75;
		int score2 = 98;
		int score3 = 50;
		int score4 = 110;

		cout << "A percentage score of " << score1 << " receives a(n) " << getLetterGrade(score1) << endl;
		cout << "A percentage score of " << score2 << " receives a(n) " << getLetterGrade(score2) << endl;
		cout << "A percentage score of " << score3 << " receives a(n) " << getLetterGrade(score3) << endl;
		cout << "A percentage score of " << score4 << " receives a(n) " << getLetterGrade(score4) << endl;
	}
	catch (out_of_range& err) {
		cout << err.what() << endl;
	}
	
}

char getLetterGrade(int percentage) {
	if (percentage < 0 || percentage > 100) {
		throw out_of_range("The percentage score must in the range 0-100");
	}
	else if (percentage <= 59) {
		return 'F';
	}
	else if (percentage <= 69) {
		return 'D';
	}
	else if (percentage <= 79) {
		return 'C';
	}
	else if (percentage <= 89) {
		return 'B';
	}
	else {
		return 'A';
	}
}