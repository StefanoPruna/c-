#include <iostream>
#include <string>

using namespace std;

void myFibonacci(int numb)
{
	numb = (numb - 1) + (numb - 2);

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