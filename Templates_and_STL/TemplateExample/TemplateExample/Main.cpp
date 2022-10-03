#include <iostream>
#include <string>
#include "Swapper.h"

using namespace std;

/*
	Template exercises:
	 - Simple getBigger and getSmaller templates
	 - Swapper class template
*/

template <class T>
T getBigger(T a, T b);

template <class T>
T getSmaller(T a, T b);

int main() {
	string name1 = "Callum";
	string name2 = "Jamie";
	cout << "---Using a get bigger template:---" << endl;
	cout << "\t" << getBigger(3.14, 5.55) << endl;
	cout << "\t" << getBigger(10, 17) << endl;
	cout << "\t" << getBigger(name1, name2) << endl;
	cout << endl << endl;

	cout << "---Using a get smaller template:---" << endl;
	cout << "\t" << getSmaller(3.14, 5.55) << endl;
	cout << "\t" << getSmaller(10, 17) << endl;
	cout << "\t" << getSmaller(name1, name2) << endl;
	cout << endl << endl;


	/*
		Using the Swapper
	*/
	Swapper<int> intSwapper(5, 10);
	Swapper<string> stringSwapper(name1, name2);

	cout << "---Using the swapper class template:---" << endl;
	cout << intSwapper.getFirst() << " " << intSwapper.getSecond() << endl;
	cout << stringSwapper.getFirst() << " " << stringSwapper.getSecond() << endl;

	cout << endl << "---Lets Swap---" << endl;
	intSwapper.swap();
	stringSwapper.swap();
	cout << intSwapper.getFirst() << " " << intSwapper.getSecond() << endl;
	cout << stringSwapper.getFirst() << " " << stringSwapper.getSecond() << endl;

}

template <class T>
T getBigger(T a, T b) {
	if (a > b) {
		return a;
	}
	return b;
}

template <class T>
T getSmaller(T a, T b) {
	if (a < b) {
		return a;
	}
	return b;
}