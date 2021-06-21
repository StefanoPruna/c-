#include "functions.h"

string addStrings(string str1, string str2) //<===no semicolon!
{
	str1 = str1+" ";//str1 is a copy of whatever was passed in
	return str1+str2;
}
void breakString(string* sPtr)
{
	*sPtr = *sPtr+*sPtr; //e.g cat becomes catcat 
	//pointer is pointing back out to a string somewhere which we are changing
}

void breakString(string &str)
{
	str = str+str; //e.g cat becomes catcat 
	//str passed in by reference, which means whatever is passed into this function
	//gets changed directly
}