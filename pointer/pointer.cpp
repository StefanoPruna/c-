// pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int ste = 25;
	int los = ste;
	int *mark = &ste; //with * we create the pointer by mark var and & address of ste var

	//std::cout << "Hello World!\n"; if we add using namespace std, we don't have to use std now

	//To point to the memory of the var and not their value
	/*cout << &ste << endl;
	cout << &los << endl;
	cout << &mark << endl;*/

	cout << ste << endl;
	cout << los << endl;
	cout << *mark <<endl; //without the asterix it will point to the memory and not the value

	ste = 10;

	cout << ste << endl;
	cout << los << endl;
	cout << *mark << endl; //printing the reference value of ste var pointed by mark var

	//there is also reference or ref, but it points to the memory location only and it cannot be changed, while the pointer can be changed
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
