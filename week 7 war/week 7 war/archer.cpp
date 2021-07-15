#include "archer.h"

Archer::Archer(){
	accuracy = rand()%100 + 1; 
	//rand()%100 gives values randomly between 0-99,
	//+1 to get 1-100
}

bool Archer::shootArrow(){
	int attempt = rand()%100+1;
	if(attempt < accuracy) //successful arrow
		return true;
	else
		return false;
}