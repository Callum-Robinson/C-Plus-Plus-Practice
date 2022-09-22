#include <iostream>
using namespace std;

int main() {

	// Prompt user for age AND gender
	// If F over 60 qualify for discount

	int age;
	char gender;

	cout << "Enter your age:" << endl;
	cin >> age;

	cout << "Enter M for Male, F for Female or O for other" << endl;
	cin >> gender;

	if ((gender == 'F' || gender == 'f') && age >= 60) {
		cout << "You qualify" << endl;
	}
	else {
		cout << "Sorry you do not qualify" << endl;
	}

	return 0;
}