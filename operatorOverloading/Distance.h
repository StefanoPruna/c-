#pragma once
#include <iostream>
#include <string>

using namespace std;

class Distance
{
	double lengthInMm = 0;
public:
	void setDistanceInMilliMeters(double lengthInMm)
	{
		this->lengthInMm = lengthInMm;
	}
	void printDistance()
	{
		cout << lengthInMm << " mm\n";
		cout << lengthInMm / 10 << " cm\n";
		cout << lengthInMm / 1000 << " m\n";
		cout << lengthInMm / 10000 << " km\n";
	}

	Distance operator + (Distance existingDistance)
	{
		Distance newDistance;
		newDistance.lengthInMm = lengthInMm + existingDistance.lengthInMm;
		return newDistance; //d3 = d1+d2
	}
};

