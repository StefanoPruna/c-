#include <iostream>
#include <string>
#include <stdlib.h> //lets us do random number stuff

using namespace std;

#ifndef BATMAN
#define BATMAN

class Batman{
public:
	string name;
	int hp;
	int str, def;
	void setup();
	int attackWithBatCar(string enemy);
	int punch(string enemy);
	int throwBatarang();
	int attack(string enemy);
	void takeDamage(int dmg);

};

#endif