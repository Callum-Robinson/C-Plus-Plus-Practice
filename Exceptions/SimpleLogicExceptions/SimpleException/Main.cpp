#include <iostream>
#include <string>
#include <stdexcept> // standard exception library
#include <vector>
using namespace std;


/*
	Simple try-catch blocks for logic exceptions
*/
int main()
{
	vector<string> names(5);

	names.at(0) = "John";
	names.at(1) = "Bob";
	names.at(2) = "Sally";
	names.at(3) = "Karen";
	names.at(4) = "Smitty";

	for (string name : names) {
		cout << name << endl;
	}


	// Out of range excpetion
	try {
		names.at(5) = "Tyler";
	}
	catch (const out_of_range& err) {
		cerr << err.what() << endl;
	}

	cout << endl;



	// Length error
	vector<int> nums;
	cout << "Trying to make the vector 1 larger than its max:" << endl;
	try {
		nums.resize(nums.max_size() + 1);
	}
	catch (const length_error& err) {
		cerr << err.what() << endl;
	}
}