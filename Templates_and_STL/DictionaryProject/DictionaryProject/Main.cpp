#include <iostream>
#include <string>
#include "Dictionary.h"
using namespace std;

/*
	Exercise using a map for a word dictionary
	The user can:
		- Add a word and definition
		- Update a definition
		- Get a definition of a given word
		- Print all current entries
*/

void printMenu();
void addWord(Dictionary& dictionary);
void getDefinition(const Dictionary& dictionary);

int main() {
	Dictionary dictionary;
	int userChoice;

	// Initial option
	printMenu();
	cin >> userChoice;
	cin.get();
	cout << endl;

	// Main while loop
	while (userChoice != 0) {

		if (userChoice == 1) {
			addWord(dictionary);
		}
		else if (userChoice == 2) {
			getDefinition(dictionary);
		}
		else if (userChoice == 3) {
			cout << "All current definitions:" << endl;
			dictionary.printAll();
		}

		cout << endl;
		printMenu();
		cin >> userChoice;
		cin.get();
		cout << endl;
	}
	cout << "Exiting Goodbye" << endl;
}

/*
	Menu printer
*/
void printMenu() {
	cout << "What would you like to do (enter the number for the option)?" << endl;
	cout << "\t1 - Add a word to the dictionary" << endl;
	cout << "\t2 - Get a defintion of a word" << endl;
	cout << "\t3 - Print all current definitions" << endl;
	cout << "\t0 - Exit" << endl;
}

/*
	Take the users word and definition and then call the dictionary addDefinition function
*/
void addWord(Dictionary& dictionary) {
	string word;
	string def;

	cout << "What word do you wish to add?: ";
	getline(cin, word);
	cout << "Now its definition:" << endl;
	getline(cin, def);

	dictionary.addDefinition(word, def);
}

/*
	Take the users word and then call the dictionary getDefintion function
*/
void getDefinition(const Dictionary& dictionary) {
	string word;

	cout << "What word would you like to search for?: ";
	getline(cin, word);

	cout << word << ":\t" << dictionary.getDefinition(word) << endl;
}