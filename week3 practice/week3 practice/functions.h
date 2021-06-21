#include <iostream>
#include <string>

using namespace std;

//header file is where to put function prototypes

//pass by value
string addStrings(string str1, string str2);//<---no body of function = prototype

//pass by value, but with a pointer
void breakString(string* sPtr);

//pass by reference
void breakString(string &str);