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

	Stadium();

	Stadium(string name, string add, string kind, double capacity);

	void Input();
	void Output();


};