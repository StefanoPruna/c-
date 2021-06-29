
#include <iostream>
#include <string>

using namespace std;

void myFactorial(int numb)
{
	static int nFactorial = numb;
	
	for (int i = numb - 1; i > 0; i--)
	{
		nFactorial *= i;
	}

	cout << "The factorial number of " << numb << " is " << nFactorial << "\n";
	

	/*I have tried to do a recursive function, but it doesn't work
	int n;
	if (numb == 0)
		return 1;
	else
		n = numb * myFactorial(numb - 1);

	cout << n;
	*/
}

int mainTwo()
{
	int numb;

	cout << "Choose the number of factorial to perform:\n";
	cin >> numb;

	myFactorial(numb);

	return 0;
}