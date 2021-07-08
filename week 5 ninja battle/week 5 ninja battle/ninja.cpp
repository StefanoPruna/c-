#include "ninja.h"

void Ninja::setupNinja(string _name, int _level, int _str, int _def)
{
	name = _name;
	level = _level;
	str = _str;
	def = _def;
	hp = 50*level;
	critRate = 0.05*level;

	cout<<"Ninja: "<<name<<" lv: "<<level<<endl;
	cout<<"Hp: "<<hp<<" Str: "<<str<<" Def: "<<def<<endl;
	cout<<"Crit Rate: "<<critRate<<"%"<<endl;
}
int Ninja::calculateDamage(){
	int baseDamage = str*(level/2.0);

	//random number check for crit rate check
	float critCheck = rand()%100;
	//rand() gives a value between 0-23423423. Mod 100 will give the remainder of rand()/100, e.g 0-99
	critCheck = critCheck/100; //convert it to a percentage as decimal, eg 26, becomes 0.26

	if(critRate >= critCheck) //if its a critical hit
	{
		cout<<"Ninja "<<name<<" has done a critical hit!"<<endl;
		return baseDamage*2;
	}
	else
	{
		return baseDamage;
	}
}
void Ninja::takeDamage(int dmg){
	int calcDmg = dmg-((level/2.0)*def); //negate some of the damage we will receive based on level and defense
	if(calcDmg < 1)
		calcDmg = 1; //always 1 point of damage taken
	hp = hp - calcDmg; //heres where we get hurt

	cout<<"Ninja "<<name<<" was hit for "<<calcDmg<<"dmg"<<endl;
}
bool Ninja::checkIfDead(){
	return (hp < 1);
}
string Ninja::getName(){
	return name;
}