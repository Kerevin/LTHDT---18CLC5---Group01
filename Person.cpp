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
Person::Person(string n, string d, string na)
{
	m_Name = n;
	m_DoB = d;
	m_Nationality = na;
	m_ID = "Unknown";
	m_Salary = 0;
}
Person::Person(string n, string id)
{
	m_Name = n;
	m_DoB = "Unknown";
	m_Nationality = "Unknown";
	m_ID = id;
	m_Salary = 0;
}
Person::Person(string n)
{
	m_Name = n;
	m_DoB = "Unknown";
	m_Nationality = "Unknown";
	m_ID = "Unknown";
	m_Salary = 0;
}
Person::Person(const Person &p)
{
	m_Name = p.m_Name;
	m_DoB = p.m_DoB;
	m_Nationality = p.m_Nationality;
	m_ID = p.m_ID;
	m_Salary = p.m_Salary;
}
Person::~Person()
{

}

void Person::input()
{
	cout << "Enter name: ";
	cin.ignore();
	getline(cin, m_Name);

	cout << "Enter date of birth: ";
	cin.ignore();
	getline(cin, m_DoB);

	cout << "Enter nationality: ";
	cin.ignore();
	getline(cin, m_Nationality);

	cout << "Enter ID number: ";
	cin.ignore();
	getline(cin, m_ID);

	cout << "Enter current salary: ";
	cin >> m_Salary;
}
void Person::output()
{
	cout << "Name: " << m_Name << endl;
	cout << "Date of birth: " << m_DoB << endl;
	cout << "ID number: " << m_ID << endl;
	cout << "Nationality: " << m_Nationality << endl;
	cout << "Current salary: " << m_Salary << endl;
}

void Person::setName(string n)
{
	m_Name = n;
}
void Person::setDoB(string n)
{
	m_DoB = n;
}
void Person::setNationality(string n)
{
	m_Nationality = n;
}
void Person::setID(string n)
{
	m_ID = n;
}
void Person::setSalary(double s)
{
	m_Salary = s;
}
// void setTeam();

string Person::getName()
{
	return m_Name;
}
string Person::getDoB()
{
	return m_DoB;
}
string Person::getNationality()
{
	return m_Nationality;
}
string Person::getID()
{
	return m_ID;
}
double Person::getSalary()
{
	return m_Salary;
}
// Team& Person::getTeam();

double Person::calcSalary()
{
	return m_Salary;
}
