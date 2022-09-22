#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
	Simple number guesser game
*/
int main() {
	// Using current EPOCH for random seed
	srand(time(nullptr));

	int numberToGuess = (rand() % 100) + 1; // The number to guess is generated
	int guess;
	int counter;

	// first guess
	cout << "Try to guess the number between 1 and 100" << endl;
	cin >> guess;
	counter = 1;

	while (guess != numberToGuess) {
		// if out of boundary then the guess was a waste
		if (guess < 1 || guess > 100) {
			cout << "Wasted guess try again" << endl;
			cin >> guess;
			counter++;
		}
		
		else if (guess < numberToGuess) {
			cout << "Too low guess again" << endl;
			cin >> guess;
			counter++;
		}
		else if (guess > numberToGuess) {
			cout << "Too high guess again" << endl;
			cin >> guess;
			counter++;
		}
	}

	cout << "You guessed correctly with " << counter << " guesses" << endl;




	return 0;
}