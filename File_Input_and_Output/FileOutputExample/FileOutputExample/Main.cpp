#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void printFormatted(ofstream& outfile, int limit);

/*
	Exercise writing to a file and some basic formatting
*/
int main() {
	ofstream outfile;
	int limit;

	cout << "Writing to a file" << endl;

	outfile.open("output.txt");

	// write text to file (generated text from The Raven)
	outfile << "Before meant me the both madam i on heaven the curious air before lenore sitting i sitting the wished door" << endl << endl;

	// take a number from console and pass to the print function
	cout << "How many values?: ";
	cin >> limit;
	printFormatted(outfile, limit);

	cout << "Done" << endl;

	outfile.close();
}

void printFormatted(ofstream& outfile, int limit) {
	// write the floating point values in fixed-point notation
	outfile << fixed << showpoint;
	cout << fixed << showpoint;

	// writing floating points to file using set precision
	for (int i = 0; i <= limit; i++) {
		outfile << setw(12) << setprecision(2) << (i * 5.7575)
			<< setw(12) << setprecision(3) << (i * 3.14159) << endl;
		cout << setw(12) << setprecision(2) << (i * 5.7575)
			<< setw(12) << setprecision(3) << (i * 3.14159) << endl;
	}
}