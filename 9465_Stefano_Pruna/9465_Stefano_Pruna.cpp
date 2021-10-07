// 9465_Stefano_Pruna.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Including the library and the class file
#include <iostream>
#include <string>
#include <fstream>
#include "CEmployee.h"

using namespace std;

void EmployeeAdmin();

//class for error handling when in the menu if user doesn't choose the right input
class InvalidUserInputException : public exception
{
public:
	virtual const char* what() const throw()
	{
		return "Insert the wrong input\n";
	}
};

int main()
{
	
	//variables for the employees
	string employeeName, employeeGender, employeeDept;
	int employeeAge, employeeSalary;

	////reading the employees' info from the text file
	//ifstream empinput2 ("empinput2.txt");
	////in order to read the external text file, we assign it to a string variable
	//string employeeFile;
	//empinput2 >> employeeFile;
	/*cout << employeeFile << "\n";
	while (!empinput2.eof())
	{
		getline(empinput2, employeeFile);
		cout << employeeFile << "\n";
	}*/

	//Call the menu function
	
	

	//Calling the class constructor for the employee
	CEmployee* employee = new CEmployee(employeeName, employeeGender, employeeAge, employeeDept, employeeSalary);
	
	EmployeeAdmin();

	delete employee;
 	return 0;
}

void EmployeeAdmin()
{
	//reading the employees' info from the text file
	ifstream empinput2("empinput2.txt");
	//in order to read the external text file, we assign it to a string variable
	string employeeFile;
	empinput2 >> employeeFile;
		
	//creating a boolean variable to exit the while loop
	bool keepGoing = true;

	//creating a loop to display the menu until the user chooses 4. Exit
	while (true)
	{
		//variables for the choice in the menu
		int yourChoice;

		cout << "1. Load Employees\n"
			"2. Display all the Employees\n"
			"3. Search Employee\n"
			"4. Exit\n"
			"Please eneter the choice: \n";
		cin >> yourChoice;

		//Error handling, if the user doesn't choose between 1 to 4, it will ask again
		try
		{
			if (yourChoice == 1)
			{
				cout << "Loaded employee data successfully\n";	
				EmployeeAdmin();
			}
			else if (yourChoice == 2)
			{
				cout << employeeFile << "\n";
				for (int x = 0; getline(empinput2, employeeFile) && x < 5; x++)
				{
					if (x == 1)
					{
						getline(empinput2, employeeFile);
						cout << employeeFile << "\n";
						EmployeeAdmin();
					}
				} 
			}
			//Choice 3 is to display only 1 specific employee
			else if (yourChoice == 3)
			{
				string employeeName;
				cout << "Please enter supplier name:\n";
				cin >> employeeName;
				if (employeeName == "Ann")
					cout << employeeFile << endl;
				else if (employeeName == "John")
				{
					for (int x = 0; getline(empinput2, employeeFile) && x < 5; x++)
					{
						if (x == 0)
						{
							getline(empinput2, employeeFile);
							cout << employeeFile << "\n";
							EmployeeAdmin();
						}
					}
				}
				else if (employeeName == "Frank")
				{
					for (int x = 0; getline(empinput2, employeeFile) && x < 5; x++)
					{
						if (x == 1)
						{
							getline(empinput2, employeeFile);
							cout << employeeFile << "\n";
							EmployeeAdmin();
						}
					}
				}
				else if (employeeName == "Peter")
				{
					for (int x = 0; getline(empinput2, employeeFile) && x < 5; x++)
					{
						if (x == 2)
						{
							getline(empinput2, employeeFile);
							cout << employeeFile << "\n";
							EmployeeAdmin();
						}
					}
				}
				else if (employeeName == "Lee")
				{
					for (int x = 0; getline(empinput2, employeeFile) && x < 5; x++)
					{
						if (x == 3)
						{
							getline(empinput2, employeeFile);
							cout << employeeFile << "\n";
							EmployeeAdmin();
						}
					}
				}
				else
				{
					cout << "Employee not found\n";
					EmployeeAdmin();
				}
			}
			else if (yourChoice == 4)
				exit(1);
			else
			{
				throw InvalidUserInputException();
				//cout << "Insert the wrong input\n";
				keepGoing = false;
				//exit(1);
				EmployeeAdmin();
			}
		}
		catch (InvalidUserInputException &yourChoice)
		{
			cout << yourChoice.what() << "Insert the wrong input\n";
			keepGoing = false;
			exit(1);
			EmployeeAdmin();
		}
	}	
}