#include<iostream>
#include<string>

using namespace std;

class STD //Class Stadium
{
private:
	string m_Name;
	string m_Address;
	string m_Kind;
	double m_Size;
public:
	//Constructor:
	STD();
	STD(string name);
	STD(string name, string add);
	STD(string name, string add, string kind);
	STD(string name, string add, string kind, double size);
	//Function:
	void input();
	void output();
	void setName(string name);
	void setAddress(string add);
	void setKind(string kind);
	void setSize(double size);
	bool checkQuality();
};