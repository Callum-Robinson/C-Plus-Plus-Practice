#include <iostream>
#include <iomanip>
#include "ItemFrequenices.h"

using namespace std;

int ItemFrequencies::indexOfItem(string item) const
{
	int resultIndex = -1;
	for (int i = 0; i < items.size(); i++) { // see if item already in the vector
		if (item == items.at(i)) {
			resultIndex = i;
			break;
		}
	}

	return resultIndex;
}

void ItemFrequencies::addItem(string item) {
	int index = indexOfItem(item);

	if (index != -1) {
		frequencies[index]++; // if already present increase the according frequency
	}
	else {
		items.push_back(item); // if not present add the item to the name vector
		frequencies.push_back(1); // make the according frequency to 1
	}
}

void ItemFrequencies::printFrequencies() const {
	for (int i = 0; i < items.size(); i++) {
		cout << setw(12) << items[i] << setw(8) << frequencies[i] << endl;
	}
}