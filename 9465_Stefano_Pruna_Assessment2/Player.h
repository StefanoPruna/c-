#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	string character;
	int health, strength;

	string whatChoice(string name);

private:
	bool rightClass = false;
};

string Player::whatChoice(string name)
{
	this->rightClass = rightClass; //pointer to the bool var

	while (rightClass == false)
	{
		cout << "Hello " << name << "! choose your class:\n (Ninja: health=20, strength=6; Warrior: Health=10, strength=12; Wizard: health=14, strength=8):\n";
		cin >> character;
		if (character == "Ninja" || character == "ninja")
		{
			health = 20;
			strength = 7;
			rightClass = true;
		}
		else if (character == "Warrior" || character == "warrior")
		{
			health = 7;
			strength = 12;
			rightClass = true;
		}
		else if (character == "Wizard" || character == "wizard")
		{
			health = 12;
			strength = 8;
			rightClass = true;
		}
		else
			cout << "Sorry, but the " << character << " class will be available in the sequel...when I will make it!\n";
	}

	return name;
	delete this; //remove the bool var from the memory that is not needed anymore
}


