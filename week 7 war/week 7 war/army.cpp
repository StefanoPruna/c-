#include "army.h"

Army::Army(string name){
	armyName = name;
	
	//lets build an army!
	//dynamically build 500 archers for this army
	for(int i = 0; i < 50000; i++)
	{
		Archer* archer = new Archer();
		archers.push_back(archer);
	}
}

Army::~Army(){
	//cleanup if any archers left behind when we exit

	if(archers.size() > 0)
	{
		for(list<Archer*>::iterator it = archers.begin();
			it != archers.end(); /* leave it++ out of here!*/)
		{
			delete (*it); //delete the dynamic memory pointer
						//is pointing at in the list
			it = archers.erase(it);//remove entry from the list
		}
	}
}

int Army::fireVolley(){
	int totalArrows = 0;
	for(list<Archer*>::iterator it = archers.begin();
		it != archers.end(); it++){
			if((*it)->shootArrow()) //check if each archer shoots
				totalArrows++;
	}
	cout<<armyName<<" army fires a volley of "<<totalArrows<<"arrows!"<<endl;
	return totalArrows;
}

void Army::hitByArrows(int arrows){
	list<Archer*>::iterator it = archers.begin();
	int killedArchers = 0;
	while(archers.size() > 0 && arrows > 0)
	{
		delete (*it); //delete an archers memory
		it = archers.erase(it); //remove from the list
		arrows--; //arrow is spent on killing a dude
		killedArchers++;
	}
	cout<<armyName<<" loses "<<killedArchers<<" soldiers in that attack!"<<endl;
}

bool Army::isDefeated(){
	if(archers.size() == 0) //no archers left
		return true;
	else
		return false;
}
