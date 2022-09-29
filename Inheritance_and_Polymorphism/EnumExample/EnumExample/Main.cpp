#include <iostream>
using namespace std;

/*
	Very simple example using enums
*/
int main() {
	enum Direction {UP, DOWN, LEFT, RIGHT, STILL};

	Direction myDirection = STILL;
	
	if (myDirection == UP) {
		cout << "Up" << endl;
	} else if (myDirection == DOWN) {
		cout << "Down" << endl;
	} else if (myDirection == LEFT) {
		cout << "Left" << endl;
	} else if (myDirection == RIGHT) {
		cout << "Right" << endl;
	} else if(myDirection == STILL) {
		cout << "Standing still" << endl;
	}
}