// assessmentTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdlib.h> //random library
#include "Player.h"
#include "Enemy.h"
#include "Inventory.h"

using namespace std;

string playerName, playerChoice;

void partOne()
{
	cout << "Once inside of the tower, you have a fork, where do you go? Left, Right\n";
	cin >> playerChoice;
	if (playerChoice == "Left" || playerChoice == "left")
	{
		cout << "A Goblin is approaching you, he is in attack mode!\n";
		cout << "What do you do? Fight or Run?\n";
	}
	else
	{
		cout << "You choose Right. A Monster is attacking you!\n";
	}

}

int main()
{
	Player yourChoice;

	cout <<         "	***************************************\n"
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
	partOne();

	return 0;
}

