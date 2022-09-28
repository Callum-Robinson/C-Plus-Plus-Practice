#include <iostream>
#include <fstream>

using namespace std;

/*
	Task to take scores from a data file, make sure they are valid, then print the
	maximum, minimum and average values to the console
*/
int main() {
	ifstream input; // set input stream

	int current;
	int sum = 0;
	int counter = 0;
	int max = 0; // set the max to the lowest possible score
	int min = 100; // set the min to the highest possible score

	input.open("scores.txt"); // open the data file

	if (!input) { // if input not setup correctly stop the program and return 1
		cout << "Error opening file" << endl;
		return 1;
	}

	cout << "----Scores----" << endl;

	while (!input.eof()) { // while the input is NOT at the end of the file

		input >> current; // set the current value to the input

		if (current >= 0 && current <= 100) { // check the value is within range

			counter++; // increase the counter
			sum += current; // add the value to the total sum

			if (current > max) {// if the value if higher than the current max
				max = current;  // then it is the new max
			}
			else if (current < min) {// if the value is lower than the current min
				min = current;		 // then it is the new min
			}
		}
	}

	input.close(); //close the input

	cout << endl;

	if (counter != 0) { // counter check to avoid dividing by 0
		cout << "Highest Score: " << max << endl;
		cout << "Lowest Score: " << min << endl;
		cout << "Average Score: " << (double)sum / counter << endl;
	}
	else {
		cout << "No valid scores" << endl;
	}
}