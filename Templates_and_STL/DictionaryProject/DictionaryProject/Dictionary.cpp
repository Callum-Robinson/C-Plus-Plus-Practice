#include <iostream>
#include "Dictionary.h"
using namespace std;

/*
	If word exists in dictionary already then set the definition
	If it doesn't already exist then add the work and definition to the dictionary
*/
void Dictionary::addDefinition(string word, string definition) {
	auto temp = dictionary.find(word);

	if (temp != dictionary.end()) {
		temp->second = definition;
	}
	else {
		dictionary[word] = definition;
	}
}

/*
	If word exists return the definition
	Otherwise return "Not Found"
*/
string Dictionary::getDefinition(string word) const {
	auto search = dictionary.find(word);

	if (search != dictionary.end()) {
		return search->second;
	}
	else {
		return "NOT FOUND";
	}
}

/*
	Loop through the dictionary and print the key-value pairs
*/
void Dictionary::printAll() const {
	for (auto pair : dictionary) {
		cout << pair.first << ":\t" << pair.second << endl;
	}
	cout << endl << endl;
}