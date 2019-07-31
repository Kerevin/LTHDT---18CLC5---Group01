#include "Person.h"

Person::Person()
{
	 m_Name = "Unknown";
	 m_DoB = "Unknown";
	 m_Nationality = "Unknown";
	 m_ID = "Unknown";
	 m_Salary = 0;
}

Person::~Person()
{

}

void Person::setSalary(double salaray)
{
	m_Salary = salaray;
}
void Person::setName(string n)
{
	m_Name = n;
}
void Person::setNationality(string n)
{
	m_Nationality = n;
}

void Person::setDOB(string d)
{
	m_DoB = d;
}
void Person::setID(string id) {
	m_ID = id;
}
void Person::Input()
{
	cout << "Enter name: ";
	getline(cin, m_Name);

	cout << "Enter date of birth: ";
	getline(cin, m_DoB);

	cout << "Enter nationality: ";
	getline(cin, m_Nationality);

	cout << "Enter ID number: ";
	getline(cin, m_ID);

	cout << "Enter current salary: ";
	cin >> m_Salary;
	cin.ignore();
}

void Person::Output()
{
	cout << "Name: " << m_Name << endl;
	cout << "Date of birth: " << m_DoB << endl;
	cout << "ID number: " << m_ID << endl;
	cout << "Nationality: " << m_Nationality << endl;
	cout << fixed << setprecision(0) << endl;
	cout << "Current salary: " << m_Salary << endl;
}

string Person::getName()
{
	return m_Name;
}
string Person::getDOB()
{
	return m_DoB;
}
string Person::getID()
{
	return m_ID;
}
double Person::getSalary()
{
	return m_Salary;
}
string Person::getNationality()
{
	return m_Nationality;
}

