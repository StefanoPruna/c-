// functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;

int add(int, int);

void increment(int *);

void incr(int[]);

void incrReference(int &);

int main()
{
	const int f = 45; //this var cannot be changed, because is declared as const
	//f++; it will give an error

	int x = 5;
	int y = 45;

	//passing by value
	cout << "inside main before callling add" << "\n";
	add('test', 5); //I assign a char as first value/parameter
	add(4, 5); //this is reference to a and b
	add(x, y);
	cout << "inside main after calling add" << "\n";
	system("pause");

	//last function
	increment(&x);
	cout << "outside function: " << x << "\n";

	//not sure
	int d = 5;
	int *e = increase(d);
	cout << "outise function:" << d << "\n";
	cout << "return from the function:" << *e << "\n";
}

//passing by value
int add(int a, int b)//creating two new vars, copy of x and y in the memory, but seperately, pass by value
{
	int c = a + b;
	cout << "Inside ADD " << c << "\n";
	return a + b; //included return, because the function is just int and so I have to add what type of return
}

//passing by pointer
void increment(int *num)//passing by pointer
{
	*num = 20;
	cout << "inside function: " << *num << "\n";
	//I don't need to add return, because the function is void
}

//passing an array
void incr(int num[])
{
	num[0] = 8;
	cout << "inside function array: " << num[0] << "\n";
}

//passing by reference
void incrReference (int &num)
{
	num = 8;
	cout << "inside function by reference: " << num << "\n";
}

int* increase(int &numb)
{
	numb = 10;
	return &numb;
}
