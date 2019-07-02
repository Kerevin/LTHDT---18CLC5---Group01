#include"Stadium.h"

//Constructor:
Stadium::Stadium()
{
	m_Name = "";
	m_Address = "";
	m_Kind = "";
	m_Capacity = 0;
}

Stadium::Stadium(string name)
{
	m_Name = name;
}

Stadium::Stadium(string name, string add)
{
	m_Name = name;
	m_Address = add;
}

Stadium::Stadium(string name, string add, string kind)
{
	m_Name = name;
	m_Address = add;
	m_Kind = kind;
}

Stadium::Stadium(string name, string add, string kind, double capacity)
{
	m_Name = name;
	m_Address = add;
	m_Kind = kind;
	m_Capacity = capacity;
}

//Function:
void Stadium::Input()
{
	cout << "Enter Stadium's Name: ";
	getline(cin, m_Name);
	cout << "Enter Stadium's Address: ";
	getline(cin, m_Address);
	cout << "Enter Stadium's Kind: ";
	getline(cin,m_Kind);
	cout << "Enter Stadium's capacity: ";
	cin >> m_Capacity;
}

void Stadium::Output()
{
	cout << "Information of " << m_Name << " is: " << endl;
	cout << "Address: " << m_Address << endl;
	cout << "Kind: " << m_Kind << endl;
	cout << "Capacity: " << m_Capacity << endl;
}

void Stadium::setName(string name)
{
	m_Name = name;
}

void Stadium::setAddress(string add)
{
	m_Address = add;
}

void Stadium::setKind(string kind)
{
	m_Kind = kind;
}

void Stadium::setCapacity(double capacity)
{
	m_Capacity = capacity;
}