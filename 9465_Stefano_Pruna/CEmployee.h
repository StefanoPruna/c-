#include <iostream>
#include <string>

using namespace std;

//Creating a class for the employees
class CEmployee
{
	// created employee's objects as private, because they are not sharable
private:
	string* employeeName;
	string* employeeGender;
	int* employeeAge;
	string* employeeDept;
	int* employeeSalary;

	//variable for the choice in the menu
	int yourChoice;

	//the functions are public, so I can run them on the main program
public:
	//get all the functions related to the Employees
	string* getName()
	{
		return this->employeeName;
	}
	string* getGender()
	{
		return this->employeeGender;
	}
	int* getAge()
	{
		return this->employeeAge;
	}
	string* getDept()
	{
		return this->employeeDept;
	}
	int* getSalary()
	{
		return this->employeeSalary;
	}

	// overloaded constructor
	CEmployee(string &employeeName, string &employeeGender, int &employeeAge, string &employeeDept, int &employeeSalary)
	{
		this->employeeName = &employeeName;
		this->employeeGender = &employeeGender;
		this->employeeAge = &employeeAge;
		this->employeeDept = &employeeDept;
		this->employeeSalary = &employeeSalary;
	}
};