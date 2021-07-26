#pragma once

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	string subjects;
	string* name;
	string* address;
	int semester;
	double GPA;

public:
	string* getName()
	{
		cout << "Insert the new name:\n";
		cin >> *name;

		cout << "Insert the new street name address\n";
		cin >> *address;

		cout << "Insert the new subject you are studying:\n";
		cin >> this->subjects;

		cout << *name << " " << *address << " " << subjects << "\n";
		return this->name;
	}
	string* detailStudent(string &name, string subject, string &address)
	{
		this->name = &name;
		this->address = &address;
		this->subjects = subject;

		cout << "Student details:\n" << name << " " << address << " " << subjects << "\n";

		//return name, subject, address;
		return 0;
		delete this;
	}

	//Deconstructor
	~Student()
	{
		//TO DO check if we need to create a deconstructor
		delete this;
	}

	//copy constructor
	Student(const Student &student)
	{
		/*cout << "Insert the new name:\n";
		cin >> name;

		cout << "Insert the new street name address\n";
		cin >> address;

		cout << "Insert the new subject you are studying:\n";
		cin >> this->subjects;

		cout << *pName << " " << *pAddress << " " << subjects << "\n";*/
		this->subjects = student.subjects;
		this->semester = student.semester;

		this->name = new string("");

	}

	int currentStudy(double result, int semesters)
	{
		this->GPA = result;
		this->semester = semesters;

		cout << "The current result is: " << result << "\n";

		cout << "The current semester is: " << semester << "\n";

		return this->GPA, this->semester;
		delete this;
	}

	void displayStudent();
	void modifyStudy();
	friend void modifyStudyTest(Student details);
};

void Student::displayStudent()
{
	cout << "Insert the new name:\n";
	cin >> *name;

	cout << "Insert the new street name address\n";
	cin >> *address;

	cout << "Insert the new subject you are studying:\n";
	cin >> this->subjects;

	cout << *name << " " << *address << " " << subjects << "\n";
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

