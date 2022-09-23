#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 3;
const int COLS = 3;


// Tic Tac Toe challenge: create a working game of Tic Tac Toe
// Updated with random staring turn
// Functions needed to:
// - run the game loop
void runGame();
// - initialise the game board
void initialiseBoard(string board[ROWS][COLS]);
// - print the current board
void printCurrentBoard(string board[ROWS][COLS]);
// - get user input
void getUserInput(bool xTurn, string board[ROWS][COLS]);
// - check if cell already occupied
bool isAlreadyOccupied(int row, int col, string board[ROWS][COLS]);
// - get the winner
string getWinner(string board[ROWS][COLS]);
// - check if the board is full
bool isBoardFull(string board[ROWS][COLS]);


int main() {
	runGame();
}

void runGame() {
	// create board array
	string board[ROWS][COLS];
	// create a winner string and set to empty
	string winner = "";
	// set the inital turn randomly
	srand(time(nullptr)); // use current time EPOCH as seed
	bool xTurn = rand() % 2;

	// call the initialise board function to setup the board
	initialiseBoard(board);
	// call the print board function to print the starter board
	printCurrentBoard(board);

	// main game loop
	while (winner == "") {
		if (xTurn == true) {
			cout << "It is X's turn:" << endl;
		}
		else {
			cout << "It it O's turn:" << endl;
		}

		// call get user input to get the input
		getUserInput(xTurn, board);
		// print the board again
		printCurrentBoard(board);
		cout << endl;
		// check if theres a winner
		winner = getWinner(board);
		// flip the turn
		xTurn = !xTurn;
		
		// check if cats game
		if (winner == "" && isBoardFull(board) == true) {
			winner = "C";
		}
	}

	// print winner
	if (winner == "C") {
		cout << "The game is a tie!" << endl;
	}
	else {
		cout << "The winner is " << winner << endl;
	}
}

void initialiseBoard(string board[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			board[i][j] = " ";
		}
	}
}

void printCurrentBoard(string board[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << board[i][j];
			if (j < 2) {
				cout << " | ";
			}
		}
		cout << endl;
		if (i < 2) {
			cout << "- - - - -" << endl;
		}
	}
	cout << endl;
}

void getUserInput(bool xTurn, string board[ROWS][COLS]) {
	bool validInput = false;
	int row;
	int col;

	// set a loop until user input is valid
	while (!validInput) {
		cout << "Please enter 0, 1, 2 for the row and column separated by a space" << endl;
		cin >> row;
		cin >> col;

		if (row >= 0 && col >= 0 && row <= 2 && col <= 2) { // if in bounds of board
			if (!isAlreadyOccupied(row, col, board)) { // if isn't already occupied
				if (xTurn == true) { // if it is X's turn
					board[row][col] = "X";
					validInput = true; // end loop
				}
				else { // if it is O's turn
					board[row][col] = "O";
					validInput = true; // end loop
				}
			}
			else {
				cout << "Cell already occupied" << endl;
			}
		}
		else {
			cout << "Out of bounds" << endl;
		}
	}
}

bool isAlreadyOccupied(int row, int col, string board[ROWS][COLS]) {
	if (board[row][col] == " ") { // if cell contains a space then it is available
		return false;
	}
	else {
		return true;
	}
}


string getWinner(string board[ROWS][COLS]) {
	// check if row winner
	for (int i = 0; i < ROWS; i++) {
		if (board[i][0] != " " && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
			return board[i][0];
		}
	}
	// check if column winner
	for (int j = 0; j < COLS; j++) {
		if (board[0][j] != " " && board[0][j] == board[1][j] && board[1][j] == board[2][j]) {
			return board[0][j];
		}
	}
	// check backslash winner
	if (board[0][0] != " " && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
		return board[0][0];
	}
	// check frontslash winner
	if (board[2][0] != " " && board[2][0] == board[1][1] && board[1][1] == board[0][2]) {
		return board[2][0];
	}
	// if no winner return empty string
	return "";
}

bool isBoardFull(string board[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if (board[i][j] == " ") { // if a cell has a space return false as not full
				return false;
			}
		}
	}
	return true; // if loop completes then the board is full
}