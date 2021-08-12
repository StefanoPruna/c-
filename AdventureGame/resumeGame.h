#pragma once
#include <iostream>
#include <string>
#include "PartOne.h"
#include "PartTwo.h"

using namespace std;

class resumeGame
{
public:
	int keepGoing(int health, int strength, int coins, int potion, int zone)
	{
		PartOne* partOne = new PartOne;
		PartTwo* partTwo = new PartTwo;

		if (zone == 1)
			partOne;
		else if (zone == 2)
			partTwo; // ->partTwo(health, strength, coins, potion, zone);
		else
		{
			//
		}
			//partThree(health, strength, coins, potion, zone);

		delete partOne, partTwo;
		return health, strength, coins, potion, zone;
	}
	//void keepGoing(int health, int strength, int coins, int potion, int zone);
	/*void drink(int zone);
	void goBack(int zone);*/
};
