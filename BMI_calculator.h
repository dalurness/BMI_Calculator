#ifndef BMI_CALCULATOR_H
#define BMI_CALCULATOR_H

class Person
{
	//This class stores the information of a person that wants to keep track of their BMI
public:
	Person(string name, int age, double height, double weight);
	string getPersonName();
	void setPersonName(string newName);
	int getPersonAge();
	void setPersonAge(int newAge);
	double getPersonHeight();
	void setPersonHeight(double newHeight);
	double getPersonWeight();
	void setPersonWeight(double newWeight);
private:
	string name;
	int age;
	double height;
	double weight;
};

#endif 