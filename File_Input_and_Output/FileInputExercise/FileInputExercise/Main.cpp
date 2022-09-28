#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

/*
	Simple exercise reading integers from a file and summing them together
	Additional task of storing the numbers which used a vector in this case
*/
int main() {
	ifstream infile;
	infile.open("input.txt");

	int inputNum;
	int sum = 0;
	vector<int> numbers;

	// while it is NOT the end of the file read the number in
	while (!infile.eof()) {
		infile >> inputNum;
		sum += inputNum;
		numbers.push_back(inputNum); // add number to vector
	}

	cout << "The numbers from the file: " << endl;
	for (int number : numbers) {
		cout << number << endl;
	}
	cout << endl;
	cout << "Sum of the numbers is: " << sum << endl;

	infile.close();
}