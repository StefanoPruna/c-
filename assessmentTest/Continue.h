#pragma once

#include <iostream>
#include <string>

using namespace std;

class Continue
{
public:
	//This function is called when the story is still going after a fight, after drinking a potion or player dies etc...
	void keepGoing(int health, int strength, int coins, int potion, string zone);  //calls this function to check what zone restart the game

};


void Continue::keepGoing(int health, int strength, int coins, int potion, string zone)
{
	if (zone == "zoneOne")
		partOne(health, strength, coins, potion);
	else if (zone == "zoneTwo")
	{

	}
}