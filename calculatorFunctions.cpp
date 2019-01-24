#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std::cout;
using namespace std::cin;
using namespace std::endl;
using namespace std::string;
#include "person.h"
#include "calculatorFunctions.h"

void createPerson()
{
	ofstream outFS;
	string BmiStatus;
	string newName;
	int newAge;
	double newHeight;
	double newWeight;

	cout << "Please enter your name: ";
	cin >> newName;
	cout << endl << endl << "Please enter your age: ";
	cin >> newAge;
	cout << endl << endl << "Please enter your height in inches (5ft is 60 inches, 6ft is 72 inches): ";
	cin >> newHeight;
	cout << endl << endl << "Please enter your weight in lbs: ";
	cin >> newWeight;
	cout << endl << endl;
	Person* newPerson = new Person(newName, newAge, newHeight, newWeight);
	newPerson->savePerson(outFS);
	delete newPerson;
}

void calcBmiOnce() {
	double onceBmiHeight;
	double onceBmiWeight;
	double onceBmi;
	cout << "Please enter your height in inches (5ft is 60 inches, 6ft is 72 inches): ";
	cin >> onceBmiHeight;
	cout << endl << "Please enter your weight in lbs: ";
	cin >> onceBmiWeight;
	cout << endl << endl;

	onceBmi = onceBmiWeight / (onceBmiHeight * onceBmiHeight) * 703;

	if (onceBmi < 15)
	{
		cout << "Your BMI is " << setprecision(4) << onceBmi << " and your status is " << "Very Severely Underweight";
		cout << "." << endl << endl;
	}

	else if (onceBmi < 16)
	{
		cout << "Your BMI is " << setprecision(4) << onceBmi << " and your status is " << "Severely Underweight";
		cout << "." << endl << endl;
	}

	else if (onceBmi < 18.5)
	{
		cout << "Your BMI is " << setprecision(4) << onceBmi << " and your status is " << "Underweight";
		cout << "." << endl << endl;
	}

	else if (onceBmi < 25)
	{
		cout << "Your BMI is " << setprecision(4) << onceBmi << " and your status is " << "Normal (Healthy Weight)";
		cout << "." << endl << endl;
	}

	else if (onceBmi < 30)
	{
		cout << "Your BMI is " << setprecision(4) << onceBmi << " and your status is " << "Overweight";
		cout << "." << endl << endl;
	}

	else if (onceBmi < 35)
	{
		cout << "Your BMI is " << setprecision(4) << onceBmi << " and your status is " << "Moderately Obese";
		cout << "." << endl << endl;
	}

	else if (onceBmi < 40)
	{
		cout << "Your BMI is " << setprecision(4) << onceBmi << " and your status is " << "Severely Obese";
		cout << "." << endl << endl;
	}

	else
	{
		cout << "Your BMI is " << setprecision(4) << onceBmi << " and your status is " << "Very Severely Obese";
		cout << "." << endl << endl;
	}
}

void getDisplayPastInfo()
{
	ifstream inFS;
	string pastName;
	string pastFile;

	while (true) {
		cout << "Please enter your name: ";
		cin >> pastName;
		pastFile = pastName + ".txt";
		inFS.open(pastFile);

		if (!inFS.is_open())
		{
			cout << endl << endl << "Either your information has not yet been put into the system, or your name was not typed as saved." << endl;
			cout << "Enter '1' to try again, or '2' to exit.";
			string answer;
			cin >> answer;
			if (answer == "1") 
			{
				//do nothing and run it again
			}
			else if (answer == "2")
			{
				cout << endl << endl;
				return;
			}
			else
			{
				cout << "You did not enter a valid digit, so you are just going to have to try again." << endl << endl;
				cin.clear();
				cin.ignore(100);
			}
		}
		else
		{
			break;
		}
	}
	string name;
	int age;
	int height;
	int weight;
	Person* pastPerson;
	inFS >> name;
	inFS >> age;
	inFS >> height;
	inFS >> weight;

	pastPerson = new Person(name, age, height, weight);
	pastPerson->printInfo();
	pastPerson->printData();
	delete pastPerson;
}

void modifyInformation()
{
	createPerson();
}
