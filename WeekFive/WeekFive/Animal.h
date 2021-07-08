#pragma once

#include <string>

using namespace std;

class Animal
{
public:
	string name;
	int age;

	void run();

private:
	string validateOwner;
};

void Animal::run()
{
	cout << "run\n";
	validateOwner = "Luke";
}

class Dog : public Animal
{
public:
	string breed;
};

class Cat : public Animal
{
public:
	string colour;
};

