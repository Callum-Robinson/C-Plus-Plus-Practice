#include <iostream>
#include <string>
#include <queue>
using namespace std;

/*
	Simple queue example
*/
int main() {
	queue<string> names;

	names.push("John");
	names.push("Sally");
	names.push("Bob");
	names.push("Sam");
	names.push("Ali");
	names.push("Karen");

	cout << "|----Shop Counter----|" << endl;

	while (!names.empty()) {
		cout << "\t" << names.front() << endl; // print who is at front
		names.pop(); //dequeue
	}
}