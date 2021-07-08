// WeekFive.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
//#include "Cat.h"
//#include "Dog.h"
#include "Animal.h"

using namespace std;

int main()
{
    //Instanciate the classes
    /*Dog Obi;
    Cat Yoda;

    Obi.name = "Obi";
    Obi.age = 1;
    cout << Obi.name << " has " << Obi.age << " anni\n";

    Yoda.name = "Yoda";
    cout << Yoda.name << "\n";
    Yoda.behaviour();*/

    //Alternative way to instanciate the same classes
    Cat myCat;
    Dog myDog;
	Animal yourAnimal;
    
    myCat.name = "Yoda";
    cout << myCat.name;
    myDog.breed = "cross";  
	myDog.name;
	yourAnimal.run();
}


