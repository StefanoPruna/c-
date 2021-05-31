// startingWithC.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* 
to run the program from the terminal, run:
g++ filename.cpp
./a.out
Everytime I update the code, I have to run both commands!!!
*/

#include <iostream>
#include <string> 
#include <cmath> //for the sqrt function and other mathematical operations

using namespace std; //with this library, we won't need to add std:: everytime in the program

int main()
{
	//to make the var unchangeable, read-only, use constant
	const int minutesPerHour = 60;
	const float PI = 3.14; //with const you cannot ovveride the var

	// when we want to use scientific number, we can add e to indicate the power of 10
	float f1 = 35e3;
	double d1 = 12E4;

	cout << f1 + d1 << "\n";

	//I can concatenate strings to each other
	string myName = "ste";
	string myLastName = "loske";
	string fullName = myName.append(myLastName);
	cout << fullName << "\n";

	//to change the letter of a string
	myLastName[0] = 'H'; //in this case I have to use the appendix '' and not the quotations ""
	cout << myLastName << "\n";

	/*If we ask for the full name in one line, cin will only get the first input.
	 to avoid that, we use the getline function*/
	string myFullName;
	cout << "What's your full name?\n";
	getline(cin, myFullName);
	cout << "Your full name is: " << myFullName << "\n";
	//Without getline function, we won't get the whole string when input it

	cout << sqrt(9) << "\n"; //it will return the square root of 9
	cout << round(2.6) << "\n"; //to round a number

	int x;
	int y;
	cout << "Assign a value to x \n";
	cin >> x;
	cout << "and y: \n";
	cin >> y;
	if (x > y)
	{
		cout << x << " is greater than " << y << "\n";
	}
	else if (x < y)
	{
		cout << x << " is less than " << y << "\n";
	}
	else
	{
		cout << "X and Y are " << x + y << "\n"; //it will return the sum
	}

	//a short version of if statement similar to Ruby
	/*int time = 20;
	string result = (time < 18) ? "Good day" : "Good evening\n";
	cout << result;*/
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
