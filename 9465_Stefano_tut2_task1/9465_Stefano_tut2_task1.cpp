// 9465_Stefano_tut2_task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

typedef int *IntPtrType; //var for task 2

int main()
{
	//TASK 1
	//int i, n;
	//int * p;
	//cout << "How many numbers would you like to type? \n";
	//cin >> i;
	//p = new (nothrow) int[i];
	//if (p == 0)
	//	cout << "Error: memory could not be allocated\n"; //It won't display this line
	//else
	//{
	//	for (n = 0; n < i; n++)
	//	{
	//		cout << "Enter number: \n"; //Asks to enter a number and repeats how many times I inserted the number before
	//		cin >> p[n];
	//	}
	//	cout << "You have entered: \n"; //It will show the number I inserted just before
	//	for (n = 0; n < i; n++)
	//		cout << p[n] << ", \n";
	//	delete[] p;
	//}
	//return 0;

	//TASK 2
	/*IntPtrType ptr_a, ptr_b, *ptr_c;

	ptr_a = new int;
	*ptr_a = 3;
	ptr_b = ptr_a;
	cout << *ptr_a << " " << *ptr_b << "\n";

	ptr_b = new int;
	*ptr_b = 9;
	cout << *ptr_a << " " << *ptr_b << "\n";

	*ptr_b = *ptr_a;
	cout << *ptr_a << " " << *ptr_b << "\n";

	delete ptr_a;
	ptr_a = ptr_b;
	cout << *ptr_a << " " << *&*&*&*&*ptr_b << "\n";

	ptr_c = &ptr_a;
	cout << *ptr_c << " " << **ptr_c << "\n";

	delete ptr_a;
	ptr_a = NULL;

	return 0;*/

	//Challenge Task
	int t;
	string nameArray[5];
	string* pointer = {};

	cout << "How many name you want to store?\n";
	cin >> t;

	if (t == 0)
	{
		cout << "Zero name selected\n";
		return 0;
	}
	else
	{
		for (int i = 0; i < t; i++)
			{
				cout << "Please enter name " << i + 1 << ":\n";
				cin >> nameArray[i];
				pointer = nameArray;
			}
			//getline(cin, names);	
		cout << "First address of array is: " << &pointer << "\n";

		for (int i = 0; i < t; i++)
		{
			cout << "First character of name " << i + 1 << " is:\n";
			cout << pointer[i][0] << "\n";
		}
		for (int i = 0; i < t; i++)
			cout << pointer[i] << "\n";

		pointer = NULL;
	}
	system("pause");
	return 0;		
	delete[] pointer;
}

