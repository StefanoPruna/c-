#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <ctime>

using namespace std;

class Date
{
private:
	int month, date, year;

public:
	void SetDate(int day, int months, int years);
	void ShowDate();
};

void Date::SetDate(int day, int months, int years)
{
	//Asks for the date
	cout << "What date is it? \n"
		"Insert the month\n";
	cin >> month;
	cout << "Insert the day:\n";
	cin >> date;
	cout << "Insert the year:\n";
	cin >> year;
	ShowDate();
}

void Date::ShowDate()
{
	//Shows the date
	cout << "The date is: " << month << "/" << date << "/" << year << "\n";
	
}

