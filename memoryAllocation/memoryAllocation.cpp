// memoryAllocation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int data; //unallocated/Uninitialized variable
int data2 = 123; //Initialized data/variable

double *pDble = 0; //the pDble var is Pointing to the memory allocation only, it creates a new memory allocation


int main()
{
	int count = 0;
	while (true)
	{
		count++;
		pDble = new (nothrow) double[50000]; //nothrow is the exeption when we use all the memory available
		if (!pDble)
		{
			cout << "Bad memory allocation\n ";
			exit(0);
			//delete pDble; //because it's a while infinite loop, we can put the delete line here, otherwise, it has to stay outside, otherwise we won't remove the pointer
		}

		delete pDble; //we need to remove the pointer that takes memory
		cout << "Next " << count << "\n";
	}
	cout << "Out of the loop\n";
}
