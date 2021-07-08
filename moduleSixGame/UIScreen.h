#pragma once
#include <iostream>

using namespace std;

class UIScreen
{
public:
	void displayOptions();

	int userValue;
};

void UIScreen::displayOptions()
{
	cout << "Welcome " << "##########\n";
	cout << "Insert the first value:\n";
	cin >> userValue;
}

