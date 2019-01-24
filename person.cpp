#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std::cout;
using namespace std::cin;
using namespace std::endl;
using namespace std::string;

#include "person.h"

Person::Person()
{
	name = "";
	age = NULL;
	height = NULL;
	weight = NULL;
	bmi = NULL;
}

Person::Person(string newName, int newAge, double newHeight, double newWeight)
{

	//initialize attributes
	name = newName;
	age = newAge;
	height = newHeight;
	weight = newWeight;
	bmi = weight / (height * height) * 703;
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

double Person::getBmi()
{
	return bmi;
}

void Person::savePerson(ofstream& outFS)
{
	string file = name + ".txt";
	outFS.open(file);
	outFS << name << endl;
	outFS << age << endl;
	outFS << height << endl;
	outFS << weight << endl;
	outFS << bmi << endl;
	
	outFS.close();

	cout << endl << endl << endl << endl;

	printData();

	cout << endl << "Information has been saved" << endl << endl << endl << endl;

}

void Person::printData()
{

	if (bmi < 15)
	{
		cout << "Your BMI is " << setprecision(4) << bmi << " and your status is " << "Very Severely Underweight";
		cout << "." << endl << endl;
	}

	else if (bmi < 16)
	{
		cout << "Your BMI is " << setprecision(4) << bmi << " and your status is " << "Severely Underweight";
		cout << "." << endl << endl;
	}

	else if (bmi < 18.5)
	{
		cout << "Your BMI is " << setprecision(4) << bmi << " and your status is " << "Underweight";
		cout << "." << endl << endl;
	}

	else if (bmi < 25)
	{
		cout << "Your BMI is " << setprecision(4) << bmi << " and your status is " << "Normal (Healthy Weight)";
		cout << "." << endl << endl;
	}

	else if (bmi < 30)
	{
		cout << "Your BMI is " << setprecision(4) << bmi << " and your status is " << "Overweight";
		cout << "." << endl << endl;
	}

	else if (bmi < 35)
	{
		cout << "Your BMI is " << setprecision(4) << bmi << " and your status is " << "Moderately Obese";
		cout << "." << endl << endl;
	}

	else if (bmi < 40)
	{
		cout << "Your BMI is " << setprecision(4) << bmi << " and your status is " << "Severely Obese";
		cout << "." << endl << endl;
	}

	else
	{
		cout << "Your BMI is " << setprecision(4) << bmi << " and your status is " << "Very Severely Obese";
		cout << "." << endl << endl;
	}
}

void Person::printInfo()
{
	cout << "Name: " << name << endl << "Age: " << age << endl << "Height: " << height << endl << "Weight: " << weight << endl;
}
