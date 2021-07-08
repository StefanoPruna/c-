#include <iostream>
#include <string>
#include <stdlib.h> //srand, rand - random numbers
#include <time.h> //time

using namespace std;

//makes sure this code isn't pasted and compiled twice or more
#ifndef NINJA_H
#define NINJA_H

class Ninja{
	private:
		string name;
		int level, hp, str, def; //health points, strength, defense
		float critRate; //critical hit rate (percentage of chance to do extra damage)
	public:
		void setupNinja(string _name, int _level, int _str, int _def);
		int calculateDamage();
		void takeDamage(int dmg);
		bool checkIfDead();
		string getName();
}; //<============ dont forget your semicolon at the end of class definition

#endif
