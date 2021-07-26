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
	Student(string &name, string &address, string subjects, int semester, double GPA)
	{
		this->name = &name;
		this->address = &address;
		this->subjects = subjects;
		this->semester = semester;
		this->GPA = GPA;

		cout << "Current first student's details are:\n"
			<< name << ", " << address << ", " << subjects << ".\n";

		cout << "Insert the new name:\n";
		cin >> name;

		cout << "Insert the new street name address\n";
		cin >> address;
		
		cout << "Insert the new subject you are studying:\n";
		cin >> subjects;
		
		cout << name << " " << address << " " << subjects << "\n";
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
		this->name = new string("");
		this->address = new string("");
		this->subjects = student.subjects;
		this->semester = student.semester;
		this->GPA = 0.0;

		cout << "Insert the second student's name:\n";
		cin >> *name;

		cout << "Insert the second student's street name address\n";
		cin >> *address;

		cout << "Insert the second student's subject you are studying:\n";
		cin >> subjects;

		cout << *name << " " << *address << " " << subjects << "\n";
	}
};


//My way, but it's not correct
//	int currentStudy(double result, int semesters)
//	{
//		this->GPA = result;
//		this->semester = semesters;
//
//		cout << "The current result is: " << result << "\n";
//
//		cout << "The current semester is: " << semester << "\n";
//
//		return this->GPA, this->semester;
//		delete this;
//	}
//
//	void displayStudent();
//	void modifyStudy();
//	friend void modifyStudyTest(Student details);
//};
//
//void Student::displayStudent()
//{
//	cout << "Insert the new name:\n";
//	cin >> *name;
//
//	cout << "Insert the new street name address\n";
//	cin >> *address;
//
//	cout << "Insert the new subject you are studying:\n";
//	cin >> this->subjects;
//
//	cout << *name << " " << *address << " " << subjects << "\n";
//}
//
//
//void Student::modifyStudy()
//{
//	cout << "The current GPA is: " << GPA << ". Insert the new GPA:\n";
//	cin >> GPA;
//
//	cout << "And the current semester is: " << semester << ". Insert the new semester:\n";
//	cin >> semester;
//
//	cout << "the new result is " << GPA << " in the " << semester << " semester\n";
//}
//
//void modifyStudyTest(Student details)
//{
//	cout << "The current GPA is: " << details.GPA << ". Insert the new GPA:\n";
//	cin >> details.GPA;
//
//	cout << "And the current semester is: " << details.semester << ". Insert the new semester:\n";
//	cin >> details.semester;
//
//	cout << "the new result is " << details.GPA << " in the " << details.semester << " semester\n";
//}
//
