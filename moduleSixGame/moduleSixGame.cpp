// moduleSixGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdlib.h> //random library
#include <time.h>
#include "UIScreen.h"

using namespace std;

int main()
{
	/*below is the working code without classes
	srand(time(NULL));
	int count = 0;
	while (count < 4)
	{
		int randomNumber = rand() % 10 + 1;
		std::cout << randomNumber << "\n";
		count++;
	}*/

	UIScreen newUIScreen;
	newUIScreen.displayOptions();

	return 0;
}
