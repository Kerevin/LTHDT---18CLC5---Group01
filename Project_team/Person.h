#pragma once
#include <string>
#include <iostream>
#include <vector>
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
	Person(string, string, string);
	Person(string, string);
	Person(string);
	Person(const Person &);
	virtual ~Person();

	virtual void Input();
	virtual void Output();

	virtual void setName(string);
	virtual void setDoB(string);
	virtual void setNationality(string);
	virtual void setID(string);
	virtual void setSalary(double);

	virtual string getName();
	virtual string getDoB();
	virtual string getNationality();
	virtual string getID();
	virtual double getSalary();

};