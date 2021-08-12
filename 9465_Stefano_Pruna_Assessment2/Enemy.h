#pragma once

#include <iostream>
#include <string>

using namespace std;

class Enemy
{
private:
	string* monsterName;
	int* healthEnemy;
	int* damage;

public:
	/*string monsterName;
	int healthEnemy, damage;*/
	Enemy(string &monsterName, int &healthEnemy, int &damage)
	{
		this->monsterName = &monsterName;
		this->healthEnemy = &healthEnemy;
		this->damage = &damage;

		/*if (monsterName == "Goblin")
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
		}*/
	}
};

