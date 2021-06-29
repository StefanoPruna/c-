// 9465_Stefano_tut3_task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int a, b;
int mySum(int, int);

int mainOne()
{
	cout << "Please enter the first number:\n";
	cin >> a;
	cout << "Please enter the second number:\n";
	cin >> b;

	mySum(a, b);
	return 0;
}

int mySum(int a,int b)
{
	cout << "Sum of 2 numbers is: " << a + b << "\n";
	return a+b;
	//return 0; what shall I use in this case, return 0, or return a+b? it works in both case
}