#include "Person.h"

Person::Person()
{
	 m_Name = "Unknown";
	 m_DoB = "Unknown";
	 m_Nationality = "Unknown";
	 m_ID = "Unknown";
	 m_Salary = 0;
}
Person::Person(string n, string d, string na, string id, double salary)
{
	m_Name = n;
	m_DoB = d;
	m_Nationality = na;
	m_ID = id;
	m_Salary = salary;
}

Person::~Person()
{

}

void Person::setSalary(double salaray)
{
	m_Salary = salaray;
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

string Person::getID()
{
	return m_ID;
}
double Person::getSalary()
{
	return m_Salary;
}

