#include <iostream>
#include <string>
#include <stdlib.h> //random library
#include <time.h>
#include "resumeGame.h"

using namespace std;

string answer;
resumeGame resume;

string playerChoice, playerSecondChoice, playerThirdChoice, playerFinish;
bool rightChoice = false; //Needed for error handling with the loops

int dice;
int* pDice = &dice;

int zone;

//This function is called when the player wants to exit the game
int exitTheGame()
{
	system("pause");
	cout << "\033[2J\033[H"; //Refresh the screen
	cout << "Ok, thank you for coming, have a nice day! I'm going to make a coffee...\n";
	system("pause");

	return 0;
}

//This function is called at the end of a battle
void drinkPotion(int health, int strength, int coins, int potion, int zone)
{
	cout << "\033[2J\033[H"; //Refresh the screen
	if (potion > 0)
	{
		while (rightChoice == false)
		{
			cout << "Your health is " << health << " and you have " << potion << ".\n"
				"Would you like to drink the potion of health? Yes / No\n";
			cin >> playerChoice;
			if (playerChoice == "Yes" || playerChoice == "yes")
			{
				health += 4;
				potion -= 1;
				cout << "Your health now is " << health << " and you have " << potion << " potion/s left.\n";
				resume.keepGoing(health, strength, coins, potion, zone);//calls this function to check what zone restart the game
				rightChoice = true;
			}
			else if (playerChoice == "No" || playerChoice == "no")
			{
				cout << "Ok, let's keep going with the adventure!\n";
				resume.keepGoing(health, strength, coins, potion, zone); //calls this function to check what zone restart the game
				rightChoice = true;
			}
			else
				cout << "Sorry, do you want to drink the potion?\n";
		}
	}
	else
	{
		cout << "Sorry, but you don't have any potion...good luck!\n";
		resume.keepGoing(health, strength, coins, potion, zone); //calls this function to check what zone restart the game
	}
}

//All the fighting monsters functions; the functions are called when the player encounters a monster and decides to attack
void fightGoblin(int health, int strength, int coins, int potion, int zone)
{
	cout << "fight the goblin test\n";
	resume.keepGoing(health, strength, coins, potion, zone+1);
}

//This function is called when player chose to run from the monster instead of fighting
void runFromMonster(int health, int strength, int coins, int potion, int zone)
{
	//srand(time(NULL));//setup random number
	cout << "You choose to run?!?! Seriously!?!?\n";
	dice = rand() % 15; //random number from 0 to 1
	cout << "The Monster is trying to attack you while running away! Your health is: " << health << " and his attack is: " << dice << "\n";
	system("pause");
	if (dice >= strength) //If the dice is equal or higher than the player class's strength, it'll inflict 5 damages
	{
		health -= 5;
		cout << "Because your strength is " << strength << ", the monster was able to catch you while you were running, you get 5 points damage! I'm sorry...not really...\n"
			"Your health is now " << health << "\n";
		system("pause");
		cout << "\033[2J\033[H"; //Refresh the screen
		if (health <= 0)
		{
			while (rightChoice == false)
			{
				cout << "Oh no! I'm sorry to tell you, but you are basically, how I say it... YOU ARE DEAD!!!"
					"Would you like to try again? Yes / No\n";
				cin >> playerFinish;
				if (playerFinish == "No" || playerFinish == "no")
					exitTheGame();
				else if (playerFinish == "Yes" || playerFinish == "yes")
				{
					health += 10;
					resume.keepGoing(health, strength, coins, potion, zone);
					rightChoice = true;
				}
				else
					cout << "Sorry, do you want to try again, or not?!\n";
			}
		}
		else
			drinkPotion(health, strength, coins, potion, zone); //call the  drink the potion function
	}
	else
	{
		cout << "You are lucky! Because your strength is " << strength << ", the monster didn't get you!\n"
			"You managed to run from the monster\n";
		resume.keepGoing(health, strength, coins, potion, zone); //calls this function to check what zone restart the game
	}
}

//Third part of the game
void partThree(int health, int strength, int coins, int potion, int zone)
{
	cout << "this is the third part\n"
	"Do you want to go back or keep going?\n";
	cin >> answer;
	if (answer == "yes")
		resume.keepGoing(health, strength, coins, potion, zone - 1);
	else
	{
		cout << "let's stay in the zone 2" << zone << "\n";
		resume.keepGoing(health, strength, coins, potion, zone + 1);
	}
}

//Second part of the game
void partTwo(int health, int strength, int coins, int potion, int zone)
{
	cout << "this is the second part\n"
		"Do you want to go back or keep going?\n";
	cin >> answer;
	if (answer == "yes")
		resume.keepGoing(health, strength, coins, potion, zone - 1);
	else
	{
		cout << "let's stay in the zone 2" << zone << "\n";
		resume.keepGoing(health, strength, coins, potion, zone + 1);
	}
}

//First part of the game
void partOne(int health, int strength, int coins, int potion, int zone)
{
	//zone = 1; //Needed to indentify at what part of the adventure the player is

	while (rightChoice == false)
	{
		cout << "Once inside of the tower, you have a fork, where do you go? Left, Right\n";
		cin >> playerChoice;
		if (playerChoice == "Left" || playerChoice == "left")
		{
			while (rightChoice == false)
			{
				cout << "A Goblin is approaching you, he is in attack mode!\n"
					"What do you do? Fight or Run?\n";
				cin >> playerSecondChoice;
				if (playerSecondChoice == "Fight" || playerSecondChoice == "fight")
				{
					fightGoblin(health, strength, coins, potion, zone);
					rightChoice = true;
				}
				else if (playerSecondChoice == "run" || playerSecondChoice == "Run")
				{
					runFromMonster(health, strength, coins, potion, zone);
					rightChoice = true;
				}
				else //If player doesn't choose the correct input, it will repeat the loop
					cout << "You can only fight or run...what's your choice?\n";
			}
		}
		else if (playerChoice == "Right" || playerChoice == "right")
		{
			while (rightChoice == false)
			{
				cout << "You choose Right. A Monster is attacking you!\n"
					"What do you do? Fight or Run?\n";
				cin >> playerThirdChoice;
				if (playerThirdChoice == "Fight" || playerThirdChoice == "fight")
				{
					fightGoblin(health, strength, coins, potion, zone);
					rightChoice = true;
				}
				else if (playerThirdChoice == "run" || playerThirdChoice == "Run")
				{
					runFromMonster(health, strength, coins, potion, zone);
					rightChoice = true;
				}
				else //If player doesn't choose the correct input, it will repeat the loop
					cout << "You can only fight or run...what's your choice?\n";
			}
		}
		else //If player doesn't choose the correct input, it will repeat the loop
		{
			cout << "You chose the wrong path, try again!\n";
		}
	}
}

//This function is called when the story is still going after a fight, after drinking a potion or player dies etc...
void resumeGame::keepGoing(int health, int strength, int coins, int potion, int zone)
{
	if (zone == 1)
		partOne(health, strength, coins, potion, zone);
	else if (zone == 2)
		partTwo(health, strength, coins, potion, zone);
	else
		partThree(health, strength, coins, potion, zone);
}