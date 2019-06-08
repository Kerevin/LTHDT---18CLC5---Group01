#include"Stadium.h"
//Constructor:
STD::STD()
{
	m_Name = "";
	m_Address = "";
	m_Kind = "";
	m_Size = 0;
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

STD::STD(string name, string add, string kind, double size)
{
	m_Name = name;
	m_Address = add;
	m_Kind = kind;
	m_Size = size;
}

//Function:
void STD::input()
{
	cin.ignore();
	cout << "Enter Stadium's Name: ";
	getline(cin, m_Name);
	cout << "Enter Stadium's Address: ";
	getline(cin, m_Address);
	cout << "Enter Stadium's Kind: ";
	getline(cin, m_Address);
	cout << "Enter Stadium's Size: ";
	cin >> m_Size;
}

void STD::output()
{
	cin.ignore();
	cout << "Information of " << m_Name << " is: " << endl;
	cout << "Address: " << m_Address << endl;
	cout << "Kind: " << m_Kind << endl;
	cout << "Size: " << m_Size << endl;
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

void STD::setSize(double size)
{
	m_Size = size;
}