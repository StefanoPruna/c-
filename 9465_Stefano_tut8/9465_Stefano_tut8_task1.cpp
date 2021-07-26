// 9465_Stefano_tut8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main()
{
	string name = "Loske";
	string subjects = "Math";
	string address = "Melbourne";
	int semester = 1;
	double GPA = 0.0;

	Student* studentOne = new Student(name, address, subjects, semester, GPA);

	//copy constructor
	Student* studentTwo = new Student(*studentOne);

	//The way I did
	//Student* studentDetails;

	/*studentDetails.detailStudent("loske", "Math", "Melbourne");
	studentDetails.currentStudy(0.0, 1);*/
	//
	////first student
	//studentDetails.displayStudent();	
	//studentDetails.modifyStudy();

	//copy constructor
	/*Student studentTwo = studentDetails;
	studentTwo.detailStudent("Victoria", "IT", "Glenroy");
	studentTwo.displayStudent();
	studentTwo.modifyStudy();*/

	return 0;
	delete studentOne, studentTwo;
}