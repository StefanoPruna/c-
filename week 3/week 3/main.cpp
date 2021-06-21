#include <iostream>
#include <string>

using namespace std;
//function structure
//returnType funcName(parameter list(stuff we wanna pass into the fuction))
int sum(int a, int b)
{
	int r = a+b;
	return r;
}

int wrecker(int x)
{
	x = x*x*x*x*x*x;
	return x;
}

void actualWrecker(int *ptr)
{
	*ptr += 10;
}

void arrayWrecker(double dArr[], int arraySize)
{
	for(int i = 0; i < arraySize; i++)
	{
		dArr[i] *= dArr[i]; //dArr[i] = dArr[i]*dArr[i];
	}
}

//the &notation in the parameter list means:
//still treat me like whatever datatype (int in this case), but if you pass a variable into
//this function, I will act as an alias for it. Which means, whatever variables you pass in,
//will actually get modified inside the function.

//TL:DR; & means we actually actually pass the variable in, and not just a copy of its value
void referenceWrecker(int &alias)
{
	alias += 9000;
}

void constWrecker(const int &alias)
{
	//alias += 10;
	//even though we used pass by reference, we decided to make it constant for the 
	//duration of the function, so some reason thats beyond me
	//so now we cant change it. So why the hell did we pass by reference then? why would it matter
	//if it were a copy or not. just sayin
}

string* stringBuilder(){
	string *sPtr = new string; //dynamically builds a string

	int x = 7; 
	//return &x;//bad, don't do it, x dies at the end of the brackets. Use dynamic memory
	//as dynamic memory sits outside of scope. Meaning it exists till we tell it to die

	*sPtr = "Muhamad";

	return sPtr;
}

void main(){

	int z = sum(3.6,5.6);//copies 3 and 5 into a and b inside function sum
	//z is equal to whatever result sum returns

	cout<<z<<endl;

	int me = 7;
	int result = wrecker(me); //copies value in, but doesn't pass in variable directly
	cout<<me<<" vs "<<result<<endl;//note how variable me is not wrecked, is still 7
	//thats pass by value

	actualWrecker(&me);//copies the mem address of variable me over to ptr in actualWrecker
	//so actualWrecker is actually changing the value of 'me' through pointers, even though
	//its pass by value
	cout<<me<<endl;

	int *newInt = new int(4); //make a new int with initial value 4
	actualWrecker(newInt); //still pass by value with pointers, 
	//but we are copying the memory address from newInt over to ptr in function actualWrecker.
	//So it will actually change the value of what newInt points to
	cout<<*newInt<<endl;

	double myAwesomeArray[] = {234.4, 435.456, 3, 4.5, 7.7};
	arrayWrecker(myAwesomeArray, 5);
	for(int i = 0; i < 5; i++)
		cout<<myAwesomeArray[i]<<endl;
	//so you'll see all the values in our array have changed, even though it looks like a basic
	//pass by value function notation. But with arrays, they are sort of like treated like
	//pointers. So when we pass arrays around, they actually pass arrays around and not copies


	int buddy = 3;
	referenceWrecker(buddy);
	cout<<buddy<<endl;
	//Note: buddy has changed in value, so pass by reference meant we passed the actual variable
	//buddy in and it temporarily took the name of alias for the duration of the function
	//TL:DR; we actually passed in buddy, so it changed

	const float PI = 3.14159;

	//PI = 7; cant change me :(

	string *myHero = stringBuilder();
	cout<<*myHero<<endl;

	delete myHero; //harsh

	system("pause");
}