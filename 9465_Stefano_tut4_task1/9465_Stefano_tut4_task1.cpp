// 9465_Stefano_tut4_task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void myPower(int n, int numberPower)
{
	static int nPower = n;

	for(int i=1; i < numberPower; i++)
		nPower *= n;

	cout << "The " << n << " to the power of " << numberPower << " is " << nPower << "\n";
}

int mainOne()
{
	int numberPower, n;

	cout << "Choose a number:\n";
	cin >> n;
	cout << "Choose the number of power to perform:\n";
	cin >> numberPower;

	myPower(n, numberPower);

	return 0;
}
