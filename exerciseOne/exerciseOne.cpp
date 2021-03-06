/* exerciseOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
to run the program from the terminal, run:
g++ filename.cpp
./a.out
Everytime I update the code, I have to run both commands!!!
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//First part of the exercise, ask for my name and student ID and display them in the console
	string myName;
	int myId;

	//to make the var private, use constant
	//const int theId;

	cout << "Please enter your name:\n";
	cin >> myName;
	cout << "Please enter your student id:\n";
	cin >> myId;
	cout << "Your name is " << myName << " and your student ID is " << myId << "\n";

	//Second part of the exercise, ask for your name, family name and print them out with their allocated address in the memory
	string yourName;
	string yourSurname;

	cout << "Please enter your name:";
	cin >> yourName;

	cout << "Please enter your family name:";
	cin >> yourSurname;

	cout << "Hello " << yourName << " "<< yourSurname << "\n";

	/*cout << "Address of name: " << &yourName << endl;
	cout << "Address of family name: " << &yourSurname << endl;*/

	//Another way to do it:
	string *ptrName = &yourName;
	string* ptrSurname = &yourSurname; //Preferred
	cout << "Address of name: " << ptrName << "\n";
	cout << "Address of family name: " << ptrSurname << "\n";
}
