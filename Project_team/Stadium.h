#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Stadium 
{
private:
	string m_Name;
	string m_Address;
	string m_Kind;
	double m_Capacity;
public:
	//Constructor:
	Stadium();
	Stadium(string name);
	Stadium(string name, string add);
	Stadium(string name, string add, string kind);
	Stadium(string name, string add, string kind, double capacity);
	//Function:
	void Input();
	void Output();
	void setName(string name);
	void setAddress(string add);
	void setKind(string kind);
	void setCapacity(double capacity);

};