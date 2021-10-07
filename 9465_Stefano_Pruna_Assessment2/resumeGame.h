#pragma once

#include <iostream>
#include <string>
//#include "PartOne.h"
//#include "PartTwo.h"

using namespace std;

//This class is needed for resuming the game from where left after a fight, or any other encounter etc...
class resumeGame
{
public:
	void keepGoing(int health, int strength, int coins, int potion, int zone);
};

