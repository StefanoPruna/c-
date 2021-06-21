// 9465_Stefano_tut3_task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void mySum(int &a, int &b)
{
	/*int c;
	c = a + b;*/
	cout << "Sum of 2 numbers is: " << a + b << "\n";
}

int main()
{
	int firstNumber, secondNumber;

	cout << "Please enter the first number:\n";
	cin >> firstNumber;
	cout << "Please enter the second number:\n";
	cin >> secondNumber;

	mySum(firstNumber, secondNumber);

	return 0;
}
