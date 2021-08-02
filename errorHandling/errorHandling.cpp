// errorHandling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <exception>

using namespace std;

class InvalidUserInputException: public exception
{
public:
	virtual const char* what() const throw() //it has to be char* what(), otherwise it won't work
		{
		return "customized exception happened\n";
		}
};

int main()
{
	//int x = 10, y = 0; it will give an error
	bool rightChoice = false;
	int yourAge;
	cout << "insert your age\n";
	cin >> yourAge;
	

		try
		{
			if (yourAge > 0)
			{
				cout << "the program works\n";
				rightChoice = true;
			}
			else
			{
				throw InvalidUserInputException();
				cout << "invalid input\n";
				rightChoice = false;
			}
		}

		catch (InvalidUserInputException &yourAge)
		{
			cout << yourAge.what() << "An error occurs\n";
			//break;
		}
		catch (...)
		{
			cout << "not valid input\n";
			//break;
		}
	
	return 0;
}
