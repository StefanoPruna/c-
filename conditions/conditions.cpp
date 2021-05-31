// conditions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x;
	int y;
	cout << "Assign a value to x \n";
	cin >> x;
	cout << "and y: \n";
	cin >> y;
	if (x > y)
	{
		cout << x << " is greater than " << y << "\n";
	}
	else if (x < y)
	{
		cout << x << " is less than " << y << "\n";
	}
	else
	{
		cout << "X and Y are " << x + y << "\n"; //it will return the sum
	}

	//a short version of if statement similar to Ruby
	/*int time = 20;
	string result = (time < 18) ? "Good day" : "Good evening\n";
	cout << result;*/

	//Switch doesn't work well with string, for string, use if statements
	int day;
	cout << "What day is it?\n";
	cin >> day;
	switch (day)
	{
		case 1:
			cout << "it's Monday\n";
			break;
		case 2:
			cout << "It's Tuesday\n";
			break;
	}
}
