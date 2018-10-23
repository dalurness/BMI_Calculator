//BMI_calculator
//this program calculates the BMI of a person and provides the ability to save their information to a txt file.

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

#include "calculatorFunctions.h"
#include "person.h"

int main()
{
	bool keepGoing{ true };
	bool dontKeepGoing{ false };
	int decision;
	string stringDecision;


	//Introduce the program
	cout << "This program will calculate your Body Mass Index. In order to do so, it will intake your height and weight." << endl;
	cout << "If you would like to save the information, then that option will be provided." << endl << endl;


	while (keepGoing)
	{
		while (true)
		{
			//Allow the user to choose what they would like to do.
			cout << "If you would like to only calculate your BMI once, press 1." << endl;
			cout << "If you would like to calculate your BMI and be able to access it again, press 2." << endl;
			cout << "If you would like to access your past information, press 3." << endl;
			cout << "If you would like to modify your past information, press 4." << endl;
			cout << "To close the program, press 5" << endl << endl;
			cout << "What would you like to do? ";
			cin >> stringDecision;
			cout << endl << endl;
			if (stringDecision == "1" || stringDecision == "2" || stringDecision == "3" || stringDecision == "4" || stringDecision == "5")
			{
				decision = stoi(stringDecision);
				break;
				
			}
			else
			{
				cout << "Please enter a valid command." << endl << endl;
			}
		}

		switch (decision)
		{
			//calculate BMI once
		case 1 :
			calcBmiOnce();
			break;
		case 2:
			createPerson();
			break;
		case 3:
			getDisplayPastInfo();
			break;
		case 4:
			modifyInformation();
			break;
			cout << "Information has been saved" << endl << endl;
		case 5:
			cout << "case 5" << endl << endl;
			keepGoing = dontKeepGoing;
			break;
		}

	}

	return 0;
}

