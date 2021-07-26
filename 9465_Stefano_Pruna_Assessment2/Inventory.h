#pragma once

#include <iostream>
#include <string>

using namespace std;

class Inventory
{
private:
	int* coins;
	int* potion;
public:
	Inventory(int &coins, int &potion)
	{
		this->coins = &coins;
		this->potion = &potion;
	}	

	//Deconstructor
	~Inventory()
	{
		delete this;
	}
};



