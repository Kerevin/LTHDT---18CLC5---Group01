#include"Stadium.h"

//Constructor:
STD::STD()
{
	m_Name = "";
	m_Address = "";
	m_Kind = "";
	m_Capacity = 0;
}

STD::STD(string name)
{
	m_Name = name;
}

STD::STD(string name, string add)
{
	m_Name = name;
	m_Address = add;
}

STD::STD(string name, string add, string kind)
{
	m_Name = name;
	m_Address = add;
	m_Kind = kind;
}

STD::STD(string name, string add, string kind, double capacity)
{
	m_Name = name;
	m_Address = add;
	m_Kind = kind;
	m_Capacity = capacity;
}

//Function:
void STD::input()
{
	cout << "Enter Stadium's Name: ";
	cin.ignore();
	getline(cin, m_Name);
	cout << "Enter Stadium's Address: ";
	cin.ignore();
	getline(cin, m_Address);
	cout << "Enter Stadium's Kind: ";
	cin.ignore();
	getline(cin, m_Address);
	cout << "Enter Stadium's capacity: ";
	cin >> m_Capacity;
}

void STD::output()
{
	cin.ignore();
	cout << "Information of " << m_Name << " is: " << endl;
	cout << "Address: " << m_Address << endl;
	cout << "Kind: " << m_Kind << endl;
	cout << "Capacity: " << m_Capacity << endl;
}

void STD::setName(string name)
{
	m_Name = name;
}

void STD::setAddress(string add)
{
	m_Address = add;
}

void STD::setKind(string kind)
{
	m_Kind = kind;
}

void STD::setCapacity(double capacity)
{
	m_Capacity = capacity;
}