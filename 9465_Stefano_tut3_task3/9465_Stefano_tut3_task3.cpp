// 9465_Stefano_tut3_task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void myCount(int a, char b);

int main()
{
	int a;
	char b;

	cout << "Please enter a number:\n";
	cin >> a;
	cout << "Please enter counting condition (I/D):\n";
	cin >> b;

	myCount(a, b);

	return 0;
}

void myCount(int a, char b)
{
	if (b == 'I' || b == 'i') //I cannot use the "" for if statements
		cout << "Next number is: " << a + 1 << "\n";
	else
		cout << "Previous number is: " << a - 1 << "\n";
}
