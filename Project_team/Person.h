#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Person
{
private:
	string m_Name;
	string m_DoB;
	string m_Nationality;
	string m_ID;
	double m_Salary;
	
public:
	Person();
	Person(string, string, string, string, double);

	virtual ~Person();

	virtual void setSalary(double );
	virtual void Input();
	virtual void Output();

	virtual string getName();
	virtual string getID();
	virtual double getSalary();

};