// 9465_Stefano_Pruna_Assessment2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include "Player.h"
#include "Enemy.h"
#include "Inventory.h"
#include "resumeGame.h"

using namespace std;

string playerName;

//The very beginning, the game asks for name and character
int main()
{
	//calls the Player, Inventory and resumeGame classes
	Player yourChoice;
	Inventory playerInventory;
	resumeGame storyTell;
	

	cout << "	***************************************\n"
		"	|   Hello, Adventurer!!!              |\n"
		"	|				      |\n"
		"	|   Welcome to the Fantasy Adventure! |\n"
		"	|                                     |\n"
		"	***************************************\n"
		"        |  Insert the name of your character: |\n\n";
	cin >> playerName;
	system("pause");
	cout << "\033[2J\033[H"; //Refresh the screen

	yourChoice.whatChoice(playerName);
	cout << "Nice choice " << playerName << ", you look scary for a " << yourChoice.character << "!! I hope you are ready for the adventure!\n";
	system("pause");
	cout << "\033[2J\033[H"; //Refresh the screen

	int playerHealth = yourChoice.health;
	int playerStrength = yourChoice.strength;

	int coins = playerInventory.coins;
	int potions = playerInventory.potion;

	
	//calling the function, first part of the adventure
	storyTell.keepGoing(playerHealth, playerStrength, coins, potions, 1);

	return 0;
}