#include <iostream>
#include "Alien.h"
using namespace std;

/*
	'Alien' project using multiple operator overloads
*/
int main()
{
	Alien alien1(150, 60, 'M');
	Alien alien2(200, 55, 'M');
	Alien alien3(128, 45, 'F');

	Alien alien4 = alien1 + alien2;
	Alien alien5 = alien2 + alien3;

	cout << "alien1 == alien2? " << boolalpha << (alien1 == alien2) << endl;
	cout << "alien1 != alien3? " << boolalpha << (alien1 != alien3) << endl;
	cout << "alien4 > alien5? " << boolalpha << (alien4 > alien5) << endl;
	cout << "alien4 >= alien5? " << boolalpha << (alien4 >= alien5) << endl;
	cout << "alien4 < alien5? " << boolalpha << (alien4 < alien5) << endl;
	cout << "alien4 <= alien5? " << boolalpha << (alien4 <= alien5) << endl;
}