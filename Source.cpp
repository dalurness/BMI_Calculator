//BMI_calculator
//this program calculates the BMI of a person and provides the ability to save their information to a txt file.

#include <iostream>
#include <string>

using namespace std;


int main()
{
	bool keepGoing{ true };
	bool dontKeepGoing{ false };
	int decision;
	double onceBmiHeight;
	double onceBmiWeight;
	double Bmi;
	string BmiStatus;
	string newName;
	int newAge;
	double newHeight;
	double newWeight;

	//Introduce the program
	cout << "This program will calculate your Body Mass Index. In order to do so, it will intake your height and weight." << endl;
	cout << "If you would like to save the information, then that option will be provided." << endl << endl;


	while (keepGoing)
	{
		//Allow the user to choose what they would like to do.
		cout << "If you would like to only calculate your BMI once, press 1." << endl;
		cout << "If you would like to calculate your BMI and be able to access it again, press 2." << endl;
		cout << "If you would like to access your past information, press 3." << endl;
		cout << "If you would like to modify your past information, press 4." << endl;
		cout << "To close the program, press 5" << endl << endl;
		cout << "What would you like to do? ";
		cin >> decision;
		cout << endl << endl;
		

		switch (decision)
		{
			//calculate BMI once
		case 1 :
			cout << "Please enter your height in inches (5ft is 60 inches, 6ft is 72 inches): ";
			cin >> onceBmiHeight;
			cout << endl << "Please enter your weight in lbs: ";
			cin >> onceBmiWeight;
			cout << endl << endl;
			
			Bmi = onceBmiWeight / (onceBmiHeight * onceBmiHeight) * 703;

			if (Bmi < 15)
			{
				cout << "Your BMI is " << Bmi << " and your status is " << "Very Severely Underweight";
				cout << "." << endl << endl;
			}

			else if (Bmi < 16)
			{
				cout << "Your BMI is " << Bmi << " and your status is " << "Severely Underweight";
				cout << "." << endl << endl;
			}

			else if (Bmi < 18.5)
			{
				cout << "Your BMI is " << Bmi << " and your status is " << "Underweight";
				cout << "." << endl << endl;
			}

			else if (Bmi < 25)
			{
				cout << "Your BMI is " << Bmi << " and your status is " << "Normal (Healthy Weight)";
				cout << "." << endl << endl;
			}

			else if (Bmi < 30)
			{
				cout << "Your BMI is " << Bmi << " and your status is " << "Overweight";
				cout << "." << endl << endl;
			}

			else if (Bmi < 35)
			{
				cout << "Your BMI is " << Bmi << " and your status is " << "Moderately Obese";
				cout << "." << endl << endl;
			}

			else if (Bmi < 40)
			{
				cout << "Your BMI is " << Bmi << " and your status is " << "Severely Obese";
				cout << "." << endl << endl;
			}

			else
			{
				cout << "Your BMI is " << Bmi << " and your status is " << "Very Severely Obese";
				cout << "." << endl << endl;
			}
			
			break;
		case 2:
			cout << "Please enter your name: ";
			cin >> newName;
			cout << endl << endl << "Please enter your age: ";
			cin >> newAge;
			cout << endl << endl << "Please enter your height in inches (5ft is 60 inches, 6ft is 72 inches): ";
			cin >> newHeight;
			cout << endl << endl << "Please enter your weight in lbs: ";
			cin >> newWeight;
			cout << endl << endl;

			//start creating a new person, add them to a vector, and then print the information from the vector to a text file.

			break;
		case 3:
			cout << "case 3" << endl << endl;
			break;
		case 4:
			cout << "case 4" << endl << endl;
			break;
		case 5:
			cout << "case 5" << endl << endl;
			keepGoing = dontKeepGoing;
			break;
		}

	}

	return 0;
}

