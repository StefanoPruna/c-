#include<iostream>
#include <string>
#include "functions.h"

using namespace std;

void main(){

	string str = "bird";
	string str2 = "hat";
	string str3 = addStrings(str, str2); //value in str is copied into str1 of the function - pass by value

	cout<<"str3: "<<str3<<endl;

	string *p = &str; //p points to str
	breakString(p); //value in p copied in, which is the mem address of str. still pass by value, but
		//changed through this pointer still change str
	cout<<"str: "<<str<<endl;

	breakString(str2);//pass by reference. str2 passed in directly to the function and assumes the name of
		//of str during the function call. changes on str in the function are happening to str2
	cout<<"str2: "<<str2<<endl;

	system("pause");
}