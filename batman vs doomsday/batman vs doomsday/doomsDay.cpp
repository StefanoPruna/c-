#include "doomsDay.h"

void DoomsDay::setup(){
	name = "DoomsDay";
	hp = rand()%100+1;
	str = rand()%20+1;
	def = rand()%20+1;
	cout<<name<<" hp: "<<hp<<" str: "<<str<<" def: "<<def<<endl;
}

int DoomsDay::attack(string enemy){
	cout<<name<<" punches "<<enemy<<" really hard!"<<endl;
	return str*(rand()%4+1);
}

void DoomsDay::takeDamage(int dmg){
	dmg -= def;
	if(dmg < 1)
		dmg = 1;//make sure always take 1 point of damage at least
	cout<<name<<" takes "<<dmg<<" damage!"<<endl;
	hp -= dmg;

}