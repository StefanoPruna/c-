// 9465_Stefano_tut8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main()
{
	Student studentDetails;

	studentDetails.detailStudent("loske", "Math", "Melbourne");
	studentDetails.currentStudy(0.0, 1);

	Student studentTwo = studentDetails;
	
	studentDetails.displayStudent();	
	studentDetails.modifyStudy();

	studentTwo.displayStudent();
	studentTwo.modifyStudy();

	return 0;
}