// assessmentTesting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "keepGoingGame.h"

using namespace std;




int main()
{
	keepGoingGame resumeGame;
	int zone;

	resumeGame.whatC();

	cout << "what zone is it? 1 or 2\n";
	cin >> zone;

	resumeGame.keepGoing(zone);

	system("pause");

	//resumeGame.drink(zone);

	//system("pause");
	//resumeGame.goBack(zone);

	return 0;
}
