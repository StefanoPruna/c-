// movieStars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int movieStars = 0;
	int zeroStars = 0;
	int oneStars = 0;
	int twoStars = 0;
	int threeStars = 0;
	int fourStars = 0;

	while (movieStars >= 0)
	{
		cout << "Enter a value between 0 and 4 stars for the movie of the week award: \n";
		cin >> movieStars;
		if (movieStars > 4)
			cout << "You have enter the wrong input\n";
		else
		{
			if (movieStars == 0)
				zeroStars += 1;
			else if (movieStars == 1)
				oneStars += 1;
			else if (movieStars == 2)
				twoStars += 1;
			else if (movieStars == 3)
				threeStars += 1;
			else
				fourStars += 1;
		}
	}
	if (zeroStars > oneStars && zeroStars > twoStars && zeroStars > threeStars && zeroStars > fourStars)
		cout << "The average star rating for the movie of the week is 0\n";
	else if (oneStars > twoStars && oneStars > threeStars && oneStars > fourStars && oneStars > zeroStars)
		cout << "The average star rating for the movie of the week is 1\n";
	else if (twoStars > oneStars && twoStars > zeroStars && twoStars > threeStars && twoStars > fourStars)
		cout << "The average star rating for the movie of the week is 2\n";
	else if (threeStars > oneStars && threeStars > twoStars && threeStars > zeroStars && threeStars > fourStars)
		cout << "The average star rating for the movie of the week is 3\n";
	else if (fourStars > oneStars && fourStars > twoStars && fourStars > threeStars && fourStars > zeroStars)
		cout << "The average star rating for the movie of the week is 4\n";
}