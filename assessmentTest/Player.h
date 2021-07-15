#pragma once

#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	string character;
	int health, strength;

	void whatChoice(string name);
};

void Player::whatChoice(string name)
{
	bool rightClass = false;
	
	while (rightClass == false)
	{
		cout << "Hello " << name << "! choose your class:\n (Ninja: health=20, strength=6; Warrior: Health=10, strength=12; Wizard: health=14, strength=8):\n";
		cin >> character;
		if (character == "Ninja" || character == "ninja")
		{
			health = 20;
			strength = 6;
			rightClass = true;
		}
		else if (character == "Warrior" || character == "warrior")
		{
			health = 10;
			strength = 12;
			rightClass = true;
		}
		else if (character == "Wizard" || character == "wizard")
		{
			health = 14;
			strength = 8;
			rightClass = true;
		}
		else
			cout << "Sorry, but the " << character << " class will be available in the sequel...when I will make it!\n";
	}
}

