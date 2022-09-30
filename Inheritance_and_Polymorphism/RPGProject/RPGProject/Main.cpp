#include <iostream>
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"

using namespace std;

void printMenu();
void printRaces();

Player* createPlayer(string name, int choiceNumber, int raceNumber);
Race getRace(int raceNumber);

void memoryCleanup(vector<Player*> players);
void printPlayers(vector<Player*> players);

int main() {
	vector<Player*> players;
	Player* currentPlayer;
	int choice;
	int raceChoice;
	string name;

	/*
		Inital option (in case chooses to exit at the start)
	*/
	printMenu();
	cin >> choice;
	cin.get(); // consume the newline character
	cout << endl;

	/*
		Main while loop until user selects the option to finish
	*/
	while (!(choice == 0)) {
		cout << "What is the characters name?: ";
		getline(cin, name);
		cout << endl;

		printRaces();
		cin >> raceChoice;
		cin.get(); // consume the newline character;
		cout << endl;

		currentPlayer = createPlayer(name, choice, raceChoice); // create player character
		players.push_back(currentPlayer); // add player to the vector

		// repeat menu choice
		printMenu();
		cin >> choice;
		cin.get();
		cout << endl;
	}

	/*
		Once loop is finished print the vector and call the clean up function
	*/
	printPlayers(players);
	memoryCleanup(players);
}


/*
	Function to print the main menu
*/
void printMenu() {
	cout << "What would you like to do?" << endl;
	cout << "\t1 - Create a Warrior" << endl;
	cout << "\t2 - Create a Priest" << endl;
	cout << "\t3 - Create a Mage" << endl;
	cout << "\t0 - Finish creating player characters" << endl;
}

/*
	Function to print the race menu
*/
void printRaces() {
	cout << "Which race is the character?" << endl;
	cout << "\t1 - Human" << endl;
	cout << "\t2 - Elf" << endl;
	cout << "\t3 - Dwarf" << endl;
	cout << "\t4 - Orc" << endl;
	cout << "\t5 - Troll" << endl;
}

/*
	Function to create the character pointer
*/
Player* createPlayer(string name, int choiceNumber, int raceNumber) {
	Race tempRace = getRace(raceNumber);

	if (choiceNumber == 1) {
		return new Warrior(name, tempRace);
	}
	else if (choiceNumber == 2) {
		return new Priest(name, tempRace);
	}
	else if (choiceNumber == 3) {
		return new Mage(name, tempRace);
	}

	return nullptr;
}

/*
	Function to return the pointer memory and clear the vector
*/
void memoryCleanup(vector<Player*> players) {
	for (Player* ptr : players) {
		delete ptr;
	}
	players.clear();
}

/*
	Function to get then enum value from the integer choice
*/
Race getRace(int raceNumber) {
	if (raceNumber == 1) {
		return HUMAN;
	}
	else if (raceNumber == 2) {
		return ELF;
	}
	else if (raceNumber == 3) {
		return DWARF;
	}
	else if (raceNumber == 4) {
		return ORC;
	}
	else {
		return TROLL;
	}
}

/*
	Function to print all the players
*/
void printPlayers(vector<Player*> players) {
	cout << endl;
	cout << "------Your player characters------" << endl;
	
	for (Player* ptr : players) {
		cout << "My name is " << ptr->getName() << ", I'm a "
			<< ptr->whatRace() << " and my attack is: " << ptr->attack() << endl;
	}
}