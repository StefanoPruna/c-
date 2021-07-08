// classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

//Create a Person Class and its attribute
//Inherit Student Class from Person Class with additional attributes and functions

int main()
{
	Person yourPerson;

	yourPerson.name = "Stefano";
	yourPerson.work = "Developer";
	yourPerson.age = 42;
	cout << "Your name is: " << yourPerson.name << " and your job is: " << yourPerson.work << " and your age is \n";

	yourPerson.isWorking();
	
	if (yourPerson.isNotWorking == true)
	{
		Student yourStudy;
		yourStudy.course();
	}

	return 0;
}