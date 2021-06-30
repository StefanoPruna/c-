#include <iostream>
#include <string>

using namespace std;

void myFibonacci(int numb)
{
	int numbOne = 0;
	int numbTwo = 1;
	int checkNumber = numb;

	for (int i = 1; i < checkNumber; i++)
	{
		numb = numbOne + numbTwo;
		numbOne = numbTwo;
		numbTwo = numb;
	}

	cout << numb;
}

int main()
{
	int numb;

	cout << "Choose a number to perform the Fibonacci's sequence:\n";
	cin >> numb;

	myFibonacci(numb);

	return 0;
}