#include <iostream>
#include <string>
#include <stdlib.h> //random library
#include <cstdlib> //standard library
#include <time.h>
#include "resumeGame.h"
#include "Enemy.h"
//#include "FightMonster.h"

using namespace std;

//Classes
resumeGame resume;
//FightMonster fightMonster;

//Enemy* whatEnemy = new Enemy(monsterName)

//Variables
string playerChoice, playerSecondChoice, playerThirdChoice, playerFinish, answer;
bool rightChoice = false; //Needed for error handling with the loops
bool chestAgain = false; //Checks whether player has already opened the Chest 
int dice; //Random dice number during the fight
int zone; //Needed to restart the game to the last zone played

//pointers to variables that will be removed from memory
string* pointPlayerChoice = &playerChoice;
string* pointSecondChoice = &playerSecondChoice;
string* pointThirdChoice = &playerThirdChoice;
string* pointFinish = &playerFinish;
string* pointAnswer = &answer;
//bool* pointRightChoice = &rightChoice;
int* pDice = &dice; 

////Pointing to the monster's ability
//string* pointName = &monsterPlay.monsterName;
//int* pointMonsterHealth = &monsterPlay.healthEnemy;
//int* pointMonsterDamage = &monsterPlay.damage;

//Exception handling for when calling the exitTheGame function
class InvalidUserInputException : public exception
{
public:
	virtual const char* what() const throw()
	{
		return "Invalid input exception\n";
	}
};

//This function is called when the player wants to exit the game
int exitTheGame()
{
	cout << "Are you sure you want to exit the game? Yes or No\n";
	cin >> *pointPlayerChoice;

	try
	{
		if (*pointPlayerChoice == "Yes" || *pointPlayerChoice == "yes")
		{
			system("pause");
			cout << "\033[2J\033[H"; //Refresh the screen
			cout << "Ok, thank you for coming, have a nice day! I'm going to make a coffee...\n";
			system("pause");
			exit(1);
		}
		/*else if (*pointPlayerChoice == "No" || *pointPlayerChoice == "no")
			storyTell.keepGoing(playerHealth, playerStrength, coins, potion, 1);*/
		else
		{
			throw InvalidUserInputException();
			cout << "Invalid input\n";
			exitTheGame();
		}
	}
	catch (InvalidUserInputException &pointPlayerChoice)
	{
		cout << pointPlayerChoice.what() << "You type the wrong input\n";
		exitTheGame();
	}

	//remove all the vars from the memory that are not needed anymore
	delete pointPlayerChoice;
	return 0;
}

//This function is called at the end of a battle
int drinkPotion(int health, int strength, int coins, int potion, int zone)
{
	cout << "\033[2J\033[H"; //Refresh the screen
	if (potion > 0)
	{
		while (rightChoice == false)
		{
			cout << "Your health is " << health << " and you have " << potion << " potion/s left.\n"
				"Would you like to drink the potion of health? Yes / No\n";
			cin >> *pointPlayerChoice;
			if (*pointPlayerChoice == "Yes" || *pointPlayerChoice == "yes")
			{
				health += 4;
				potion -= 1;
				cout << "Your health now is " << health << " and you have " << potion << " potion/s left.\n";
				system("pause");
				resume.keepGoing(health, strength, coins, potion, zone);//calls this function to check what zone restart the game
				delete pointPlayerChoice;
				rightChoice = true;
			}
			else if (*pointPlayerChoice == "No" || *pointPlayerChoice == "no")
			{
				cout << "Ok, let's keep going with the adventure!\n";
				system("pause");
				resume.keepGoing(health, strength, coins, potion, zone); //calls this function to check what zone restart the game
				delete pointPlayerChoice;
				rightChoice = true;
			}
			else
			{
				cout << "Sorry, I didn't understand...\n";
				system("pause");
			}
		}
	}
	else
	{
		cout << "Sorry, but you don't have any potion...good luck!\n";
		system("pause");
		resume.keepGoing(health, strength, coins, potion, zone); //calls this function to check what zone restart the game
	}

	//remove all the vars from the memory that are not needed anymore
	delete pointPlayerChoice;
	return health, strength, coins, potion, zone;
}

//drink function

//All the fighting monsters functions; the functions are called when the player encounters a monster and decides to attack
int fightMonster(string monsterName, int health, int strength, int coins, int potion, int zone)
{	
	//string monsterName;
	int healthEnemy, damage;

	if (monsterName == "Goblin")
	{
		monsterName = "Goblin";
		healthEnemy = 8;
		damage = 4;
	}
	else if (monsterName == "Skeleton")
	{
		monsterName = "Skeleton";
		healthEnemy = 6;
		damage = 4;
	}

	Enemy* whatEnemy = new Enemy(monsterName, healthEnemy, damage);

	cout << "You chose to fight, good job! Let's see how you go!"
		"Good luck!\n";
	cout << "The " << monsterName << "'s health is " << healthEnemy << " and damages for " << damage << " point.\n";
	system("pause");
	while (healthEnemy > 0)
	{
		//*pDice = rand() % 15; //random number from 0 to 15
		dice = rand() % 15; //random number from 0 to 15
		cout << "Your attack is " << *pDice << "!\n";
		system("pause");
		//If the dice is equal or less than player's strength, the player's attack is successful
		if (dice <= strength)
		{
			cout << "Good, your attack is successful!You damage the " << monsterName << " of " << strength << " points!\n";
			healthEnemy -= strength;
			cout << "Your health is now " << health << " and " << monsterName << "'s health is: " << healthEnemy << "\n";
			system("pause");
			//When the enemy's health is equal or less than zero, it'll die
		}
		//Otherwise, the Monster will attack and damage the player
		else
		{
			cout << "Unfortunately, you missed the " << monsterName << "! And the monster managed to hit you!"
				"It damaged you " << damage << " points!\n";
			health -= damage;
			cout << "Your health is now " << health << " and enemy's health is: " << healthEnemy << "\n";
			system("pause");
			if (health > 0 && potion > 0)
			{
				while (rightChoice == false)
				{
					"Would you like to drink the potion of health? Yes / No\n";
					cin >> *pointPlayerChoice;
					if (*pointPlayerChoice == "Yes" || *pointPlayerChoice == "yes")
					{
						health += 4;
						potion -= 1;
						cout << "Your health now is " << health << " and you have " << potion << " potion/s left.\n";
						system("pause");
						rightChoice = true;
					}
					else if (*pointPlayerChoice == "No" || *pointPlayerChoice == "no")
					{
						cout << "Ok, let's keep going with the adventure!\n";
						system("pause");
						rightChoice = true;
					}
					else
					{
						cout << "Sorry, I didn't understand...\n";
						system("pause");
					}
				}
			}
			else if (health > 0 && potion <= 0)
			{
				cout << "Oh no! I'm sorry, but you don't have potion of health to drink!"
					"You have to keep fighting to survive!\n";
				system("pause");
			}
			//If character's health reached zero, the player can chooses to restart the game
			else if (health <= 0)
			{
				while (rightChoice == false)
				{
					cout << "Oh no! I'm sorry to tell you, but you are basically, how I say it... YOU ARE DEAD!!!"
						"Would you like to try again? Yes / No\n";
					cin >> *pointFinish;
					if (*pointFinish == "No" || *pointFinish == "no")
					{
						exitTheGame();
					}
					else if (*pointFinish == "Yes" || *pointFinish == "yes")
					{
						health += 10;
						resume.keepGoing(health, strength, coins, potion, zone);
						rightChoice = true;
					}
					else
						cout << "Sorry, do you want to try again, or not?!\n";
				}
			}
		}
	}

	coins += 10;
	potion += 1;
	cout << "\033[2J\033[H"; //Refresh the screen
	cout << "You managed to kill the " << monsterName << "!!! Good job!!!\n" "|^d^| \n"
		"You obtained a potion of health that gives you 4 point of health if you drink it and 10 gold coins!"
		"Now you have " << potion << " potions and " << coins << " gold coins.\n"
		"I didn't expect from you, but you proved me wrong!\n"
		"Let's see if you can keep it up though...WHAA HA HA HA (Crazy and satiric laugh...)\n";
	system("pause");
	//call this function to possible drink a potion to recover some health before keep going with the story
	drinkPotion(health, strength, coins, potion, zone + 1);

	//remove all the vars from the memory that are not needed anymore
	delete whatEnemy, pointFinish, pDice;
	return health, strength, coins, potion, zone;
}

//This function is called when player chose to run from the monster instead of fighting
int runFromMonster(int health, int strength, int coins, int potion, int zone)
{
	//srand(time(NULL));//setup random number
	cout << "You chose to run?!?! Seriously!?!?\n";
	int* pDice = &dice;
	*pDice = rand() % 15; //random number from 0 to 15
	cout << "The Monster is trying to attack you while running away! Your health is: " << health << " and his attack is: " << dice << "\n";
	system("pause");
	if (*pDice >= strength) //If the dice is equal or higher than the player class's strength, it'll inflict 5 damages
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
				cin >> *pointFinish;
				if (*pointFinish == "No" || *pointFinish == "no")
				{
					exitTheGame();
				}
				else if (*pointFinish == "Yes" || *pointFinish == "yes")
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

	//remove all the vars from the memory that are not needed anymore
	delete pDice, pointFinish;
	return health, strength, coins, potion, zone;
}

//Third part of the game
int partThree(int health, int strength, int coins, int potion, int zone)
{
	cout << "this is the third part\n"
	"Do you want to keep going? Yes or No\n";
	cin >> *pointAnswer;
	try
	{
		if (*pointAnswer == "yes" || *pointAnswer == "Yes")
		{
			//to do
			cout << "let's stay in this zone " << zone << "\n";
		}
		else if(*pointAnswer == "No" || *pointAnswer == "no")
		{
			cout << "Ok, let's go back to the zone " << zone -1 << "\n";
			resume.keepGoing(health, strength, coins, potion, zone -1);
		}
		else
		{
			cout << "You have to choose whether keep going or going back, there is not any other way...\n";
			partThree(health, strength, coins, potion, zone);
		}
	}
	catch (InvalidUserInputException pointAnswer)
	{
		cout << "You have to choose whether keep going or going back, there is not any other way...\n";
		system("pause");
		partThree(health, strength, coins, potion, zone);
	}	

	//remove all the vars from the memory that are not needed anymore
	delete pointAnswer;
	return health, strength, coins, potion, zone;
}

//Second part of the game
int partTwo(int health, int strength, int coins, int potion, int zone)
{
	cout << "this is the second part\n"
		"Do you want to keep going? (Yes or No)\n"
		"If No, you will go back to the previous section\n";
	cin >> *pointAnswer;
	try
	{
		if (*pointAnswer == "yes" || *pointAnswer == "Yes")
		{
			cout << "let's keep going with the story!\n";
			system("pause");
			cout << "You found another intersection, where do you go? Left or Right\n";
			cin >> *pointPlayerChoice;
			if (*pointPlayerChoice == "Left" || *pointPlayerChoice == "left")
			{
				while (rightChoice == false)
				{
					cout << "A Goblin is approaching you, he is in attack mode!\n"
						"What do you do? Fight or Run?\n";
					cin >> *pointSecondChoice;
					if (*pointSecondChoice == "Fight" || *pointSecondChoice == "fight")
					{
						//Calls the functions to fight against the Goblin monster
						fightMonster("Goblin", health, strength, coins, potion, zone);
						rightChoice = true;
					}
					else if (*pointSecondChoice == "run" || *pointSecondChoice == "Run")
					{
						runFromMonster(health, strength, coins, potion, zone);
						rightChoice = true;
					}
					else //If player doesn't choose the correct input, it will repeat the loop
						cout << "You can only fight or run...what's your choice?\n";
				}
			}
			else if (*pointPlayerChoice == "Right" || *pointPlayerChoice == "right")
			{
				while (rightChoice == false)
				{
					cout << "You choose Right. A Skeleton is attacking you!\n"
						"What do you do? Fight or Run?\n";
					cin >> *pointThirdChoice;
					if (*pointThirdChoice == "Fight" || *pointThirdChoice == "fight")
					{
						//Calls the functions to fight against the Goblin monster
						fightMonster("Skeleton", health, strength, coins, potion, zone);
						rightChoice = true;
					}
					else if (*pointThirdChoice == "run" || *pointThirdChoice == "Run")
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
		else if (*pointAnswer == "No" || *pointAnswer == "no")
		{
			cout << "let's go back to the previous intersection then\n";
			resume.keepGoing(health, strength, coins, potion, zone - 1);
		}
		else
		{
			cout << "You have to choose whether keep going or going back, there is not any other way...\n";
			partTwo(health, strength, coins, potion, zone);
		}
	}
	catch (InvalidUserInputException &pointAnswer)
	{
		cout << "You have to choose whether keep going or going back, there is not any other way...\n";
		system("pause");
		partTwo(health, strength, coins, potion, zone);
	}

	//remove all the vars from the memory that are not needed anymore
	delete pointAnswer, pointPlayerChoice, pointSecondChoice, pointThirdChoice; //fightMonster;
	return health, strength, coins, potion, zone;
	
}

//First part of the game
int partOne(int health, int strength, int coins, int potion, int zone)
{
	//zone = 1; //Needed to indentify at what part of the adventure the player is
	while (rightChoice == false)
	{
		cout << "Once inside of the tower, you have a fork, where do you go? Left, Right\n";
		cin >> *pointPlayerChoice;
		if (*pointPlayerChoice == "Left" || *pointPlayerChoice == "left")
		{
			while (rightChoice == false)
			{
				cout << "A Goblin is approaching you, he is in attack mode!\n"
					"What do you do? Fight or Run?\n";
				cin >> *pointSecondChoice;
				if (*pointSecondChoice == "Fight" || *pointSecondChoice == "fight")
				{
					//Calls the functions to fight against the Goblin monster
					fightMonster("Goblin", health, strength, coins, potion, zone);
					rightChoice = true;
				}
				else if (*pointSecondChoice == "run" || *pointSecondChoice == "Run")
				{
					runFromMonster(health, strength, coins, potion, zone);
					rightChoice = true;
				}
				else //If player doesn't choose the correct input, it will repeat the loop
					cout << "You can only fight or run...what's your choice?\n";
			}
		}
		else if (*pointPlayerChoice == "Right" || *pointPlayerChoice == "right")
		{
			while (rightChoice == false)
			{
				cout << "You choose Right. A Skeleton is attacking you!\n"
					"What do you do? Fight or Run?\n";
				cin >> *pointThirdChoice;
				if (*pointThirdChoice == "Fight" || *pointThirdChoice == "fight")
				{
					//Calls the functions to fight against the Goblin monster
					fightMonster("Skeleton", health, strength, coins, potion, zone);
					rightChoice = true;
				}
				else if (*pointThirdChoice == "run" || *pointThirdChoice == "Run")
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

	//remove the bool var from the memory that is not needed anymore
	delete pointPlayerChoice, pointSecondChoice, pointThirdChoice;
	return health, strength, coins, potion, zone;
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

//void Enemy::whatEnemy(string name)
//{
//	if (name == "Goblin")
//	{
//		monsterName = "Goblin";
//		healthEnemy = 8;
//		damage = 4;
//	}
//	else if (name == "Skeleton")
//	{
//		monsterName = "Skeleton";
//		healthEnemy = 6;
//		damage = 4;
//	}
//}