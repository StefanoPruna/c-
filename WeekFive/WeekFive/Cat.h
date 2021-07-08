#pragma once

#include <string>

using namespace std;

class Cat
{
public:
	string name;
	int age;

	/*void behaviour()
	{
		cout << name << " is purring!\n";
	}*/

	void behaviour();//another way to call the function
};

//alternative way
void Cat::behaviour()
{
	cout << "Another way to call the function in the class\n";
}

