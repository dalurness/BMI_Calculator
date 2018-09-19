#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#include "BMI_calculator.h"

Person::Person(string newName, int newAge, double newHeight, double newWeight)
{

	//initialize attributes
	name = newName;
	age = newAge;
	height = newHeight;
	weight = newWeight;
}

//create get and set functions for the Person's attributes
string Person::getPersonName()
{
	return name;
}

void Person::setPersonName(string newName)
{
	name = newName;
}

int Person::getPersonAge()
{
	return age;
}

void Person::setPersonAge(int newAge)
{
	age = newAge;
}

double Person::getPersonHeight()
{
	return height;
}

void Person::setPersonHeight(double newHeight)
{
	height = newHeight;
}

double Person::getPersonWeight()
{
	return weight;
}

void Person::setPersonWeight(double newWeight)
{
	weight = newWeight;
}
