#include "batman.h"

void Batman::setup(){
	name= "Batman";
	hp = rand()%100+1;//rand()0-12341313%100(0-99)+1
	str = rand()%20+1;
	def = rand()%20+1;
	cout<<name<<" hp: "<<hp<<" str: "<<str<<" def: "<<def<<endl;
}
int Batman::attackWithBatCar(string enemy){
	cout<<name<<" slams into "<<enemy<<" with his Bat Car!"<<endl;
	return str*5;
}
int Batman::punch(string enemy){
	cout<<name<<" punches "<<enemy<<" right in the face!"<<endl;
	return str;
}
int Batman::throwBatarang(){
	cout<<name<<" throws his batarang!"<<endl;
	return str*2;
}
int Batman::attack(string enemy){
	int action = rand()%10;
	if(action < 5)
		return punch(enemy);
	else if(action < 8)
		return throwBatarang();
	else
		return attackWithBatCar(enemy);
}
void Batman::takeDamage(int dmg){
	dmg -= def;
	if(dmg < 1)
		dmg = 1;//make sure always take 1 point of damage at least
	cout<<name<<" takes "<<dmg<<" damage!"<<endl;
	hp -= dmg;

}