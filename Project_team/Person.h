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
	~Person();

	void Input();
	void Output();

	void setName(string);
	void setDoB(string);
	void setNationality(string);
	void setID(string);
	void setSalary(double);

	string getName();
	string getDoB();
	string getNationality();
	string getID();
	double getSalary();

};