#include <iostream>
#include <string>
#include <list>
#include "archer.h"

using namespace std;

#ifndef ARMY
#define ARMY

class Army{
private:
	string armyName;
	list<Archer*> archers;
public:
	Army(string name);
	~Army();
	int fireVolley();
	void hitByArrows(int arrows);
	bool isDefeated();
};

#endif