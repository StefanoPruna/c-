#pragma once

#include <iostream>
#include <string>

using namespace std;

//#ifndef resumeGame
//#define resumeGame

class keepGoingGame
{
public:
	
	void keepGoing(int zone);
	void drink(int zone);
	void goBack(int zone);
	void whatC();
	bool rightClass = false;
	bool* prightClass = &rightClass;
	string character;

};


//#endif

