#include <iostream>
#include <string>
#include <stack>
using namespace std;

void storeReverse(string origString, stack<char>& reverseStack);
bool isPalindrome(string origString);
void printResult(string origString);

/*
	Simple stack example using a stack to store the reverse of a string to then compare
	and see if the string is a palindrome
*/

int main() {
	string strArray[5];

	strArray[0] = "racecar";
	strArray[1] = "jamie";
	strArray[2] = "bob";
	strArray[3] = "callum";
	strArray[4] = "hannah";

	for (string str : strArray) {
		printResult(str);
	}
}

/*
	Stores the characters of the reversed string in the stack
*/
void storeReverse(string origString, stack<char>& reverseStack) {
	for (char c : origString) {
		reverseStack.push(c);
	}
}

/*
	Compares the characters in the reverse stack and the original string
	returns true if the string is a palindrome
	returns false otherwise
*/
bool isPalindrome(string origString) {
	stack<char> reverseStack;
	storeReverse(origString, reverseStack);

	if (origString.length() == reverseStack.size()) { // if same length then possible to be palindrome
		for (char c : origString) {
			char currChar = reverseStack.top();
			if (currChar != c) {
				return false;
			}
			reverseStack.pop();
		}
		return true;
	}
	else {
		return false;
	}
}

/*
	Calls the isPalindrome function and prints to console
*/
void printResult(string origString) {
	cout << "Is " << origString << " a palindrome?\t"
		<< boolalpha << isPalindrome(origString) << endl;
}