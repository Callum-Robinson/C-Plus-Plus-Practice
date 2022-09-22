#include <iostream>
#include <array>

using namespace std;


/*
	Simple task using array object that stores the doubles of integers 0-9 and prints (separately)
*/
int main() {
	array<int, 10> twiceArray{};

	for (int i = 0; i < twiceArray.size(); i++) {
		twiceArray[i] = 2 * i;
	}

	for (int number : twiceArray) {
		cout << number << endl;
	}
}