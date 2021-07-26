// 9465_Stefano_tut8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main()
{
	string name, subjects, address;
	//Student* studentDetails;

	/*studentDetails.detailStudent("loske", "Math", "Melbourne");
	studentDetails.currentStudy(0.0, 1);*/
	//
	////first student
	//studentDetails.displayStudent();	
	//studentDetails.modifyStudy();

	Student* studentOne = new Student(name, subjects, address);
	*studentOne->getName();

	//copy constructor
	/*Student studentTwo = studentDetails;
	studentTwo.detailStudent("Victoria", "IT", "Glenroy");
	studentTwo.displayStudent();
	studentTwo.modifyStudy();*/

	Student* studentTwo = new Student(*studentOne);

	return 0;
}