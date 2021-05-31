#include <iostream>
#include <string>

using namespace std;

int main()
{
    string myName;
    int myId;

    cout << "Please enter your name:\n";
    cin >> myName;
    cout << "Please enter your student id:\n";
    cin >> myId;
    cout << "Your name is " << myName << " and your student ID is " << myId << "\n";

    string yourName;
	string yourSurname;

	cout << "Please enter your name:";
	cin >> yourName;
	cout << "Please enter your family name:";
	cin >> yourSurname;

    cout << "Your name is " << yourName << " and your family name is " << yourSurname << "\n";

	cout << &yourName << endl;
	cout << &yourSurname << endl;
}