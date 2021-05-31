// loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 6)
		{
			break; //if i is 6 the program stops without printing it
		}
		else if (i == 4)
		{
			continue; //if i is 4, doesn't print 4
		}
		cout << i << "\n";
	}
}


