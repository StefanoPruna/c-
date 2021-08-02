// operatorOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Distance.h"

using namespace std;

void print(int i)
{
	cout << " Here is int " << i << "\n";
}
void print(char const *c)
{
	cout << " Here is char* " << c << "\n";
}

int main()
{
	//call the print function twice, but with different parameters
	print(10);
	print("ten");

	//to add two functions, we cannot simple add them 
	Distance d1 = Distance();
	d1.setDistanceInMilliMeters(5000);

	Distance d2 = Distance();
	d2.setDistanceInMilliMeters(2500);
	
	Distance d3 = d1 + d2; //it gives an error on the operator + if I don't create a newDistance in the class
	d1.printDistance();
	d2.printDistance();
	d3.printDistance();



	return 0;
}