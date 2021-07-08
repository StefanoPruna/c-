#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
	int empNo;
	float empSalary;

public:
	void SetEmpNo();
	void ShowEmpNo();
	void SetEmpSalary();
	void ShowEmpSalary();
};

void Employee::SetEmpNo()
{
	//asks for employee's number
	cout << "What's your employee number?\n";
	cin >> empNo;
	ShowEmpNo();
}

void Employee::ShowEmpNo()
{
	//displays the employee's number
	cout << "Your employee number is " << empNo << "\n";
}

void Employee::SetEmpSalary()
{
	//asks for employee's salary
	cout << "And what's your salary?\n";
	cin >> empSalary;
	ShowEmpSalary();
}

void Employee::ShowEmpSalary()
{
	//displays the employee's salary
	cout << "And your salary is: " << empSalary << "\n";
}

