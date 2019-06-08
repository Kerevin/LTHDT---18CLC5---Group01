#include"Stadium.h"
<<<<<<< HEAD

=======
>>>>>>> ecd0fd316b0ef9e8955976e47bc6a0999a5b3b2e
//Constructor:
STD::STD()
{
	m_Name = "";
	m_Address = "";
	m_Kind = "";
<<<<<<< HEAD
	m_Capacity = 0;
=======
	m_Size = 0;
>>>>>>> ecd0fd316b0ef9e8955976e47bc6a0999a5b3b2e
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

<<<<<<< HEAD
STD::STD(string name, string add, string kind, double capacity)
=======
STD::STD(string name, string add, string kind, double size)
>>>>>>> ecd0fd316b0ef9e8955976e47bc6a0999a5b3b2e
{
	m_Name = name;
	m_Address = add;
	m_Kind = kind;
<<<<<<< HEAD
	m_Capacity = capacity;
=======
	m_Size = size;
>>>>>>> ecd0fd316b0ef9e8955976e47bc6a0999a5b3b2e
}

//Function:
void STD::input()
{
<<<<<<< HEAD
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
=======
	cin.ignore();
	cout << "Enter Stadium's Name: ";
	getline(cin, m_Name);
	cout << "Enter Stadium's Address: ";
	getline(cin, m_Address);
	cout << "Enter Stadium's Kind: ";
	getline(cin, m_Address);
	cout << "Enter Stadium's Size: ";
	cin >> m_Size;
>>>>>>> ecd0fd316b0ef9e8955976e47bc6a0999a5b3b2e
}

void STD::output()
{
	cin.ignore();
	cout << "Information of " << m_Name << " is: " << endl;
	cout << "Address: " << m_Address << endl;
	cout << "Kind: " << m_Kind << endl;
<<<<<<< HEAD
	cout << "Capacity: " << m_Capacity << endl;
=======
	cout << "Size: " << m_Size << endl;
>>>>>>> ecd0fd316b0ef9e8955976e47bc6a0999a5b3b2e
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

<<<<<<< HEAD
void STD::setCapacity(double capacity)
{
	m_Capacity = capacity;
=======
void STD::setSize(double size)
{
	m_Size = size;
>>>>>>> ecd0fd316b0ef9e8955976e47bc6a0999a5b3b2e
}