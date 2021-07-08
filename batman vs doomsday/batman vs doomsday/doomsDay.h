#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#ifndef DOOMSDAY
#define DOOMSDAY

class DoomsDay{
public:
	string name;
	int hp;
	int str, def;

	void setup();
	int attack(string enemy);
	void takeDamage(int dmg);
};

#endif