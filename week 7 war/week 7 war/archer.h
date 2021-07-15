#include <iostream>
#include <string>
#include <stdio.h>

#ifndef ARCHER
#define ARCHER

class Archer{
	private:
		int accuracy;
	public:
		Archer();
		bool shootArrow();
};

#endif