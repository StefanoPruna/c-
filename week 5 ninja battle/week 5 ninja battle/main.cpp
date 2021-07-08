#include <iostream>
#include <string>
#include <stdlib.h> //srand, rand - random numbers
#include <time.h> //time
#include "ninja.h"

using namespace std;

void main(){
	//initialise random seed. Seed is used to calculate a series of random numbers
	//so we pass it the current time, so its a different series of numbers each time we run the game.
	//This is called pseudo random. Its the best we got with code though :/
	srand(time(NULL)); //may have warnings, but it will compile
						//NOTE: if you want to re-simulate the same battle over and over, just put in number instead e.g srand(5);

	//lets build our ninja's
	Ninja ninja1;
	ninja1.setupNinja("Jeff", (rand()%20)+1, (rand()%10)+1, (rand()%10)+1); //rand() - random number. Mod by 20 on that gives 0-19 back as a remainder. +1 coz don't want 0
	Ninja ninja2;
	ninja2.setupNinja("Geoff", (rand()%20)+1, (rand()%10)+1, (rand()%10)+1);

	//Battle to the death
	while(!ninja1.checkIfDead() && !ninja2.checkIfDead())
	{
		ninja1.takeDamage(ninja2.calculateDamage());
		ninja2.takeDamage(ninja1.calculateDamage());
	}

	if(ninja1.checkIfDead())
		cout<<ninja2.getName()<<" is the winner!"<<endl;
	else
		cout<<ninja1.getName()<<" is the winner!"<<endl;

	system("pause");

}