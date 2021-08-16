// Revision.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

//Q1.Creating a class name CText with 1 character array
//class CText
//{
//	list<char*> cArray;
//
//public:
//	//Q2. Create a constructor from the array
//	list<char*> getArray()
//	{
//		return this->cArray;
//	}
//
//	CText(char &cArray)
//	{
//		//this->cArray = &cArray;
//	}
//
//	//Q3. deconstructor handle memory allocation
//	~CText()
//	{
//		delete this;
//	}
//};

//Q8. Create your own exception class name MyExcept
//class InvalidUserInputException : public exception
//{
//public:
//	virtual const char* what() const throw()
//	{
//		return "User insert a wrong input\n";
//	}
//};

void cipherList()
{
	//Q7 Create a function for convert string "world green" to new string by comparing the myList from Q6
	//caesar cipher output should be "epkso xkzzq"

	//list<char> cipherArray = { 119, 111, 114, 108, 100, 32, 103, 114, 101, 101, 110 };
	////char cipherArray[12] = { 119, 111, 114, 108, 100, 32, 103, 114, 101, 101, 110 };
	////cout << cipherArray << "\n";

	//for (auto const &v : cipherArray)
	//{
	//	cout << v << "\n";
	//}

	string wordToConvert = "world green";
	string newString;

	char myList[5] = { 104, 97, 108, 111 };
	//char myList[5] = { 'h', 'a', 'l', 'o' };
	for (auto const &v : myList)
	{
		cout << v << "\n";
	}

	for (int i = 122; i > 96; i--)
	{
		if (i != 104 || i != 97 || i != 108 || i != 111)
		{
			char myList = char(i);	
			//cout << myList << "\n";
			/*for (int x = 0; x <= wordToConvert.length(); x++)
			{
				if (wordToConvert[x] == myList)
				{
					wordToConvert[x] = myList;
					cout << wordToConvert[x] << "\n";
				}
			}*/
		}
	}
	
}

int main()
{
	//char cArray[1] = { 'c' };
	//CText* myArray = new CText(*cArray);

	//cout << *cArray << "\n";


 //   //Q4. create the array with the alphabet letters from a to z, index in ASCII from 97 to 122
	//list<char> alphabet[36];
	////, int arrayIndex = 0 arrayIndex++
	//for (int index = 97; index < 123; index++)
	//{
	//	char alphabet = char (index);
	//	cout << alphabet << "\n";
	//	/*for (int index = 0; index < 27; index++)
	//	{
	//		cout << alphabet << "\n";
	//	}*/
	//}

	////Q5 do the same of Q4, but opposite, index-- from 122 to > 96
	//for (int index = 122; index > 96; index--)
	//{
	//	char alphabet = char(index);
	//	cout << alphabet << "\n";
	//}

	//Q6 Create array name mylist and add character h a l o then follow by the rest character from z to a
	//list <char> myList[36];
	/*char myList[36] = { 104, 97, 108, 111 };
	
	cout << myList << "\n";

	for (int i = 122; i > 96; i--)
	{
		if (i != 104 || i != 97 || i != 108 || i != 111)
		{
			char myList = char(i);
			cout << myList << "\n";
		}
	}*/
	
	cipherList();
	
	//delete myArray; //refering to Q1-3

	//Q9. Create your own exception class name MyExcept and test it
	//bool rightChoice = false;
	//int yourAge;
	//cout << "insert your age\n";
	//cin >> yourAge;

	//try
	//{
	//	if (yourAge > 0)
	//	{
	//		cout << "the program works\n";
	//		rightChoice = true;
	//	}
	//	else
	//	{
	//		throw InvalidUserInputException();
	//		cout << "invalid input\n";
	//		rightChoice = false;
	//	}
	//}

	//catch (InvalidUserInputException &yourAge)
	//{
	//	cout << yourAge.what() << "An error occurs\n";
	//	//break;
	//}
	//catch (...)
	//{
	//	cout << "not valid input\n";
	//	//break;
	//}

	//Q10 get an input sentence and print out number of characters excluding the space
	//string yourString;
	//int size = 0;
	//cout << "Insert your sentence: \n";
	//getline(cin, yourString);

	//for (int i = 0; yourString[i] != '\0'; i++)
	//{
	//	if(yourString != " ")
	//		size++;
	//}

	//cout << size << "\n";

	return 0;
}



