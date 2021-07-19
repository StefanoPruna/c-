#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	string name, subjects, address;
	string* pName = &name;
	string* pAddress = &address;
	int semester;
	double GPA;

public:
	string detailStudent(string pName, string subject, string pAddress)
	{
		this->pName = &name;
		this->pAddress = &address;
		this->subjects = subject;

		cout << "Student details:\n" << pName << " " << pAddress << " " << subjects << "\n";

		return name, subject, address;
		delete this;
	}

	int currentStudy(double result, int semesters)
	{
		this->GPA = result;
		this->semester = semesters;

		cout << "The current result is: " << result << "\n";

		cout << "The current semester is: " << semester << "\n";

		return result, semesters;
		delete this;
	}

	void displayStudent();
	void modifyStudy();
	friend void modifyStudyTest(Student details);
};

void Student::displayStudent()
{
	cout << "Insert the new name:\n";
	cin >> name;

	cout << "Insert the new street name address\n";
	cin >> address;

	cout << "Insert the new subject you are studying:\n";
	cin >> this->subjects;

	cout << *pName << " " << *pAddress << " " << subjects << "\n";
}

void Student::modifyStudy()
{
	cout << "The current GPA is: " << GPA << ". Insert the new GPA:\n";
	cin >> GPA;

	cout << "And the current semester is: " << semester << ". Insert the new semester:\n";
	cin >> semester;

	cout << "the new result is " << GPA << " in the " << semester << " semester\n";
}

void modifyStudyTest(Student details)
{
	cout << "The current GPA is: " << details.GPA << ". Insert the new GPA:\n";
	cin >> details.GPA;

	cout << "And the current semester is: " << details.semester << ". Insert the new semester:\n";
	cin >> details.semester;

	cout << "the new result is " << details.GPA << " in the " << details.semester << " semester\n";
}

