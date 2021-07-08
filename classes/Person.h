#pragma once
#include <string>
#include <iostream>

using namespace std;

//Creating a Person Class and its attribute

class Person
{
public:
	string name, work;
	int age;
	bool isNotWorking = false;

	void isWorking();
};

void Person::isWorking()
{
	bool works = false;
	string employee;

	while (works == false)
	{
		cout << "Are you working? Answer with Yes or No, please:\n";
		cin >> employee;
		if (employee == "Yes" || employee == "yes")
		{
			cout << "Good on you!\n";
			works = true;
		}
		else if (employee == "No" || employee == "no")
		{
			isNotWorking = true;
			works = true;
		}			
		else
			cout << "You have insert the wrong input, try again please\n";
	}
}

//Inherit Student Class from Person Class with additional attributes and functions

class Student : public Person
{
public:
	string whatCourse;
	int whatYear;

	void course();
};

void Student::course()
{
	cout << "What course are you studying?\n";
	cin >> whatCourse;
	cout << "And in what year are you?\n";
	cin >> whatYear;
	cout << "Your course is: " << whatCourse << " and you are in the " << whatYear << " year\n";
}



