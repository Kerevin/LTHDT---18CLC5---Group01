#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Person
{
protected:
	string m_Name;
	string m_DoB;
	string m_Nationality;
	string m_ID;
	double m_Salary;
	
public:
	Person();


	virtual ~Person();
	virtual void setName(string);
	virtual void setNationality(string);
	virtual void setSalary(double );
	virtual void setDOB(string);
	virtual void setID(string);
	virtual void Input();
	virtual void Output();

	virtual string getName();
	virtual string getID();
	virtual double getSalary();
	virtual string getNationality();
	virtual string getDOB();
};