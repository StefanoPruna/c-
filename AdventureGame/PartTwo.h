//#pragma once
#include <iostream>
#include <string>
#include <stdlib.h> //random library
#include <cstdlib> //standard library
#include <time.h>
#include "resumeGame.h"
#include "Enemy.h"
#include "FightMonster.h"

using namespace std;

class PartTwo
{
//private:
//	///Variables
//	string playerChoice, playerSecondChoice, playerThirdChoice, playerFinish, answer;
//	bool rightChoice = false; //Needed for error handling with the loops
//	bool chestAgain = false; //Checks whether player has already opened the Chest 
//	int dice; //Random dice number during the fight
//	int zone; //Needed to restart the game to the last zone played
//
//	//pointers to variables that will be removed from memory
//	string* pointPlayerChoice = &playerChoice;
//	string* pointSecondChoice = &playerSecondChoice;
//	string* pointThirdChoice = &playerThirdChoice;
//	string* pointFinish = &playerFinish;
//	string* pointAnswer = &answer;
//
//public:
//	int partTwo(int health, int strength, int coins, int potion, int zone)
//	{
//		FightMonster fightMonster;
//
//		//zone = 1; //Needed to indentify at what part of the adventure the player is
//		while (rightChoice == false)
//		{
//			cout << "Once inside of the tower, you have a fork, where do you go? Left, Right\n";
//			cin >> *pointPlayerChoice;
//			if (*pointPlayerChoice == "Left" || *pointPlayerChoice == "left")
//			{
//				while (rightChoice == false)
//				{
//					cout << "A Goblin is approaching you, he is in attack mode!\n"
//						"What do you do? Fight or Run?\n";
//					cin >> *pointSecondChoice;
//					if (*pointSecondChoice == "Fight" || *pointSecondChoice == "fight")
//					{
//						//Calls the functions to fight against the Goblin monster
//						fightMonster.fightMonster("Goblin", health, strength, coins, potion, zone);
//						rightChoice = true;
//					}
//					else if (*pointSecondChoice == "run" || *pointSecondChoice == "Run")
//					{
//						fightMonster.runFromMonster(health, strength, coins, potion, zone);
//						rightChoice = true;
//					}
//					else //If player doesn't choose the correct input, it will repeat the loop
//						cout << "You can only fight or run...what's your choice?\n";
//				}
//			}
//			else if (*pointPlayerChoice == "Right" || *pointPlayerChoice == "right")
//			{
//				while (rightChoice == false)
//				{
//					cout << "You choose Right. A Skeleton is attacking you!\n"
//						"What do you do? Fight or Run?\n";
//					cin >> *pointThirdChoice;
//					if (*pointThirdChoice == "Fight" || *pointThirdChoice == "fight")
//					{
//						//Calls the functions to fight against the Goblin monster
//						fightMonster.fightMonster("Skeleton", health, strength, coins, potion, zone);
//						rightChoice = true;
//					}
//					else if (*pointThirdChoice == "run" || *pointThirdChoice == "Run")
//					{
//						fightMonster.runFromMonster(health, strength, coins, potion, zone);
//						rightChoice = true;
//					}
//					else //If player doesn't choose the correct input, it will repeat the loop
//						cout << "You can only fight or run...what's your choice?\n";
//				}
//			}
//			else //If player doesn't choose the correct input, it will repeat the loop
//			{
//				cout << "You chose the wrong path, try again!\n";
//			}
//		}
//
//		//remove the bool var from the memory that is not needed anymore
//		delete pointPlayerChoice, pointSecondChoice, pointThirdChoice;
//		return health, strength, coins, potion, zone;
//	}
};



