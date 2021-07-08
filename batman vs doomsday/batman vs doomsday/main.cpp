#include <iostream>
#include <string>
#include <stdlib.h> //rand(), srand()
#include <time.h> //time
#include "batman.h"
#include "doomsDay.h"
#include <Windows.h>

using namespace std;

void main(){
	srand(time(NULL));//set random number seed to current time (in milliseconds)

	Batman batman;
	batman.setup();
	DoomsDay doomsDay;
	doomsDay.setup();

	while(batman.hp > 0 && doomsDay.hp > 0){
		doomsDay.takeDamage(batman.attack(doomsDay.name));
		batman.takeDamage(doomsDay.attack(batman.name));
		Sleep(500);
	}

	if(batman.hp < 1)
		cout<<batman.name<<" was defeated! He dead"<<endl;
	else
		cout<<batman.name<<" wins the battle!!!"<<endl;

	system("pause");
}