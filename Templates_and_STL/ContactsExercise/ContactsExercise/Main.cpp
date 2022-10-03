#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, string> contacts;
	contacts["Callum Robinson"] = "1234-567-8910";
	contacts["Bob Davies"] = "7345-555-5050";
	contacts["Sally Stevens"] = "8101-592-8888";

	/*for (pair<string, string> element : contacts) {
		cout << element.first << " = " << element.second << endl;
	}*/

	// can use the auto shortcut here
	for (auto element : contacts) {
		cout << element.first << " = " << element.second << endl;
	}

}