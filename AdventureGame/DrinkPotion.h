//#pragma once
//#include <iostream>
//#include <string>
//#include <stdlib.h> //random library
//#include <cstdlib> //standard library
//#include <time.h>
//#include "resumeGame.h"
//#include "Enemy.h"
//#include "FightMonster.h"
//
//using namespace std;
//
//class DrinkPotion
//{
//public:
//	//This function is called at the end of a battle
//	int drinkPotion(int health, int strength, int coins, int potion, int zone)
//	{
//
//		cout << "\033[2J\033[H"; //Refresh the screen
//		if (potion > 0)
//		{
//			while (rightChoice == false)
//			{
//				cout << "Your health is " << health << " and you have " << potion << " potion/s left.\n"
//					"Would you like to drink the potion of health? Yes / No\n";
//				cin >> *pointPlayerChoice;
//				if (*pointPlayerChoice == "Yes" || *pointPlayerChoice == "yes")
//				{
//					health += 4;
//					potion -= 1;
//					cout << "Your health now is " << health << " and you have " << potion << " potion/s left.\n";
//					system("pause");
//					resume.keepGoing(health, strength, coins, potion, zone);//calls this function to check what zone restart the game
//					delete pointPlayerChoice;
//					rightChoice = true;
//				}
//				else if (*pointPlayerChoice == "No" || *pointPlayerChoice == "no")
//				{
//					cout << "Ok, let's keep going with the adventure!\n";
//					system("pause");
//					resume.keepGoing(health, strength, coins, potion, zone); //calls this function to check what zone restart the game
//					delete pointPlayerChoice;
//					rightChoice = true;
//				}
//				else
//				{
//					cout << "Sorry, I didn't understand...\n";
//					system("pause");
//				}
//			}
//		}
//		else
//		{
//			cout << "Sorry, but you don't have any potion...good luck!\n";
//			system("pause");
//			resume.keepGoing(health, strength, coins, potion, zone); //calls this function to check what zone restart the game
//		}
//
//		//remove all the vars from the memory that are not needed anymore
//		delete pointPlayerChoice;
//		return health, strength, coins, potion, zone;
//	}
//};

