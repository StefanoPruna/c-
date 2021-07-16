
#include <iostream>
#include <string>
#include "keepGoingGame.h"

using namespace std;

string answer;
keepGoingGame resume;

void partThree(int zone)
{
	cout << "zone tree";

}

void partTwo(int zone)
{
	//keepGoingGame resume;
	cout << "zone two" << zone << "\n"
		"do you want to go back? yes or no\n";
	cin >> answer;

	if (answer == "yes")
		resume.keepGoing(zone-1);
	else
	{
		cout << "let's stay in the zone 2" << zone << "\n";
		resume.keepGoing(zone);
	}
		
}

void fight(int zone)
{
	cout << "fight!\n";
	
	partTwo(zone+1);
}
void partOne(int zone)
{

	cout << "this is zone one";
	fight(zone);
	//zone = "zoneTwo";
	//partTwo(zone);
}

void keepGoingGame::keepGoing(int zone)
{
	
	if (zone == 1)
	{
		//zone = "zoneTwo";
		partOne(zone);
	}
	else if (zone == 2)
		partTwo(zone);
	else
		partThree(zone);
}

void keepGoingGame::drink(int zone)
{
	cout << "do you want to resumet the game?\n";
	system("pause");
	if (zone == 1)
		partOne(zone);
	else
		partTwo(zone);
}

void keepGoingGame::goBack(int zone)
{
	string choice;
	cout << "do you want to go back? yes or not \n";
	cin >> choice;
	if (choice == "yes")
	{
		zone -= 1;
	}
	drink(zone);
}