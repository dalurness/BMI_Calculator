#ifndef PERSON_H
#define PERSON_H

class Person
{
	//This class stores the information of a person that wants to keep track of their BMI
public:
	Person();
	Person(string name, int age, double height, double weight);
	string getPersonName();
	void setPersonName(string newName);
	int getPersonAge();
	void setPersonAge(int newAge);
	double getPersonHeight();
	void setPersonHeight(double newHeight);
	double getPersonWeight();
	void setPersonWeight(double newWeight);
	double getBmi();
	void savePerson(ofstream& outFS);
	void printData();
	void printInfo();
private:
	string name;
	int age;
	double height;
	double weight;
	double bmi;
};

#endif 
