<<<<<<< HEAD
#pragma once
=======
>>>>>>> ecd0fd316b0ef9e8955976e47bc6a0999a5b3b2e
#include<iostream>
#include<string>

using namespace std;

class STD //Class Stadium
{
private:
	string m_Name;
	string m_Address;
	string m_Kind;
<<<<<<< HEAD
	double m_Capacity;
public:
	//Constructor:

=======
	double m_Size;
public:
	//Constructor:
>>>>>>> ecd0fd316b0ef9e8955976e47bc6a0999a5b3b2e
	STD();
	STD(string name);
	STD(string name, string add);
	STD(string name, string add, string kind);
<<<<<<< HEAD
	STD(string name, string add, string kind, double capacity);

=======
	STD(string name, string add, string kind, double size);
>>>>>>> ecd0fd316b0ef9e8955976e47bc6a0999a5b3b2e
	//Function:
	void input();
	void output();
	void setName(string name);
	void setAddress(string add);
	void setKind(string kind);
<<<<<<< HEAD
	void setCapacity(double capacity);
=======
	void setSize(double size);
	bool checkQuality();
>>>>>>> ecd0fd316b0ef9e8955976e47bc6a0999a5b3b2e
};