#ifndef PRIEST_H
#define PRIEST_H

#include <string>
#include "Player.h"
using namespace std;

class Priest : public Player {
public:
	Priest(string name, Race race) : Player(name, race, 100, 200) {}
	string attack() {
		return "I will assault you with Holy Wrath!";
	}
};


#endif // !PRIEST_H