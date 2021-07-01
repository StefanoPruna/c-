// assessmentTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string playerName, playerClass, playerChoice;

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
	cout <<         "	***************************************\n"
					"	|   Hello, Adventurer!!!              |\n"
					"	|				      |\n"
					"	|   Welcome to the Fantasy Adventure! |\n"
					"	|                                     |\n"
					"	***************************************\n"
					"        |  Insert the name of your character: |\n\n";
	cin >> playerName;
	cout << "\033[2J\033[H"; //Refresh the screen

	cout << "Hello " << playerName << "! choose your class:\n (Ninja: health=20, strength=6; Warrior: Health=10, strength=12; Wizard: health=14, strength=8):\n";
	cin >> playerClass;

	cout << "\033[2J\033[H"; //Refresh the screen
	partOne();
}

