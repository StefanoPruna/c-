#include <iostream>
#include <string>
#include <stdio.h> ///rand, srand
#include <time.h> //time for the seed
#include "army.h"

using namespace std;

void main(){
	srand(time(NULL)); //setup random number series seed value

	Army* redArmy = new Army("Red");
	Army* blueArmy = new Army("Blue");

	while(!redArmy->isDefeated() && !blueArmy->isDefeated())
	{
		int redVolley = redArmy->fireVolley();
		int blueVolley = blueArmy->fireVolley();

		redArmy->hitByArrows(blueVolley);
		blueArmy->hitByArrows(redVolley);
	}

	if(redArmy->isDefeated() && blueArmy->isDefeated())
		cout<<"Both sides demolished. Oh the humanity!"<<endl;
	else if (redArmy->isDefeated())
		cout<<"Blue Army is the victor!"<<endl;
	else
		cout<<"Red Army is the victor!"<<endl;

	delete redArmy;
	delete blueArmy;

	system("pause");
}